#include "recomp.h"

/* OnInit @ 0x12cf1005 (5 bytes, 1 insns) */
void f_12cf1005(void) {
  FTRACE(0x12cf1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf1005 jmp 0x12cf1090 */
  f_12cf1090(); return;
}

/* thunk_FUN_10001030 @ 0x12cf100a (5 bytes, 1 insns) */
void f_12cf100a(void) {
  FTRACE(0x12cf100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf100a jmp 0x12cf1030 */
  f_12cf1030(); return;
}

/* ProcessScenary @ 0x12cf100f (5 bytes, 1 insns) */
void f_12cf100f(void) {
  FTRACE(0x12cf100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf100f jmp 0x12cf1540 */
  f_12cf1540(); return;
}

/* FUN_10001030 @ 0x12cf1030 (67 bytes, 26 insns) */
void f_12cf1030(void) {
  FTRACE(0x12cf1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf1030 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf1031 mov ebp, esp */
  EBP = (ESP);
  /* 12cf1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf1036 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf1037 push esi */
  push32((uint32_t)(ESI));
  /* 12cf1038 push edi */
  push32((uint32_t)(EDI));
  /* 12cf1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12cf103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12cf1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12cf1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cf1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1052 je 0x12cf1056 */
  if (C.zf) goto L_12cf1056;
  /* 12cf1054 jmp 0x12cf105b */
  goto L_12cf105b;
L_12cf1056:;
  /* 12cf1056 call 0x12cf1005 */
  push32(0x12cf105bu); f_12cf1005();
L_12cf105b:;
  /* 12cf105b mov eax, 1 */
  EAX = (0x1u);
  /* 12cf1060 pop edi */
  EDI = (pop32());
  /* 12cf1061 pop esi */
  ESI = (pop32());
  /* 12cf1062 pop ebx */
  EBX = (pop32());
  /* 12cf1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1068 call 0x12cf2ea0 */
  push32(0x12cf106du); f_12cf2ea0();
  /* 12cf106d mov esp, ebp */
  ESP = (EBP);
  /* 12cf106f pop ebp */
  EBP = (pop32());
  /* 12cf1070 ret 0xc */
  ESPCHK(0x12cf1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12cf1090 (950 bytes, 250 insns) */
void f_12cf1090(void) {
  FTRACE(0x12cf1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf1090 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf1091 mov ebp, esp */
  EBP = (ESP);
  /* 12cf1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf1096 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf1097 push esi */
  push32((uint32_t)(ESI));
  /* 12cf1098 push edi */
  push32((uint32_t)(EDI));
  /* 12cf1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12cf109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12cf10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12cf10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cf10a8 mov esi, esp */
  ESI = (ESP);
  /* 12cf10aa push 0x12d1b130 */
  push32((uint32_t)(0x12d1b130u));
  /* 12cf10af push 0x12d20440 */
  push32((uint32_t)(0x12d20440u));
  /* 12cf10b4 call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf10bau);
  /* 12cf10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf10bf call 0x12cf2ea0 */
  push32(0x12cf10c4u); f_12cf2ea0();
  /* 12cf10c4 mov esi, esp */
  ESI = (ESP);
  /* 12cf10c6 push 0x12d1b128 */
  push32((uint32_t)(0x12d1b128u));
  /* 12cf10cb push 0x12d20448 */
  push32((uint32_t)(0x12d20448u));
  /* 12cf10d0 call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf10d6u);
  /* 12cf10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf10db call 0x12cf2ea0 */
  push32(0x12cf10e0u); f_12cf2ea0();
  /* 12cf10e0 mov esi, esp */
  ESI = (ESP);
  /* 12cf10e2 push 0x12d1b120 */
  push32((uint32_t)(0x12d1b120u));
  /* 12cf10e7 push 0x12d20450 */
  push32((uint32_t)(0x12d20450u));
  /* 12cf10ec call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf10f2u);
  /* 12cf10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf10f7 call 0x12cf2ea0 */
  push32(0x12cf10fcu); f_12cf2ea0();
  /* 12cf10fc mov esi, esp */
  ESI = (ESP);
  /* 12cf10fe push 0x12d1b114 */
  push32((uint32_t)(0x12d1b114u));
  /* 12cf1103 push 0x12d20458 */
  push32((uint32_t)(0x12d20458u));
  /* 12cf1108 call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf110eu);
  /* 12cf110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1113 call 0x12cf2ea0 */
  push32(0x12cf1118u); f_12cf2ea0();
  /* 12cf1118 mov esi, esp */
  ESI = (ESP);
  /* 12cf111a push 0x12d1b10c */
  push32((uint32_t)(0x12d1b10cu));
  /* 12cf111f push 0x12d20460 */
  push32((uint32_t)(0x12d20460u));
  /* 12cf1124 call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf112au);
  /* 12cf112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf112f call 0x12cf2ea0 */
  push32(0x12cf1134u); f_12cf2ea0();
  /* 12cf1134 mov esi, esp */
  ESI = (ESP);
  /* 12cf1136 push 0x12d1b104 */
  push32((uint32_t)(0x12d1b104u));
  /* 12cf113b push 0x12d20468 */
  push32((uint32_t)(0x12d20468u));
  /* 12cf1140 call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf1146u);
  /* 12cf1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf114b call 0x12cf2ea0 */
  push32(0x12cf1150u); f_12cf2ea0();
  /* 12cf1150 mov esi, esp */
  ESI = (ESP);
  /* 12cf1152 push 0x12d1b0f4 */
  push32((uint32_t)(0x12d1b0f4u));
  /* 12cf1157 push 0x12d20470 */
  push32((uint32_t)(0x12d20470u));
  /* 12cf115c call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf1162u);
  /* 12cf1162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1167 call 0x12cf2ea0 */
  push32(0x12cf116cu); f_12cf2ea0();
  /* 12cf116c mov esi, esp */
  ESI = (ESP);
  /* 12cf116e push 0x12d1b0ec */
  push32((uint32_t)(0x12d1b0ecu));
  /* 12cf1173 push 0x12d20478 */
  push32((uint32_t)(0x12d20478u));
  /* 12cf1178 call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf117eu);
  /* 12cf117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1183 call 0x12cf2ea0 */
  push32(0x12cf1188u); f_12cf2ea0();
  /* 12cf1188 mov esi, esp */
  ESI = (ESP);
  /* 12cf118a push 0x12d1b0e4 */
  push32((uint32_t)(0x12d1b0e4u));
  /* 12cf118f push 0x12d20480 */
  push32((uint32_t)(0x12d20480u));
  /* 12cf1194 call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf119au);
  /* 12cf119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf119f call 0x12cf2ea0 */
  push32(0x12cf11a4u); f_12cf2ea0();
  /* 12cf11a4 mov esi, esp */
  ESI = (ESP);
  /* 12cf11a6 push 0x12d1b0dc */
  push32((uint32_t)(0x12d1b0dcu));
  /* 12cf11ab push 0x12d20430 */
  push32((uint32_t)(0x12d20430u));
  /* 12cf11b0 call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf11b6u);
  /* 12cf11b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf11bb call 0x12cf2ea0 */
  push32(0x12cf11c0u); f_12cf2ea0();
  /* 12cf11c0 mov esi, esp */
  ESI = (ESP);
  /* 12cf11c2 push 0x12d1b0d4 */
  push32((uint32_t)(0x12d1b0d4u));
  /* 12cf11c7 push 0x12d20428 */
  push32((uint32_t)(0x12d20428u));
  /* 12cf11cc call dword ptr [0x12d23468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23468))), 0x12cf11d2u);
  /* 12cf11d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf11d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf11d7 call 0x12cf2ea0 */
  push32(0x12cf11dcu); f_12cf2ea0();
  /* 12cf11dc mov esi, esp */
  ESI = (ESP);
  /* 12cf11de push 0x12d1b0cc */
  push32((uint32_t)(0x12d1b0ccu));
  /* 12cf11e3 push 0x12d203e0 */
  push32((uint32_t)(0x12d203e0u));
  /* 12cf11e8 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf11eeu);
  /* 12cf11ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf11f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf11f3 call 0x12cf2ea0 */
  push32(0x12cf11f8u); f_12cf2ea0();
  /* 12cf11f8 mov esi, esp */
  ESI = (ESP);
  /* 12cf11fa push 0x12d1b0c8 */
  push32((uint32_t)(0x12d1b0c8u));
  /* 12cf11ff push 0x12d203f0 */
  push32((uint32_t)(0x12d203f0u));
  /* 12cf1204 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf120au);
  /* 12cf120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf120f call 0x12cf2ea0 */
  push32(0x12cf1214u); f_12cf2ea0();
  /* 12cf1214 mov esi, esp */
  ESI = (ESP);
  /* 12cf1216 push 0x12d1b0c0 */
  push32((uint32_t)(0x12d1b0c0u));
  /* 12cf121b push 0x12d203e8 */
  push32((uint32_t)(0x12d203e8u));
  /* 12cf1220 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf1226u);
  /* 12cf1226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf122b call 0x12cf2ea0 */
  push32(0x12cf1230u); f_12cf2ea0();
  /* 12cf1230 mov esi, esp */
  ESI = (ESP);
  /* 12cf1232 push 0x12d1b0b8 */
  push32((uint32_t)(0x12d1b0b8u));
  /* 12cf1237 push 0x12d20400 */
  push32((uint32_t)(0x12d20400u));
  /* 12cf123c call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf1242u);
  /* 12cf1242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1247 call 0x12cf2ea0 */
  push32(0x12cf124cu); f_12cf2ea0();
  /* 12cf124c mov esi, esp */
  ESI = (ESP);
  /* 12cf124e push 0x12d1b0b0 */
  push32((uint32_t)(0x12d1b0b0u));
  /* 12cf1253 push 0x12d203f8 */
  push32((uint32_t)(0x12d203f8u));
  /* 12cf1258 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf125eu);
  /* 12cf125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1263 call 0x12cf2ea0 */
  push32(0x12cf1268u); f_12cf2ea0();
  /* 12cf1268 mov esi, esp */
  ESI = (ESP);
  /* 12cf126a push 0x12d1b0a4 */
  push32((uint32_t)(0x12d1b0a4u));
  /* 12cf126f push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf1274 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf127au);
  /* 12cf127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf127f call 0x12cf2ea0 */
  push32(0x12cf1284u); f_12cf2ea0();
  /* 12cf1284 mov esi, esp */
  ESI = (ESP);
  /* 12cf1286 push 0x12d1b098 */
  push32((uint32_t)(0x12d1b098u));
  /* 12cf128b push 0x12d20408 */
  push32((uint32_t)(0x12d20408u));
  /* 12cf1290 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf1296u);
  /* 12cf1296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf129b call 0x12cf2ea0 */
  push32(0x12cf12a0u); f_12cf2ea0();
  /* 12cf12a0 mov esi, esp */
  ESI = (ESP);
  /* 12cf12a2 push 0x12d1b08c */
  push32((uint32_t)(0x12d1b08cu));
  /* 12cf12a7 push 0x12d20420 */
  push32((uint32_t)(0x12d20420u));
  /* 12cf12ac call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf12b2u);
  /* 12cf12b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf12b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf12b7 call 0x12cf2ea0 */
  push32(0x12cf12bcu); f_12cf2ea0();
  /* 12cf12bc mov esi, esp */
  ESI = (ESP);
  /* 12cf12be push 0x12d1b088 */
  push32((uint32_t)(0x12d1b088u));
  /* 12cf12c3 push 0x12d20418 */
  push32((uint32_t)(0x12d20418u));
  /* 12cf12c8 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf12ceu);
  /* 12cf12ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf12d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf12d3 call 0x12cf2ea0 */
  push32(0x12cf12d8u); f_12cf2ea0();
  /* 12cf12d8 mov esi, esp */
  ESI = (ESP);
  /* 12cf12da push 0x12d1b07c */
  push32((uint32_t)(0x12d1b07cu));
  /* 12cf12df push 0x12d20488 */
  push32((uint32_t)(0x12d20488u));
  /* 12cf12e4 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf12eau);
  /* 12cf12ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf12ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf12ef call 0x12cf2ea0 */
  push32(0x12cf12f4u); f_12cf2ea0();
  /* 12cf12f4 mov esi, esp */
  ESI = (ESP);
  /* 12cf12f6 push 0x12d1b074 */
  push32((uint32_t)(0x12d1b074u));
  /* 12cf12fb push 0x12d204b8 */
  push32((uint32_t)(0x12d204b8u));
  /* 12cf1300 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf1306u);
  /* 12cf1306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf130b call 0x12cf2ea0 */
  push32(0x12cf1310u); f_12cf2ea0();
  /* 12cf1310 mov esi, esp */
  ESI = (ESP);
  /* 12cf1312 push 0x12d1b068 */
  push32((uint32_t)(0x12d1b068u));
  /* 12cf1317 push 0x12d204c0 */
  push32((uint32_t)(0x12d204c0u));
  /* 12cf131c call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf1322u);
  /* 12cf1322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1327 call 0x12cf2ea0 */
  push32(0x12cf132cu); f_12cf2ea0();
  /* 12cf132c mov esi, esp */
  ESI = (ESP);
  /* 12cf132e push 0x12d1b060 */
  push32((uint32_t)(0x12d1b060u));
  /* 12cf1333 push 0x12d204a8 */
  push32((uint32_t)(0x12d204a8u));
  /* 12cf1338 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf133eu);
  /* 12cf133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1343 call 0x12cf2ea0 */
  push32(0x12cf1348u); f_12cf2ea0();
  /* 12cf1348 mov esi, esp */
  ESI = (ESP);
  /* 12cf134a push 0x12d1b058 */
  push32((uint32_t)(0x12d1b058u));
  /* 12cf134f push 0x12d204b0 */
  push32((uint32_t)(0x12d204b0u));
  /* 12cf1354 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf135au);
  /* 12cf135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf135f call 0x12cf2ea0 */
  push32(0x12cf1364u); f_12cf2ea0();
  /* 12cf1364 mov esi, esp */
  ESI = (ESP);
  /* 12cf1366 push 0x12d1b04c */
  push32((uint32_t)(0x12d1b04cu));
  /* 12cf136b push 0x12d20498 */
  push32((uint32_t)(0x12d20498u));
  /* 12cf1370 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf1376u);
  /* 12cf1376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf137b call 0x12cf2ea0 */
  push32(0x12cf1380u); f_12cf2ea0();
  /* 12cf1380 mov esi, esp */
  ESI = (ESP);
  /* 12cf1382 push 0x12d1b044 */
  push32((uint32_t)(0x12d1b044u));
  /* 12cf1387 push 0x12d204a0 */
  push32((uint32_t)(0x12d204a0u));
  /* 12cf138c call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf1392u);
  /* 12cf1392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1397 call 0x12cf2ea0 */
  push32(0x12cf139cu); f_12cf2ea0();
  /* 12cf139c mov esi, esp */
  ESI = (ESP);
  /* 12cf139e push 0x12d1b040 */
  push32((uint32_t)(0x12d1b040u));
  /* 12cf13a3 push 0x12d20490 */
  push32((uint32_t)(0x12d20490u));
  /* 12cf13a8 call dword ptr [0x12d2346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2346c))), 0x12cf13aeu);
  /* 12cf13ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf13b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf13b3 call 0x12cf2ea0 */
  push32(0x12cf13b8u); f_12cf2ea0();
  /* 12cf13b8 mov esi, esp */
  ESI = (ESP);
  /* 12cf13ba push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cf13bf push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf13c1 call dword ptr [0x12d23470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23470))), 0x12cf13c7u);
  /* 12cf13c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf13ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf13cc call 0x12cf2ea0 */
  push32(0x12cf13d1u); f_12cf2ea0();
  /* 12cf13d1 mov esi, esp */
  ESI = (ESP);
  /* 12cf13d3 push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cf13d8 push 7 */
  push32((uint32_t)(0x7u));
  /* 12cf13da call dword ptr [0x12d23470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23470))), 0x12cf13e0u);
  /* 12cf13e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf13e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf13e5 call 0x12cf2ea0 */
  push32(0x12cf13eau); f_12cf2ea0();
  /* 12cf13ea mov esi, esp */
  ESI = (ESP);
  /* 12cf13ec push 0x12d1b038 */
  push32((uint32_t)(0x12d1b038u));
  /* 12cf13f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf13f3 call dword ptr [0x12d23474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23474))), 0x12cf13f9u);
  /* 12cf13f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf13fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf13fe call 0x12cf2ea0 */
  push32(0x12cf1403u); f_12cf2ea0();
  /* 12cf1403 mov esi, esp */
  ESI = (ESP);
  /* 12cf1405 push 0x12d1b028 */
  push32((uint32_t)(0x12d1b028u));
  /* 12cf140a push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf140c call dword ptr [0x12d23474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23474))), 0x12cf1412u);
  /* 12cf1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1417 call 0x12cf2ea0 */
  push32(0x12cf141cu); f_12cf2ea0();
  /* 12cf141c mov esi, esp */
  ESI = (ESP);
  /* 12cf141e push 0x12d1b01c */
  push32((uint32_t)(0x12d1b01cu));
  /* 12cf1423 push 7 */
  push32((uint32_t)(0x7u));
  /* 12cf1425 call dword ptr [0x12d23474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23474))), 0x12cf142bu);
  /* 12cf142b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf142e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1430 call 0x12cf2ea0 */
  push32(0x12cf1435u); f_12cf2ea0();
  /* 12cf1435 pop edi */
  EDI = (pop32());
  /* 12cf1436 pop esi */
  ESI = (pop32());
  /* 12cf1437 pop ebx */
  EBX = (pop32());
  /* 12cf1438 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf143b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf143d call 0x12cf2ea0 */
  push32(0x12cf1442u); f_12cf2ea0();
  /* 12cf1442 mov esp, ebp */
  ESP = (EBP);
  /* 12cf1444 pop ebp */
  EBP = (pop32());
  /* 12cf1445 ret  */
  ESPCHK(0x12cf1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001540 @ 0x12cf1540 (5049 bytes, 1475 insns) */
void f_12cf1540(void) {
  FTRACE(0x12cf1540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf1540 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf1541 mov ebp, esp */
  EBP = (ESP);
  /* 12cf1543 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf1546 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf1547 push esi */
  push32((uint32_t)(ESI));
  /* 12cf1548 push edi */
  push32((uint32_t)(EDI));
  /* 12cf1549 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12cf154c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12cf1551 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12cf1556 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cf1558 mov esi, esp */
  ESI = (ESP);
  /* 12cf155a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf155c call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1562u);
  /* 12cf1562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1567 call 0x12cf2ea0 */
  push32(0x12cf156cu); f_12cf2ea0();
  /* 12cf156c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1573 je 0x12cf17ce */
  if (C.zf) goto L_12cf17ce;
  /* 12cf1579 mov esi, esp */
  ESI = (ESP);
  /* 12cf157b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf157d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf157f call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1585u);
  /* 12cf1585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1588 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf158a call 0x12cf2ea0 */
  push32(0x12cf158fu); f_12cf2ea0();
  /* 12cf158f mov esi, esp */
  ESI = (ESP);
  /* 12cf1591 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 12cf1596 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf1598 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf159a call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf15a0u);
  /* 12cf15a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf15a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf15a5 call 0x12cf2ea0 */
  push32(0x12cf15aau); f_12cf2ea0();
  /* 12cf15aa mov esi, esp */
  ESI = (ESP);
  /* 12cf15ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12cf15ae push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf15b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf15b2 call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf15b8u);
  /* 12cf15b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf15bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf15bd call 0x12cf2ea0 */
  push32(0x12cf15c2u); f_12cf2ea0();
  /* 12cf15c2 mov esi, esp */
  ESI = (ESP);
  /* 12cf15c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf15c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf15c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf15ca call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf15d0u);
  /* 12cf15d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf15d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf15d5 call 0x12cf2ea0 */
  push32(0x12cf15dau); f_12cf2ea0();
  /* 12cf15da mov esi, esp */
  ESI = (ESP);
  /* 12cf15dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf15de push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf15e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf15e2 call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf15e8u);
  /* 12cf15e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf15eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf15ed call 0x12cf2ea0 */
  push32(0x12cf15f2u); f_12cf2ea0();
  /* 12cf15f2 mov esi, esp */
  ESI = (ESP);
  /* 12cf15f4 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cf15f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf15fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf15fd call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf1603u);
  /* 12cf1603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1608 call 0x12cf2ea0 */
  push32(0x12cf160du); f_12cf2ea0();
  /* 12cf160d mov esi, esp */
  ESI = (ESP);
  /* 12cf160f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cf1614 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf1616 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1618 call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf161eu);
  /* 12cf161e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1621 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1623 call 0x12cf2ea0 */
  push32(0x12cf1628u); f_12cf2ea0();
  /* 12cf1628 mov esi, esp */
  ESI = (ESP);
  /* 12cf162a push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12cf162f push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf1631 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1633 call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf1639u);
  /* 12cf1639 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf163c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf163e call 0x12cf2ea0 */
  push32(0x12cf1643u); f_12cf2ea0();
  /* 12cf1643 mov esi, esp */
  ESI = (ESP);
  /* 12cf1645 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12cf164a push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf164c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf164e call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf1654u);
  /* 12cf1654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1657 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1659 call 0x12cf2ea0 */
  push32(0x12cf165eu); f_12cf2ea0();
  /* 12cf165e mov esi, esp */
  ESI = (ESP);
  /* 12cf1660 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12cf1665 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf1667 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1669 call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf166fu);
  /* 12cf166f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1672 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1674 call 0x12cf2ea0 */
  push32(0x12cf1679u); f_12cf2ea0();
  /* 12cf1679 mov esi, esp */
  ESI = (ESP);
  /* 12cf167b push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12cf1680 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf1682 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1684 call dword ptr [0x12d23408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23408))), 0x12cf168au);
  /* 12cf168a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf168d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf168f call 0x12cf2ea0 */
  push32(0x12cf1694u); f_12cf2ea0();
  /* 12cf1694 mov esi, esp */
  ESI = (ESP);
  /* 12cf1696 push 0x12d1b4cc */
  push32((uint32_t)(0x12d1b4ccu));
  /* 12cf169b call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf16a1u);
  /* 12cf16a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf16a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf16a6 call 0x12cf2ea0 */
  push32(0x12cf16abu); f_12cf2ea0();
  /* 12cf16ab mov esi, esp */
  ESI = (ESP);
  /* 12cf16ad push 0x12d1b4c0 */
  push32((uint32_t)(0x12d1b4c0u));
  /* 12cf16b2 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf16b8u);
  /* 12cf16b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf16bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf16bd call 0x12cf2ea0 */
  push32(0x12cf16c2u); f_12cf2ea0();
  /* 12cf16c2 mov esi, esp */
  ESI = (ESP);
  /* 12cf16c4 push 0x12d1b4b4 */
  push32((uint32_t)(0x12d1b4b4u));
  /* 12cf16c9 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf16cfu);
  /* 12cf16cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf16d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf16d4 call 0x12cf2ea0 */
  push32(0x12cf16d9u); f_12cf2ea0();
  /* 12cf16d9 mov esi, esp */
  ESI = (ESP);
  /* 12cf16db push 0x12d1b4a8 */
  push32((uint32_t)(0x12d1b4a8u));
  /* 12cf16e0 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf16e6u);
  /* 12cf16e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf16e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf16eb call 0x12cf2ea0 */
  push32(0x12cf16f0u); f_12cf2ea0();
  /* 12cf16f0 mov esi, esp */
  ESI = (ESP);
  /* 12cf16f2 push 0x12d1b49c */
  push32((uint32_t)(0x12d1b49cu));
  /* 12cf16f7 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf16fdu);
  /* 12cf16fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1700 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1702 call 0x12cf2ea0 */
  push32(0x12cf1707u); f_12cf2ea0();
  /* 12cf1707 mov esi, esp */
  ESI = (ESP);
  /* 12cf1709 push 0x12d1b490 */
  push32((uint32_t)(0x12d1b490u));
  /* 12cf170e call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf1714u);
  /* 12cf1714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1719 call 0x12cf2ea0 */
  push32(0x12cf171eu); f_12cf2ea0();
  /* 12cf171e mov esi, esp */
  ESI = (ESP);
  /* 12cf1720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1722 push 0x12d20498 */
  push32((uint32_t)(0x12d20498u));
  /* 12cf1727 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf172du);
  /* 12cf172d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1732 call 0x12cf2ea0 */
  push32(0x12cf1737u); f_12cf2ea0();
  /* 12cf1737 mov esi, esp */
  ESI = (ESP);
  /* 12cf1739 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf173b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf173d call dword ptr [0x12d23414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23414))), 0x12cf1743u);
  /* 12cf1743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1748 call 0x12cf2ea0 */
  push32(0x12cf174du); f_12cf2ea0();
  /* 12cf174d mov esi, esp */
  ESI = (ESP);
  /* 12cf174f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1751 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1753 push 0x12d20480 */
  push32((uint32_t)(0x12d20480u));
  /* 12cf1758 call dword ptr [0x12d23418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23418))), 0x12cf175eu);
  /* 12cf175e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1763 call 0x12cf2ea0 */
  push32(0x12cf1768u); f_12cf2ea0();
  /* 12cf1768 mov esi, esp */
  ESI = (ESP);
  /* 12cf176a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf176c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf176e push 0x12d20430 */
  push32((uint32_t)(0x12d20430u));
  /* 12cf1773 call dword ptr [0x12d23418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23418))), 0x12cf1779u);
  /* 12cf1779 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf177c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf177e call 0x12cf2ea0 */
  push32(0x12cf1783u); f_12cf2ea0();
  /* 12cf1783 mov esi, esp */
  ESI = (ESP);
  /* 12cf1785 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf1787 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1789 push 0x12d20428 */
  push32((uint32_t)(0x12d20428u));
  /* 12cf178e call dword ptr [0x12d23418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23418))), 0x12cf1794u);
  /* 12cf1794 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1799 call 0x12cf2ea0 */
  push32(0x12cf179eu); f_12cf2ea0();
  /* 12cf179e mov esi, esp */
  ESI = (ESP);
  /* 12cf17a0 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12cf17a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf17a7 call dword ptr [0x12d2341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2341c))), 0x12cf17adu);
  /* 12cf17ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf17b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf17b2 call 0x12cf2ea0 */
  push32(0x12cf17b7u); f_12cf2ea0();
  /* 12cf17b7 mov esi, esp */
  ESI = (ESP);
  /* 12cf17b9 push 0x12d20490 */
  push32((uint32_t)(0x12d20490u));
  /* 12cf17be call dword ptr [0x12d23420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23420))), 0x12cf17c4u);
  /* 12cf17c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf17c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf17c9 call 0x12cf2ea0 */
  push32(0x12cf17ceu); f_12cf2ea0();
L_12cf17ce:;
  /* 12cf17ce mov esi, esp */
  ESI = (ESP);
  /* 12cf17d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf17d2 call dword ptr [0x12d23424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23424))), 0x12cf17d8u);
  /* 12cf17d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf17db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf17dd call 0x12cf2ea0 */
  push32(0x12cf17e2u); f_12cf2ea0();
  /* 12cf17e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf17e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf17e9 je 0x12cf1802 */
  if (C.zf) goto L_12cf1802;
  /* 12cf17eb mov esi, esp */
  ESI = (ESP);
  /* 12cf17ed push 0x12d1b484 */
  push32((uint32_t)(0x12d1b484u));
  /* 12cf17f2 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf17f8u);
  /* 12cf17f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf17fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf17fd call 0x12cf2ea0 */
  push32(0x12cf1802u); f_12cf2ea0();
L_12cf1802:;
  /* 12cf1802 mov esi, esp */
  ESI = (ESP);
  /* 12cf1804 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf1806 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf180cu);
  /* 12cf180c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf180f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1811 call 0x12cf2ea0 */
  push32(0x12cf1816u); f_12cf2ea0();
  /* 12cf1816 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf181b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf181d je 0x12cf1876 */
  if (C.zf) goto L_12cf1876;
  /* 12cf181f mov esi, esp */
  ESI = (ESP);
  /* 12cf1821 push 0x12d203e0 */
  push32((uint32_t)(0x12d203e0u));
  /* 12cf1826 call dword ptr [0x12d23428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23428))), 0x12cf182cu);
  /* 12cf182c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf182f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1831 call 0x12cf2ea0 */
  push32(0x12cf1836u); f_12cf2ea0();
  /* 12cf1836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1838 jne 0x12cf1876 */
  if (!C.zf) goto L_12cf1876;
  /* 12cf183a mov esi, esp */
  ESI = (ESP);
  /* 12cf183c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf183e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf1840 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1846u);
  /* 12cf1846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf184b call 0x12cf2ea0 */
  push32(0x12cf1850u); f_12cf2ea0();
  /* 12cf1850 mov esi, esp */
  ESI = (ESP);
  /* 12cf1852 push 0x12d1b478 */
  push32((uint32_t)(0x12d1b478u));
  /* 12cf1857 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf185du);
  /* 12cf185d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1860 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1862 call 0x12cf2ea0 */
  push32(0x12cf1867u); f_12cf2ea0();
  /* 12cf1867 mov esi, esp */
  ESI = (ESP);
  /* 12cf1869 call dword ptr [0x12d2342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2342c))), 0x12cf186fu);
  /* 12cf186f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1871 call 0x12cf2ea0 */
  push32(0x12cf1876u); f_12cf2ea0();
L_12cf1876:;
  /* 12cf1876 mov esi, esp */
  ESI = (ESP);
  /* 12cf1878 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf187a call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1880u);
  /* 12cf1880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1885 call 0x12cf2ea0 */
  push32(0x12cf188au); f_12cf2ea0();
  /* 12cf188a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf188f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1891 je 0x12cf1a9b */
  if (C.zf) goto L_12cf1a9b;
  /* 12cf1897 mov esi, esp */
  ESI = (ESP);
  /* 12cf1899 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf189b push 0x12d20440 */
  push32((uint32_t)(0x12d20440u));
  /* 12cf18a0 call dword ptr [0x12d23430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23430))), 0x12cf18a6u);
  /* 12cf18a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf18a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf18ab call 0x12cf2ea0 */
  push32(0x12cf18b0u); f_12cf2ea0();
  /* 12cf18b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf18b2 jle 0x12cf1a9b */
  if ((C.zf||C.sf!=C.of)) goto L_12cf1a9b;
  /* 12cf18b8 mov esi, esp */
  ESI = (ESP);
  /* 12cf18ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf18bc push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf18be call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf18c4u);
  /* 12cf18c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf18c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf18c9 call 0x12cf2ea0 */
  push32(0x12cf18ceu); f_12cf2ea0();
  /* 12cf18ce mov esi, esp */
  ESI = (ESP);
  /* 12cf18d0 push 0x12d1b314 */
  push32((uint32_t)(0x12d1b314u));
  /* 12cf18d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf18d7 push 0x12d1b30c */
  push32((uint32_t)(0x12d1b30cu));
  /* 12cf18dc push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf18de call dword ptr [0x12d23434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23434))), 0x12cf18e4u);
  /* 12cf18e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf18e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf18e9 call 0x12cf2ea0 */
  push32(0x12cf18eeu); f_12cf2ea0();
  /* 12cf18ee mov dword ptr [0x12d20438], eax */
  w32((uint32_t)(0x12d20438), (EAX));
  /* 12cf18f3 cmp dword ptr [0x12d20438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf18fa jne 0x12cf1912 */
  if (!C.zf) goto L_12cf1912;
  /* 12cf18fc mov esi, esp */
  ESI = (ESP);
  /* 12cf18fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1900 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf1902 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1908u);
  /* 12cf1908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf190b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf190d call 0x12cf2ea0 */
  push32(0x12cf1912u); f_12cf2ea0();
L_12cf1912:;
  /* 12cf1912 cmp dword ptr [0x12d20438], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20438))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1919 jne 0x12cf1a33 */
  if (!C.zf) goto L_12cf1a33;
  /* 12cf191f mov esi, esp */
  ESI = (ESP);
  /* 12cf1921 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1923 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1925 call dword ptr [0x12d23438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23438))), 0x12cf192bu);
  /* 12cf192b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf192e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1930 call 0x12cf2ea0 */
  push32(0x12cf1935u); f_12cf2ea0();
  /* 12cf1935 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1938 jl 0x12cf19d4 */
  if ((C.sf!=C.of)) goto L_12cf19d4;
  /* 12cf193e mov esi, esp */
  ESI = (ESP);
  /* 12cf1940 push 0x12d1b300 */
  push32((uint32_t)(0x12d1b300u));
  /* 12cf1945 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf194bu);
  /* 12cf194b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf194e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1950 call 0x12cf2ea0 */
  push32(0x12cf1955u); f_12cf2ea0();
  /* 12cf1955 mov esi, esp */
  ESI = (ESP);
  /* 12cf1957 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1959 push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf195e call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1964u);
  /* 12cf1964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1969 call 0x12cf2ea0 */
  push32(0x12cf196eu); f_12cf2ea0();
  /* 12cf196e mov esi, esp */
  ESI = (ESP);
  /* 12cf1970 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1972 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1974 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf197au);
  /* 12cf197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf197f call 0x12cf2ea0 */
  push32(0x12cf1984u); f_12cf2ea0();
  /* 12cf1984 mov esi, esp */
  ESI = (ESP);
  /* 12cf1986 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1988 push 0x12d203e8 */
  push32((uint32_t)(0x12d203e8u));
  /* 12cf198d call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1993u);
  /* 12cf1993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1996 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1998 call 0x12cf2ea0 */
  push32(0x12cf199du); f_12cf2ea0();
  /* 12cf199d mov esi, esp */
  ESI = (ESP);
  /* 12cf199f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf19a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf19a3 push 0x12d20478 */
  push32((uint32_t)(0x12d20478u));
  /* 12cf19a8 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf19aa call dword ptr [0x12d23440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23440))), 0x12cf19b0u);
  /* 12cf19b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf19b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf19b5 call 0x12cf2ea0 */
  push32(0x12cf19bau); f_12cf2ea0();
  /* 12cf19ba mov esi, esp */
  ESI = (ESP);
  /* 12cf19bc push -0x3c */
  push32((uint32_t)(0xffffffc4u));
  /* 12cf19be push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf19c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf19c2 call dword ptr [0x12d23444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23444))), 0x12cf19c8u);
  /* 12cf19c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf19cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf19cd call 0x12cf2ea0 */
  push32(0x12cf19d2u); f_12cf2ea0();
  /* 12cf19d2 jmp 0x12cf1a33 */
  goto L_12cf1a33;
L_12cf19d4:;
  /* 12cf19d4 mov esi, esp */
  ESI = (ESP);
  /* 12cf19d6 push 0x12d1b2f4 */
  push32((uint32_t)(0x12d1b2f4u));
  /* 12cf19db call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf19e1u);
  /* 12cf19e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf19e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf19e6 call 0x12cf2ea0 */
  push32(0x12cf19ebu); f_12cf2ea0();
  /* 12cf19eb mov esi, esp */
  ESI = (ESP);
  /* 12cf19ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf19ef push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf19f4 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf19fau);
  /* 12cf19fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf19fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf19ff call 0x12cf2ea0 */
  push32(0x12cf1a04u); f_12cf2ea0();
  /* 12cf1a04 mov esi, esp */
  ESI = (ESP);
  /* 12cf1a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1a08 push 0x12d203e8 */
  push32((uint32_t)(0x12d203e8u));
  /* 12cf1a0d call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1a13u);
  /* 12cf1a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1a18 call 0x12cf2ea0 */
  push32(0x12cf1a1du); f_12cf2ea0();
  /* 12cf1a1d mov esi, esp */
  ESI = (ESP);
  /* 12cf1a1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1a21 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1a23 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf1a29u);
  /* 12cf1a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1a2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1a2e call 0x12cf2ea0 */
  push32(0x12cf1a33u); f_12cf2ea0();
L_12cf1a33:;
  /* 12cf1a33 cmp dword ptr [0x12d20438], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d20438))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1a3a jne 0x12cf1a9b */
  if (!C.zf) goto L_12cf1a9b;
  /* 12cf1a3c mov esi, esp */
  ESI = (ESP);
  /* 12cf1a3e push 0x12d1b2e8 */
  push32((uint32_t)(0x12d1b2e8u));
  /* 12cf1a43 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf1a49u);
  /* 12cf1a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1a4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1a4e call 0x12cf2ea0 */
  push32(0x12cf1a53u); f_12cf2ea0();
  /* 12cf1a53 mov esi, esp */
  ESI = (ESP);
  /* 12cf1a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1a57 push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf1a5c call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1a62u);
  /* 12cf1a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1a67 call 0x12cf2ea0 */
  push32(0x12cf1a6cu); f_12cf2ea0();
  /* 12cf1a6c mov esi, esp */
  ESI = (ESP);
  /* 12cf1a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1a70 push 0x12d203e8 */
  push32((uint32_t)(0x12d203e8u));
  /* 12cf1a75 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1a7bu);
  /* 12cf1a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1a80 call 0x12cf2ea0 */
  push32(0x12cf1a85u); f_12cf2ea0();
  /* 12cf1a85 mov esi, esp */
  ESI = (ESP);
  /* 12cf1a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1a89 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1a8b call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf1a91u);
  /* 12cf1a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1a96 call 0x12cf2ea0 */
  push32(0x12cf1a9bu); f_12cf2ea0();
L_12cf1a9b:;
  /* 12cf1a9b mov esi, esp */
  ESI = (ESP);
  /* 12cf1a9d push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf1a9f call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1aa5u);
  /* 12cf1aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1aaa call 0x12cf2ea0 */
  push32(0x12cf1aafu); f_12cf2ea0();
  /* 12cf1aaf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1ab6 jne 0x12cf1c54 */
  if (!C.zf) goto L_12cf1c54;
  /* 12cf1abc mov esi, esp */
  ESI = (ESP);
  /* 12cf1abe push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1ac0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf1ac2 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1ac8u);
  /* 12cf1ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1acb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1acd call 0x12cf2ea0 */
  push32(0x12cf1ad2u); f_12cf2ea0();
  /* 12cf1ad2 mov esi, esp */
  ESI = (ESP);
  /* 12cf1ad4 push 0x12d1b2dc */
  push32((uint32_t)(0x12d1b2dcu));
  /* 12cf1ad9 call dword ptr [0x12d23448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23448))), 0x12cf1adfu);
  /* 12cf1adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1ae2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1ae4 call 0x12cf2ea0 */
  push32(0x12cf1ae9u); f_12cf2ea0();
  /* 12cf1ae9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1af0 je 0x12cf1bf5 */
  if (C.zf) goto L_12cf1bf5;
  /* 12cf1af6 mov esi, esp */
  ESI = (ESP);
  /* 12cf1af8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1afa push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1afc call dword ptr [0x12d23438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23438))), 0x12cf1b02u);
  /* 12cf1b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1b05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1b07 call 0x12cf2ea0 */
  push32(0x12cf1b0cu); f_12cf2ea0();
  /* 12cf1b0c cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1b0f jl 0x12cf1bab */
  if ((C.sf!=C.of)) goto L_12cf1bab;
  /* 12cf1b15 mov esi, esp */
  ESI = (ESP);
  /* 12cf1b17 push 0x12d1b300 */
  push32((uint32_t)(0x12d1b300u));
  /* 12cf1b1c call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf1b22u);
  /* 12cf1b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1b25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1b27 call 0x12cf2ea0 */
  push32(0x12cf1b2cu); f_12cf2ea0();
  /* 12cf1b2c mov esi, esp */
  ESI = (ESP);
  /* 12cf1b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1b30 push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf1b35 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1b3bu);
  /* 12cf1b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1b40 call 0x12cf2ea0 */
  push32(0x12cf1b45u); f_12cf2ea0();
  /* 12cf1b45 mov esi, esp */
  ESI = (ESP);
  /* 12cf1b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1b49 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1b4b call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf1b51u);
  /* 12cf1b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1b54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1b56 call 0x12cf2ea0 */
  push32(0x12cf1b5bu); f_12cf2ea0();
  /* 12cf1b5b mov esi, esp */
  ESI = (ESP);
  /* 12cf1b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1b5f push 0x12d203e8 */
  push32((uint32_t)(0x12d203e8u));
  /* 12cf1b64 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1b6au);
  /* 12cf1b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1b6f call 0x12cf2ea0 */
  push32(0x12cf1b74u); f_12cf2ea0();
  /* 12cf1b74 mov esi, esp */
  ESI = (ESP);
  /* 12cf1b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1b7a push 0x12d20478 */
  push32((uint32_t)(0x12d20478u));
  /* 12cf1b7f push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1b81 call dword ptr [0x12d23440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23440))), 0x12cf1b87u);
  /* 12cf1b87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1b8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1b8c call 0x12cf2ea0 */
  push32(0x12cf1b91u); f_12cf2ea0();
  /* 12cf1b91 mov esi, esp */
  ESI = (ESP);
  /* 12cf1b93 push -0x32 */
  push32((uint32_t)(0xffffffceu));
  /* 12cf1b95 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1b99 call dword ptr [0x12d23444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23444))), 0x12cf1b9fu);
  /* 12cf1b9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1ba2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1ba4 call 0x12cf2ea0 */
  push32(0x12cf1ba9u); f_12cf2ea0();
  /* 12cf1ba9 jmp 0x12cf1bf3 */
  goto L_12cf1bf3;
L_12cf1bab:;
  /* 12cf1bab mov esi, esp */
  ESI = (ESP);
  /* 12cf1bad push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1baf push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf1bb4 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1bbau);
  /* 12cf1bba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1bbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1bbf call 0x12cf2ea0 */
  push32(0x12cf1bc4u); f_12cf2ea0();
  /* 12cf1bc4 mov esi, esp */
  ESI = (ESP);
  /* 12cf1bc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1bc8 push 0x12d203e8 */
  push32((uint32_t)(0x12d203e8u));
  /* 12cf1bcd call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1bd3u);
  /* 12cf1bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1bd8 call 0x12cf2ea0 */
  push32(0x12cf1bddu); f_12cf2ea0();
  /* 12cf1bdd mov esi, esp */
  ESI = (ESP);
  /* 12cf1bdf push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1be1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1be3 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf1be9u);
  /* 12cf1be9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1bec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1bee call 0x12cf2ea0 */
  push32(0x12cf1bf3u); f_12cf2ea0();
L_12cf1bf3:;
  /* 12cf1bf3 jmp 0x12cf1c54 */
  goto L_12cf1c54;
L_12cf1bf5:;
  /* 12cf1bf5 mov esi, esp */
  ESI = (ESP);
  /* 12cf1bf7 push 0x12d1b2d0 */
  push32((uint32_t)(0x12d1b2d0u));
  /* 12cf1bfc call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf1c02u);
  /* 12cf1c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1c05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1c07 call 0x12cf2ea0 */
  push32(0x12cf1c0cu); f_12cf2ea0();
  /* 12cf1c0c mov esi, esp */
  ESI = (ESP);
  /* 12cf1c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1c10 push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf1c15 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1c1bu);
  /* 12cf1c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1c1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1c20 call 0x12cf2ea0 */
  push32(0x12cf1c25u); f_12cf2ea0();
  /* 12cf1c25 mov esi, esp */
  ESI = (ESP);
  /* 12cf1c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1c29 push 0x12d203e8 */
  push32((uint32_t)(0x12d203e8u));
  /* 12cf1c2e call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1c34u);
  /* 12cf1c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1c37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1c39 call 0x12cf2ea0 */
  push32(0x12cf1c3eu); f_12cf2ea0();
  /* 12cf1c3e mov esi, esp */
  ESI = (ESP);
  /* 12cf1c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1c42 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1c44 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf1c4au);
  /* 12cf1c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1c4f call 0x12cf2ea0 */
  push32(0x12cf1c54u); f_12cf2ea0();
L_12cf1c54:;
  /* 12cf1c54 mov esi, esp */
  ESI = (ESP);
  /* 12cf1c56 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1c58 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1c5eu);
  /* 12cf1c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1c63 call 0x12cf2ea0 */
  push32(0x12cf1c68u); f_12cf2ea0();
  /* 12cf1c68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1c6f je 0x12cf1ce8 */
  if (C.zf) goto L_12cf1ce8;
  /* 12cf1c71 mov esi, esp */
  ESI = (ESP);
  /* 12cf1c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1c75 push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf1c7a call dword ptr [0x12d2344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2344c))), 0x12cf1c80u);
  /* 12cf1c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1c85 call 0x12cf2ea0 */
  push32(0x12cf1c8au); f_12cf2ea0();
  /* 12cf1c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1c8c jle 0x12cf1ce8 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf1ce8;
  /* 12cf1c8e mov esi, esp */
  ESI = (ESP);
  /* 12cf1c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1c92 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1c94 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1c9au);
  /* 12cf1c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1c9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1c9f call 0x12cf2ea0 */
  push32(0x12cf1ca4u); f_12cf2ea0();
  /* 12cf1ca4 mov esi, esp */
  ESI = (ESP);
  /* 12cf1ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1ca8 push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf1cad call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1cb3u);
  /* 12cf1cb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1cb8 call 0x12cf2ea0 */
  push32(0x12cf1cbdu); f_12cf2ea0();
  /* 12cf1cbd mov esi, esp */
  ESI = (ESP);
  /* 12cf1cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1cc1 call dword ptr [0x12d23450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23450))), 0x12cf1cc7u);
  /* 12cf1cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1ccc call 0x12cf2ea0 */
  push32(0x12cf1cd1u); f_12cf2ea0();
  /* 12cf1cd1 mov esi, esp */
  ESI = (ESP);
  /* 12cf1cd3 push 0x12d1b2c8 */
  push32((uint32_t)(0x12d1b2c8u));
  /* 12cf1cd8 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf1cdeu);
  /* 12cf1cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1ce1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1ce3 call 0x12cf2ea0 */
  push32(0x12cf1ce8u); f_12cf2ea0();
L_12cf1ce8:;
  /* 12cf1ce8 mov esi, esp */
  ESI = (ESP);
  /* 12cf1cea push 6 */
  push32((uint32_t)(0x6u));
  /* 12cf1cec call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1cf2u);
  /* 12cf1cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1cf7 call 0x12cf2ea0 */
  push32(0x12cf1cfcu); f_12cf2ea0();
  /* 12cf1cfc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1d03 je 0x12cf1dcb */
  if (C.zf) goto L_12cf1dcb;
  /* 12cf1d09 mov esi, esp */
  ESI = (ESP);
  /* 12cf1d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1d0d push 0x12d20448 */
  push32((uint32_t)(0x12d20448u));
  /* 12cf1d12 call dword ptr [0x12d23430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23430))), 0x12cf1d18u);
  /* 12cf1d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1d1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1d1d call 0x12cf2ea0 */
  push32(0x12cf1d22u); f_12cf2ea0();
  /* 12cf1d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1d24 jle 0x12cf1dcb */
  if ((C.zf||C.sf!=C.of)) goto L_12cf1dcb;
  /* 12cf1d2a mov esi, esp */
  ESI = (ESP);
  /* 12cf1d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1d2e push 6 */
  push32((uint32_t)(0x6u));
  /* 12cf1d30 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1d36u);
  /* 12cf1d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1d39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1d3b call 0x12cf2ea0 */
  push32(0x12cf1d40u); f_12cf2ea0();
  /* 12cf1d40 mov esi, esp */
  ESI = (ESP);
  /* 12cf1d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1d44 push 7 */
  push32((uint32_t)(0x7u));
  /* 12cf1d46 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1d4cu);
  /* 12cf1d4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1d51 call 0x12cf2ea0 */
  push32(0x12cf1d56u); f_12cf2ea0();
  /* 12cf1d56 mov esi, esp */
  ESI = (ESP);
  /* 12cf1d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1d5a push 0x12d20408 */
  push32((uint32_t)(0x12d20408u));
  /* 12cf1d5f call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1d65u);
  /* 12cf1d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1d68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1d6a call 0x12cf2ea0 */
  push32(0x12cf1d6fu); f_12cf2ea0();
  /* 12cf1d6f mov esi, esp */
  ESI = (ESP);
  /* 12cf1d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1d73 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1d75 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf1d7bu);
  /* 12cf1d7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1d7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1d80 call 0x12cf2ea0 */
  push32(0x12cf1d85u); f_12cf2ea0();
  /* 12cf1d85 mov esi, esp */
  ESI = (ESP);
  /* 12cf1d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1d89 push 0x12d20400 */
  push32((uint32_t)(0x12d20400u));
  /* 12cf1d8e call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1d94u);
  /* 12cf1d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1d99 call 0x12cf2ea0 */
  push32(0x12cf1d9eu); f_12cf2ea0();
  /* 12cf1d9e mov esi, esp */
  ESI = (ESP);
  /* 12cf1da0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1da2 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1da4 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf1daau);
  /* 12cf1daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1dad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1daf call 0x12cf2ea0 */
  push32(0x12cf1db4u); f_12cf2ea0();
  /* 12cf1db4 mov esi, esp */
  ESI = (ESP);
  /* 12cf1db6 push 0x12d1b2c0 */
  push32((uint32_t)(0x12d1b2c0u));
  /* 12cf1dbb call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf1dc1u);
  /* 12cf1dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1dc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1dc6 call 0x12cf2ea0 */
  push32(0x12cf1dcbu); f_12cf2ea0();
L_12cf1dcb:;
  /* 12cf1dcb mov esi, esp */
  ESI = (ESP);
  /* 12cf1dcd push 7 */
  push32((uint32_t)(0x7u));
  /* 12cf1dcf call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1dd5u);
  /* 12cf1dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1dd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1dda call 0x12cf2ea0 */
  push32(0x12cf1ddfu); f_12cf2ea0();
  /* 12cf1ddf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1de6 jne 0x12cf1e06 */
  if (!C.zf) goto L_12cf1e06;
  /* 12cf1de8 mov esi, esp */
  ESI = (ESP);
  /* 12cf1dea push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1dec push 0x12d20448 */
  push32((uint32_t)(0x12d20448u));
  /* 12cf1df1 push 0x12d20400 */
  push32((uint32_t)(0x12d20400u));
  /* 12cf1df6 call dword ptr [0x12d23454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23454))), 0x12cf1dfcu);
  /* 12cf1dfc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1dff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1e01 call 0x12cf2ea0 */
  push32(0x12cf1e06u); f_12cf2ea0();
L_12cf1e06:;
  /* 12cf1e06 mov esi, esp */
  ESI = (ESP);
  /* 12cf1e08 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cf1e0a call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1e10u);
  /* 12cf1e10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1e15 call 0x12cf2ea0 */
  push32(0x12cf1e1au); f_12cf2ea0();
  /* 12cf1e1a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1e21 je 0x12cf1e83 */
  if (C.zf) goto L_12cf1e83;
  /* 12cf1e23 mov esi, esp */
  ESI = (ESP);
  /* 12cf1e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1e27 push 0x12d20488 */
  push32((uint32_t)(0x12d20488u));
  /* 12cf1e2c call dword ptr [0x12d2344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2344c))), 0x12cf1e32u);
  /* 12cf1e32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1e35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1e37 call 0x12cf2ea0 */
  push32(0x12cf1e3cu); f_12cf2ea0();
  /* 12cf1e3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1e3e jle 0x12cf1e83 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf1e83;
  /* 12cf1e40 mov esi, esp */
  ESI = (ESP);
  /* 12cf1e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1e44 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cf1e46 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1e4cu);
  /* 12cf1e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1e51 call 0x12cf2ea0 */
  push32(0x12cf1e56u); f_12cf2ea0();
  /* 12cf1e56 mov esi, esp */
  ESI = (ESP);
  /* 12cf1e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1e5a push 0x12d20488 */
  push32((uint32_t)(0x12d20488u));
  /* 12cf1e5f call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1e65u);
  /* 12cf1e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1e68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1e6a call 0x12cf2ea0 */
  push32(0x12cf1e6fu); f_12cf2ea0();
  /* 12cf1e6f mov esi, esp */
  ESI = (ESP);
  /* 12cf1e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1e73 call dword ptr [0x12d23450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23450))), 0x12cf1e79u);
  /* 12cf1e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1e7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1e7e call 0x12cf2ea0 */
  push32(0x12cf1e83u); f_12cf2ea0();
L_12cf1e83:;
  /* 12cf1e83 mov esi, esp */
  ESI = (ESP);
  /* 12cf1e85 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf1e87 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1e8du);
  /* 12cf1e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1e90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1e92 call 0x12cf2ea0 */
  push32(0x12cf1e97u); f_12cf2ea0();
  /* 12cf1e97 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1e9e je 0x12cf1f17 */
  if (C.zf) goto L_12cf1f17;
  /* 12cf1ea0 mov esi, esp */
  ESI = (ESP);
  /* 12cf1ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1ea4 push 0x12d20408 */
  push32((uint32_t)(0x12d20408u));
  /* 12cf1ea9 call dword ptr [0x12d2344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2344c))), 0x12cf1eafu);
  /* 12cf1eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1eb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1eb4 call 0x12cf2ea0 */
  push32(0x12cf1eb9u); f_12cf2ea0();
  /* 12cf1eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1ebb jle 0x12cf1f17 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf1f17;
  /* 12cf1ebd mov esi, esp */
  ESI = (ESP);
  /* 12cf1ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1ec1 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf1ec3 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1ec9u);
  /* 12cf1ec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1ecc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1ece call 0x12cf2ea0 */
  push32(0x12cf1ed3u); f_12cf2ea0();
  /* 12cf1ed3 mov esi, esp */
  ESI = (ESP);
  /* 12cf1ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1ed7 push 0x12d20408 */
  push32((uint32_t)(0x12d20408u));
  /* 12cf1edc call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1ee2u);
  /* 12cf1ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1ee7 call 0x12cf2ea0 */
  push32(0x12cf1eecu); f_12cf2ea0();
  /* 12cf1eec mov esi, esp */
  ESI = (ESP);
  /* 12cf1eee push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1ef0 call dword ptr [0x12d23450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23450))), 0x12cf1ef6u);
  /* 12cf1ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1ef9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1efb call 0x12cf2ea0 */
  push32(0x12cf1f00u); f_12cf2ea0();
  /* 12cf1f00 mov esi, esp */
  ESI = (ESP);
  /* 12cf1f02 push 0x12d1b2b8 */
  push32((uint32_t)(0x12d1b2b8u));
  /* 12cf1f07 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf1f0du);
  /* 12cf1f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1f10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1f12 call 0x12cf2ea0 */
  push32(0x12cf1f17u); f_12cf2ea0();
L_12cf1f17:;
  /* 12cf1f17 mov esi, esp */
  ESI = (ESP);
  /* 12cf1f19 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cf1f1b call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf1f21u);
  /* 12cf1f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1f26 call 0x12cf2ea0 */
  push32(0x12cf1f2bu); f_12cf2ea0();
  /* 12cf1f2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1f32 je 0x12cf2021 */
  if (C.zf) goto L_12cf2021;
  /* 12cf1f38 mov esi, esp */
  ESI = (ESP);
  /* 12cf1f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1f3c push 0x12d20458 */
  push32((uint32_t)(0x12d20458u));
  /* 12cf1f41 call dword ptr [0x12d23430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23430))), 0x12cf1f47u);
  /* 12cf1f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1f4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1f4c call 0x12cf2ea0 */
  push32(0x12cf1f51u); f_12cf2ea0();
  /* 12cf1f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1f53 jle 0x12cf2021 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf2021;
  /* 12cf1f59 mov esi, esp */
  ESI = (ESP);
  /* 12cf1f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1f5d push 0xa */
  push32((uint32_t)(0xau));
  /* 12cf1f5f call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf1f65u);
  /* 12cf1f65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1f68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1f6a call 0x12cf2ea0 */
  push32(0x12cf1f6fu); f_12cf2ea0();
  /* 12cf1f6f mov esi, esp */
  ESI = (ESP);
  /* 12cf1f71 push 0x12d1b2b0 */
  push32((uint32_t)(0x12d1b2b0u));
  /* 12cf1f76 call dword ptr [0x12d23448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23448))), 0x12cf1f7cu);
  /* 12cf1f7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1f7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1f81 call 0x12cf2ea0 */
  push32(0x12cf1f86u); f_12cf2ea0();
  /* 12cf1f86 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf1f8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf1f8d je 0x12cf200a */
  if (C.zf) goto L_12cf200a;
  /* 12cf1f8f mov esi, esp */
  ESI = (ESP);
  /* 12cf1f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1f95 call dword ptr [0x12d23438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23438))), 0x12cf1f9bu);
  /* 12cf1f9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1f9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1fa0 call 0x12cf2ea0 */
  push32(0x12cf1fa5u); f_12cf2ea0();
  /* 12cf1fa5 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1fa8 jl 0x12cf200a */
  if ((C.sf!=C.of)) goto L_12cf200a;
  /* 12cf1faa mov esi, esp */
  ESI = (ESP);
  /* 12cf1fac push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1fae push 0x12d20418 */
  push32((uint32_t)(0x12d20418u));
  /* 12cf1fb3 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf1fb9u);
  /* 12cf1fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1fbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1fbe call 0x12cf2ea0 */
  push32(0x12cf1fc3u); f_12cf2ea0();
  /* 12cf1fc3 mov esi, esp */
  ESI = (ESP);
  /* 12cf1fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1fc7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf1fc9 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf1fcfu);
  /* 12cf1fcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1fd4 call 0x12cf2ea0 */
  push32(0x12cf1fd9u); f_12cf2ea0();
  /* 12cf1fd9 mov esi, esp */
  ESI = (ESP);
  /* 12cf1fdb push -0x32 */
  push32((uint32_t)(0xffffffceu));
  /* 12cf1fdd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf1fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf1fe1 call dword ptr [0x12d23444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23444))), 0x12cf1fe7u);
  /* 12cf1fe7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf1fea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf1fec call 0x12cf2ea0 */
  push32(0x12cf1ff1u); f_12cf2ea0();
  /* 12cf1ff1 mov esi, esp */
  ESI = (ESP);
  /* 12cf1ff3 push 0x12d1b2a4 */
  push32((uint32_t)(0x12d1b2a4u));
  /* 12cf1ff8 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf1ffeu);
  /* 12cf1ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2003 call 0x12cf2ea0 */
  push32(0x12cf2008u); f_12cf2ea0();
  /* 12cf2008 jmp 0x12cf2021 */
  goto L_12cf2021;
L_12cf200a:;
  /* 12cf200a mov esi, esp */
  ESI = (ESP);
  /* 12cf200c push 0x12d1b298 */
  push32((uint32_t)(0x12d1b298u));
  /* 12cf2011 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf2017u);
  /* 12cf2017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf201a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf201c call 0x12cf2ea0 */
  push32(0x12cf2021u); f_12cf2ea0();
L_12cf2021:;
  /* 12cf2021 mov esi, esp */
  ESI = (ESP);
  /* 12cf2023 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cf2025 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf202bu);
  /* 12cf202b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf202e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2030 call 0x12cf2ea0 */
  push32(0x12cf2035u); f_12cf2ea0();
  /* 12cf2035 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf203a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf203c je 0x12cf20bc */
  if (C.zf) goto L_12cf20bc;
  /* 12cf203e mov esi, esp */
  ESI = (ESP);
  /* 12cf2040 push 0x12d20410 */
  push32((uint32_t)(0x12d20410u));
  /* 12cf2045 call dword ptr [0x12d23428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23428))), 0x12cf204bu);
  /* 12cf204b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf204e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2050 call 0x12cf2ea0 */
  push32(0x12cf2055u); f_12cf2ea0();
  /* 12cf2055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2057 jne 0x12cf20bc */
  if (!C.zf) goto L_12cf20bc;
  /* 12cf2059 mov esi, esp */
  ESI = (ESP);
  /* 12cf205b push 0x12d20408 */
  push32((uint32_t)(0x12d20408u));
  /* 12cf2060 call dword ptr [0x12d23428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23428))), 0x12cf2066u);
  /* 12cf2066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2069 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf206b call 0x12cf2ea0 */
  push32(0x12cf2070u); f_12cf2ea0();
  /* 12cf2070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2072 jne 0x12cf20bc */
  if (!C.zf) goto L_12cf20bc;
  /* 12cf2074 mov esi, esp */
  ESI = (ESP);
  /* 12cf2076 push 0x12d20420 */
  push32((uint32_t)(0x12d20420u));
  /* 12cf207b call dword ptr [0x12d23428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23428))), 0x12cf2081u);
  /* 12cf2081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2084 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2086 call 0x12cf2ea0 */
  push32(0x12cf208bu); f_12cf2ea0();
  /* 12cf208b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf208d jne 0x12cf20bc */
  if (!C.zf) goto L_12cf20bc;
  /* 12cf208f mov esi, esp */
  ESI = (ESP);
  /* 12cf2091 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2093 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cf2095 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf209bu);
  /* 12cf209b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf209e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf20a0 call 0x12cf2ea0 */
  push32(0x12cf20a5u); f_12cf2ea0();
  /* 12cf20a5 mov esi, esp */
  ESI = (ESP);
  /* 12cf20a7 push 0x12d1b290 */
  push32((uint32_t)(0x12d1b290u));
  /* 12cf20ac call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf20b2u);
  /* 12cf20b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf20b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf20b7 call 0x12cf2ea0 */
  push32(0x12cf20bcu); f_12cf2ea0();
L_12cf20bc:;
  /* 12cf20bc mov esi, esp */
  ESI = (ESP);
  /* 12cf20be push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cf20c0 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf20c6u);
  /* 12cf20c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf20c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf20cb call 0x12cf2ea0 */
  push32(0x12cf20d0u); f_12cf2ea0();
  /* 12cf20d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf20d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf20d7 je 0x12cf2140 */
  if (C.zf) goto L_12cf2140;
  /* 12cf20d9 mov esi, esp */
  ESI = (ESP);
  /* 12cf20db push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cf20dd call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf20e3u);
  /* 12cf20e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf20e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf20e8 call 0x12cf2ea0 */
  push32(0x12cf20edu); f_12cf2ea0();
  /* 12cf20ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf20f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf20f4 je 0x12cf2140 */
  if (C.zf) goto L_12cf2140;
  /* 12cf20f6 mov esi, esp */
  ESI = (ESP);
  /* 12cf20f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf20fa push 0x12d20460 */
  push32((uint32_t)(0x12d20460u));
  /* 12cf20ff call dword ptr [0x12d23430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23430))), 0x12cf2105u);
  /* 12cf2105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf210a call 0x12cf2ea0 */
  push32(0x12cf210fu); f_12cf2ea0();
  /* 12cf210f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2111 jle 0x12cf2140 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf2140;
  /* 12cf2113 mov esi, esp */
  ESI = (ESP);
  /* 12cf2115 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2117 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cf2119 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf211fu);
  /* 12cf211f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2122 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2124 call 0x12cf2ea0 */
  push32(0x12cf2129u); f_12cf2ea0();
  /* 12cf2129 mov esi, esp */
  ESI = (ESP);
  /* 12cf212b push 0x12d1b288 */
  push32((uint32_t)(0x12d1b288u));
  /* 12cf2130 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf2136u);
  /* 12cf2136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2139 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf213b call 0x12cf2ea0 */
  push32(0x12cf2140u); f_12cf2ea0();
L_12cf2140:;
  /* 12cf2140 mov esi, esp */
  ESI = (ESP);
  /* 12cf2142 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12cf2144 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf214au);
  /* 12cf214a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf214d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf214f call 0x12cf2ea0 */
  push32(0x12cf2154u); f_12cf2ea0();
  /* 12cf2154 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf215b je 0x12cf220f */
  if (C.zf) goto L_12cf220f;
  /* 12cf2161 mov esi, esp */
  ESI = (ESP);
  /* 12cf2163 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cf2165 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf216bu);
  /* 12cf216b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf216e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2170 call 0x12cf2ea0 */
  push32(0x12cf2175u); f_12cf2ea0();
  /* 12cf2175 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf217a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf217c jne 0x12cf220f */
  if (!C.zf) goto L_12cf220f;
  /* 12cf2182 mov esi, esp */
  ESI = (ESP);
  /* 12cf2184 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2186 push 0x12d20460 */
  push32((uint32_t)(0x12d20460u));
  /* 12cf218b call dword ptr [0x12d23430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23430))), 0x12cf2191u);
  /* 12cf2191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2194 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2196 call 0x12cf2ea0 */
  push32(0x12cf219bu); f_12cf2ea0();
  /* 12cf219b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf219d jle 0x12cf220f */
  if ((C.zf||C.sf!=C.of)) goto L_12cf220f;
  /* 12cf219f mov esi, esp */
  ESI = (ESP);
  /* 12cf21a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf21a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12cf21a5 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf21abu);
  /* 12cf21ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf21ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf21b0 call 0x12cf2ea0 */
  push32(0x12cf21b5u); f_12cf2ea0();
  /* 12cf21b5 mov esi, esp */
  ESI = (ESP);
  /* 12cf21b7 push 0x12d1b27c */
  push32((uint32_t)(0x12d1b27cu));
  /* 12cf21bc call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf21c2u);
  /* 12cf21c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf21c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf21c7 call 0x12cf2ea0 */
  push32(0x12cf21ccu); f_12cf2ea0();
  /* 12cf21cc mov esi, esp */
  ESI = (ESP);
  /* 12cf21ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf21d0 push 0x12d204c0 */
  push32((uint32_t)(0x12d204c0u));
  /* 12cf21d5 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf21dbu);
  /* 12cf21db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf21de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf21e0 call 0x12cf2ea0 */
  push32(0x12cf21e5u); f_12cf2ea0();
  /* 12cf21e5 mov esi, esp */
  ESI = (ESP);
  /* 12cf21e7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf21e9 call dword ptr [0x12d23458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23458))), 0x12cf21efu);
  /* 12cf21ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf21f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf21f4 call 0x12cf2ea0 */
  push32(0x12cf21f9u); f_12cf2ea0();
  /* 12cf21f9 mov esi, esp */
  ESI = (ESP);
  /* 12cf21fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12cf21fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf21ff call dword ptr [0x12d2341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2341c))), 0x12cf2205u);
  /* 12cf2205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf220a call 0x12cf2ea0 */
  push32(0x12cf220fu); f_12cf2ea0();
L_12cf220f:;
  /* 12cf220f mov esi, esp */
  ESI = (ESP);
  /* 12cf2211 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf2213 call dword ptr [0x12d23424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23424))), 0x12cf2219u);
  /* 12cf2219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf221c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf221e call 0x12cf2ea0 */
  push32(0x12cf2223u); f_12cf2ea0();
  /* 12cf2223 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf222a je 0x12cf2243 */
  if (C.zf) goto L_12cf2243;
  /* 12cf222c mov esi, esp */
  ESI = (ESP);
  /* 12cf222e push 0x12d1b270 */
  push32((uint32_t)(0x12d1b270u));
  /* 12cf2233 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf2239u);
  /* 12cf2239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf223c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf223e call 0x12cf2ea0 */
  push32(0x12cf2243u); f_12cf2ea0();
L_12cf2243:;
  /* 12cf2243 mov esi, esp */
  ESI = (ESP);
  /* 12cf2245 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12cf2247 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf224du);
  /* 12cf224d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2250 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2252 call 0x12cf2ea0 */
  push32(0x12cf2257u); f_12cf2ea0();
  /* 12cf2257 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf225c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf225e je 0x12cf22b1 */
  if (C.zf) goto L_12cf22b1;
  /* 12cf2260 mov esi, esp */
  ESI = (ESP);
  /* 12cf2262 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf2264 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf226au);
  /* 12cf226a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf226d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf226f call 0x12cf2ea0 */
  push32(0x12cf2274u); f_12cf2ea0();
  /* 12cf2274 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf227b jne 0x12cf22b1 */
  if (!C.zf) goto L_12cf22b1;
  /* 12cf227d mov esi, esp */
  ESI = (ESP);
  /* 12cf227f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2281 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12cf2283 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf2289u);
  /* 12cf2289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf228c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf228e call 0x12cf2ea0 */
  push32(0x12cf2293u); f_12cf2ea0();
  /* 12cf2293 mov esi, esp */
  ESI = (ESP);
  /* 12cf2295 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2297 push 0x12d20448 */
  push32((uint32_t)(0x12d20448u));
  /* 12cf229c push 0x12d204b8 */
  push32((uint32_t)(0x12d204b8u));
  /* 12cf22a1 call dword ptr [0x12d23454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23454))), 0x12cf22a7u);
  /* 12cf22a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf22aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf22ac call 0x12cf2ea0 */
  push32(0x12cf22b1u); f_12cf2ea0();
L_12cf22b1:;
  /* 12cf22b1 mov esi, esp */
  ESI = (ESP);
  /* 12cf22b3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12cf22b5 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf22bbu);
  /* 12cf22bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf22be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf22c0 call 0x12cf2ea0 */
  push32(0x12cf22c5u); f_12cf2ea0();
  /* 12cf22c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf22ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf22cc je 0x12cf236d */
  if (C.zf) goto L_12cf236d;
  /* 12cf22d2 mov esi, esp */
  ESI = (ESP);
  /* 12cf22d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf22d6 push 0x12d20468 */
  push32((uint32_t)(0x12d20468u));
  /* 12cf22db call dword ptr [0x12d23430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23430))), 0x12cf22e1u);
  /* 12cf22e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf22e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf22e6 call 0x12cf2ea0 */
  push32(0x12cf22ebu); f_12cf2ea0();
  /* 12cf22eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf22ed jle 0x12cf236d */
  if ((C.zf||C.sf!=C.of)) goto L_12cf236d;
  /* 12cf22ef mov esi, esp */
  ESI = (ESP);
  /* 12cf22f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf22f3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12cf22f5 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf22fbu);
  /* 12cf22fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf22fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2300 call 0x12cf2ea0 */
  push32(0x12cf2305u); f_12cf2ea0();
  /* 12cf2305 mov esi, esp */
  ESI = (ESP);
  /* 12cf2307 push 0x12d1b264 */
  push32((uint32_t)(0x12d1b264u));
  /* 12cf230c call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf2312u);
  /* 12cf2312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2315 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2317 call 0x12cf2ea0 */
  push32(0x12cf231cu); f_12cf2ea0();
  /* 12cf231c mov esi, esp */
  ESI = (ESP);
  /* 12cf231e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cf2323 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf2325 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2327 call dword ptr [0x12d23444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23444))), 0x12cf232du);
  /* 12cf232d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2330 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2332 call 0x12cf2ea0 */
  push32(0x12cf2337u); f_12cf2ea0();
  /* 12cf2337 mov esi, esp */
  ESI = (ESP);
  /* 12cf2339 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cf233e push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf2340 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2342 call dword ptr [0x12d23444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23444))), 0x12cf2348u);
  /* 12cf2348 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf234b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf234d call 0x12cf2ea0 */
  push32(0x12cf2352u); f_12cf2ea0();
  /* 12cf2352 mov esi, esp */
  ESI = (ESP);
  /* 12cf2354 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cf2359 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf235b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf235d call dword ptr [0x12d23444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23444))), 0x12cf2363u);
  /* 12cf2363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2366 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2368 call 0x12cf2ea0 */
  push32(0x12cf236du); f_12cf2ea0();
L_12cf236d:;
  /* 12cf236d mov esi, esp */
  ESI = (ESP);
  /* 12cf236f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cf2371 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf2377u);
  /* 12cf2377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf237a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf237c call 0x12cf2ea0 */
  push32(0x12cf2381u); f_12cf2ea0();
  /* 12cf2381 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2388 je 0x12cf23d4 */
  if (C.zf) goto L_12cf23d4;
  /* 12cf238a mov esi, esp */
  ESI = (ESP);
  /* 12cf238c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf238e push 0x12d20470 */
  push32((uint32_t)(0x12d20470u));
  /* 12cf2393 call dword ptr [0x12d23430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23430))), 0x12cf2399u);
  /* 12cf2399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf239c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf239e call 0x12cf2ea0 */
  push32(0x12cf23a3u); f_12cf2ea0();
  /* 12cf23a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf23a5 jle 0x12cf23d4 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf23d4;
  /* 12cf23a7 mov esi, esp */
  ESI = (ESP);
  /* 12cf23a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf23ab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cf23ad call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf23b3u);
  /* 12cf23b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf23b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf23b8 call 0x12cf2ea0 */
  push32(0x12cf23bdu); f_12cf2ea0();
  /* 12cf23bd mov esi, esp */
  ESI = (ESP);
  /* 12cf23bf push 0x12d1b258 */
  push32((uint32_t)(0x12d1b258u));
  /* 12cf23c4 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf23cau);
  /* 12cf23ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf23cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf23cf call 0x12cf2ea0 */
  push32(0x12cf23d4u); f_12cf2ea0();
L_12cf23d4:;
  /* 12cf23d4 mov esi, esp */
  ESI = (ESP);
  /* 12cf23d6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cf23d8 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf23deu);
  /* 12cf23de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf23e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf23e3 call 0x12cf2ea0 */
  push32(0x12cf23e8u); f_12cf2ea0();
  /* 12cf23e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf23ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf23ef je 0x12cf2685 */
  if (C.zf) goto L_12cf2685;
  /* 12cf23f5 mov esi, esp */
  ESI = (ESP);
  /* 12cf23f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf23f9 push 0x12d20450 */
  push32((uint32_t)(0x12d20450u));
  /* 12cf23fe call dword ptr [0x12d23430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23430))), 0x12cf2404u);
  /* 12cf2404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2407 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2409 call 0x12cf2ea0 */
  push32(0x12cf240eu); f_12cf2ea0();
  /* 12cf240e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2410 jle 0x12cf2685 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf2685;
  /* 12cf2416 mov esi, esp */
  ESI = (ESP);
  /* 12cf2418 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf241a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cf241c call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf2422u);
  /* 12cf2422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2427 call 0x12cf2ea0 */
  push32(0x12cf242cu); f_12cf2ea0();
  /* 12cf242c mov esi, esp */
  ESI = (ESP);
  /* 12cf242e push 0x12d1b198 */
  push32((uint32_t)(0x12d1b198u));
  /* 12cf2433 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2435 push 0x12d1b18c */
  push32((uint32_t)(0x12d1b18cu));
  /* 12cf243a push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf243c call dword ptr [0x12d23434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23434))), 0x12cf2442u);
  /* 12cf2442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2445 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2447 call 0x12cf2ea0 */
  push32(0x12cf244cu); f_12cf2ea0();
  /* 12cf244c mov dword ptr [0x12d2043c], eax */
  w32((uint32_t)(0x12d2043c), (EAX));
  /* 12cf2451 cmp dword ptr [0x12d2043c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2043c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2458 jne 0x12cf24d7 */
  if (!C.zf) goto L_12cf24d7;
  /* 12cf245a mov esi, esp */
  ESI = (ESP);
  /* 12cf245c push 0x12d1b180 */
  push32((uint32_t)(0x12d1b180u));
  /* 12cf2461 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf2467u);
  /* 12cf2467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf246a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf246c call 0x12cf2ea0 */
  push32(0x12cf2471u); f_12cf2ea0();
  /* 12cf2471 mov esi, esp */
  ESI = (ESP);
  /* 12cf2473 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2475 push 0x12d203f8 */
  push32((uint32_t)(0x12d203f8u));
  /* 12cf247a call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf2480u);
  /* 12cf2480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2483 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2485 call 0x12cf2ea0 */
  push32(0x12cf248au); f_12cf2ea0();
  /* 12cf248a mov esi, esp */
  ESI = (ESP);
  /* 12cf248c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf248e push 0x12d20420 */
  push32((uint32_t)(0x12d20420u));
  /* 12cf2493 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf2499u);
  /* 12cf2499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf249c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf249e call 0x12cf2ea0 */
  push32(0x12cf24a3u); f_12cf2ea0();
  /* 12cf24a3 mov esi, esp */
  ESI = (ESP);
  /* 12cf24a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf24a7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf24a9 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf24afu);
  /* 12cf24af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf24b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf24b4 call 0x12cf2ea0 */
  push32(0x12cf24b9u); f_12cf2ea0();
  /* 12cf24b9 mov esi, esp */
  ESI = (ESP);
  /* 12cf24bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf24bd push 0x12d20450 */
  push32((uint32_t)(0x12d20450u));
  /* 12cf24c2 push 0x12d203f8 */
  push32((uint32_t)(0x12d203f8u));
  /* 12cf24c7 call dword ptr [0x12d23454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23454))), 0x12cf24cdu);
  /* 12cf24cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf24d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf24d2 call 0x12cf2ea0 */
  push32(0x12cf24d7u); f_12cf2ea0();
L_12cf24d7:;
  /* 12cf24d7 cmp dword ptr [0x12d2043c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d2043c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf24de jne 0x12cf2616 */
  if (!C.zf) goto L_12cf2616;
  /* 12cf24e4 mov esi, esp */
  ESI = (ESP);
  /* 12cf24e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf24e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf24ea call dword ptr [0x12d23438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23438))), 0x12cf24f0u);
  /* 12cf24f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf24f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf24f5 call 0x12cf2ea0 */
  push32(0x12cf24fau); f_12cf2ea0();
  /* 12cf24fa cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf24fd jl 0x12cf2599 */
  if ((C.sf!=C.of)) goto L_12cf2599;
  /* 12cf2503 mov esi, esp */
  ESI = (ESP);
  /* 12cf2505 push 0x12d1b174 */
  push32((uint32_t)(0x12d1b174u));
  /* 12cf250a call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf2510u);
  /* 12cf2510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2515 call 0x12cf2ea0 */
  push32(0x12cf251au); f_12cf2ea0();
  /* 12cf251a mov esi, esp */
  ESI = (ESP);
  /* 12cf251c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf251e push 0x12d203f8 */
  push32((uint32_t)(0x12d203f8u));
  /* 12cf2523 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf2529u);
  /* 12cf2529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf252c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf252e call 0x12cf2ea0 */
  push32(0x12cf2533u); f_12cf2ea0();
  /* 12cf2533 mov esi, esp */
  ESI = (ESP);
  /* 12cf2535 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2537 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2539 push 0x12d20478 */
  push32((uint32_t)(0x12d20478u));
  /* 12cf253e push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf2540 call dword ptr [0x12d23440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23440))), 0x12cf2546u);
  /* 12cf2546 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf254b call 0x12cf2ea0 */
  push32(0x12cf2550u); f_12cf2ea0();
  /* 12cf2550 mov esi, esp */
  ESI = (ESP);
  /* 12cf2552 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2554 push 0x12d20420 */
  push32((uint32_t)(0x12d20420u));
  /* 12cf2559 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf255fu);
  /* 12cf255f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2562 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2564 call 0x12cf2ea0 */
  push32(0x12cf2569u); f_12cf2ea0();
  /* 12cf2569 mov esi, esp */
  ESI = (ESP);
  /* 12cf256b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf256d push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf256f call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf2575u);
  /* 12cf2575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2578 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf257a call 0x12cf2ea0 */
  push32(0x12cf257fu); f_12cf2ea0();
  /* 12cf257f mov esi, esp */
  ESI = (ESP);
  /* 12cf2581 push -0x3c */
  push32((uint32_t)(0xffffffc4u));
  /* 12cf2583 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf2585 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2587 call dword ptr [0x12d23444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23444))), 0x12cf258du);
  /* 12cf258d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2590 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2592 call 0x12cf2ea0 */
  push32(0x12cf2597u); f_12cf2ea0();
  /* 12cf2597 jmp 0x12cf2616 */
  goto L_12cf2616;
L_12cf2599:;
  /* 12cf2599 mov esi, esp */
  ESI = (ESP);
  /* 12cf259b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf259d push 0x12d203f8 */
  push32((uint32_t)(0x12d203f8u));
  /* 12cf25a2 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf25a8u);
  /* 12cf25a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf25ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf25ad call 0x12cf2ea0 */
  push32(0x12cf25b2u); f_12cf2ea0();
  /* 12cf25b2 mov esi, esp */
  ESI = (ESP);
  /* 12cf25b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf25b6 push 0x12d20420 */
  push32((uint32_t)(0x12d20420u));
  /* 12cf25bb call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf25c1u);
  /* 12cf25c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf25c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf25c6 call 0x12cf2ea0 */
  push32(0x12cf25cbu); f_12cf2ea0();
  /* 12cf25cb mov esi, esp */
  ESI = (ESP);
  /* 12cf25cd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf25cf push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf25d1 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf25d7u);
  /* 12cf25d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf25da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf25dc call 0x12cf2ea0 */
  push32(0x12cf25e1u); f_12cf2ea0();
  /* 12cf25e1 mov esi, esp */
  ESI = (ESP);
  /* 12cf25e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf25e5 push 0x12d20450 */
  push32((uint32_t)(0x12d20450u));
  /* 12cf25ea push 0x12d203f8 */
  push32((uint32_t)(0x12d203f8u));
  /* 12cf25ef call dword ptr [0x12d23454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23454))), 0x12cf25f5u);
  /* 12cf25f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf25f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf25fa call 0x12cf2ea0 */
  push32(0x12cf25ffu); f_12cf2ea0();
  /* 12cf25ff mov esi, esp */
  ESI = (ESP);
  /* 12cf2601 push 0x12d1b168 */
  push32((uint32_t)(0x12d1b168u));
  /* 12cf2606 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf260cu);
  /* 12cf260c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf260f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2611 call 0x12cf2ea0 */
  push32(0x12cf2616u); f_12cf2ea0();
L_12cf2616:;
  /* 12cf2616 cmp dword ptr [0x12d2043c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d2043c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf261d jne 0x12cf2685 */
  if (!C.zf) goto L_12cf2685;
  /* 12cf261f mov esi, esp */
  ESI = (ESP);
  /* 12cf2621 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2623 push 0x12d203f8 */
  push32((uint32_t)(0x12d203f8u));
  /* 12cf2628 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf262eu);
  /* 12cf262e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2631 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2633 call 0x12cf2ea0 */
  push32(0x12cf2638u); f_12cf2ea0();
  /* 12cf2638 mov esi, esp */
  ESI = (ESP);
  /* 12cf263a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf263c push 0x12d20420 */
  push32((uint32_t)(0x12d20420u));
  /* 12cf2641 call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf2647u);
  /* 12cf2647 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf264a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf264c call 0x12cf2ea0 */
  push32(0x12cf2651u); f_12cf2ea0();
  /* 12cf2651 mov esi, esp */
  ESI = (ESP);
  /* 12cf2653 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf2655 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf2657 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf265du);
  /* 12cf265d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2660 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2662 call 0x12cf2ea0 */
  push32(0x12cf2667u); f_12cf2ea0();
  /* 12cf2667 mov esi, esp */
  ESI = (ESP);
  /* 12cf2669 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf266b push 0x12d20450 */
  push32((uint32_t)(0x12d20450u));
  /* 12cf2670 push 0x12d203f8 */
  push32((uint32_t)(0x12d203f8u));
  /* 12cf2675 call dword ptr [0x12d23454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23454))), 0x12cf267bu);
  /* 12cf267b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf267e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2680 call 0x12cf2ea0 */
  push32(0x12cf2685u); f_12cf2ea0();
L_12cf2685:;
  /* 12cf2685 mov esi, esp */
  ESI = (ESP);
  /* 12cf2687 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12cf2689 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf268fu);
  /* 12cf268f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2694 call 0x12cf2ea0 */
  push32(0x12cf2699u); f_12cf2ea0();
  /* 12cf2699 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf269e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf26a0 je 0x12cf2719 */
  if (C.zf) goto L_12cf2719;
  /* 12cf26a2 mov esi, esp */
  ESI = (ESP);
  /* 12cf26a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf26a6 push 0x12d20420 */
  push32((uint32_t)(0x12d20420u));
  /* 12cf26ab call dword ptr [0x12d2344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2344c))), 0x12cf26b1u);
  /* 12cf26b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf26b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf26b6 call 0x12cf2ea0 */
  push32(0x12cf26bbu); f_12cf2ea0();
  /* 12cf26bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf26bd jle 0x12cf2719 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf2719;
  /* 12cf26bf mov esi, esp */
  ESI = (ESP);
  /* 12cf26c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf26c3 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12cf26c5 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf26cbu);
  /* 12cf26cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf26ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf26d0 call 0x12cf2ea0 */
  push32(0x12cf26d5u); f_12cf2ea0();
  /* 12cf26d5 mov esi, esp */
  ESI = (ESP);
  /* 12cf26d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf26d9 push 0x12d20420 */
  push32((uint32_t)(0x12d20420u));
  /* 12cf26de call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf26e4u);
  /* 12cf26e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf26e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf26e9 call 0x12cf2ea0 */
  push32(0x12cf26eeu); f_12cf2ea0();
  /* 12cf26ee mov esi, esp */
  ESI = (ESP);
  /* 12cf26f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf26f2 call dword ptr [0x12d23450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23450))), 0x12cf26f8u);
  /* 12cf26f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf26fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf26fd call 0x12cf2ea0 */
  push32(0x12cf2702u); f_12cf2ea0();
  /* 12cf2702 mov esi, esp */
  ESI = (ESP);
  /* 12cf2704 push 0x12d1b15c */
  push32((uint32_t)(0x12d1b15cu));
  /* 12cf2709 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf270fu);
  /* 12cf270f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2714 call 0x12cf2ea0 */
  push32(0x12cf2719u); f_12cf2ea0();
L_12cf2719:;
  /* 12cf2719 mov esi, esp */
  ESI = (ESP);
  /* 12cf271b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cf271d call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf2723u);
  /* 12cf2723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2728 call 0x12cf2ea0 */
  push32(0x12cf272du); f_12cf2ea0();
  /* 12cf272d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2734 je 0x12cf27c7 */
  if (C.zf) goto L_12cf27c7;
  /* 12cf273a mov esi, esp */
  ESI = (ESP);
  /* 12cf273c push 0x12d20498 */
  push32((uint32_t)(0x12d20498u));
  /* 12cf2741 call dword ptr [0x12d23428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23428))), 0x12cf2747u);
  /* 12cf2747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf274a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf274c call 0x12cf2ea0 */
  push32(0x12cf2751u); f_12cf2ea0();
  /* 12cf2751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2753 jne 0x12cf27c7 */
  if (!C.zf) goto L_12cf27c7;
  /* 12cf2755 mov esi, esp */
  ESI = (ESP);
  /* 12cf2757 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2759 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cf275b call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf2761u);
  /* 12cf2761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2764 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2766 call 0x12cf2ea0 */
  push32(0x12cf276bu); f_12cf2ea0();
  /* 12cf276b mov esi, esp */
  ESI = (ESP);
  /* 12cf276d push 0x12d1b150 */
  push32((uint32_t)(0x12d1b150u));
  /* 12cf2772 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf2778u);
  /* 12cf2778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf277b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf277d call 0x12cf2ea0 */
  push32(0x12cf2782u); f_12cf2ea0();
  /* 12cf2782 mov esi, esp */
  ESI = (ESP);
  /* 12cf2784 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf2786 push 0x12d204a8 */
  push32((uint32_t)(0x12d204a8u));
  /* 12cf278b call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf2791u);
  /* 12cf2791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2796 call 0x12cf2ea0 */
  push32(0x12cf279bu); f_12cf2ea0();
  /* 12cf279b mov esi, esp */
  ESI = (ESP);
  /* 12cf279d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf279f push 5 */
  push32((uint32_t)(0x5u));
  /* 12cf27a1 call dword ptr [0x12d2343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2343c))), 0x12cf27a7u);
  /* 12cf27a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf27aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf27ac call 0x12cf2ea0 */
  push32(0x12cf27b1u); f_12cf2ea0();
  /* 12cf27b1 mov esi, esp */
  ESI = (ESP);
  /* 12cf27b3 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cf27b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf27b7 call dword ptr [0x12d2341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2341c))), 0x12cf27bdu);
  /* 12cf27bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf27c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf27c2 call 0x12cf2ea0 */
  push32(0x12cf27c7u); f_12cf2ea0();
L_12cf27c7:;
  /* 12cf27c7 mov esi, esp */
  ESI = (ESP);
  /* 12cf27c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf27cb call dword ptr [0x12d2345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2345c))), 0x12cf27d1u);
  /* 12cf27d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf27d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf27d6 call 0x12cf2ea0 */
  push32(0x12cf27dbu); f_12cf2ea0();
  /* 12cf27db and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf27e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf27e2 je 0x12cf2816 */
  if (C.zf) goto L_12cf2816;
  /* 12cf27e4 mov esi, esp */
  ESI = (ESP);
  /* 12cf27e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf27e8 push 0x12d204b0 */
  push32((uint32_t)(0x12d204b0u));
  /* 12cf27ed call dword ptr [0x12d23410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23410))), 0x12cf27f3u);
  /* 12cf27f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf27f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf27f8 call 0x12cf2ea0 */
  push32(0x12cf27fdu); f_12cf2ea0();
  /* 12cf27fd mov esi, esp */
  ESI = (ESP);
  /* 12cf27ff push 0x12d204a8 */
  push32((uint32_t)(0x12d204a8u));
  /* 12cf2804 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf2806 call dword ptr [0x12d23460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23460))), 0x12cf280cu);
  /* 12cf280c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf280f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2811 call 0x12cf2ea0 */
  push32(0x12cf2816u); f_12cf2ea0();
L_12cf2816:;
  /* 12cf2816 mov esi, esp */
  ESI = (ESP);
  /* 12cf2818 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12cf281a call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf2820u);
  /* 12cf2820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2825 call 0x12cf2ea0 */
  push32(0x12cf282au); f_12cf2ea0();
  /* 12cf282a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf282f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2831 je 0x12cf2874 */
  if (C.zf) goto L_12cf2874;
  /* 12cf2833 mov esi, esp */
  ESI = (ESP);
  /* 12cf2835 push 0x12d204a0 */
  push32((uint32_t)(0x12d204a0u));
  /* 12cf283a call dword ptr [0x12d23428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23428))), 0x12cf2840u);
  /* 12cf2840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2845 call 0x12cf2ea0 */
  push32(0x12cf284au); f_12cf2ea0();
  /* 12cf284a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf284c jne 0x12cf2874 */
  if (!C.zf) goto L_12cf2874;
  /* 12cf284e mov esi, esp */
  ESI = (ESP);
  /* 12cf2850 push 0x12d1b144 */
  push32((uint32_t)(0x12d1b144u));
  /* 12cf2855 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf285bu);
  /* 12cf285b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf285e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2860 call 0x12cf2ea0 */
  push32(0x12cf2865u); f_12cf2ea0();
  /* 12cf2865 mov esi, esp */
  ESI = (ESP);
  /* 12cf2867 call dword ptr [0x12d2342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2342c))), 0x12cf286du);
  /* 12cf286d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf286f call 0x12cf2ea0 */
  push32(0x12cf2874u); f_12cf2ea0();
L_12cf2874:;
  /* 12cf2874 mov esi, esp */
  ESI = (ESP);
  /* 12cf2876 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12cf2878 call dword ptr [0x12d23400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23400))), 0x12cf287eu);
  /* 12cf287e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2883 call 0x12cf2ea0 */
  push32(0x12cf2888u); f_12cf2ea0();
  /* 12cf2888 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf288d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf288f je 0x12cf28e8 */
  if (C.zf) goto L_12cf28e8;
  /* 12cf2891 mov esi, esp */
  ESI = (ESP);
  /* 12cf2893 push 0x12d204b0 */
  push32((uint32_t)(0x12d204b0u));
  /* 12cf2898 call dword ptr [0x12d23428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23428))), 0x12cf289eu);
  /* 12cf289e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf28a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf28a3 call 0x12cf2ea0 */
  push32(0x12cf28a8u); f_12cf2ea0();
  /* 12cf28a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf28aa jne 0x12cf28e8 */
  if (!C.zf) goto L_12cf28e8;
  /* 12cf28ac mov esi, esp */
  ESI = (ESP);
  /* 12cf28ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf28b0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12cf28b2 call dword ptr [0x12d23404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23404))), 0x12cf28b8u);
  /* 12cf28b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf28bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf28bd call 0x12cf2ea0 */
  push32(0x12cf28c2u); f_12cf2ea0();
  /* 12cf28c2 mov esi, esp */
  ESI = (ESP);
  /* 12cf28c4 push 0x12d1b138 */
  push32((uint32_t)(0x12d1b138u));
  /* 12cf28c9 call dword ptr [0x12d2340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2340c))), 0x12cf28cfu);
  /* 12cf28cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf28d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf28d4 call 0x12cf2ea0 */
  push32(0x12cf28d9u); f_12cf2ea0();
  /* 12cf28d9 mov esi, esp */
  ESI = (ESP);
  /* 12cf28db call dword ptr [0x12d23464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23464))), 0x12cf28e1u);
  /* 12cf28e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf28e3 call 0x12cf2ea0 */
  push32(0x12cf28e8u); f_12cf2ea0();
L_12cf28e8:;
  /* 12cf28e8 pop edi */
  EDI = (pop32());
  /* 12cf28e9 pop esi */
  ESI = (pop32());
  /* 12cf28ea pop ebx */
  EBX = (pop32());
  /* 12cf28eb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf28ee cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf28f0 call 0x12cf2ea0 */
  push32(0x12cf28f5u); f_12cf2ea0();
  /* 12cf28f5 mov esp, ebp */
  ESP = (EBP);
  /* 12cf28f7 pop ebp */
  EBP = (pop32());
  /* 12cf28f8 ret  */
  ESPCHK(0x12cf1540u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12cf2ea0 (56 bytes, 28 insns) */
void f_12cf2ea0(void) {
  FTRACE(0x12cf2ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf2ea0 jne 0x12cf2ea3 */
  if (!C.zf) goto L_12cf2ea3;
  /* 12cf2ea2 ret  */
  ESPCHK(0x12cf2ea0u, _esp0);
  ESP += 4; return;
L_12cf2ea3:;
  /* 12cf2ea3 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf2ea4 mov ebp, esp */
  EBP = (ESP);
  /* 12cf2ea6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf2ea9 push eax */
  push32((uint32_t)(EAX));
  /* 12cf2eaa push edx */
  push32((uint32_t)(EDX));
  /* 12cf2eab push ebx */
  push32((uint32_t)(EBX));
  /* 12cf2eac push esi */
  push32((uint32_t)(ESI));
  /* 12cf2ead push edi */
  push32((uint32_t)(EDI));
  /* 12cf2eae push 0x12d1b4e8 */
  push32((uint32_t)(0x12d1b4e8u));
  /* 12cf2eb3 push 0x12d1b4e4 */
  push32((uint32_t)(0x12d1b4e4u));
  /* 12cf2eb8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12cf2eba push 0x12d1b4d4 */
  push32((uint32_t)(0x12d1b4d4u));
  /* 12cf2ebf push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf2ec1 call 0x12cf3270 */
  push32(0x12cf2ec6u); f_12cf3270();
  /* 12cf2ec6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2ec9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2ecc jne 0x12cf2ecf */
  if (!C.zf) goto L_12cf2ecf;
  /* 12cf2ece int3  */
  x86_unimpl("int3 @ 0x12cf2ece");
L_12cf2ecf:;
  /* 12cf2ecf pop edi */
  EDI = (pop32());
  /* 12cf2ed0 pop esi */
  ESI = (pop32());
  /* 12cf2ed1 pop ebx */
  EBX = (pop32());
  /* 12cf2ed2 pop edx */
  EDX = (pop32());
  /* 12cf2ed3 pop eax */
  EAX = (pop32());
  /* 12cf2ed4 mov esp, ebp */
  ESP = (EBP);
  /* 12cf2ed6 pop ebp */
  EBP = (pop32());
  /* 12cf2ed7 ret  */
  ESPCHK(0x12cf2ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee0 @ 0x12cf2ee0 (313 bytes, 78 insns) */
void f_12cf2ee0(void) {
  FTRACE(0x12cf2ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf2ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf2ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf2ee3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2ee7 jne 0x12cf2fa7 */
  if (!C.zf) goto L_12cf2fa7;
  /* 12cf2eed call dword ptr [0x12d232fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232fc))), 0x12cf2ef3u);
  /* 12cf2ef3 mov dword ptr [0x12d20518], eax */
  w32((uint32_t)(0x12d20518), (EAX));
  /* 12cf2ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf2efa call 0x12cf69a0 */
  push32(0x12cf2effu); f_12cf69a0();
  /* 12cf2eff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2f04 jne 0x12cf2f0d */
  if (!C.zf) goto L_12cf2f0d;
  /* 12cf2f06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2f08 jmp 0x12cf3015 */
  goto L_12cf3015;
L_12cf2f0d:;
  /* 12cf2f0d mov eax, dword ptr [0x12d20518] */
  EAX = (r32((uint32_t)(0x12d20518)));
  /* 12cf2f12 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12cf2f15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2f1a mov dword ptr [0x12d20524], eax */
  w32((uint32_t)(0x12d20524), (EAX));
  /* 12cf2f1f mov ecx, dword ptr [0x12d20518] */
  ECX = (r32((uint32_t)(0x12d20518)));
  /* 12cf2f25 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf2f2b mov dword ptr [0x12d20520], ecx */
  w32((uint32_t)(0x12d20520), (ECX));
  /* 12cf2f31 mov edx, dword ptr [0x12d20520] */
  EDX = (r32((uint32_t)(0x12d20520)));
  /* 12cf2f37 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12cf2f3a add edx, dword ptr [0x12d20524] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d20524))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2f40 mov dword ptr [0x12d2051c], edx */
  w32((uint32_t)(0x12d2051c), (EDX));
  /* 12cf2f46 mov eax, dword ptr [0x12d20518] */
  EAX = (r32((uint32_t)(0x12d20518)));
  /* 12cf2f4b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cf2f4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2f53 mov dword ptr [0x12d20518], eax */
  w32((uint32_t)(0x12d20518), (EAX));
  /* 12cf2f58 call 0x12cf3b10 */
  push32(0x12cf2f5du); f_12cf3b10();
  /* 12cf2f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2f5f jne 0x12cf2f6d */
  if (!C.zf) goto L_12cf2f6d;
  /* 12cf2f61 call 0x12cf69f0 */
  push32(0x12cf2f66u); f_12cf69f0();
  /* 12cf2f66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2f68 jmp 0x12cf3015 */
  goto L_12cf3015;
L_12cf2f6d:;
  /* 12cf2f6d call dword ptr [0x12d232f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232f8))), 0x12cf2f73u);
  /* 12cf2f73 mov dword ptr [0x12d2206c], eax */
  w32((uint32_t)(0x12d2206c), (EAX));
  /* 12cf2f78 call 0x12cf6780 */
  push32(0x12cf2f7du); f_12cf6780();
  /* 12cf2f7d mov dword ptr [0x12d20500], eax */
  w32((uint32_t)(0x12d20500), (EAX));
  /* 12cf2f82 call 0x12cf3dc0 */
  push32(0x12cf2f87u); f_12cf3dc0();
  /* 12cf2f87 call 0x12cf6270 */
  push32(0x12cf2f8cu); f_12cf6270();
  /* 12cf2f8c call 0x12cf6120 */
  push32(0x12cf2f91u); f_12cf6120();
  /* 12cf2f91 call 0x12cf3910 */
  push32(0x12cf2f96u); f_12cf3910();
  /* 12cf2f96 mov ecx, dword ptr [0x12d204fc] */
  ECX = (r32((uint32_t)(0x12d204fc)));
  /* 12cf2f9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2f9f mov dword ptr [0x12d204fc], ecx */
  w32((uint32_t)(0x12d204fc), (ECX));
  /* 12cf2fa5 jmp 0x12cf3010 */
  goto L_12cf3010;
L_12cf2fa7:;
  /* 12cf2fa7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2fab jne 0x12cf3000 */
  if (!C.zf) goto L_12cf3000;
  /* 12cf2fad cmp dword ptr [0x12d204fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d204fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2fb4 jle 0x12cf2ffa */
  if ((C.zf||C.sf!=C.of)) goto L_12cf2ffa;
  /* 12cf2fb6 mov edx, dword ptr [0x12d204fc] */
  EDX = (r32((uint32_t)(0x12d204fc)));
  /* 12cf2fbc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf2fbf mov dword ptr [0x12d204fc], edx */
  w32((uint32_t)(0x12d204fc), (EDX));
  /* 12cf2fc5 cmp dword ptr [0x12d20550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf2fcc jne 0x12cf2fd3 */
  if (!C.zf) goto L_12cf2fd3;
  /* 12cf2fce call 0x12cf3990 */
  push32(0x12cf2fd3u); f_12cf3990();
L_12cf2fd3:;
  /* 12cf2fd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cf2fd5 call 0x12cf56c0 */
  push32(0x12cf2fdau); f_12cf56c0();
  /* 12cf2fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf2fdd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2fe0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf2fe2 je 0x12cf2fe9 */
  if (C.zf) goto L_12cf2fe9;
  /* 12cf2fe4 call 0x12cf5fd0 */
  push32(0x12cf2fe9u); f_12cf5fd0();
L_12cf2fe9:;
  /* 12cf2fe9 call 0x12cf40f0 */
  push32(0x12cf2feeu); f_12cf40f0();
  /* 12cf2fee call 0x12cf3ba0 */
  push32(0x12cf2ff3u); f_12cf3ba0();
  /* 12cf2ff3 call 0x12cf69f0 */
  push32(0x12cf2ff8u); f_12cf69f0();
  /* 12cf2ff8 jmp 0x12cf2ffe */
  goto L_12cf2ffe;
L_12cf2ffa:;
  /* 12cf2ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf2ffc jmp 0x12cf3015 */
  goto L_12cf3015;
L_12cf2ffe:;
  /* 12cf2ffe jmp 0x12cf3010 */
  goto L_12cf3010;
L_12cf3000:;
  /* 12cf3000 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3004 jne 0x12cf3010 */
  if (!C.zf) goto L_12cf3010;
  /* 12cf3006 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf3008 call 0x12cf3c90 */
  push32(0x12cf300du); f_12cf3c90();
  /* 12cf300d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3010:;
  /* 12cf3010 mov eax, 1 */
  EAX = (0x1u);
L_12cf3015:;
  /* 12cf3015 pop ebp */
  EBP = (pop32());
  /* 12cf3016 ret 0xc */
  ESPCHK(0x12cf2ee0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12cf3020 (243 bytes, 86 insns) */
void f_12cf3020(void) {
  FTRACE(0x12cf3020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3020 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3021 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3023 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3024 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cf302b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf302f jne 0x12cf3041 */
  if (!C.zf) goto L_12cf3041;
  /* 12cf3031 cmp dword ptr [0x12d204fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d204fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3038 jne 0x12cf3041 */
  if (!C.zf) goto L_12cf3041;
  /* 12cf303a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf303c jmp 0x12cf310d */
  goto L_12cf310d;
L_12cf3041:;
  /* 12cf3041 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3045 je 0x12cf304d */
  if (C.zf) goto L_12cf304d;
  /* 12cf3047 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf304b jne 0x12cf308f */
  if (!C.zf) goto L_12cf308f;
L_12cf304d:;
  /* 12cf304d cmp dword ptr [0x12d2207c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2207c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3054 je 0x12cf306b */
  if (C.zf) goto L_12cf306b;
  /* 12cf3056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf3059 push eax */
  push32((uint32_t)(EAX));
  /* 12cf305a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf305d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf305e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3061 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3062 call dword ptr [0x12d2207c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2207c))), 0x12cf3068u);
  /* 12cf3068 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf306b:;
  /* 12cf306b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf306f je 0x12cf3085 */
  if (C.zf) goto L_12cf3085;
  /* 12cf3071 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf3074 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3075 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf3078 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf307c push edx */
  push32((uint32_t)(EDX));
  /* 12cf307d call 0x12cf2ee0 */
  push32(0x12cf3082u); f_12cf2ee0();
  /* 12cf3082 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf3085:;
  /* 12cf3085 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3089 jne 0x12cf308f */
  if (!C.zf) goto L_12cf308f;
  /* 12cf308b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf308d jmp 0x12cf310d */
  goto L_12cf310d;
L_12cf308f:;
  /* 12cf308f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf3092 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3093 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf3096 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf309a push edx */
  push32((uint32_t)(EDX));
  /* 12cf309b call 0x12cf100a */
  push32(0x12cf30a0u); f_12cf100a();
  /* 12cf30a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf30a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf30a7 jne 0x12cf30be */
  if (!C.zf) goto L_12cf30be;
  /* 12cf30a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf30ad jne 0x12cf30be */
  if (!C.zf) goto L_12cf30be;
  /* 12cf30af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf30b2 push eax */
  push32((uint32_t)(EAX));
  /* 12cf30b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf30b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf30b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf30b9 call 0x12cf2ee0 */
  push32(0x12cf30beu); f_12cf2ee0();
L_12cf30be:;
  /* 12cf30be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf30c2 je 0x12cf30ca */
  if (C.zf) goto L_12cf30ca;
  /* 12cf30c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf30c8 jne 0x12cf310a */
  if (!C.zf) goto L_12cf310a;
L_12cf30ca:;
  /* 12cf30ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf30cd push edx */
  push32((uint32_t)(EDX));
  /* 12cf30ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf30d1 push eax */
  push32((uint32_t)(EAX));
  /* 12cf30d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf30d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf30d6 call 0x12cf2ee0 */
  push32(0x12cf30dbu); f_12cf2ee0();
  /* 12cf30db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf30dd jne 0x12cf30e6 */
  if (!C.zf) goto L_12cf30e6;
  /* 12cf30df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cf30e6:;
  /* 12cf30e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf30ea je 0x12cf310a */
  if (C.zf) goto L_12cf310a;
  /* 12cf30ec cmp dword ptr [0x12d2207c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2207c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf30f3 je 0x12cf310a */
  if (C.zf) goto L_12cf310a;
  /* 12cf30f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf30f8 push edx */
  push32((uint32_t)(EDX));
  /* 12cf30f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf30fc push eax */
  push32((uint32_t)(EAX));
  /* 12cf30fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3100 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3101 call dword ptr [0x12d2207c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2207c))), 0x12cf3107u);
  /* 12cf3107 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf310a:;
  /* 12cf310a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cf310d:;
  /* 12cf310d mov esp, ebp */
  ESP = (EBP);
  /* 12cf310f pop ebp */
  EBP = (pop32());
  /* 12cf3110 ret 0xc */
  ESPCHK(0x12cf3020u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12cf3120 (58 bytes, 18 insns) */
void f_12cf3120(void) {
  FTRACE(0x12cf3120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3120 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3121 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3123 cmp dword ptr [0x12d20508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf312a je 0x12cf313e */
  if (C.zf) goto L_12cf313e;
  /* 12cf312c cmp dword ptr [0x12d20508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3133 jne 0x12cf3143 */
  if (!C.zf) goto L_12cf3143;
  /* 12cf3135 cmp dword ptr [0x12d2050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d2050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf313c jne 0x12cf3143 */
  if (!C.zf) goto L_12cf3143;
L_12cf313e:;
  /* 12cf313e call 0x12cf6a90 */
  push32(0x12cf3143u); f_12cf6a90();
L_12cf3143:;
  /* 12cf3143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3146 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3147 call 0x12cf6ae0 */
  push32(0x12cf314cu); f_12cf6ae0();
  /* 12cf314c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf314f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cf3154 call dword ptr [0x12d1ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d1ea30))), 0x12cf315au);
  /* 12cf315a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf315d pop ebp */
  EBP = (pop32());
  /* 12cf315e ret  */
  ESPCHK(0x12cf3120u, _esp0);
  ESP += 4; return;
}

/* FUN_10003160 @ 0x12cf3160 (11 bytes, 5 insns) */
void f_12cf3160(void) {
  FTRACE(0x12cf3160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3160 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3161 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3163 call dword ptr [0x12d23300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23300))), 0x12cf3169u);
  /* 12cf3169 pop ebp */
  EBP = (pop32());
  /* 12cf316a ret  */
  ESPCHK(0x12cf3160u, _esp0);
  ESP += 4; return;
}

/* FUN_10003170 @ 0x12cf3170 (87 bytes, 30 insns) */
void f_12cf3170(void) {
  FTRACE(0x12cf3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3170 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3171 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3173 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3174 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3178 jl 0x12cf3180 */
  if ((C.sf!=C.of)) goto L_12cf3180;
  /* 12cf317a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf317e jl 0x12cf3185 */
  if ((C.sf!=C.of)) goto L_12cf3185;
L_12cf3180:;
  /* 12cf3180 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf3183 jmp 0x12cf31c3 */
  goto L_12cf31c3;
L_12cf3185:;
  /* 12cf3185 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3189 jne 0x12cf3197 */
  if (!C.zf) goto L_12cf3197;
  /* 12cf318b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf318e mov eax, dword ptr [eax*4 + 0x12d1ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d1ea38)));
  /* 12cf3195 jmp 0x12cf31c3 */
  goto L_12cf31c3;
L_12cf3197:;
  /* 12cf3197 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf319a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf319d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf319f je 0x12cf31a6 */
  if (C.zf) goto L_12cf31a6;
  /* 12cf31a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf31a4 jmp 0x12cf31c3 */
  goto L_12cf31c3;
L_12cf31a6:;
  /* 12cf31a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf31a9 mov eax, dword ptr [edx*4 + 0x12d1ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d1ea38)));
  /* 12cf31b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf31b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf31b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf31b9 mov dword ptr [ecx*4 + 0x12d1ea38], edx */
  w32((uint32_t)(ECX*4 + 0x12d1ea38), (EDX));
  /* 12cf31c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cf31c3:;
  /* 12cf31c3 mov esp, ebp */
  ESP = (EBP);
  /* 12cf31c5 pop ebp */
  EBP = (pop32());
  /* 12cf31c6 ret  */
  ESPCHK(0x12cf3170u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12cf31d0 (126 bytes, 38 insns) */
void f_12cf31d0(void) {
  FTRACE(0x12cf31d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf31d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf31d1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf31d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf31d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf31d8 jl 0x12cf31e0 */
  if ((C.sf!=C.of)) goto L_12cf31e0;
  /* 12cf31da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf31de jl 0x12cf31e7 */
  if ((C.sf!=C.of)) goto L_12cf31e7;
L_12cf31e0:;
  /* 12cf31e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12cf31e5 jmp 0x12cf324a */
  goto L_12cf324a;
L_12cf31e7:;
  /* 12cf31e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf31eb jne 0x12cf31f9 */
  if (!C.zf) goto L_12cf31f9;
  /* 12cf31ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf31f0 mov eax, dword ptr [eax*4 + 0x12d1ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d1ea44)));
  /* 12cf31f7 jmp 0x12cf324a */
  goto L_12cf324a;
L_12cf31f9:;
  /* 12cf31f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf31fc mov edx, dword ptr [ecx*4 + 0x12d1ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1ea44)));
  /* 12cf3203 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf3206 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf320a jne 0x12cf3220 */
  if (!C.zf) goto L_12cf3220;
  /* 12cf320c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12cf320e call dword ptr [0x12d23304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23304))), 0x12cf3214u);
  /* 12cf3214 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3217 mov dword ptr [ecx*4 + 0x12d1ea44], eax */
  w32((uint32_t)(ECX*4 + 0x12d1ea44), (EAX));
  /* 12cf321e jmp 0x12cf3247 */
  goto L_12cf3247;
L_12cf3220:;
  /* 12cf3220 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3224 jne 0x12cf323a */
  if (!C.zf) goto L_12cf323a;
  /* 12cf3226 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12cf3228 call dword ptr [0x12d23304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23304))), 0x12cf322eu);
  /* 12cf322e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3231 mov dword ptr [edx*4 + 0x12d1ea44], eax */
  w32((uint32_t)(EDX*4 + 0x12d1ea44), (EAX));
  /* 12cf3238 jmp 0x12cf3247 */
  goto L_12cf3247;
L_12cf323a:;
  /* 12cf323a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf323d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf3240 mov dword ptr [eax*4 + 0x12d1ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x12d1ea44), (ECX));
L_12cf3247:;
  /* 12cf3247 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cf324a:;
  /* 12cf324a mov esp, ebp */
  ESP = (EBP);
  /* 12cf324c pop ebp */
  EBP = (pop32());
  /* 12cf324d ret  */
  ESPCHK(0x12cf31d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x12cf3250 (28 bytes, 11 insns) */
void f_12cf3250(void) {
  FTRACE(0x12cf3250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3250 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3251 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3253 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3254 mov eax, dword ptr [0x12d22060] */
  EAX = (r32((uint32_t)(0x12d22060)));
  /* 12cf3259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf325c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf325f mov dword ptr [0x12d22060], ecx */
  w32((uint32_t)(0x12d22060), (ECX));
  /* 12cf3265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3268 mov esp, ebp */
  ESP = (EBP);
  /* 12cf326a pop ebp */
  EBP = (pop32());
  /* 12cf326b ret  */
  ESPCHK(0x12cf3250u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x12cf3270 (912 bytes, 248 insns) */
void f_12cf3270(void) {
  FTRACE(0x12cf3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3270 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3271 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3273 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12cf3278 call 0x12cf7350 */
  push32(0x12cf327du); f_12cf7350();
  /* 12cf327d push edi */
  push32((uint32_t)(EDI));
  /* 12cf327e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12cf3285 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12cf328a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf328c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12cf3292 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cf3294 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12cf3296 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12cf3297 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12cf329e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12cf32a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf32a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12cf32ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cf32ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12cf32af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12cf32b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12cf32b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12cf32bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf32be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12cf32c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cf32c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12cf32c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12cf32c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12cf32cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12cf32d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf32d6 jl 0x12cf32de */
  if ((C.sf!=C.of)) goto L_12cf32de;
  /* 12cf32d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf32dc jl 0x12cf32e6 */
  if ((C.sf!=C.of)) goto L_12cf32e6;
L_12cf32de:;
  /* 12cf32de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf32e1 jmp 0x12cf35fb */
  goto L_12cf35fb;
L_12cf32e6:;
  /* 12cf32e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf32ea jne 0x12cf3390 */
  if (!C.zf) goto L_12cf3390;
  /* 12cf32f0 push 0x12d1ea34 */
  push32((uint32_t)(0x12d1ea34u));
  /* 12cf32f5 call dword ptr [0x12d2331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2331c))), 0x12cf32fbu);
  /* 12cf32fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf32fd jle 0x12cf3390 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf3390;
  /* 12cf3303 cmp dword ptr [0x12d20510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf330a jne 0x12cf334e */
  if (!C.zf) goto L_12cf334e;
  /* 12cf330c push 0x12d1b690 */
  push32((uint32_t)(0x12d1b690u));
  /* 12cf3311 call dword ptr [0x12d23318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23318))), 0x12cf3317u);
  /* 12cf3317 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12cf331d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3324 je 0x12cf3346 */
  if (C.zf) goto L_12cf3346;
  /* 12cf3326 push 0x12d1b684 */
  push32((uint32_t)(0x12d1b684u));
  /* 12cf332b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12cf3331 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3332 call dword ptr [0x12d23314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23314))), 0x12cf3338u);
  /* 12cf3338 mov dword ptr [0x12d20510], eax */
  w32((uint32_t)(0x12d20510), (EAX));
  /* 12cf333d cmp dword ptr [0x12d20510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3344 jne 0x12cf334e */
  if (!C.zf) goto L_12cf334e;
L_12cf3346:;
  /* 12cf3346 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf3349 jmp 0x12cf35fb */
  goto L_12cf35fb;
L_12cf334e:;
  /* 12cf334e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf3351 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3352 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf3355 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3356 push 0x12d1b650 */
  push32((uint32_t)(0x12d1b650u));
  /* 12cf335b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12cf3361 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3362 call dword ptr [0x12d20510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d20510))), 0x12cf3368u);
  /* 12cf3368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf336b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12cf3371 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3372 call dword ptr [0x12d23310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23310))), 0x12cf3378u);
  /* 12cf3378 push 0x12d1ea34 */
  push32((uint32_t)(0x12d1ea34u));
  /* 12cf337d call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12cf3383u);
  /* 12cf3383 call 0x12cf3160 */
  push32(0x12cf3388u); f_12cf3160();
  /* 12cf3388 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf338b jmp 0x12cf35fb */
  goto L_12cf35fb;
L_12cf3390:;
  /* 12cf3390 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3394 je 0x12cf33cd */
  if (C.zf) goto L_12cf33cd;
  /* 12cf3396 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12cf339c push eax */
  push32((uint32_t)(EAX));
  /* 12cf339d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf33a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf33a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12cf33a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12cf33ac push edx */
  push32((uint32_t)(EDX));
  /* 12cf33ad call 0x12cf7250 */
  push32(0x12cf33b2u); f_12cf7250();
  /* 12cf33b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf33b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf33b7 jge 0x12cf33cd */
  if ((C.sf==C.of)) goto L_12cf33cd;
  /* 12cf33b9 push 0x12d1b624 */
  push32((uint32_t)(0x12d1b624u));
  /* 12cf33be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12cf33c4 push eax */
  push32((uint32_t)(EAX));
  /* 12cf33c5 call 0x12cf7160 */
  push32(0x12cf33cau); f_12cf7160();
  /* 12cf33ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf33cd:;
  /* 12cf33cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf33d1 jne 0x12cf3405 */
  if (!C.zf) goto L_12cf3405;
  /* 12cf33d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf33d7 je 0x12cf33e5 */
  if (C.zf) goto L_12cf33e5;
  /* 12cf33d9 mov dword ptr [ebp - 0x3028], 0x12d1b610 */
  w32((uint32_t)(EBP + -0x3028), (0x12d1b610u));
  /* 12cf33e3 jmp 0x12cf33ef */
  goto L_12cf33ef;
L_12cf33e5:;
  /* 12cf33e5 mov dword ptr [ebp - 0x3028], 0x12d1b5fc */
  w32((uint32_t)(EBP + -0x3028), (0x12d1b5fcu));
L_12cf33ef:;
  /* 12cf33ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12cf33f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf33f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12cf33fc push edx */
  push32((uint32_t)(EDX));
  /* 12cf33fd call 0x12cf7160 */
  push32(0x12cf3402u); f_12cf7160();
  /* 12cf3402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3405:;
  /* 12cf3405 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12cf340b push eax */
  push32((uint32_t)(EAX));
  /* 12cf340c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12cf3412 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3413 call 0x12cf7170 */
  push32(0x12cf3418u); f_12cf7170();
  /* 12cf3418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf341b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf341f jne 0x12cf345a */
  if (!C.zf) goto L_12cf345a;
  /* 12cf3421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3424 mov eax, dword ptr [edx*4 + 0x12d1ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d1ea38)));
  /* 12cf342b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf342e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf3430 je 0x12cf3446 */
  if (C.zf) goto L_12cf3446;
  /* 12cf3432 push 0x12d1b5f8 */
  push32((uint32_t)(0x12d1b5f8u));
  /* 12cf3437 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12cf343d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf343e call 0x12cf7170 */
  push32(0x12cf3443u); f_12cf7170();
  /* 12cf3443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3446:;
  /* 12cf3446 push 0x12d1b5f4 */
  push32((uint32_t)(0x12d1b5f4u));
  /* 12cf344b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12cf3451 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3452 call 0x12cf7170 */
  push32(0x12cf3457u); f_12cf7170();
  /* 12cf3457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf345a:;
  /* 12cf345a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf345e je 0x12cf34a2 */
  if (C.zf) goto L_12cf34a2;
  /* 12cf3460 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12cf3466 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3467 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf346a push ecx */
  push32((uint32_t)(ECX));
  /* 12cf346b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf346e push edx */
  push32((uint32_t)(EDX));
  /* 12cf346f push 0x12d1b5e8 */
  push32((uint32_t)(0x12d1b5e8u));
  /* 12cf3474 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cf3479 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12cf347f push eax */
  push32((uint32_t)(EAX));
  /* 12cf3480 call 0x12cf7060 */
  push32(0x12cf3485u); f_12cf7060();
  /* 12cf3485 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf348a jge 0x12cf34a0 */
  if ((C.sf==C.of)) goto L_12cf34a0;
  /* 12cf348c push 0x12d1b624 */
  push32((uint32_t)(0x12d1b624u));
  /* 12cf3491 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12cf3497 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3498 call 0x12cf7160 */
  push32(0x12cf349du); f_12cf7160();
  /* 12cf349d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf34a0:;
  /* 12cf34a0 jmp 0x12cf34b8 */
  goto L_12cf34b8;
L_12cf34a2:;
  /* 12cf34a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12cf34a8 push edx */
  push32((uint32_t)(EDX));
  /* 12cf34a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12cf34af push eax */
  push32((uint32_t)(EAX));
  /* 12cf34b0 call 0x12cf7160 */
  push32(0x12cf34b5u); f_12cf7160();
  /* 12cf34b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf34b8:;
  /* 12cf34b8 cmp dword ptr [0x12d22060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d22060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf34bf je 0x12cf34fc */
  if (C.zf) goto L_12cf34fc;
  /* 12cf34c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12cf34c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf34c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12cf34ce push edx */
  push32((uint32_t)(EDX));
  /* 12cf34cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf34d2 push eax */
  push32((uint32_t)(EAX));
  /* 12cf34d3 call dword ptr [0x12d22060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d22060))), 0x12cf34d9u);
  /* 12cf34d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf34dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf34de je 0x12cf34fc */
  if (C.zf) goto L_12cf34fc;
  /* 12cf34e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf34e4 jne 0x12cf34f1 */
  if (!C.zf) goto L_12cf34f1;
  /* 12cf34e6 push 0x12d1ea34 */
  push32((uint32_t)(0x12d1ea34u));
  /* 12cf34eb call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12cf34f1u);
L_12cf34f1:;
  /* 12cf34f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12cf34f7 jmp 0x12cf35fb */
  goto L_12cf35fb;
L_12cf34fc:;
  /* 12cf34fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf34ff mov edx, dword ptr [ecx*4 + 0x12d1ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1ea38)));
  /* 12cf3506 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf3509 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf350b je 0x12cf354b */
  if (C.zf) goto L_12cf354b;
  /* 12cf350d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3510 cmp dword ptr [eax*4 + 0x12d1ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12d1ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3518 je 0x12cf354b */
  if (C.zf) goto L_12cf354b;
  /* 12cf351a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf351c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12cf3522 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3523 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12cf3529 push edx */
  push32((uint32_t)(EDX));
  /* 12cf352a call 0x12cf6fe0 */
  push32(0x12cf352fu); f_12cf6fe0();
  /* 12cf352f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3532 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3533 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12cf3539 push eax */
  push32((uint32_t)(EAX));
  /* 12cf353a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf353d mov edx, dword ptr [ecx*4 + 0x12d1ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1ea44)));
  /* 12cf3544 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3545 call dword ptr [0x12d23308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23308))), 0x12cf354bu);
L_12cf354b:;
  /* 12cf354b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf354e mov ecx, dword ptr [eax*4 + 0x12d1ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d1ea38)));
  /* 12cf3555 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf3558 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf355a je 0x12cf3569 */
  if (C.zf) goto L_12cf3569;
  /* 12cf355c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12cf3562 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3563 call dword ptr [0x12d23310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23310))), 0x12cf3569u);
L_12cf3569:;
  /* 12cf3569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf356c mov ecx, dword ptr [eax*4 + 0x12d1ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d1ea38)));
  /* 12cf3573 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf3576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf3578 je 0x12cf35e8 */
  if (C.zf) goto L_12cf35e8;
  /* 12cf357a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf357e je 0x12cf359d */
  if (C.zf) goto L_12cf359d;
  /* 12cf3580 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cf3582 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12cf3588 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3589 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf358c push eax */
  push32((uint32_t)(EAX));
  /* 12cf358d call 0x12cf6cf0 */
  push32(0x12cf3592u); f_12cf6cf0();
  /* 12cf3592 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3595 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12cf359b jmp 0x12cf35a7 */
  goto L_12cf35a7;
L_12cf359d:;
  /* 12cf359d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12cf35a7:;
  /* 12cf35a7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12cf35ad push ecx */
  push32((uint32_t)(ECX));
  /* 12cf35ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf35b1 push edx */
  push32((uint32_t)(EDX));
  /* 12cf35b2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12cf35b8 push eax */
  push32((uint32_t)(EAX));
  /* 12cf35b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf35bc push ecx */
  push32((uint32_t)(ECX));
  /* 12cf35bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf35c0 push edx */
  push32((uint32_t)(EDX));
  /* 12cf35c1 call 0x12cf3600 */
  push32(0x12cf35c6u); f_12cf3600();
  /* 12cf35c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf35c9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12cf35cf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf35d3 jne 0x12cf35e0 */
  if (!C.zf) goto L_12cf35e0;
  /* 12cf35d5 push 0x12d1ea34 */
  push32((uint32_t)(0x12d1ea34u));
  /* 12cf35da call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12cf35e0u);
L_12cf35e0:;
  /* 12cf35e0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12cf35e6 jmp 0x12cf35fb */
  goto L_12cf35fb;
L_12cf35e8:;
  /* 12cf35e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf35ec jne 0x12cf35f9 */
  if (!C.zf) goto L_12cf35f9;
  /* 12cf35ee push 0x12d1ea34 */
  push32((uint32_t)(0x12d1ea34u));
  /* 12cf35f3 call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12cf35f9u);
L_12cf35f9:;
  /* 12cf35f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf35fb:;
  /* 12cf35fb pop edi */
  EDI = (pop32());
  /* 12cf35fc mov esp, ebp */
  ESP = (EBP);
  /* 12cf35fe pop ebp */
  EBP = (pop32());
  /* 12cf35ff ret  */
  ESPCHK(0x12cf3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x12cf3600 (780 bytes, 197 insns) */
void f_12cf3600(void) {
  FTRACE(0x12cf3600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3600 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3601 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3603 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12cf3608 call 0x12cf7350 */
  push32(0x12cf360du); f_12cf7350();
L_12cf360d:;
  /* 12cf360d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3611 jne 0x12cf3638 */
  if (!C.zf) goto L_12cf3638;
  /* 12cf3613 push 0x12d1b7e0 */
  push32((uint32_t)(0x12d1b7e0u));
  /* 12cf3618 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf361a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12cf361f push 0x12d1b7d4 */
  push32((uint32_t)(0x12d1b7d4u));
  /* 12cf3624 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3626 call 0x12cf3270 */
  push32(0x12cf362bu); f_12cf3270();
  /* 12cf362b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf362e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3631 jne 0x12cf3638 */
  if (!C.zf) goto L_12cf3638;
  /* 12cf3633 call 0x12cf3160 */
  push32(0x12cf3638u); f_12cf3160();
L_12cf3638:;
  /* 12cf3638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf363a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf363c jne 0x12cf360d */
  if (!C.zf) goto L_12cf360d;
  /* 12cf363e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12cf3643 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12cf3649 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf364a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf364c call dword ptr [0x12d23320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23320))), 0x12cf3652u);
  /* 12cf3652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf3654 jne 0x12cf366a */
  if (!C.zf) goto L_12cf366a;
  /* 12cf3656 push 0x12d1b7bc */
  push32((uint32_t)(0x12d1b7bcu));
  /* 12cf365b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12cf3661 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3662 call 0x12cf7160 */
  push32(0x12cf3667u); f_12cf7160();
  /* 12cf3667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf366a:;
  /* 12cf366a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12cf3670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf3673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3676 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3677 call 0x12cf6fe0 */
  push32(0x12cf367cu); f_12cf6fe0();
  /* 12cf367c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf367f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3682 jbe 0x12cf36ad */
  if ((C.cf||C.zf)) goto L_12cf36ad;
  /* 12cf3684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3687 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3688 call 0x12cf6fe0 */
  push32(0x12cf368du); f_12cf6fe0();
  /* 12cf368d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3690 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3693 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12cf3697 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf369a push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf369c push 0x12d1b7b8 */
  push32((uint32_t)(0x12d1b7b8u));
  /* 12cf36a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf36a4 push eax */
  push32((uint32_t)(EAX));
  /* 12cf36a5 call 0x12cf79d0 */
  push32(0x12cf36aau); f_12cf79d0();
  /* 12cf36aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf36ad:;
  /* 12cf36ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf36b0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12cf36b6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf36bd je 0x12cf3708 */
  if (C.zf) goto L_12cf3708;
  /* 12cf36bf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cf36c5 push edx */
  push32((uint32_t)(EDX));
  /* 12cf36c6 call 0x12cf6fe0 */
  push32(0x12cf36cbu); f_12cf6fe0();
  /* 12cf36cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf36ce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf36d1 jbe 0x12cf3708 */
  if ((C.cf||C.zf)) goto L_12cf3708;
  /* 12cf36d3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cf36d9 push eax */
  push32((uint32_t)(EAX));
  /* 12cf36da call 0x12cf6fe0 */
  push32(0x12cf36dfu); f_12cf6fe0();
  /* 12cf36df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf36e2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cf36e8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12cf36ec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12cf36f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf36f4 push 0x12d1b7b8 */
  push32((uint32_t)(0x12d1b7b8u));
  /* 12cf36f9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cf36ff push eax */
  push32((uint32_t)(EAX));
  /* 12cf3700 call 0x12cf79d0 */
  push32(0x12cf3705u); f_12cf79d0();
  /* 12cf3705 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3708:;
  /* 12cf3708 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf370c jne 0x12cf371a */
  if (!C.zf) goto L_12cf371a;
  /* 12cf370e mov dword ptr [ebp - 0x1114], 0x12d1b744 */
  w32((uint32_t)(EBP + -0x1114), (0x12d1b744u));
  /* 12cf3718 jmp 0x12cf3724 */
  goto L_12cf3724;
L_12cf371a:;
  /* 12cf371a mov dword ptr [ebp - 0x1114], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x1114), (0x12d1b4e4u));
L_12cf3724:;
  /* 12cf3724 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf3727 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cf372a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf372c je 0x12cf3739 */
  if (C.zf) goto L_12cf3739;
  /* 12cf372e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf3731 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12cf3737 jmp 0x12cf3743 */
  goto L_12cf3743;
L_12cf3739:;
  /* 12cf3739 mov dword ptr [ebp - 0x1118], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x1118), (0x12d1b4e4u));
L_12cf3743:;
  /* 12cf3743 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf3746 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cf3749 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf374b je 0x12cf375f */
  if (C.zf) goto L_12cf375f;
  /* 12cf374d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3751 jne 0x12cf375f */
  if (!C.zf) goto L_12cf375f;
  /* 12cf3753 mov dword ptr [ebp - 0x111c], 0x12d1b734 */
  w32((uint32_t)(EBP + -0x111c), (0x12d1b734u));
  /* 12cf375d jmp 0x12cf3769 */
  goto L_12cf3769;
L_12cf375f:;
  /* 12cf375f mov dword ptr [ebp - 0x111c], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x111c), (0x12d1b4e4u));
L_12cf3769:;
  /* 12cf3769 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf376c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf376f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf3771 je 0x12cf377f */
  if (C.zf) goto L_12cf377f;
  /* 12cf3773 mov dword ptr [ebp - 0x1120], 0x12d1b730 */
  w32((uint32_t)(EBP + -0x1120), (0x12d1b730u));
  /* 12cf377d jmp 0x12cf3789 */
  goto L_12cf3789;
L_12cf377f:;
  /* 12cf377f mov dword ptr [ebp - 0x1120], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x1120), (0x12d1b4e4u));
L_12cf3789:;
  /* 12cf3789 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf378d je 0x12cf379a */
  if (C.zf) goto L_12cf379a;
  /* 12cf378f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf3792 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12cf3798 jmp 0x12cf37a4 */
  goto L_12cf37a4;
L_12cf379a:;
  /* 12cf379a mov dword ptr [ebp - 0x1124], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x1124), (0x12d1b4e4u));
L_12cf37a4:;
  /* 12cf37a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf37a8 je 0x12cf37b6 */
  if (C.zf) goto L_12cf37b6;
  /* 12cf37aa mov dword ptr [ebp - 0x1128], 0x12d1b728 */
  w32((uint32_t)(EBP + -0x1128), (0x12d1b728u));
  /* 12cf37b4 jmp 0x12cf37c0 */
  goto L_12cf37c0;
L_12cf37b6:;
  /* 12cf37b6 mov dword ptr [ebp - 0x1128], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x1128), (0x12d1b4e4u));
L_12cf37c0:;
  /* 12cf37c0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf37c4 je 0x12cf37d1 */
  if (C.zf) goto L_12cf37d1;
  /* 12cf37c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf37c9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12cf37cf jmp 0x12cf37db */
  goto L_12cf37db;
L_12cf37d1:;
  /* 12cf37d1 mov dword ptr [ebp - 0x112c], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x112c), (0x12d1b4e4u));
L_12cf37db:;
  /* 12cf37db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf37df je 0x12cf37ed */
  if (C.zf) goto L_12cf37ed;
  /* 12cf37e1 mov dword ptr [ebp - 0x1130], 0x12d1b720 */
  w32((uint32_t)(EBP + -0x1130), (0x12d1b720u));
  /* 12cf37eb jmp 0x12cf37f7 */
  goto L_12cf37f7;
L_12cf37ed:;
  /* 12cf37ed mov dword ptr [ebp - 0x1130], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x1130), (0x12d1b4e4u));
L_12cf37f7:;
  /* 12cf37f7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf37fe je 0x12cf380e */
  if (C.zf) goto L_12cf380e;
  /* 12cf3800 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cf3806 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12cf380c jmp 0x12cf3818 */
  goto L_12cf3818;
L_12cf380e:;
  /* 12cf380e mov dword ptr [ebp - 0x1134], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x1134), (0x12d1b4e4u));
L_12cf3818:;
  /* 12cf3818 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf381f je 0x12cf382d */
  if (C.zf) goto L_12cf382d;
  /* 12cf3821 mov dword ptr [ebp - 0x1138], 0x12d1b714 */
  w32((uint32_t)(EBP + -0x1138), (0x12d1b714u));
  /* 12cf382b jmp 0x12cf3837 */
  goto L_12cf3837;
L_12cf382d:;
  /* 12cf382d mov dword ptr [ebp - 0x1138], 0x12d1b4e4 */
  w32((uint32_t)(EBP + -0x1138), (0x12d1b4e4u));
L_12cf3837:;
  /* 12cf3837 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12cf383d push edx */
  push32((uint32_t)(EDX));
  /* 12cf383e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12cf3844 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3845 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12cf384b push ecx */
  push32((uint32_t)(ECX));
  /* 12cf384c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12cf3852 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3853 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12cf3859 push eax */
  push32((uint32_t)(EAX));
  /* 12cf385a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12cf3860 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3861 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12cf3867 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3868 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12cf386e push eax */
  push32((uint32_t)(EAX));
  /* 12cf386f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12cf3875 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3876 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12cf387c push edx */
  push32((uint32_t)(EDX));
  /* 12cf387d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3880 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3881 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3884 mov edx, dword ptr [ecx*4 + 0x12d1ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1ea50)));
  /* 12cf388b push edx */
  push32((uint32_t)(EDX));
  /* 12cf388c push 0x12d1b6c0 */
  push32((uint32_t)(0x12d1b6c0u));
  /* 12cf3891 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cf3896 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12cf389c push eax */
  push32((uint32_t)(EAX));
  /* 12cf389d call 0x12cf7060 */
  push32(0x12cf38a2u); f_12cf7060();
  /* 12cf38a2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf38a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf38a7 jge 0x12cf38bd */
  if ((C.sf==C.of)) goto L_12cf38bd;
  /* 12cf38a9 push 0x12d1b624 */
  push32((uint32_t)(0x12d1b624u));
  /* 12cf38ae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12cf38b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf38b5 call 0x12cf7160 */
  push32(0x12cf38bau); f_12cf7160();
  /* 12cf38ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf38bd:;
  /* 12cf38bd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12cf38c2 push 0x12d1b69c */
  push32((uint32_t)(0x12d1b69cu));
  /* 12cf38c7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12cf38cd push edx */
  push32((uint32_t)(EDX));
  /* 12cf38ce call 0x12cf7910 */
  push32(0x12cf38d3u); f_12cf7910();
  /* 12cf38d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf38d6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12cf38dc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf38e3 jne 0x12cf38f6 */
  if (!C.zf) goto L_12cf38f6;
  /* 12cf38e5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12cf38e7 call 0x12cf7650 */
  push32(0x12cf38ecu); f_12cf7650();
  /* 12cf38ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf38ef push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf38f1 call 0x12cf3970 */
  push32(0x12cf38f6u); f_12cf3970();
L_12cf38f6:;
  /* 12cf38f6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf38fd jne 0x12cf3906 */
  if (!C.zf) goto L_12cf3906;
  /* 12cf38ff mov eax, 1 */
  EAX = (0x1u);
  /* 12cf3904 jmp 0x12cf3908 */
  goto L_12cf3908;
L_12cf3906:;
  /* 12cf3906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf3908:;
  /* 12cf3908 mov esp, ebp */
  ESP = (EBP);
  /* 12cf390a pop ebp */
  EBP = (pop32());
  /* 12cf390b ret  */
  ESPCHK(0x12cf3600u, _esp0);
  ESP += 4; return;
}

/* FUN_10003910 @ 0x12cf3910 (56 bytes, 15 insns) */
void f_12cf3910(void) {
  FTRACE(0x12cf3910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3910 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3911 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3913 cmp dword ptr [0x12d2205c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2205c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf391a je 0x12cf3922 */
  if (C.zf) goto L_12cf3922;
  /* 12cf391c call dword ptr [0x12d2205c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2205c))), 0x12cf3922u);
L_12cf3922:;
  /* 12cf3922 push 0x12d1e418 */
  push32((uint32_t)(0x12d1e418u));
  /* 12cf3927 push 0x12d1e208 */
  push32((uint32_t)(0x12d1e208u));
  /* 12cf392c call 0x12cf3ae0 */
  push32(0x12cf3931u); f_12cf3ae0();
  /* 12cf3931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3934 push 0x12d1e104 */
  push32((uint32_t)(0x12d1e104u));
  /* 12cf3939 push 0x12d1e000 */
  push32((uint32_t)(0x12d1e000u));
  /* 12cf393e call 0x12cf3ae0 */
  push32(0x12cf3943u); f_12cf3ae0();
  /* 12cf3943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3946 pop ebp */
  EBP = (pop32());
  /* 12cf3947 ret  */
  ESPCHK(0x12cf3910u, _esp0);
  ESP += 4; return;
}

/* FUN_10003950 @ 0x12cf3950 (21 bytes, 10 insns) */
void f_12cf3950(void) {
  FTRACE(0x12cf3950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3950 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3951 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf3955 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf3957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf395a push eax */
  push32((uint32_t)(EAX));
  /* 12cf395b call 0x12cf39d0 */
  push32(0x12cf3960u); f_12cf39d0();
  /* 12cf3960 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3963 pop ebp */
  EBP = (pop32());
  /* 12cf3964 ret  */
  ESPCHK(0x12cf3950u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12cf3970 (21 bytes, 10 insns) */
void f_12cf3970(void) {
  FTRACE(0x12cf3970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3970 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3971 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3973 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf3975 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf3977 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf397a push eax */
  push32((uint32_t)(EAX));
  /* 12cf397b call 0x12cf39d0 */
  push32(0x12cf3980u); f_12cf39d0();
  /* 12cf3980 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3983 pop ebp */
  EBP = (pop32());
  /* 12cf3984 ret  */
  ESPCHK(0x12cf3970u, _esp0);
  ESP += 4; return;
}

/* FUN_10003990 @ 0x12cf3990 (19 bytes, 9 insns) */
void f_12cf3990(void) {
  FTRACE(0x12cf3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3990 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3991 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3993 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf3995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf3997 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf3999 call 0x12cf39d0 */
  push32(0x12cf399eu); f_12cf39d0();
  /* 12cf399e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf39a1 pop ebp */
  EBP = (pop32());
  /* 12cf39a2 ret  */
  ESPCHK(0x12cf3990u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b0 @ 0x12cf39b0 (19 bytes, 9 insns) */
void f_12cf39b0(void) {
  FTRACE(0x12cf39b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf39b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf39b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf39b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf39b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf39b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf39b9 call 0x12cf39d0 */
  push32(0x12cf39beu); f_12cf39d0();
  /* 12cf39be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf39c1 pop ebp */
  EBP = (pop32());
  /* 12cf39c2 ret  */
  ESPCHK(0x12cf39b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x12cf39d0 (227 bytes, 61 insns) */
void f_12cf39d0(void) {
  FTRACE(0x12cf39d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf39d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf39d1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf39d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf39d4 call 0x12cf3ac0 */
  push32(0x12cf39d9u); f_12cf3ac0();
  /* 12cf39d9 cmp dword ptr [0x12d20554], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20554))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf39e0 jne 0x12cf39f3 */
  if (!C.zf) goto L_12cf39f3;
  /* 12cf39e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf39e5 push eax */
  push32((uint32_t)(EAX));
  /* 12cf39e6 call dword ptr [0x12d2332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2332c))), 0x12cf39ecu);
  /* 12cf39ec push eax */
  push32((uint32_t)(EAX));
  /* 12cf39ed call dword ptr [0x12d23328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23328))), 0x12cf39f3u);
L_12cf39f3:;
  /* 12cf39f3 mov dword ptr [0x12d20550], 1 */
  w32((uint32_t)(0x12d20550), (0x1u));
  /* 12cf39fd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12cf3a00 mov byte ptr [0x12d2054c], cl */
  w8((uint32_t)(0x12d2054c), (CL));
  /* 12cf3a06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3a0a jne 0x12cf3a53 */
  if (!C.zf) goto L_12cf3a53;
  /* 12cf3a0c cmp dword ptr [0x12d22058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d22058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3a13 je 0x12cf3a41 */
  if (C.zf) goto L_12cf3a41;
  /* 12cf3a15 mov edx, dword ptr [0x12d22054] */
  EDX = (r32((uint32_t)(0x12d22054)));
  /* 12cf3a1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cf3a1e:;
  /* 12cf3a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3a21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf3a24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf3a27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3a2a cmp ecx, dword ptr [0x12d22058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d22058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3a30 jb 0x12cf3a41 */
  if (C.cf) goto L_12cf3a41;
  /* 12cf3a32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3a35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3a38 je 0x12cf3a3f */
  if (C.zf) goto L_12cf3a3f;
  /* 12cf3a3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3a3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12cf3a3fu);
L_12cf3a3f:;
  /* 12cf3a3f jmp 0x12cf3a1e */
  goto L_12cf3a1e;
L_12cf3a41:;
  /* 12cf3a41 push 0x12d1e724 */
  push32((uint32_t)(0x12d1e724u));
  /* 12cf3a46 push 0x12d1e51c */
  push32((uint32_t)(0x12d1e51cu));
  /* 12cf3a4b call 0x12cf3ae0 */
  push32(0x12cf3a50u); f_12cf3ae0();
  /* 12cf3a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3a53:;
  /* 12cf3a53 push 0x12d1e92c */
  push32((uint32_t)(0x12d1e92cu));
  /* 12cf3a58 push 0x12d1e828 */
  push32((uint32_t)(0x12d1e828u));
  /* 12cf3a5d call 0x12cf3ae0 */
  push32(0x12cf3a62u); f_12cf3ae0();
  /* 12cf3a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3a65 cmp dword ptr [0x12d20558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3a6c jne 0x12cf3a8e */
  if (!C.zf) goto L_12cf3a8e;
  /* 12cf3a6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cf3a70 call 0x12cf56c0 */
  push32(0x12cf3a75u); f_12cf56c0();
  /* 12cf3a75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3a78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf3a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf3a7d je 0x12cf3a8e */
  if (C.zf) goto L_12cf3a8e;
  /* 12cf3a7f mov dword ptr [0x12d20558], 1 */
  w32((uint32_t)(0x12d20558), (0x1u));
  /* 12cf3a89 call 0x12cf5fd0 */
  push32(0x12cf3a8eu); f_12cf5fd0();
L_12cf3a8e:;
  /* 12cf3a8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3a92 je 0x12cf3a9b */
  if (C.zf) goto L_12cf3a9b;
  /* 12cf3a94 call 0x12cf3ad0 */
  push32(0x12cf3a99u); f_12cf3ad0();
  /* 12cf3a99 jmp 0x12cf3aaf */
  goto L_12cf3aaf;
L_12cf3a9b:;
  /* 12cf3a9b mov dword ptr [0x12d20554], 1 */
  w32((uint32_t)(0x12d20554), (0x1u));
  /* 12cf3aa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3aa9 call dword ptr [0x12d23324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23324))), 0x12cf3aafu);
L_12cf3aaf:;
  /* 12cf3aaf mov esp, ebp */
  ESP = (EBP);
  /* 12cf3ab1 pop ebp */
  EBP = (pop32());
  /* 12cf3ab2 ret  */
  ESPCHK(0x12cf39d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac0 @ 0x12cf3ac0 (15 bytes, 7 insns) */
void f_12cf3ac0(void) {
  FTRACE(0x12cf3ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3ac3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12cf3ac5 call 0x12cf7bb0 */
  push32(0x12cf3acau); f_12cf7bb0();
  /* 12cf3aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3acd pop ebp */
  EBP = (pop32());
  /* 12cf3ace ret  */
  ESPCHK(0x12cf3ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ad0 @ 0x12cf3ad0 (15 bytes, 7 insns) */
void f_12cf3ad0(void) {
  FTRACE(0x12cf3ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3ad3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12cf3ad5 call 0x12cf7c50 */
  push32(0x12cf3adau); f_12cf7c50();
  /* 12cf3ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3add pop ebp */
  EBP = (pop32());
  /* 12cf3ade ret  */
  ESPCHK(0x12cf3ad0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12cf3ae0 (37 bytes, 16 insns) */
void f_12cf3ae0(void) {
  FTRACE(0x12cf3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3ae1 mov ebp, esp */
  EBP = (ESP);
L_12cf3ae3:;
  /* 12cf3ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3ae6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3ae9 jae 0x12cf3b03 */
  if (!C.cf) goto L_12cf3b03;
  /* 12cf3aeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3aee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3af1 je 0x12cf3af8 */
  if (C.zf) goto L_12cf3af8;
  /* 12cf3af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3af6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12cf3af8u);
L_12cf3af8:;
  /* 12cf3af8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3afb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3afe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cf3b01 jmp 0x12cf3ae3 */
  goto L_12cf3ae3;
L_12cf3b03:;
  /* 12cf3b03 pop ebp */
  EBP = (pop32());
  /* 12cf3b04 ret  */
  ESPCHK(0x12cf3ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x12cf3b10 (130 bytes, 42 insns) */
void f_12cf3b10(void) {
  FTRACE(0x12cf3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3b11 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3b14 call 0x12cf7ad0 */
  push32(0x12cf3b19u); f_12cf7ad0();
  /* 12cf3b19 call dword ptr [0x12d23338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23338))), 0x12cf3b1fu);
  /* 12cf3b1f mov dword ptr [0x12d1ea5c], eax */
  w32((uint32_t)(0x12d1ea5c), (EAX));
  /* 12cf3b24 cmp dword ptr [0x12d1ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3b2b jne 0x12cf3b31 */
  if (!C.zf) goto L_12cf3b31;
  /* 12cf3b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf3b2f jmp 0x12cf3b8e */
  goto L_12cf3b8e;
L_12cf3b31:;
  /* 12cf3b31 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12cf3b33 push 0x12d1b7f8 */
  push32((uint32_t)(0x12d1b7f8u));
  /* 12cf3b38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3b3a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12cf3b3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf3b3e call 0x12cf45c0 */
  push32(0x12cf3b43u); f_12cf45c0();
  /* 12cf3b43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3b46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf3b49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3b4d je 0x12cf3b64 */
  if (C.zf) goto L_12cf3b64;
  /* 12cf3b4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3b52 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3b53 mov ecx, dword ptr [0x12d1ea5c] */
  ECX = (r32((uint32_t)(0x12d1ea5c)));
  /* 12cf3b59 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3b5a call dword ptr [0x12d23334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23334))), 0x12cf3b60u);
  /* 12cf3b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf3b62 jne 0x12cf3b68 */
  if (!C.zf) goto L_12cf3b68;
L_12cf3b64:;
  /* 12cf3b64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf3b66 jmp 0x12cf3b8e */
  goto L_12cf3b8e;
L_12cf3b68:;
  /* 12cf3b68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3b6b push edx */
  push32((uint32_t)(EDX));
  /* 12cf3b6c call 0x12cf3bd0 */
  push32(0x12cf3b71u); f_12cf3bd0();
  /* 12cf3b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3b74 call dword ptr [0x12d23330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23330))), 0x12cf3b7au);
  /* 12cf3b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3b7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cf3b7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3b82 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12cf3b89 mov eax, 1 */
  EAX = (0x1u);
L_12cf3b8e:;
  /* 12cf3b8e mov esp, ebp */
  ESP = (EBP);
  /* 12cf3b90 pop ebp */
  EBP = (pop32());
  /* 12cf3b91 ret  */
  ESPCHK(0x12cf3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x12cf3ba0 (41 bytes, 11 insns) */
void f_12cf3ba0(void) {
  FTRACE(0x12cf3ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3ba3 call 0x12cf7b10 */
  push32(0x12cf3ba8u); f_12cf7b10();
  /* 12cf3ba8 cmp dword ptr [0x12d1ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3baf je 0x12cf3bc7 */
  if (C.zf) goto L_12cf3bc7;
  /* 12cf3bb1 mov eax, dword ptr [0x12d1ea5c] */
  EAX = (r32((uint32_t)(0x12d1ea5c)));
  /* 12cf3bb6 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3bb7 call dword ptr [0x12d2333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2333c))), 0x12cf3bbdu);
  /* 12cf3bbd mov dword ptr [0x12d1ea5c], 0xffffffff */
  w32((uint32_t)(0x12d1ea5c), (0xffffffffu));
L_12cf3bc7:;
  /* 12cf3bc7 pop ebp */
  EBP = (pop32());
  /* 12cf3bc8 ret  */
  ESPCHK(0x12cf3ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x12cf3bd0 (25 bytes, 8 insns) */
void f_12cf3bd0(void) {
  FTRACE(0x12cf3bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3bd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3bd6 mov dword ptr [eax + 0x50], 0x12d1ec00 */
  w32((uint32_t)(EAX + 0x50), (0x12d1ec00u));
  /* 12cf3bdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3be0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12cf3be7 pop ebp */
  EBP = (pop32());
  /* 12cf3be8 ret  */
  ESPCHK(0x12cf3bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bf0 @ 0x12cf3bf0 (152 bytes, 48 insns) */
void f_12cf3bf0(void) {
  FTRACE(0x12cf3bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf3bf6 call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12cf3bfcu);
  /* 12cf3bfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf3bff mov eax, dword ptr [0x12d1ea5c] */
  EAX = (r32((uint32_t)(0x12d1ea5c)));
  /* 12cf3c04 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3c05 call dword ptr [0x12d23344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23344))), 0x12cf3c0bu);
  /* 12cf3c0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf3c0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3c12 jne 0x12cf3c77 */
  if (!C.zf) goto L_12cf3c77;
  /* 12cf3c14 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12cf3c19 push 0x12d1b7f8 */
  push32((uint32_t)(0x12d1b7f8u));
  /* 12cf3c1e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3c20 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12cf3c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf3c24 call 0x12cf45c0 */
  push32(0x12cf3c29u); f_12cf45c0();
  /* 12cf3c29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3c2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf3c2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3c33 je 0x12cf3c6d */
  if (C.zf) goto L_12cf3c6d;
  /* 12cf3c35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3c38 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3c39 mov edx, dword ptr [0x12d1ea5c] */
  EDX = (r32((uint32_t)(0x12d1ea5c)));
  /* 12cf3c3f push edx */
  push32((uint32_t)(EDX));
  /* 12cf3c40 call dword ptr [0x12d23334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23334))), 0x12cf3c46u);
  /* 12cf3c46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf3c48 je 0x12cf3c6d */
  if (C.zf) goto L_12cf3c6d;
  /* 12cf3c4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3c4d push eax */
  push32((uint32_t)(EAX));
  /* 12cf3c4e call 0x12cf3bd0 */
  push32(0x12cf3c53u); f_12cf3bd0();
  /* 12cf3c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3c56 call dword ptr [0x12d23330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23330))), 0x12cf3c5cu);
  /* 12cf3c5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3c5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cf3c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3c64 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12cf3c6b jmp 0x12cf3c77 */
  goto L_12cf3c77;
L_12cf3c6d:;
  /* 12cf3c6d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cf3c6f call 0x12cf3120 */
  push32(0x12cf3c74u); f_12cf3120();
  /* 12cf3c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3c77:;
  /* 12cf3c77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf3c7a push eax */
  push32((uint32_t)(EAX));
  /* 12cf3c7b call dword ptr [0x12d23340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23340))), 0x12cf3c81u);
  /* 12cf3c81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3c84 mov esp, ebp */
  ESP = (EBP);
  /* 12cf3c86 pop ebp */
  EBP = (pop32());
  /* 12cf3c87 ret  */
  ESPCHK(0x12cf3bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c90 @ 0x12cf3c90 (263 bytes, 86 insns) */
void f_12cf3c90(void) {
  FTRACE(0x12cf3c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3c91 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3c93 cmp dword ptr [0x12d1ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3c9a je 0x12cf3d95 */
  if (C.zf) goto L_12cf3d95;
  /* 12cf3ca0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3ca4 jne 0x12cf3cb5 */
  if (!C.zf) goto L_12cf3cb5;
  /* 12cf3ca6 mov eax, dword ptr [0x12d1ea5c] */
  EAX = (r32((uint32_t)(0x12d1ea5c)));
  /* 12cf3cab push eax */
  push32((uint32_t)(EAX));
  /* 12cf3cac call dword ptr [0x12d23344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23344))), 0x12cf3cb2u);
  /* 12cf3cb2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cf3cb5:;
  /* 12cf3cb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3cb9 je 0x12cf3d86 */
  if (C.zf) goto L_12cf3d86;
  /* 12cf3cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3cc2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3cc6 je 0x12cf3cd9 */
  if (C.zf) goto L_12cf3cd9;
  /* 12cf3cc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3cca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3ccd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12cf3cd0 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3cd1 call 0x12cf4c40 */
  push32(0x12cf3cd6u); f_12cf4c40();
  /* 12cf3cd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3cd9:;
  /* 12cf3cd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3cdc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3ce0 je 0x12cf3cf3 */
  if (C.zf) goto L_12cf3cf3;
  /* 12cf3ce2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3ce4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3ce7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12cf3cea push eax */
  push32((uint32_t)(EAX));
  /* 12cf3ceb call 0x12cf4c40 */
  push32(0x12cf3cf0u); f_12cf4c40();
  /* 12cf3cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3cf3:;
  /* 12cf3cf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3cf6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3cfa je 0x12cf3d0d */
  if (C.zf) goto L_12cf3d0d;
  /* 12cf3cfc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3cfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d01 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12cf3d04 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3d05 call 0x12cf4c40 */
  push32(0x12cf3d0au); f_12cf4c40();
  /* 12cf3d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3d0d:;
  /* 12cf3d0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d10 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3d14 je 0x12cf3d27 */
  if (C.zf) goto L_12cf3d27;
  /* 12cf3d16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3d18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d1b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12cf3d1e push eax */
  push32((uint32_t)(EAX));
  /* 12cf3d1f call 0x12cf4c40 */
  push32(0x12cf3d24u); f_12cf4c40();
  /* 12cf3d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3d27:;
  /* 12cf3d27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d2a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3d2e je 0x12cf3d41 */
  if (C.zf) goto L_12cf3d41;
  /* 12cf3d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3d32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d35 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12cf3d38 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3d39 call 0x12cf4c40 */
  push32(0x12cf3d3eu); f_12cf4c40();
  /* 12cf3d3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3d41:;
  /* 12cf3d41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d44 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3d48 je 0x12cf3d5b */
  if (C.zf) goto L_12cf3d5b;
  /* 12cf3d4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d4f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12cf3d52 push eax */
  push32((uint32_t)(EAX));
  /* 12cf3d53 call 0x12cf4c40 */
  push32(0x12cf3d58u); f_12cf4c40();
  /* 12cf3d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3d5b:;
  /* 12cf3d5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d5e cmp dword ptr [ecx + 0x50], 0x12d1ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12d1ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3d65 je 0x12cf3d78 */
  if (C.zf) goto L_12cf3d78;
  /* 12cf3d67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3d69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d6c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12cf3d6f push eax */
  push32((uint32_t)(EAX));
  /* 12cf3d70 call 0x12cf4c40 */
  push32(0x12cf3d75u); f_12cf4c40();
  /* 12cf3d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3d78:;
  /* 12cf3d78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3d7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf3d7d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3d7e call 0x12cf4c40 */
  push32(0x12cf3d83u); f_12cf4c40();
  /* 12cf3d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3d86:;
  /* 12cf3d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf3d88 mov edx, dword ptr [0x12d1ea5c] */
  EDX = (r32((uint32_t)(0x12d1ea5c)));
  /* 12cf3d8e push edx */
  push32((uint32_t)(EDX));
  /* 12cf3d8f call dword ptr [0x12d23334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23334))), 0x12cf3d95u);
L_12cf3d95:;
  /* 12cf3d95 pop ebp */
  EBP = (pop32());
  /* 12cf3d96 ret  */
  ESPCHK(0x12cf3c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x12cf3da0 (11 bytes, 5 insns) */
void f_12cf3da0(void) {
  FTRACE(0x12cf3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3da1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3da3 call dword ptr [0x12d23330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23330))), 0x12cf3da9u);
  /* 12cf3da9 pop ebp */
  EBP = (pop32());
  /* 12cf3daa ret  */
  ESPCHK(0x12cf3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db0 @ 0x12cf3db0 (11 bytes, 5 insns) */
void f_12cf3db0(void) {
  FTRACE(0x12cf3db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3db1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3db3 call dword ptr [0x12d2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2327c))), 0x12cf3db9u);
  /* 12cf3db9 pop ebp */
  EBP = (pop32());
  /* 12cf3dba ret  */
  ESPCHK(0x12cf3db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x12cf3dc0 (804 bytes, 236 insns) */
void f_12cf3dc0(void) {
  FTRACE(0x12cf3dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf3dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf3dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf3dc3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf3dc6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12cf3dcb push 0x12d1b804 */
  push32((uint32_t)(0x12d1b804u));
  /* 12cf3dd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3dd2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12cf3dd7 call 0x12cf41b0 */
  push32(0x12cf3ddcu); f_12cf41b0();
  /* 12cf3ddc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3ddf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12cf3de2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3de6 jne 0x12cf3df2 */
  if (!C.zf) goto L_12cf3df2;
  /* 12cf3de8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12cf3dea call 0x12cf3120 */
  push32(0x12cf3defu); f_12cf3120();
  /* 12cf3def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf3df2:;
  /* 12cf3df2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3df5 mov dword ptr [0x12d21f00], eax */
  w32((uint32_t)(0x12d21f00), (EAX));
  /* 12cf3dfa mov dword ptr [0x12d2203c], 0x20 */
  w32((uint32_t)(0x12d2203c), (0x20u));
  /* 12cf3e04 jmp 0x12cf3e0f */
  goto L_12cf3e0f;
L_12cf3e06:;
  /* 12cf3e06 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3e09 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3e0c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12cf3e0f:;
  /* 12cf3e0f mov edx, dword ptr [0x12d21f00] */
  EDX = (r32((uint32_t)(0x12d21f00)));
  /* 12cf3e15 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3e1b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3e1e jae 0x12cf3e43 */
  if (!C.cf) goto L_12cf3e43;
  /* 12cf3e20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3e23 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cf3e27 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3e2a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cf3e30 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3e33 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12cf3e37 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3e3a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12cf3e41 jmp 0x12cf3e06 */
  goto L_12cf3e06;
L_12cf3e43:;
  /* 12cf3e43 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12cf3e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf3e47 call dword ptr [0x12d23354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23354))), 0x12cf3e4du);
  /* 12cf3e4d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12cf3e50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf3e56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf3e58 je 0x12cf3fe5 */
  if (C.zf) goto L_12cf3fe5;
  /* 12cf3e5e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3e62 je 0x12cf3fe5 */
  if (C.zf) goto L_12cf3fe5;
  /* 12cf3e68 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf3e6b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf3e6d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12cf3e70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf3e73 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3e76 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf3e79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3e7c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3e7f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12cf3e82 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3e89 jge 0x12cf3e93 */
  if ((C.sf==C.of)) goto L_12cf3e93;
  /* 12cf3e8b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12cf3e8e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12cf3e91 jmp 0x12cf3e9a */
  goto L_12cf3e9a;
L_12cf3e93:;
  /* 12cf3e93 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12cf3e9a:;
  /* 12cf3e9a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12cf3e9d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12cf3ea0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12cf3ea7 jmp 0x12cf3eb2 */
  goto L_12cf3eb2;
L_12cf3ea9:;
  /* 12cf3ea9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12cf3eac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3eaf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12cf3eb2:;
  /* 12cf3eb2 mov ecx, dword ptr [0x12d2203c] */
  ECX = (r32((uint32_t)(0x12d2203c)));
  /* 12cf3eb8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3ebb jge 0x12cf3f52 */
  if ((C.sf==C.of)) goto L_12cf3f52;
  /* 12cf3ec1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12cf3ec6 push 0x12d1b804 */
  push32((uint32_t)(0x12d1b804u));
  /* 12cf3ecb push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf3ecd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12cf3ed2 call 0x12cf41b0 */
  push32(0x12cf3ed7u); f_12cf41b0();
  /* 12cf3ed7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3eda mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12cf3edd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3ee1 jne 0x12cf3eee */
  if (!C.zf) goto L_12cf3eee;
  /* 12cf3ee3 mov edx, dword ptr [0x12d2203c] */
  EDX = (r32((uint32_t)(0x12d2203c)));
  /* 12cf3ee9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12cf3eec jmp 0x12cf3f52 */
  goto L_12cf3f52;
L_12cf3eee:;
  /* 12cf3eee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12cf3ef1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3ef4 mov dword ptr [eax*4 + 0x12d21f00], ecx */
  w32((uint32_t)(EAX*4 + 0x12d21f00), (ECX));
  /* 12cf3efb mov edx, dword ptr [0x12d2203c] */
  EDX = (r32((uint32_t)(0x12d2203c)));
  /* 12cf3f01 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3f04 mov dword ptr [0x12d2203c], edx */
  w32((uint32_t)(0x12d2203c), (EDX));
  /* 12cf3f0a jmp 0x12cf3f15 */
  goto L_12cf3f15;
L_12cf3f0c:;
  /* 12cf3f0c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3f0f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3f12 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12cf3f15:;
  /* 12cf3f15 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12cf3f18 mov edx, dword ptr [ecx*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cf3f1f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3f25 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3f28 jae 0x12cf3f4d */
  if (!C.cf) goto L_12cf3f4d;
  /* 12cf3f2a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3f2d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cf3f31 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3f34 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cf3f3a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3f3d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12cf3f41 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3f44 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12cf3f4b jmp 0x12cf3f0c */
  goto L_12cf3f0c;
L_12cf3f4d:;
  /* 12cf3f4d jmp 0x12cf3ea9 */
  goto L_12cf3ea9;
L_12cf3f52:;
  /* 12cf3f52 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12cf3f59 jmp 0x12cf3f76 */
  goto L_12cf3f76;
L_12cf3f5b:;
  /* 12cf3f5b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cf3f5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3f61 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12cf3f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3f67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3f6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf3f6d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12cf3f70 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3f73 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12cf3f76:;
  /* 12cf3f76 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cf3f79 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3f7c jge 0x12cf3fe5 */
  if ((C.sf==C.of)) goto L_12cf3fe5;
  /* 12cf3f7e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12cf3f81 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3f84 je 0x12cf3fe0 */
  if (C.zf) goto L_12cf3fe0;
  /* 12cf3f86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3f89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf3f8c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf3f8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf3f91 je 0x12cf3fe0 */
  if (C.zf) goto L_12cf3fe0;
  /* 12cf3f93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3f96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cf3f99 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf3f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf3f9e jne 0x12cf3fb0 */
  if (!C.zf) goto L_12cf3fb0;
  /* 12cf3fa0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12cf3fa3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf3fa5 push edx */
  push32((uint32_t)(EDX));
  /* 12cf3fa6 call dword ptr [0x12d23350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23350))), 0x12cf3facu);
  /* 12cf3fac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf3fae je 0x12cf3fe0 */
  if (C.zf) goto L_12cf3fe0;
L_12cf3fb0:;
  /* 12cf3fb0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cf3fb3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cf3fb6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cf3fb9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf3fbc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf3fbf mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cf3fc6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3fc8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12cf3fcb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3fce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12cf3fd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf3fd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cf3fd5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf3fd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf3fdb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf3fdd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12cf3fe0:;
  /* 12cf3fe0 jmp 0x12cf3f5b */
  goto L_12cf3f5b;
L_12cf3fe5:;
  /* 12cf3fe5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12cf3fec jmp 0x12cf3ff7 */
  goto L_12cf3ff7;
L_12cf3fee:;
  /* 12cf3fee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cf3ff1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf3ff4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12cf3ff7:;
  /* 12cf3ff7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf3ffb jge 0x12cf40d4 */
  if ((C.sf==C.of)) goto L_12cf40d4;
  /* 12cf4001 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cf4004 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf4007 mov edx, dword ptr [0x12d21f00] */
  EDX = (r32((uint32_t)(0x12d21f00)));
  /* 12cf400d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf400f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12cf4012 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf4015 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4018 jne 0x12cf40c0 */
  if (!C.zf) goto L_12cf40c0;
  /* 12cf401e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf4021 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12cf4025 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4029 jne 0x12cf4034 */
  if (!C.zf) goto L_12cf4034;
  /* 12cf402b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12cf4032 jmp 0x12cf4044 */
  goto L_12cf4044;
L_12cf4034:;
  /* 12cf4034 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cf4037 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf403a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cf403c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf403e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4041 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12cf4044:;
  /* 12cf4044 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12cf4047 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4048 call dword ptr [0x12d23304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23304))), 0x12cf404eu);
  /* 12cf404e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12cf4051 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4055 je 0x12cf40af */
  if (C.zf) goto L_12cf40af;
  /* 12cf4057 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cf405a push ecx */
  push32((uint32_t)(ECX));
  /* 12cf405b call dword ptr [0x12d23350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23350))), 0x12cf4061u);
  /* 12cf4061 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12cf4064 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4068 je 0x12cf40af */
  if (C.zf) goto L_12cf40af;
  /* 12cf406a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf406d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cf4070 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cf4072 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12cf4075 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf407b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf407e jne 0x12cf4090 */
  if (!C.zf) goto L_12cf4090;
  /* 12cf4080 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf4083 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cf4086 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12cf4088 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf408b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12cf408e jmp 0x12cf40ad */
  goto L_12cf40ad;
L_12cf4090:;
  /* 12cf4090 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12cf4093 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf4099 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf409c jne 0x12cf40ad */
  if (!C.zf) goto L_12cf40ad;
  /* 12cf409e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf40a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf40a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12cf40a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf40aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12cf40ad:;
  /* 12cf40ad jmp 0x12cf40be */
  goto L_12cf40be;
L_12cf40af:;
  /* 12cf40af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf40b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf40b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12cf40b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf40bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12cf40be:;
  /* 12cf40be jmp 0x12cf40cf */
  goto L_12cf40cf;
L_12cf40c0:;
  /* 12cf40c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf40c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf40c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12cf40c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf40cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12cf40cf:;
  /* 12cf40cf jmp 0x12cf3fee */
  goto L_12cf3fee;
L_12cf40d4:;
  /* 12cf40d4 mov eax, dword ptr [0x12d2203c] */
  EAX = (r32((uint32_t)(0x12d2203c)));
  /* 12cf40d9 push eax */
  push32((uint32_t)(EAX));
  /* 12cf40da call dword ptr [0x12d2334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2334c))), 0x12cf40e0u);
  /* 12cf40e0 mov esp, ebp */
  ESP = (EBP);
  /* 12cf40e2 pop ebp */
  EBP = (pop32());
  /* 12cf40e3 ret  */
  ESPCHK(0x12cf3dc0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12cf40f0 (155 bytes, 45 insns) */
void f_12cf40f0(void) {
  FTRACE(0x12cf40f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf40f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf40f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf40f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf40f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cf40fd jmp 0x12cf4108 */
  goto L_12cf4108;
L_12cf40ff:;
  /* 12cf40ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf4102 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4105 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cf4108:;
  /* 12cf4108 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf410c jge 0x12cf4187 */
  if ((C.sf==C.of)) goto L_12cf4187;
  /* 12cf410e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf4111 cmp dword ptr [ecx*4 + 0x12d21f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d21f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4119 je 0x12cf4182 */
  if (C.zf) goto L_12cf4182;
  /* 12cf411b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf411e mov eax, dword ptr [edx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cf4125 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf4128 jmp 0x12cf4133 */
  goto L_12cf4133;
L_12cf412a:;
  /* 12cf412a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf412d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4130 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf4133:;
  /* 12cf4133 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf4136 mov eax, dword ptr [edx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cf413d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4142 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4145 jae 0x12cf415f */
  if (!C.cf) goto L_12cf415f;
  /* 12cf4147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf414a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf414e je 0x12cf415d */
  if (C.zf) goto L_12cf415d;
  /* 12cf4150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4153 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4156 push edx */
  push32((uint32_t)(EDX));
  /* 12cf4157 call dword ptr [0x12d23358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23358))), 0x12cf415du);
L_12cf415d:;
  /* 12cf415d jmp 0x12cf412a */
  goto L_12cf412a;
L_12cf415f:;
  /* 12cf415f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf4164 mov ecx, dword ptr [eax*4 + 0x12d21f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cf416b push ecx */
  push32((uint32_t)(ECX));
  /* 12cf416c call 0x12cf4c40 */
  push32(0x12cf4171u); f_12cf4c40();
  /* 12cf4171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4174 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf4177 mov dword ptr [edx*4 + 0x12d21f00], 0 */
  w32((uint32_t)(EDX*4 + 0x12d21f00), (0x0u));
L_12cf4182:;
  /* 12cf4182 jmp 0x12cf40ff */
  goto L_12cf40ff;
L_12cf4187:;
  /* 12cf4187 mov esp, ebp */
  ESP = (EBP);
  /* 12cf4189 pop ebp */
  EBP = (pop32());
  /* 12cf418a ret  */
  ESPCHK(0x12cf40f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004190 @ 0x12cf4190 (29 bytes, 13 insns) */
void f_12cf4190(void) {
  FTRACE(0x12cf4190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4190 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4191 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4193 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4195 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4197 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4199 mov eax, dword ptr [0x12d20700] */
  EAX = (r32((uint32_t)(0x12d20700)));
  /* 12cf419e push eax */
  push32((uint32_t)(EAX));
  /* 12cf419f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf41a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf41a3 call 0x12cf4200 */
  push32(0x12cf41a8u); f_12cf4200();
  /* 12cf41a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf41ab pop ebp */
  EBP = (pop32());
  /* 12cf41ac ret  */
  ESPCHK(0x12cf4190u, _esp0);
  ESP += 4; return;
}

/* FUN_100041b0 @ 0x12cf41b0 (35 bytes, 16 insns) */
void f_12cf41b0(void) {
  FTRACE(0x12cf41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf41b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf41b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf41b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf41b6 push eax */
  push32((uint32_t)(EAX));
  /* 12cf41b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf41ba push ecx */
  push32((uint32_t)(ECX));
  /* 12cf41bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf41be push edx */
  push32((uint32_t)(EDX));
  /* 12cf41bf mov eax, dword ptr [0x12d20700] */
  EAX = (r32((uint32_t)(0x12d20700)));
  /* 12cf41c4 push eax */
  push32((uint32_t)(EAX));
  /* 12cf41c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf41c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf41c9 call 0x12cf4200 */
  push32(0x12cf41ceu); f_12cf4200();
  /* 12cf41ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf41d1 pop ebp */
  EBP = (pop32());
  /* 12cf41d2 ret  */
  ESPCHK(0x12cf41b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041e0 @ 0x12cf41e0 (27 bytes, 13 insns) */
void f_12cf41e0(void) {
  FTRACE(0x12cf41e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf41e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf41e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf41e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf41e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf41e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf41e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf41ec push eax */
  push32((uint32_t)(EAX));
  /* 12cf41ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf41f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf41f1 call 0x12cf4200 */
  push32(0x12cf41f6u); f_12cf4200();
  /* 12cf41f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf41f9 pop ebp */
  EBP = (pop32());
  /* 12cf41fa ret  */
  ESPCHK(0x12cf41e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004200 @ 0x12cf4200 (94 bytes, 38 insns) */
void f_12cf4200(void) {
  FTRACE(0x12cf4200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4200 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4201 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4203 push ecx */
  push32((uint32_t)(ECX));
L_12cf4204:;
  /* 12cf4204 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf4206 call 0x12cf7bb0 */
  push32(0x12cf420bu); f_12cf7bb0();
  /* 12cf420b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf420e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf4211 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4212 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf4215 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4216 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf4219 push edx */
  push32((uint32_t)(EDX));
  /* 12cf421a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf421d push eax */
  push32((uint32_t)(EAX));
  /* 12cf421e call 0x12cf4280 */
  push32(0x12cf4223u); f_12cf4280();
  /* 12cf4223 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4226 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf4229 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf422b call 0x12cf7c50 */
  push32(0x12cf4230u); f_12cf7c50();
  /* 12cf4230 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4233 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4237 jne 0x12cf423f */
  if (!C.zf) goto L_12cf423f;
  /* 12cf4239 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf423d jne 0x12cf4244 */
  if (!C.zf) goto L_12cf4244;
L_12cf423f:;
  /* 12cf423f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4242 jmp 0x12cf425a */
  goto L_12cf425a;
L_12cf4244:;
  /* 12cf4244 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4247 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4248 call 0x12cf7ef0 */
  push32(0x12cf424du); f_12cf7ef0();
  /* 12cf424d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4252 jne 0x12cf4258 */
  if (!C.zf) goto L_12cf4258;
  /* 12cf4254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4256 jmp 0x12cf425a */
  goto L_12cf425a;
L_12cf4258:;
  /* 12cf4258 jmp 0x12cf4204 */
  goto L_12cf4204;
L_12cf425a:;
  /* 12cf425a mov esp, ebp */
  ESP = (EBP);
  /* 12cf425c pop ebp */
  EBP = (pop32());
  /* 12cf425d ret  */
  ESPCHK(0x12cf4200u, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x12cf4260 (23 bytes, 11 insns) */
void f_12cf4260(void) {
  FTRACE(0x12cf4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4260 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4261 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4263 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4265 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4267 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf426c push eax */
  push32((uint32_t)(EAX));
  /* 12cf426d call 0x12cf4280 */
  push32(0x12cf4272u); f_12cf4280();
  /* 12cf4272 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4275 pop ebp */
  EBP = (pop32());
  /* 12cf4276 ret  */
  ESPCHK(0x12cf4260u, _esp0);
  ESP += 4; return;
}

/* FUN_10004280 @ 0x12cf4280 (787 bytes, 254 insns) */
void f_12cf4280(void) {
  FTRACE(0x12cf4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4280 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4281 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4283 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf4286 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf4287 push esi */
  push32((uint32_t)(ESI));
  /* 12cf4288 push edi */
  push32((uint32_t)(EDI));
  /* 12cf4289 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cf4290 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf4295 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf429a je 0x12cf42cc */
  if (C.zf) goto L_12cf42cc;
L_12cf429c:;
  /* 12cf429c call 0x12cf5350 */
  push32(0x12cf42a1u); f_12cf5350();
  /* 12cf42a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf42a3 jne 0x12cf42c6 */
  if (!C.zf) goto L_12cf42c6;
  /* 12cf42a5 push 0x12d1b8f8 */
  push32((uint32_t)(0x12d1b8f8u));
  /* 12cf42aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf42ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12cf42b1 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf42b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf42b8 call 0x12cf3270 */
  push32(0x12cf42bdu); f_12cf3270();
  /* 12cf42bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf42c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf42c3 jne 0x12cf42c6 */
  if (!C.zf) goto L_12cf42c6;
  /* 12cf42c5 int3  */
  x86_unimpl("int3 @ 0x12cf42c5");
L_12cf42c6:;
  /* 12cf42c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf42c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf42ca jne 0x12cf429c */
  if (!C.zf) goto L_12cf429c;
L_12cf42cc:;
  /* 12cf42cc mov edx, dword ptr [0x12d1ea88] */
  EDX = (r32((uint32_t)(0x12d1ea88)));
  /* 12cf42d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cf42d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf42d8 cmp eax, dword ptr [0x12d1ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf42de jne 0x12cf42e1 */
  if (!C.zf) goto L_12cf42e1;
  /* 12cf42e0 int3  */
  x86_unimpl("int3 @ 0x12cf42e0");
L_12cf42e1:;
  /* 12cf42e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf42e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf42e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf42e8 push edx */
  push32((uint32_t)(EDX));
  /* 12cf42e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf42ec push eax */
  push32((uint32_t)(EAX));
  /* 12cf42ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf42f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf42f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf42f4 push edx */
  push32((uint32_t)(EDX));
  /* 12cf42f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf42f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf42f9 call dword ptr [0x12d1ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d1ec90))), 0x12cf42ffu);
  /* 12cf42ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4304 jne 0x12cf4364 */
  if (!C.zf) goto L_12cf4364;
  /* 12cf4306 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf430a je 0x12cf4337 */
  if (C.zf) goto L_12cf4337;
L_12cf430c:;
  /* 12cf430c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf430f push eax */
  push32((uint32_t)(EAX));
  /* 12cf4310 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf4313 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4314 push 0x12d1b8b4 */
  push32((uint32_t)(0x12d1b8b4u));
  /* 12cf4319 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf431b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf431d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf431f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4321 call 0x12cf3270 */
  push32(0x12cf4326u); f_12cf3270();
  /* 12cf4326 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4329 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf432c jne 0x12cf432f */
  if (!C.zf) goto L_12cf432f;
  /* 12cf432e int3  */
  x86_unimpl("int3 @ 0x12cf432e");
L_12cf432f:;
  /* 12cf432f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf4331 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf4333 jne 0x12cf430c */
  if (!C.zf) goto L_12cf430c;
  /* 12cf4335 jmp 0x12cf435d */
  goto L_12cf435d;
L_12cf4337:;
  /* 12cf4337 push 0x12d1b890 */
  push32((uint32_t)(0x12d1b890u));
  /* 12cf433c push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf4341 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4343 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4345 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4347 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4349 call 0x12cf3270 */
  push32(0x12cf434eu); f_12cf3270();
  /* 12cf434e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4351 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4354 jne 0x12cf4357 */
  if (!C.zf) goto L_12cf4357;
  /* 12cf4356 int3  */
  x86_unimpl("int3 @ 0x12cf4356");
L_12cf4357:;
  /* 12cf4357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf435b jne 0x12cf4337 */
  if (!C.zf) goto L_12cf4337;
L_12cf435d:;
  /* 12cf435d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf435f jmp 0x12cf458c */
  goto L_12cf458c;
L_12cf4364:;
  /* 12cf4364 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf4367 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf436d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4370 je 0x12cf4386 */
  if (C.zf) goto L_12cf4386;
  /* 12cf4372 mov edx, dword ptr [0x12d1ea84] */
  EDX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf4378 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf437b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf437d jne 0x12cf4386 */
  if (!C.zf) goto L_12cf4386;
  /* 12cf437f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12cf4386:;
  /* 12cf4386 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf438a ja 0x12cf4397 */
  if ((!C.cf&&!C.zf)) goto L_12cf4397;
  /* 12cf438c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf438f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4392 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4395 jbe 0x12cf43c3 */
  if ((C.cf||C.zf)) goto L_12cf43c3;
L_12cf4397:;
  /* 12cf4397 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf439a push ecx */
  push32((uint32_t)(ECX));
  /* 12cf439b push 0x12d1b868 */
  push32((uint32_t)(0x12d1b868u));
  /* 12cf43a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf43a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf43a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf43a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf43a8 call 0x12cf3270 */
  push32(0x12cf43adu); f_12cf3270();
  /* 12cf43ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf43b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf43b3 jne 0x12cf43b6 */
  if (!C.zf) goto L_12cf43b6;
  /* 12cf43b5 int3  */
  x86_unimpl("int3 @ 0x12cf43b5");
L_12cf43b6:;
  /* 12cf43b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf43b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf43ba jne 0x12cf4397 */
  if (!C.zf) goto L_12cf4397;
  /* 12cf43bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf43be jmp 0x12cf458c */
  goto L_12cf458c;
L_12cf43c3:;
  /* 12cf43c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf43c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf43cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf43ce je 0x12cf4410 */
  if (C.zf) goto L_12cf4410;
  /* 12cf43d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf43d4 je 0x12cf4410 */
  if (C.zf) goto L_12cf4410;
  /* 12cf43d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf43d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf43df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf43e2 je 0x12cf4410 */
  if (C.zf) goto L_12cf4410;
  /* 12cf43e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf43e8 je 0x12cf4410 */
  if (C.zf) goto L_12cf4410;
L_12cf43ea:;
  /* 12cf43ea push 0x12d1b834 */
  push32((uint32_t)(0x12d1b834u));
  /* 12cf43ef push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf43f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf43f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf43f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf43fa push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf43fc call 0x12cf3270 */
  push32(0x12cf4401u); f_12cf3270();
  /* 12cf4401 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4404 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4407 jne 0x12cf440a */
  if (!C.zf) goto L_12cf440a;
  /* 12cf4409 int3  */
  x86_unimpl("int3 @ 0x12cf4409");
L_12cf440a:;
  /* 12cf440a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf440c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf440e jne 0x12cf43ea */
  if (!C.zf) goto L_12cf43ea;
L_12cf4410:;
  /* 12cf4410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4413 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4416 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf4419 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf441c push ecx */
  push32((uint32_t)(ECX));
  /* 12cf441d call 0x12cf8000 */
  push32(0x12cf4422u); f_12cf8000();
  /* 12cf4422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf4428 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf442c jne 0x12cf4435 */
  if (!C.zf) goto L_12cf4435;
  /* 12cf442e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4430 jmp 0x12cf458c */
  goto L_12cf458c;
L_12cf4435:;
  /* 12cf4435 mov edx, dword ptr [0x12d1ea88] */
  EDX = (r32((uint32_t)(0x12d1ea88)));
  /* 12cf443b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf443e mov dword ptr [0x12d1ea88], edx */
  w32((uint32_t)(0x12d1ea88), (EDX));
  /* 12cf4444 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4448 je 0x12cf4493 */
  if (C.zf) goto L_12cf4493;
  /* 12cf444a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf444d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cf4453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4456 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cf445d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4460 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12cf4467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf446a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12cf4471 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4474 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4477 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12cf447a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf447d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12cf4484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4487 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12cf448e jmp 0x12cf4533 */
  goto L_12cf4533;
L_12cf4493:;
  /* 12cf4493 mov edx, dword ptr [0x12d20560] */
  EDX = (r32((uint32_t)(0x12d20560)));
  /* 12cf4499 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf449c mov dword ptr [0x12d20560], edx */
  w32((uint32_t)(0x12d20560), (EDX));
  /* 12cf44a2 mov eax, dword ptr [0x12d20568] */
  EAX = (r32((uint32_t)(0x12d20568)));
  /* 12cf44a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf44aa mov dword ptr [0x12d20568], eax */
  w32((uint32_t)(0x12d20568), (EAX));
  /* 12cf44af mov ecx, dword ptr [0x12d20568] */
  ECX = (r32((uint32_t)(0x12d20568)));
  /* 12cf44b5 cmp ecx, dword ptr [0x12d2056c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d2056c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf44bb jbe 0x12cf44c9 */
  if ((C.cf||C.zf)) goto L_12cf44c9;
  /* 12cf44bd mov edx, dword ptr [0x12d20568] */
  EDX = (r32((uint32_t)(0x12d20568)));
  /* 12cf44c3 mov dword ptr [0x12d2056c], edx */
  w32((uint32_t)(0x12d2056c), (EDX));
L_12cf44c9:;
  /* 12cf44c9 cmp dword ptr [0x12d20564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf44d0 je 0x12cf44df */
  if (C.zf) goto L_12cf44df;
  /* 12cf44d2 mov eax, dword ptr [0x12d20564] */
  EAX = (r32((uint32_t)(0x12d20564)));
  /* 12cf44d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf44da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12cf44dd jmp 0x12cf44e8 */
  goto L_12cf44e8;
L_12cf44df:;
  /* 12cf44df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf44e2 mov dword ptr [0x12d2055c], edx */
  w32((uint32_t)(0x12d2055c), (EDX));
L_12cf44e8:;
  /* 12cf44e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf44eb mov ecx, dword ptr [0x12d20564] */
  ECX = (r32((uint32_t)(0x12d20564)));
  /* 12cf44f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cf44f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf44f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12cf44fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4500 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf4503 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12cf4506 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4509 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf450c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12cf450f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4512 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4515 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12cf4518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf451b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf451e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12cf4521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4524 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf4527 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12cf452a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf452d mov dword ptr [0x12d20564], ecx */
  w32((uint32_t)(0x12d20564), (ECX));
L_12cf4533:;
  /* 12cf4533 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf4535 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf4537 mov dl, byte ptr [0x12d1ea90] */
  DL = (r8((uint32_t)(0x12d1ea90)));
  /* 12cf453d push edx */
  push32((uint32_t)(EDX));
  /* 12cf453e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4541 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4544 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4545 call 0x12cf7f20 */
  push32(0x12cf454au); f_12cf7f20();
  /* 12cf454a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf454d push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf454f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4551 mov cl, byte ptr [0x12d1ea90] */
  CL = (r8((uint32_t)(0x12d1ea90)));
  /* 12cf4557 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4558 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf455b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf455e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12cf4562 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4563 call 0x12cf7f20 */
  push32(0x12cf4568u); f_12cf7f20();
  /* 12cf4568 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf456b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf456e push edx */
  push32((uint32_t)(EDX));
  /* 12cf456f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4571 mov al, byte ptr [0x12d1ea92] */
  AL = (r8((uint32_t)(0x12d1ea92)));
  /* 12cf4576 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf457a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf457d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf457e call 0x12cf7f20 */
  push32(0x12cf4583u); f_12cf7f20();
  /* 12cf4583 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4589 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12cf458c:;
  /* 12cf458c pop edi */
  EDI = (pop32());
  /* 12cf458d pop esi */
  ESI = (pop32());
  /* 12cf458e pop ebx */
  EBX = (pop32());
  /* 12cf458f mov esp, ebp */
  ESP = (EBP);
  /* 12cf4591 pop ebp */
  EBP = (pop32());
  /* 12cf4592 ret  */
  ESPCHK(0x12cf4280u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x12cf45a0 (27 bytes, 13 insns) */
void f_12cf45a0(void) {
  FTRACE(0x12cf45a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf45a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf45a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf45a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf45a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf45a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf45a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf45ac push eax */
  push32((uint32_t)(EAX));
  /* 12cf45ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf45b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf45b1 call 0x12cf45c0 */
  push32(0x12cf45b6u); f_12cf45c0();
  /* 12cf45b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf45b9 pop ebp */
  EBP = (pop32());
  /* 12cf45ba ret  */
  ESPCHK(0x12cf45a0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12cf45c0 (96 bytes, 37 insns) */
void f_12cf45c0(void) {
  FTRACE(0x12cf45c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf45c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf45c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf45c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf45c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf45c9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf45cd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12cf45d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf45d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf45d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf45d7 push edx */
  push32((uint32_t)(EDX));
  /* 12cf45d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf45db push eax */
  push32((uint32_t)(EAX));
  /* 12cf45dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf45df push ecx */
  push32((uint32_t)(ECX));
  /* 12cf45e0 call 0x12cf41b0 */
  push32(0x12cf45e5u); f_12cf41b0();
  /* 12cf45e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf45e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf45eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf45ef je 0x12cf4619 */
  if (C.zf) goto L_12cf4619;
  /* 12cf45f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf45f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cf45f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf45fa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf45fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf4600:;
  /* 12cf4600 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4603 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4606 jae 0x12cf4619 */
  if (!C.cf) goto L_12cf4619;
  /* 12cf4608 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf460b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cf460e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4611 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4614 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf4617 jmp 0x12cf4600 */
  goto L_12cf4600;
L_12cf4619:;
  /* 12cf4619 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf461c mov esp, ebp */
  ESP = (EBP);
  /* 12cf461e pop ebp */
  EBP = (pop32());
  /* 12cf461f ret  */
  ESPCHK(0x12cf45c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004620 @ 0x12cf4620 (27 bytes, 13 insns) */
void f_12cf4620(void) {
  FTRACE(0x12cf4620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4620 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4621 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4623 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4625 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4627 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4629 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf462c push eax */
  push32((uint32_t)(EAX));
  /* 12cf462d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4630 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4631 call 0x12cf4640 */
  push32(0x12cf4636u); f_12cf4640();
  /* 12cf4636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4639 pop ebp */
  EBP = (pop32());
  /* 12cf463a ret  */
  ESPCHK(0x12cf4620u, _esp0);
  ESP += 4; return;
}

/* FUN_10004640 @ 0x12cf4640 (64 bytes, 27 insns) */
void f_12cf4640(void) {
  FTRACE(0x12cf4640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4640 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4641 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4643 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4644 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf4646 call 0x12cf7bb0 */
  push32(0x12cf464bu); f_12cf7bb0();
  /* 12cf464b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf464e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4650 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf4653 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4654 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf4657 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4658 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf465b push edx */
  push32((uint32_t)(EDX));
  /* 12cf465c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf465f push eax */
  push32((uint32_t)(EAX));
  /* 12cf4660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4663 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4664 call 0x12cf4680 */
  push32(0x12cf4669u); f_12cf4680();
  /* 12cf4669 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf466c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf466f push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf4671 call 0x12cf7c50 */
  push32(0x12cf4676u); f_12cf7c50();
  /* 12cf4676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf467c mov esp, ebp */
  ESP = (EBP);
  /* 12cf467e pop ebp */
  EBP = (pop32());
  /* 12cf467f ret  */
  ESPCHK(0x12cf4640u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x12cf4680 (1297 bytes, 431 insns) */
void f_12cf4680(void) {
  FTRACE(0x12cf4680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4680 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4681 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4683 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf4686 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf4687 push esi */
  push32((uint32_t)(ESI));
  /* 12cf4688 push edi */
  push32((uint32_t)(EDI));
  /* 12cf4689 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12cf4690 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4694 jne 0x12cf46b3 */
  if (!C.zf) goto L_12cf46b3;
  /* 12cf4696 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf4699 push eax */
  push32((uint32_t)(EAX));
  /* 12cf469a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf469d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf469e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf46a1 push edx */
  push32((uint32_t)(EDX));
  /* 12cf46a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf46a5 push eax */
  push32((uint32_t)(EAX));
  /* 12cf46a6 call 0x12cf41b0 */
  push32(0x12cf46abu); f_12cf41b0();
  /* 12cf46ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf46ae jmp 0x12cf4b8a */
  goto L_12cf4b8a;
L_12cf46b3:;
  /* 12cf46b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf46b7 je 0x12cf46d6 */
  if (C.zf) goto L_12cf46d6;
  /* 12cf46b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf46bd jne 0x12cf46d6 */
  if (!C.zf) goto L_12cf46d6;
  /* 12cf46bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf46c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf46c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf46c6 push edx */
  push32((uint32_t)(EDX));
  /* 12cf46c7 call 0x12cf4c40 */
  push32(0x12cf46ccu); f_12cf4c40();
  /* 12cf46cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf46cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf46d1 jmp 0x12cf4b8a */
  goto L_12cf4b8a;
L_12cf46d6:;
  /* 12cf46d6 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf46db and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf46de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf46e0 je 0x12cf4712 */
  if (C.zf) goto L_12cf4712;
L_12cf46e2:;
  /* 12cf46e2 call 0x12cf5350 */
  push32(0x12cf46e7u); f_12cf5350();
  /* 12cf46e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf46e9 jne 0x12cf470c */
  if (!C.zf) goto L_12cf470c;
  /* 12cf46eb push 0x12d1b8f8 */
  push32((uint32_t)(0x12d1b8f8u));
  /* 12cf46f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf46f2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12cf46f7 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf46fc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf46fe call 0x12cf3270 */
  push32(0x12cf4703u); f_12cf3270();
  /* 12cf4703 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4706 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4709 jne 0x12cf470c */
  if (!C.zf) goto L_12cf470c;
  /* 12cf470b int3  */
  x86_unimpl("int3 @ 0x12cf470b");
L_12cf470c:;
  /* 12cf470c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf470e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf4710 jne 0x12cf46e2 */
  if (!C.zf) goto L_12cf46e2;
L_12cf4712:;
  /* 12cf4712 mov edx, dword ptr [0x12d1ea88] */
  EDX = (r32((uint32_t)(0x12d1ea88)));
  /* 12cf4718 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cf471b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf471e cmp eax, dword ptr [0x12d1ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4724 jne 0x12cf4727 */
  if (!C.zf) goto L_12cf4727;
  /* 12cf4726 int3  */
  x86_unimpl("int3 @ 0x12cf4726");
L_12cf4727:;
  /* 12cf4727 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf472a push ecx */
  push32((uint32_t)(ECX));
  /* 12cf472b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf472e push edx */
  push32((uint32_t)(EDX));
  /* 12cf472f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf4732 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4733 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf4736 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4737 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf473a push edx */
  push32((uint32_t)(EDX));
  /* 12cf473b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf473e push eax */
  push32((uint32_t)(EAX));
  /* 12cf473f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4741 call dword ptr [0x12d1ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d1ec90))), 0x12cf4747u);
  /* 12cf4747 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf474a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf474c jne 0x12cf47ac */
  if (!C.zf) goto L_12cf47ac;
  /* 12cf474e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4752 je 0x12cf477f */
  if (C.zf) goto L_12cf477f;
L_12cf4754:;
  /* 12cf4754 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf4757 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4758 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf475b push edx */
  push32((uint32_t)(EDX));
  /* 12cf475c push 0x12d1ba74 */
  push32((uint32_t)(0x12d1ba74u));
  /* 12cf4761 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4763 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4765 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4769 call 0x12cf3270 */
  push32(0x12cf476eu); f_12cf3270();
  /* 12cf476e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4771 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4774 jne 0x12cf4777 */
  if (!C.zf) goto L_12cf4777;
  /* 12cf4776 int3  */
  x86_unimpl("int3 @ 0x12cf4776");
L_12cf4777:;
  /* 12cf4777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf477b jne 0x12cf4754 */
  if (!C.zf) goto L_12cf4754;
  /* 12cf477d jmp 0x12cf47a5 */
  goto L_12cf47a5;
L_12cf477f:;
  /* 12cf477f push 0x12d1ba50 */
  push32((uint32_t)(0x12d1ba50u));
  /* 12cf4784 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf4789 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf478b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf478d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf478f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4791 call 0x12cf3270 */
  push32(0x12cf4796u); f_12cf3270();
  /* 12cf4796 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4799 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf479c jne 0x12cf479f */
  if (!C.zf) goto L_12cf479f;
  /* 12cf479e int3  */
  x86_unimpl("int3 @ 0x12cf479e");
L_12cf479f:;
  /* 12cf479f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf47a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf47a3 jne 0x12cf477f */
  if (!C.zf) goto L_12cf477f;
L_12cf47a5:;
  /* 12cf47a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf47a7 jmp 0x12cf4b8a */
  goto L_12cf4b8a;
L_12cf47ac:;
  /* 12cf47ac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf47b0 jbe 0x12cf47de */
  if ((C.cf||C.zf)) goto L_12cf47de;
L_12cf47b2:;
  /* 12cf47b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf47b5 push edx */
  push32((uint32_t)(EDX));
  /* 12cf47b6 push 0x12d1ba20 */
  push32((uint32_t)(0x12d1ba20u));
  /* 12cf47bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf47bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf47bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf47c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf47c3 call 0x12cf3270 */
  push32(0x12cf47c8u); f_12cf3270();
  /* 12cf47c8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf47cb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf47ce jne 0x12cf47d1 */
  if (!C.zf) goto L_12cf47d1;
  /* 12cf47d0 int3  */
  x86_unimpl("int3 @ 0x12cf47d0");
L_12cf47d1:;
  /* 12cf47d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf47d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf47d5 jne 0x12cf47b2 */
  if (!C.zf) goto L_12cf47b2;
  /* 12cf47d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf47d9 jmp 0x12cf4b8a */
  goto L_12cf4b8a;
L_12cf47de:;
  /* 12cf47de cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf47e2 je 0x12cf4826 */
  if (C.zf) goto L_12cf4826;
  /* 12cf47e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf47e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf47ed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf47f0 je 0x12cf4826 */
  if (C.zf) goto L_12cf4826;
  /* 12cf47f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf47f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf47fb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf47fe je 0x12cf4826 */
  if (C.zf) goto L_12cf4826;
L_12cf4800:;
  /* 12cf4800 push 0x12d1b834 */
  push32((uint32_t)(0x12d1b834u));
  /* 12cf4805 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf480a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf480c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf480e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4810 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4812 call 0x12cf3270 */
  push32(0x12cf4817u); f_12cf3270();
  /* 12cf4817 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf481a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf481d jne 0x12cf4820 */
  if (!C.zf) goto L_12cf4820;
  /* 12cf481f int3  */
  x86_unimpl("int3 @ 0x12cf481f");
L_12cf4820:;
  /* 12cf4820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4824 jne 0x12cf4800 */
  if (!C.zf) goto L_12cf4800;
L_12cf4826:;
  /* 12cf4826 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4829 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf482a call 0x12cf57b0 */
  push32(0x12cf482fu); f_12cf57b0();
  /* 12cf482f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4834 jne 0x12cf4857 */
  if (!C.zf) goto L_12cf4857;
  /* 12cf4836 push 0x12d1b9fc */
  push32((uint32_t)(0x12d1b9fcu));
  /* 12cf483b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf483d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12cf4842 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4847 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4849 call 0x12cf3270 */
  push32(0x12cf484eu); f_12cf3270();
  /* 12cf484e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4851 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4854 jne 0x12cf4857 */
  if (!C.zf) goto L_12cf4857;
  /* 12cf4856 int3  */
  x86_unimpl("int3 @ 0x12cf4856");
L_12cf4857:;
  /* 12cf4857 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf4859 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf485b jne 0x12cf4826 */
  if (!C.zf) goto L_12cf4826;
  /* 12cf485d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4860 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf4863 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf4866 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf4869 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf486d jne 0x12cf4876 */
  if (!C.zf) goto L_12cf4876;
  /* 12cf486f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12cf4876:;
  /* 12cf4876 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf487a je 0x12cf48ba */
  if (C.zf) goto L_12cf48ba;
L_12cf487c:;
  /* 12cf487c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf487f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4886 jne 0x12cf4891 */
  if (!C.zf) goto L_12cf4891;
  /* 12cf4888 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf488b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf488f je 0x12cf48b2 */
  if (C.zf) goto L_12cf48b2;
L_12cf4891:;
  /* 12cf4891 push 0x12d1b9b4 */
  push32((uint32_t)(0x12d1b9b4u));
  /* 12cf4896 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4898 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12cf489d push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf48a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf48a4 call 0x12cf3270 */
  push32(0x12cf48a9u); f_12cf3270();
  /* 12cf48a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf48ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf48af jne 0x12cf48b2 */
  if (!C.zf) goto L_12cf48b2;
  /* 12cf48b1 int3  */
  x86_unimpl("int3 @ 0x12cf48b1");
L_12cf48b2:;
  /* 12cf48b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf48b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf48b6 jne 0x12cf487c */
  if (!C.zf) goto L_12cf487c;
  /* 12cf48b8 jmp 0x12cf491e */
  goto L_12cf491e;
L_12cf48ba:;
  /* 12cf48ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf48bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf48c0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf48c5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf48c8 jne 0x12cf48df */
  if (!C.zf) goto L_12cf48df;
  /* 12cf48ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf48cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf48d3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf48d6 jne 0x12cf48df */
  if (!C.zf) goto L_12cf48df;
  /* 12cf48d8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12cf48df:;
  /* 12cf48df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf48e2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf48e5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf48ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf48ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf48f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf48f5 je 0x12cf4918 */
  if (C.zf) goto L_12cf4918;
  /* 12cf48f7 push 0x12d1b978 */
  push32((uint32_t)(0x12d1b978u));
  /* 12cf48fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf48fe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12cf4903 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4908 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf490a call 0x12cf3270 */
  push32(0x12cf490fu); f_12cf3270();
  /* 12cf490f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4912 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4915 jne 0x12cf4918 */
  if (!C.zf) goto L_12cf4918;
  /* 12cf4917 int3  */
  x86_unimpl("int3 @ 0x12cf4917");
L_12cf4918:;
  /* 12cf4918 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf491a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf491c jne 0x12cf48df */
  if (!C.zf) goto L_12cf48df;
L_12cf491e:;
  /* 12cf491e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4922 je 0x12cf4949 */
  if (C.zf) goto L_12cf4949;
  /* 12cf4924 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf4927 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf492a push eax */
  push32((uint32_t)(EAX));
  /* 12cf492b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf492e push ecx */
  push32((uint32_t)(ECX));
  /* 12cf492f call 0x12cf8130 */
  push32(0x12cf4934u); f_12cf8130();
  /* 12cf4934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4937 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf493a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf493e jne 0x12cf4947 */
  if (!C.zf) goto L_12cf4947;
  /* 12cf4940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4942 jmp 0x12cf4b8a */
  goto L_12cf4b8a;
L_12cf4947:;
  /* 12cf4947 jmp 0x12cf496c */
  goto L_12cf496c;
L_12cf4949:;
  /* 12cf4949 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf494c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf494f push edx */
  push32((uint32_t)(EDX));
  /* 12cf4950 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf4953 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4954 call 0x12cf8080 */
  push32(0x12cf4959u); f_12cf8080();
  /* 12cf4959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf495c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf495f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4963 jne 0x12cf496c */
  if (!C.zf) goto L_12cf496c;
  /* 12cf4965 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4967 jmp 0x12cf4b8a */
  goto L_12cf4b8a;
L_12cf496c:;
  /* 12cf496c mov ecx, dword ptr [0x12d1ea88] */
  ECX = (r32((uint32_t)(0x12d1ea88)));
  /* 12cf4972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4975 mov dword ptr [0x12d1ea88], ecx */
  w32((uint32_t)(0x12d1ea88), (ECX));
  /* 12cf497b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf497f jne 0x12cf49d7 */
  if (!C.zf) goto L_12cf49d7;
  /* 12cf4981 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4984 mov eax, dword ptr [0x12d20560] */
  EAX = (r32((uint32_t)(0x12d20560)));
  /* 12cf4989 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf498c mov dword ptr [0x12d20560], eax */
  w32((uint32_t)(0x12d20560), (EAX));
  /* 12cf4991 mov ecx, dword ptr [0x12d20560] */
  ECX = (r32((uint32_t)(0x12d20560)));
  /* 12cf4997 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf499a mov dword ptr [0x12d20560], ecx */
  w32((uint32_t)(0x12d20560), (ECX));
  /* 12cf49a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf49a3 mov eax, dword ptr [0x12d20568] */
  EAX = (r32((uint32_t)(0x12d20568)));
  /* 12cf49a8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf49ab mov dword ptr [0x12d20568], eax */
  w32((uint32_t)(0x12d20568), (EAX));
  /* 12cf49b0 mov ecx, dword ptr [0x12d20568] */
  ECX = (r32((uint32_t)(0x12d20568)));
  /* 12cf49b6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf49b9 mov dword ptr [0x12d20568], ecx */
  w32((uint32_t)(0x12d20568), (ECX));
  /* 12cf49bf mov edx, dword ptr [0x12d20568] */
  EDX = (r32((uint32_t)(0x12d20568)));
  /* 12cf49c5 cmp edx, dword ptr [0x12d2056c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d2056c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf49cb jbe 0x12cf49d7 */
  if ((C.cf||C.zf)) goto L_12cf49d7;
  /* 12cf49cd mov eax, dword ptr [0x12d20568] */
  EAX = (r32((uint32_t)(0x12d20568)));
  /* 12cf49d2 mov dword ptr [0x12d2056c], eax */
  w32((uint32_t)(0x12d2056c), (EAX));
L_12cf49d7:;
  /* 12cf49d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf49da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf49dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf49e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf49e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf49e6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf49e9 jbe 0x12cf4a0f */
  if ((C.cf||C.zf)) goto L_12cf4a0f;
  /* 12cf49eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf49ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf49f1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf49f4 push edx */
  push32((uint32_t)(EDX));
  /* 12cf49f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf49f7 mov al, byte ptr [0x12d1ea92] */
  AL = (r8((uint32_t)(0x12d1ea92)));
  /* 12cf49fc push eax */
  push32((uint32_t)(EAX));
  /* 12cf49fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4a00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4a03 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4a06 push edx */
  push32((uint32_t)(EDX));
  /* 12cf4a07 call 0x12cf7f20 */
  push32(0x12cf4a0cu); f_12cf7f20();
  /* 12cf4a0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf4a0f:;
  /* 12cf4a0f push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf4a11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4a13 mov al, byte ptr [0x12d1ea90] */
  AL = (r8((uint32_t)(0x12d1ea90)));
  /* 12cf4a18 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4a19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4a1c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4a1f push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4a20 call 0x12cf7f20 */
  push32(0x12cf4a25u); f_12cf7f20();
  /* 12cf4a25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4a28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4a2c jne 0x12cf4a49 */
  if (!C.zf) goto L_12cf4a49;
  /* 12cf4a2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4a31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf4a34 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cf4a37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4a3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf4a3d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12cf4a40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4a43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf4a46 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12cf4a49:;
  /* 12cf4a49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf4a4f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12cf4a52:;
  /* 12cf4a52 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4a56 jne 0x12cf4a87 */
  if (!C.zf) goto L_12cf4a87;
  /* 12cf4a58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4a5c jne 0x12cf4a66 */
  if (!C.zf) goto L_12cf4a66;
  /* 12cf4a5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4a61 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4a64 je 0x12cf4a87 */
  if (C.zf) goto L_12cf4a87;
L_12cf4a66:;
  /* 12cf4a66 push 0x12d1b944 */
  push32((uint32_t)(0x12d1b944u));
  /* 12cf4a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4a6d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12cf4a72 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4a77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4a79 call 0x12cf3270 */
  push32(0x12cf4a7eu); f_12cf3270();
  /* 12cf4a7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4a81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4a84 jne 0x12cf4a87 */
  if (!C.zf) goto L_12cf4a87;
  /* 12cf4a86 int3  */
  x86_unimpl("int3 @ 0x12cf4a86");
L_12cf4a87:;
  /* 12cf4a87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf4a89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf4a8b jne 0x12cf4a52 */
  if (!C.zf) goto L_12cf4a52;
  /* 12cf4a8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4a90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4a93 je 0x12cf4a9b */
  if (C.zf) goto L_12cf4a9b;
  /* 12cf4a95 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4a99 je 0x12cf4aa3 */
  if (C.zf) goto L_12cf4aa3;
L_12cf4a9b:;
  /* 12cf4a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4a9e jmp 0x12cf4b8a */
  goto L_12cf4b8a;
L_12cf4aa3:;
  /* 12cf4aa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4aa6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4aa9 je 0x12cf4abb */
  if (C.zf) goto L_12cf4abb;
  /* 12cf4aab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4aae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf4ab0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4ab3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf4ab6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cf4ab9 jmp 0x12cf4af7 */
  goto L_12cf4af7;
L_12cf4abb:;
  /* 12cf4abb mov eax, dword ptr [0x12d2055c] */
  EAX = (r32((uint32_t)(0x12d2055c)));
  /* 12cf4ac0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4ac3 je 0x12cf4ae6 */
  if (C.zf) goto L_12cf4ae6;
  /* 12cf4ac5 push 0x12d1b928 */
  push32((uint32_t)(0x12d1b928u));
  /* 12cf4aca push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4acc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12cf4ad1 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4ad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4ad8 call 0x12cf3270 */
  push32(0x12cf4addu); f_12cf3270();
  /* 12cf4add add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4ae0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4ae3 jne 0x12cf4ae6 */
  if (!C.zf) goto L_12cf4ae6;
  /* 12cf4ae5 int3  */
  x86_unimpl("int3 @ 0x12cf4ae5");
L_12cf4ae6:;
  /* 12cf4ae6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4ae8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf4aea jne 0x12cf4abb */
  if (!C.zf) goto L_12cf4abb;
  /* 12cf4aec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4aef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf4af2 mov dword ptr [0x12d2055c], eax */
  w32((uint32_t)(0x12d2055c), (EAX));
L_12cf4af7:;
  /* 12cf4af7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4afa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4afe je 0x12cf4b0f */
  if (C.zf) goto L_12cf4b0f;
  /* 12cf4b00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4b03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf4b06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4b09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf4b0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cf4b0d jmp 0x12cf4b4a */
  goto L_12cf4b4a;
L_12cf4b0f:;
  /* 12cf4b0f mov eax, dword ptr [0x12d20564] */
  EAX = (r32((uint32_t)(0x12d20564)));
  /* 12cf4b14 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4b17 je 0x12cf4b3a */
  if (C.zf) goto L_12cf4b3a;
  /* 12cf4b19 push 0x12d1b90c */
  push32((uint32_t)(0x12d1b90cu));
  /* 12cf4b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4b20 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12cf4b25 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4b2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4b2c call 0x12cf3270 */
  push32(0x12cf4b31u); f_12cf3270();
  /* 12cf4b31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4b34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4b37 jne 0x12cf4b3a */
  if (!C.zf) goto L_12cf4b3a;
  /* 12cf4b39 int3  */
  x86_unimpl("int3 @ 0x12cf4b39");
L_12cf4b3a:;
  /* 12cf4b3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4b3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf4b3e jne 0x12cf4b0f */
  if (!C.zf) goto L_12cf4b0f;
  /* 12cf4b40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4b43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf4b45 mov dword ptr [0x12d20564], eax */
  w32((uint32_t)(0x12d20564), (EAX));
L_12cf4b4a:;
  /* 12cf4b4a cmp dword ptr [0x12d20564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4b51 je 0x12cf4b61 */
  if (C.zf) goto L_12cf4b61;
  /* 12cf4b53 mov ecx, dword ptr [0x12d20564] */
  ECX = (r32((uint32_t)(0x12d20564)));
  /* 12cf4b59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4b5c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12cf4b5f jmp 0x12cf4b69 */
  goto L_12cf4b69;
L_12cf4b61:;
  /* 12cf4b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4b64 mov dword ptr [0x12d2055c], eax */
  w32((uint32_t)(0x12d2055c), (EAX));
L_12cf4b69:;
  /* 12cf4b69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4b6c mov edx, dword ptr [0x12d20564] */
  EDX = (r32((uint32_t)(0x12d20564)));
  /* 12cf4b72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cf4b74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4b77 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cf4b7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf4b81 mov dword ptr [0x12d20564], ecx */
  w32((uint32_t)(0x12d20564), (ECX));
  /* 12cf4b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cf4b8a:;
  /* 12cf4b8a pop edi */
  EDI = (pop32());
  /* 12cf4b8b pop esi */
  ESI = (pop32());
  /* 12cf4b8c pop ebx */
  EBX = (pop32());
  /* 12cf4b8d mov esp, ebp */
  ESP = (EBP);
  /* 12cf4b8f pop ebp */
  EBP = (pop32());
  /* 12cf4b90 ret  */
  ESPCHK(0x12cf4680u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x12cf4ba0 (27 bytes, 13 insns) */
void f_12cf4ba0(void) {
  FTRACE(0x12cf4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4ba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4ba9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf4bac push eax */
  push32((uint32_t)(EAX));
  /* 12cf4bad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4bb1 call 0x12cf4bc0 */
  push32(0x12cf4bb6u); f_12cf4bc0();
  /* 12cf4bb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4bb9 pop ebp */
  EBP = (pop32());
  /* 12cf4bba ret  */
  ESPCHK(0x12cf4ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bc0 @ 0x12cf4bc0 (64 bytes, 27 insns) */
void f_12cf4bc0(void) {
  FTRACE(0x12cf4bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4bc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf4bc6 call 0x12cf7bb0 */
  push32(0x12cf4bcbu); f_12cf7bb0();
  /* 12cf4bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4bce push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4bd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf4bd3 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4bd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf4bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4bd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf4bdb push edx */
  push32((uint32_t)(EDX));
  /* 12cf4bdc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf4bdf push eax */
  push32((uint32_t)(EAX));
  /* 12cf4be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4be4 call 0x12cf4680 */
  push32(0x12cf4be9u); f_12cf4680();
  /* 12cf4be9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4bec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf4bef push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf4bf1 call 0x12cf7c50 */
  push32(0x12cf4bf6u); f_12cf7c50();
  /* 12cf4bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4bf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4bfc mov esp, ebp */
  ESP = (EBP);
  /* 12cf4bfe pop ebp */
  EBP = (pop32());
  /* 12cf4bff ret  */
  ESPCHK(0x12cf4bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x12cf4c00 (19 bytes, 9 insns) */
void f_12cf4c00(void) {
  FTRACE(0x12cf4c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4c01 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4c03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4c05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4c08 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4c09 call 0x12cf4c40 */
  push32(0x12cf4c0eu); f_12cf4c40();
  /* 12cf4c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4c11 pop ebp */
  EBP = (pop32());
  /* 12cf4c12 ret  */
  ESPCHK(0x12cf4c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x12cf4c20 (19 bytes, 9 insns) */
void f_12cf4c20(void) {
  FTRACE(0x12cf4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4c21 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4c25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4c28 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4c29 call 0x12cf4c70 */
  push32(0x12cf4c2eu); f_12cf4c70();
  /* 12cf4c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4c31 pop ebp */
  EBP = (pop32());
  /* 12cf4c32 ret  */
  ESPCHK(0x12cf4c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x12cf4c40 (41 bytes, 16 insns) */
void f_12cf4c40(void) {
  FTRACE(0x12cf4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4c41 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4c43 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf4c45 call 0x12cf7bb0 */
  push32(0x12cf4c4au); f_12cf7bb0();
  /* 12cf4c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf4c50 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4c51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4c54 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4c55 call 0x12cf4c70 */
  push32(0x12cf4c5au); f_12cf4c70();
  /* 12cf4c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4c5d push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf4c5f call 0x12cf7c50 */
  push32(0x12cf4c64u); f_12cf7c50();
  /* 12cf4c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4c67 pop ebp */
  EBP = (pop32());
  /* 12cf4c68 ret  */
  ESPCHK(0x12cf4c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c70 @ 0x12cf4c70 (1004 bytes, 342 insns) */
void f_12cf4c70(void) {
  FTRACE(0x12cf4c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf4c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf4c71 mov ebp, esp */
  EBP = (ESP);
  /* 12cf4c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4c74 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf4c75 push esi */
  push32((uint32_t)(ESI));
  /* 12cf4c76 push edi */
  push32((uint32_t)(EDI));
  /* 12cf4c77 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf4c7c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4c81 je 0x12cf4cb3 */
  if (C.zf) goto L_12cf4cb3;
L_12cf4c83:;
  /* 12cf4c83 call 0x12cf5350 */
  push32(0x12cf4c88u); f_12cf5350();
  /* 12cf4c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4c8a jne 0x12cf4cad */
  if (!C.zf) goto L_12cf4cad;
  /* 12cf4c8c push 0x12d1b8f8 */
  push32((uint32_t)(0x12d1b8f8u));
  /* 12cf4c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4c93 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12cf4c98 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4c9f call 0x12cf3270 */
  push32(0x12cf4ca4u); f_12cf3270();
  /* 12cf4ca4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4ca7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4caa jne 0x12cf4cad */
  if (!C.zf) goto L_12cf4cad;
  /* 12cf4cac int3  */
  x86_unimpl("int3 @ 0x12cf4cac");
L_12cf4cad:;
  /* 12cf4cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4caf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf4cb1 jne 0x12cf4c83 */
  if (!C.zf) goto L_12cf4c83;
L_12cf4cb3:;
  /* 12cf4cb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4cb7 jne 0x12cf4cbe */
  if (!C.zf) goto L_12cf4cbe;
  /* 12cf4cb9 jmp 0x12cf5055 */
  goto L_12cf5055;
L_12cf4cbe:;
  /* 12cf4cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4cc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf4cc7 push edx */
  push32((uint32_t)(EDX));
  /* 12cf4cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4ccd push eax */
  push32((uint32_t)(EAX));
  /* 12cf4cce push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf4cd0 call dword ptr [0x12d1ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d1ec90))), 0x12cf4cd6u);
  /* 12cf4cd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4cdb jne 0x12cf4d08 */
  if (!C.zf) goto L_12cf4d08;
L_12cf4cdd:;
  /* 12cf4cdd push 0x12d1bbbc */
  push32((uint32_t)(0x12d1bbbcu));
  /* 12cf4ce2 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf4ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4ced push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4cef call 0x12cf3270 */
  push32(0x12cf4cf4u); f_12cf3270();
  /* 12cf4cf4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4cf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4cfa jne 0x12cf4cfd */
  if (!C.zf) goto L_12cf4cfd;
  /* 12cf4cfc int3  */
  x86_unimpl("int3 @ 0x12cf4cfc");
L_12cf4cfd:;
  /* 12cf4cfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4cff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf4d01 jne 0x12cf4cdd */
  if (!C.zf) goto L_12cf4cdd;
  /* 12cf4d03 jmp 0x12cf5055 */
  goto L_12cf5055;
L_12cf4d08:;
  /* 12cf4d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4d0b push edx */
  push32((uint32_t)(EDX));
  /* 12cf4d0c call 0x12cf57b0 */
  push32(0x12cf4d11u); f_12cf57b0();
  /* 12cf4d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4d16 jne 0x12cf4d39 */
  if (!C.zf) goto L_12cf4d39;
  /* 12cf4d18 push 0x12d1b9fc */
  push32((uint32_t)(0x12d1b9fcu));
  /* 12cf4d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4d1f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12cf4d24 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4d29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4d2b call 0x12cf3270 */
  push32(0x12cf4d30u); f_12cf3270();
  /* 12cf4d30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4d33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4d36 jne 0x12cf4d39 */
  if (!C.zf) goto L_12cf4d39;
  /* 12cf4d38 int3  */
  x86_unimpl("int3 @ 0x12cf4d38");
L_12cf4d39:;
  /* 12cf4d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4d3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4d3d jne 0x12cf4d08 */
  if (!C.zf) goto L_12cf4d08;
  /* 12cf4d3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf4d42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf4d45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf4d48:;
  /* 12cf4d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4d4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf4d4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4d53 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4d56 je 0x12cf4d9b */
  if (C.zf) goto L_12cf4d9b;
  /* 12cf4d58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4d5b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4d5f je 0x12cf4d9b */
  if (C.zf) goto L_12cf4d9b;
  /* 12cf4d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4d64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf4d67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4d6c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4d6f je 0x12cf4d9b */
  if (C.zf) goto L_12cf4d9b;
  /* 12cf4d71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4d74 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4d78 je 0x12cf4d9b */
  if (C.zf) goto L_12cf4d9b;
  /* 12cf4d7a push 0x12d1bb94 */
  push32((uint32_t)(0x12d1bb94u));
  /* 12cf4d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4d81 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12cf4d86 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4d8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4d8d call 0x12cf3270 */
  push32(0x12cf4d92u); f_12cf3270();
  /* 12cf4d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4d95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4d98 jne 0x12cf4d9b */
  if (!C.zf) goto L_12cf4d9b;
  /* 12cf4d9a int3  */
  x86_unimpl("int3 @ 0x12cf4d9a");
L_12cf4d9b:;
  /* 12cf4d9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf4d9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf4d9f jne 0x12cf4d48 */
  if (!C.zf) goto L_12cf4d48;
  /* 12cf4da1 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf4da6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4dab jne 0x12cf4e76 */
  if (!C.zf) goto L_12cf4e76;
  /* 12cf4db1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf4db3 mov cl, byte ptr [0x12d1ea90] */
  CL = (r8((uint32_t)(0x12d1ea90)));
  /* 12cf4db9 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4dba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4dbd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12cf4dc1 call 0x12cf52c0 */
  push32(0x12cf4dc6u); f_12cf52c0();
  /* 12cf4dc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4dcb jne 0x12cf4e10 */
  if (!C.zf) goto L_12cf4e10;
L_12cf4dcd:;
  /* 12cf4dcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4dd0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4dd3 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4dd7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cf4dda push edx */
  push32((uint32_t)(EDX));
  /* 12cf4ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4dde mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cf4de1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4de7 mov edx, dword ptr [ecx*4 + 0x12d1ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1ea94)));
  /* 12cf4dee push edx */
  push32((uint32_t)(EDX));
  /* 12cf4def push 0x12d1bb68 */
  push32((uint32_t)(0x12d1bb68u));
  /* 12cf4df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4df6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4df8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4dfa push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4dfc call 0x12cf3270 */
  push32(0x12cf4e01u); f_12cf3270();
  /* 12cf4e01 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4e04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4e07 jne 0x12cf4e0a */
  if (!C.zf) goto L_12cf4e0a;
  /* 12cf4e09 int3  */
  x86_unimpl("int3 @ 0x12cf4e09");
L_12cf4e0a:;
  /* 12cf4e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4e0e jne 0x12cf4dcd */
  if (!C.zf) goto L_12cf4dcd;
L_12cf4e10:;
  /* 12cf4e10 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf4e12 mov cl, byte ptr [0x12d1ea90] */
  CL = (r8((uint32_t)(0x12d1ea90)));
  /* 12cf4e18 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4e19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4e1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf4e1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4e22 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12cf4e26 push edx */
  push32((uint32_t)(EDX));
  /* 12cf4e27 call 0x12cf52c0 */
  push32(0x12cf4e2cu); f_12cf52c0();
  /* 12cf4e2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4e31 jne 0x12cf4e76 */
  if (!C.zf) goto L_12cf4e76;
L_12cf4e33:;
  /* 12cf4e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4e36 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4e39 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4e3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4e3d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cf4e40 push edx */
  push32((uint32_t)(EDX));
  /* 12cf4e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4e44 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cf4e47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4e4d mov edx, dword ptr [ecx*4 + 0x12d1ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1ea94)));
  /* 12cf4e54 push edx */
  push32((uint32_t)(EDX));
  /* 12cf4e55 push 0x12d1bb3c */
  push32((uint32_t)(0x12d1bb3cu));
  /* 12cf4e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4e60 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf4e62 call 0x12cf3270 */
  push32(0x12cf4e67u); f_12cf3270();
  /* 12cf4e67 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4e6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4e6d jne 0x12cf4e70 */
  if (!C.zf) goto L_12cf4e70;
  /* 12cf4e6f int3  */
  x86_unimpl("int3 @ 0x12cf4e6f");
L_12cf4e70:;
  /* 12cf4e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf4e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf4e74 jne 0x12cf4e33 */
  if (!C.zf) goto L_12cf4e33;
L_12cf4e76:;
  /* 12cf4e76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4e79 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4e7d jne 0x12cf4eeb */
  if (!C.zf) goto L_12cf4eeb;
L_12cf4e7f:;
  /* 12cf4e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4e82 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4e89 jne 0x12cf4e94 */
  if (!C.zf) goto L_12cf4e94;
  /* 12cf4e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4e8e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4e92 je 0x12cf4eb5 */
  if (C.zf) goto L_12cf4eb5;
L_12cf4e94:;
  /* 12cf4e94 push 0x12d1bafc */
  push32((uint32_t)(0x12d1bafcu));
  /* 12cf4e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4e9b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12cf4ea0 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4ea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4ea7 call 0x12cf3270 */
  push32(0x12cf4eacu); f_12cf3270();
  /* 12cf4eac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4eaf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4eb2 jne 0x12cf4eb5 */
  if (!C.zf) goto L_12cf4eb5;
  /* 12cf4eb4 int3  */
  x86_unimpl("int3 @ 0x12cf4eb4");
L_12cf4eb5:;
  /* 12cf4eb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4eb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf4eb9 jne 0x12cf4e7f */
  if (!C.zf) goto L_12cf4e7f;
  /* 12cf4ebb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4ebe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf4ec1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4ec4 push eax */
  push32((uint32_t)(EAX));
  /* 12cf4ec5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4ec7 mov cl, byte ptr [0x12d1ea91] */
  CL = (r8((uint32_t)(0x12d1ea91)));
  /* 12cf4ecd push ecx */
  push32((uint32_t)(ECX));
  /* 12cf4ece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4ed1 push edx */
  push32((uint32_t)(EDX));
  /* 12cf4ed2 call 0x12cf7f20 */
  push32(0x12cf4ed7u); f_12cf7f20();
  /* 12cf4ed7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4eda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4edd push eax */
  push32((uint32_t)(EAX));
  /* 12cf4ede call 0x12cf8320 */
  push32(0x12cf4ee3u); f_12cf8320();
  /* 12cf4ee3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4ee6 jmp 0x12cf5055 */
  goto L_12cf5055;
L_12cf4eeb:;
  /* 12cf4eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4eee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4ef2 jne 0x12cf4f01 */
  if (!C.zf) goto L_12cf4f01;
  /* 12cf4ef4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4ef8 jne 0x12cf4f01 */
  if (!C.zf) goto L_12cf4f01;
  /* 12cf4efa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12cf4f01:;
  /* 12cf4f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4f04 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf4f07 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4f0a je 0x12cf4f2d */
  if (C.zf) goto L_12cf4f2d;
  /* 12cf4f0c push 0x12d1badc */
  push32((uint32_t)(0x12d1badcu));
  /* 12cf4f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4f13 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12cf4f18 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4f1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4f1f call 0x12cf3270 */
  push32(0x12cf4f24u); f_12cf3270();
  /* 12cf4f24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4f27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4f2a jne 0x12cf4f2d */
  if (!C.zf) goto L_12cf4f2d;
  /* 12cf4f2c int3  */
  x86_unimpl("int3 @ 0x12cf4f2c");
L_12cf4f2d:;
  /* 12cf4f2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4f2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf4f31 jne 0x12cf4f01 */
  if (!C.zf) goto L_12cf4f01;
  /* 12cf4f33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4f36 mov eax, dword ptr [0x12d20568] */
  EAX = (r32((uint32_t)(0x12d20568)));
  /* 12cf4f3b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf4f3e mov dword ptr [0x12d20568], eax */
  w32((uint32_t)(0x12d20568), (EAX));
  /* 12cf4f43 mov ecx, dword ptr [0x12d1ea84] */
  ECX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf4f49 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf4f4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf4f4e jne 0x12cf502c */
  if (!C.zf) goto L_12cf502c;
  /* 12cf4f54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4f57 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4f5a je 0x12cf4f6c */
  if (C.zf) goto L_12cf4f6c;
  /* 12cf4f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4f5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf4f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4f64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf4f67 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cf4f6a jmp 0x12cf4faa */
  goto L_12cf4faa;
L_12cf4f6c:;
  /* 12cf4f6c mov ecx, dword ptr [0x12d2055c] */
  ECX = (r32((uint32_t)(0x12d2055c)));
  /* 12cf4f72 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4f75 je 0x12cf4f98 */
  if (C.zf) goto L_12cf4f98;
  /* 12cf4f77 push 0x12d1bac4 */
  push32((uint32_t)(0x12d1bac4u));
  /* 12cf4f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4f7e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12cf4f83 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4f88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4f8a call 0x12cf3270 */
  push32(0x12cf4f8fu); f_12cf3270();
  /* 12cf4f8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4f92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4f95 jne 0x12cf4f98 */
  if (!C.zf) goto L_12cf4f98;
  /* 12cf4f97 int3  */
  x86_unimpl("int3 @ 0x12cf4f97");
L_12cf4f98:;
  /* 12cf4f98 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf4f9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf4f9c jne 0x12cf4f6c */
  if (!C.zf) goto L_12cf4f6c;
  /* 12cf4f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4fa1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf4fa4 mov dword ptr [0x12d2055c], ecx */
  w32((uint32_t)(0x12d2055c), (ECX));
L_12cf4faa:;
  /* 12cf4faa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4fad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4fb1 je 0x12cf4fc2 */
  if (C.zf) goto L_12cf4fc2;
  /* 12cf4fb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4fb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf4fb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4fbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf4fbe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cf4fc0 jmp 0x12cf4fff */
  goto L_12cf4fff;
L_12cf4fc2:;
  /* 12cf4fc2 mov ecx, dword ptr [0x12d20564] */
  ECX = (r32((uint32_t)(0x12d20564)));
  /* 12cf4fc8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4fcb je 0x12cf4fee */
  if (C.zf) goto L_12cf4fee;
  /* 12cf4fcd push 0x12d1baac */
  push32((uint32_t)(0x12d1baacu));
  /* 12cf4fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf4fd4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12cf4fd9 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf4fde push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf4fe0 call 0x12cf3270 */
  push32(0x12cf4fe5u); f_12cf3270();
  /* 12cf4fe5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf4fe8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf4feb jne 0x12cf4fee */
  if (!C.zf) goto L_12cf4fee;
  /* 12cf4fed int3  */
  x86_unimpl("int3 @ 0x12cf4fed");
L_12cf4fee:;
  /* 12cf4fee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf4ff0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf4ff2 jne 0x12cf4fc2 */
  if (!C.zf) goto L_12cf4fc2;
  /* 12cf4ff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf4ff7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf4ff9 mov dword ptr [0x12d20564], ecx */
  w32((uint32_t)(0x12d20564), (ECX));
L_12cf4fff:;
  /* 12cf4fff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5002 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf5005 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5008 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5009 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf500b mov cl, byte ptr [0x12d1ea91] */
  CL = (r8((uint32_t)(0x12d1ea91)));
  /* 12cf5011 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5012 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5015 push edx */
  push32((uint32_t)(EDX));
  /* 12cf5016 call 0x12cf7f20 */
  push32(0x12cf501bu); f_12cf7f20();
  /* 12cf501b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf501e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5021 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5022 call 0x12cf8320 */
  push32(0x12cf5027u); f_12cf8320();
  /* 12cf5027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf502a jmp 0x12cf5055 */
  goto L_12cf5055;
L_12cf502c:;
  /* 12cf502c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf502f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12cf5036 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5039 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf503c push eax */
  push32((uint32_t)(EAX));
  /* 12cf503d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf503f mov cl, byte ptr [0x12d1ea91] */
  CL = (r8((uint32_t)(0x12d1ea91)));
  /* 12cf5045 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5049 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf504c push edx */
  push32((uint32_t)(EDX));
  /* 12cf504d call 0x12cf7f20 */
  push32(0x12cf5052u); f_12cf7f20();
  /* 12cf5052 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf5055:;
  /* 12cf5055 pop edi */
  EDI = (pop32());
  /* 12cf5056 pop esi */
  ESI = (pop32());
  /* 12cf5057 pop ebx */
  EBX = (pop32());
  /* 12cf5058 mov esp, ebp */
  ESP = (EBP);
  /* 12cf505a pop ebp */
  EBP = (pop32());
  /* 12cf505b ret  */
  ESPCHK(0x12cf4c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x12cf5060 (19 bytes, 9 insns) */
void f_12cf5060(void) {
  FTRACE(0x12cf5060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5060 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5061 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5063 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf5065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5068 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5069 call 0x12cf5080 */
  push32(0x12cf506eu); f_12cf5080();
  /* 12cf506e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5071 pop ebp */
  EBP = (pop32());
  /* 12cf5072 ret  */
  ESPCHK(0x12cf5060u, _esp0);
  ESP += 4; return;
}

/* FUN_10005080 @ 0x12cf5080 (342 bytes, 119 insns) */
void f_12cf5080(void) {
  FTRACE(0x12cf5080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5080 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5081 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5086 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf5087 push esi */
  push32((uint32_t)(ESI));
  /* 12cf5088 push edi */
  push32((uint32_t)(EDI));
  /* 12cf5089 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf508e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5093 je 0x12cf50c5 */
  if (C.zf) goto L_12cf50c5;
L_12cf5095:;
  /* 12cf5095 call 0x12cf5350 */
  push32(0x12cf509au); f_12cf5350();
  /* 12cf509a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf509c jne 0x12cf50bf */
  if (!C.zf) goto L_12cf50bf;
  /* 12cf509e push 0x12d1b8f8 */
  push32((uint32_t)(0x12d1b8f8u));
  /* 12cf50a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf50a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12cf50aa push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf50af push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf50b1 call 0x12cf3270 */
  push32(0x12cf50b6u); f_12cf3270();
  /* 12cf50b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf50b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf50bc jne 0x12cf50bf */
  if (!C.zf) goto L_12cf50bf;
  /* 12cf50be int3  */
  x86_unimpl("int3 @ 0x12cf50be");
L_12cf50bf:;
  /* 12cf50bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf50c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf50c3 jne 0x12cf5095 */
  if (!C.zf) goto L_12cf5095;
L_12cf50c5:;
  /* 12cf50c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf50c7 call 0x12cf7bb0 */
  push32(0x12cf50ccu); f_12cf7bb0();
  /* 12cf50cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf50cf:;
  /* 12cf50cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf50d2 push edx */
  push32((uint32_t)(EDX));
  /* 12cf50d3 call 0x12cf57b0 */
  push32(0x12cf50d8u); f_12cf57b0();
  /* 12cf50d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf50db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf50dd jne 0x12cf5100 */
  if (!C.zf) goto L_12cf5100;
  /* 12cf50df push 0x12d1b9fc */
  push32((uint32_t)(0x12d1b9fcu));
  /* 12cf50e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf50e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12cf50eb push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf50f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf50f2 call 0x12cf3270 */
  push32(0x12cf50f7u); f_12cf3270();
  /* 12cf50f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf50fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf50fd jne 0x12cf5100 */
  if (!C.zf) goto L_12cf5100;
  /* 12cf50ff int3  */
  x86_unimpl("int3 @ 0x12cf50ff");
L_12cf5100:;
  /* 12cf5100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5104 jne 0x12cf50cf */
  if (!C.zf) goto L_12cf50cf;
  /* 12cf5106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5109 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf510c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cf510f:;
  /* 12cf510f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5112 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf5115 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf511a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf511d je 0x12cf5162 */
  if (C.zf) goto L_12cf5162;
  /* 12cf511f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5122 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5126 je 0x12cf5162 */
  if (C.zf) goto L_12cf5162;
  /* 12cf5128 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf512b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf512e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5133 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5136 je 0x12cf5162 */
  if (C.zf) goto L_12cf5162;
  /* 12cf5138 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf513b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf513f je 0x12cf5162 */
  if (C.zf) goto L_12cf5162;
  /* 12cf5141 push 0x12d1bb94 */
  push32((uint32_t)(0x12d1bb94u));
  /* 12cf5146 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5148 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12cf514d push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf5152 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf5154 call 0x12cf3270 */
  push32(0x12cf5159u); f_12cf3270();
  /* 12cf5159 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf515c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf515f jne 0x12cf5162 */
  if (!C.zf) goto L_12cf5162;
  /* 12cf5161 int3  */
  x86_unimpl("int3 @ 0x12cf5161");
L_12cf5162:;
  /* 12cf5162 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5164 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf5166 jne 0x12cf510f */
  if (!C.zf) goto L_12cf510f;
  /* 12cf5168 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf516b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf516f jne 0x12cf517e */
  if (!C.zf) goto L_12cf517e;
  /* 12cf5171 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5175 jne 0x12cf517e */
  if (!C.zf) goto L_12cf517e;
  /* 12cf5177 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12cf517e:;
  /* 12cf517e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5181 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5185 je 0x12cf51b9 */
  if (C.zf) goto L_12cf51b9;
L_12cf5187:;
  /* 12cf5187 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf518a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf518d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5190 je 0x12cf51b3 */
  if (C.zf) goto L_12cf51b3;
  /* 12cf5192 push 0x12d1badc */
  push32((uint32_t)(0x12d1badcu));
  /* 12cf5197 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5199 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12cf519e push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf51a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf51a5 call 0x12cf3270 */
  push32(0x12cf51aau); f_12cf3270();
  /* 12cf51aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf51ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf51b0 jne 0x12cf51b3 */
  if (!C.zf) goto L_12cf51b3;
  /* 12cf51b2 int3  */
  x86_unimpl("int3 @ 0x12cf51b2");
L_12cf51b3:;
  /* 12cf51b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf51b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf51b7 jne 0x12cf5187 */
  if (!C.zf) goto L_12cf5187;
L_12cf51b9:;
  /* 12cf51b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf51bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf51bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf51c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf51c4 call 0x12cf7c50 */
  push32(0x12cf51c9u); f_12cf7c50();
  /* 12cf51c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf51cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf51cf pop edi */
  EDI = (pop32());
  /* 12cf51d0 pop esi */
  ESI = (pop32());
  /* 12cf51d1 pop ebx */
  EBX = (pop32());
  /* 12cf51d2 mov esp, ebp */
  ESP = (EBP);
  /* 12cf51d4 pop ebp */
  EBP = (pop32());
  /* 12cf51d5 ret  */
  ESPCHK(0x12cf5080u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e0 @ 0x12cf51e0 (28 bytes, 11 insns) */
void f_12cf51e0(void) {
  FTRACE(0x12cf51e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf51e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf51e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf51e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf51e4 mov eax, dword ptr [0x12d1ea8c] */
  EAX = (r32((uint32_t)(0x12d1ea8c)));
  /* 12cf51e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf51ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf51ef mov dword ptr [0x12d1ea8c], ecx */
  w32((uint32_t)(0x12d1ea8c), (ECX));
  /* 12cf51f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf51f8 mov esp, ebp */
  ESP = (EBP);
  /* 12cf51fa pop ebp */
  EBP = (pop32());
  /* 12cf51fb ret  */
  ESPCHK(0x12cf51e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x12cf5200 (157 bytes, 59 insns) */
void f_12cf5200(void) {
  FTRACE(0x12cf5200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5200 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5201 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5203 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5204 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf5205 push esi */
  push32((uint32_t)(ESI));
  /* 12cf5206 push edi */
  push32((uint32_t)(EDI));
  /* 12cf5207 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf5209 call 0x12cf7bb0 */
  push32(0x12cf520eu); f_12cf7bb0();
  /* 12cf520e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5214 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5215 call 0x12cf57b0 */
  push32(0x12cf521au); f_12cf57b0();
  /* 12cf521a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf521d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf521f je 0x12cf528c */
  if (C.zf) goto L_12cf528c;
  /* 12cf5221 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5224 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5227 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf522a:;
  /* 12cf522a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf522d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf5230 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5235 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5238 je 0x12cf527d */
  if (C.zf) goto L_12cf527d;
  /* 12cf523a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf523d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5241 je 0x12cf527d */
  if (C.zf) goto L_12cf527d;
  /* 12cf5243 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5246 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf5249 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf524e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5251 je 0x12cf527d */
  if (C.zf) goto L_12cf527d;
  /* 12cf5253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5256 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf525a je 0x12cf527d */
  if (C.zf) goto L_12cf527d;
  /* 12cf525c push 0x12d1bb94 */
  push32((uint32_t)(0x12d1bb94u));
  /* 12cf5261 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5263 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12cf5268 push 0x12d1b8ec */
  push32((uint32_t)(0x12d1b8ecu));
  /* 12cf526d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf526f call 0x12cf3270 */
  push32(0x12cf5274u); f_12cf3270();
  /* 12cf5274 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf527a jne 0x12cf527d */
  if (!C.zf) goto L_12cf527d;
  /* 12cf527c int3  */
  x86_unimpl("int3 @ 0x12cf527c");
L_12cf527d:;
  /* 12cf527d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf527f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf5281 jne 0x12cf522a */
  if (!C.zf) goto L_12cf522a;
  /* 12cf5283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5286 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf5289 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12cf528c:;
  /* 12cf528c push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf528e call 0x12cf7c50 */
  push32(0x12cf5293u); f_12cf7c50();
  /* 12cf5293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5296 pop edi */
  EDI = (pop32());
  /* 12cf5297 pop esi */
  ESI = (pop32());
  /* 12cf5298 pop ebx */
  EBX = (pop32());
  /* 12cf5299 mov esp, ebp */
  ESP = (EBP);
  /* 12cf529b pop ebp */
  EBP = (pop32());
  /* 12cf529c ret  */
  ESPCHK(0x12cf5200u, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x12cf52a0 (28 bytes, 11 insns) */
void f_12cf52a0(void) {
  FTRACE(0x12cf52a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf52a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf52a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf52a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf52a4 mov eax, dword ptr [0x12d1ec90] */
  EAX = (r32((uint32_t)(0x12d1ec90)));
  /* 12cf52a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf52ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf52af mov dword ptr [0x12d1ec90], ecx */
  w32((uint32_t)(0x12d1ec90), (ECX));
  /* 12cf52b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf52b8 mov esp, ebp */
  ESP = (EBP);
  /* 12cf52ba pop ebp */
  EBP = (pop32());
  /* 12cf52bb ret  */
  ESPCHK(0x12cf52a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c0 @ 0x12cf52c0 (136 bytes, 55 insns) */
void f_12cf52c0(void) {
  FTRACE(0x12cf52c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf52c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf52c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf52c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf52c4 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf52c5 push esi */
  push32((uint32_t)(ESI));
  /* 12cf52c6 push edi */
  push32((uint32_t)(EDI));
  /* 12cf52c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12cf52ce:;
  /* 12cf52ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf52d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf52d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf52d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cf52da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf52dc je 0x12cf533e */
  if (C.zf) goto L_12cf533e;
  /* 12cf52de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf52e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf52e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cf52e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf52e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf52ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf52f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf52f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cf52f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf52f9 je 0x12cf533c */
  if (C.zf) goto L_12cf533c;
L_12cf52fb:;
  /* 12cf52fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf52fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5303 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5304 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5307 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5309 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12cf530c push edx */
  push32((uint32_t)(EDX));
  /* 12cf530d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5310 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5313 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5314 push 0x12d1bbd8 */
  push32((uint32_t)(0x12d1bbd8u));
  /* 12cf5319 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf531b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf531d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf531f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5321 call 0x12cf3270 */
  push32(0x12cf5326u); f_12cf3270();
  /* 12cf5326 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5329 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf532c jne 0x12cf532f */
  if (!C.zf) goto L_12cf532f;
  /* 12cf532e int3  */
  x86_unimpl("int3 @ 0x12cf532e");
L_12cf532f:;
  /* 12cf532f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5331 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf5333 jne 0x12cf52fb */
  if (!C.zf) goto L_12cf52fb;
  /* 12cf5335 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cf533c:;
  /* 12cf533c jmp 0x12cf52ce */
  goto L_12cf52ce;
L_12cf533e:;
  /* 12cf533e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5341 pop edi */
  EDI = (pop32());
  /* 12cf5342 pop esi */
  ESI = (pop32());
  /* 12cf5343 pop ebx */
  EBX = (pop32());
  /* 12cf5344 mov esp, ebp */
  ESP = (EBP);
  /* 12cf5346 pop ebp */
  EBP = (pop32());
  /* 12cf5347 ret  */
  ESPCHK(0x12cf52c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x12cf5350 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12cf5350(void) {
  FTRACE(0x12cf5350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5350 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5351 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5353 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5356 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf5357 push esi */
  push32((uint32_t)(ESI));
  /* 12cf5358 push edi */
  push32((uint32_t)(EDI));
  /* 12cf5359 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cf5360 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf5365 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf536a jne 0x12cf5376 */
  if (!C.zf) goto L_12cf5376;
  /* 12cf536c mov eax, 1 */
  EAX = (0x1u);
  /* 12cf5371 jmp 0x12cf56a8 */
  goto L_12cf56a8;
L_12cf5376:;
  /* 12cf5376 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf5378 call 0x12cf7bb0 */
  push32(0x12cf537du); f_12cf7bb0();
  /* 12cf537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5380 call 0x12cf8390 */
  push32(0x12cf5385u); f_12cf8390();
  /* 12cf5385 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf5388 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf538c je 0x12cf5499 */
  if (C.zf) goto L_12cf5499;
  /* 12cf5392 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5396 je 0x12cf5499 */
  if (C.zf) goto L_12cf5499;
  /* 12cf539c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf539f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cf53a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf53a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf53a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cf53ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf53af ja 0x12cf5462 */
  if ((!C.cf&&!C.zf)) goto L_12cf5462;
  /* 12cf53b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf53b8 jmp dword ptr [eax*4 + 0x12cf56af] */
  switch (EAX) {
    case 0: goto L_12cf543a;
    case 1: goto L_12cf5412;
    case 2: goto L_12cf53ea;
    case 3: goto L_12cf53bf;
    default: x86_unimpl("switch@0x12cf53b8 out of table"); return;
  }
L_12cf53bf:;
  /* 12cf53bf push 0x12d1bd2c */
  push32((uint32_t)(0x12d1bd2cu));
  /* 12cf53c4 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf53c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf53cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf53cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf53cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf53d1 call 0x12cf3270 */
  push32(0x12cf53d6u); f_12cf3270();
  /* 12cf53d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf53d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf53dc jne 0x12cf53df */
  if (!C.zf) goto L_12cf53df;
  /* 12cf53de int3  */
  x86_unimpl("int3 @ 0x12cf53de");
L_12cf53df:;
  /* 12cf53df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf53e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf53e3 jne 0x12cf53bf */
  if (!C.zf) goto L_12cf53bf;
  /* 12cf53e5 jmp 0x12cf5488 */
  goto L_12cf5488;
L_12cf53ea:;
  /* 12cf53ea push 0x12d1bd08 */
  push32((uint32_t)(0x12d1bd08u));
  /* 12cf53ef push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf53f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf53f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf53f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf53fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf53fc call 0x12cf3270 */
  push32(0x12cf5401u); f_12cf3270();
  /* 12cf5401 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5404 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5407 jne 0x12cf540a */
  if (!C.zf) goto L_12cf540a;
  /* 12cf5409 int3  */
  x86_unimpl("int3 @ 0x12cf5409");
L_12cf540a:;
  /* 12cf540a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf540c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf540e jne 0x12cf53ea */
  if (!C.zf) goto L_12cf53ea;
  /* 12cf5410 jmp 0x12cf5488 */
  goto L_12cf5488;
L_12cf5412:;
  /* 12cf5412 push 0x12d1bce4 */
  push32((uint32_t)(0x12d1bce4u));
  /* 12cf5417 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf541c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf541e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5420 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5422 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5424 call 0x12cf3270 */
  push32(0x12cf5429u); f_12cf3270();
  /* 12cf5429 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf542c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf542f jne 0x12cf5432 */
  if (!C.zf) goto L_12cf5432;
  /* 12cf5431 int3  */
  x86_unimpl("int3 @ 0x12cf5431");
L_12cf5432:;
  /* 12cf5432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5436 jne 0x12cf5412 */
  if (!C.zf) goto L_12cf5412;
  /* 12cf5438 jmp 0x12cf5488 */
  goto L_12cf5488;
L_12cf543a:;
  /* 12cf543a push 0x12d1bcc0 */
  push32((uint32_t)(0x12d1bcc0u));
  /* 12cf543f push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf5444 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5448 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf544a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf544c call 0x12cf3270 */
  push32(0x12cf5451u); f_12cf3270();
  /* 12cf5451 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5457 jne 0x12cf545a */
  if (!C.zf) goto L_12cf545a;
  /* 12cf5459 int3  */
  x86_unimpl("int3 @ 0x12cf5459");
L_12cf545a:;
  /* 12cf545a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf545c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf545e jne 0x12cf543a */
  if (!C.zf) goto L_12cf543a;
  /* 12cf5460 jmp 0x12cf5488 */
  goto L_12cf5488;
L_12cf5462:;
  /* 12cf5462 push 0x12d1bc94 */
  push32((uint32_t)(0x12d1bc94u));
  /* 12cf5467 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf546c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf546e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5470 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5472 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5474 call 0x12cf3270 */
  push32(0x12cf5479u); f_12cf3270();
  /* 12cf5479 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf547c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf547f jne 0x12cf5482 */
  if (!C.zf) goto L_12cf5482;
  /* 12cf5481 int3  */
  x86_unimpl("int3 @ 0x12cf5481");
L_12cf5482:;
  /* 12cf5482 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5484 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf5486 jne 0x12cf5462 */
  if (!C.zf) goto L_12cf5462;
L_12cf5488:;
  /* 12cf5488 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf548a call 0x12cf7c50 */
  push32(0x12cf548fu); f_12cf7c50();
  /* 12cf548f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5494 jmp 0x12cf56a8 */
  goto L_12cf56a8;
L_12cf5499:;
  /* 12cf5499 mov eax, dword ptr [0x12d20564] */
  EAX = (r32((uint32_t)(0x12d20564)));
  /* 12cf549e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf54a1 jmp 0x12cf54ab */
  goto L_12cf54ab;
L_12cf54a3:;
  /* 12cf54a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf54a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf54a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cf54ab:;
  /* 12cf54ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf54af je 0x12cf569b */
  if (C.zf) goto L_12cf569b;
  /* 12cf54b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12cf54bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf54bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cf54c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf54c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf54cb je 0x12cf54f0 */
  if (C.zf) goto L_12cf54f0;
  /* 12cf54cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf54d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf54d4 je 0x12cf54f0 */
  if (C.zf) goto L_12cf54f0;
  /* 12cf54d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf54d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cf54dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf54e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf54e5 je 0x12cf54f0 */
  if (C.zf) goto L_12cf54f0;
  /* 12cf54e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf54ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf54ee jne 0x12cf5508 */
  if (!C.zf) goto L_12cf5508;
L_12cf54f0:;
  /* 12cf54f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf54f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cf54f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf54fc mov edx, dword ptr [ecx*4 + 0x12d1ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1ea94)));
  /* 12cf5503 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cf5506 jmp 0x12cf550f */
  goto L_12cf550f;
L_12cf5508:;
  /* 12cf5508 mov dword ptr [ebp - 0x14], 0x12d1bc8c */
  w32((uint32_t)(EBP + -0x14), (0x12d1bc8cu));
L_12cf550f:;
  /* 12cf550f push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf5511 mov al, byte ptr [0x12d1ea90] */
  AL = (r8((uint32_t)(0x12d1ea90)));
  /* 12cf5516 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf551a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf551d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf551e call 0x12cf52c0 */
  push32(0x12cf5523u); f_12cf52c0();
  /* 12cf5523 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5528 jne 0x12cf5564 */
  if (!C.zf) goto L_12cf5564;
L_12cf552a:;
  /* 12cf552a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf552d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5530 push edx */
  push32((uint32_t)(EDX));
  /* 12cf5531 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5534 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12cf5537 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5538 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf553b push edx */
  push32((uint32_t)(EDX));
  /* 12cf553c push 0x12d1bb68 */
  push32((uint32_t)(0x12d1bb68u));
  /* 12cf5541 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5543 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5547 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5549 call 0x12cf3270 */
  push32(0x12cf554eu); f_12cf3270();
  /* 12cf554e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5551 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5554 jne 0x12cf5557 */
  if (!C.zf) goto L_12cf5557;
  /* 12cf5556 int3  */
  x86_unimpl("int3 @ 0x12cf5556");
L_12cf5557:;
  /* 12cf5557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf555b jne 0x12cf552a */
  if (!C.zf) goto L_12cf552a;
  /* 12cf555d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cf5564:;
  /* 12cf5564 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf5566 mov cl, byte ptr [0x12d1ea90] */
  CL = (r8((uint32_t)(0x12d1ea90)));
  /* 12cf556c push ecx */
  push32((uint32_t)(ECX));
  /* 12cf556d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5570 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf5573 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5576 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12cf557a push edx */
  push32((uint32_t)(EDX));
  /* 12cf557b call 0x12cf52c0 */
  push32(0x12cf5580u); f_12cf52c0();
  /* 12cf5580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5585 jne 0x12cf55c1 */
  if (!C.zf) goto L_12cf55c1;
L_12cf5587:;
  /* 12cf5587 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf558a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf558d push eax */
  push32((uint32_t)(EAX));
  /* 12cf558e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5591 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cf5594 push edx */
  push32((uint32_t)(EDX));
  /* 12cf5595 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf5598 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5599 push 0x12d1bb3c */
  push32((uint32_t)(0x12d1bb3cu));
  /* 12cf559e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf55a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf55a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf55a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf55a6 call 0x12cf3270 */
  push32(0x12cf55abu); f_12cf3270();
  /* 12cf55ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf55ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf55b1 jne 0x12cf55b4 */
  if (!C.zf) goto L_12cf55b4;
  /* 12cf55b3 int3  */
  x86_unimpl("int3 @ 0x12cf55b3");
L_12cf55b4:;
  /* 12cf55b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf55b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf55b8 jne 0x12cf5587 */
  if (!C.zf) goto L_12cf5587;
  /* 12cf55ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cf55c1:;
  /* 12cf55c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf55c4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf55c8 jne 0x12cf561a */
  if (!C.zf) goto L_12cf561a;
  /* 12cf55ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf55cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf55d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf55d1 mov dl, byte ptr [0x12d1ea91] */
  DL = (r8((uint32_t)(0x12d1ea91)));
  /* 12cf55d7 push edx */
  push32((uint32_t)(EDX));
  /* 12cf55d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf55db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf55de push eax */
  push32((uint32_t)(EAX));
  /* 12cf55df call 0x12cf52c0 */
  push32(0x12cf55e4u); f_12cf52c0();
  /* 12cf55e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf55e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf55e9 jne 0x12cf561a */
  if (!C.zf) goto L_12cf561a;
L_12cf55eb:;
  /* 12cf55eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf55ee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf55f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf55f2 push 0x12d1bc60 */
  push32((uint32_t)(0x12d1bc60u));
  /* 12cf55f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf55f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf55fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf55fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf55ff call 0x12cf3270 */
  push32(0x12cf5604u); f_12cf3270();
  /* 12cf5604 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5607 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf560a jne 0x12cf560d */
  if (!C.zf) goto L_12cf560d;
  /* 12cf560c int3  */
  x86_unimpl("int3 @ 0x12cf560c");
L_12cf560d:;
  /* 12cf560d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf560f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf5611 jne 0x12cf55eb */
  if (!C.zf) goto L_12cf55eb;
  /* 12cf5613 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cf561a:;
  /* 12cf561a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf561e jne 0x12cf5696 */
  if (!C.zf) goto L_12cf5696;
  /* 12cf5620 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5623 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5627 je 0x12cf565c */
  if (C.zf) goto L_12cf565c;
L_12cf5629:;
  /* 12cf5629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf562c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cf562f push edx */
  push32((uint32_t)(EDX));
  /* 12cf5630 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5633 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf5636 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5637 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf563a push edx */
  push32((uint32_t)(EDX));
  /* 12cf563b push 0x12d1bc40 */
  push32((uint32_t)(0x12d1bc40u));
  /* 12cf5640 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5644 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5646 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5648 call 0x12cf3270 */
  push32(0x12cf564du); f_12cf3270();
  /* 12cf564d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5650 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5653 jne 0x12cf5656 */
  if (!C.zf) goto L_12cf5656;
  /* 12cf5655 int3  */
  x86_unimpl("int3 @ 0x12cf5655");
L_12cf5656:;
  /* 12cf5656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf565a jne 0x12cf5629 */
  if (!C.zf) goto L_12cf5629;
L_12cf565c:;
  /* 12cf565c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf565f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cf5662 push edx */
  push32((uint32_t)(EDX));
  /* 12cf5663 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5666 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5669 push eax */
  push32((uint32_t)(EAX));
  /* 12cf566a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf566d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf566e push 0x12d1bc14 */
  push32((uint32_t)(0x12d1bc14u));
  /* 12cf5673 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5675 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5677 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5679 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf567b call 0x12cf3270 */
  push32(0x12cf5680u); f_12cf3270();
  /* 12cf5680 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5683 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5686 jne 0x12cf5689 */
  if (!C.zf) goto L_12cf5689;
  /* 12cf5688 int3  */
  x86_unimpl("int3 @ 0x12cf5688");
L_12cf5689:;
  /* 12cf5689 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf568b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf568d jne 0x12cf565c */
  if (!C.zf) goto L_12cf565c;
  /* 12cf568f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cf5696:;
  /* 12cf5696 jmp 0x12cf54a3 */
  goto L_12cf54a3;
L_12cf569b:;
  /* 12cf569b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf569d call 0x12cf7c50 */
  push32(0x12cf56a2u); f_12cf7c50();
  /* 12cf56a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf56a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cf56a8:;
  /* 12cf56a8 pop edi */
  EDI = (pop32());
  /* 12cf56a9 pop esi */
  ESI = (pop32());
  /* 12cf56aa pop ebx */
  EBX = (pop32());
  /* 12cf56ab mov esp, ebp */
  ESP = (EBP);
  /* 12cf56ad pop ebp */
  EBP = (pop32());
  /* 12cf56ae ret  */
  ESPCHK(0x12cf5350u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c0 @ 0x12cf56c0 (34 bytes, 13 insns) */
void f_12cf56c0(void) {
  FTRACE(0x12cf56c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf56c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf56c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf56c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf56c4 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf56c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf56cc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf56d0 je 0x12cf56db */
  if (C.zf) goto L_12cf56db;
  /* 12cf56d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf56d5 mov dword ptr [0x12d1ea84], ecx */
  w32((uint32_t)(0x12d1ea84), (ECX));
L_12cf56db:;
  /* 12cf56db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf56de mov esp, ebp */
  ESP = (EBP);
  /* 12cf56e0 pop ebp */
  EBP = (pop32());
  /* 12cf56e1 ret  */
  ESPCHK(0x12cf56c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f0 @ 0x12cf56f0 (103 bytes, 38 insns) */
void f_12cf56f0(void) {
  FTRACE(0x12cf56f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf56f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf56f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf56f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf56f4 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf56f9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf56fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf56fe jne 0x12cf5702 */
  if (!C.zf) goto L_12cf5702;
  /* 12cf5700 jmp 0x12cf5753 */
  goto L_12cf5753;
L_12cf5702:;
  /* 12cf5702 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf5704 call 0x12cf7bb0 */
  push32(0x12cf5709u); f_12cf7bb0();
  /* 12cf5709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf570c mov ecx, dword ptr [0x12d20564] */
  ECX = (r32((uint32_t)(0x12d20564)));
  /* 12cf5712 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf5715 jmp 0x12cf571f */
  goto L_12cf571f;
L_12cf5717:;
  /* 12cf5717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf571a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf571c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf571f:;
  /* 12cf571f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5723 je 0x12cf5749 */
  if (C.zf) goto L_12cf5749;
  /* 12cf5725 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5728 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cf572b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5731 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5734 jne 0x12cf5747 */
  if (!C.zf) goto L_12cf5747;
  /* 12cf5736 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf5739 push eax */
  push32((uint32_t)(EAX));
  /* 12cf573a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf573d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5740 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5741 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12cf5744u);
  /* 12cf5744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf5747:;
  /* 12cf5747 jmp 0x12cf5717 */
  goto L_12cf5717;
L_12cf5749:;
  /* 12cf5749 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf574b call 0x12cf7c50 */
  push32(0x12cf5750u); f_12cf7c50();
  /* 12cf5750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf5753:;
  /* 12cf5753 mov esp, ebp */
  ESP = (EBP);
  /* 12cf5755 pop ebp */
  EBP = (pop32());
  /* 12cf5756 ret  */
  ESPCHK(0x12cf56f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12cf5760 (75 bytes, 28 insns) */
void f_12cf5760(void) {
  FTRACE(0x12cf5760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5760 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5761 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5763 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5764 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5768 je 0x12cf579d */
  if (C.zf) goto L_12cf579d;
  /* 12cf576a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf576d push eax */
  push32((uint32_t)(EAX));
  /* 12cf576e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5771 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5772 call dword ptr [0x12d23360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23360))), 0x12cf5778u);
  /* 12cf5778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf577a jne 0x12cf579d */
  if (!C.zf) goto L_12cf579d;
  /* 12cf577c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5780 je 0x12cf5794 */
  if (C.zf) goto L_12cf5794;
  /* 12cf5782 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf5785 push edx */
  push32((uint32_t)(EDX));
  /* 12cf5786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5789 push eax */
  push32((uint32_t)(EAX));
  /* 12cf578a call dword ptr [0x12d2335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2335c))), 0x12cf5790u);
  /* 12cf5790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5792 jne 0x12cf579d */
  if (!C.zf) goto L_12cf579d;
L_12cf5794:;
  /* 12cf5794 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cf579b jmp 0x12cf57a4 */
  goto L_12cf57a4;
L_12cf579d:;
  /* 12cf579d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cf57a4:;
  /* 12cf57a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf57a7 mov esp, ebp */
  ESP = (EBP);
  /* 12cf57a9 pop ebp */
  EBP = (pop32());
  /* 12cf57aa ret  */
  ESPCHK(0x12cf5760u, _esp0);
  ESP += 4; return;
}

/* FUN_100057b0 @ 0x12cf57b0 (134 bytes, 50 insns) */
void f_12cf57b0(void) {
  FTRACE(0x12cf57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf57b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf57b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf57b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf57b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf57b8 jne 0x12cf57be */
  if (!C.zf) goto L_12cf57be;
  /* 12cf57ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf57bc jmp 0x12cf5832 */
  goto L_12cf5832;
L_12cf57be:;
  /* 12cf57be push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf57c0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12cf57c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf57c5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf57c8 push eax */
  push32((uint32_t)(EAX));
  /* 12cf57c9 call 0x12cf5760 */
  push32(0x12cf57ceu); f_12cf5760();
  /* 12cf57ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf57d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf57d3 jne 0x12cf57d9 */
  if (!C.zf) goto L_12cf57d9;
  /* 12cf57d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf57d7 jmp 0x12cf5832 */
  goto L_12cf5832;
L_12cf57d9:;
  /* 12cf57d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf57dc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf57df push ecx */
  push32((uint32_t)(ECX));
  /* 12cf57e0 call 0x12cf84b0 */
  push32(0x12cf57e5u); f_12cf84b0();
  /* 12cf57e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf57e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf57eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf57ef je 0x12cf5806 */
  if (C.zf) goto L_12cf5806;
  /* 12cf57f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf57f4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf57f7 push edx */
  push32((uint32_t)(EDX));
  /* 12cf57f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf57fb push eax */
  push32((uint32_t)(EAX));
  /* 12cf57fc call 0x12cf8510 */
  push32(0x12cf5801u); f_12cf8510();
  /* 12cf5801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5804 jmp 0x12cf5832 */
  goto L_12cf5832;
L_12cf5806:;
  /* 12cf5806 mov ecx, dword ptr [0x12d20518] */
  ECX = (r32((uint32_t)(0x12d20518)));
  /* 12cf580c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5812 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf5814 je 0x12cf581d */
  if (C.zf) goto L_12cf581d;
  /* 12cf5816 mov eax, 1 */
  EAX = (0x1u);
  /* 12cf581b jmp 0x12cf5832 */
  goto L_12cf5832;
L_12cf581d:;
  /* 12cf581d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5820 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5823 push edx */
  push32((uint32_t)(EDX));
  /* 12cf5824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5826 mov eax, dword ptr [0x12d21ecc] */
  EAX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf582b push eax */
  push32((uint32_t)(EAX));
  /* 12cf582c call dword ptr [0x12d23364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23364))), 0x12cf5832u);
L_12cf5832:;
  /* 12cf5832 mov esp, ebp */
  ESP = (EBP);
  /* 12cf5834 pop ebp */
  EBP = (pop32());
  /* 12cf5835 ret  */
  ESPCHK(0x12cf57b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x12cf5840 (227 bytes, 80 insns) */
void f_12cf5840(void) {
  FTRACE(0x12cf5840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5840 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5841 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5843 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5847 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5848 call 0x12cf57b0 */
  push32(0x12cf584du); f_12cf57b0();
  /* 12cf584d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5852 jne 0x12cf585b */
  if (!C.zf) goto L_12cf585b;
  /* 12cf5854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5856 jmp 0x12cf591f */
  goto L_12cf591f;
L_12cf585b:;
  /* 12cf585b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf585d call 0x12cf7bb0 */
  push32(0x12cf5862u); f_12cf7bb0();
  /* 12cf5862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5865 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5868 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf586b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf586e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5871 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf5874 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5879 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf587c je 0x12cf58a0 */
  if (C.zf) goto L_12cf58a0;
  /* 12cf587e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5881 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5885 je 0x12cf58a0 */
  if (C.zf) goto L_12cf58a0;
  /* 12cf5887 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf588a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf588d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5892 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5895 je 0x12cf58a0 */
  if (C.zf) goto L_12cf58a0;
  /* 12cf5897 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf589a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf589e jne 0x12cf5913 */
  if (!C.zf) goto L_12cf5913;
L_12cf58a0:;
  /* 12cf58a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf58a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf58a5 push edx */
  push32((uint32_t)(EDX));
  /* 12cf58a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf58a9 push eax */
  push32((uint32_t)(EAX));
  /* 12cf58aa call 0x12cf5760 */
  push32(0x12cf58afu); f_12cf5760();
  /* 12cf58af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf58b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf58b4 je 0x12cf5913 */
  if (C.zf) goto L_12cf5913;
  /* 12cf58b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf58b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cf58bc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf58bf jne 0x12cf5913 */
  if (!C.zf) goto L_12cf5913;
  /* 12cf58c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf58c4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12cf58c7 cmp ecx, dword ptr [0x12d1ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d1ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf58cd jg 0x12cf5913 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cf5913;
  /* 12cf58cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf58d3 je 0x12cf58e0 */
  if (C.zf) goto L_12cf58e0;
  /* 12cf58d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf58d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf58db mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12cf58de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf58e0:;
  /* 12cf58e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf58e4 je 0x12cf58f1 */
  if (C.zf) goto L_12cf58f1;
  /* 12cf58e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf58e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf58ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf58ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf58f1:;
  /* 12cf58f1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf58f5 je 0x12cf5902 */
  if (C.zf) goto L_12cf5902;
  /* 12cf58f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf58fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf58fd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cf5900 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf5902:;
  /* 12cf5902 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf5904 call 0x12cf7c50 */
  push32(0x12cf5909u); f_12cf7c50();
  /* 12cf5909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf590c mov eax, 1 */
  EAX = (0x1u);
  /* 12cf5911 jmp 0x12cf591f */
  goto L_12cf591f;
L_12cf5913:;
  /* 12cf5913 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf5915 call 0x12cf7c50 */
  push32(0x12cf591au); f_12cf7c50();
  /* 12cf591a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf591d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf591f:;
  /* 12cf591f mov esp, ebp */
  ESP = (EBP);
  /* 12cf5921 pop ebp */
  EBP = (pop32());
  /* 12cf5922 ret  */
  ESPCHK(0x12cf5840u, _esp0);
  ESP += 4; return;
}

/* FUN_10005930 @ 0x12cf5930 (28 bytes, 11 insns) */
void f_12cf5930(void) {
  FTRACE(0x12cf5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5930 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5931 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5933 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5934 mov eax, dword ptr [0x12d21ed8] */
  EAX = (r32((uint32_t)(0x12d21ed8)));
  /* 12cf5939 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf593c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf593f mov dword ptr [0x12d21ed8], ecx */
  w32((uint32_t)(0x12d21ed8), (ECX));
  /* 12cf5945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5948 mov esp, ebp */
  ESP = (EBP);
  /* 12cf594a pop ebp */
  EBP = (pop32());
  /* 12cf594b ret  */
  ESPCHK(0x12cf5930u, _esp0);
  ESP += 4; return;
}

/* FUN_10005950 @ 0x12cf5950 (362 bytes, 116 insns) */
void f_12cf5950(void) {
  FTRACE(0x12cf5950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5950 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5951 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5956 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf5957 push esi */
  push32((uint32_t)(ESI));
  /* 12cf5958 push edi */
  push32((uint32_t)(EDI));
  /* 12cf5959 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf595d jne 0x12cf598a */
  if (!C.zf) goto L_12cf598a;
L_12cf595f:;
  /* 12cf595f push 0x12d1bd74 */
  push32((uint32_t)(0x12d1bd74u));
  /* 12cf5964 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf5969 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf596b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf596d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf596f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5971 call 0x12cf3270 */
  push32(0x12cf5976u); f_12cf3270();
  /* 12cf5976 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5979 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf597c jne 0x12cf597f */
  if (!C.zf) goto L_12cf597f;
  /* 12cf597e int3  */
  x86_unimpl("int3 @ 0x12cf597e");
L_12cf597f:;
  /* 12cf597f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5983 jne 0x12cf595f */
  if (!C.zf) goto L_12cf595f;
  /* 12cf5985 jmp 0x12cf5ab3 */
  goto L_12cf5ab3;
L_12cf598a:;
  /* 12cf598a push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf598c call 0x12cf7bb0 */
  push32(0x12cf5991u); f_12cf7bb0();
  /* 12cf5991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5994 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5997 mov edx, dword ptr [0x12d20564] */
  EDX = (r32((uint32_t)(0x12d20564)));
  /* 12cf599d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cf599f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cf59a6 jmp 0x12cf59b1 */
  goto L_12cf59b1;
L_12cf59a8:;
  /* 12cf59a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf59ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf59ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf59b1:;
  /* 12cf59b1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf59b5 jge 0x12cf59d5 */
  if ((C.sf==C.of)) goto L_12cf59d5;
  /* 12cf59b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf59ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf59bd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12cf59c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf59c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf59cb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12cf59d3 jmp 0x12cf59a8 */
  goto L_12cf59a8;
L_12cf59d5:;
  /* 12cf59d5 mov edx, dword ptr [0x12d20564] */
  EDX = (r32((uint32_t)(0x12d20564)));
  /* 12cf59db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cf59de jmp 0x12cf59e8 */
  goto L_12cf59e8;
L_12cf59e0:;
  /* 12cf59e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf59e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf59e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cf59e8:;
  /* 12cf59e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf59ec je 0x12cf5a91 */
  if (C.zf) goto L_12cf5a91;
  /* 12cf59f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf59f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf59f8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf59fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf59ff jl 0x12cf5a67 */
  if ((C.sf!=C.of)) goto L_12cf5a67;
  /* 12cf5a01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5a04 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cf5a07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5a0d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5a10 jge 0x12cf5a67 */
  if ((C.sf==C.of)) goto L_12cf5a67;
  /* 12cf5a12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5a15 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cf5a18 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5a1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5a21 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12cf5a25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5a28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5a2b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cf5a2e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5a34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5a37 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12cf5a3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5a3e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf5a41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5a46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5a49 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12cf5a4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5a50 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5a53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5a56 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cf5a59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5a61 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12cf5a65 jmp 0x12cf5a8c */
  goto L_12cf5a8c;
L_12cf5a67:;
  /* 12cf5a67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5a6a push edx */
  push32((uint32_t)(EDX));
  /* 12cf5a6b push 0x12d1bd50 */
  push32((uint32_t)(0x12d1bd50u));
  /* 12cf5a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5a78 call 0x12cf3270 */
  push32(0x12cf5a7du); f_12cf3270();
  /* 12cf5a7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5a80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5a83 jne 0x12cf5a86 */
  if (!C.zf) goto L_12cf5a86;
  /* 12cf5a85 int3  */
  x86_unimpl("int3 @ 0x12cf5a85");
L_12cf5a86:;
  /* 12cf5a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5a8a jne 0x12cf5a67 */
  if (!C.zf) goto L_12cf5a67;
L_12cf5a8c:;
  /* 12cf5a8c jmp 0x12cf59e0 */
  goto L_12cf59e0;
L_12cf5a91:;
  /* 12cf5a91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5a94 mov edx, dword ptr [0x12d2056c] */
  EDX = (r32((uint32_t)(0x12d2056c)));
  /* 12cf5a9a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12cf5a9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5aa0 mov ecx, dword ptr [0x12d20560] */
  ECX = (r32((uint32_t)(0x12d20560)));
  /* 12cf5aa6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12cf5aa9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf5aab call 0x12cf7c50 */
  push32(0x12cf5ab0u); f_12cf7c50();
  /* 12cf5ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf5ab3:;
  /* 12cf5ab3 pop edi */
  EDI = (pop32());
  /* 12cf5ab4 pop esi */
  ESI = (pop32());
  /* 12cf5ab5 pop ebx */
  EBX = (pop32());
  /* 12cf5ab6 mov esp, ebp */
  ESP = (EBP);
  /* 12cf5ab8 pop ebp */
  EBP = (pop32());
  /* 12cf5ab9 ret  */
  ESPCHK(0x12cf5950u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ac0 @ 0x12cf5ac0 (291 bytes, 95 insns) */
void f_12cf5ac0(void) {
  FTRACE(0x12cf5ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf5ac7 push esi */
  push32((uint32_t)(ESI));
  /* 12cf5ac8 push edi */
  push32((uint32_t)(EDI));
  /* 12cf5ac9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cf5ad0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5ad4 je 0x12cf5ae2 */
  if (C.zf) goto L_12cf5ae2;
  /* 12cf5ad6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5ada je 0x12cf5ae2 */
  if (C.zf) goto L_12cf5ae2;
  /* 12cf5adc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5ae0 jne 0x12cf5b10 */
  if (!C.zf) goto L_12cf5b10;
L_12cf5ae2:;
  /* 12cf5ae2 push 0x12d1bd9c */
  push32((uint32_t)(0x12d1bd9cu));
  /* 12cf5ae7 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf5aec push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5aee push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5af4 call 0x12cf3270 */
  push32(0x12cf5af9u); f_12cf3270();
  /* 12cf5af9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5afc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5aff jne 0x12cf5b02 */
  if (!C.zf) goto L_12cf5b02;
  /* 12cf5b01 int3  */
  x86_unimpl("int3 @ 0x12cf5b01");
L_12cf5b02:;
  /* 12cf5b02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5b04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5b06 jne 0x12cf5ae2 */
  if (!C.zf) goto L_12cf5ae2;
  /* 12cf5b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf5b0b jmp 0x12cf5bdc */
  goto L_12cf5bdc;
L_12cf5b10:;
  /* 12cf5b10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cf5b17 jmp 0x12cf5b22 */
  goto L_12cf5b22;
L_12cf5b19:;
  /* 12cf5b19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5b1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf5b22:;
  /* 12cf5b22 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5b26 jge 0x12cf5bac */
  if ((C.sf==C.of)) goto L_12cf5bac;
  /* 12cf5b2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf5b32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf5b38 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12cf5b3c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5b40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5b46 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12cf5b4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf5b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b53 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf5b56 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12cf5b5a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5b64 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12cf5b68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5b6e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5b73 jne 0x12cf5b82 */
  if (!C.zf) goto L_12cf5b82;
  /* 12cf5b75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5b78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5b7b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5b80 je 0x12cf5ba7 */
  if (C.zf) goto L_12cf5ba7;
L_12cf5b82:;
  /* 12cf5b82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5b86 je 0x12cf5ba7 */
  if (C.zf) goto L_12cf5ba7;
  /* 12cf5b88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5b8c jne 0x12cf5ba0 */
  if (!C.zf) goto L_12cf5ba0;
  /* 12cf5b8e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5b92 jne 0x12cf5ba7 */
  if (!C.zf) goto L_12cf5ba7;
  /* 12cf5b94 mov eax, dword ptr [0x12d1ea84] */
  EAX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf5b99 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5b9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5b9e je 0x12cf5ba7 */
  if (C.zf) goto L_12cf5ba7;
L_12cf5ba0:;
  /* 12cf5ba0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12cf5ba7:;
  /* 12cf5ba7 jmp 0x12cf5b19 */
  goto L_12cf5b19;
L_12cf5bac:;
  /* 12cf5bac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf5baf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf5bb2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12cf5bb5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5bb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5bbb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12cf5bbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf5bc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf5bc4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12cf5bc7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5bca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5bcd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12cf5bd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5bd3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cf5bd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cf5bdc:;
  /* 12cf5bdc pop edi */
  EDI = (pop32());
  /* 12cf5bdd pop esi */
  ESI = (pop32());
  /* 12cf5bde pop ebx */
  EBX = (pop32());
  /* 12cf5bdf mov esp, ebp */
  ESP = (EBP);
  /* 12cf5be1 pop ebp */
  EBP = (pop32());
  /* 12cf5be2 ret  */
  ESPCHK(0x12cf5ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x12cf5bf0 (697 bytes, 253 insns) */
void f_12cf5bf0(void) {
  FTRACE(0x12cf5bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf5bf7 push esi */
  push32((uint32_t)(ESI));
  /* 12cf5bf8 push edi */
  push32((uint32_t)(EDI));
  /* 12cf5bf9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cf5c00 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf5c02 call 0x12cf7bb0 */
  push32(0x12cf5c07u); f_12cf7bb0();
  /* 12cf5c07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf5c0a:;
  /* 12cf5c0a push 0x12d1be94 */
  push32((uint32_t)(0x12d1be94u));
  /* 12cf5c0f push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf5c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5c1c call 0x12cf3270 */
  push32(0x12cf5c21u); f_12cf3270();
  /* 12cf5c21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5c24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5c27 jne 0x12cf5c2a */
  if (!C.zf) goto L_12cf5c2a;
  /* 12cf5c29 int3  */
  x86_unimpl("int3 @ 0x12cf5c29");
L_12cf5c2a:;
  /* 12cf5c2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5c2e jne 0x12cf5c0a */
  if (!C.zf) goto L_12cf5c0a;
  /* 12cf5c30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5c34 je 0x12cf5c3e */
  if (C.zf) goto L_12cf5c3e;
  /* 12cf5c36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5c39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf5c3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cf5c3e:;
  /* 12cf5c3e mov eax, dword ptr [0x12d20564] */
  EAX = (r32((uint32_t)(0x12d20564)));
  /* 12cf5c43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf5c46 jmp 0x12cf5c50 */
  goto L_12cf5c50;
L_12cf5c48:;
  /* 12cf5c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5c4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf5c4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cf5c50:;
  /* 12cf5c50 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5c54 je 0x12cf5e72 */
  if (C.zf) goto L_12cf5e72;
  /* 12cf5c5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5c5d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5c60 je 0x12cf5e72 */
  if (C.zf) goto L_12cf5e72;
  /* 12cf5c66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5c69 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cf5c6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5c72 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5c75 je 0x12cf5ca4 */
  if (C.zf) goto L_12cf5ca4;
  /* 12cf5c77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5c7a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cf5c7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5c83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf5c85 je 0x12cf5ca4 */
  if (C.zf) goto L_12cf5ca4;
  /* 12cf5c87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5c8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf5c8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5c92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5c95 jne 0x12cf5ca9 */
  if (!C.zf) goto L_12cf5ca9;
  /* 12cf5c97 mov ecx, dword ptr [0x12d1ea84] */
  ECX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf5c9d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5ca0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf5ca2 jne 0x12cf5ca9 */
  if (!C.zf) goto L_12cf5ca9;
L_12cf5ca4:;
  /* 12cf5ca4 jmp 0x12cf5e6d */
  goto L_12cf5e6d;
L_12cf5ca9:;
  /* 12cf5ca9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5cac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5cb0 je 0x12cf5d22 */
  if (C.zf) goto L_12cf5d22;
  /* 12cf5cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf5cb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5cb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf5cbc push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5cbd call 0x12cf5760 */
  push32(0x12cf5cc2u); f_12cf5760();
  /* 12cf5cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5cc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5cc7 jne 0x12cf5cf3 */
  if (!C.zf) goto L_12cf5cf3;
L_12cf5cc9:;
  /* 12cf5cc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5ccc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cf5ccf push eax */
  push32((uint32_t)(EAX));
  /* 12cf5cd0 push 0x12d1be80 */
  push32((uint32_t)(0x12d1be80u));
  /* 12cf5cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5cdd call 0x12cf3270 */
  push32(0x12cf5ce2u); f_12cf3270();
  /* 12cf5ce2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5ce5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5ce8 jne 0x12cf5ceb */
  if (!C.zf) goto L_12cf5ceb;
  /* 12cf5cea int3  */
  x86_unimpl("int3 @ 0x12cf5cea");
L_12cf5ceb:;
  /* 12cf5ceb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5ced test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf5cef jne 0x12cf5cc9 */
  if (!C.zf) goto L_12cf5cc9;
  /* 12cf5cf1 jmp 0x12cf5d22 */
  goto L_12cf5d22;
L_12cf5cf3:;
  /* 12cf5cf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5cf6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cf5cf9 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5cfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5cfd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf5d00 push edx */
  push32((uint32_t)(EDX));
  /* 12cf5d01 push 0x12d1be74 */
  push32((uint32_t)(0x12d1be74u));
  /* 12cf5d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d0e call 0x12cf3270 */
  push32(0x12cf5d13u); f_12cf3270();
  /* 12cf5d13 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5d16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5d19 jne 0x12cf5d1c */
  if (!C.zf) goto L_12cf5d1c;
  /* 12cf5d1b int3  */
  x86_unimpl("int3 @ 0x12cf5d1b");
L_12cf5d1c:;
  /* 12cf5d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5d20 jne 0x12cf5cf3 */
  if (!C.zf) goto L_12cf5cf3;
L_12cf5d22:;
  /* 12cf5d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5d25 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cf5d28 push edx */
  push32((uint32_t)(EDX));
  /* 12cf5d29 push 0x12d1be6c */
  push32((uint32_t)(0x12d1be6cu));
  /* 12cf5d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d36 call 0x12cf3270 */
  push32(0x12cf5d3bu); f_12cf3270();
  /* 12cf5d3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5d3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5d41 jne 0x12cf5d44 */
  if (!C.zf) goto L_12cf5d44;
  /* 12cf5d43 int3  */
  x86_unimpl("int3 @ 0x12cf5d43");
L_12cf5d44:;
  /* 12cf5d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf5d48 jne 0x12cf5d22 */
  if (!C.zf) goto L_12cf5d22;
  /* 12cf5d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5d4d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cf5d50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5d56 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5d59 jne 0x12cf5dcc */
  if (!C.zf) goto L_12cf5dcc;
L_12cf5d5b:;
  /* 12cf5d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5d5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf5d61 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5d65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf5d68 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cf5d6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5d70 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5d71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5d74 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5d77 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5d78 push 0x12d1be38 */
  push32((uint32_t)(0x12d1be38u));
  /* 12cf5d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5d85 call 0x12cf3270 */
  push32(0x12cf5d8au); f_12cf3270();
  /* 12cf5d8a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5d8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5d90 jne 0x12cf5d93 */
  if (!C.zf) goto L_12cf5d93;
  /* 12cf5d92 int3  */
  x86_unimpl("int3 @ 0x12cf5d92");
L_12cf5d93:;
  /* 12cf5d93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5d95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf5d97 jne 0x12cf5d5b */
  if (!C.zf) goto L_12cf5d5b;
  /* 12cf5d99 cmp dword ptr [0x12d21ed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d21ed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5da0 je 0x12cf5dbb */
  if (C.zf) goto L_12cf5dbb;
  /* 12cf5da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5da5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf5da8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5da9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5dac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5daf push edx */
  push32((uint32_t)(EDX));
  /* 12cf5db0 call dword ptr [0x12d21ed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d21ed8))), 0x12cf5db6u);
  /* 12cf5db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5db9 jmp 0x12cf5dc7 */
  goto L_12cf5dc7;
L_12cf5dbb:;
  /* 12cf5dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5dbe push eax */
  push32((uint32_t)(EAX));
  /* 12cf5dbf call 0x12cf5eb0 */
  push32(0x12cf5dc4u); f_12cf5eb0();
  /* 12cf5dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf5dc7:;
  /* 12cf5dc7 jmp 0x12cf5e6d */
  goto L_12cf5e6d;
L_12cf5dcc:;
  /* 12cf5dcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5dcf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5dd3 jne 0x12cf5e12 */
  if (!C.zf) goto L_12cf5e12;
L_12cf5dd5:;
  /* 12cf5dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5dd8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf5ddb push eax */
  push32((uint32_t)(EAX));
  /* 12cf5ddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5ddf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5de2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5de3 push 0x12d1be10 */
  push32((uint32_t)(0x12d1be10u));
  /* 12cf5de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5dea push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5dec push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5dee push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5df0 call 0x12cf3270 */
  push32(0x12cf5df5u); f_12cf3270();
  /* 12cf5df5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5df8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5dfb jne 0x12cf5dfe */
  if (!C.zf) goto L_12cf5dfe;
  /* 12cf5dfd int3  */
  x86_unimpl("int3 @ 0x12cf5dfd");
L_12cf5dfe:;
  /* 12cf5dfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5e00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf5e02 jne 0x12cf5dd5 */
  if (!C.zf) goto L_12cf5dd5;
  /* 12cf5e04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5e07 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5e08 call 0x12cf5eb0 */
  push32(0x12cf5e0du); f_12cf5eb0();
  /* 12cf5e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5e10 jmp 0x12cf5e6d */
  goto L_12cf5e6d;
L_12cf5e12:;
  /* 12cf5e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5e15 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cf5e18 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5e1e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5e21 jne 0x12cf5e6d */
  if (!C.zf) goto L_12cf5e6d;
L_12cf5e23:;
  /* 12cf5e23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5e26 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf5e29 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5e2d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cf5e30 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cf5e33 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf5e38 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5e39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5e3c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5e3f push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5e40 push 0x12d1bddc */
  push32((uint32_t)(0x12d1bddcu));
  /* 12cf5e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5e4d call 0x12cf3270 */
  push32(0x12cf5e52u); f_12cf3270();
  /* 12cf5e52 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5e55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5e58 jne 0x12cf5e5b */
  if (!C.zf) goto L_12cf5e5b;
  /* 12cf5e5a int3  */
  x86_unimpl("int3 @ 0x12cf5e5a");
L_12cf5e5b:;
  /* 12cf5e5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5e5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf5e5f jne 0x12cf5e23 */
  if (!C.zf) goto L_12cf5e23;
  /* 12cf5e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf5e64 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5e65 call 0x12cf5eb0 */
  push32(0x12cf5e6au); f_12cf5eb0();
  /* 12cf5e6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf5e6d:;
  /* 12cf5e6d jmp 0x12cf5c48 */
  goto L_12cf5c48;
L_12cf5e72:;
  /* 12cf5e72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf5e74 call 0x12cf7c50 */
  push32(0x12cf5e79u); f_12cf7c50();
  /* 12cf5e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf5e7c:;
  /* 12cf5e7c push 0x12d1bdc4 */
  push32((uint32_t)(0x12d1bdc4u));
  /* 12cf5e81 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf5e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5e8e call 0x12cf3270 */
  push32(0x12cf5e93u); f_12cf3270();
  /* 12cf5e93 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5e96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5e99 jne 0x12cf5e9c */
  if (!C.zf) goto L_12cf5e9c;
  /* 12cf5e9b int3  */
  x86_unimpl("int3 @ 0x12cf5e9b");
L_12cf5e9c:;
  /* 12cf5e9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5e9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf5ea0 jne 0x12cf5e7c */
  if (!C.zf) goto L_12cf5e7c;
  /* 12cf5ea2 pop edi */
  EDI = (pop32());
  /* 12cf5ea3 pop esi */
  ESI = (pop32());
  /* 12cf5ea4 pop ebx */
  EBX = (pop32());
  /* 12cf5ea5 mov esp, ebp */
  ESP = (EBP);
  /* 12cf5ea7 pop ebp */
  EBP = (pop32());
  /* 12cf5ea8 ret  */
  ESPCHK(0x12cf5bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x12cf5eb0 (276 bytes, 89 insns) */
void f_12cf5eb0(void) {
  FTRACE(0x12cf5eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5eb3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf5eb7 push esi */
  push32((uint32_t)(ESI));
  /* 12cf5eb8 push edi */
  push32((uint32_t)(EDI));
  /* 12cf5eb9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12cf5ec0 jmp 0x12cf5ecb */
  goto L_12cf5ecb;
L_12cf5ec2:;
  /* 12cf5ec2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cf5ec5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5ec8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12cf5ecb:;
  /* 12cf5ecb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5ece cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5ed2 jge 0x12cf5edf */
  if ((C.sf==C.of)) goto L_12cf5edf;
  /* 12cf5ed4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5ed7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf5eda mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12cf5edd jmp 0x12cf5ee6 */
  goto L_12cf5ee6;
L_12cf5edf:;
  /* 12cf5edf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12cf5ee6:;
  /* 12cf5ee6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cf5ee9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5eec jge 0x12cf5f8c */
  if ((C.sf==C.of)) goto L_12cf5f8c;
  /* 12cf5ef2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf5ef5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5ef8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12cf5efb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12cf5efe cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5f05 jle 0x12cf5f23 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf5f23;
  /* 12cf5f07 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12cf5f0c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf5f0f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5f15 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5f16 call 0x12cfa1c0 */
  push32(0x12cf5f1bu); f_12cfa1c0();
  /* 12cf5f1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5f1e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12cf5f21 jmp 0x12cf5f40 */
  goto L_12cf5f40;
L_12cf5f23:;
  /* 12cf5f23 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf5f26 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5f2c mov eax, dword ptr [0x12d1ec98] */
  EAX = (r32((uint32_t)(0x12d1ec98)));
  /* 12cf5f31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5f33 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12cf5f37 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5f3d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12cf5f40:;
  /* 12cf5f40 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5f44 je 0x12cf5f54 */
  if (C.zf) goto L_12cf5f54;
  /* 12cf5f46 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf5f49 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5f4f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12cf5f52 jmp 0x12cf5f5b */
  goto L_12cf5f5b;
L_12cf5f54:;
  /* 12cf5f54 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12cf5f5b:;
  /* 12cf5f5b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cf5f5e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12cf5f61 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12cf5f65 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cf5f68 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5f6e push edx */
  push32((uint32_t)(EDX));
  /* 12cf5f6f push 0x12d1beb8 */
  push32((uint32_t)(0x12d1beb8u));
  /* 12cf5f74 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cf5f77 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf5f7a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12cf5f7e push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5f7f call 0x12cfa0c0 */
  push32(0x12cf5f84u); f_12cfa0c0();
  /* 12cf5f84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5f87 jmp 0x12cf5ec2 */
  goto L_12cf5ec2;
L_12cf5f8c:;
  /* 12cf5f8c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cf5f8f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12cf5f94:;
  /* 12cf5f94 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12cf5f97 push eax */
  push32((uint32_t)(EAX));
  /* 12cf5f98 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12cf5f9b push ecx */
  push32((uint32_t)(ECX));
  /* 12cf5f9c push 0x12d1bea8 */
  push32((uint32_t)(0x12d1bea8u));
  /* 12cf5fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf5fa9 call 0x12cf3270 */
  push32(0x12cf5faeu); f_12cf3270();
  /* 12cf5fae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5fb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5fb4 jne 0x12cf5fb7 */
  if (!C.zf) goto L_12cf5fb7;
  /* 12cf5fb6 int3  */
  x86_unimpl("int3 @ 0x12cf5fb6");
L_12cf5fb7:;
  /* 12cf5fb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf5fb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf5fbb jne 0x12cf5f94 */
  if (!C.zf) goto L_12cf5f94;
  /* 12cf5fbd pop edi */
  EDI = (pop32());
  /* 12cf5fbe pop esi */
  ESI = (pop32());
  /* 12cf5fbf pop ebx */
  EBX = (pop32());
  /* 12cf5fc0 mov esp, ebp */
  ESP = (EBP);
  /* 12cf5fc2 pop ebp */
  EBP = (pop32());
  /* 12cf5fc3 ret  */
  ESPCHK(0x12cf5eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x12cf5fd0 (116 bytes, 46 insns) */
void f_12cf5fd0(void) {
  FTRACE(0x12cf5fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf5fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf5fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf5fd3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf5fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf5fd7 push esi */
  push32((uint32_t)(ESI));
  /* 12cf5fd8 push edi */
  push32((uint32_t)(EDI));
  /* 12cf5fd9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12cf5fdc push eax */
  push32((uint32_t)(EAX));
  /* 12cf5fdd call 0x12cf5950 */
  push32(0x12cf5fe2u); f_12cf5950();
  /* 12cf5fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf5fe5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5fe9 jne 0x12cf6004 */
  if (!C.zf) goto L_12cf6004;
  /* 12cf5feb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf5fef jne 0x12cf6004 */
  if (!C.zf) goto L_12cf6004;
  /* 12cf5ff1 mov ecx, dword ptr [0x12d1ea84] */
  ECX = (r32((uint32_t)(0x12d1ea84)));
  /* 12cf5ff7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf5ffa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf5ffc je 0x12cf603b */
  if (C.zf) goto L_12cf603b;
  /* 12cf5ffe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6002 je 0x12cf603b */
  if (C.zf) goto L_12cf603b;
L_12cf6004:;
  /* 12cf6004 push 0x12d1bec0 */
  push32((uint32_t)(0x12d1bec0u));
  /* 12cf6009 push 0x12d1b88c */
  push32((uint32_t)(0x12d1b88cu));
  /* 12cf600e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6010 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6012 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6014 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6016 call 0x12cf3270 */
  push32(0x12cf601bu); f_12cf3270();
  /* 12cf601b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf601e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6021 jne 0x12cf6024 */
  if (!C.zf) goto L_12cf6024;
  /* 12cf6023 int3  */
  x86_unimpl("int3 @ 0x12cf6023");
L_12cf6024:;
  /* 12cf6024 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf6026 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf6028 jne 0x12cf6004 */
  if (!C.zf) goto L_12cf6004;
  /* 12cf602a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf602c call 0x12cf5bf0 */
  push32(0x12cf6031u); f_12cf5bf0();
  /* 12cf6031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6034 mov eax, 1 */
  EAX = (0x1u);
  /* 12cf6039 jmp 0x12cf603d */
  goto L_12cf603d;
L_12cf603b:;
  /* 12cf603b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf603d:;
  /* 12cf603d pop edi */
  EDI = (pop32());
  /* 12cf603e pop esi */
  ESI = (pop32());
  /* 12cf603f pop ebx */
  EBX = (pop32());
  /* 12cf6040 mov esp, ebp */
  ESP = (EBP);
  /* 12cf6042 pop ebp */
  EBP = (pop32());
  /* 12cf6043 ret  */
  ESPCHK(0x12cf5fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006050 @ 0x12cf6050 (197 bytes, 79 insns) */
void f_12cf6050(void) {
  FTRACE(0x12cf6050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6050 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6051 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6053 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6054 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf6055 push esi */
  push32((uint32_t)(ESI));
  /* 12cf6056 push edi */
  push32((uint32_t)(EDI));
  /* 12cf6057 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf605b jne 0x12cf6062 */
  if (!C.zf) goto L_12cf6062;
  /* 12cf605d jmp 0x12cf610e */
  goto L_12cf610e;
L_12cf6062:;
  /* 12cf6062 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cf6069 jmp 0x12cf6074 */
  goto L_12cf6074;
L_12cf606b:;
  /* 12cf606b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf606e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6071 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf6074:;
  /* 12cf6074 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6078 jge 0x12cf60be */
  if ((C.sf==C.of)) goto L_12cf60be;
L_12cf607a:;
  /* 12cf607a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf607d mov edx, dword ptr [ecx*4 + 0x12d1ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1ea94)));
  /* 12cf6084 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6088 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf608b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12cf608f push edx */
  push32((uint32_t)(EDX));
  /* 12cf6090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6093 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6096 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12cf609a push edx */
  push32((uint32_t)(EDX));
  /* 12cf609b push 0x12d1bf1c */
  push32((uint32_t)(0x12d1bf1cu));
  /* 12cf60a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60a8 call 0x12cf3270 */
  push32(0x12cf60adu); f_12cf3270();
  /* 12cf60ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf60b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf60b3 jne 0x12cf60b6 */
  if (!C.zf) goto L_12cf60b6;
  /* 12cf60b5 int3  */
  x86_unimpl("int3 @ 0x12cf60b5");
L_12cf60b6:;
  /* 12cf60b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf60b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf60ba jne 0x12cf607a */
  if (!C.zf) goto L_12cf607a;
  /* 12cf60bc jmp 0x12cf606b */
  goto L_12cf606b;
L_12cf60be:;
  /* 12cf60be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf60c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12cf60c4 push edx */
  push32((uint32_t)(EDX));
  /* 12cf60c5 push 0x12d1bef8 */
  push32((uint32_t)(0x12d1bef8u));
  /* 12cf60ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60d2 call 0x12cf3270 */
  push32(0x12cf60d7u); f_12cf3270();
  /* 12cf60d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf60da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf60dd jne 0x12cf60e0 */
  if (!C.zf) goto L_12cf60e0;
  /* 12cf60df int3  */
  x86_unimpl("int3 @ 0x12cf60df");
L_12cf60e0:;
  /* 12cf60e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf60e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf60e4 jne 0x12cf60be */
  if (!C.zf) goto L_12cf60be;
L_12cf60e6:;
  /* 12cf60e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf60e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12cf60ec push edx */
  push32((uint32_t)(EDX));
  /* 12cf60ed push 0x12d1bed8 */
  push32((uint32_t)(0x12d1bed8u));
  /* 12cf60f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf60fa call 0x12cf3270 */
  push32(0x12cf60ffu); f_12cf3270();
  /* 12cf60ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6102 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6105 jne 0x12cf6108 */
  if (!C.zf) goto L_12cf6108;
  /* 12cf6107 int3  */
  x86_unimpl("int3 @ 0x12cf6107");
L_12cf6108:;
  /* 12cf6108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf610a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf610c jne 0x12cf60e6 */
  if (!C.zf) goto L_12cf60e6;
L_12cf610e:;
  /* 12cf610e pop edi */
  EDI = (pop32());
  /* 12cf610f pop esi */
  ESI = (pop32());
  /* 12cf6110 pop ebx */
  EBX = (pop32());
  /* 12cf6111 mov esp, ebp */
  ESP = (EBP);
  /* 12cf6113 pop ebp */
  EBP = (pop32());
  /* 12cf6114 ret  */
  ESPCHK(0x12cf6050u, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x12cf6120 (329 bytes, 102 insns) */
void f_12cf6120(void) {
  FTRACE(0x12cf6120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6120 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6121 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6123 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6126 cmp dword ptr [0x12d22050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d22050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf612d jne 0x12cf6134 */
  if (!C.zf) goto L_12cf6134;
  /* 12cf612f call 0x12cfaa60 */
  push32(0x12cf6134u); f_12cfaa60();
L_12cf6134:;
  /* 12cf6134 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cf613b mov eax, dword ptr [0x12d20500] */
  EAX = (r32((uint32_t)(0x12d20500)));
  /* 12cf6140 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf6143:;
  /* 12cf6143 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6146 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cf6149 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf614b je 0x12cf6179 */
  if (C.zf) goto L_12cf6179;
  /* 12cf614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6150 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf6153 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6156 je 0x12cf6161 */
  if (C.zf) goto L_12cf6161;
  /* 12cf6158 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf615b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf615e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cf6161:;
  /* 12cf6161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6164 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6165 call 0x12cf6fe0 */
  push32(0x12cf616au); f_12cf6fe0();
  /* 12cf616a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf616d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6170 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12cf6174 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf6177 jmp 0x12cf6143 */
  goto L_12cf6143;
L_12cf6179:;
  /* 12cf6179 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12cf617b push 0x12d1bf3c */
  push32((uint32_t)(0x12d1bf3cu));
  /* 12cf6180 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf6182 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6185 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12cf618c push ecx */
  push32((uint32_t)(ECX));
  /* 12cf618d call 0x12cf41b0 */
  push32(0x12cf6192u); f_12cf41b0();
  /* 12cf6192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6195 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf6198 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf619b mov dword ptr [0x12d20534], edx */
  w32((uint32_t)(0x12d20534), (EDX));
  /* 12cf61a1 cmp dword ptr [0x12d20534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf61a8 jne 0x12cf61b4 */
  if (!C.zf) goto L_12cf61b4;
  /* 12cf61aa push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf61ac call 0x12cf3120 */
  push32(0x12cf61b1u); f_12cf3120();
  /* 12cf61b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf61b4:;
  /* 12cf61b4 mov eax, dword ptr [0x12d20500] */
  EAX = (r32((uint32_t)(0x12d20500)));
  /* 12cf61b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf61bc jmp 0x12cf61c7 */
  goto L_12cf61c7;
L_12cf61be:;
  /* 12cf61be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf61c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf61c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf61c7:;
  /* 12cf61c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf61ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cf61cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf61cf je 0x12cf6237 */
  if (C.zf) goto L_12cf6237;
  /* 12cf61d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf61d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf61d5 call 0x12cf6fe0 */
  push32(0x12cf61dau); f_12cf6fe0();
  /* 12cf61da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf61dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf61e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf61e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf61e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cf61e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf61ec je 0x12cf6235 */
  if (C.zf) goto L_12cf6235;
  /* 12cf61ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12cf61f0 push 0x12d1bf3c */
  push32((uint32_t)(0x12d1bf3cu));
  /* 12cf61f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf61f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf61fa push ecx */
  push32((uint32_t)(ECX));
  /* 12cf61fb call 0x12cf41b0 */
  push32(0x12cf6200u); f_12cf41b0();
  /* 12cf6200 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6203 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6206 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cf6208 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf620b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf620e jne 0x12cf621a */
  if (!C.zf) goto L_12cf621a;
  /* 12cf6210 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf6212 call 0x12cf3120 */
  push32(0x12cf6217u); f_12cf3120();
  /* 12cf6217 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf621a:;
  /* 12cf621a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf621d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf621e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6221 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf6223 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6224 call 0x12cf7160 */
  push32(0x12cf6229u); f_12cf7160();
  /* 12cf6229 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf622c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf622f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6232 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12cf6235:;
  /* 12cf6235 jmp 0x12cf61be */
  goto L_12cf61be;
L_12cf6237:;
  /* 12cf6237 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf6239 mov edx, dword ptr [0x12d20500] */
  EDX = (r32((uint32_t)(0x12d20500)));
  /* 12cf623f push edx */
  push32((uint32_t)(EDX));
  /* 12cf6240 call 0x12cf4c40 */
  push32(0x12cf6245u); f_12cf4c40();
  /* 12cf6245 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6248 mov dword ptr [0x12d20500], 0 */
  w32((uint32_t)(0x12d20500), (0x0u));
  /* 12cf6252 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6255 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cf625b mov dword ptr [0x12d22040], 1 */
  w32((uint32_t)(0x12d22040), (0x1u));
  /* 12cf6265 mov esp, ebp */
  ESP = (EBP);
  /* 12cf6267 pop ebp */
  EBP = (pop32());
  /* 12cf6268 ret  */
  ESPCHK(0x12cf6120u, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x12cf6270 (216 bytes, 69 insns) */
void f_12cf6270(void) {
  FTRACE(0x12cf6270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6270 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6271 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6276 cmp dword ptr [0x12d22050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d22050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf627d jne 0x12cf6284 */
  if (!C.zf) goto L_12cf6284;
  /* 12cf627f call 0x12cfaa60 */
  push32(0x12cf6284u); f_12cfaa60();
L_12cf6284:;
  /* 12cf6284 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12cf6289 push 0x12d20570 */
  push32((uint32_t)(0x12d20570u));
  /* 12cf628e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6290 call dword ptr [0x12d23320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23320))), 0x12cf6296u);
  /* 12cf6296 mov dword ptr [0x12d20544], 0x12d20570 */
  w32((uint32_t)(0x12d20544), (0x12d20570u));
  /* 12cf62a0 mov eax, dword ptr [0x12d2206c] */
  EAX = (r32((uint32_t)(0x12d2206c)));
  /* 12cf62a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf62a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf62aa jne 0x12cf62b7 */
  if (!C.zf) goto L_12cf62b7;
  /* 12cf62ac mov edx, dword ptr [0x12d20544] */
  EDX = (r32((uint32_t)(0x12d20544)));
  /* 12cf62b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cf62b5 jmp 0x12cf62bf */
  goto L_12cf62bf;
L_12cf62b7:;
  /* 12cf62b7 mov eax, dword ptr [0x12d2206c] */
  EAX = (r32((uint32_t)(0x12d2206c)));
  /* 12cf62bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12cf62bf:;
  /* 12cf62bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf62c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cf62c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12cf62c8 push edx */
  push32((uint32_t)(EDX));
  /* 12cf62c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12cf62cc push eax */
  push32((uint32_t)(EAX));
  /* 12cf62cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf62cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf62d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf62d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf62d5 call 0x12cf6350 */
  push32(0x12cf62dau); f_12cf6350();
  /* 12cf62da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf62dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12cf62e2 push 0x12d1bf48 */
  push32((uint32_t)(0x12d1bf48u));
  /* 12cf62e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf62e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf62ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf62ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12cf62f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf62f3 call 0x12cf41b0 */
  push32(0x12cf62f8u); f_12cf41b0();
  /* 12cf62f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf62fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf62fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6302 jne 0x12cf630e */
  if (!C.zf) goto L_12cf630e;
  /* 12cf6304 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cf6306 call 0x12cf3120 */
  push32(0x12cf630bu); f_12cf3120();
  /* 12cf630b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf630e:;
  /* 12cf630e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12cf6311 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6312 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12cf6315 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6316 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6319 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf631c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12cf631f push eax */
  push32((uint32_t)(EAX));
  /* 12cf6320 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6323 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6324 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf6327 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6328 call 0x12cf6350 */
  push32(0x12cf632du); f_12cf6350();
  /* 12cf632d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6330 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6333 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6336 mov dword ptr [0x12d20528], eax */
  w32((uint32_t)(0x12d20528), (EAX));
  /* 12cf633b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf633e mov dword ptr [0x12d2052c], ecx */
  w32((uint32_t)(0x12d2052c), (ECX));
  /* 12cf6344 mov esp, ebp */
  ESP = (EBP);
  /* 12cf6346 pop ebp */
  EBP = (pop32());
  /* 12cf6347 ret  */
  ESPCHK(0x12cf6270u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x12cf6350 (1060 bytes, 360 insns) */
void f_12cf6350(void) {
  FTRACE(0x12cf6350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6350 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6351 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6353 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6356 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6359 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cf635f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf6362 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12cf6368 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf636b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf636e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6372 je 0x12cf6385 */
  if (C.zf) goto L_12cf6385;
  /* 12cf6374 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6377 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf637a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cf637c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf637f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6382 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12cf6385:;
  /* 12cf6385 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6388 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf638b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf638e jne 0x12cf645d */
  if (!C.zf) goto L_12cf645d;
L_12cf6394:;
  /* 12cf6394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6397 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf639a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf639d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf63a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf63a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf63a6 je 0x12cf6422 */
  if (C.zf) goto L_12cf6422;
  /* 12cf63a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf63ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cf63ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf63b0 je 0x12cf6422 */
  if (C.zf) goto L_12cf6422;
  /* 12cf63b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf63b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf63b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf63b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf63bb mov al, byte ptr [edx + 0x12d21da1] */
  AL = (r8((uint32_t)(EDX + 0x12d21da1)));
  /* 12cf63c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cf63c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf63c6 je 0x12cf63f7 */
  if (C.zf) goto L_12cf63f7;
  /* 12cf63c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf63cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf63cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf63d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf63d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cf63d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf63d9 je 0x12cf63f7 */
  if (C.zf) goto L_12cf63f7;
  /* 12cf63db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf63de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf63e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cf63e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cf63e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf63e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf63eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cf63ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf63f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf63f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cf63f7:;
  /* 12cf63f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf63fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf63fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf63ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6402 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cf6404 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6408 je 0x12cf641d */
  if (C.zf) goto L_12cf641d;
  /* 12cf640a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf640d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6410 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf6412 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf6414 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6417 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf641a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12cf641d:;
  /* 12cf641d jmp 0x12cf6394 */
  goto L_12cf6394;
L_12cf6422:;
  /* 12cf6422 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6425 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf6427 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf642a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf642d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cf642f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6433 je 0x12cf6444 */
  if (C.zf) goto L_12cf6444;
  /* 12cf6435 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6438 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12cf643b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf643e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6441 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12cf6444:;
  /* 12cf6444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6447 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf644a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf644d jne 0x12cf6458 */
  if (!C.zf) goto L_12cf6458;
  /* 12cf644f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6452 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6455 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cf6458:;
  /* 12cf6458 jmp 0x12cf652c */
  goto L_12cf652c;
L_12cf645d:;
  /* 12cf645d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6460 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf6462 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6465 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6468 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cf646a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf646e je 0x12cf6483 */
  if (C.zf) goto L_12cf6483;
  /* 12cf6470 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6473 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6476 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf6478 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf647a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf647d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6480 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12cf6483:;
  /* 12cf6483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6486 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf6488 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12cf648b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf648e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6491 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf6494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6497 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf649d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf649f mov dl, byte ptr [ecx + 0x12d21da1] */
  DL = (r8((uint32_t)(ECX + 0x12d21da1)));
  /* 12cf64a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf64a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf64aa je 0x12cf64db */
  if (C.zf) goto L_12cf64db;
  /* 12cf64ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf64af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf64b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf64b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf64b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cf64b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf64bd je 0x12cf64d2 */
  if (C.zf) goto L_12cf64d2;
  /* 12cf64bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf64c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf64c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf64c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf64c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf64cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf64cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12cf64d2:;
  /* 12cf64d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf64d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf64d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf64db:;
  /* 12cf64db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf64de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf64e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf64e7 je 0x12cf6507 */
  if (C.zf) goto L_12cf6507;
  /* 12cf64e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf64ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf64f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf64f3 je 0x12cf6507 */
  if (C.zf) goto L_12cf6507;
  /* 12cf64f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf64f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf64fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6501 jne 0x12cf645d */
  if (!C.zf) goto L_12cf645d;
L_12cf6507:;
  /* 12cf6507 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf650a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf6510 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf6512 jne 0x12cf651f */
  if (!C.zf) goto L_12cf651f;
  /* 12cf6514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6517 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf651a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf651d jmp 0x12cf652c */
  goto L_12cf652c;
L_12cf651f:;
  /* 12cf651f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6523 je 0x12cf652c */
  if (C.zf) goto L_12cf652c;
  /* 12cf6525 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6528 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12cf652c:;
  /* 12cf652c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12cf6533:;
  /* 12cf6533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6536 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cf6539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf653b je 0x12cf655e */
  if (C.zf) goto L_12cf655e;
L_12cf653d:;
  /* 12cf653d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6540 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cf6543 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6546 je 0x12cf6553 */
  if (C.zf) goto L_12cf6553;
  /* 12cf6548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf654b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf654e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6551 jne 0x12cf655e */
  if (!C.zf) goto L_12cf655e;
L_12cf6553:;
  /* 12cf6553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6556 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6559 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf655c jmp 0x12cf653d */
  goto L_12cf653d;
L_12cf655e:;
  /* 12cf655e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6561 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf6564 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf6566 jne 0x12cf656d */
  if (!C.zf) goto L_12cf656d;
  /* 12cf6568 jmp 0x12cf674b */
  goto L_12cf674b;
L_12cf656d:;
  /* 12cf656d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6571 je 0x12cf6584 */
  if (C.zf) goto L_12cf6584;
  /* 12cf6573 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6579 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cf657b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf657e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6581 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12cf6584:;
  /* 12cf6584 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf6587 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf6589 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf658c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf658f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12cf6591:;
  /* 12cf6591 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12cf6598 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cf659f:;
  /* 12cf659f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf65a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cf65a5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf65a8 jne 0x12cf65be */
  if (!C.zf) goto L_12cf65be;
  /* 12cf65aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf65ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf65b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf65b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf65b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf65b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cf65bc jmp 0x12cf659f */
  goto L_12cf659f;
L_12cf65be:;
  /* 12cf65be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf65c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf65c4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf65c7 jne 0x12cf661a */
  if (!C.zf) goto L_12cf661a;
  /* 12cf65c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf65cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf65ce mov ecx, 2 */
  ECX = (0x2u);
  /* 12cf65d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cf65d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf65d7 jne 0x12cf6612 */
  if (!C.zf) goto L_12cf6612;
  /* 12cf65d9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf65dd je 0x12cf65ff */
  if (C.zf) goto L_12cf65ff;
  /* 12cf65df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf65e2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cf65e6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf65e9 jne 0x12cf65f6 */
  if (!C.zf) goto L_12cf65f6;
  /* 12cf65eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf65ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf65f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf65f4 jmp 0x12cf65fd */
  goto L_12cf65fd;
L_12cf65f6:;
  /* 12cf65f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cf65fd:;
  /* 12cf65fd jmp 0x12cf6606 */
  goto L_12cf6606;
L_12cf65ff:;
  /* 12cf65ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cf6606:;
  /* 12cf6606 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf6608 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf660c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12cf660f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12cf6612:;
  /* 12cf6612 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf6615 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cf6617 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12cf661a:;
  /* 12cf661a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf661d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf6620 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6623 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cf6626 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf6628 je 0x12cf664e */
  if (C.zf) goto L_12cf664e;
  /* 12cf662a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf662e je 0x12cf663f */
  if (C.zf) goto L_12cf663f;
  /* 12cf6630 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6633 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12cf6636 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6639 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf663c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12cf663f:;
  /* 12cf663f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6642 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf6644 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6647 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf664a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cf664c jmp 0x12cf661a */
  goto L_12cf661a;
L_12cf664e:;
  /* 12cf664e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6651 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cf6654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf6656 je 0x12cf6674 */
  if (C.zf) goto L_12cf6674;
  /* 12cf6658 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf665c jne 0x12cf6679 */
  if (!C.zf) goto L_12cf6679;
  /* 12cf665e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6661 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cf6664 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6667 je 0x12cf6674 */
  if (C.zf) goto L_12cf6674;
  /* 12cf6669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf666c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cf666f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6672 jne 0x12cf6679 */
  if (!C.zf) goto L_12cf6679;
L_12cf6674:;
  /* 12cf6674 jmp 0x12cf6724 */
  goto L_12cf6724;
L_12cf6679:;
  /* 12cf6679 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf667d je 0x12cf6716 */
  if (C.zf) goto L_12cf6716;
  /* 12cf6683 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6687 je 0x12cf66dd */
  if (C.zf) goto L_12cf66dd;
  /* 12cf6689 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf668c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf668e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cf6690 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf6692 mov cl, byte ptr [eax + 0x12d21da1] */
  CL = (r8((uint32_t)(EAX + 0x12d21da1)));
  /* 12cf6698 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf669b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf669d je 0x12cf66c8 */
  if (C.zf) goto L_12cf66c8;
  /* 12cf669f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf66a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf66a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cf66a7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12cf66a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf66ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf66af mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12cf66b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf66b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf66b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf66bb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf66be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf66c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf66c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf66c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cf66c8:;
  /* 12cf66c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf66cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf66ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cf66d0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cf66d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf66d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf66d8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cf66db jmp 0x12cf6709 */
  goto L_12cf6709;
L_12cf66dd:;
  /* 12cf66dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf66e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf66e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cf66e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf66e6 mov cl, byte ptr [eax + 0x12d21da1] */
  CL = (r8((uint32_t)(EAX + 0x12d21da1)));
  /* 12cf66ec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf66ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf66f1 je 0x12cf6709 */
  if (C.zf) goto L_12cf6709;
  /* 12cf66f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf66f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf66f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf66fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf66ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf6701 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6704 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6707 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf6709:;
  /* 12cf6709 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf670c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf670e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6711 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6714 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf6716:;
  /* 12cf6716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6719 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf671c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf671f jmp 0x12cf6591 */
  goto L_12cf6591;
L_12cf6724:;
  /* 12cf6724 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6728 je 0x12cf6739 */
  if (C.zf) goto L_12cf6739;
  /* 12cf672a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf672d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12cf6730 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6733 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6736 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12cf6739:;
  /* 12cf6739 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf673c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf673e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6741 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cf6744 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cf6746 jmp 0x12cf6533 */
  goto L_12cf6533;
L_12cf674b:;
  /* 12cf674b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf674f je 0x12cf6763 */
  if (C.zf) goto L_12cf6763;
  /* 12cf6751 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6754 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cf675a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf675d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6760 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12cf6763:;
  /* 12cf6763 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf6766 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf6768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf676b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf676e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cf6770 mov esp, ebp */
  ESP = (EBP);
  /* 12cf6772 pop ebp */
  EBP = (pop32());
  /* 12cf6773 ret  */
  ESPCHK(0x12cf6350u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x12cf6780 (537 bytes, 173 insns) */
void f_12cf6780(void) {
  FTRACE(0x12cf6780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6780 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6781 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6783 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6786 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12cf678d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12cf6794 cmp dword ptr [0x12d20674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf679b jne 0x12cf67da */
  if (!C.zf) goto L_12cf67da;
  /* 12cf679d call dword ptr [0x12d23378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23378))), 0x12cf67a3u);
  /* 12cf67a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cf67a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf67aa je 0x12cf67b8 */
  if (C.zf) goto L_12cf67b8;
  /* 12cf67ac mov dword ptr [0x12d20674], 1 */
  w32((uint32_t)(0x12d20674), (0x1u));
  /* 12cf67b6 jmp 0x12cf67da */
  goto L_12cf67da;
L_12cf67b8:;
  /* 12cf67b8 call dword ptr [0x12d23374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23374))), 0x12cf67beu);
  /* 12cf67be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf67c1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf67c5 je 0x12cf67d3 */
  if (C.zf) goto L_12cf67d3;
  /* 12cf67c7 mov dword ptr [0x12d20674], 2 */
  w32((uint32_t)(0x12d20674), (0x2u));
  /* 12cf67d1 jmp 0x12cf67da */
  goto L_12cf67da;
L_12cf67d3:;
  /* 12cf67d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf67d5 jmp 0x12cf6995 */
  goto L_12cf6995;
L_12cf67da:;
  /* 12cf67da cmp dword ptr [0x12d20674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf67e1 jne 0x12cf68de */
  if (!C.zf) goto L_12cf68de;
  /* 12cf67e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf67eb jne 0x12cf6803 */
  if (!C.zf) goto L_12cf6803;
  /* 12cf67ed call dword ptr [0x12d23378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23378))), 0x12cf67f3u);
  /* 12cf67f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cf67f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf67fa jne 0x12cf6803 */
  if (!C.zf) goto L_12cf6803;
  /* 12cf67fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf67fe jmp 0x12cf6995 */
  goto L_12cf6995;
L_12cf6803:;
  /* 12cf6803 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf6806 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cf6809:;
  /* 12cf6809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf680c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf680e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12cf6811 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf6813 je 0x12cf6835 */
  if (C.zf) goto L_12cf6835;
  /* 12cf6815 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6818 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf681b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf681e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6821 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf6823 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12cf6826 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf6828 jne 0x12cf6833 */
  if (!C.zf) goto L_12cf6833;
  /* 12cf682a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf682d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6830 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cf6833:;
  /* 12cf6833 jmp 0x12cf6809 */
  goto L_12cf6809;
L_12cf6835:;
  /* 12cf6835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6838 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf683b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cf683d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf6843 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6845 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6847 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6849 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf684b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf684e push edx */
  push32((uint32_t)(EDX));
  /* 12cf684f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf6852 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6853 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6857 call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12cf685du);
  /* 12cf685d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf6860 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6864 je 0x12cf6884 */
  if (C.zf) goto L_12cf6884;
  /* 12cf6866 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12cf6868 push 0x12d1bf54 */
  push32((uint32_t)(0x12d1bf54u));
  /* 12cf686d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf686f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf6872 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6873 call 0x12cf41b0 */
  push32(0x12cf6878u); f_12cf41b0();
  /* 12cf6878 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf687b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf687e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6882 jne 0x12cf6895 */
  if (!C.zf) goto L_12cf6895;
L_12cf6884:;
  /* 12cf6884 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf6887 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6888 call dword ptr [0x12d2336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2336c))), 0x12cf688eu);
  /* 12cf688e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf6890 jmp 0x12cf6995 */
  goto L_12cf6995;
L_12cf6895:;
  /* 12cf6895 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6897 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6899 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf689c push eax */
  push32((uint32_t)(EAX));
  /* 12cf689d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf68a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf68a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf68a4 push edx */
  push32((uint32_t)(EDX));
  /* 12cf68a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf68a8 push eax */
  push32((uint32_t)(EAX));
  /* 12cf68a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf68ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf68ad call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12cf68b3u);
  /* 12cf68b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf68b5 jne 0x12cf68cc */
  if (!C.zf) goto L_12cf68cc;
  /* 12cf68b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf68b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf68bc push ecx */
  push32((uint32_t)(ECX));
  /* 12cf68bd call 0x12cf4c40 */
  push32(0x12cf68c2u); f_12cf4c40();
  /* 12cf68c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf68c5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12cf68cc:;
  /* 12cf68cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf68cf push edx */
  push32((uint32_t)(EDX));
  /* 12cf68d0 call dword ptr [0x12d2336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2336c))), 0x12cf68d6u);
  /* 12cf68d6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf68d9 jmp 0x12cf6995 */
  goto L_12cf6995;
L_12cf68de:;
  /* 12cf68de cmp dword ptr [0x12d20674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d20674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf68e5 jne 0x12cf6993 */
  if (!C.zf) goto L_12cf6993;
  /* 12cf68eb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf68ef jne 0x12cf6907 */
  if (!C.zf) goto L_12cf6907;
  /* 12cf68f1 call dword ptr [0x12d23374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23374))), 0x12cf68f7u);
  /* 12cf68f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf68fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf68fe jne 0x12cf6907 */
  if (!C.zf) goto L_12cf6907;
  /* 12cf6900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf6902 jmp 0x12cf6995 */
  goto L_12cf6995;
L_12cf6907:;
  /* 12cf6907 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf690a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cf690d:;
  /* 12cf690d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6910 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cf6913 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf6915 je 0x12cf6935 */
  if (C.zf) goto L_12cf6935;
  /* 12cf6917 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf691a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf691d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf6920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6923 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cf6926 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf6928 jne 0x12cf6933 */
  if (!C.zf) goto L_12cf6933;
  /* 12cf692a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf692d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6930 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cf6933:;
  /* 12cf6933 jmp 0x12cf690d */
  goto L_12cf690d;
L_12cf6935:;
  /* 12cf6935 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6938 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf693b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf693e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cf6941 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12cf6946 push 0x12d1bf54 */
  push32((uint32_t)(0x12d1bf54u));
  /* 12cf694b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf694d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf6950 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6951 call 0x12cf41b0 */
  push32(0x12cf6956u); f_12cf41b0();
  /* 12cf6956 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6959 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf695c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6960 jne 0x12cf6970 */
  if (!C.zf) goto L_12cf6970;
  /* 12cf6962 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf6965 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6966 call dword ptr [0x12d23368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23368))), 0x12cf696cu);
  /* 12cf696c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf696e jmp 0x12cf6995 */
  goto L_12cf6995;
L_12cf6970:;
  /* 12cf6970 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf6973 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6974 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf6977 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6978 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf697b push eax */
  push32((uint32_t)(EAX));
  /* 12cf697c call 0x12cfaa90 */
  push32(0x12cf6981u); f_12cfaa90();
  /* 12cf6981 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6984 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf6987 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6988 call dword ptr [0x12d23368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23368))), 0x12cf698eu);
  /* 12cf698e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6991 jmp 0x12cf6995 */
  goto L_12cf6995;
L_12cf6993:;
  /* 12cf6993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf6995:;
  /* 12cf6995 mov esp, ebp */
  ESP = (EBP);
  /* 12cf6997 pop ebp */
  EBP = (pop32());
  /* 12cf6998 ret  */
  ESPCHK(0x12cf6780u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x12cf69a0 (77 bytes, 25 insns) */
void f_12cf69a0(void) {
  FTRACE(0x12cf69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf69a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf69a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf69a5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cf69aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf69ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf69b0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12cf69b3 push eax */
  push32((uint32_t)(EAX));
  /* 12cf69b4 call dword ptr [0x12d23380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23380))), 0x12cf69bau);
  /* 12cf69ba mov dword ptr [0x12d21ecc], eax */
  w32((uint32_t)(0x12d21ecc), (EAX));
  /* 12cf69bf cmp dword ptr [0x12d21ecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d21ecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf69c6 jne 0x12cf69cc */
  if (!C.zf) goto L_12cf69cc;
  /* 12cf69c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf69ca jmp 0x12cf69eb */
  goto L_12cf69eb;
L_12cf69cc:;
  /* 12cf69cc call 0x12cf8450 */
  push32(0x12cf69d1u); f_12cf8450();
  /* 12cf69d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf69d3 jne 0x12cf69e6 */
  if (!C.zf) goto L_12cf69e6;
  /* 12cf69d5 mov ecx, dword ptr [0x12d21ecc] */
  ECX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf69db push ecx */
  push32((uint32_t)(ECX));
  /* 12cf69dc call dword ptr [0x12d2337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2337c))), 0x12cf69e2u);
  /* 12cf69e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf69e4 jmp 0x12cf69eb */
  goto L_12cf69eb;
L_12cf69e6:;
  /* 12cf69e6 mov eax, 1 */
  EAX = (0x1u);
L_12cf69eb:;
  /* 12cf69eb pop ebp */
  EBP = (pop32());
  /* 12cf69ec ret  */
  ESPCHK(0x12cf69a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x12cf69f0 (156 bytes, 48 insns) */
void f_12cf69f0(void) {
  FTRACE(0x12cf69f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf69f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf69f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf69f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf69f6 mov eax, dword ptr [0x12d21ec8] */
  EAX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf69fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf69fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cf6a05 jmp 0x12cf6a10 */
  goto L_12cf6a10;
L_12cf6a07:;
  /* 12cf6a07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6a0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6a0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf6a10:;
  /* 12cf6a10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6a13 cmp edx, dword ptr [0x12d21ec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d21ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6a19 jge 0x12cf6a66 */
  if ((C.sf==C.of)) goto L_12cf6a66;
  /* 12cf6a1b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12cf6a20 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12cf6a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6a28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cf6a2b push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6a2c call dword ptr [0x12d23388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23388))), 0x12cf6a32u);
  /* 12cf6a32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cf6a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6a39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6a3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cf6a3f push eax */
  push32((uint32_t)(EAX));
  /* 12cf6a40 call dword ptr [0x12d23388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23388))), 0x12cf6a46u);
  /* 12cf6a46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6a49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cf6a4c push edx */
  push32((uint32_t)(EDX));
  /* 12cf6a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6a4f mov eax, dword ptr [0x12d21ecc] */
  EAX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf6a54 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6a55 call dword ptr [0x12d23384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23384))), 0x12cf6a5bu);
  /* 12cf6a5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6a5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6a61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cf6a64 jmp 0x12cf6a07 */
  goto L_12cf6a07;
L_12cf6a66:;
  /* 12cf6a66 mov edx, dword ptr [0x12d21ec8] */
  EDX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf6a6c push edx */
  push32((uint32_t)(EDX));
  /* 12cf6a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6a6f mov eax, dword ptr [0x12d21ecc] */
  EAX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf6a74 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6a75 call dword ptr [0x12d23384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23384))), 0x12cf6a7bu);
  /* 12cf6a7b mov ecx, dword ptr [0x12d21ecc] */
  ECX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf6a81 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6a82 call dword ptr [0x12d2337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2337c))), 0x12cf6a88u);
  /* 12cf6a88 mov esp, ebp */
  ESP = (EBP);
  /* 12cf6a8a pop ebp */
  EBP = (pop32());
  /* 12cf6a8b ret  */
  ESPCHK(0x12cf69f0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12cf6a90 (73 bytes, 19 insns) */
void f_12cf6a90(void) {
  FTRACE(0x12cf6a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6a91 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6a93 cmp dword ptr [0x12d20508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6a9a je 0x12cf6aae */
  if (C.zf) goto L_12cf6aae;
  /* 12cf6a9c cmp dword ptr [0x12d20508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6aa3 jne 0x12cf6ad7 */
  if (!C.zf) goto L_12cf6ad7;
  /* 12cf6aa5 cmp dword ptr [0x12d2050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d2050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6aac jne 0x12cf6ad7 */
  if (!C.zf) goto L_12cf6ad7;
L_12cf6aae:;
  /* 12cf6aae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12cf6ab3 call 0x12cf6ae0 */
  push32(0x12cf6ab8u); f_12cf6ae0();
  /* 12cf6ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6abb cmp dword ptr [0x12d20678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6ac2 je 0x12cf6aca */
  if (C.zf) goto L_12cf6aca;
  /* 12cf6ac4 call dword ptr [0x12d20678] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d20678))), 0x12cf6acau);
L_12cf6aca:;
  /* 12cf6aca push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cf6acf call 0x12cf6ae0 */
  push32(0x12cf6ad4u); f_12cf6ae0();
  /* 12cf6ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf6ad7:;
  /* 12cf6ad7 pop ebp */
  EBP = (pop32());
  /* 12cf6ad8 ret  */
  ESPCHK(0x12cf6a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ae0 @ 0x12cf6ae0 (447 bytes, 131 insns) */
void f_12cf6ae0(void) {
  FTRACE(0x12cf6ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6ae3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6ae9 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf6aea push esi */
  push32((uint32_t)(ESI));
  /* 12cf6aeb push edi */
  push32((uint32_t)(EDI));
  /* 12cf6aec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cf6af3 jmp 0x12cf6afe */
  goto L_12cf6afe;
L_12cf6af5:;
  /* 12cf6af5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6af8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6afb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cf6afe:;
  /* 12cf6afe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6b02 jae 0x12cf6b17 */
  if (!C.cf) goto L_12cf6b17;
  /* 12cf6b04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6b07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6b0a cmp edx, dword ptr [ecx*8 + 0x12d1eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12d1eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6b11 jne 0x12cf6b15 */
  if (!C.zf) goto L_12cf6b15;
  /* 12cf6b13 jmp 0x12cf6b17 */
  goto L_12cf6b17;
L_12cf6b15:;
  /* 12cf6b15 jmp 0x12cf6af5 */
  goto L_12cf6af5;
L_12cf6b17:;
  /* 12cf6b17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6b1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6b1d cmp ecx, dword ptr [eax*8 + 0x12d1eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d1eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6b24 jne 0x12cf6c98 */
  if (!C.zf) goto L_12cf6c98;
  /* 12cf6b2a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6b31 je 0x12cf6b54 */
  if (C.zf) goto L_12cf6b54;
  /* 12cf6b33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6b36 mov eax, dword ptr [edx*8 + 0x12d1eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d1eab4)));
  /* 12cf6b3d push eax */
  push32((uint32_t)(EAX));
  /* 12cf6b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6b44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf6b46 call 0x12cf3270 */
  push32(0x12cf6b4bu); f_12cf3270();
  /* 12cf6b4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6b4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6b51 jne 0x12cf6b54 */
  if (!C.zf) goto L_12cf6b54;
  /* 12cf6b53 int3  */
  x86_unimpl("int3 @ 0x12cf6b53");
L_12cf6b54:;
  /* 12cf6b54 cmp dword ptr [0x12d20508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6b5b je 0x12cf6b6f */
  if (C.zf) goto L_12cf6b6f;
  /* 12cf6b5d cmp dword ptr [0x12d20508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6b64 jne 0x12cf6ba8 */
  if (!C.zf) goto L_12cf6ba8;
  /* 12cf6b66 cmp dword ptr [0x12d2050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d2050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6b6d jne 0x12cf6ba8 */
  if (!C.zf) goto L_12cf6ba8;
L_12cf6b6f:;
  /* 12cf6b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6b71 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12cf6b74 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6b75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6b78 mov eax, dword ptr [edx*8 + 0x12d1eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d1eab4)));
  /* 12cf6b7f push eax */
  push32((uint32_t)(EAX));
  /* 12cf6b80 call 0x12cf6fe0 */
  push32(0x12cf6b85u); f_12cf6fe0();
  /* 12cf6b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6b88 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6b89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6b8c mov edx, dword ptr [ecx*8 + 0x12d1eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12d1eab4)));
  /* 12cf6b93 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6b94 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12cf6b96 call dword ptr [0x12d23304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23304))), 0x12cf6b9cu);
  /* 12cf6b9c push eax */
  push32((uint32_t)(EAX));
  /* 12cf6b9d call dword ptr [0x12d23308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23308))), 0x12cf6ba3u);
  /* 12cf6ba3 jmp 0x12cf6c98 */
  goto L_12cf6c98;
L_12cf6ba8:;
  /* 12cf6ba8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6baf je 0x12cf6c98 */
  if (C.zf) goto L_12cf6c98;
  /* 12cf6bb5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12cf6bba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12cf6bc0 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6bc3 call dword ptr [0x12d23320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23320))), 0x12cf6bc9u);
  /* 12cf6bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf6bcb jne 0x12cf6be1 */
  if (!C.zf) goto L_12cf6be1;
  /* 12cf6bcd push 0x12d1b7bc */
  push32((uint32_t)(0x12d1b7bcu));
  /* 12cf6bd2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12cf6bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6bd9 call 0x12cf7160 */
  push32(0x12cf6bdeu); f_12cf7160();
  /* 12cf6bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf6be1:;
  /* 12cf6be1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12cf6be7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cf6bea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6bed push eax */
  push32((uint32_t)(EAX));
  /* 12cf6bee call 0x12cf6fe0 */
  push32(0x12cf6bf3u); f_12cf6fe0();
  /* 12cf6bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6bf6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6bf9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6bfc jbe 0x12cf6c2a */
  if ((C.cf||C.zf)) goto L_12cf6c2a;
  /* 12cf6bfe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12cf6c04 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6c05 call 0x12cf6fe0 */
  push32(0x12cf6c0au); f_12cf6fe0();
  /* 12cf6c0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6c0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6c10 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12cf6c14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf6c17 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf6c19 push 0x12d1b7b8 */
  push32((uint32_t)(0x12d1b7b8u));
  /* 12cf6c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6c21 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6c22 call 0x12cf79d0 */
  push32(0x12cf6c27u); f_12cf79d0();
  /* 12cf6c27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf6c2a:;
  /* 12cf6c2a push 0x12d1c210 */
  push32((uint32_t)(0x12d1c210u));
  /* 12cf6c2f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12cf6c35 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6c36 call 0x12cf7160 */
  push32(0x12cf6c3bu); f_12cf7160();
  /* 12cf6c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6c3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6c41 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6c42 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12cf6c48 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6c49 call 0x12cf7170 */
  push32(0x12cf6c4eu); f_12cf7170();
  /* 12cf6c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6c51 push 0x12d1b730 */
  push32((uint32_t)(0x12d1b730u));
  /* 12cf6c56 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12cf6c5c push edx */
  push32((uint32_t)(EDX));
  /* 12cf6c5d call 0x12cf7170 */
  push32(0x12cf6c62u); f_12cf7170();
  /* 12cf6c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6c65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6c68 mov ecx, dword ptr [eax*8 + 0x12d1eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12d1eab4)));
  /* 12cf6c6f push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6c70 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12cf6c76 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6c77 call 0x12cf7170 */
  push32(0x12cf6c7cu); f_12cf7170();
  /* 12cf6c7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6c7f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12cf6c84 push 0x12d1c1e8 */
  push32((uint32_t)(0x12d1c1e8u));
  /* 12cf6c89 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12cf6c8f push eax */
  push32((uint32_t)(EAX));
  /* 12cf6c90 call 0x12cf7910 */
  push32(0x12cf6c95u); f_12cf7910();
  /* 12cf6c95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf6c98:;
  /* 12cf6c98 pop edi */
  EDI = (pop32());
  /* 12cf6c99 pop esi */
  ESI = (pop32());
  /* 12cf6c9a pop ebx */
  EBX = (pop32());
  /* 12cf6c9b mov esp, ebp */
  ESP = (EBP);
  /* 12cf6c9d pop ebp */
  EBP = (pop32());
  /* 12cf6c9e ret  */
  ESPCHK(0x12cf6ae0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12cf6ca0 (80 bytes, 27 insns) */
void f_12cf6ca0(void) {
  FTRACE(0x12cf6ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6ca4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cf6cab jmp 0x12cf6cb6 */
  goto L_12cf6cb6;
L_12cf6cad:;
  /* 12cf6cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6cb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6cb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf6cb6:;
  /* 12cf6cb6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6cba jae 0x12cf6ccf */
  if (!C.cf) goto L_12cf6ccf;
  /* 12cf6cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6cbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6cc2 cmp edx, dword ptr [ecx*8 + 0x12d1eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12d1eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6cc9 jne 0x12cf6ccd */
  if (!C.zf) goto L_12cf6ccd;
  /* 12cf6ccb jmp 0x12cf6ccf */
  goto L_12cf6ccf;
L_12cf6ccd:;
  /* 12cf6ccd jmp 0x12cf6cad */
  goto L_12cf6cad;
L_12cf6ccf:;
  /* 12cf6ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6cd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6cd5 cmp ecx, dword ptr [eax*8 + 0x12d1eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d1eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6cdc jne 0x12cf6cea */
  if (!C.zf) goto L_12cf6cea;
  /* 12cf6cde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6ce1 mov eax, dword ptr [edx*8 + 0x12d1eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d1eab4)));
  /* 12cf6ce8 jmp 0x12cf6cec */
  goto L_12cf6cec;
L_12cf6cea:;
  /* 12cf6cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf6cec:;
  /* 12cf6cec mov esp, ebp */
  ESP = (EBP);
  /* 12cf6cee pop ebp */
  EBP = (pop32());
  /* 12cf6cef ret  */
  ESPCHK(0x12cf6ca0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12cf6cf0 (66 bytes, 28 insns) */
void f_12cf6cf0(void) {
  FTRACE(0x12cf6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6cf3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6cf7 jne 0x12cf6d17 */
  if (!C.zf) goto L_12cf6d17;
  /* 12cf6cf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6cfd jge 0x12cf6d17 */
  if ((C.sf==C.of)) goto L_12cf6d17;
  /* 12cf6cff push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf6d01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6d04 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6d05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6d08 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6d09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6d0c push edx */
  push32((uint32_t)(EDX));
  /* 12cf6d0d call 0x12cf6d40 */
  push32(0x12cf6d12u); f_12cf6d40();
  /* 12cf6d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6d15 jmp 0x12cf6d2d */
  goto L_12cf6d2d;
L_12cf6d17:;
  /* 12cf6d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6d19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6d1c push eax */
  push32((uint32_t)(EAX));
  /* 12cf6d1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6d20 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6d21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6d24 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6d25 call 0x12cf6d40 */
  push32(0x12cf6d2au); f_12cf6d40();
  /* 12cf6d2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf6d2d:;
  /* 12cf6d2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6d30 pop ebp */
  EBP = (pop32());
  /* 12cf6d31 ret  */
  ESPCHK(0x12cf6cf0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12cf6d40 (194 bytes, 71 insns) */
void f_12cf6d40(void) {
  FTRACE(0x12cf6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6d41 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6d43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6d46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6d49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf6d4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6d50 je 0x12cf6d69 */
  if (C.zf) goto L_12cf6d69;
  /* 12cf6d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6d55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12cf6d58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6d5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6d5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf6d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6d64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cf6d66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cf6d69:;
  /* 12cf6d69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6d6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cf6d6f:;
  /* 12cf6d6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6d72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf6d74 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cf6d77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cf6d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf6d7f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cf6d82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cf6d85 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6d89 jbe 0x12cf6da1 */
  if ((C.cf||C.zf)) goto L_12cf6da1;
  /* 12cf6d8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6d8e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6d91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6d94 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf6d96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6d99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6d9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf6d9f jmp 0x12cf6db5 */
  goto L_12cf6db5;
L_12cf6da1:;
  /* 12cf6da1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6da4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6da7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6daa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf6dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6daf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6db2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf6db5:;
  /* 12cf6db5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6db9 ja 0x12cf6d6f */
  if ((!C.cf&&!C.zf)) goto L_12cf6d6f;
  /* 12cf6dbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6dbe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cf6dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6dc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6dc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf6dca:;
  /* 12cf6dca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6dcd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf6dcf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12cf6dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6dd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6dd8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf6dda mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf6ddc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6ddf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12cf6de2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12cf6de4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6de7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6dea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf6ded mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6df0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6df3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf6df6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6df9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6dfc jb 0x12cf6dca */
  if (C.cf) goto L_12cf6dca;
  /* 12cf6dfe mov esp, ebp */
  ESP = (EBP);
  /* 12cf6e00 pop ebp */
  EBP = (pop32());
  /* 12cf6e01 ret  */
  ESPCHK(0x12cf6d40u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12cf6e10 (63 bytes, 24 insns) */
void f_12cf6e10(void) {
  FTRACE(0x12cf6e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6e11 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6e14 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6e18 jne 0x12cf6e29 */
  if (!C.zf) goto L_12cf6e29;
  /* 12cf6e1a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6e1e jge 0x12cf6e29 */
  if ((C.sf==C.of)) goto L_12cf6e29;
  /* 12cf6e20 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cf6e27 jmp 0x12cf6e30 */
  goto L_12cf6e30;
L_12cf6e29:;
  /* 12cf6e29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cf6e30:;
  /* 12cf6e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6e33 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6e34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6e37 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6e38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6e3b push edx */
  push32((uint32_t)(EDX));
  /* 12cf6e3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6e3f push eax */
  push32((uint32_t)(EAX));
  /* 12cf6e40 call 0x12cf6d40 */
  push32(0x12cf6e45u); f_12cf6d40();
  /* 12cf6e45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6e48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6e4b mov esp, ebp */
  ESP = (EBP);
  /* 12cf6e4d pop ebp */
  EBP = (pop32());
  /* 12cf6e4e ret  */
  ESPCHK(0x12cf6e10u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12cf6e50 (30 bytes, 14 insns) */
void f_12cf6e50(void) {
  FTRACE(0x12cf6e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6e51 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6e55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6e58 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6e59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6e5c push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6e5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6e60 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6e61 call 0x12cf6d40 */
  push32(0x12cf6e66u); f_12cf6d40();
  /* 12cf6e66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6e69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6e6c pop ebp */
  EBP = (pop32());
  /* 12cf6e6d ret  */
  ESPCHK(0x12cf6e50u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12cf6e70 (72 bytes, 28 insns) */
void f_12cf6e70(void) {
  FTRACE(0x12cf6e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6e71 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6e74 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6e78 jne 0x12cf6e91 */
  if (!C.zf) goto L_12cf6e91;
  /* 12cf6e7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6e7e jg 0x12cf6e91 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cf6e91;
  /* 12cf6e80 jl 0x12cf6e88 */
  if ((C.sf!=C.of)) goto L_12cf6e88;
  /* 12cf6e82 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6e86 jae 0x12cf6e91 */
  if (!C.cf) goto L_12cf6e91;
L_12cf6e88:;
  /* 12cf6e88 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cf6e8f jmp 0x12cf6e98 */
  goto L_12cf6e98;
L_12cf6e91:;
  /* 12cf6e91 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cf6e98:;
  /* 12cf6e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6e9b push eax */
  push32((uint32_t)(EAX));
  /* 12cf6e9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf6e9f push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6ea0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6ea3 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6ea4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6ea7 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6ea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6eab push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6eac call 0x12cf6ec0 */
  push32(0x12cf6eb1u); f_12cf6ec0();
  /* 12cf6eb1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6eb4 mov esp, ebp */
  ESP = (EBP);
  /* 12cf6eb6 pop ebp */
  EBP = (pop32());
  /* 12cf6eb7 ret  */
  ESPCHK(0x12cf6e70u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12cf6ec0 (242 bytes, 91 insns) */
void f_12cf6ec0(void) {
  FTRACE(0x12cf6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6ec3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf6ecc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6ed0 je 0x12cf6ef4 */
  if (C.zf) goto L_12cf6ef4;
  /* 12cf6ed2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6ed5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12cf6ed8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6edb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6ede mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf6ee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6ee4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cf6ee6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6ee9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6eec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cf6eee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cf6ef1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12cf6ef4:;
  /* 12cf6ef4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6ef7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cf6efa:;
  /* 12cf6efa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf6efd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf6eff push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6f00 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6f01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6f04 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6f05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6f08 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6f09 call 0x12cfae40 */
  push32(0x12cf6f0eu); f_12cfae40();
  /* 12cf6f0e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf6f11 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf6f14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf6f16 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6f17 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6f18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6f1b push eax */
  push32((uint32_t)(EAX));
  /* 12cf6f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6f1f push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6f20 call 0x12cfadd0 */
  push32(0x12cf6f25u); f_12cfadd0();
  /* 12cf6f25 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cf6f28 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12cf6f2b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6f2f jbe 0x12cf6f47 */
  if ((C.cf||C.zf)) goto L_12cf6f47;
  /* 12cf6f31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6f34 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6f37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf6f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6f42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf6f45 jmp 0x12cf6f5b */
  goto L_12cf6f5b;
L_12cf6f47:;
  /* 12cf6f47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf6f4a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6f4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf6f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6f58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cf6f5b:;
  /* 12cf6f5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6f5f ja 0x12cf6efa */
  if ((!C.cf&&!C.zf)) goto L_12cf6efa;
  /* 12cf6f61 jb 0x12cf6f69 */
  if (C.cf) goto L_12cf6f69;
  /* 12cf6f63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6f67 ja 0x12cf6efa */
  if ((!C.cf&&!C.zf)) goto L_12cf6efa;
L_12cf6f69:;
  /* 12cf6f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f6c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cf6f6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f72 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6f75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf6f78:;
  /* 12cf6f78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f7b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf6f7d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12cf6f80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6f86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf6f88 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cf6f8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6f8d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12cf6f90 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12cf6f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf6f95 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf6f98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf6f9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6f9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf6fa1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf6fa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf6fa7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf6faa jb 0x12cf6f78 */
  if (C.cf) goto L_12cf6f78;
  /* 12cf6fac mov esp, ebp */
  ESP = (EBP);
  /* 12cf6fae pop ebp */
  EBP = (pop32());
  /* 12cf6faf ret 0x14 */
  ESPCHK(0x12cf6ec0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12cf6fc0 (31 bytes, 15 insns) */
void f_12cf6fc0(void) {
  FTRACE(0x12cf6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf6fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf6fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf6fc5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf6fc8 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6fc9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6fcc push ecx */
  push32((uint32_t)(ECX));
  /* 12cf6fcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf6fd0 push edx */
  push32((uint32_t)(EDX));
  /* 12cf6fd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf6fd4 push eax */
  push32((uint32_t)(EAX));
  /* 12cf6fd5 call 0x12cf6ec0 */
  push32(0x12cf6fdau); f_12cf6ec0();
  /* 12cf6fda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf6fdd pop ebp */
  EBP = (pop32());
  /* 12cf6fde ret  */
  ESPCHK(0x12cf6fc0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12cf6fe0 (123 bytes, 44 insns) */
void f_12cf6fe0(void) {
  FTRACE(0x12cf6fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf6fe0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cf6fe4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cf6fea je 0x12cf7000 */
  if (C.zf) goto L_12cf7000;
L_12cf6fec:;
  /* 12cf6fec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12cf6fee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cf6fef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cf6ff1 je 0x12cf7033 */
  if (C.zf) goto L_12cf7033;
  /* 12cf6ff3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cf6ff9 jne 0x12cf6fec */
  if (!C.zf) goto L_12cf6fec;
  /* 12cf6ffb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12cf7000:;
  /* 12cf7000 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cf7002 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12cf7007 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7009 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf700c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf700e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7011 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12cf7016 je 0x12cf7000 */
  if (C.zf) goto L_12cf7000;
  /* 12cf7018 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cf701b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cf701d je 0x12cf7051 */
  if (C.zf) goto L_12cf7051;
  /* 12cf701f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12cf7021 je 0x12cf7047 */
  if (C.zf) goto L_12cf7047;
  /* 12cf7023 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12cf7028 je 0x12cf703d */
  if (C.zf) goto L_12cf703d;
  /* 12cf702a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12cf702f je 0x12cf7033 */
  if (C.zf) goto L_12cf7033;
  /* 12cf7031 jmp 0x12cf7000 */
  goto L_12cf7000;
L_12cf7033:;
  /* 12cf7033 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12cf7036 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cf703a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf703c ret  */
  ESPCHK(0x12cf6fe0u, _esp0);
  ESP += 4; return;
L_12cf703d:;
  /* 12cf703d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12cf7040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cf7044 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7046 ret  */
  ESPCHK(0x12cf6fe0u, _esp0);
  ESP += 4; return;
L_12cf7047:;
  /* 12cf7047 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12cf704a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cf704e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7050 ret  */
  ESPCHK(0x12cf6fe0u, _esp0);
  ESP += 4; return;
L_12cf7051:;
  /* 12cf7051 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12cf7054 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cf7058 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf705a ret  */
  ESPCHK(0x12cf6fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x12cf7060 (249 bytes, 93 insns) */
void f_12cf7060(void) {
  FTRACE(0x12cf7060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7060 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7061 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7063 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7066 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf7067 push esi */
  push32((uint32_t)(ESI));
  /* 12cf7068 push edi */
  push32((uint32_t)(EDI));
  /* 12cf7069 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12cf706c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cf706f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12cf7072 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12cf7075:;
  /* 12cf7075 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7079 jne 0x12cf7099 */
  if (!C.zf) goto L_12cf7099;
  /* 12cf707b push 0x12d1c248 */
  push32((uint32_t)(0x12d1c248u));
  /* 12cf7080 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf7082 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12cf7084 push 0x12d1c23c */
  push32((uint32_t)(0x12d1c23cu));
  /* 12cf7089 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf708b call 0x12cf3270 */
  push32(0x12cf7090u); f_12cf3270();
  /* 12cf7090 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7093 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7096 jne 0x12cf7099 */
  if (!C.zf) goto L_12cf7099;
  /* 12cf7098 int3  */
  x86_unimpl("int3 @ 0x12cf7098");
L_12cf7099:;
  /* 12cf7099 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf709b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf709d jne 0x12cf7075 */
  if (!C.zf) goto L_12cf7075;
L_12cf709f:;
  /* 12cf709f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf70a3 jne 0x12cf70c3 */
  if (!C.zf) goto L_12cf70c3;
  /* 12cf70a5 push 0x12d1c22c */
  push32((uint32_t)(0x12d1c22cu));
  /* 12cf70aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf70ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12cf70ae push 0x12d1c23c */
  push32((uint32_t)(0x12d1c23cu));
  /* 12cf70b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf70b5 call 0x12cf3270 */
  push32(0x12cf70bau); f_12cf3270();
  /* 12cf70ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf70bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf70c0 jne 0x12cf70c3 */
  if (!C.zf) goto L_12cf70c3;
  /* 12cf70c2 int3  */
  x86_unimpl("int3 @ 0x12cf70c2");
L_12cf70c3:;
  /* 12cf70c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf70c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf70c7 jne 0x12cf709f */
  if (!C.zf) goto L_12cf709f;
  /* 12cf70c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf70cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12cf70d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf70d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf70d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cf70dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf70df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf70e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cf70e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf70e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf70ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12cf70ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf70f0 push edx */
  push32((uint32_t)(EDX));
  /* 12cf70f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf70f4 push eax */
  push32((uint32_t)(EAX));
  /* 12cf70f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf70f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf70f9 call 0x12cfb140 */
  push32(0x12cf70feu); f_12cfb140();
  /* 12cf70fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7101 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cf7104 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf7107 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf710a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf710d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf7110 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cf7113 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf7116 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf711a jl 0x12cf713e */
  if ((C.sf!=C.of)) goto L_12cf713e;
  /* 12cf711c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf711f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf7121 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12cf7124 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf7126 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf712c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12cf712f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf7132 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf7134 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7137 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf713a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cf713c jmp 0x12cf714f */
  goto L_12cf714f;
L_12cf713e:;
  /* 12cf713e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf7141 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7142 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf7144 call 0x12cfaec0 */
  push32(0x12cf7149u); f_12cfaec0();
  /* 12cf7149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf714c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12cf714f:;
  /* 12cf714f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf7152 pop edi */
  EDI = (pop32());
  /* 12cf7153 pop esi */
  ESI = (pop32());
  /* 12cf7154 pop ebx */
  EBX = (pop32());
  /* 12cf7155 mov esp, ebp */
  ESP = (EBP);
  /* 12cf7157 pop ebp */
  EBP = (pop32());
  /* 12cf7158 ret  */
  ESPCHK(0x12cf7060u, _esp0);
  ESP += 4; return;
}

/* FUN_10007160 @ 0x12cf7160 (7 bytes, 3 insns) */
void f_12cf7160(void) {
  FTRACE(0x12cf7160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7160 push edi */
  push32((uint32_t)(EDI));
  /* 12cf7161 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12cf7165 jmp 0x12cf71d1 */
  jmp_ind(0x12cf71d1u); return;
}

/* FUN_10007170 @ 0x12cf7170 (224 bytes, 84 insns) */
void f_12cf7170(void) {
  FTRACE(0x12cf7170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7170 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cf7174 push edi */
  push32((uint32_t)(EDI));
  /* 12cf7175 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cf717b je 0x12cf718c */
  if (C.zf) goto L_12cf718c;
L_12cf717d:;
  /* 12cf717d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12cf717f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cf7180 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cf7182 je 0x12cf71bf */
  if (C.zf) goto L_12cf71bf;
  /* 12cf7184 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cf718a jne 0x12cf717d */
  if (!C.zf) goto L_12cf717d;
L_12cf718c:;
  /* 12cf718c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cf718e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12cf7193 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7195 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7198 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf719a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf719d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12cf71a2 je 0x12cf718c */
  if (C.zf) goto L_12cf718c;
  /* 12cf71a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cf71a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cf71a9 je 0x12cf71ce */
  if (C.zf) goto L_12cf71ce;
  /* 12cf71ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12cf71ad je 0x12cf71c9 */
  if (C.zf) goto L_12cf71c9;
  /* 12cf71af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12cf71b4 je 0x12cf71c4 */
  if (C.zf) goto L_12cf71c4;
  /* 12cf71b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12cf71bb je 0x12cf71bf */
  if (C.zf) goto L_12cf71bf;
  /* 12cf71bd jmp 0x12cf718c */
  goto L_12cf718c;
L_12cf71bf:;
  /* 12cf71bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12cf71c2 jmp 0x12cf71d1 */
  goto L_12cf71d1;
L_12cf71c4:;
  /* 12cf71c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12cf71c7 jmp 0x12cf71d1 */
  goto L_12cf71d1;
L_12cf71c9:;
  /* 12cf71c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12cf71cc jmp 0x12cf71d1 */
  goto L_12cf71d1;
L_12cf71ce:;
  /* 12cf71ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12cf71d1:;
  /* 12cf71d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cf71d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cf71db je 0x12cf71f6 */
  if (C.zf) goto L_12cf71f6;
L_12cf71dd:;
  /* 12cf71dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cf71df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cf71e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12cf71e2 je 0x12cf7248 */
  if (C.zf) goto L_12cf7248;
  /* 12cf71e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12cf71e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cf71e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cf71ed jne 0x12cf71dd */
  if (!C.zf) goto L_12cf71dd;
  /* 12cf71ef jmp 0x12cf71f6 */
  goto L_12cf71f6;
L_12cf71f1:;
  /* 12cf71f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cf71f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cf71f6:;
  /* 12cf71f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12cf71fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cf71fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf71ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7202 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7204 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf7206 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7209 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12cf720e je 0x12cf71f1 */
  if (C.zf) goto L_12cf71f1;
  /* 12cf7210 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12cf7212 je 0x12cf7248 */
  if (C.zf) goto L_12cf7248;
  /* 12cf7214 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12cf7216 je 0x12cf723f */
  if (C.zf) goto L_12cf723f;
  /* 12cf7218 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12cf721e je 0x12cf7232 */
  if (C.zf) goto L_12cf7232;
  /* 12cf7220 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12cf7226 je 0x12cf722a */
  if (C.zf) goto L_12cf722a;
  /* 12cf7228 jmp 0x12cf71f1 */
  goto L_12cf71f1;
L_12cf722a:;
  /* 12cf722a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cf722c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cf7230 pop edi */
  EDI = (pop32());
  /* 12cf7231 ret  */
  ESPCHK(0x12cf7170u, _esp0);
  ESP += 4; return;
L_12cf7232:;
  /* 12cf7232 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12cf7235 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cf7239 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12cf723d pop edi */
  EDI = (pop32());
  /* 12cf723e ret  */
  ESPCHK(0x12cf7170u, _esp0);
  ESP += 4; return;
L_12cf723f:;
  /* 12cf723f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12cf7242 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cf7246 pop edi */
  EDI = (pop32());
  /* 12cf7247 ret  */
  ESPCHK(0x12cf7170u, _esp0);
  ESP += 4; return;
L_12cf7248:;
  /* 12cf7248 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12cf724a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cf724e pop edi */
  EDI = (pop32());
  /* 12cf724f ret  */
  ESPCHK(0x12cf7170u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x12cf7250 (243 bytes, 91 insns) */
void f_12cf7250(void) {
  FTRACE(0x12cf7250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7250 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7251 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7253 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7256 push ebx */
  push32((uint32_t)(EBX));
  /* 12cf7257 push esi */
  push32((uint32_t)(ESI));
  /* 12cf7258 push edi */
  push32((uint32_t)(EDI));
  /* 12cf7259 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12cf725c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cf725f:;
  /* 12cf725f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7263 jne 0x12cf7283 */
  if (!C.zf) goto L_12cf7283;
  /* 12cf7265 push 0x12d1c248 */
  push32((uint32_t)(0x12d1c248u));
  /* 12cf726a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf726c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12cf726e push 0x12d1c258 */
  push32((uint32_t)(0x12d1c258u));
  /* 12cf7273 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf7275 call 0x12cf3270 */
  push32(0x12cf727au); f_12cf3270();
  /* 12cf727a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf727d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7280 jne 0x12cf7283 */
  if (!C.zf) goto L_12cf7283;
  /* 12cf7282 int3  */
  x86_unimpl("int3 @ 0x12cf7282");
L_12cf7283:;
  /* 12cf7283 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf7285 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf7287 jne 0x12cf725f */
  if (!C.zf) goto L_12cf725f;
L_12cf7289:;
  /* 12cf7289 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf728d jne 0x12cf72ad */
  if (!C.zf) goto L_12cf72ad;
  /* 12cf728f push 0x12d1c22c */
  push32((uint32_t)(0x12d1c22cu));
  /* 12cf7294 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf7296 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12cf7298 push 0x12d1c258 */
  push32((uint32_t)(0x12d1c258u));
  /* 12cf729d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf729f call 0x12cf3270 */
  push32(0x12cf72a4u); f_12cf3270();
  /* 12cf72a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf72a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf72aa jne 0x12cf72ad */
  if (!C.zf) goto L_12cf72ad;
  /* 12cf72ac int3  */
  x86_unimpl("int3 @ 0x12cf72ac");
L_12cf72ad:;
  /* 12cf72ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf72af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf72b1 jne 0x12cf7289 */
  if (!C.zf) goto L_12cf7289;
  /* 12cf72b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf72b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12cf72bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf72c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf72c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cf72c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf72c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf72cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cf72ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf72d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf72d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12cf72d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cf72da push ecx */
  push32((uint32_t)(ECX));
  /* 12cf72db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf72de push edx */
  push32((uint32_t)(EDX));
  /* 12cf72df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf72e2 push eax */
  push32((uint32_t)(EAX));
  /* 12cf72e3 call 0x12cfb140 */
  push32(0x12cf72e8u); f_12cfb140();
  /* 12cf72e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf72eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cf72ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf72f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf72f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf72f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf72fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cf72fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf7300 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7304 jl 0x12cf7328 */
  if ((C.sf!=C.of)) goto L_12cf7328;
  /* 12cf7306 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf7309 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf730b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cf730e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf7310 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf7316 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cf7319 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf731c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf731e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7321 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf7324 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cf7326 jmp 0x12cf7339 */
  goto L_12cf7339;
L_12cf7328:;
  /* 12cf7328 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf732b push edx */
  push32((uint32_t)(EDX));
  /* 12cf732c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf732e call 0x12cfaec0 */
  push32(0x12cf7333u); f_12cfaec0();
  /* 12cf7333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7336 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12cf7339:;
  /* 12cf7339 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf733c pop edi */
  EDI = (pop32());
  /* 12cf733d pop esi */
  ESI = (pop32());
  /* 12cf733e pop ebx */
  EBX = (pop32());
  /* 12cf733f mov esp, ebp */
  ESP = (EBP);
  /* 12cf7341 pop ebp */
  EBP = (pop32());
  /* 12cf7342 ret  */
  ESPCHK(0x12cf7250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x12cf7350 (47 bytes, 17 insns) */
void f_12cf7350(void) {
  FTRACE(0x12cf7350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7350 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7351 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7356 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12cf735a jb 0x12cf7370 */
  if (C.cf) goto L_12cf7370;
L_12cf735c:;
  /* 12cf735c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7362 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7367 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12cf7369 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf736e jae 0x12cf735c */
  if (!C.cf) goto L_12cf735c;
L_12cf7370:;
  /* 12cf7370 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7372 mov eax, esp */
  EAX = (ESP);
  /* 12cf7374 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12cf7376 mov esp, ecx */
  ESP = (ECX);
  /* 12cf7378 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf737a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf737d push eax */
  push32((uint32_t)(EAX));
  /* 12cf737e ret  */
  ESPCHK(0x12cf7350u, _esp0);
  ESP += 4; return;
}

/* FUN_10007380 @ 0x12cf7380 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12cf7380(void) {
  FTRACE(0x12cf7380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7380 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7381 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7386 push esi */
  push32((uint32_t)(ESI));
  /* 12cf7387 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf738b je 0x12cf7393 */
  if (C.zf) goto L_12cf7393;
  /* 12cf738d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7391 jne 0x12cf7398 */
  if (!C.zf) goto L_12cf7398;
L_12cf7393:;
  /* 12cf7393 jmp 0x12cf7568 */
  goto L_12cf7568;
L_12cf7398:;
  /* 12cf7398 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf739c je 0x12cf73b4 */
  if (C.zf) goto L_12cf73b4;
  /* 12cf739e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf73a2 je 0x12cf73b4 */
  if (C.zf) goto L_12cf73b4;
  /* 12cf73a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf73a8 je 0x12cf73b4 */
  if (C.zf) goto L_12cf73b4;
  /* 12cf73aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf73ae jne 0x12cf7491 */
  if (!C.zf) goto L_12cf7491;
L_12cf73b4:;
  /* 12cf73b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf73b6 call 0x12cf7bb0 */
  push32(0x12cf73bbu); f_12cf7bb0();
  /* 12cf73bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf73be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf73c2 je 0x12cf73ca */
  if (C.zf) goto L_12cf73ca;
  /* 12cf73c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf73c8 jne 0x12cf740f */
  if (!C.zf) goto L_12cf740f;
L_12cf73ca:;
  /* 12cf73ca cmp dword ptr [0x12d2068c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2068c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf73d1 jne 0x12cf740f */
  if (!C.zf) goto L_12cf740f;
  /* 12cf73d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf73d5 push 0x12cf75b0 */
  push32((uint32_t)(0x12cf75b0u));
  /* 12cf73da call dword ptr [0x12d2338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2338c))), 0x12cf73e0u);
  /* 12cf73e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf73e3 jne 0x12cf73f1 */
  if (!C.zf) goto L_12cf73f1;
  /* 12cf73e5 mov dword ptr [0x12d2068c], 1 */
  w32((uint32_t)(0x12d2068c), (0x1u));
  /* 12cf73ef jmp 0x12cf740f */
  goto L_12cf740f;
L_12cf73f1:;
  /* 12cf73f1 call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12cf73f7u);
  /* 12cf73f7 mov esi, eax */
  ESI = (EAX);
  /* 12cf73f9 call 0x12cfc090 */
  push32(0x12cf73feu); f_12cfc090();
  /* 12cf73fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12cf7400 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf7402 call 0x12cf7c50 */
  push32(0x12cf7407u); f_12cf7c50();
  /* 12cf7407 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf740a jmp 0x12cf7568 */
  goto L_12cf7568;
L_12cf740f:;
  /* 12cf740f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7412 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf7415 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7418 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf741b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cf741e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7422 ja 0x12cf7482 */
  if ((!C.cf&&!C.zf)) goto L_12cf7482;
  /* 12cf7424 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7427 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf7429 mov dl, byte ptr [eax + 0x12cf758f] */
  DL = (r8((uint32_t)(EAX + 0x12cf758f)));
  /* 12cf742f jmp dword ptr [edx*4 + 0x12cf757b] */
  switch (EDX) {
    case 0: goto L_12cf7436;
    case 1: goto L_12cf7470;
    case 2: goto L_12cf744a;
    case 3: goto L_12cf745d;
    case 4: goto L_12cf7482;
    default: x86_unimpl("switch@0x12cf742f out of table"); return;
  }
L_12cf7436:;
  /* 12cf7436 mov ecx, dword ptr [0x12d2067c] */
  ECX = (r32((uint32_t)(0x12d2067c)));
  /* 12cf743c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cf743f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7442 mov dword ptr [0x12d2067c], edx */
  w32((uint32_t)(0x12d2067c), (EDX));
  /* 12cf7448 jmp 0x12cf7482 */
  goto L_12cf7482;
L_12cf744a:;
  /* 12cf744a mov eax, dword ptr [0x12d20680] */
  EAX = (r32((uint32_t)(0x12d20680)));
  /* 12cf744f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf7452 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7455 mov dword ptr [0x12d20680], ecx */
  w32((uint32_t)(0x12d20680), (ECX));
  /* 12cf745b jmp 0x12cf7482 */
  goto L_12cf7482;
L_12cf745d:;
  /* 12cf745d mov edx, dword ptr [0x12d20684] */
  EDX = (r32((uint32_t)(0x12d20684)));
  /* 12cf7463 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cf7466 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7469 mov dword ptr [0x12d20684], eax */
  w32((uint32_t)(0x12d20684), (EAX));
  /* 12cf746e jmp 0x12cf7482 */
  goto L_12cf7482;
L_12cf7470:;
  /* 12cf7470 mov ecx, dword ptr [0x12d20688] */
  ECX = (r32((uint32_t)(0x12d20688)));
  /* 12cf7476 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cf7479 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf747c mov dword ptr [0x12d20688], edx */
  w32((uint32_t)(0x12d20688), (EDX));
L_12cf7482:;
  /* 12cf7482 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf7484 call 0x12cf7c50 */
  push32(0x12cf7489u); f_12cf7c50();
  /* 12cf7489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf748c jmp 0x12cf7563 */
  goto L_12cf7563;
L_12cf7491:;
  /* 12cf7491 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7495 je 0x12cf74a8 */
  if (C.zf) goto L_12cf74a8;
  /* 12cf7497 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf749b je 0x12cf74a8 */
  if (C.zf) goto L_12cf74a8;
  /* 12cf749d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf74a1 je 0x12cf74a8 */
  if (C.zf) goto L_12cf74a8;
  /* 12cf74a3 jmp 0x12cf7568 */
  goto L_12cf7568;
L_12cf74a8:;
  /* 12cf74a8 call 0x12cf3bf0 */
  push32(0x12cf74adu); f_12cf3bf0();
  /* 12cf74ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf74b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf74b3 cmp dword ptr [eax + 0x50], 0x12d1ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12d1ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf74ba jne 0x12cf7505 */
  if (!C.zf) goto L_12cf7505;
  /* 12cf74bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12cf74c1 push 0x12d1c264 */
  push32((uint32_t)(0x12d1c264u));
  /* 12cf74c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf74c8 mov ecx, dword ptr [0x12d1ec80] */
  ECX = (r32((uint32_t)(0x12d1ec80)));
  /* 12cf74ce push ecx */
  push32((uint32_t)(ECX));
  /* 12cf74cf call 0x12cf41b0 */
  push32(0x12cf74d4u); f_12cf41b0();
  /* 12cf74d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf74d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf74da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12cf74dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf74e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf74e4 je 0x12cf7503 */
  if (C.zf) goto L_12cf7503;
  /* 12cf74e6 mov ecx, dword ptr [0x12d1ec80] */
  ECX = (r32((uint32_t)(0x12d1ec80)));
  /* 12cf74ec push ecx */
  push32((uint32_t)(ECX));
  /* 12cf74ed push 0x12d1ec00 */
  push32((uint32_t)(0x12d1ec00u));
  /* 12cf74f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf74f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12cf74f8 push eax */
  push32((uint32_t)(EAX));
  /* 12cf74f9 call 0x12cfaa90 */
  push32(0x12cf74feu); f_12cfaa90();
  /* 12cf74fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7501 jmp 0x12cf7505 */
  goto L_12cf7505;
L_12cf7503:;
  /* 12cf7503 jmp 0x12cf7568 */
  goto L_12cf7568;
L_12cf7505:;
  /* 12cf7505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7508 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cf750b push edx */
  push32((uint32_t)(EDX));
  /* 12cf750c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf750f push eax */
  push32((uint32_t)(EAX));
  /* 12cf7510 call 0x12cf7890 */
  push32(0x12cf7515u); f_12cf7890();
  /* 12cf7515 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7518 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf751b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf751f jne 0x12cf7523 */
  if (!C.zf) goto L_12cf7523;
  /* 12cf7521 jmp 0x12cf7568 */
  goto L_12cf7568;
L_12cf7523:;
  /* 12cf7523 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7526 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf7529 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cf752c:;
  /* 12cf752c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf752f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf7532 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7535 jne 0x12cf7563 */
  if (!C.zf) goto L_12cf7563;
  /* 12cf7537 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf753a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf753d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cf7540 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7543 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7546 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cf7549 mov edx, dword ptr [0x12d1ec84] */
  EDX = (r32((uint32_t)(0x12d1ec84)));
  /* 12cf754f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf7552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7555 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12cf7558 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf755a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf755d jb 0x12cf7561 */
  if (C.cf) goto L_12cf7561;
  /* 12cf755f jmp 0x12cf7563 */
  goto L_12cf7563;
L_12cf7561:;
  /* 12cf7561 jmp 0x12cf752c */
  goto L_12cf752c;
L_12cf7563:;
  /* 12cf7563 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf7566 jmp 0x12cf7576 */
  goto L_12cf7576;
L_12cf7568:;
  /* 12cf7568 call 0x12cfc080 */
  push32(0x12cf756du); f_12cfc080();
  /* 12cf756d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12cf7573 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cf7576:;
  /* 12cf7576 pop esi */
  ESI = (pop32());
  /* 12cf7577 mov esp, ebp */
  ESP = (EBP);
  /* 12cf7579 pop ebp */
  EBP = (pop32());
  /* 12cf757a ret  */
  ESPCHK(0x12cf7380u, _esp0);
  ESP += 4; return;
}

/* FUN_100075b0 @ 0x12cf75b0 (146 bytes, 45 insns) */
void f_12cf75b0(void) {
  FTRACE(0x12cf75b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf75b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf75b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf75b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf75b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf75b8 call 0x12cf7bb0 */
  push32(0x12cf75bdu); f_12cf7bb0();
  /* 12cf75bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf75c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf75c4 jne 0x12cf75de */
  if (!C.zf) goto L_12cf75de;
  /* 12cf75c6 mov dword ptr [ebp - 8], 0x12d2067c */
  w32((uint32_t)(EBP + -0x8), (0x12d2067cu));
  /* 12cf75cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf75d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf75d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cf75d5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12cf75dc jmp 0x12cf75f4 */
  goto L_12cf75f4;
L_12cf75de:;
  /* 12cf75de mov dword ptr [ebp - 8], 0x12d20680 */
  w32((uint32_t)(EBP + -0x8), (0x12d20680u));
  /* 12cf75e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf75e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf75ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf75ed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12cf75f4:;
  /* 12cf75f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf75f8 jne 0x12cf7608 */
  if (!C.zf) goto L_12cf7608;
  /* 12cf75fa push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf75fc call 0x12cf7c50 */
  push32(0x12cf7601u); f_12cf7c50();
  /* 12cf7601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7606 jmp 0x12cf763c */
  goto L_12cf763c;
L_12cf7608:;
  /* 12cf7608 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf760c je 0x12cf762d */
  if (C.zf) goto L_12cf762d;
  /* 12cf760e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7611 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12cf7617 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf7619 call 0x12cf7c50 */
  push32(0x12cf761eu); f_12cf7c50();
  /* 12cf761e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7621 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7624 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7625 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12cf7628u);
  /* 12cf7628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf762b jmp 0x12cf7637 */
  goto L_12cf7637;
L_12cf762d:;
  /* 12cf762d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf762f call 0x12cf7c50 */
  push32(0x12cf7634u); f_12cf7c50();
  /* 12cf7634 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7637:;
  /* 12cf7637 mov eax, 1 */
  EAX = (0x1u);
L_12cf763c:;
  /* 12cf763c mov esp, ebp */
  ESP = (EBP);
  /* 12cf763e pop ebp */
  EBP = (pop32());
  /* 12cf763f ret 4 */
  ESPCHK(0x12cf75b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007650 @ 0x12cf7650 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12cf7650(void) {
  FTRACE(0x12cf7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7650 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7651 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7653 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7656 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cf765d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7660 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cf7663 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf7666 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7669 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cf766c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7670 ja 0x12cf771e */
  if ((!C.cf&&!C.zf)) goto L_12cf771e;
  /* 12cf7676 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf7679 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf767b mov dl, byte ptr [eax + 0x12cf7872] */
  DL = (r8((uint32_t)(EAX + 0x12cf7872)));
  /* 12cf7681 jmp dword ptr [edx*4 + 0x12cf785a] */
  switch (EDX) {
    case 0: goto L_12cf7688;
    case 1: goto L_12cf76f3;
    case 2: goto L_12cf76d9;
    case 3: goto L_12cf76a5;
    case 4: goto L_12cf76bf;
    case 5: goto L_12cf771e;
    default: x86_unimpl("switch@0x12cf7681 out of table"); return;
  }
L_12cf7688:;
  /* 12cf7688 mov dword ptr [ebp - 0x18], 0x12d2067c */
  w32((uint32_t)(EBP + -0x18), (0x12d2067cu));
  /* 12cf768f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf7692 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf7694 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cf7697 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf769a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf769d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf76a0 jmp 0x12cf7726 */
  goto L_12cf7726;
L_12cf76a5:;
  /* 12cf76a5 mov dword ptr [ebp - 0x18], 0x12d20680 */
  w32((uint32_t)(EBP + -0x18), (0x12d20680u));
  /* 12cf76ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf76af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf76b1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cf76b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf76b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf76ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf76bd jmp 0x12cf7726 */
  goto L_12cf7726;
L_12cf76bf:;
  /* 12cf76bf mov dword ptr [ebp - 0x18], 0x12d20684 */
  w32((uint32_t)(EBP + -0x18), (0x12d20684u));
  /* 12cf76c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf76c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf76cb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cf76ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf76d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf76d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf76d7 jmp 0x12cf7726 */
  goto L_12cf7726;
L_12cf76d9:;
  /* 12cf76d9 mov dword ptr [ebp - 0x18], 0x12d20688 */
  w32((uint32_t)(EBP + -0x18), (0x12d20688u));
  /* 12cf76e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf76e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf76e5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cf76e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf76eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf76ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf76f1 jmp 0x12cf7726 */
  goto L_12cf7726;
L_12cf76f3:;
  /* 12cf76f3 call 0x12cf3bf0 */
  push32(0x12cf76f8u); f_12cf3bf0();
  /* 12cf76f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf76fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf76fe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cf7701 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7705 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7706 call 0x12cf7890 */
  push32(0x12cf770bu); f_12cf7890();
  /* 12cf770b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf770e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7711 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf7714 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf7717 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf7719 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cf771c jmp 0x12cf7726 */
  goto L_12cf7726;
L_12cf771e:;
  /* 12cf771e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7721 jmp 0x12cf7856 */
  goto L_12cf7856;
L_12cf7726:;
  /* 12cf7726 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf772a je 0x12cf7736 */
  if (C.zf) goto L_12cf7736;
  /* 12cf772c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf772e call 0x12cf7bb0 */
  push32(0x12cf7733u); f_12cf7bb0();
  /* 12cf7733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7736:;
  /* 12cf7736 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf773a jne 0x12cf7753 */
  if (!C.zf) goto L_12cf7753;
  /* 12cf773c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7740 je 0x12cf774c */
  if (C.zf) goto L_12cf774c;
  /* 12cf7742 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf7744 call 0x12cf7c50 */
  push32(0x12cf7749u); f_12cf7c50();
  /* 12cf7749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf774c:;
  /* 12cf774c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf774e jmp 0x12cf7856 */
  goto L_12cf7856;
L_12cf7753:;
  /* 12cf7753 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7757 jne 0x12cf7770 */
  if (!C.zf) goto L_12cf7770;
  /* 12cf7759 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf775d je 0x12cf7769 */
  if (C.zf) goto L_12cf7769;
  /* 12cf775f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf7761 call 0x12cf7c50 */
  push32(0x12cf7766u); f_12cf7c50();
  /* 12cf7766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7769:;
  /* 12cf7769 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cf776b call 0x12cf3970 */
  push32(0x12cf7770u); f_12cf3970();
L_12cf7770:;
  /* 12cf7770 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7774 je 0x12cf7782 */
  if (C.zf) goto L_12cf7782;
  /* 12cf7776 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf777a je 0x12cf7782 */
  if (C.zf) goto L_12cf7782;
  /* 12cf777c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7780 jne 0x12cf77ae */
  if (!C.zf) goto L_12cf77ae;
L_12cf7782:;
  /* 12cf7782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7785 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12cf7788 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cf778b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf778e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12cf7795 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7799 jne 0x12cf77ae */
  if (!C.zf) goto L_12cf77ae;
  /* 12cf779b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf779e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12cf77a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cf77a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf77a7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12cf77ae:;
  /* 12cf77ae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf77b2 jne 0x12cf77f0 */
  if (!C.zf) goto L_12cf77f0;
  /* 12cf77b4 mov eax, dword ptr [0x12d1ec78] */
  EAX = (r32((uint32_t)(0x12d1ec78)));
  /* 12cf77b9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf77bc jmp 0x12cf77c7 */
  goto L_12cf77c7;
L_12cf77be:;
  /* 12cf77be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf77c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf77c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cf77c7:;
  /* 12cf77c7 mov edx, dword ptr [0x12d1ec78] */
  EDX = (r32((uint32_t)(0x12d1ec78)));
  /* 12cf77cd add edx, dword ptr [0x12d1ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d1ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf77d3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf77d6 jge 0x12cf77ee */
  if ((C.sf==C.of)) goto L_12cf77ee;
  /* 12cf77d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf77db imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf77de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf77e1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cf77e4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12cf77ec jmp 0x12cf77be */
  goto L_12cf77be;
L_12cf77ee:;
  /* 12cf77ee jmp 0x12cf77f9 */
  goto L_12cf77f9;
L_12cf77f0:;
  /* 12cf77f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf77f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12cf77f9:;
  /* 12cf77f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf77fd je 0x12cf7809 */
  if (C.zf) goto L_12cf7809;
  /* 12cf77ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12cf7801 call 0x12cf7c50 */
  push32(0x12cf7806u); f_12cf7c50();
  /* 12cf7806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7809:;
  /* 12cf7809 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf780d jne 0x12cf7820 */
  if (!C.zf) goto L_12cf7820;
  /* 12cf780f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7812 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12cf7815 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7816 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cf7818 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12cf781bu);
  /* 12cf781b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf781e jmp 0x12cf782a */
  goto L_12cf782a;
L_12cf7820:;
  /* 12cf7820 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7823 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7824 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12cf7827u);
  /* 12cf7827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf782a:;
  /* 12cf782a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf782e je 0x12cf783c */
  if (C.zf) goto L_12cf783c;
  /* 12cf7830 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7834 je 0x12cf783c */
  if (C.zf) goto L_12cf783c;
  /* 12cf7836 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf783a jne 0x12cf7854 */
  if (!C.zf) goto L_12cf7854;
L_12cf783c:;
  /* 12cf783c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf783f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf7842 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12cf7845 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7849 jne 0x12cf7854 */
  if (!C.zf) goto L_12cf7854;
  /* 12cf784b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf784e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7851 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12cf7854:;
  /* 12cf7854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf7856:;
  /* 12cf7856 mov esp, ebp */
  ESP = (EBP);
  /* 12cf7858 pop ebp */
  EBP = (pop32());
  /* 12cf7859 ret  */
  ESPCHK(0x12cf7650u, _esp0);
  ESP += 4; return;
}

/* FUN_10007890 @ 0x12cf7890 (91 bytes, 35 insns) */
void f_12cf7890(void) {
  FTRACE(0x12cf7890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7890 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7891 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7893 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7894 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7897 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf789a:;
  /* 12cf789a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf789d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf78a0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf78a3 je 0x12cf78c3 */
  if (C.zf) goto L_12cf78c3;
  /* 12cf78a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf78a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf78ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf78ae mov ecx, dword ptr [0x12d1ec84] */
  ECX = (r32((uint32_t)(0x12d1ec84)));
  /* 12cf78b4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf78b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf78ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf78bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf78bf jae 0x12cf78c3 */
  if (!C.cf) goto L_12cf78c3;
  /* 12cf78c1 jmp 0x12cf789a */
  goto L_12cf789a;
L_12cf78c3:;
  /* 12cf78c3 mov eax, dword ptr [0x12d1ec84] */
  EAX = (r32((uint32_t)(0x12d1ec84)));
  /* 12cf78c8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf78cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf78ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf78d0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf78d3 jae 0x12cf78e5 */
  if (!C.cf) goto L_12cf78e5;
  /* 12cf78d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf78d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf78db cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf78de jne 0x12cf78e5 */
  if (!C.zf) goto L_12cf78e5;
  /* 12cf78e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf78e3 jmp 0x12cf78e7 */
  goto L_12cf78e7;
L_12cf78e5:;
  /* 12cf78e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf78e7:;
  /* 12cf78e7 mov esp, ebp */
  ESP = (EBP);
  /* 12cf78e9 pop ebp */
  EBP = (pop32());
  /* 12cf78ea ret  */
  ESPCHK(0x12cf7890u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x12cf78f0 (13 bytes, 6 insns) */
void f_12cf78f0(void) {
  FTRACE(0x12cf78f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf78f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf78f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf78f3 call 0x12cf3bf0 */
  push32(0x12cf78f8u); f_12cf3bf0();
  /* 12cf78f8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf78fb pop ebp */
  EBP = (pop32());
  /* 12cf78fc ret  */
  ESPCHK(0x12cf78f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x12cf7900 (13 bytes, 6 insns) */
void f_12cf7900(void) {
  FTRACE(0x12cf7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7900 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7901 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7903 call 0x12cf3bf0 */
  push32(0x12cf7908u); f_12cf3bf0();
  /* 12cf7908 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf790b pop ebp */
  EBP = (pop32());
  /* 12cf790c ret  */
  ESPCHK(0x12cf7900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x12cf7910 (187 bytes, 54 insns) */
void f_12cf7910(void) {
  FTRACE(0x12cf7910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7910 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7911 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7913 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7916 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cf791d cmp dword ptr [0x12d20690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7924 jne 0x12cf7983 */
  if (!C.zf) goto L_12cf7983;
  /* 12cf7926 push 0x12d1b690 */
  push32((uint32_t)(0x12d1b690u));
  /* 12cf792b call dword ptr [0x12d23318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23318))), 0x12cf7931u);
  /* 12cf7931 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf7934 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7938 je 0x12cf7957 */
  if (C.zf) goto L_12cf7957;
  /* 12cf793a push 0x12d1c294 */
  push32((uint32_t)(0x12d1c294u));
  /* 12cf793f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7942 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7943 call dword ptr [0x12d23314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23314))), 0x12cf7949u);
  /* 12cf7949 mov dword ptr [0x12d20690], eax */
  w32((uint32_t)(0x12d20690), (EAX));
  /* 12cf794e cmp dword ptr [0x12d20690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7955 jne 0x12cf795b */
  if (!C.zf) goto L_12cf795b;
L_12cf7957:;
  /* 12cf7957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7959 jmp 0x12cf79c7 */
  goto L_12cf79c7;
L_12cf795b:;
  /* 12cf795b push 0x12d1c284 */
  push32((uint32_t)(0x12d1c284u));
  /* 12cf7960 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7963 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7964 call dword ptr [0x12d23314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23314))), 0x12cf796au);
  /* 12cf796a mov dword ptr [0x12d20694], eax */
  w32((uint32_t)(0x12d20694), (EAX));
  /* 12cf796f push 0x12d1c270 */
  push32((uint32_t)(0x12d1c270u));
  /* 12cf7974 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7977 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7978 call dword ptr [0x12d23314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23314))), 0x12cf797eu);
  /* 12cf797e mov dword ptr [0x12d20698], eax */
  w32((uint32_t)(0x12d20698), (EAX));
L_12cf7983:;
  /* 12cf7983 cmp dword ptr [0x12d20694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf798a je 0x12cf7995 */
  if (C.zf) goto L_12cf7995;
  /* 12cf798c call dword ptr [0x12d20694] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d20694))), 0x12cf7992u);
  /* 12cf7992 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf7995:;
  /* 12cf7995 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7999 je 0x12cf79b1 */
  if (C.zf) goto L_12cf79b1;
  /* 12cf799b cmp dword ptr [0x12d20698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf79a2 je 0x12cf79b1 */
  if (C.zf) goto L_12cf79b1;
  /* 12cf79a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf79a7 push eax */
  push32((uint32_t)(EAX));
  /* 12cf79a8 call dword ptr [0x12d20698] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d20698))), 0x12cf79aeu);
  /* 12cf79ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf79b1:;
  /* 12cf79b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf79b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf79b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf79b8 push edx */
  push32((uint32_t)(EDX));
  /* 12cf79b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf79bc push eax */
  push32((uint32_t)(EAX));
  /* 12cf79bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf79c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf79c1 call dword ptr [0x12d20690] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d20690))), 0x12cf79c7u);
L_12cf79c7:;
  /* 12cf79c7 mov esp, ebp */
  ESP = (EBP);
  /* 12cf79c9 pop ebp */
  EBP = (pop32());
  /* 12cf79ca ret  */
  ESPCHK(0x12cf7910u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12cf79d0 (254 bytes, 109 insns) */
void f_12cf79d0(void) {
  FTRACE(0x12cf79d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf79d0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cf79d4 push edi */
  push32((uint32_t)(EDI));
  /* 12cf79d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf79d7 je 0x12cf7a53 */
  if (C.zf) goto L_12cf7a53;
  /* 12cf79d9 push esi */
  push32((uint32_t)(ESI));
  /* 12cf79da push ebx */
  push32((uint32_t)(EBX));
  /* 12cf79db mov ebx, ecx */
  EBX = (ECX);
  /* 12cf79dd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12cf79e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12cf79e7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12cf79eb jne 0x12cf79f4 */
  if (!C.zf) goto L_12cf79f4;
  /* 12cf79ed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cf79f0 jne 0x12cf7a61 */
  if (!C.zf) goto L_12cf7a61;
  /* 12cf79f2 jmp 0x12cf7a15 */
  goto L_12cf7a15;
L_12cf79f4:;
  /* 12cf79f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cf79f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cf79f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cf79f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cf79fa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cf79fb je 0x12cf7a22 */
  if (C.zf) goto L_12cf7a22;
  /* 12cf79fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cf79ff je 0x12cf7a2a */
  if (C.zf) goto L_12cf7a2a;
  /* 12cf7a01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12cf7a07 jne 0x12cf79f4 */
  if (!C.zf) goto L_12cf79f4;
  /* 12cf7a09 mov ebx, ecx */
  EBX = (ECX);
  /* 12cf7a0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cf7a0e jne 0x12cf7a61 */
  if (!C.zf) goto L_12cf7a61;
L_12cf7a10:;
  /* 12cf7a10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12cf7a13 je 0x12cf7a22 */
  if (C.zf) goto L_12cf7a22;
L_12cf7a15:;
  /* 12cf7a15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cf7a17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cf7a18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cf7a1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cf7a1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cf7a1d je 0x12cf7a4e */
  if (C.zf) goto L_12cf7a4e;
  /* 12cf7a1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12cf7a20 jne 0x12cf7a15 */
  if (!C.zf) goto L_12cf7a15;
L_12cf7a22:;
  /* 12cf7a22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cf7a26 pop ebx */
  EBX = (pop32());
  /* 12cf7a27 pop esi */
  ESI = (pop32());
  /* 12cf7a28 pop edi */
  EDI = (pop32());
  /* 12cf7a29 ret  */
  ESPCHK(0x12cf79d0u, _esp0);
  ESP += 4; return;
L_12cf7a2a:;
  /* 12cf7a2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cf7a30 je 0x12cf7a44 */
  if (C.zf) goto L_12cf7a44;
L_12cf7a32:;
  /* 12cf7a32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cf7a34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cf7a35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cf7a36 je 0x12cf7ac6 */
  if (C.zf) goto L_12cf7ac6;
  /* 12cf7a3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cf7a42 jne 0x12cf7a32 */
  if (!C.zf) goto L_12cf7a32;
L_12cf7a44:;
  /* 12cf7a44 mov ebx, ecx */
  EBX = (ECX);
  /* 12cf7a46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cf7a49 jne 0x12cf7ab7 */
  if (!C.zf) goto L_12cf7ab7;
L_12cf7a4b:;
  /* 12cf7a4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cf7a4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12cf7a4e:;
  /* 12cf7a4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12cf7a4f jne 0x12cf7a4b */
  if (!C.zf) goto L_12cf7a4b;
  /* 12cf7a51 pop ebx */
  EBX = (pop32());
  /* 12cf7a52 pop esi */
  ESI = (pop32());
L_12cf7a53:;
  /* 12cf7a53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cf7a57 pop edi */
  EDI = (pop32());
  /* 12cf7a58 ret  */
  ESPCHK(0x12cf79d0u, _esp0);
  ESP += 4; return;
L_12cf7a59:;
  /* 12cf7a59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cf7a5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7a5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cf7a5f je 0x12cf7a10 */
  if (C.zf) goto L_12cf7a10;
L_12cf7a61:;
  /* 12cf7a61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12cf7a66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12cf7a68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7a6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7a6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7a6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12cf7a71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7a74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12cf7a79 je 0x12cf7a59 */
  if (C.zf) goto L_12cf7a59;
  /* 12cf7a7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12cf7a7d je 0x12cf7aab */
  if (C.zf) goto L_12cf7aab;
  /* 12cf7a7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12cf7a81 je 0x12cf7aa1 */
  if (C.zf) goto L_12cf7aa1;
  /* 12cf7a83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12cf7a89 je 0x12cf7a97 */
  if (C.zf) goto L_12cf7a97;
  /* 12cf7a8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12cf7a91 jne 0x12cf7a59 */
  if (!C.zf) goto L_12cf7a59;
  /* 12cf7a93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cf7a95 jmp 0x12cf7aaf */
  goto L_12cf7aaf;
L_12cf7a97:;
  /* 12cf7a97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf7a9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cf7a9f jmp 0x12cf7aaf */
  goto L_12cf7aaf;
L_12cf7aa1:;
  /* 12cf7aa1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf7aa7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cf7aa9 jmp 0x12cf7aaf */
  goto L_12cf7aaf;
L_12cf7aab:;
  /* 12cf7aab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf7aad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12cf7aaf:;
  /* 12cf7aaf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7ab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7ab4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cf7ab5 je 0x12cf7ac1 */
  if (C.zf) goto L_12cf7ac1;
L_12cf7ab7:;
  /* 12cf7ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf7ab9:;
  /* 12cf7ab9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12cf7abb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7abe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cf7abf jne 0x12cf7ab9 */
  if (!C.zf) goto L_12cf7ab9;
L_12cf7ac1:;
  /* 12cf7ac1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12cf7ac4 jne 0x12cf7a4b */
  if (!C.zf) goto L_12cf7a4b;
L_12cf7ac6:;
  /* 12cf7ac6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cf7aca pop ebx */
  EBX = (pop32());
  /* 12cf7acb pop esi */
  ESI = (pop32());
  /* 12cf7acc pop edi */
  EDI = (pop32());
  /* 12cf7acd ret  */
  ESPCHK(0x12cf79d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x12cf7ad0 (55 bytes, 16 insns) */
void f_12cf7ad0(void) {
  FTRACE(0x12cf7ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7ad3 mov eax, dword ptr [0x12d1eb84] */
  EAX = (r32((uint32_t)(0x12d1eb84)));
  /* 12cf7ad8 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7ad9 call dword ptr [0x12d23390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23390))), 0x12cf7adfu);
  /* 12cf7adf mov ecx, dword ptr [0x12d1eb74] */
  ECX = (r32((uint32_t)(0x12d1eb74)));
  /* 12cf7ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7ae6 call dword ptr [0x12d23390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23390))), 0x12cf7aecu);
  /* 12cf7aec mov edx, dword ptr [0x12d1eb64] */
  EDX = (r32((uint32_t)(0x12d1eb64)));
  /* 12cf7af2 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7af3 call dword ptr [0x12d23390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23390))), 0x12cf7af9u);
  /* 12cf7af9 mov eax, dword ptr [0x12d1eb44] */
  EAX = (r32((uint32_t)(0x12d1eb44)));
  /* 12cf7afe push eax */
  push32((uint32_t)(EAX));
  /* 12cf7aff call dword ptr [0x12d23390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23390))), 0x12cf7b05u);
  /* 12cf7b05 pop ebp */
  EBP = (pop32());
  /* 12cf7b06 ret  */
  ESPCHK(0x12cf7ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x12cf7b10 (159 bytes, 47 insns) */
void f_12cf7b10(void) {
  FTRACE(0x12cf7b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7b11 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7b14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cf7b1b jmp 0x12cf7b26 */
  goto L_12cf7b26;
L_12cf7b1d:;
  /* 12cf7b1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7b20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7b23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf7b26:;
  /* 12cf7b26 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7b2a jge 0x12cf7b79 */
  if ((C.sf==C.of)) goto L_12cf7b79;
  /* 12cf7b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7b2f cmp dword ptr [ecx*4 + 0x12d1eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d1eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7b37 je 0x12cf7b77 */
  if (C.zf) goto L_12cf7b77;
  /* 12cf7b39 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7b3d je 0x12cf7b77 */
  if (C.zf) goto L_12cf7b77;
  /* 12cf7b3f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7b43 je 0x12cf7b77 */
  if (C.zf) goto L_12cf7b77;
  /* 12cf7b45 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7b49 je 0x12cf7b77 */
  if (C.zf) goto L_12cf7b77;
  /* 12cf7b4b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7b4f je 0x12cf7b77 */
  if (C.zf) goto L_12cf7b77;
  /* 12cf7b51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7b54 mov eax, dword ptr [edx*4 + 0x12d1eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d1eb40)));
  /* 12cf7b5b push eax */
  push32((uint32_t)(EAX));
  /* 12cf7b5c call dword ptr [0x12d23358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23358))), 0x12cf7b62u);
  /* 12cf7b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf7b64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7b67 mov edx, dword ptr [ecx*4 + 0x12d1eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1eb40)));
  /* 12cf7b6e push edx */
  push32((uint32_t)(EDX));
  /* 12cf7b6f call 0x12cf4c40 */
  push32(0x12cf7b74u); f_12cf4c40();
  /* 12cf7b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7b77:;
  /* 12cf7b77 jmp 0x12cf7b1d */
  goto L_12cf7b1d;
L_12cf7b79:;
  /* 12cf7b79 mov eax, dword ptr [0x12d1eb64] */
  EAX = (r32((uint32_t)(0x12d1eb64)));
  /* 12cf7b7e push eax */
  push32((uint32_t)(EAX));
  /* 12cf7b7f call dword ptr [0x12d23358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23358))), 0x12cf7b85u);
  /* 12cf7b85 mov ecx, dword ptr [0x12d1eb74] */
  ECX = (r32((uint32_t)(0x12d1eb74)));
  /* 12cf7b8b push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7b8c call dword ptr [0x12d23358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23358))), 0x12cf7b92u);
  /* 12cf7b92 mov edx, dword ptr [0x12d1eb84] */
  EDX = (r32((uint32_t)(0x12d1eb84)));
  /* 12cf7b98 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7b99 call dword ptr [0x12d23358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23358))), 0x12cf7b9fu);
  /* 12cf7b9f mov eax, dword ptr [0x12d1eb44] */
  EAX = (r32((uint32_t)(0x12d1eb44)));
  /* 12cf7ba4 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7ba5 call dword ptr [0x12d23358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23358))), 0x12cf7babu);
  /* 12cf7bab mov esp, ebp */
  ESP = (EBP);
  /* 12cf7bad pop ebp */
  EBP = (pop32());
  /* 12cf7bae ret  */
  ESPCHK(0x12cf7b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x12cf7bb0 (151 bytes, 46 insns) */
void f_12cf7bb0(void) {
  FTRACE(0x12cf7bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7bb7 cmp dword ptr [eax*4 + 0x12d1eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12d1eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7bbf jne 0x12cf7c32 */
  if (!C.zf) goto L_12cf7c32;
  /* 12cf7bc1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12cf7bc6 push 0x12d1c2a0 */
  push32((uint32_t)(0x12d1c2a0u));
  /* 12cf7bcb push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf7bcd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12cf7bcf call 0x12cf41b0 */
  push32(0x12cf7bd4u); f_12cf41b0();
  /* 12cf7bd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7bd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf7bda cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7bde jne 0x12cf7bea */
  if (!C.zf) goto L_12cf7bea;
  /* 12cf7be0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cf7be2 call 0x12cf3120 */
  push32(0x12cf7be7u); f_12cf3120();
  /* 12cf7be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7bea:;
  /* 12cf7bea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cf7bec call 0x12cf7bb0 */
  push32(0x12cf7bf1u); f_12cf7bb0();
  /* 12cf7bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7bf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7bf7 cmp dword ptr [ecx*4 + 0x12d1eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d1eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7bff jne 0x12cf7c1a */
  if (!C.zf) goto L_12cf7c1a;
  /* 12cf7c01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7c04 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7c05 call dword ptr [0x12d23390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23390))), 0x12cf7c0bu);
  /* 12cf7c0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7c11 mov dword ptr [eax*4 + 0x12d1eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12d1eb40), (ECX));
  /* 12cf7c18 jmp 0x12cf7c28 */
  goto L_12cf7c28;
L_12cf7c1a:;
  /* 12cf7c1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cf7c1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7c1f push edx */
  push32((uint32_t)(EDX));
  /* 12cf7c20 call 0x12cf4c40 */
  push32(0x12cf7c25u); f_12cf4c40();
  /* 12cf7c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7c28:;
  /* 12cf7c28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cf7c2a call 0x12cf7c50 */
  push32(0x12cf7c2fu); f_12cf7c50();
  /* 12cf7c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7c32:;
  /* 12cf7c32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7c35 mov ecx, dword ptr [eax*4 + 0x12d1eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d1eb40)));
  /* 12cf7c3c push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7c3d call dword ptr [0x12d23394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23394))), 0x12cf7c43u);
  /* 12cf7c43 mov esp, ebp */
  ESP = (EBP);
  /* 12cf7c45 pop ebp */
  EBP = (pop32());
  /* 12cf7c46 ret  */
  ESPCHK(0x12cf7bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x12cf7c50 (22 bytes, 8 insns) */
void f_12cf7c50(void) {
  FTRACE(0x12cf7c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7c51 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7c56 mov ecx, dword ptr [eax*4 + 0x12d1eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d1eb40)));
  /* 12cf7c5d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7c5e call dword ptr [0x12d23398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23398))), 0x12cf7c64u);
  /* 12cf7c64 pop ebp */
  EBP = (pop32());
  /* 12cf7c65 ret  */
  ESPCHK(0x12cf7c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x12cf7c70 (26 bytes, 10 insns) */
void f_12cf7c70(void) {
  FTRACE(0x12cf7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7c71 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7c73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7c76 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf7c79 call dword ptr [0x12d232f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232f4))), 0x12cf7c7fu);
  /* 12cf7c7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cf7c84 call dword ptr [0x12d23324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23324))), 0x12cf7c8au);
  /* 12cf7c8a pop ebp */
  EBP = (pop32());
  /* 12cf7c8b ret  */
  ESPCHK(0x12cf7c70u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12cf7c90 (446 bytes, 130 insns) */
void f_12cf7c90(void) {
  FTRACE(0x12cf7c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7c91 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7c93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf7c96 call 0x12cf3bf0 */
  push32(0x12cf7c9bu); f_12cf3bf0();
  /* 12cf7c9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf7c9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7ca1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12cf7ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7ca8 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7ca9 call 0x12cf7e50 */
  push32(0x12cf7caeu); f_12cf7e50();
  /* 12cf7cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7cb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf7cb4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7cb8 je 0x12cf7cc3 */
  if (C.zf) goto L_12cf7cc3;
  /* 12cf7cba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7cbd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7cc1 jne 0x12cf7cd2 */
  if (!C.zf) goto L_12cf7cd2;
L_12cf7cc3:;
  /* 12cf7cc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7cc7 call dword ptr [0x12d232f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232f0))), 0x12cf7ccdu);
  /* 12cf7ccd jmp 0x12cf7e4a */
  goto L_12cf7e4a;
L_12cf7cd2:;
  /* 12cf7cd2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7cd5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7cd9 jne 0x12cf7cef */
  if (!C.zf) goto L_12cf7cef;
  /* 12cf7cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7cde mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12cf7ce5 mov eax, 1 */
  EAX = (0x1u);
  /* 12cf7cea jmp 0x12cf7e4a */
  goto L_12cf7e4a;
L_12cf7cef:;
  /* 12cf7cef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7cf2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7cf6 jne 0x12cf7d00 */
  if (!C.zf) goto L_12cf7d00;
  /* 12cf7cf8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7cfb jmp 0x12cf7e4a */
  goto L_12cf7e4a;
L_12cf7d00:;
  /* 12cf7d00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7d03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cf7d06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf7d09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7d0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12cf7d0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cf7d12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7d15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7d18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12cf7d1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7d1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7d22 jne 0x12cf7e27 */
  if (!C.zf) goto L_12cf7e27;
  /* 12cf7d28 mov eax, dword ptr [0x12d1ec78] */
  EAX = (r32((uint32_t)(0x12d1ec78)));
  /* 12cf7d2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cf7d30 jmp 0x12cf7d3b */
  goto L_12cf7d3b;
L_12cf7d32:;
  /* 12cf7d32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf7d35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7d38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12cf7d3b:;
  /* 12cf7d3b mov edx, dword ptr [0x12d1ec78] */
  EDX = (r32((uint32_t)(0x12d1ec78)));
  /* 12cf7d41 add edx, dword ptr [0x12d1ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d1ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7d47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7d4a jge 0x12cf7d62 */
  if ((C.sf==C.of)) goto L_12cf7d62;
  /* 12cf7d4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf7d4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf7d52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7d55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cf7d58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12cf7d60 jmp 0x12cf7d32 */
  goto L_12cf7d32;
L_12cf7d62:;
  /* 12cf7d62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7d65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12cf7d68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cf7d6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7d6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7d74 jne 0x12cf7d85 */
  if (!C.zf) goto L_12cf7d85;
  /* 12cf7d76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7d79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12cf7d80 jmp 0x12cf7e0d */
  goto L_12cf7e0d;
L_12cf7d85:;
  /* 12cf7d85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7d88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7d8e jne 0x12cf7d9c */
  if (!C.zf) goto L_12cf7d9c;
  /* 12cf7d90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7d93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12cf7d9a jmp 0x12cf7e0d */
  goto L_12cf7e0d;
L_12cf7d9c:;
  /* 12cf7d9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7d9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7da5 jne 0x12cf7db3 */
  if (!C.zf) goto L_12cf7db3;
  /* 12cf7da7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7daa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12cf7db1 jmp 0x12cf7e0d */
  goto L_12cf7e0d;
L_12cf7db3:;
  /* 12cf7db3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7db6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7dbc jne 0x12cf7dca */
  if (!C.zf) goto L_12cf7dca;
  /* 12cf7dbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7dc1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12cf7dc8 jmp 0x12cf7e0d */
  goto L_12cf7e0d;
L_12cf7dca:;
  /* 12cf7dca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7dcd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7dd3 jne 0x12cf7de1 */
  if (!C.zf) goto L_12cf7de1;
  /* 12cf7dd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7dd8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12cf7ddf jmp 0x12cf7e0d */
  goto L_12cf7e0d;
L_12cf7de1:;
  /* 12cf7de1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7de4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7dea jne 0x12cf7df8 */
  if (!C.zf) goto L_12cf7df8;
  /* 12cf7dec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7def mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12cf7df6 jmp 0x12cf7e0d */
  goto L_12cf7e0d;
L_12cf7df8:;
  /* 12cf7df8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7dfb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7e01 jne 0x12cf7e0d */
  if (!C.zf) goto L_12cf7e0d;
  /* 12cf7e03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7e06 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12cf7e0d:;
  /* 12cf7e0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7e10 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12cf7e13 push edx */
  push32((uint32_t)(EDX));
  /* 12cf7e14 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cf7e16 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12cf7e19u);
  /* 12cf7e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7e1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7e1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf7e22 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12cf7e25 jmp 0x12cf7e3e */
  goto L_12cf7e3e;
L_12cf7e27:;
  /* 12cf7e27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7e2a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12cf7e31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf7e34 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf7e37 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7e38 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12cf7e3bu);
  /* 12cf7e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf7e3e:;
  /* 12cf7e3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf7e41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf7e44 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12cf7e47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cf7e4a:;
  /* 12cf7e4a mov esp, ebp */
  ESP = (EBP);
  /* 12cf7e4c pop ebp */
  EBP = (pop32());
  /* 12cf7e4d ret  */
  ESPCHK(0x12cf7c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x12cf7e50 (89 bytes, 35 insns) */
void f_12cf7e50(void) {
  FTRACE(0x12cf7e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7e51 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7e54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7e57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cf7e5a:;
  /* 12cf7e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7e5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf7e5f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7e62 je 0x12cf7e82 */
  if (C.zf) goto L_12cf7e82;
  /* 12cf7e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7e67 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7e6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf7e6d mov ecx, dword ptr [0x12d1ec84] */
  ECX = (r32((uint32_t)(0x12d1ec84)));
  /* 12cf7e73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf7e76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7e79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7e7b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7e7e jae 0x12cf7e82 */
  if (!C.cf) goto L_12cf7e82;
  /* 12cf7e80 jmp 0x12cf7e5a */
  goto L_12cf7e5a;
L_12cf7e82:;
  /* 12cf7e82 mov eax, dword ptr [0x12d1ec84] */
  EAX = (r32((uint32_t)(0x12d1ec84)));
  /* 12cf7e87 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf7e8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf7e8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7e8f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7e92 jae 0x12cf7e9e */
  if (!C.cf) goto L_12cf7e9e;
  /* 12cf7e94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7e97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf7e99 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7e9c je 0x12cf7ea2 */
  if (C.zf) goto L_12cf7ea2;
L_12cf7e9e:;
  /* 12cf7e9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7ea0 jmp 0x12cf7ea5 */
  goto L_12cf7ea5;
L_12cf7ea2:;
  /* 12cf7ea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cf7ea5:;
  /* 12cf7ea5 mov esp, ebp */
  ESP = (EBP);
  /* 12cf7ea7 pop ebp */
  EBP = (pop32());
  /* 12cf7ea8 ret  */
  ESPCHK(0x12cf7e50u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12cf7eb0 (48 bytes, 17 insns) */
void f_12cf7eb0(void) {
  FTRACE(0x12cf7eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7eb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf7eb6 call 0x12cf7bb0 */
  push32(0x12cf7ebbu); f_12cf7bb0();
  /* 12cf7ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7ebe mov eax, dword ptr [0x12d20704] */
  EAX = (r32((uint32_t)(0x12d20704)));
  /* 12cf7ec3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf7ec6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7ec9 mov dword ptr [0x12d20704], ecx */
  w32((uint32_t)(0x12d20704), (ECX));
  /* 12cf7ecf push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf7ed1 call 0x12cf7c50 */
  push32(0x12cf7ed6u); f_12cf7c50();
  /* 12cf7ed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7ed9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7edc mov esp, ebp */
  ESP = (EBP);
  /* 12cf7ede pop ebp */
  EBP = (pop32());
  /* 12cf7edf ret  */
  ESPCHK(0x12cf7eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee0 @ 0x12cf7ee0 (10 bytes, 5 insns) */
void f_12cf7ee0(void) {
  FTRACE(0x12cf7ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7ee3 mov eax, dword ptr [0x12d20704] */
  EAX = (r32((uint32_t)(0x12d20704)));
  /* 12cf7ee8 pop ebp */
  EBP = (pop32());
  /* 12cf7ee9 ret  */
  ESPCHK(0x12cf7ee0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12cf7ef0 (45 bytes, 19 insns) */
void f_12cf7ef0(void) {
  FTRACE(0x12cf7ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7ef4 mov eax, dword ptr [0x12d20704] */
  EAX = (r32((uint32_t)(0x12d20704)));
  /* 12cf7ef9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf7efc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7f00 je 0x12cf7f10 */
  if (C.zf) goto L_12cf7f10;
  /* 12cf7f02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7f05 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7f06 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12cf7f09u);
  /* 12cf7f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7f0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf7f0e jne 0x12cf7f14 */
  if (!C.zf) goto L_12cf7f14;
L_12cf7f10:;
  /* 12cf7f10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7f12 jmp 0x12cf7f19 */
  goto L_12cf7f19;
L_12cf7f14:;
  /* 12cf7f14 mov eax, 1 */
  EAX = (0x1u);
L_12cf7f19:;
  /* 12cf7f19 mov esp, ebp */
  ESP = (EBP);
  /* 12cf7f1b pop ebp */
  EBP = (pop32());
  /* 12cf7f1c ret  */
  ESPCHK(0x12cf7ef0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12cf7f20 (88 bytes, 40 insns) */
void f_12cf7f20(void) {
  FTRACE(0x12cf7f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7f20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cf7f24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cf7f28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf7f2a je 0x12cf7f73 */
  if (C.zf) goto L_12cf7f73;
  /* 12cf7f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7f2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12cf7f32 push edi */
  push32((uint32_t)(EDI));
  /* 12cf7f33 mov edi, ecx */
  EDI = (ECX);
  /* 12cf7f35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7f38 jb 0x12cf7f67 */
  if (C.cf) goto L_12cf7f67;
  /* 12cf7f3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cf7f3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf7f3f je 0x12cf7f49 */
  if (C.zf) goto L_12cf7f49;
  /* 12cf7f41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12cf7f43:;
  /* 12cf7f43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cf7f45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cf7f46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cf7f47 jne 0x12cf7f43 */
  if (!C.zf) goto L_12cf7f43;
L_12cf7f49:;
  /* 12cf7f49 mov ecx, eax */
  ECX = (EAX);
  /* 12cf7f4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12cf7f4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7f50 mov ecx, eax */
  ECX = (EAX);
  /* 12cf7f52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cf7f55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7f57 mov ecx, edx */
  ECX = (EDX);
  /* 12cf7f59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf7f5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cf7f5f je 0x12cf7f67 */
  if (C.zf) goto L_12cf7f67;
  /* 12cf7f61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cf7f63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf7f65 je 0x12cf7f6d */
  if (C.zf) goto L_12cf7f6d;
L_12cf7f67:;
  /* 12cf7f67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cf7f69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cf7f6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12cf7f6b jne 0x12cf7f67 */
  if (!C.zf) goto L_12cf7f67;
L_12cf7f6d:;
  /* 12cf7f6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cf7f71 pop edi */
  EDI = (pop32());
  /* 12cf7f72 ret  */
  ESPCHK(0x12cf7f20u, _esp0);
  ESP += 4; return;
L_12cf7f73:;
  /* 12cf7f73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cf7f77 ret  */
  ESPCHK(0x12cf7f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x12cf7f80 (23 bytes, 10 insns) */
void f_12cf7f80(void) {
  FTRACE(0x12cf7f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7f81 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7f83 mov eax, dword ptr [0x12d20700] */
  EAX = (r32((uint32_t)(0x12d20700)));
  /* 12cf7f88 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7f89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7f8c push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7f8d call 0x12cf7fa0 */
  push32(0x12cf7f92u); f_12cf7fa0();
  /* 12cf7f92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7f95 pop ebp */
  EBP = (pop32());
  /* 12cf7f96 ret  */
  ESPCHK(0x12cf7f80u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12cf7fa0 (87 bytes, 34 insns) */
void f_12cf7fa0(void) {
  FTRACE(0x12cf7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf7fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf7fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf7fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7fa4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7fa8 jbe 0x12cf7fae */
  if ((C.cf||C.zf)) goto L_12cf7fae;
  /* 12cf7faa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7fac jmp 0x12cf7ff3 */
  goto L_12cf7ff3;
L_12cf7fae:;
  /* 12cf7fae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7fb2 ja 0x12cf7fc5 */
  if ((!C.cf&&!C.zf)) goto L_12cf7fc5;
  /* 12cf7fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7fb7 push eax */
  push32((uint32_t)(EAX));
  /* 12cf7fb8 call 0x12cf8000 */
  push32(0x12cf7fbdu); f_12cf8000();
  /* 12cf7fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf7fc3 jmp 0x12cf7fcc */
  goto L_12cf7fcc;
L_12cf7fc5:;
  /* 12cf7fc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cf7fcc:;
  /* 12cf7fcc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7fd0 jne 0x12cf7fd8 */
  if (!C.zf) goto L_12cf7fd8;
  /* 12cf7fd2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf7fd6 jne 0x12cf7fdd */
  if (!C.zf) goto L_12cf7fdd;
L_12cf7fd8:;
  /* 12cf7fd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf7fdb jmp 0x12cf7ff3 */
  goto L_12cf7ff3;
L_12cf7fdd:;
  /* 12cf7fdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf7fe0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf7fe1 call 0x12cf7ef0 */
  push32(0x12cf7fe6u); f_12cf7ef0();
  /* 12cf7fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf7fe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf7feb jne 0x12cf7ff1 */
  if (!C.zf) goto L_12cf7ff1;
  /* 12cf7fed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf7fef jmp 0x12cf7ff3 */
  goto L_12cf7ff3;
L_12cf7ff1:;
  /* 12cf7ff1 jmp 0x12cf7fae */
  goto L_12cf7fae;
L_12cf7ff3:;
  /* 12cf7ff3 mov esp, ebp */
  ESP = (EBP);
  /* 12cf7ff5 pop ebp */
  EBP = (pop32());
  /* 12cf7ff6 ret  */
  ESPCHK(0x12cf7fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x12cf8000 (109 bytes, 37 insns) */
void f_12cf8000(void) {
  FTRACE(0x12cf8000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8000 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8001 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8003 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8007 cmp eax, dword ptr [0x12d1ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf800d ja 0x12cf803d */
  if ((!C.cf&&!C.zf)) goto L_12cf803d;
  /* 12cf800f push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf8011 call 0x12cf7bb0 */
  push32(0x12cf8016u); f_12cf7bb0();
  /* 12cf8016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8019 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf801c push ecx */
  push32((uint32_t)(ECX));
  /* 12cf801d call 0x12cf8b40 */
  push32(0x12cf8022u); f_12cf8b40();
  /* 12cf8022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8025 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf8028 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf802a call 0x12cf7c50 */
  push32(0x12cf802fu); f_12cf7c50();
  /* 12cf802f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8032 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8036 je 0x12cf803d */
  if (C.zf) goto L_12cf803d;
  /* 12cf8038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf803b jmp 0x12cf8069 */
  goto L_12cf8069;
L_12cf803d:;
  /* 12cf803d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8041 jne 0x12cf804a */
  if (!C.zf) goto L_12cf804a;
  /* 12cf8043 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12cf804a:;
  /* 12cf804a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf804d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8050 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8053 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cf8056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8059 push eax */
  push32((uint32_t)(EAX));
  /* 12cf805a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf805c mov ecx, dword ptr [0x12d21ecc] */
  ECX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf8062 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8063 call dword ptr [0x12d232ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232ec))), 0x12cf8069u);
L_12cf8069:;
  /* 12cf8069 mov esp, ebp */
  ESP = (EBP);
  /* 12cf806b pop ebp */
  EBP = (pop32());
  /* 12cf806c ret  */
  ESPCHK(0x12cf8000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008070 @ 0x12cf8070 (10 bytes, 5 insns) */
void f_12cf8070(void) {
  FTRACE(0x12cf8070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8070 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8071 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8073 mov eax, 1 */
  EAX = (0x1u);
  /* 12cf8078 pop ebp */
  EBP = (pop32());
  /* 12cf8079 ret  */
  ESPCHK(0x12cf8070u, _esp0);
  ESP += 4; return;
}

/* FUN_10008080 @ 0x12cf8080 (173 bytes, 59 insns) */
void f_12cf8080(void) {
  FTRACE(0x12cf8080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8080 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8081 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8086 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf808a jbe 0x12cf8093 */
  if ((C.cf||C.zf)) goto L_12cf8093;
  /* 12cf808c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf808e jmp 0x12cf8129 */
  goto L_12cf8129;
L_12cf8093:;
  /* 12cf8093 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf8095 call 0x12cf7bb0 */
  push32(0x12cf809au); f_12cf7bb0();
  /* 12cf809a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf809d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf80a0 push eax */
  push32((uint32_t)(EAX));
  /* 12cf80a1 call 0x12cf84b0 */
  push32(0x12cf80a6u); f_12cf84b0();
  /* 12cf80a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf80a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf80ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf80b0 je 0x12cf80f1 */
  if (C.zf) goto L_12cf80f1;
  /* 12cf80b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cf80b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf80bc cmp ecx, dword ptr [0x12d1ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d1ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf80c2 ja 0x12cf80e2 */
  if ((!C.cf&&!C.zf)) goto L_12cf80e2;
  /* 12cf80c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf80c7 push edx */
  push32((uint32_t)(EDX));
  /* 12cf80c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf80cb push eax */
  push32((uint32_t)(EAX));
  /* 12cf80cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf80cf push ecx */
  push32((uint32_t)(ECX));
  /* 12cf80d0 call 0x12cf9380 */
  push32(0x12cf80d5u); f_12cf9380();
  /* 12cf80d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf80d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf80da je 0x12cf80e2 */
  if (C.zf) goto L_12cf80e2;
  /* 12cf80dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf80df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cf80e2:;
  /* 12cf80e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf80e4 call 0x12cf7c50 */
  push32(0x12cf80e9u); f_12cf7c50();
  /* 12cf80e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf80ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf80ef jmp 0x12cf8129 */
  goto L_12cf8129;
L_12cf80f1:;
  /* 12cf80f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf80f3 call 0x12cf7c50 */
  push32(0x12cf80f8u); f_12cf7c50();
  /* 12cf80f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf80fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf80ff jne 0x12cf8108 */
  if (!C.zf) goto L_12cf8108;
  /* 12cf8101 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12cf8108:;
  /* 12cf8108 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf810b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf810e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12cf8110 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12cf8113 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf8116 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8117 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf811a push edx */
  push32((uint32_t)(EDX));
  /* 12cf811b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cf811d mov eax, dword ptr [0x12d21ecc] */
  EAX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf8122 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8123 call dword ptr [0x12d232e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e8))), 0x12cf8129u);
L_12cf8129:;
  /* 12cf8129 mov esp, ebp */
  ESP = (EBP);
  /* 12cf812b pop ebp */
  EBP = (pop32());
  /* 12cf812c ret  */
  ESPCHK(0x12cf8080u, _esp0);
  ESP += 4; return;
}

/* FUN_10008130 @ 0x12cf8130 (490 bytes, 165 insns) */
void f_12cf8130(void) {
  FTRACE(0x12cf8130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8130 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8131 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8133 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8136 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf813a jne 0x12cf814d */
  if (!C.zf) goto L_12cf814d;
  /* 12cf813c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf813f push eax */
  push32((uint32_t)(EAX));
  /* 12cf8140 call 0x12cf7f80 */
  push32(0x12cf8145u); f_12cf7f80();
  /* 12cf8145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8148 jmp 0x12cf8316 */
  goto L_12cf8316;
L_12cf814d:;
  /* 12cf814d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8151 jne 0x12cf8166 */
  if (!C.zf) goto L_12cf8166;
  /* 12cf8153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8156 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8157 call 0x12cf8320 */
  push32(0x12cf815cu); f_12cf8320();
  /* 12cf815c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf815f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8161 jmp 0x12cf8316 */
  goto L_12cf8316;
L_12cf8166:;
  /* 12cf8166 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cf816d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8171 ja 0x12cf82e9 */
  if ((!C.cf&&!C.zf)) goto L_12cf82e9;
  /* 12cf8177 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf8179 call 0x12cf7bb0 */
  push32(0x12cf817eu); f_12cf7bb0();
  /* 12cf817e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8184 push edx */
  push32((uint32_t)(EDX));
  /* 12cf8185 call 0x12cf84b0 */
  push32(0x12cf818au); f_12cf84b0();
  /* 12cf818a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf818d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf8190 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8194 je 0x12cf82ac */
  if (C.zf) goto L_12cf82ac;
  /* 12cf819a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf819d cmp eax, dword ptr [0x12d1ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf81a3 ja 0x12cf8220 */
  if ((!C.cf&&!C.zf)) goto L_12cf8220;
  /* 12cf81a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf81a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf81a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf81ac push edx */
  push32((uint32_t)(EDX));
  /* 12cf81ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf81b0 push eax */
  push32((uint32_t)(EAX));
  /* 12cf81b1 call 0x12cf9380 */
  push32(0x12cf81b6u); f_12cf9380();
  /* 12cf81b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf81b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf81bb je 0x12cf81c5 */
  if (C.zf) goto L_12cf81c5;
  /* 12cf81bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf81c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cf81c3 jmp 0x12cf8220 */
  goto L_12cf8220;
L_12cf81c5:;
  /* 12cf81c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf81c8 push edx */
  push32((uint32_t)(EDX));
  /* 12cf81c9 call 0x12cf8b40 */
  push32(0x12cf81ceu); f_12cf8b40();
  /* 12cf81ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf81d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf81d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf81d8 je 0x12cf8220 */
  if (C.zf) goto L_12cf8220;
  /* 12cf81da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf81dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12cf81e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf81e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf81e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf81e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf81ec jae 0x12cf81f6 */
  if (!C.cf) goto L_12cf81f6;
  /* 12cf81ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf81f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf81f4 jmp 0x12cf81fc */
  goto L_12cf81fc;
L_12cf81f6:;
  /* 12cf81f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf81f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cf81fc:;
  /* 12cf81fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf81ff push edx */
  push32((uint32_t)(EDX));
  /* 12cf8200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8203 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8204 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf8207 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8208 call 0x12cfaa90 */
  push32(0x12cf820du); f_12cfaa90();
  /* 12cf820d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8210 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8213 push edx */
  push32((uint32_t)(EDX));
  /* 12cf8214 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf8217 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8218 call 0x12cf8570 */
  push32(0x12cf821du); f_12cf8570();
  /* 12cf821d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf8220:;
  /* 12cf8220 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8224 jne 0x12cf82a0 */
  if (!C.zf) goto L_12cf82a0;
  /* 12cf8226 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf822a jne 0x12cf8233 */
  if (!C.zf) goto L_12cf8233;
  /* 12cf822c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12cf8233:;
  /* 12cf8233 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf8236 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8239 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf823c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cf823f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf8242 push edx */
  push32((uint32_t)(EDX));
  /* 12cf8243 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf8245 mov eax, dword ptr [0x12d21ecc] */
  EAX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf824a push eax */
  push32((uint32_t)(EAX));
  /* 12cf824b call dword ptr [0x12d232ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232ec))), 0x12cf8251u);
  /* 12cf8251 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf8254 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8258 je 0x12cf82a0 */
  if (C.zf) goto L_12cf82a0;
  /* 12cf825a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf825d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cf8260 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8263 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf8266 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8269 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf826c jae 0x12cf8276 */
  if (!C.cf) goto L_12cf8276;
  /* 12cf826e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8271 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cf8274 jmp 0x12cf827c */
  goto L_12cf827c;
L_12cf8276:;
  /* 12cf8276 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf8279 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12cf827c:;
  /* 12cf827c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf827f push eax */
  push32((uint32_t)(EAX));
  /* 12cf8280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8283 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8284 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf8287 push edx */
  push32((uint32_t)(EDX));
  /* 12cf8288 call 0x12cfaa90 */
  push32(0x12cf828du); f_12cfaa90();
  /* 12cf828d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8293 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8294 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf8297 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8298 call 0x12cf8570 */
  push32(0x12cf829du); f_12cf8570();
  /* 12cf829d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cf82a0:;
  /* 12cf82a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf82a2 call 0x12cf7c50 */
  push32(0x12cf82a7u); f_12cf7c50();
  /* 12cf82a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf82aa jmp 0x12cf82e9 */
  goto L_12cf82e9;
L_12cf82ac:;
  /* 12cf82ac push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf82ae call 0x12cf7c50 */
  push32(0x12cf82b3u); f_12cf7c50();
  /* 12cf82b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf82b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf82ba jne 0x12cf82c3 */
  if (!C.zf) goto L_12cf82c3;
  /* 12cf82bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12cf82c3:;
  /* 12cf82c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf82c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf82c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf82cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12cf82cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf82d2 push eax */
  push32((uint32_t)(EAX));
  /* 12cf82d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf82d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf82d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf82d9 mov edx, dword ptr [0x12d21ecc] */
  EDX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf82df push edx */
  push32((uint32_t)(EDX));
  /* 12cf82e0 call dword ptr [0x12d232e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e8))), 0x12cf82e6u);
  /* 12cf82e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cf82e9:;
  /* 12cf82e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf82ed jne 0x12cf82f8 */
  if (!C.zf) goto L_12cf82f8;
  /* 12cf82ef cmp dword ptr [0x12d20700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf82f6 jne 0x12cf82fd */
  if (!C.zf) goto L_12cf82fd;
L_12cf82f8:;
  /* 12cf82f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf82fb jmp 0x12cf8316 */
  goto L_12cf8316;
L_12cf82fd:;
  /* 12cf82fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf8300 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8301 call 0x12cf7ef0 */
  push32(0x12cf8306u); f_12cf7ef0();
  /* 12cf8306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf830b jne 0x12cf8311 */
  if (!C.zf) goto L_12cf8311;
  /* 12cf830d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf830f jmp 0x12cf8316 */
  goto L_12cf8316;
L_12cf8311:;
  /* 12cf8311 jmp 0x12cf8166 */
  goto L_12cf8166;
L_12cf8316:;
  /* 12cf8316 mov esp, ebp */
  ESP = (EBP);
  /* 12cf8318 pop ebp */
  EBP = (pop32());
  /* 12cf8319 ret  */
  ESPCHK(0x12cf8130u, _esp0);
  ESP += 4; return;
}

/* FUN_10008320 @ 0x12cf8320 (104 bytes, 38 insns) */
void f_12cf8320(void) {
  FTRACE(0x12cf8320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8320 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8321 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8323 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8324 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8328 jne 0x12cf832c */
  if (!C.zf) goto L_12cf832c;
  /* 12cf832a jmp 0x12cf8384 */
  goto L_12cf8384;
L_12cf832c:;
  /* 12cf832c push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf832e call 0x12cf7bb0 */
  push32(0x12cf8333u); f_12cf7bb0();
  /* 12cf8333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8339 push eax */
  push32((uint32_t)(EAX));
  /* 12cf833a call 0x12cf84b0 */
  push32(0x12cf833fu); f_12cf84b0();
  /* 12cf833f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8342 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf8345 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8349 je 0x12cf8367 */
  if (C.zf) goto L_12cf8367;
  /* 12cf834b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf834e push ecx */
  push32((uint32_t)(ECX));
  /* 12cf834f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8352 push edx */
  push32((uint32_t)(EDX));
  /* 12cf8353 call 0x12cf8570 */
  push32(0x12cf8358u); f_12cf8570();
  /* 12cf8358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf835b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf835d call 0x12cf7c50 */
  push32(0x12cf8362u); f_12cf7c50();
  /* 12cf8362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8365 jmp 0x12cf8384 */
  goto L_12cf8384;
L_12cf8367:;
  /* 12cf8367 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf8369 call 0x12cf7c50 */
  push32(0x12cf836eu); f_12cf7c50();
  /* 12cf836e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8371 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8374 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8375 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf8377 mov ecx, dword ptr [0x12d21ecc] */
  ECX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf837d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf837e call dword ptr [0x12d23384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23384))), 0x12cf8384u);
L_12cf8384:;
  /* 12cf8384 mov esp, ebp */
  ESP = (EBP);
  /* 12cf8386 pop ebp */
  EBP = (pop32());
  /* 12cf8387 ret  */
  ESPCHK(0x12cf8320u, _esp0);
  ESP += 4; return;
}

/* FUN_10008390 @ 0x12cf8390 (116 bytes, 34 insns) */
void f_12cf8390(void) {
  FTRACE(0x12cf8390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8390 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8391 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8393 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8394 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12cf839b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf839d call 0x12cf7bb0 */
  push32(0x12cf83a2u); f_12cf7bb0();
  /* 12cf83a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf83a5 call 0x12cf9aa0 */
  push32(0x12cf83aau); f_12cf9aa0();
  /* 12cf83aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf83ac jge 0x12cf83b5 */
  if ((C.sf==C.of)) goto L_12cf83b5;
  /* 12cf83ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12cf83b5:;
  /* 12cf83b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cf83b7 call 0x12cf7c50 */
  push32(0x12cf83bcu); f_12cf7c50();
  /* 12cf83bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf83bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf83c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf83c3 mov eax, dword ptr [0x12d21ecc] */
  EAX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf83c8 push eax */
  push32((uint32_t)(EAX));
  /* 12cf83c9 call dword ptr [0x12d23364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23364))), 0x12cf83cfu);
  /* 12cf83cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf83d1 jne 0x12cf83fd */
  if (!C.zf) goto L_12cf83fd;
  /* 12cf83d3 call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12cf83d9u);
  /* 12cf83d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf83dc jne 0x12cf83f6 */
  if (!C.zf) goto L_12cf83f6;
  /* 12cf83de call 0x12cfc090 */
  push32(0x12cf83e3u); f_12cfc090();
  /* 12cf83e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12cf83e9 call 0x12cfc080 */
  push32(0x12cf83eeu); f_12cfc080();
  /* 12cf83ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12cf83f4 jmp 0x12cf83fd */
  goto L_12cf83fd;
L_12cf83f6:;
  /* 12cf83f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12cf83fd:;
  /* 12cf83fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8400 mov esp, ebp */
  ESP = (EBP);
  /* 12cf8402 pop ebp */
  EBP = (pop32());
  /* 12cf8403 ret  */
  ESPCHK(0x12cf8390u, _esp0);
  ESP += 4; return;
}

/* FUN_10008410 @ 0x12cf8410 (10 bytes, 5 insns) */
void f_12cf8410(void) {
  FTRACE(0x12cf8410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8410 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8411 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8413 call 0x12cf8390 */
  push32(0x12cf8418u); f_12cf8390();
  /* 12cf8418 pop ebp */
  EBP = (pop32());
  /* 12cf8419 ret  */
  ESPCHK(0x12cf8410u, _esp0);
  ESP += 4; return;
}

