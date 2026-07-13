#include "recomp.h"

/* OnInit @ 0x12cb1005 (5 bytes, 1 insns) */
void f_12cb1005(void) {
  FTRACE(0x12cb1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb1005 jmp 0x12cb1090 */
  f_12cb1090(); return;
}

/* thunk_FUN_10001030 @ 0x12cb100a (5 bytes, 1 insns) */
void f_12cb100a(void) {
  FTRACE(0x12cb100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb100a jmp 0x12cb1030 */
  f_12cb1030(); return;
}

/* ProcessScenary @ 0x12cb100f (5 bytes, 1 insns) */
void f_12cb100f(void) {
  FTRACE(0x12cb100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb100f jmp 0x12cb1540 */
  f_12cb1540(); return;
}

/* FUN_10001030 @ 0x12cb1030 (67 bytes, 26 insns) */
void f_12cb1030(void) {
  FTRACE(0x12cb1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb1030 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb1031 mov ebp, esp */
  EBP = (ESP);
  /* 12cb1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb1036 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb1037 push esi */
  push32((uint32_t)(ESI));
  /* 12cb1038 push edi */
  push32((uint32_t)(EDI));
  /* 12cb1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12cb103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12cb1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12cb1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cb1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1052 je 0x12cb1056 */
  if (C.zf) goto L_12cb1056;
  /* 12cb1054 jmp 0x12cb105b */
  goto L_12cb105b;
L_12cb1056:;
  /* 12cb1056 call 0x12cb1005 */
  push32(0x12cb105bu); f_12cb1005();
L_12cb105b:;
  /* 12cb105b mov eax, 1 */
  EAX = (0x1u);
  /* 12cb1060 pop edi */
  EDI = (pop32());
  /* 12cb1061 pop esi */
  ESI = (pop32());
  /* 12cb1062 pop ebx */
  EBX = (pop32());
  /* 12cb1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1068 call 0x12cb2ea0 */
  push32(0x12cb106du); f_12cb2ea0();
  /* 12cb106d mov esp, ebp */
  ESP = (EBP);
  /* 12cb106f pop ebp */
  EBP = (pop32());
  /* 12cb1070 ret 0xc */
  ESPCHK(0x12cb1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12cb1090 (950 bytes, 250 insns) */
void f_12cb1090(void) {
  FTRACE(0x12cb1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb1090 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb1091 mov ebp, esp */
  EBP = (ESP);
  /* 12cb1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb1096 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb1097 push esi */
  push32((uint32_t)(ESI));
  /* 12cb1098 push edi */
  push32((uint32_t)(EDI));
  /* 12cb1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12cb109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12cb10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12cb10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cb10a8 mov esi, esp */
  ESI = (ESP);
  /* 12cb10aa push 0x12cdb130 */
  push32((uint32_t)(0x12cdb130u));
  /* 12cb10af push 0x12ce0440 */
  push32((uint32_t)(0x12ce0440u));
  /* 12cb10b4 call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb10bau);
  /* 12cb10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb10bf call 0x12cb2ea0 */
  push32(0x12cb10c4u); f_12cb2ea0();
  /* 12cb10c4 mov esi, esp */
  ESI = (ESP);
  /* 12cb10c6 push 0x12cdb128 */
  push32((uint32_t)(0x12cdb128u));
  /* 12cb10cb push 0x12ce0448 */
  push32((uint32_t)(0x12ce0448u));
  /* 12cb10d0 call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb10d6u);
  /* 12cb10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb10db call 0x12cb2ea0 */
  push32(0x12cb10e0u); f_12cb2ea0();
  /* 12cb10e0 mov esi, esp */
  ESI = (ESP);
  /* 12cb10e2 push 0x12cdb120 */
  push32((uint32_t)(0x12cdb120u));
  /* 12cb10e7 push 0x12ce0450 */
  push32((uint32_t)(0x12ce0450u));
  /* 12cb10ec call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb10f2u);
  /* 12cb10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb10f7 call 0x12cb2ea0 */
  push32(0x12cb10fcu); f_12cb2ea0();
  /* 12cb10fc mov esi, esp */
  ESI = (ESP);
  /* 12cb10fe push 0x12cdb114 */
  push32((uint32_t)(0x12cdb114u));
  /* 12cb1103 push 0x12ce0458 */
  push32((uint32_t)(0x12ce0458u));
  /* 12cb1108 call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb110eu);
  /* 12cb110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1113 call 0x12cb2ea0 */
  push32(0x12cb1118u); f_12cb2ea0();
  /* 12cb1118 mov esi, esp */
  ESI = (ESP);
  /* 12cb111a push 0x12cdb10c */
  push32((uint32_t)(0x12cdb10cu));
  /* 12cb111f push 0x12ce0460 */
  push32((uint32_t)(0x12ce0460u));
  /* 12cb1124 call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb112au);
  /* 12cb112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb112f call 0x12cb2ea0 */
  push32(0x12cb1134u); f_12cb2ea0();
  /* 12cb1134 mov esi, esp */
  ESI = (ESP);
  /* 12cb1136 push 0x12cdb104 */
  push32((uint32_t)(0x12cdb104u));
  /* 12cb113b push 0x12ce0468 */
  push32((uint32_t)(0x12ce0468u));
  /* 12cb1140 call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb1146u);
  /* 12cb1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb114b call 0x12cb2ea0 */
  push32(0x12cb1150u); f_12cb2ea0();
  /* 12cb1150 mov esi, esp */
  ESI = (ESP);
  /* 12cb1152 push 0x12cdb0f4 */
  push32((uint32_t)(0x12cdb0f4u));
  /* 12cb1157 push 0x12ce0470 */
  push32((uint32_t)(0x12ce0470u));
  /* 12cb115c call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb1162u);
  /* 12cb1162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1167 call 0x12cb2ea0 */
  push32(0x12cb116cu); f_12cb2ea0();
  /* 12cb116c mov esi, esp */
  ESI = (ESP);
  /* 12cb116e push 0x12cdb0ec */
  push32((uint32_t)(0x12cdb0ecu));
  /* 12cb1173 push 0x12ce0478 */
  push32((uint32_t)(0x12ce0478u));
  /* 12cb1178 call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb117eu);
  /* 12cb117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1183 call 0x12cb2ea0 */
  push32(0x12cb1188u); f_12cb2ea0();
  /* 12cb1188 mov esi, esp */
  ESI = (ESP);
  /* 12cb118a push 0x12cdb0e4 */
  push32((uint32_t)(0x12cdb0e4u));
  /* 12cb118f push 0x12ce0480 */
  push32((uint32_t)(0x12ce0480u));
  /* 12cb1194 call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb119au);
  /* 12cb119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb119f call 0x12cb2ea0 */
  push32(0x12cb11a4u); f_12cb2ea0();
  /* 12cb11a4 mov esi, esp */
  ESI = (ESP);
  /* 12cb11a6 push 0x12cdb0dc */
  push32((uint32_t)(0x12cdb0dcu));
  /* 12cb11ab push 0x12ce0430 */
  push32((uint32_t)(0x12ce0430u));
  /* 12cb11b0 call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb11b6u);
  /* 12cb11b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb11bb call 0x12cb2ea0 */
  push32(0x12cb11c0u); f_12cb2ea0();
  /* 12cb11c0 mov esi, esp */
  ESI = (ESP);
  /* 12cb11c2 push 0x12cdb0d4 */
  push32((uint32_t)(0x12cdb0d4u));
  /* 12cb11c7 push 0x12ce0428 */
  push32((uint32_t)(0x12ce0428u));
  /* 12cb11cc call dword ptr [0x12ce3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3468))), 0x12cb11d2u);
  /* 12cb11d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb11d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb11d7 call 0x12cb2ea0 */
  push32(0x12cb11dcu); f_12cb2ea0();
  /* 12cb11dc mov esi, esp */
  ESI = (ESP);
  /* 12cb11de push 0x12cdb0cc */
  push32((uint32_t)(0x12cdb0ccu));
  /* 12cb11e3 push 0x12ce03e0 */
  push32((uint32_t)(0x12ce03e0u));
  /* 12cb11e8 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb11eeu);
  /* 12cb11ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb11f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb11f3 call 0x12cb2ea0 */
  push32(0x12cb11f8u); f_12cb2ea0();
  /* 12cb11f8 mov esi, esp */
  ESI = (ESP);
  /* 12cb11fa push 0x12cdb0c8 */
  push32((uint32_t)(0x12cdb0c8u));
  /* 12cb11ff push 0x12ce03f0 */
  push32((uint32_t)(0x12ce03f0u));
  /* 12cb1204 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb120au);
  /* 12cb120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb120f call 0x12cb2ea0 */
  push32(0x12cb1214u); f_12cb2ea0();
  /* 12cb1214 mov esi, esp */
  ESI = (ESP);
  /* 12cb1216 push 0x12cdb0c0 */
  push32((uint32_t)(0x12cdb0c0u));
  /* 12cb121b push 0x12ce03e8 */
  push32((uint32_t)(0x12ce03e8u));
  /* 12cb1220 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb1226u);
  /* 12cb1226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb122b call 0x12cb2ea0 */
  push32(0x12cb1230u); f_12cb2ea0();
  /* 12cb1230 mov esi, esp */
  ESI = (ESP);
  /* 12cb1232 push 0x12cdb0b8 */
  push32((uint32_t)(0x12cdb0b8u));
  /* 12cb1237 push 0x12ce0400 */
  push32((uint32_t)(0x12ce0400u));
  /* 12cb123c call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb1242u);
  /* 12cb1242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1247 call 0x12cb2ea0 */
  push32(0x12cb124cu); f_12cb2ea0();
  /* 12cb124c mov esi, esp */
  ESI = (ESP);
  /* 12cb124e push 0x12cdb0b0 */
  push32((uint32_t)(0x12cdb0b0u));
  /* 12cb1253 push 0x12ce03f8 */
  push32((uint32_t)(0x12ce03f8u));
  /* 12cb1258 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb125eu);
  /* 12cb125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1263 call 0x12cb2ea0 */
  push32(0x12cb1268u); f_12cb2ea0();
  /* 12cb1268 mov esi, esp */
  ESI = (ESP);
  /* 12cb126a push 0x12cdb0a4 */
  push32((uint32_t)(0x12cdb0a4u));
  /* 12cb126f push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb1274 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb127au);
  /* 12cb127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb127f call 0x12cb2ea0 */
  push32(0x12cb1284u); f_12cb2ea0();
  /* 12cb1284 mov esi, esp */
  ESI = (ESP);
  /* 12cb1286 push 0x12cdb098 */
  push32((uint32_t)(0x12cdb098u));
  /* 12cb128b push 0x12ce0408 */
  push32((uint32_t)(0x12ce0408u));
  /* 12cb1290 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb1296u);
  /* 12cb1296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb129b call 0x12cb2ea0 */
  push32(0x12cb12a0u); f_12cb2ea0();
  /* 12cb12a0 mov esi, esp */
  ESI = (ESP);
  /* 12cb12a2 push 0x12cdb08c */
  push32((uint32_t)(0x12cdb08cu));
  /* 12cb12a7 push 0x12ce0420 */
  push32((uint32_t)(0x12ce0420u));
  /* 12cb12ac call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb12b2u);
  /* 12cb12b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb12b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb12b7 call 0x12cb2ea0 */
  push32(0x12cb12bcu); f_12cb2ea0();
  /* 12cb12bc mov esi, esp */
  ESI = (ESP);
  /* 12cb12be push 0x12cdb088 */
  push32((uint32_t)(0x12cdb088u));
  /* 12cb12c3 push 0x12ce0418 */
  push32((uint32_t)(0x12ce0418u));
  /* 12cb12c8 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb12ceu);
  /* 12cb12ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb12d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb12d3 call 0x12cb2ea0 */
  push32(0x12cb12d8u); f_12cb2ea0();
  /* 12cb12d8 mov esi, esp */
  ESI = (ESP);
  /* 12cb12da push 0x12cdb07c */
  push32((uint32_t)(0x12cdb07cu));
  /* 12cb12df push 0x12ce0488 */
  push32((uint32_t)(0x12ce0488u));
  /* 12cb12e4 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb12eau);
  /* 12cb12ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb12ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb12ef call 0x12cb2ea0 */
  push32(0x12cb12f4u); f_12cb2ea0();
  /* 12cb12f4 mov esi, esp */
  ESI = (ESP);
  /* 12cb12f6 push 0x12cdb074 */
  push32((uint32_t)(0x12cdb074u));
  /* 12cb12fb push 0x12ce04b8 */
  push32((uint32_t)(0x12ce04b8u));
  /* 12cb1300 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb1306u);
  /* 12cb1306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb130b call 0x12cb2ea0 */
  push32(0x12cb1310u); f_12cb2ea0();
  /* 12cb1310 mov esi, esp */
  ESI = (ESP);
  /* 12cb1312 push 0x12cdb068 */
  push32((uint32_t)(0x12cdb068u));
  /* 12cb1317 push 0x12ce04c0 */
  push32((uint32_t)(0x12ce04c0u));
  /* 12cb131c call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb1322u);
  /* 12cb1322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1327 call 0x12cb2ea0 */
  push32(0x12cb132cu); f_12cb2ea0();
  /* 12cb132c mov esi, esp */
  ESI = (ESP);
  /* 12cb132e push 0x12cdb060 */
  push32((uint32_t)(0x12cdb060u));
  /* 12cb1333 push 0x12ce04a8 */
  push32((uint32_t)(0x12ce04a8u));
  /* 12cb1338 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb133eu);
  /* 12cb133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1343 call 0x12cb2ea0 */
  push32(0x12cb1348u); f_12cb2ea0();
  /* 12cb1348 mov esi, esp */
  ESI = (ESP);
  /* 12cb134a push 0x12cdb058 */
  push32((uint32_t)(0x12cdb058u));
  /* 12cb134f push 0x12ce04b0 */
  push32((uint32_t)(0x12ce04b0u));
  /* 12cb1354 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb135au);
  /* 12cb135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb135f call 0x12cb2ea0 */
  push32(0x12cb1364u); f_12cb2ea0();
  /* 12cb1364 mov esi, esp */
  ESI = (ESP);
  /* 12cb1366 push 0x12cdb04c */
  push32((uint32_t)(0x12cdb04cu));
  /* 12cb136b push 0x12ce0498 */
  push32((uint32_t)(0x12ce0498u));
  /* 12cb1370 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb1376u);
  /* 12cb1376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb137b call 0x12cb2ea0 */
  push32(0x12cb1380u); f_12cb2ea0();
  /* 12cb1380 mov esi, esp */
  ESI = (ESP);
  /* 12cb1382 push 0x12cdb044 */
  push32((uint32_t)(0x12cdb044u));
  /* 12cb1387 push 0x12ce04a0 */
  push32((uint32_t)(0x12ce04a0u));
  /* 12cb138c call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb1392u);
  /* 12cb1392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1397 call 0x12cb2ea0 */
  push32(0x12cb139cu); f_12cb2ea0();
  /* 12cb139c mov esi, esp */
  ESI = (ESP);
  /* 12cb139e push 0x12cdb040 */
  push32((uint32_t)(0x12cdb040u));
  /* 12cb13a3 push 0x12ce0490 */
  push32((uint32_t)(0x12ce0490u));
  /* 12cb13a8 call dword ptr [0x12ce346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce346c))), 0x12cb13aeu);
  /* 12cb13ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb13b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb13b3 call 0x12cb2ea0 */
  push32(0x12cb13b8u); f_12cb2ea0();
  /* 12cb13b8 mov esi, esp */
  ESI = (ESP);
  /* 12cb13ba push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cb13bf push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb13c1 call dword ptr [0x12ce3470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3470))), 0x12cb13c7u);
  /* 12cb13c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb13ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb13cc call 0x12cb2ea0 */
  push32(0x12cb13d1u); f_12cb2ea0();
  /* 12cb13d1 mov esi, esp */
  ESI = (ESP);
  /* 12cb13d3 push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cb13d8 push 7 */
  push32((uint32_t)(0x7u));
  /* 12cb13da call dword ptr [0x12ce3470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3470))), 0x12cb13e0u);
  /* 12cb13e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb13e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb13e5 call 0x12cb2ea0 */
  push32(0x12cb13eau); f_12cb2ea0();
  /* 12cb13ea mov esi, esp */
  ESI = (ESP);
  /* 12cb13ec push 0x12cdb038 */
  push32((uint32_t)(0x12cdb038u));
  /* 12cb13f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb13f3 call dword ptr [0x12ce3474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3474))), 0x12cb13f9u);
  /* 12cb13f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb13fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb13fe call 0x12cb2ea0 */
  push32(0x12cb1403u); f_12cb2ea0();
  /* 12cb1403 mov esi, esp */
  ESI = (ESP);
  /* 12cb1405 push 0x12cdb028 */
  push32((uint32_t)(0x12cdb028u));
  /* 12cb140a push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb140c call dword ptr [0x12ce3474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3474))), 0x12cb1412u);
  /* 12cb1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1417 call 0x12cb2ea0 */
  push32(0x12cb141cu); f_12cb2ea0();
  /* 12cb141c mov esi, esp */
  ESI = (ESP);
  /* 12cb141e push 0x12cdb01c */
  push32((uint32_t)(0x12cdb01cu));
  /* 12cb1423 push 7 */
  push32((uint32_t)(0x7u));
  /* 12cb1425 call dword ptr [0x12ce3474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3474))), 0x12cb142bu);
  /* 12cb142b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb142e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1430 call 0x12cb2ea0 */
  push32(0x12cb1435u); f_12cb2ea0();
  /* 12cb1435 pop edi */
  EDI = (pop32());
  /* 12cb1436 pop esi */
  ESI = (pop32());
  /* 12cb1437 pop ebx */
  EBX = (pop32());
  /* 12cb1438 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb143b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb143d call 0x12cb2ea0 */
  push32(0x12cb1442u); f_12cb2ea0();
  /* 12cb1442 mov esp, ebp */
  ESP = (EBP);
  /* 12cb1444 pop ebp */
  EBP = (pop32());
  /* 12cb1445 ret  */
  ESPCHK(0x12cb1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001540 @ 0x12cb1540 (5049 bytes, 1475 insns) */
void f_12cb1540(void) {
  FTRACE(0x12cb1540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb1540 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb1541 mov ebp, esp */
  EBP = (ESP);
  /* 12cb1543 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb1546 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb1547 push esi */
  push32((uint32_t)(ESI));
  /* 12cb1548 push edi */
  push32((uint32_t)(EDI));
  /* 12cb1549 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12cb154c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12cb1551 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12cb1556 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cb1558 mov esi, esp */
  ESI = (ESP);
  /* 12cb155a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb155c call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1562u);
  /* 12cb1562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1567 call 0x12cb2ea0 */
  push32(0x12cb156cu); f_12cb2ea0();
  /* 12cb156c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1573 je 0x12cb17ce */
  if (C.zf) goto L_12cb17ce;
  /* 12cb1579 mov esi, esp */
  ESI = (ESP);
  /* 12cb157b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb157d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb157f call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1585u);
  /* 12cb1585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1588 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb158a call 0x12cb2ea0 */
  push32(0x12cb158fu); f_12cb2ea0();
  /* 12cb158f mov esi, esp */
  ESI = (ESP);
  /* 12cb1591 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 12cb1596 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb1598 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb159a call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb15a0u);
  /* 12cb15a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb15a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb15a5 call 0x12cb2ea0 */
  push32(0x12cb15aau); f_12cb2ea0();
  /* 12cb15aa mov esi, esp */
  ESI = (ESP);
  /* 12cb15ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12cb15ae push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb15b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb15b2 call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb15b8u);
  /* 12cb15b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb15bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb15bd call 0x12cb2ea0 */
  push32(0x12cb15c2u); f_12cb2ea0();
  /* 12cb15c2 mov esi, esp */
  ESI = (ESP);
  /* 12cb15c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb15c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb15c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb15ca call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb15d0u);
  /* 12cb15d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb15d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb15d5 call 0x12cb2ea0 */
  push32(0x12cb15dau); f_12cb2ea0();
  /* 12cb15da mov esi, esp */
  ESI = (ESP);
  /* 12cb15dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb15de push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb15e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb15e2 call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb15e8u);
  /* 12cb15e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb15eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb15ed call 0x12cb2ea0 */
  push32(0x12cb15f2u); f_12cb2ea0();
  /* 12cb15f2 mov esi, esp */
  ESI = (ESP);
  /* 12cb15f4 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cb15f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb15fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb15fd call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb1603u);
  /* 12cb1603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1608 call 0x12cb2ea0 */
  push32(0x12cb160du); f_12cb2ea0();
  /* 12cb160d mov esi, esp */
  ESI = (ESP);
  /* 12cb160f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cb1614 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb1616 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1618 call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb161eu);
  /* 12cb161e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1621 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1623 call 0x12cb2ea0 */
  push32(0x12cb1628u); f_12cb2ea0();
  /* 12cb1628 mov esi, esp */
  ESI = (ESP);
  /* 12cb162a push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12cb162f push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb1631 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1633 call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb1639u);
  /* 12cb1639 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb163c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb163e call 0x12cb2ea0 */
  push32(0x12cb1643u); f_12cb2ea0();
  /* 12cb1643 mov esi, esp */
  ESI = (ESP);
  /* 12cb1645 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12cb164a push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb164c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb164e call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb1654u);
  /* 12cb1654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1657 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1659 call 0x12cb2ea0 */
  push32(0x12cb165eu); f_12cb2ea0();
  /* 12cb165e mov esi, esp */
  ESI = (ESP);
  /* 12cb1660 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12cb1665 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb1667 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1669 call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb166fu);
  /* 12cb166f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1672 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1674 call 0x12cb2ea0 */
  push32(0x12cb1679u); f_12cb2ea0();
  /* 12cb1679 mov esi, esp */
  ESI = (ESP);
  /* 12cb167b push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 12cb1680 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb1682 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1684 call dword ptr [0x12ce3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3408))), 0x12cb168au);
  /* 12cb168a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb168d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb168f call 0x12cb2ea0 */
  push32(0x12cb1694u); f_12cb2ea0();
  /* 12cb1694 mov esi, esp */
  ESI = (ESP);
  /* 12cb1696 push 0x12cdb4cc */
  push32((uint32_t)(0x12cdb4ccu));
  /* 12cb169b call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb16a1u);
  /* 12cb16a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb16a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb16a6 call 0x12cb2ea0 */
  push32(0x12cb16abu); f_12cb2ea0();
  /* 12cb16ab mov esi, esp */
  ESI = (ESP);
  /* 12cb16ad push 0x12cdb4c0 */
  push32((uint32_t)(0x12cdb4c0u));
  /* 12cb16b2 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb16b8u);
  /* 12cb16b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb16bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb16bd call 0x12cb2ea0 */
  push32(0x12cb16c2u); f_12cb2ea0();
  /* 12cb16c2 mov esi, esp */
  ESI = (ESP);
  /* 12cb16c4 push 0x12cdb4b4 */
  push32((uint32_t)(0x12cdb4b4u));
  /* 12cb16c9 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb16cfu);
  /* 12cb16cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb16d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb16d4 call 0x12cb2ea0 */
  push32(0x12cb16d9u); f_12cb2ea0();
  /* 12cb16d9 mov esi, esp */
  ESI = (ESP);
  /* 12cb16db push 0x12cdb4a8 */
  push32((uint32_t)(0x12cdb4a8u));
  /* 12cb16e0 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb16e6u);
  /* 12cb16e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb16e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb16eb call 0x12cb2ea0 */
  push32(0x12cb16f0u); f_12cb2ea0();
  /* 12cb16f0 mov esi, esp */
  ESI = (ESP);
  /* 12cb16f2 push 0x12cdb49c */
  push32((uint32_t)(0x12cdb49cu));
  /* 12cb16f7 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb16fdu);
  /* 12cb16fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1700 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1702 call 0x12cb2ea0 */
  push32(0x12cb1707u); f_12cb2ea0();
  /* 12cb1707 mov esi, esp */
  ESI = (ESP);
  /* 12cb1709 push 0x12cdb490 */
  push32((uint32_t)(0x12cdb490u));
  /* 12cb170e call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb1714u);
  /* 12cb1714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1719 call 0x12cb2ea0 */
  push32(0x12cb171eu); f_12cb2ea0();
  /* 12cb171e mov esi, esp */
  ESI = (ESP);
  /* 12cb1720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1722 push 0x12ce0498 */
  push32((uint32_t)(0x12ce0498u));
  /* 12cb1727 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb172du);
  /* 12cb172d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1732 call 0x12cb2ea0 */
  push32(0x12cb1737u); f_12cb2ea0();
  /* 12cb1737 mov esi, esp */
  ESI = (ESP);
  /* 12cb1739 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb173b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb173d call dword ptr [0x12ce3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3414))), 0x12cb1743u);
  /* 12cb1743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1748 call 0x12cb2ea0 */
  push32(0x12cb174du); f_12cb2ea0();
  /* 12cb174d mov esi, esp */
  ESI = (ESP);
  /* 12cb174f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1751 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1753 push 0x12ce0480 */
  push32((uint32_t)(0x12ce0480u));
  /* 12cb1758 call dword ptr [0x12ce3418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3418))), 0x12cb175eu);
  /* 12cb175e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1763 call 0x12cb2ea0 */
  push32(0x12cb1768u); f_12cb2ea0();
  /* 12cb1768 mov esi, esp */
  ESI = (ESP);
  /* 12cb176a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb176c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb176e push 0x12ce0430 */
  push32((uint32_t)(0x12ce0430u));
  /* 12cb1773 call dword ptr [0x12ce3418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3418))), 0x12cb1779u);
  /* 12cb1779 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb177c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb177e call 0x12cb2ea0 */
  push32(0x12cb1783u); f_12cb2ea0();
  /* 12cb1783 mov esi, esp */
  ESI = (ESP);
  /* 12cb1785 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb1787 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1789 push 0x12ce0428 */
  push32((uint32_t)(0x12ce0428u));
  /* 12cb178e call dword ptr [0x12ce3418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3418))), 0x12cb1794u);
  /* 12cb1794 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1799 call 0x12cb2ea0 */
  push32(0x12cb179eu); f_12cb2ea0();
  /* 12cb179e mov esi, esp */
  ESI = (ESP);
  /* 12cb17a0 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12cb17a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb17a7 call dword ptr [0x12ce341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce341c))), 0x12cb17adu);
  /* 12cb17ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb17b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb17b2 call 0x12cb2ea0 */
  push32(0x12cb17b7u); f_12cb2ea0();
  /* 12cb17b7 mov esi, esp */
  ESI = (ESP);
  /* 12cb17b9 push 0x12ce0490 */
  push32((uint32_t)(0x12ce0490u));
  /* 12cb17be call dword ptr [0x12ce3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3420))), 0x12cb17c4u);
  /* 12cb17c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb17c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb17c9 call 0x12cb2ea0 */
  push32(0x12cb17ceu); f_12cb2ea0();
L_12cb17ce:;
  /* 12cb17ce mov esi, esp */
  ESI = (ESP);
  /* 12cb17d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb17d2 call dword ptr [0x12ce3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3424))), 0x12cb17d8u);
  /* 12cb17d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb17db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb17dd call 0x12cb2ea0 */
  push32(0x12cb17e2u); f_12cb2ea0();
  /* 12cb17e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb17e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb17e9 je 0x12cb1802 */
  if (C.zf) goto L_12cb1802;
  /* 12cb17eb mov esi, esp */
  ESI = (ESP);
  /* 12cb17ed push 0x12cdb484 */
  push32((uint32_t)(0x12cdb484u));
  /* 12cb17f2 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb17f8u);
  /* 12cb17f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb17fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb17fd call 0x12cb2ea0 */
  push32(0x12cb1802u); f_12cb2ea0();
L_12cb1802:;
  /* 12cb1802 mov esi, esp */
  ESI = (ESP);
  /* 12cb1804 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb1806 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb180cu);
  /* 12cb180c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb180f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1811 call 0x12cb2ea0 */
  push32(0x12cb1816u); f_12cb2ea0();
  /* 12cb1816 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb181b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb181d je 0x12cb1876 */
  if (C.zf) goto L_12cb1876;
  /* 12cb181f mov esi, esp */
  ESI = (ESP);
  /* 12cb1821 push 0x12ce03e0 */
  push32((uint32_t)(0x12ce03e0u));
  /* 12cb1826 call dword ptr [0x12ce3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3428))), 0x12cb182cu);
  /* 12cb182c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb182f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1831 call 0x12cb2ea0 */
  push32(0x12cb1836u); f_12cb2ea0();
  /* 12cb1836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1838 jne 0x12cb1876 */
  if (!C.zf) goto L_12cb1876;
  /* 12cb183a mov esi, esp */
  ESI = (ESP);
  /* 12cb183c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb183e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb1840 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1846u);
  /* 12cb1846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb184b call 0x12cb2ea0 */
  push32(0x12cb1850u); f_12cb2ea0();
  /* 12cb1850 mov esi, esp */
  ESI = (ESP);
  /* 12cb1852 push 0x12cdb478 */
  push32((uint32_t)(0x12cdb478u));
  /* 12cb1857 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb185du);
  /* 12cb185d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1860 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1862 call 0x12cb2ea0 */
  push32(0x12cb1867u); f_12cb2ea0();
  /* 12cb1867 mov esi, esp */
  ESI = (ESP);
  /* 12cb1869 call dword ptr [0x12ce342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce342c))), 0x12cb186fu);
  /* 12cb186f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1871 call 0x12cb2ea0 */
  push32(0x12cb1876u); f_12cb2ea0();
L_12cb1876:;
  /* 12cb1876 mov esi, esp */
  ESI = (ESP);
  /* 12cb1878 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb187a call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1880u);
  /* 12cb1880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1885 call 0x12cb2ea0 */
  push32(0x12cb188au); f_12cb2ea0();
  /* 12cb188a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb188f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1891 je 0x12cb1a9b */
  if (C.zf) goto L_12cb1a9b;
  /* 12cb1897 mov esi, esp */
  ESI = (ESP);
  /* 12cb1899 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb189b push 0x12ce0440 */
  push32((uint32_t)(0x12ce0440u));
  /* 12cb18a0 call dword ptr [0x12ce3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3430))), 0x12cb18a6u);
  /* 12cb18a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb18a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb18ab call 0x12cb2ea0 */
  push32(0x12cb18b0u); f_12cb2ea0();
  /* 12cb18b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb18b2 jle 0x12cb1a9b */
  if ((C.zf||C.sf!=C.of)) goto L_12cb1a9b;
  /* 12cb18b8 mov esi, esp */
  ESI = (ESP);
  /* 12cb18ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb18bc push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb18be call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb18c4u);
  /* 12cb18c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb18c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb18c9 call 0x12cb2ea0 */
  push32(0x12cb18ceu); f_12cb2ea0();
  /* 12cb18ce mov esi, esp */
  ESI = (ESP);
  /* 12cb18d0 push 0x12cdb314 */
  push32((uint32_t)(0x12cdb314u));
  /* 12cb18d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb18d7 push 0x12cdb30c */
  push32((uint32_t)(0x12cdb30cu));
  /* 12cb18dc push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb18de call dword ptr [0x12ce3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3434))), 0x12cb18e4u);
  /* 12cb18e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb18e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb18e9 call 0x12cb2ea0 */
  push32(0x12cb18eeu); f_12cb2ea0();
  /* 12cb18ee mov dword ptr [0x12ce0438], eax */
  w32((uint32_t)(0x12ce0438), (EAX));
  /* 12cb18f3 cmp dword ptr [0x12ce0438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb18fa jne 0x12cb1912 */
  if (!C.zf) goto L_12cb1912;
  /* 12cb18fc mov esi, esp */
  ESI = (ESP);
  /* 12cb18fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1900 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb1902 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1908u);
  /* 12cb1908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb190b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb190d call 0x12cb2ea0 */
  push32(0x12cb1912u); f_12cb2ea0();
L_12cb1912:;
  /* 12cb1912 cmp dword ptr [0x12ce0438], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0438))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1919 jne 0x12cb1a33 */
  if (!C.zf) goto L_12cb1a33;
  /* 12cb191f mov esi, esp */
  ESI = (ESP);
  /* 12cb1921 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1923 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1925 call dword ptr [0x12ce3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3438))), 0x12cb192bu);
  /* 12cb192b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb192e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1930 call 0x12cb2ea0 */
  push32(0x12cb1935u); f_12cb2ea0();
  /* 12cb1935 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1938 jl 0x12cb19d4 */
  if ((C.sf!=C.of)) goto L_12cb19d4;
  /* 12cb193e mov esi, esp */
  ESI = (ESP);
  /* 12cb1940 push 0x12cdb300 */
  push32((uint32_t)(0x12cdb300u));
  /* 12cb1945 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb194bu);
  /* 12cb194b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb194e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1950 call 0x12cb2ea0 */
  push32(0x12cb1955u); f_12cb2ea0();
  /* 12cb1955 mov esi, esp */
  ESI = (ESP);
  /* 12cb1957 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1959 push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb195e call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1964u);
  /* 12cb1964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1969 call 0x12cb2ea0 */
  push32(0x12cb196eu); f_12cb2ea0();
  /* 12cb196e mov esi, esp */
  ESI = (ESP);
  /* 12cb1970 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1972 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1974 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb197au);
  /* 12cb197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb197f call 0x12cb2ea0 */
  push32(0x12cb1984u); f_12cb2ea0();
  /* 12cb1984 mov esi, esp */
  ESI = (ESP);
  /* 12cb1986 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1988 push 0x12ce03e8 */
  push32((uint32_t)(0x12ce03e8u));
  /* 12cb198d call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1993u);
  /* 12cb1993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1996 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1998 call 0x12cb2ea0 */
  push32(0x12cb199du); f_12cb2ea0();
  /* 12cb199d mov esi, esp */
  ESI = (ESP);
  /* 12cb199f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb19a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb19a3 push 0x12ce0478 */
  push32((uint32_t)(0x12ce0478u));
  /* 12cb19a8 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb19aa call dword ptr [0x12ce3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3440))), 0x12cb19b0u);
  /* 12cb19b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb19b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb19b5 call 0x12cb2ea0 */
  push32(0x12cb19bau); f_12cb2ea0();
  /* 12cb19ba mov esi, esp */
  ESI = (ESP);
  /* 12cb19bc push -0x3c */
  push32((uint32_t)(0xffffffc4u));
  /* 12cb19be push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb19c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb19c2 call dword ptr [0x12ce3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3444))), 0x12cb19c8u);
  /* 12cb19c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb19cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb19cd call 0x12cb2ea0 */
  push32(0x12cb19d2u); f_12cb2ea0();
  /* 12cb19d2 jmp 0x12cb1a33 */
  goto L_12cb1a33;
L_12cb19d4:;
  /* 12cb19d4 mov esi, esp */
  ESI = (ESP);
  /* 12cb19d6 push 0x12cdb2f4 */
  push32((uint32_t)(0x12cdb2f4u));
  /* 12cb19db call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb19e1u);
  /* 12cb19e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb19e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb19e6 call 0x12cb2ea0 */
  push32(0x12cb19ebu); f_12cb2ea0();
  /* 12cb19eb mov esi, esp */
  ESI = (ESP);
  /* 12cb19ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb19ef push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb19f4 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb19fau);
  /* 12cb19fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb19fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb19ff call 0x12cb2ea0 */
  push32(0x12cb1a04u); f_12cb2ea0();
  /* 12cb1a04 mov esi, esp */
  ESI = (ESP);
  /* 12cb1a06 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1a08 push 0x12ce03e8 */
  push32((uint32_t)(0x12ce03e8u));
  /* 12cb1a0d call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1a13u);
  /* 12cb1a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1a18 call 0x12cb2ea0 */
  push32(0x12cb1a1du); f_12cb2ea0();
  /* 12cb1a1d mov esi, esp */
  ESI = (ESP);
  /* 12cb1a1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1a21 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1a23 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb1a29u);
  /* 12cb1a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1a2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1a2e call 0x12cb2ea0 */
  push32(0x12cb1a33u); f_12cb2ea0();
L_12cb1a33:;
  /* 12cb1a33 cmp dword ptr [0x12ce0438], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0438))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1a3a jne 0x12cb1a9b */
  if (!C.zf) goto L_12cb1a9b;
  /* 12cb1a3c mov esi, esp */
  ESI = (ESP);
  /* 12cb1a3e push 0x12cdb2e8 */
  push32((uint32_t)(0x12cdb2e8u));
  /* 12cb1a43 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb1a49u);
  /* 12cb1a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1a4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1a4e call 0x12cb2ea0 */
  push32(0x12cb1a53u); f_12cb2ea0();
  /* 12cb1a53 mov esi, esp */
  ESI = (ESP);
  /* 12cb1a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1a57 push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb1a5c call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1a62u);
  /* 12cb1a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1a67 call 0x12cb2ea0 */
  push32(0x12cb1a6cu); f_12cb2ea0();
  /* 12cb1a6c mov esi, esp */
  ESI = (ESP);
  /* 12cb1a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1a70 push 0x12ce03e8 */
  push32((uint32_t)(0x12ce03e8u));
  /* 12cb1a75 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1a7bu);
  /* 12cb1a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1a80 call 0x12cb2ea0 */
  push32(0x12cb1a85u); f_12cb2ea0();
  /* 12cb1a85 mov esi, esp */
  ESI = (ESP);
  /* 12cb1a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1a89 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1a8b call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb1a91u);
  /* 12cb1a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1a96 call 0x12cb2ea0 */
  push32(0x12cb1a9bu); f_12cb2ea0();
L_12cb1a9b:;
  /* 12cb1a9b mov esi, esp */
  ESI = (ESP);
  /* 12cb1a9d push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb1a9f call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1aa5u);
  /* 12cb1aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1aaa call 0x12cb2ea0 */
  push32(0x12cb1aafu); f_12cb2ea0();
  /* 12cb1aaf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1ab6 jne 0x12cb1c54 */
  if (!C.zf) goto L_12cb1c54;
  /* 12cb1abc mov esi, esp */
  ESI = (ESP);
  /* 12cb1abe push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1ac0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb1ac2 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1ac8u);
  /* 12cb1ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1acb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1acd call 0x12cb2ea0 */
  push32(0x12cb1ad2u); f_12cb2ea0();
  /* 12cb1ad2 mov esi, esp */
  ESI = (ESP);
  /* 12cb1ad4 push 0x12cdb2dc */
  push32((uint32_t)(0x12cdb2dcu));
  /* 12cb1ad9 call dword ptr [0x12ce3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3448))), 0x12cb1adfu);
  /* 12cb1adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1ae2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1ae4 call 0x12cb2ea0 */
  push32(0x12cb1ae9u); f_12cb2ea0();
  /* 12cb1ae9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1af0 je 0x12cb1bf5 */
  if (C.zf) goto L_12cb1bf5;
  /* 12cb1af6 mov esi, esp */
  ESI = (ESP);
  /* 12cb1af8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1afa push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1afc call dword ptr [0x12ce3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3438))), 0x12cb1b02u);
  /* 12cb1b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1b05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1b07 call 0x12cb2ea0 */
  push32(0x12cb1b0cu); f_12cb2ea0();
  /* 12cb1b0c cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1b0f jl 0x12cb1bab */
  if ((C.sf!=C.of)) goto L_12cb1bab;
  /* 12cb1b15 mov esi, esp */
  ESI = (ESP);
  /* 12cb1b17 push 0x12cdb300 */
  push32((uint32_t)(0x12cdb300u));
  /* 12cb1b1c call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb1b22u);
  /* 12cb1b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1b25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1b27 call 0x12cb2ea0 */
  push32(0x12cb1b2cu); f_12cb2ea0();
  /* 12cb1b2c mov esi, esp */
  ESI = (ESP);
  /* 12cb1b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1b30 push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb1b35 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1b3bu);
  /* 12cb1b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1b40 call 0x12cb2ea0 */
  push32(0x12cb1b45u); f_12cb2ea0();
  /* 12cb1b45 mov esi, esp */
  ESI = (ESP);
  /* 12cb1b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1b49 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1b4b call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb1b51u);
  /* 12cb1b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1b54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1b56 call 0x12cb2ea0 */
  push32(0x12cb1b5bu); f_12cb2ea0();
  /* 12cb1b5b mov esi, esp */
  ESI = (ESP);
  /* 12cb1b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1b5f push 0x12ce03e8 */
  push32((uint32_t)(0x12ce03e8u));
  /* 12cb1b64 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1b6au);
  /* 12cb1b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1b6f call 0x12cb2ea0 */
  push32(0x12cb1b74u); f_12cb2ea0();
  /* 12cb1b74 mov esi, esp */
  ESI = (ESP);
  /* 12cb1b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1b7a push 0x12ce0478 */
  push32((uint32_t)(0x12ce0478u));
  /* 12cb1b7f push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1b81 call dword ptr [0x12ce3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3440))), 0x12cb1b87u);
  /* 12cb1b87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1b8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1b8c call 0x12cb2ea0 */
  push32(0x12cb1b91u); f_12cb2ea0();
  /* 12cb1b91 mov esi, esp */
  ESI = (ESP);
  /* 12cb1b93 push -0x32 */
  push32((uint32_t)(0xffffffceu));
  /* 12cb1b95 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1b99 call dword ptr [0x12ce3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3444))), 0x12cb1b9fu);
  /* 12cb1b9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1ba2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1ba4 call 0x12cb2ea0 */
  push32(0x12cb1ba9u); f_12cb2ea0();
  /* 12cb1ba9 jmp 0x12cb1bf3 */
  goto L_12cb1bf3;
L_12cb1bab:;
  /* 12cb1bab mov esi, esp */
  ESI = (ESP);
  /* 12cb1bad push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1baf push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb1bb4 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1bbau);
  /* 12cb1bba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1bbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1bbf call 0x12cb2ea0 */
  push32(0x12cb1bc4u); f_12cb2ea0();
  /* 12cb1bc4 mov esi, esp */
  ESI = (ESP);
  /* 12cb1bc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1bc8 push 0x12ce03e8 */
  push32((uint32_t)(0x12ce03e8u));
  /* 12cb1bcd call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1bd3u);
  /* 12cb1bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1bd8 call 0x12cb2ea0 */
  push32(0x12cb1bddu); f_12cb2ea0();
  /* 12cb1bdd mov esi, esp */
  ESI = (ESP);
  /* 12cb1bdf push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1be1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1be3 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb1be9u);
  /* 12cb1be9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1bec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1bee call 0x12cb2ea0 */
  push32(0x12cb1bf3u); f_12cb2ea0();
L_12cb1bf3:;
  /* 12cb1bf3 jmp 0x12cb1c54 */
  goto L_12cb1c54;
L_12cb1bf5:;
  /* 12cb1bf5 mov esi, esp */
  ESI = (ESP);
  /* 12cb1bf7 push 0x12cdb2d0 */
  push32((uint32_t)(0x12cdb2d0u));
  /* 12cb1bfc call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb1c02u);
  /* 12cb1c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1c05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1c07 call 0x12cb2ea0 */
  push32(0x12cb1c0cu); f_12cb2ea0();
  /* 12cb1c0c mov esi, esp */
  ESI = (ESP);
  /* 12cb1c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1c10 push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb1c15 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1c1bu);
  /* 12cb1c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1c1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1c20 call 0x12cb2ea0 */
  push32(0x12cb1c25u); f_12cb2ea0();
  /* 12cb1c25 mov esi, esp */
  ESI = (ESP);
  /* 12cb1c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1c29 push 0x12ce03e8 */
  push32((uint32_t)(0x12ce03e8u));
  /* 12cb1c2e call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1c34u);
  /* 12cb1c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1c37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1c39 call 0x12cb2ea0 */
  push32(0x12cb1c3eu); f_12cb2ea0();
  /* 12cb1c3e mov esi, esp */
  ESI = (ESP);
  /* 12cb1c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1c42 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1c44 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb1c4au);
  /* 12cb1c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1c4f call 0x12cb2ea0 */
  push32(0x12cb1c54u); f_12cb2ea0();
L_12cb1c54:;
  /* 12cb1c54 mov esi, esp */
  ESI = (ESP);
  /* 12cb1c56 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1c58 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1c5eu);
  /* 12cb1c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1c63 call 0x12cb2ea0 */
  push32(0x12cb1c68u); f_12cb2ea0();
  /* 12cb1c68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1c6f je 0x12cb1ce8 */
  if (C.zf) goto L_12cb1ce8;
  /* 12cb1c71 mov esi, esp */
  ESI = (ESP);
  /* 12cb1c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1c75 push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb1c7a call dword ptr [0x12ce344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce344c))), 0x12cb1c80u);
  /* 12cb1c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1c85 call 0x12cb2ea0 */
  push32(0x12cb1c8au); f_12cb2ea0();
  /* 12cb1c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1c8c jle 0x12cb1ce8 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb1ce8;
  /* 12cb1c8e mov esi, esp */
  ESI = (ESP);
  /* 12cb1c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1c92 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1c94 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1c9au);
  /* 12cb1c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1c9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1c9f call 0x12cb2ea0 */
  push32(0x12cb1ca4u); f_12cb2ea0();
  /* 12cb1ca4 mov esi, esp */
  ESI = (ESP);
  /* 12cb1ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1ca8 push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb1cad call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1cb3u);
  /* 12cb1cb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1cb8 call 0x12cb2ea0 */
  push32(0x12cb1cbdu); f_12cb2ea0();
  /* 12cb1cbd mov esi, esp */
  ESI = (ESP);
  /* 12cb1cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1cc1 call dword ptr [0x12ce3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3450))), 0x12cb1cc7u);
  /* 12cb1cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1ccc call 0x12cb2ea0 */
  push32(0x12cb1cd1u); f_12cb2ea0();
  /* 12cb1cd1 mov esi, esp */
  ESI = (ESP);
  /* 12cb1cd3 push 0x12cdb2c8 */
  push32((uint32_t)(0x12cdb2c8u));
  /* 12cb1cd8 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb1cdeu);
  /* 12cb1cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1ce1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1ce3 call 0x12cb2ea0 */
  push32(0x12cb1ce8u); f_12cb2ea0();
L_12cb1ce8:;
  /* 12cb1ce8 mov esi, esp */
  ESI = (ESP);
  /* 12cb1cea push 6 */
  push32((uint32_t)(0x6u));
  /* 12cb1cec call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1cf2u);
  /* 12cb1cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1cf7 call 0x12cb2ea0 */
  push32(0x12cb1cfcu); f_12cb2ea0();
  /* 12cb1cfc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1d03 je 0x12cb1dcb */
  if (C.zf) goto L_12cb1dcb;
  /* 12cb1d09 mov esi, esp */
  ESI = (ESP);
  /* 12cb1d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1d0d push 0x12ce0448 */
  push32((uint32_t)(0x12ce0448u));
  /* 12cb1d12 call dword ptr [0x12ce3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3430))), 0x12cb1d18u);
  /* 12cb1d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1d1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1d1d call 0x12cb2ea0 */
  push32(0x12cb1d22u); f_12cb2ea0();
  /* 12cb1d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1d24 jle 0x12cb1dcb */
  if ((C.zf||C.sf!=C.of)) goto L_12cb1dcb;
  /* 12cb1d2a mov esi, esp */
  ESI = (ESP);
  /* 12cb1d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1d2e push 6 */
  push32((uint32_t)(0x6u));
  /* 12cb1d30 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1d36u);
  /* 12cb1d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1d39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1d3b call 0x12cb2ea0 */
  push32(0x12cb1d40u); f_12cb2ea0();
  /* 12cb1d40 mov esi, esp */
  ESI = (ESP);
  /* 12cb1d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1d44 push 7 */
  push32((uint32_t)(0x7u));
  /* 12cb1d46 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1d4cu);
  /* 12cb1d4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1d51 call 0x12cb2ea0 */
  push32(0x12cb1d56u); f_12cb2ea0();
  /* 12cb1d56 mov esi, esp */
  ESI = (ESP);
  /* 12cb1d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1d5a push 0x12ce0408 */
  push32((uint32_t)(0x12ce0408u));
  /* 12cb1d5f call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1d65u);
  /* 12cb1d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1d68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1d6a call 0x12cb2ea0 */
  push32(0x12cb1d6fu); f_12cb2ea0();
  /* 12cb1d6f mov esi, esp */
  ESI = (ESP);
  /* 12cb1d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1d73 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1d75 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb1d7bu);
  /* 12cb1d7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1d7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1d80 call 0x12cb2ea0 */
  push32(0x12cb1d85u); f_12cb2ea0();
  /* 12cb1d85 mov esi, esp */
  ESI = (ESP);
  /* 12cb1d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1d89 push 0x12ce0400 */
  push32((uint32_t)(0x12ce0400u));
  /* 12cb1d8e call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1d94u);
  /* 12cb1d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1d99 call 0x12cb2ea0 */
  push32(0x12cb1d9eu); f_12cb2ea0();
  /* 12cb1d9e mov esi, esp */
  ESI = (ESP);
  /* 12cb1da0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1da2 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1da4 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb1daau);
  /* 12cb1daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1dad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1daf call 0x12cb2ea0 */
  push32(0x12cb1db4u); f_12cb2ea0();
  /* 12cb1db4 mov esi, esp */
  ESI = (ESP);
  /* 12cb1db6 push 0x12cdb2c0 */
  push32((uint32_t)(0x12cdb2c0u));
  /* 12cb1dbb call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb1dc1u);
  /* 12cb1dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1dc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1dc6 call 0x12cb2ea0 */
  push32(0x12cb1dcbu); f_12cb2ea0();
L_12cb1dcb:;
  /* 12cb1dcb mov esi, esp */
  ESI = (ESP);
  /* 12cb1dcd push 7 */
  push32((uint32_t)(0x7u));
  /* 12cb1dcf call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1dd5u);
  /* 12cb1dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1dd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1dda call 0x12cb2ea0 */
  push32(0x12cb1ddfu); f_12cb2ea0();
  /* 12cb1ddf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1de6 jne 0x12cb1e06 */
  if (!C.zf) goto L_12cb1e06;
  /* 12cb1de8 mov esi, esp */
  ESI = (ESP);
  /* 12cb1dea push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1dec push 0x12ce0448 */
  push32((uint32_t)(0x12ce0448u));
  /* 12cb1df1 push 0x12ce0400 */
  push32((uint32_t)(0x12ce0400u));
  /* 12cb1df6 call dword ptr [0x12ce3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3454))), 0x12cb1dfcu);
  /* 12cb1dfc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1dff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1e01 call 0x12cb2ea0 */
  push32(0x12cb1e06u); f_12cb2ea0();
L_12cb1e06:;
  /* 12cb1e06 mov esi, esp */
  ESI = (ESP);
  /* 12cb1e08 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cb1e0a call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1e10u);
  /* 12cb1e10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1e15 call 0x12cb2ea0 */
  push32(0x12cb1e1au); f_12cb2ea0();
  /* 12cb1e1a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1e21 je 0x12cb1e83 */
  if (C.zf) goto L_12cb1e83;
  /* 12cb1e23 mov esi, esp */
  ESI = (ESP);
  /* 12cb1e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1e27 push 0x12ce0488 */
  push32((uint32_t)(0x12ce0488u));
  /* 12cb1e2c call dword ptr [0x12ce344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce344c))), 0x12cb1e32u);
  /* 12cb1e32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1e35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1e37 call 0x12cb2ea0 */
  push32(0x12cb1e3cu); f_12cb2ea0();
  /* 12cb1e3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1e3e jle 0x12cb1e83 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb1e83;
  /* 12cb1e40 mov esi, esp */
  ESI = (ESP);
  /* 12cb1e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1e44 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cb1e46 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1e4cu);
  /* 12cb1e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1e51 call 0x12cb2ea0 */
  push32(0x12cb1e56u); f_12cb2ea0();
  /* 12cb1e56 mov esi, esp */
  ESI = (ESP);
  /* 12cb1e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1e5a push 0x12ce0488 */
  push32((uint32_t)(0x12ce0488u));
  /* 12cb1e5f call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1e65u);
  /* 12cb1e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1e68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1e6a call 0x12cb2ea0 */
  push32(0x12cb1e6fu); f_12cb2ea0();
  /* 12cb1e6f mov esi, esp */
  ESI = (ESP);
  /* 12cb1e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1e73 call dword ptr [0x12ce3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3450))), 0x12cb1e79u);
  /* 12cb1e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1e7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1e7e call 0x12cb2ea0 */
  push32(0x12cb1e83u); f_12cb2ea0();
L_12cb1e83:;
  /* 12cb1e83 mov esi, esp */
  ESI = (ESP);
  /* 12cb1e85 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb1e87 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1e8du);
  /* 12cb1e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1e90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1e92 call 0x12cb2ea0 */
  push32(0x12cb1e97u); f_12cb2ea0();
  /* 12cb1e97 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1e9e je 0x12cb1f17 */
  if (C.zf) goto L_12cb1f17;
  /* 12cb1ea0 mov esi, esp */
  ESI = (ESP);
  /* 12cb1ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1ea4 push 0x12ce0408 */
  push32((uint32_t)(0x12ce0408u));
  /* 12cb1ea9 call dword ptr [0x12ce344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce344c))), 0x12cb1eafu);
  /* 12cb1eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1eb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1eb4 call 0x12cb2ea0 */
  push32(0x12cb1eb9u); f_12cb2ea0();
  /* 12cb1eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1ebb jle 0x12cb1f17 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb1f17;
  /* 12cb1ebd mov esi, esp */
  ESI = (ESP);
  /* 12cb1ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1ec1 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb1ec3 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1ec9u);
  /* 12cb1ec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1ecc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1ece call 0x12cb2ea0 */
  push32(0x12cb1ed3u); f_12cb2ea0();
  /* 12cb1ed3 mov esi, esp */
  ESI = (ESP);
  /* 12cb1ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1ed7 push 0x12ce0408 */
  push32((uint32_t)(0x12ce0408u));
  /* 12cb1edc call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1ee2u);
  /* 12cb1ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1ee7 call 0x12cb2ea0 */
  push32(0x12cb1eecu); f_12cb2ea0();
  /* 12cb1eec mov esi, esp */
  ESI = (ESP);
  /* 12cb1eee push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1ef0 call dword ptr [0x12ce3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3450))), 0x12cb1ef6u);
  /* 12cb1ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1ef9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1efb call 0x12cb2ea0 */
  push32(0x12cb1f00u); f_12cb2ea0();
  /* 12cb1f00 mov esi, esp */
  ESI = (ESP);
  /* 12cb1f02 push 0x12cdb2b8 */
  push32((uint32_t)(0x12cdb2b8u));
  /* 12cb1f07 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb1f0du);
  /* 12cb1f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1f10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1f12 call 0x12cb2ea0 */
  push32(0x12cb1f17u); f_12cb2ea0();
L_12cb1f17:;
  /* 12cb1f17 mov esi, esp */
  ESI = (ESP);
  /* 12cb1f19 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cb1f1b call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb1f21u);
  /* 12cb1f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1f26 call 0x12cb2ea0 */
  push32(0x12cb1f2bu); f_12cb2ea0();
  /* 12cb1f2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1f32 je 0x12cb2021 */
  if (C.zf) goto L_12cb2021;
  /* 12cb1f38 mov esi, esp */
  ESI = (ESP);
  /* 12cb1f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1f3c push 0x12ce0458 */
  push32((uint32_t)(0x12ce0458u));
  /* 12cb1f41 call dword ptr [0x12ce3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3430))), 0x12cb1f47u);
  /* 12cb1f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1f4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1f4c call 0x12cb2ea0 */
  push32(0x12cb1f51u); f_12cb2ea0();
  /* 12cb1f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1f53 jle 0x12cb2021 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb2021;
  /* 12cb1f59 mov esi, esp */
  ESI = (ESP);
  /* 12cb1f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1f5d push 0xa */
  push32((uint32_t)(0xau));
  /* 12cb1f5f call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb1f65u);
  /* 12cb1f65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1f68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1f6a call 0x12cb2ea0 */
  push32(0x12cb1f6fu); f_12cb2ea0();
  /* 12cb1f6f mov esi, esp */
  ESI = (ESP);
  /* 12cb1f71 push 0x12cdb2b0 */
  push32((uint32_t)(0x12cdb2b0u));
  /* 12cb1f76 call dword ptr [0x12ce3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3448))), 0x12cb1f7cu);
  /* 12cb1f7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1f7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1f81 call 0x12cb2ea0 */
  push32(0x12cb1f86u); f_12cb2ea0();
  /* 12cb1f86 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb1f8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb1f8d je 0x12cb200a */
  if (C.zf) goto L_12cb200a;
  /* 12cb1f8f mov esi, esp */
  ESI = (ESP);
  /* 12cb1f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1f95 call dword ptr [0x12ce3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3438))), 0x12cb1f9bu);
  /* 12cb1f9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1f9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1fa0 call 0x12cb2ea0 */
  push32(0x12cb1fa5u); f_12cb2ea0();
  /* 12cb1fa5 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1fa8 jl 0x12cb200a */
  if ((C.sf!=C.of)) goto L_12cb200a;
  /* 12cb1faa mov esi, esp */
  ESI = (ESP);
  /* 12cb1fac push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1fae push 0x12ce0418 */
  push32((uint32_t)(0x12ce0418u));
  /* 12cb1fb3 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb1fb9u);
  /* 12cb1fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1fbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1fbe call 0x12cb2ea0 */
  push32(0x12cb1fc3u); f_12cb2ea0();
  /* 12cb1fc3 mov esi, esp */
  ESI = (ESP);
  /* 12cb1fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1fc7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb1fc9 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb1fcfu);
  /* 12cb1fcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1fd4 call 0x12cb2ea0 */
  push32(0x12cb1fd9u); f_12cb2ea0();
  /* 12cb1fd9 mov esi, esp */
  ESI = (ESP);
  /* 12cb1fdb push -0x32 */
  push32((uint32_t)(0xffffffceu));
  /* 12cb1fdd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb1fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb1fe1 call dword ptr [0x12ce3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3444))), 0x12cb1fe7u);
  /* 12cb1fe7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb1fea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb1fec call 0x12cb2ea0 */
  push32(0x12cb1ff1u); f_12cb2ea0();
  /* 12cb1ff1 mov esi, esp */
  ESI = (ESP);
  /* 12cb1ff3 push 0x12cdb2a4 */
  push32((uint32_t)(0x12cdb2a4u));
  /* 12cb1ff8 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb1ffeu);
  /* 12cb1ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2003 call 0x12cb2ea0 */
  push32(0x12cb2008u); f_12cb2ea0();
  /* 12cb2008 jmp 0x12cb2021 */
  goto L_12cb2021;
L_12cb200a:;
  /* 12cb200a mov esi, esp */
  ESI = (ESP);
  /* 12cb200c push 0x12cdb298 */
  push32((uint32_t)(0x12cdb298u));
  /* 12cb2011 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb2017u);
  /* 12cb2017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb201a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb201c call 0x12cb2ea0 */
  push32(0x12cb2021u); f_12cb2ea0();
L_12cb2021:;
  /* 12cb2021 mov esi, esp */
  ESI = (ESP);
  /* 12cb2023 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cb2025 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb202bu);
  /* 12cb202b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb202e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2030 call 0x12cb2ea0 */
  push32(0x12cb2035u); f_12cb2ea0();
  /* 12cb2035 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb203a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb203c je 0x12cb20bc */
  if (C.zf) goto L_12cb20bc;
  /* 12cb203e mov esi, esp */
  ESI = (ESP);
  /* 12cb2040 push 0x12ce0410 */
  push32((uint32_t)(0x12ce0410u));
  /* 12cb2045 call dword ptr [0x12ce3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3428))), 0x12cb204bu);
  /* 12cb204b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb204e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2050 call 0x12cb2ea0 */
  push32(0x12cb2055u); f_12cb2ea0();
  /* 12cb2055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2057 jne 0x12cb20bc */
  if (!C.zf) goto L_12cb20bc;
  /* 12cb2059 mov esi, esp */
  ESI = (ESP);
  /* 12cb205b push 0x12ce0408 */
  push32((uint32_t)(0x12ce0408u));
  /* 12cb2060 call dword ptr [0x12ce3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3428))), 0x12cb2066u);
  /* 12cb2066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2069 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb206b call 0x12cb2ea0 */
  push32(0x12cb2070u); f_12cb2ea0();
  /* 12cb2070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2072 jne 0x12cb20bc */
  if (!C.zf) goto L_12cb20bc;
  /* 12cb2074 mov esi, esp */
  ESI = (ESP);
  /* 12cb2076 push 0x12ce0420 */
  push32((uint32_t)(0x12ce0420u));
  /* 12cb207b call dword ptr [0x12ce3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3428))), 0x12cb2081u);
  /* 12cb2081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2084 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2086 call 0x12cb2ea0 */
  push32(0x12cb208bu); f_12cb2ea0();
  /* 12cb208b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb208d jne 0x12cb20bc */
  if (!C.zf) goto L_12cb20bc;
  /* 12cb208f mov esi, esp */
  ESI = (ESP);
  /* 12cb2091 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2093 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cb2095 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb209bu);
  /* 12cb209b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb209e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb20a0 call 0x12cb2ea0 */
  push32(0x12cb20a5u); f_12cb2ea0();
  /* 12cb20a5 mov esi, esp */
  ESI = (ESP);
  /* 12cb20a7 push 0x12cdb290 */
  push32((uint32_t)(0x12cdb290u));
  /* 12cb20ac call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb20b2u);
  /* 12cb20b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb20b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb20b7 call 0x12cb2ea0 */
  push32(0x12cb20bcu); f_12cb2ea0();
L_12cb20bc:;
  /* 12cb20bc mov esi, esp */
  ESI = (ESP);
  /* 12cb20be push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cb20c0 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb20c6u);
  /* 12cb20c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb20c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb20cb call 0x12cb2ea0 */
  push32(0x12cb20d0u); f_12cb2ea0();
  /* 12cb20d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb20d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb20d7 je 0x12cb2140 */
  if (C.zf) goto L_12cb2140;
  /* 12cb20d9 mov esi, esp */
  ESI = (ESP);
  /* 12cb20db push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cb20dd call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb20e3u);
  /* 12cb20e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb20e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb20e8 call 0x12cb2ea0 */
  push32(0x12cb20edu); f_12cb2ea0();
  /* 12cb20ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb20f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb20f4 je 0x12cb2140 */
  if (C.zf) goto L_12cb2140;
  /* 12cb20f6 mov esi, esp */
  ESI = (ESP);
  /* 12cb20f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb20fa push 0x12ce0460 */
  push32((uint32_t)(0x12ce0460u));
  /* 12cb20ff call dword ptr [0x12ce3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3430))), 0x12cb2105u);
  /* 12cb2105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb210a call 0x12cb2ea0 */
  push32(0x12cb210fu); f_12cb2ea0();
  /* 12cb210f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2111 jle 0x12cb2140 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb2140;
  /* 12cb2113 mov esi, esp */
  ESI = (ESP);
  /* 12cb2115 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2117 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cb2119 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb211fu);
  /* 12cb211f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2122 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2124 call 0x12cb2ea0 */
  push32(0x12cb2129u); f_12cb2ea0();
  /* 12cb2129 mov esi, esp */
  ESI = (ESP);
  /* 12cb212b push 0x12cdb288 */
  push32((uint32_t)(0x12cdb288u));
  /* 12cb2130 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb2136u);
  /* 12cb2136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2139 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb213b call 0x12cb2ea0 */
  push32(0x12cb2140u); f_12cb2ea0();
L_12cb2140:;
  /* 12cb2140 mov esi, esp */
  ESI = (ESP);
  /* 12cb2142 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12cb2144 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb214au);
  /* 12cb214a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb214d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb214f call 0x12cb2ea0 */
  push32(0x12cb2154u); f_12cb2ea0();
  /* 12cb2154 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb215b je 0x12cb220f */
  if (C.zf) goto L_12cb220f;
  /* 12cb2161 mov esi, esp */
  ESI = (ESP);
  /* 12cb2163 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cb2165 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb216bu);
  /* 12cb216b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb216e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2170 call 0x12cb2ea0 */
  push32(0x12cb2175u); f_12cb2ea0();
  /* 12cb2175 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb217a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb217c jne 0x12cb220f */
  if (!C.zf) goto L_12cb220f;
  /* 12cb2182 mov esi, esp */
  ESI = (ESP);
  /* 12cb2184 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2186 push 0x12ce0460 */
  push32((uint32_t)(0x12ce0460u));
  /* 12cb218b call dword ptr [0x12ce3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3430))), 0x12cb2191u);
  /* 12cb2191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2194 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2196 call 0x12cb2ea0 */
  push32(0x12cb219bu); f_12cb2ea0();
  /* 12cb219b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb219d jle 0x12cb220f */
  if ((C.zf||C.sf!=C.of)) goto L_12cb220f;
  /* 12cb219f mov esi, esp */
  ESI = (ESP);
  /* 12cb21a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb21a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12cb21a5 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb21abu);
  /* 12cb21ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb21ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb21b0 call 0x12cb2ea0 */
  push32(0x12cb21b5u); f_12cb2ea0();
  /* 12cb21b5 mov esi, esp */
  ESI = (ESP);
  /* 12cb21b7 push 0x12cdb27c */
  push32((uint32_t)(0x12cdb27cu));
  /* 12cb21bc call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb21c2u);
  /* 12cb21c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb21c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb21c7 call 0x12cb2ea0 */
  push32(0x12cb21ccu); f_12cb2ea0();
  /* 12cb21cc mov esi, esp */
  ESI = (ESP);
  /* 12cb21ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb21d0 push 0x12ce04c0 */
  push32((uint32_t)(0x12ce04c0u));
  /* 12cb21d5 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb21dbu);
  /* 12cb21db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb21de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb21e0 call 0x12cb2ea0 */
  push32(0x12cb21e5u); f_12cb2ea0();
  /* 12cb21e5 mov esi, esp */
  ESI = (ESP);
  /* 12cb21e7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb21e9 call dword ptr [0x12ce3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3458))), 0x12cb21efu);
  /* 12cb21ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb21f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb21f4 call 0x12cb2ea0 */
  push32(0x12cb21f9u); f_12cb2ea0();
  /* 12cb21f9 mov esi, esp */
  ESI = (ESP);
  /* 12cb21fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12cb21fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb21ff call dword ptr [0x12ce341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce341c))), 0x12cb2205u);
  /* 12cb2205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb220a call 0x12cb2ea0 */
  push32(0x12cb220fu); f_12cb2ea0();
L_12cb220f:;
  /* 12cb220f mov esi, esp */
  ESI = (ESP);
  /* 12cb2211 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb2213 call dword ptr [0x12ce3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3424))), 0x12cb2219u);
  /* 12cb2219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb221c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb221e call 0x12cb2ea0 */
  push32(0x12cb2223u); f_12cb2ea0();
  /* 12cb2223 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb222a je 0x12cb2243 */
  if (C.zf) goto L_12cb2243;
  /* 12cb222c mov esi, esp */
  ESI = (ESP);
  /* 12cb222e push 0x12cdb270 */
  push32((uint32_t)(0x12cdb270u));
  /* 12cb2233 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb2239u);
  /* 12cb2239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb223c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb223e call 0x12cb2ea0 */
  push32(0x12cb2243u); f_12cb2ea0();
L_12cb2243:;
  /* 12cb2243 mov esi, esp */
  ESI = (ESP);
  /* 12cb2245 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12cb2247 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb224du);
  /* 12cb224d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2250 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2252 call 0x12cb2ea0 */
  push32(0x12cb2257u); f_12cb2ea0();
  /* 12cb2257 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb225c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb225e je 0x12cb22b1 */
  if (C.zf) goto L_12cb22b1;
  /* 12cb2260 mov esi, esp */
  ESI = (ESP);
  /* 12cb2262 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb2264 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb226au);
  /* 12cb226a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb226d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb226f call 0x12cb2ea0 */
  push32(0x12cb2274u); f_12cb2ea0();
  /* 12cb2274 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb227b jne 0x12cb22b1 */
  if (!C.zf) goto L_12cb22b1;
  /* 12cb227d mov esi, esp */
  ESI = (ESP);
  /* 12cb227f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2281 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12cb2283 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb2289u);
  /* 12cb2289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb228c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb228e call 0x12cb2ea0 */
  push32(0x12cb2293u); f_12cb2ea0();
  /* 12cb2293 mov esi, esp */
  ESI = (ESP);
  /* 12cb2295 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2297 push 0x12ce0448 */
  push32((uint32_t)(0x12ce0448u));
  /* 12cb229c push 0x12ce04b8 */
  push32((uint32_t)(0x12ce04b8u));
  /* 12cb22a1 call dword ptr [0x12ce3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3454))), 0x12cb22a7u);
  /* 12cb22a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb22aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb22ac call 0x12cb2ea0 */
  push32(0x12cb22b1u); f_12cb2ea0();
L_12cb22b1:;
  /* 12cb22b1 mov esi, esp */
  ESI = (ESP);
  /* 12cb22b3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12cb22b5 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb22bbu);
  /* 12cb22bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb22be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb22c0 call 0x12cb2ea0 */
  push32(0x12cb22c5u); f_12cb2ea0();
  /* 12cb22c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb22ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb22cc je 0x12cb236d */
  if (C.zf) goto L_12cb236d;
  /* 12cb22d2 mov esi, esp */
  ESI = (ESP);
  /* 12cb22d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb22d6 push 0x12ce0468 */
  push32((uint32_t)(0x12ce0468u));
  /* 12cb22db call dword ptr [0x12ce3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3430))), 0x12cb22e1u);
  /* 12cb22e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb22e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb22e6 call 0x12cb2ea0 */
  push32(0x12cb22ebu); f_12cb2ea0();
  /* 12cb22eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb22ed jle 0x12cb236d */
  if ((C.zf||C.sf!=C.of)) goto L_12cb236d;
  /* 12cb22ef mov esi, esp */
  ESI = (ESP);
  /* 12cb22f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb22f3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12cb22f5 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb22fbu);
  /* 12cb22fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb22fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2300 call 0x12cb2ea0 */
  push32(0x12cb2305u); f_12cb2ea0();
  /* 12cb2305 mov esi, esp */
  ESI = (ESP);
  /* 12cb2307 push 0x12cdb264 */
  push32((uint32_t)(0x12cdb264u));
  /* 12cb230c call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb2312u);
  /* 12cb2312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2315 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2317 call 0x12cb2ea0 */
  push32(0x12cb231cu); f_12cb2ea0();
  /* 12cb231c mov esi, esp */
  ESI = (ESP);
  /* 12cb231e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cb2323 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb2325 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2327 call dword ptr [0x12ce3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3444))), 0x12cb232du);
  /* 12cb232d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2330 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2332 call 0x12cb2ea0 */
  push32(0x12cb2337u); f_12cb2ea0();
  /* 12cb2337 mov esi, esp */
  ESI = (ESP);
  /* 12cb2339 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cb233e push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb2340 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2342 call dword ptr [0x12ce3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3444))), 0x12cb2348u);
  /* 12cb2348 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb234b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb234d call 0x12cb2ea0 */
  push32(0x12cb2352u); f_12cb2ea0();
  /* 12cb2352 mov esi, esp */
  ESI = (ESP);
  /* 12cb2354 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12cb2359 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb235b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb235d call dword ptr [0x12ce3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3444))), 0x12cb2363u);
  /* 12cb2363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2366 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2368 call 0x12cb2ea0 */
  push32(0x12cb236du); f_12cb2ea0();
L_12cb236d:;
  /* 12cb236d mov esi, esp */
  ESI = (ESP);
  /* 12cb236f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cb2371 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb2377u);
  /* 12cb2377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb237a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb237c call 0x12cb2ea0 */
  push32(0x12cb2381u); f_12cb2ea0();
  /* 12cb2381 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2388 je 0x12cb23d4 */
  if (C.zf) goto L_12cb23d4;
  /* 12cb238a mov esi, esp */
  ESI = (ESP);
  /* 12cb238c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb238e push 0x12ce0470 */
  push32((uint32_t)(0x12ce0470u));
  /* 12cb2393 call dword ptr [0x12ce3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3430))), 0x12cb2399u);
  /* 12cb2399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb239c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb239e call 0x12cb2ea0 */
  push32(0x12cb23a3u); f_12cb2ea0();
  /* 12cb23a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb23a5 jle 0x12cb23d4 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb23d4;
  /* 12cb23a7 mov esi, esp */
  ESI = (ESP);
  /* 12cb23a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb23ab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cb23ad call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb23b3u);
  /* 12cb23b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb23b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb23b8 call 0x12cb2ea0 */
  push32(0x12cb23bdu); f_12cb2ea0();
  /* 12cb23bd mov esi, esp */
  ESI = (ESP);
  /* 12cb23bf push 0x12cdb258 */
  push32((uint32_t)(0x12cdb258u));
  /* 12cb23c4 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb23cau);
  /* 12cb23ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb23cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb23cf call 0x12cb2ea0 */
  push32(0x12cb23d4u); f_12cb2ea0();
L_12cb23d4:;
  /* 12cb23d4 mov esi, esp */
  ESI = (ESP);
  /* 12cb23d6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cb23d8 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb23deu);
  /* 12cb23de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb23e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb23e3 call 0x12cb2ea0 */
  push32(0x12cb23e8u); f_12cb2ea0();
  /* 12cb23e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb23ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb23ef je 0x12cb2685 */
  if (C.zf) goto L_12cb2685;
  /* 12cb23f5 mov esi, esp */
  ESI = (ESP);
  /* 12cb23f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb23f9 push 0x12ce0450 */
  push32((uint32_t)(0x12ce0450u));
  /* 12cb23fe call dword ptr [0x12ce3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3430))), 0x12cb2404u);
  /* 12cb2404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2407 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2409 call 0x12cb2ea0 */
  push32(0x12cb240eu); f_12cb2ea0();
  /* 12cb240e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2410 jle 0x12cb2685 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb2685;
  /* 12cb2416 mov esi, esp */
  ESI = (ESP);
  /* 12cb2418 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb241a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cb241c call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb2422u);
  /* 12cb2422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2427 call 0x12cb2ea0 */
  push32(0x12cb242cu); f_12cb2ea0();
  /* 12cb242c mov esi, esp */
  ESI = (ESP);
  /* 12cb242e push 0x12cdb198 */
  push32((uint32_t)(0x12cdb198u));
  /* 12cb2433 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2435 push 0x12cdb18c */
  push32((uint32_t)(0x12cdb18cu));
  /* 12cb243a push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb243c call dword ptr [0x12ce3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3434))), 0x12cb2442u);
  /* 12cb2442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2445 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2447 call 0x12cb2ea0 */
  push32(0x12cb244cu); f_12cb2ea0();
  /* 12cb244c mov dword ptr [0x12ce043c], eax */
  w32((uint32_t)(0x12ce043c), (EAX));
  /* 12cb2451 cmp dword ptr [0x12ce043c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce043c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2458 jne 0x12cb24d7 */
  if (!C.zf) goto L_12cb24d7;
  /* 12cb245a mov esi, esp */
  ESI = (ESP);
  /* 12cb245c push 0x12cdb180 */
  push32((uint32_t)(0x12cdb180u));
  /* 12cb2461 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb2467u);
  /* 12cb2467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb246a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb246c call 0x12cb2ea0 */
  push32(0x12cb2471u); f_12cb2ea0();
  /* 12cb2471 mov esi, esp */
  ESI = (ESP);
  /* 12cb2473 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2475 push 0x12ce03f8 */
  push32((uint32_t)(0x12ce03f8u));
  /* 12cb247a call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb2480u);
  /* 12cb2480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2483 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2485 call 0x12cb2ea0 */
  push32(0x12cb248au); f_12cb2ea0();
  /* 12cb248a mov esi, esp */
  ESI = (ESP);
  /* 12cb248c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb248e push 0x12ce0420 */
  push32((uint32_t)(0x12ce0420u));
  /* 12cb2493 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb2499u);
  /* 12cb2499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb249c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb249e call 0x12cb2ea0 */
  push32(0x12cb24a3u); f_12cb2ea0();
  /* 12cb24a3 mov esi, esp */
  ESI = (ESP);
  /* 12cb24a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb24a7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb24a9 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb24afu);
  /* 12cb24af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb24b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb24b4 call 0x12cb2ea0 */
  push32(0x12cb24b9u); f_12cb2ea0();
  /* 12cb24b9 mov esi, esp */
  ESI = (ESP);
  /* 12cb24bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb24bd push 0x12ce0450 */
  push32((uint32_t)(0x12ce0450u));
  /* 12cb24c2 push 0x12ce03f8 */
  push32((uint32_t)(0x12ce03f8u));
  /* 12cb24c7 call dword ptr [0x12ce3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3454))), 0x12cb24cdu);
  /* 12cb24cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb24d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb24d2 call 0x12cb2ea0 */
  push32(0x12cb24d7u); f_12cb2ea0();
L_12cb24d7:;
  /* 12cb24d7 cmp dword ptr [0x12ce043c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce043c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb24de jne 0x12cb2616 */
  if (!C.zf) goto L_12cb2616;
  /* 12cb24e4 mov esi, esp */
  ESI = (ESP);
  /* 12cb24e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb24e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb24ea call dword ptr [0x12ce3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3438))), 0x12cb24f0u);
  /* 12cb24f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb24f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb24f5 call 0x12cb2ea0 */
  push32(0x12cb24fau); f_12cb2ea0();
  /* 12cb24fa cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb24fd jl 0x12cb2599 */
  if ((C.sf!=C.of)) goto L_12cb2599;
  /* 12cb2503 mov esi, esp */
  ESI = (ESP);
  /* 12cb2505 push 0x12cdb174 */
  push32((uint32_t)(0x12cdb174u));
  /* 12cb250a call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb2510u);
  /* 12cb2510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2515 call 0x12cb2ea0 */
  push32(0x12cb251au); f_12cb2ea0();
  /* 12cb251a mov esi, esp */
  ESI = (ESP);
  /* 12cb251c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb251e push 0x12ce03f8 */
  push32((uint32_t)(0x12ce03f8u));
  /* 12cb2523 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb2529u);
  /* 12cb2529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb252c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb252e call 0x12cb2ea0 */
  push32(0x12cb2533u); f_12cb2ea0();
  /* 12cb2533 mov esi, esp */
  ESI = (ESP);
  /* 12cb2535 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2537 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2539 push 0x12ce0478 */
  push32((uint32_t)(0x12ce0478u));
  /* 12cb253e push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb2540 call dword ptr [0x12ce3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3440))), 0x12cb2546u);
  /* 12cb2546 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb254b call 0x12cb2ea0 */
  push32(0x12cb2550u); f_12cb2ea0();
  /* 12cb2550 mov esi, esp */
  ESI = (ESP);
  /* 12cb2552 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2554 push 0x12ce0420 */
  push32((uint32_t)(0x12ce0420u));
  /* 12cb2559 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb255fu);
  /* 12cb255f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2562 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2564 call 0x12cb2ea0 */
  push32(0x12cb2569u); f_12cb2ea0();
  /* 12cb2569 mov esi, esp */
  ESI = (ESP);
  /* 12cb256b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb256d push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb256f call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb2575u);
  /* 12cb2575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2578 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb257a call 0x12cb2ea0 */
  push32(0x12cb257fu); f_12cb2ea0();
  /* 12cb257f mov esi, esp */
  ESI = (ESP);
  /* 12cb2581 push -0x3c */
  push32((uint32_t)(0xffffffc4u));
  /* 12cb2583 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb2585 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2587 call dword ptr [0x12ce3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3444))), 0x12cb258du);
  /* 12cb258d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2590 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2592 call 0x12cb2ea0 */
  push32(0x12cb2597u); f_12cb2ea0();
  /* 12cb2597 jmp 0x12cb2616 */
  goto L_12cb2616;
L_12cb2599:;
  /* 12cb2599 mov esi, esp */
  ESI = (ESP);
  /* 12cb259b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb259d push 0x12ce03f8 */
  push32((uint32_t)(0x12ce03f8u));
  /* 12cb25a2 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb25a8u);
  /* 12cb25a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb25ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb25ad call 0x12cb2ea0 */
  push32(0x12cb25b2u); f_12cb2ea0();
  /* 12cb25b2 mov esi, esp */
  ESI = (ESP);
  /* 12cb25b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb25b6 push 0x12ce0420 */
  push32((uint32_t)(0x12ce0420u));
  /* 12cb25bb call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb25c1u);
  /* 12cb25c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb25c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb25c6 call 0x12cb2ea0 */
  push32(0x12cb25cbu); f_12cb2ea0();
  /* 12cb25cb mov esi, esp */
  ESI = (ESP);
  /* 12cb25cd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb25cf push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb25d1 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb25d7u);
  /* 12cb25d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb25da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb25dc call 0x12cb2ea0 */
  push32(0x12cb25e1u); f_12cb2ea0();
  /* 12cb25e1 mov esi, esp */
  ESI = (ESP);
  /* 12cb25e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb25e5 push 0x12ce0450 */
  push32((uint32_t)(0x12ce0450u));
  /* 12cb25ea push 0x12ce03f8 */
  push32((uint32_t)(0x12ce03f8u));
  /* 12cb25ef call dword ptr [0x12ce3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3454))), 0x12cb25f5u);
  /* 12cb25f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb25f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb25fa call 0x12cb2ea0 */
  push32(0x12cb25ffu); f_12cb2ea0();
  /* 12cb25ff mov esi, esp */
  ESI = (ESP);
  /* 12cb2601 push 0x12cdb168 */
  push32((uint32_t)(0x12cdb168u));
  /* 12cb2606 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb260cu);
  /* 12cb260c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb260f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2611 call 0x12cb2ea0 */
  push32(0x12cb2616u); f_12cb2ea0();
L_12cb2616:;
  /* 12cb2616 cmp dword ptr [0x12ce043c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce043c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb261d jne 0x12cb2685 */
  if (!C.zf) goto L_12cb2685;
  /* 12cb261f mov esi, esp */
  ESI = (ESP);
  /* 12cb2621 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2623 push 0x12ce03f8 */
  push32((uint32_t)(0x12ce03f8u));
  /* 12cb2628 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb262eu);
  /* 12cb262e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2631 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2633 call 0x12cb2ea0 */
  push32(0x12cb2638u); f_12cb2ea0();
  /* 12cb2638 mov esi, esp */
  ESI = (ESP);
  /* 12cb263a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb263c push 0x12ce0420 */
  push32((uint32_t)(0x12ce0420u));
  /* 12cb2641 call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb2647u);
  /* 12cb2647 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb264a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb264c call 0x12cb2ea0 */
  push32(0x12cb2651u); f_12cb2ea0();
  /* 12cb2651 mov esi, esp */
  ESI = (ESP);
  /* 12cb2653 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb2655 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb2657 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb265du);
  /* 12cb265d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2660 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2662 call 0x12cb2ea0 */
  push32(0x12cb2667u); f_12cb2ea0();
  /* 12cb2667 mov esi, esp */
  ESI = (ESP);
  /* 12cb2669 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb266b push 0x12ce0450 */
  push32((uint32_t)(0x12ce0450u));
  /* 12cb2670 push 0x12ce03f8 */
  push32((uint32_t)(0x12ce03f8u));
  /* 12cb2675 call dword ptr [0x12ce3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3454))), 0x12cb267bu);
  /* 12cb267b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb267e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2680 call 0x12cb2ea0 */
  push32(0x12cb2685u); f_12cb2ea0();
L_12cb2685:;
  /* 12cb2685 mov esi, esp */
  ESI = (ESP);
  /* 12cb2687 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12cb2689 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb268fu);
  /* 12cb268f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2694 call 0x12cb2ea0 */
  push32(0x12cb2699u); f_12cb2ea0();
  /* 12cb2699 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb269e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb26a0 je 0x12cb2719 */
  if (C.zf) goto L_12cb2719;
  /* 12cb26a2 mov esi, esp */
  ESI = (ESP);
  /* 12cb26a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb26a6 push 0x12ce0420 */
  push32((uint32_t)(0x12ce0420u));
  /* 12cb26ab call dword ptr [0x12ce344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce344c))), 0x12cb26b1u);
  /* 12cb26b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb26b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb26b6 call 0x12cb2ea0 */
  push32(0x12cb26bbu); f_12cb2ea0();
  /* 12cb26bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb26bd jle 0x12cb2719 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb2719;
  /* 12cb26bf mov esi, esp */
  ESI = (ESP);
  /* 12cb26c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb26c3 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12cb26c5 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb26cbu);
  /* 12cb26cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb26ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb26d0 call 0x12cb2ea0 */
  push32(0x12cb26d5u); f_12cb2ea0();
  /* 12cb26d5 mov esi, esp */
  ESI = (ESP);
  /* 12cb26d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb26d9 push 0x12ce0420 */
  push32((uint32_t)(0x12ce0420u));
  /* 12cb26de call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb26e4u);
  /* 12cb26e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb26e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb26e9 call 0x12cb2ea0 */
  push32(0x12cb26eeu); f_12cb2ea0();
  /* 12cb26ee mov esi, esp */
  ESI = (ESP);
  /* 12cb26f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb26f2 call dword ptr [0x12ce3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3450))), 0x12cb26f8u);
  /* 12cb26f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb26fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb26fd call 0x12cb2ea0 */
  push32(0x12cb2702u); f_12cb2ea0();
  /* 12cb2702 mov esi, esp */
  ESI = (ESP);
  /* 12cb2704 push 0x12cdb15c */
  push32((uint32_t)(0x12cdb15cu));
  /* 12cb2709 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb270fu);
  /* 12cb270f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2714 call 0x12cb2ea0 */
  push32(0x12cb2719u); f_12cb2ea0();
L_12cb2719:;
  /* 12cb2719 mov esi, esp */
  ESI = (ESP);
  /* 12cb271b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cb271d call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb2723u);
  /* 12cb2723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2728 call 0x12cb2ea0 */
  push32(0x12cb272du); f_12cb2ea0();
  /* 12cb272d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2734 je 0x12cb27c7 */
  if (C.zf) goto L_12cb27c7;
  /* 12cb273a mov esi, esp */
  ESI = (ESP);
  /* 12cb273c push 0x12ce0498 */
  push32((uint32_t)(0x12ce0498u));
  /* 12cb2741 call dword ptr [0x12ce3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3428))), 0x12cb2747u);
  /* 12cb2747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb274a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb274c call 0x12cb2ea0 */
  push32(0x12cb2751u); f_12cb2ea0();
  /* 12cb2751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2753 jne 0x12cb27c7 */
  if (!C.zf) goto L_12cb27c7;
  /* 12cb2755 mov esi, esp */
  ESI = (ESP);
  /* 12cb2757 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2759 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cb275b call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb2761u);
  /* 12cb2761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2764 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2766 call 0x12cb2ea0 */
  push32(0x12cb276bu); f_12cb2ea0();
  /* 12cb276b mov esi, esp */
  ESI = (ESP);
  /* 12cb276d push 0x12cdb150 */
  push32((uint32_t)(0x12cdb150u));
  /* 12cb2772 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb2778u);
  /* 12cb2778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb277b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb277d call 0x12cb2ea0 */
  push32(0x12cb2782u); f_12cb2ea0();
  /* 12cb2782 mov esi, esp */
  ESI = (ESP);
  /* 12cb2784 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb2786 push 0x12ce04a8 */
  push32((uint32_t)(0x12ce04a8u));
  /* 12cb278b call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb2791u);
  /* 12cb2791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2796 call 0x12cb2ea0 */
  push32(0x12cb279bu); f_12cb2ea0();
  /* 12cb279b mov esi, esp */
  ESI = (ESP);
  /* 12cb279d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb279f push 5 */
  push32((uint32_t)(0x5u));
  /* 12cb27a1 call dword ptr [0x12ce343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce343c))), 0x12cb27a7u);
  /* 12cb27a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb27aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb27ac call 0x12cb2ea0 */
  push32(0x12cb27b1u); f_12cb2ea0();
  /* 12cb27b1 mov esi, esp */
  ESI = (ESP);
  /* 12cb27b3 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cb27b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb27b7 call dword ptr [0x12ce341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce341c))), 0x12cb27bdu);
  /* 12cb27bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb27c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb27c2 call 0x12cb2ea0 */
  push32(0x12cb27c7u); f_12cb2ea0();
L_12cb27c7:;
  /* 12cb27c7 mov esi, esp */
  ESI = (ESP);
  /* 12cb27c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb27cb call dword ptr [0x12ce345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce345c))), 0x12cb27d1u);
  /* 12cb27d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb27d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb27d6 call 0x12cb2ea0 */
  push32(0x12cb27dbu); f_12cb2ea0();
  /* 12cb27db and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb27e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb27e2 je 0x12cb2816 */
  if (C.zf) goto L_12cb2816;
  /* 12cb27e4 mov esi, esp */
  ESI = (ESP);
  /* 12cb27e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb27e8 push 0x12ce04b0 */
  push32((uint32_t)(0x12ce04b0u));
  /* 12cb27ed call dword ptr [0x12ce3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3410))), 0x12cb27f3u);
  /* 12cb27f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb27f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb27f8 call 0x12cb2ea0 */
  push32(0x12cb27fdu); f_12cb2ea0();
  /* 12cb27fd mov esi, esp */
  ESI = (ESP);
  /* 12cb27ff push 0x12ce04a8 */
  push32((uint32_t)(0x12ce04a8u));
  /* 12cb2804 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb2806 call dword ptr [0x12ce3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3460))), 0x12cb280cu);
  /* 12cb280c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb280f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2811 call 0x12cb2ea0 */
  push32(0x12cb2816u); f_12cb2ea0();
L_12cb2816:;
  /* 12cb2816 mov esi, esp */
  ESI = (ESP);
  /* 12cb2818 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12cb281a call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb2820u);
  /* 12cb2820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2825 call 0x12cb2ea0 */
  push32(0x12cb282au); f_12cb2ea0();
  /* 12cb282a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb282f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2831 je 0x12cb2874 */
  if (C.zf) goto L_12cb2874;
  /* 12cb2833 mov esi, esp */
  ESI = (ESP);
  /* 12cb2835 push 0x12ce04a0 */
  push32((uint32_t)(0x12ce04a0u));
  /* 12cb283a call dword ptr [0x12ce3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3428))), 0x12cb2840u);
  /* 12cb2840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2845 call 0x12cb2ea0 */
  push32(0x12cb284au); f_12cb2ea0();
  /* 12cb284a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb284c jne 0x12cb2874 */
  if (!C.zf) goto L_12cb2874;
  /* 12cb284e mov esi, esp */
  ESI = (ESP);
  /* 12cb2850 push 0x12cdb144 */
  push32((uint32_t)(0x12cdb144u));
  /* 12cb2855 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb285bu);
  /* 12cb285b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb285e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2860 call 0x12cb2ea0 */
  push32(0x12cb2865u); f_12cb2ea0();
  /* 12cb2865 mov esi, esp */
  ESI = (ESP);
  /* 12cb2867 call dword ptr [0x12ce342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce342c))), 0x12cb286du);
  /* 12cb286d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb286f call 0x12cb2ea0 */
  push32(0x12cb2874u); f_12cb2ea0();
L_12cb2874:;
  /* 12cb2874 mov esi, esp */
  ESI = (ESP);
  /* 12cb2876 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12cb2878 call dword ptr [0x12ce3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3400))), 0x12cb287eu);
  /* 12cb287e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2883 call 0x12cb2ea0 */
  push32(0x12cb2888u); f_12cb2ea0();
  /* 12cb2888 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb288d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb288f je 0x12cb28e8 */
  if (C.zf) goto L_12cb28e8;
  /* 12cb2891 mov esi, esp */
  ESI = (ESP);
  /* 12cb2893 push 0x12ce04b0 */
  push32((uint32_t)(0x12ce04b0u));
  /* 12cb2898 call dword ptr [0x12ce3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3428))), 0x12cb289eu);
  /* 12cb289e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb28a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb28a3 call 0x12cb2ea0 */
  push32(0x12cb28a8u); f_12cb2ea0();
  /* 12cb28a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb28aa jne 0x12cb28e8 */
  if (!C.zf) goto L_12cb28e8;
  /* 12cb28ac mov esi, esp */
  ESI = (ESP);
  /* 12cb28ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb28b0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12cb28b2 call dword ptr [0x12ce3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3404))), 0x12cb28b8u);
  /* 12cb28b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb28bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb28bd call 0x12cb2ea0 */
  push32(0x12cb28c2u); f_12cb2ea0();
  /* 12cb28c2 mov esi, esp */
  ESI = (ESP);
  /* 12cb28c4 push 0x12cdb138 */
  push32((uint32_t)(0x12cdb138u));
  /* 12cb28c9 call dword ptr [0x12ce340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce340c))), 0x12cb28cfu);
  /* 12cb28cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb28d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb28d4 call 0x12cb2ea0 */
  push32(0x12cb28d9u); f_12cb2ea0();
  /* 12cb28d9 mov esi, esp */
  ESI = (ESP);
  /* 12cb28db call dword ptr [0x12ce3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3464))), 0x12cb28e1u);
  /* 12cb28e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb28e3 call 0x12cb2ea0 */
  push32(0x12cb28e8u); f_12cb2ea0();
L_12cb28e8:;
  /* 12cb28e8 pop edi */
  EDI = (pop32());
  /* 12cb28e9 pop esi */
  ESI = (pop32());
  /* 12cb28ea pop ebx */
  EBX = (pop32());
  /* 12cb28eb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb28ee cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb28f0 call 0x12cb2ea0 */
  push32(0x12cb28f5u); f_12cb2ea0();
  /* 12cb28f5 mov esp, ebp */
  ESP = (EBP);
  /* 12cb28f7 pop ebp */
  EBP = (pop32());
  /* 12cb28f8 ret  */
  ESPCHK(0x12cb1540u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12cb2ea0 (56 bytes, 28 insns) */
void f_12cb2ea0(void) {
  FTRACE(0x12cb2ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb2ea0 jne 0x12cb2ea3 */
  if (!C.zf) goto L_12cb2ea3;
  /* 12cb2ea2 ret  */
  ESPCHK(0x12cb2ea0u, _esp0);
  ESP += 4; return;
L_12cb2ea3:;
  /* 12cb2ea3 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb2ea4 mov ebp, esp */
  EBP = (ESP);
  /* 12cb2ea6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb2ea9 push eax */
  push32((uint32_t)(EAX));
  /* 12cb2eaa push edx */
  push32((uint32_t)(EDX));
  /* 12cb2eab push ebx */
  push32((uint32_t)(EBX));
  /* 12cb2eac push esi */
  push32((uint32_t)(ESI));
  /* 12cb2ead push edi */
  push32((uint32_t)(EDI));
  /* 12cb2eae push 0x12cdb4e8 */
  push32((uint32_t)(0x12cdb4e8u));
  /* 12cb2eb3 push 0x12cdb4e4 */
  push32((uint32_t)(0x12cdb4e4u));
  /* 12cb2eb8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12cb2eba push 0x12cdb4d4 */
  push32((uint32_t)(0x12cdb4d4u));
  /* 12cb2ebf push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb2ec1 call 0x12cb3270 */
  push32(0x12cb2ec6u); f_12cb3270();
  /* 12cb2ec6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2ec9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2ecc jne 0x12cb2ecf */
  if (!C.zf) goto L_12cb2ecf;
  /* 12cb2ece int3  */
  x86_unimpl("int3 @ 0x12cb2ece");
L_12cb2ecf:;
  /* 12cb2ecf pop edi */
  EDI = (pop32());
  /* 12cb2ed0 pop esi */
  ESI = (pop32());
  /* 12cb2ed1 pop ebx */
  EBX = (pop32());
  /* 12cb2ed2 pop edx */
  EDX = (pop32());
  /* 12cb2ed3 pop eax */
  EAX = (pop32());
  /* 12cb2ed4 mov esp, ebp */
  ESP = (EBP);
  /* 12cb2ed6 pop ebp */
  EBP = (pop32());
  /* 12cb2ed7 ret  */
  ESPCHK(0x12cb2ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee0 @ 0x12cb2ee0 (313 bytes, 78 insns) */
void f_12cb2ee0(void) {
  FTRACE(0x12cb2ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb2ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb2ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb2ee3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2ee7 jne 0x12cb2fa7 */
  if (!C.zf) goto L_12cb2fa7;
  /* 12cb2eed call dword ptr [0x12ce32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32fc))), 0x12cb2ef3u);
  /* 12cb2ef3 mov dword ptr [0x12ce0518], eax */
  w32((uint32_t)(0x12ce0518), (EAX));
  /* 12cb2ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb2efa call 0x12cb69a0 */
  push32(0x12cb2effu); f_12cb69a0();
  /* 12cb2eff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2f04 jne 0x12cb2f0d */
  if (!C.zf) goto L_12cb2f0d;
  /* 12cb2f06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2f08 jmp 0x12cb3015 */
  goto L_12cb3015;
L_12cb2f0d:;
  /* 12cb2f0d mov eax, dword ptr [0x12ce0518] */
  EAX = (r32((uint32_t)(0x12ce0518)));
  /* 12cb2f12 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12cb2f15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2f1a mov dword ptr [0x12ce0524], eax */
  w32((uint32_t)(0x12ce0524), (EAX));
  /* 12cb2f1f mov ecx, dword ptr [0x12ce0518] */
  ECX = (r32((uint32_t)(0x12ce0518)));
  /* 12cb2f25 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb2f2b mov dword ptr [0x12ce0520], ecx */
  w32((uint32_t)(0x12ce0520), (ECX));
  /* 12cb2f31 mov edx, dword ptr [0x12ce0520] */
  EDX = (r32((uint32_t)(0x12ce0520)));
  /* 12cb2f37 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12cb2f3a add edx, dword ptr [0x12ce0524] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ce0524))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2f40 mov dword ptr [0x12ce051c], edx */
  w32((uint32_t)(0x12ce051c), (EDX));
  /* 12cb2f46 mov eax, dword ptr [0x12ce0518] */
  EAX = (r32((uint32_t)(0x12ce0518)));
  /* 12cb2f4b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cb2f4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2f53 mov dword ptr [0x12ce0518], eax */
  w32((uint32_t)(0x12ce0518), (EAX));
  /* 12cb2f58 call 0x12cb3b10 */
  push32(0x12cb2f5du); f_12cb3b10();
  /* 12cb2f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2f5f jne 0x12cb2f6d */
  if (!C.zf) goto L_12cb2f6d;
  /* 12cb2f61 call 0x12cb69f0 */
  push32(0x12cb2f66u); f_12cb69f0();
  /* 12cb2f66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2f68 jmp 0x12cb3015 */
  goto L_12cb3015;
L_12cb2f6d:;
  /* 12cb2f6d call dword ptr [0x12ce32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32f8))), 0x12cb2f73u);
  /* 12cb2f73 mov dword ptr [0x12ce206c], eax */
  w32((uint32_t)(0x12ce206c), (EAX));
  /* 12cb2f78 call 0x12cb6780 */
  push32(0x12cb2f7du); f_12cb6780();
  /* 12cb2f7d mov dword ptr [0x12ce0500], eax */
  w32((uint32_t)(0x12ce0500), (EAX));
  /* 12cb2f82 call 0x12cb3dc0 */
  push32(0x12cb2f87u); f_12cb3dc0();
  /* 12cb2f87 call 0x12cb6270 */
  push32(0x12cb2f8cu); f_12cb6270();
  /* 12cb2f8c call 0x12cb6120 */
  push32(0x12cb2f91u); f_12cb6120();
  /* 12cb2f91 call 0x12cb3910 */
  push32(0x12cb2f96u); f_12cb3910();
  /* 12cb2f96 mov ecx, dword ptr [0x12ce04fc] */
  ECX = (r32((uint32_t)(0x12ce04fc)));
  /* 12cb2f9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2f9f mov dword ptr [0x12ce04fc], ecx */
  w32((uint32_t)(0x12ce04fc), (ECX));
  /* 12cb2fa5 jmp 0x12cb3010 */
  goto L_12cb3010;
L_12cb2fa7:;
  /* 12cb2fa7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2fab jne 0x12cb3000 */
  if (!C.zf) goto L_12cb3000;
  /* 12cb2fad cmp dword ptr [0x12ce04fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce04fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2fb4 jle 0x12cb2ffa */
  if ((C.zf||C.sf!=C.of)) goto L_12cb2ffa;
  /* 12cb2fb6 mov edx, dword ptr [0x12ce04fc] */
  EDX = (r32((uint32_t)(0x12ce04fc)));
  /* 12cb2fbc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb2fbf mov dword ptr [0x12ce04fc], edx */
  w32((uint32_t)(0x12ce04fc), (EDX));
  /* 12cb2fc5 cmp dword ptr [0x12ce0550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb2fcc jne 0x12cb2fd3 */
  if (!C.zf) goto L_12cb2fd3;
  /* 12cb2fce call 0x12cb3990 */
  push32(0x12cb2fd3u); f_12cb3990();
L_12cb2fd3:;
  /* 12cb2fd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cb2fd5 call 0x12cb56c0 */
  push32(0x12cb2fdau); f_12cb56c0();
  /* 12cb2fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb2fdd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2fe0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb2fe2 je 0x12cb2fe9 */
  if (C.zf) goto L_12cb2fe9;
  /* 12cb2fe4 call 0x12cb5fd0 */
  push32(0x12cb2fe9u); f_12cb5fd0();
L_12cb2fe9:;
  /* 12cb2fe9 call 0x12cb40f0 */
  push32(0x12cb2feeu); f_12cb40f0();
  /* 12cb2fee call 0x12cb3ba0 */
  push32(0x12cb2ff3u); f_12cb3ba0();
  /* 12cb2ff3 call 0x12cb69f0 */
  push32(0x12cb2ff8u); f_12cb69f0();
  /* 12cb2ff8 jmp 0x12cb2ffe */
  goto L_12cb2ffe;
L_12cb2ffa:;
  /* 12cb2ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb2ffc jmp 0x12cb3015 */
  goto L_12cb3015;
L_12cb2ffe:;
  /* 12cb2ffe jmp 0x12cb3010 */
  goto L_12cb3010;
L_12cb3000:;
  /* 12cb3000 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3004 jne 0x12cb3010 */
  if (!C.zf) goto L_12cb3010;
  /* 12cb3006 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb3008 call 0x12cb3c90 */
  push32(0x12cb300du); f_12cb3c90();
  /* 12cb300d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3010:;
  /* 12cb3010 mov eax, 1 */
  EAX = (0x1u);
L_12cb3015:;
  /* 12cb3015 pop ebp */
  EBP = (pop32());
  /* 12cb3016 ret 0xc */
  ESPCHK(0x12cb2ee0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12cb3020 (243 bytes, 86 insns) */
void f_12cb3020(void) {
  FTRACE(0x12cb3020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3020 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3021 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3023 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3024 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cb302b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb302f jne 0x12cb3041 */
  if (!C.zf) goto L_12cb3041;
  /* 12cb3031 cmp dword ptr [0x12ce04fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce04fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3038 jne 0x12cb3041 */
  if (!C.zf) goto L_12cb3041;
  /* 12cb303a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb303c jmp 0x12cb310d */
  goto L_12cb310d;
L_12cb3041:;
  /* 12cb3041 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3045 je 0x12cb304d */
  if (C.zf) goto L_12cb304d;
  /* 12cb3047 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb304b jne 0x12cb308f */
  if (!C.zf) goto L_12cb308f;
L_12cb304d:;
  /* 12cb304d cmp dword ptr [0x12ce207c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce207c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3054 je 0x12cb306b */
  if (C.zf) goto L_12cb306b;
  /* 12cb3056 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb3059 push eax */
  push32((uint32_t)(EAX));
  /* 12cb305a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb305d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb305e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3061 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3062 call dword ptr [0x12ce207c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce207c))), 0x12cb3068u);
  /* 12cb3068 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb306b:;
  /* 12cb306b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb306f je 0x12cb3085 */
  if (C.zf) goto L_12cb3085;
  /* 12cb3071 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb3074 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3075 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb3078 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb307c push edx */
  push32((uint32_t)(EDX));
  /* 12cb307d call 0x12cb2ee0 */
  push32(0x12cb3082u); f_12cb2ee0();
  /* 12cb3082 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb3085:;
  /* 12cb3085 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3089 jne 0x12cb308f */
  if (!C.zf) goto L_12cb308f;
  /* 12cb308b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb308d jmp 0x12cb310d */
  goto L_12cb310d;
L_12cb308f:;
  /* 12cb308f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb3092 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3093 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb3096 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb309a push edx */
  push32((uint32_t)(EDX));
  /* 12cb309b call 0x12cb100a */
  push32(0x12cb30a0u); f_12cb100a();
  /* 12cb30a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb30a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb30a7 jne 0x12cb30be */
  if (!C.zf) goto L_12cb30be;
  /* 12cb30a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb30ad jne 0x12cb30be */
  if (!C.zf) goto L_12cb30be;
  /* 12cb30af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb30b2 push eax */
  push32((uint32_t)(EAX));
  /* 12cb30b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb30b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb30b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb30b9 call 0x12cb2ee0 */
  push32(0x12cb30beu); f_12cb2ee0();
L_12cb30be:;
  /* 12cb30be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb30c2 je 0x12cb30ca */
  if (C.zf) goto L_12cb30ca;
  /* 12cb30c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb30c8 jne 0x12cb310a */
  if (!C.zf) goto L_12cb310a;
L_12cb30ca:;
  /* 12cb30ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb30cd push edx */
  push32((uint32_t)(EDX));
  /* 12cb30ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb30d1 push eax */
  push32((uint32_t)(EAX));
  /* 12cb30d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb30d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb30d6 call 0x12cb2ee0 */
  push32(0x12cb30dbu); f_12cb2ee0();
  /* 12cb30db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb30dd jne 0x12cb30e6 */
  if (!C.zf) goto L_12cb30e6;
  /* 12cb30df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cb30e6:;
  /* 12cb30e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb30ea je 0x12cb310a */
  if (C.zf) goto L_12cb310a;
  /* 12cb30ec cmp dword ptr [0x12ce207c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce207c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb30f3 je 0x12cb310a */
  if (C.zf) goto L_12cb310a;
  /* 12cb30f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb30f8 push edx */
  push32((uint32_t)(EDX));
  /* 12cb30f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb30fc push eax */
  push32((uint32_t)(EAX));
  /* 12cb30fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3100 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3101 call dword ptr [0x12ce207c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce207c))), 0x12cb3107u);
  /* 12cb3107 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb310a:;
  /* 12cb310a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cb310d:;
  /* 12cb310d mov esp, ebp */
  ESP = (EBP);
  /* 12cb310f pop ebp */
  EBP = (pop32());
  /* 12cb3110 ret 0xc */
  ESPCHK(0x12cb3020u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12cb3120 (58 bytes, 18 insns) */
void f_12cb3120(void) {
  FTRACE(0x12cb3120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3120 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3121 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3123 cmp dword ptr [0x12ce0508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb312a je 0x12cb313e */
  if (C.zf) goto L_12cb313e;
  /* 12cb312c cmp dword ptr [0x12ce0508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3133 jne 0x12cb3143 */
  if (!C.zf) goto L_12cb3143;
  /* 12cb3135 cmp dword ptr [0x12ce050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb313c jne 0x12cb3143 */
  if (!C.zf) goto L_12cb3143;
L_12cb313e:;
  /* 12cb313e call 0x12cb6a90 */
  push32(0x12cb3143u); f_12cb6a90();
L_12cb3143:;
  /* 12cb3143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3146 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3147 call 0x12cb6ae0 */
  push32(0x12cb314cu); f_12cb6ae0();
  /* 12cb314c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb314f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cb3154 call dword ptr [0x12cdea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cdea30))), 0x12cb315au);
  /* 12cb315a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb315d pop ebp */
  EBP = (pop32());
  /* 12cb315e ret  */
  ESPCHK(0x12cb3120u, _esp0);
  ESP += 4; return;
}

/* FUN_10003160 @ 0x12cb3160 (11 bytes, 5 insns) */
void f_12cb3160(void) {
  FTRACE(0x12cb3160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3160 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3161 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3163 call dword ptr [0x12ce3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3300))), 0x12cb3169u);
  /* 12cb3169 pop ebp */
  EBP = (pop32());
  /* 12cb316a ret  */
  ESPCHK(0x12cb3160u, _esp0);
  ESP += 4; return;
}

/* FUN_10003170 @ 0x12cb3170 (87 bytes, 30 insns) */
void f_12cb3170(void) {
  FTRACE(0x12cb3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3170 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3171 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3173 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3174 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3178 jl 0x12cb3180 */
  if ((C.sf!=C.of)) goto L_12cb3180;
  /* 12cb317a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb317e jl 0x12cb3185 */
  if ((C.sf!=C.of)) goto L_12cb3185;
L_12cb3180:;
  /* 12cb3180 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb3183 jmp 0x12cb31c3 */
  goto L_12cb31c3;
L_12cb3185:;
  /* 12cb3185 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3189 jne 0x12cb3197 */
  if (!C.zf) goto L_12cb3197;
  /* 12cb318b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb318e mov eax, dword ptr [eax*4 + 0x12cdea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12cdea38)));
  /* 12cb3195 jmp 0x12cb31c3 */
  goto L_12cb31c3;
L_12cb3197:;
  /* 12cb3197 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb319a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb319d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb319f je 0x12cb31a6 */
  if (C.zf) goto L_12cb31a6;
  /* 12cb31a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb31a4 jmp 0x12cb31c3 */
  goto L_12cb31c3;
L_12cb31a6:;
  /* 12cb31a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb31a9 mov eax, dword ptr [edx*4 + 0x12cdea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12cdea38)));
  /* 12cb31b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb31b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb31b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb31b9 mov dword ptr [ecx*4 + 0x12cdea38], edx */
  w32((uint32_t)(ECX*4 + 0x12cdea38), (EDX));
  /* 12cb31c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cb31c3:;
  /* 12cb31c3 mov esp, ebp */
  ESP = (EBP);
  /* 12cb31c5 pop ebp */
  EBP = (pop32());
  /* 12cb31c6 ret  */
  ESPCHK(0x12cb3170u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12cb31d0 (126 bytes, 38 insns) */
void f_12cb31d0(void) {
  FTRACE(0x12cb31d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb31d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb31d1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb31d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb31d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb31d8 jl 0x12cb31e0 */
  if ((C.sf!=C.of)) goto L_12cb31e0;
  /* 12cb31da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb31de jl 0x12cb31e7 */
  if ((C.sf!=C.of)) goto L_12cb31e7;
L_12cb31e0:;
  /* 12cb31e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12cb31e5 jmp 0x12cb324a */
  goto L_12cb324a;
L_12cb31e7:;
  /* 12cb31e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb31eb jne 0x12cb31f9 */
  if (!C.zf) goto L_12cb31f9;
  /* 12cb31ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb31f0 mov eax, dword ptr [eax*4 + 0x12cdea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12cdea44)));
  /* 12cb31f7 jmp 0x12cb324a */
  goto L_12cb324a;
L_12cb31f9:;
  /* 12cb31f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb31fc mov edx, dword ptr [ecx*4 + 0x12cdea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdea44)));
  /* 12cb3203 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb3206 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb320a jne 0x12cb3220 */
  if (!C.zf) goto L_12cb3220;
  /* 12cb320c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12cb320e call dword ptr [0x12ce3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3304))), 0x12cb3214u);
  /* 12cb3214 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3217 mov dword ptr [ecx*4 + 0x12cdea44], eax */
  w32((uint32_t)(ECX*4 + 0x12cdea44), (EAX));
  /* 12cb321e jmp 0x12cb3247 */
  goto L_12cb3247;
L_12cb3220:;
  /* 12cb3220 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3224 jne 0x12cb323a */
  if (!C.zf) goto L_12cb323a;
  /* 12cb3226 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12cb3228 call dword ptr [0x12ce3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3304))), 0x12cb322eu);
  /* 12cb322e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3231 mov dword ptr [edx*4 + 0x12cdea44], eax */
  w32((uint32_t)(EDX*4 + 0x12cdea44), (EAX));
  /* 12cb3238 jmp 0x12cb3247 */
  goto L_12cb3247;
L_12cb323a:;
  /* 12cb323a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb323d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb3240 mov dword ptr [eax*4 + 0x12cdea44], ecx */
  w32((uint32_t)(EAX*4 + 0x12cdea44), (ECX));
L_12cb3247:;
  /* 12cb3247 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cb324a:;
  /* 12cb324a mov esp, ebp */
  ESP = (EBP);
  /* 12cb324c pop ebp */
  EBP = (pop32());
  /* 12cb324d ret  */
  ESPCHK(0x12cb31d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x12cb3250 (28 bytes, 11 insns) */
void f_12cb3250(void) {
  FTRACE(0x12cb3250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3250 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3251 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3253 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3254 mov eax, dword ptr [0x12ce2060] */
  EAX = (r32((uint32_t)(0x12ce2060)));
  /* 12cb3259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb325c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb325f mov dword ptr [0x12ce2060], ecx */
  w32((uint32_t)(0x12ce2060), (ECX));
  /* 12cb3265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3268 mov esp, ebp */
  ESP = (EBP);
  /* 12cb326a pop ebp */
  EBP = (pop32());
  /* 12cb326b ret  */
  ESPCHK(0x12cb3250u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x12cb3270 (912 bytes, 248 insns) */
void f_12cb3270(void) {
  FTRACE(0x12cb3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3270 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3271 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3273 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12cb3278 call 0x12cb7350 */
  push32(0x12cb327du); f_12cb7350();
  /* 12cb327d push edi */
  push32((uint32_t)(EDI));
  /* 12cb327e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12cb3285 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12cb328a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb328c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12cb3292 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cb3294 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12cb3296 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12cb3297 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12cb329e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12cb32a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb32a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12cb32ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cb32ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12cb32af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12cb32b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12cb32b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12cb32bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb32be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12cb32c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cb32c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12cb32c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12cb32c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12cb32cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12cb32d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb32d6 jl 0x12cb32de */
  if ((C.sf!=C.of)) goto L_12cb32de;
  /* 12cb32d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb32dc jl 0x12cb32e6 */
  if ((C.sf!=C.of)) goto L_12cb32e6;
L_12cb32de:;
  /* 12cb32de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb32e1 jmp 0x12cb35fb */
  goto L_12cb35fb;
L_12cb32e6:;
  /* 12cb32e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb32ea jne 0x12cb3390 */
  if (!C.zf) goto L_12cb3390;
  /* 12cb32f0 push 0x12cdea34 */
  push32((uint32_t)(0x12cdea34u));
  /* 12cb32f5 call dword ptr [0x12ce331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce331c))), 0x12cb32fbu);
  /* 12cb32fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb32fd jle 0x12cb3390 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb3390;
  /* 12cb3303 cmp dword ptr [0x12ce0510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb330a jne 0x12cb334e */
  if (!C.zf) goto L_12cb334e;
  /* 12cb330c push 0x12cdb690 */
  push32((uint32_t)(0x12cdb690u));
  /* 12cb3311 call dword ptr [0x12ce3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3318))), 0x12cb3317u);
  /* 12cb3317 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12cb331d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3324 je 0x12cb3346 */
  if (C.zf) goto L_12cb3346;
  /* 12cb3326 push 0x12cdb684 */
  push32((uint32_t)(0x12cdb684u));
  /* 12cb332b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12cb3331 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3332 call dword ptr [0x12ce3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3314))), 0x12cb3338u);
  /* 12cb3338 mov dword ptr [0x12ce0510], eax */
  w32((uint32_t)(0x12ce0510), (EAX));
  /* 12cb333d cmp dword ptr [0x12ce0510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3344 jne 0x12cb334e */
  if (!C.zf) goto L_12cb334e;
L_12cb3346:;
  /* 12cb3346 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb3349 jmp 0x12cb35fb */
  goto L_12cb35fb;
L_12cb334e:;
  /* 12cb334e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb3351 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3352 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb3355 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3356 push 0x12cdb650 */
  push32((uint32_t)(0x12cdb650u));
  /* 12cb335b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12cb3361 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3362 call dword ptr [0x12ce0510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce0510))), 0x12cb3368u);
  /* 12cb3368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb336b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12cb3371 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3372 call dword ptr [0x12ce3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3310))), 0x12cb3378u);
  /* 12cb3378 push 0x12cdea34 */
  push32((uint32_t)(0x12cdea34u));
  /* 12cb337d call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cb3383u);
  /* 12cb3383 call 0x12cb3160 */
  push32(0x12cb3388u); f_12cb3160();
  /* 12cb3388 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb338b jmp 0x12cb35fb */
  goto L_12cb35fb;
L_12cb3390:;
  /* 12cb3390 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3394 je 0x12cb33cd */
  if (C.zf) goto L_12cb33cd;
  /* 12cb3396 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12cb339c push eax */
  push32((uint32_t)(EAX));
  /* 12cb339d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb33a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb33a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12cb33a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12cb33ac push edx */
  push32((uint32_t)(EDX));
  /* 12cb33ad call 0x12cb7250 */
  push32(0x12cb33b2u); f_12cb7250();
  /* 12cb33b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb33b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb33b7 jge 0x12cb33cd */
  if ((C.sf==C.of)) goto L_12cb33cd;
  /* 12cb33b9 push 0x12cdb624 */
  push32((uint32_t)(0x12cdb624u));
  /* 12cb33be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12cb33c4 push eax */
  push32((uint32_t)(EAX));
  /* 12cb33c5 call 0x12cb7160 */
  push32(0x12cb33cau); f_12cb7160();
  /* 12cb33ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb33cd:;
  /* 12cb33cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb33d1 jne 0x12cb3405 */
  if (!C.zf) goto L_12cb3405;
  /* 12cb33d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb33d7 je 0x12cb33e5 */
  if (C.zf) goto L_12cb33e5;
  /* 12cb33d9 mov dword ptr [ebp - 0x3028], 0x12cdb610 */
  w32((uint32_t)(EBP + -0x3028), (0x12cdb610u));
  /* 12cb33e3 jmp 0x12cb33ef */
  goto L_12cb33ef;
L_12cb33e5:;
  /* 12cb33e5 mov dword ptr [ebp - 0x3028], 0x12cdb5fc */
  w32((uint32_t)(EBP + -0x3028), (0x12cdb5fcu));
L_12cb33ef:;
  /* 12cb33ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12cb33f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb33f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12cb33fc push edx */
  push32((uint32_t)(EDX));
  /* 12cb33fd call 0x12cb7160 */
  push32(0x12cb3402u); f_12cb7160();
  /* 12cb3402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3405:;
  /* 12cb3405 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12cb340b push eax */
  push32((uint32_t)(EAX));
  /* 12cb340c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12cb3412 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3413 call 0x12cb7170 */
  push32(0x12cb3418u); f_12cb7170();
  /* 12cb3418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb341b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb341f jne 0x12cb345a */
  if (!C.zf) goto L_12cb345a;
  /* 12cb3421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3424 mov eax, dword ptr [edx*4 + 0x12cdea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12cdea38)));
  /* 12cb342b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb342e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb3430 je 0x12cb3446 */
  if (C.zf) goto L_12cb3446;
  /* 12cb3432 push 0x12cdb5f8 */
  push32((uint32_t)(0x12cdb5f8u));
  /* 12cb3437 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12cb343d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb343e call 0x12cb7170 */
  push32(0x12cb3443u); f_12cb7170();
  /* 12cb3443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3446:;
  /* 12cb3446 push 0x12cdb5f4 */
  push32((uint32_t)(0x12cdb5f4u));
  /* 12cb344b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12cb3451 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3452 call 0x12cb7170 */
  push32(0x12cb3457u); f_12cb7170();
  /* 12cb3457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb345a:;
  /* 12cb345a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb345e je 0x12cb34a2 */
  if (C.zf) goto L_12cb34a2;
  /* 12cb3460 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12cb3466 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3467 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb346a push ecx */
  push32((uint32_t)(ECX));
  /* 12cb346b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb346e push edx */
  push32((uint32_t)(EDX));
  /* 12cb346f push 0x12cdb5e8 */
  push32((uint32_t)(0x12cdb5e8u));
  /* 12cb3474 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cb3479 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12cb347f push eax */
  push32((uint32_t)(EAX));
  /* 12cb3480 call 0x12cb7060 */
  push32(0x12cb3485u); f_12cb7060();
  /* 12cb3485 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb348a jge 0x12cb34a0 */
  if ((C.sf==C.of)) goto L_12cb34a0;
  /* 12cb348c push 0x12cdb624 */
  push32((uint32_t)(0x12cdb624u));
  /* 12cb3491 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12cb3497 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3498 call 0x12cb7160 */
  push32(0x12cb349du); f_12cb7160();
  /* 12cb349d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb34a0:;
  /* 12cb34a0 jmp 0x12cb34b8 */
  goto L_12cb34b8;
L_12cb34a2:;
  /* 12cb34a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12cb34a8 push edx */
  push32((uint32_t)(EDX));
  /* 12cb34a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12cb34af push eax */
  push32((uint32_t)(EAX));
  /* 12cb34b0 call 0x12cb7160 */
  push32(0x12cb34b5u); f_12cb7160();
  /* 12cb34b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb34b8:;
  /* 12cb34b8 cmp dword ptr [0x12ce2060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce2060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb34bf je 0x12cb34fc */
  if (C.zf) goto L_12cb34fc;
  /* 12cb34c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12cb34c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb34c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12cb34ce push edx */
  push32((uint32_t)(EDX));
  /* 12cb34cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb34d2 push eax */
  push32((uint32_t)(EAX));
  /* 12cb34d3 call dword ptr [0x12ce2060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce2060))), 0x12cb34d9u);
  /* 12cb34d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb34dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb34de je 0x12cb34fc */
  if (C.zf) goto L_12cb34fc;
  /* 12cb34e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb34e4 jne 0x12cb34f1 */
  if (!C.zf) goto L_12cb34f1;
  /* 12cb34e6 push 0x12cdea34 */
  push32((uint32_t)(0x12cdea34u));
  /* 12cb34eb call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cb34f1u);
L_12cb34f1:;
  /* 12cb34f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12cb34f7 jmp 0x12cb35fb */
  goto L_12cb35fb;
L_12cb34fc:;
  /* 12cb34fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb34ff mov edx, dword ptr [ecx*4 + 0x12cdea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdea38)));
  /* 12cb3506 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb3509 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb350b je 0x12cb354b */
  if (C.zf) goto L_12cb354b;
  /* 12cb350d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3510 cmp dword ptr [eax*4 + 0x12cdea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12cdea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3518 je 0x12cb354b */
  if (C.zf) goto L_12cb354b;
  /* 12cb351a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb351c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12cb3522 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3523 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12cb3529 push edx */
  push32((uint32_t)(EDX));
  /* 12cb352a call 0x12cb6fe0 */
  push32(0x12cb352fu); f_12cb6fe0();
  /* 12cb352f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3532 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3533 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12cb3539 push eax */
  push32((uint32_t)(EAX));
  /* 12cb353a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb353d mov edx, dword ptr [ecx*4 + 0x12cdea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdea44)));
  /* 12cb3544 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3545 call dword ptr [0x12ce3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3308))), 0x12cb354bu);
L_12cb354b:;
  /* 12cb354b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb354e mov ecx, dword ptr [eax*4 + 0x12cdea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12cdea38)));
  /* 12cb3555 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb3558 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb355a je 0x12cb3569 */
  if (C.zf) goto L_12cb3569;
  /* 12cb355c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12cb3562 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3563 call dword ptr [0x12ce3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3310))), 0x12cb3569u);
L_12cb3569:;
  /* 12cb3569 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb356c mov ecx, dword ptr [eax*4 + 0x12cdea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12cdea38)));
  /* 12cb3573 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb3576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb3578 je 0x12cb35e8 */
  if (C.zf) goto L_12cb35e8;
  /* 12cb357a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb357e je 0x12cb359d */
  if (C.zf) goto L_12cb359d;
  /* 12cb3580 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cb3582 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12cb3588 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3589 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb358c push eax */
  push32((uint32_t)(EAX));
  /* 12cb358d call 0x12cb6cf0 */
  push32(0x12cb3592u); f_12cb6cf0();
  /* 12cb3592 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3595 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12cb359b jmp 0x12cb35a7 */
  goto L_12cb35a7;
L_12cb359d:;
  /* 12cb359d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12cb35a7:;
  /* 12cb35a7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12cb35ad push ecx */
  push32((uint32_t)(ECX));
  /* 12cb35ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb35b1 push edx */
  push32((uint32_t)(EDX));
  /* 12cb35b2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12cb35b8 push eax */
  push32((uint32_t)(EAX));
  /* 12cb35b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb35bc push ecx */
  push32((uint32_t)(ECX));
  /* 12cb35bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb35c0 push edx */
  push32((uint32_t)(EDX));
  /* 12cb35c1 call 0x12cb3600 */
  push32(0x12cb35c6u); f_12cb3600();
  /* 12cb35c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb35c9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12cb35cf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb35d3 jne 0x12cb35e0 */
  if (!C.zf) goto L_12cb35e0;
  /* 12cb35d5 push 0x12cdea34 */
  push32((uint32_t)(0x12cdea34u));
  /* 12cb35da call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cb35e0u);
L_12cb35e0:;
  /* 12cb35e0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12cb35e6 jmp 0x12cb35fb */
  goto L_12cb35fb;
L_12cb35e8:;
  /* 12cb35e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb35ec jne 0x12cb35f9 */
  if (!C.zf) goto L_12cb35f9;
  /* 12cb35ee push 0x12cdea34 */
  push32((uint32_t)(0x12cdea34u));
  /* 12cb35f3 call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cb35f9u);
L_12cb35f9:;
  /* 12cb35f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb35fb:;
  /* 12cb35fb pop edi */
  EDI = (pop32());
  /* 12cb35fc mov esp, ebp */
  ESP = (EBP);
  /* 12cb35fe pop ebp */
  EBP = (pop32());
  /* 12cb35ff ret  */
  ESPCHK(0x12cb3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x12cb3600 (780 bytes, 197 insns) */
void f_12cb3600(void) {
  FTRACE(0x12cb3600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3600 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3601 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3603 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12cb3608 call 0x12cb7350 */
  push32(0x12cb360du); f_12cb7350();
L_12cb360d:;
  /* 12cb360d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3611 jne 0x12cb3638 */
  if (!C.zf) goto L_12cb3638;
  /* 12cb3613 push 0x12cdb7e0 */
  push32((uint32_t)(0x12cdb7e0u));
  /* 12cb3618 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb361a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12cb361f push 0x12cdb7d4 */
  push32((uint32_t)(0x12cdb7d4u));
  /* 12cb3624 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3626 call 0x12cb3270 */
  push32(0x12cb362bu); f_12cb3270();
  /* 12cb362b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb362e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3631 jne 0x12cb3638 */
  if (!C.zf) goto L_12cb3638;
  /* 12cb3633 call 0x12cb3160 */
  push32(0x12cb3638u); f_12cb3160();
L_12cb3638:;
  /* 12cb3638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb363a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb363c jne 0x12cb360d */
  if (!C.zf) goto L_12cb360d;
  /* 12cb363e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12cb3643 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12cb3649 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb364a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb364c call dword ptr [0x12ce3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3320))), 0x12cb3652u);
  /* 12cb3652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb3654 jne 0x12cb366a */
  if (!C.zf) goto L_12cb366a;
  /* 12cb3656 push 0x12cdb7bc */
  push32((uint32_t)(0x12cdb7bcu));
  /* 12cb365b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12cb3661 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3662 call 0x12cb7160 */
  push32(0x12cb3667u); f_12cb7160();
  /* 12cb3667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb366a:;
  /* 12cb366a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12cb3670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb3673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3676 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3677 call 0x12cb6fe0 */
  push32(0x12cb367cu); f_12cb6fe0();
  /* 12cb367c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb367f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3682 jbe 0x12cb36ad */
  if ((C.cf||C.zf)) goto L_12cb36ad;
  /* 12cb3684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3687 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3688 call 0x12cb6fe0 */
  push32(0x12cb368du); f_12cb6fe0();
  /* 12cb368d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3690 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3693 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12cb3697 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb369a push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb369c push 0x12cdb7b8 */
  push32((uint32_t)(0x12cdb7b8u));
  /* 12cb36a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb36a4 push eax */
  push32((uint32_t)(EAX));
  /* 12cb36a5 call 0x12cb79d0 */
  push32(0x12cb36aau); f_12cb79d0();
  /* 12cb36aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb36ad:;
  /* 12cb36ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb36b0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12cb36b6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb36bd je 0x12cb3708 */
  if (C.zf) goto L_12cb3708;
  /* 12cb36bf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cb36c5 push edx */
  push32((uint32_t)(EDX));
  /* 12cb36c6 call 0x12cb6fe0 */
  push32(0x12cb36cbu); f_12cb6fe0();
  /* 12cb36cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb36ce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb36d1 jbe 0x12cb3708 */
  if ((C.cf||C.zf)) goto L_12cb3708;
  /* 12cb36d3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cb36d9 push eax */
  push32((uint32_t)(EAX));
  /* 12cb36da call 0x12cb6fe0 */
  push32(0x12cb36dfu); f_12cb6fe0();
  /* 12cb36df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb36e2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cb36e8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12cb36ec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12cb36f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb36f4 push 0x12cdb7b8 */
  push32((uint32_t)(0x12cdb7b8u));
  /* 12cb36f9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cb36ff push eax */
  push32((uint32_t)(EAX));
  /* 12cb3700 call 0x12cb79d0 */
  push32(0x12cb3705u); f_12cb79d0();
  /* 12cb3705 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3708:;
  /* 12cb3708 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb370c jne 0x12cb371a */
  if (!C.zf) goto L_12cb371a;
  /* 12cb370e mov dword ptr [ebp - 0x1114], 0x12cdb744 */
  w32((uint32_t)(EBP + -0x1114), (0x12cdb744u));
  /* 12cb3718 jmp 0x12cb3724 */
  goto L_12cb3724;
L_12cb371a:;
  /* 12cb371a mov dword ptr [ebp - 0x1114], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x1114), (0x12cdb4e4u));
L_12cb3724:;
  /* 12cb3724 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb3727 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cb372a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb372c je 0x12cb3739 */
  if (C.zf) goto L_12cb3739;
  /* 12cb372e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb3731 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12cb3737 jmp 0x12cb3743 */
  goto L_12cb3743;
L_12cb3739:;
  /* 12cb3739 mov dword ptr [ebp - 0x1118], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x1118), (0x12cdb4e4u));
L_12cb3743:;
  /* 12cb3743 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb3746 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cb3749 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb374b je 0x12cb375f */
  if (C.zf) goto L_12cb375f;
  /* 12cb374d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3751 jne 0x12cb375f */
  if (!C.zf) goto L_12cb375f;
  /* 12cb3753 mov dword ptr [ebp - 0x111c], 0x12cdb734 */
  w32((uint32_t)(EBP + -0x111c), (0x12cdb734u));
  /* 12cb375d jmp 0x12cb3769 */
  goto L_12cb3769;
L_12cb375f:;
  /* 12cb375f mov dword ptr [ebp - 0x111c], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x111c), (0x12cdb4e4u));
L_12cb3769:;
  /* 12cb3769 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb376c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb376f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb3771 je 0x12cb377f */
  if (C.zf) goto L_12cb377f;
  /* 12cb3773 mov dword ptr [ebp - 0x1120], 0x12cdb730 */
  w32((uint32_t)(EBP + -0x1120), (0x12cdb730u));
  /* 12cb377d jmp 0x12cb3789 */
  goto L_12cb3789;
L_12cb377f:;
  /* 12cb377f mov dword ptr [ebp - 0x1120], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x1120), (0x12cdb4e4u));
L_12cb3789:;
  /* 12cb3789 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb378d je 0x12cb379a */
  if (C.zf) goto L_12cb379a;
  /* 12cb378f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb3792 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12cb3798 jmp 0x12cb37a4 */
  goto L_12cb37a4;
L_12cb379a:;
  /* 12cb379a mov dword ptr [ebp - 0x1124], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x1124), (0x12cdb4e4u));
L_12cb37a4:;
  /* 12cb37a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb37a8 je 0x12cb37b6 */
  if (C.zf) goto L_12cb37b6;
  /* 12cb37aa mov dword ptr [ebp - 0x1128], 0x12cdb728 */
  w32((uint32_t)(EBP + -0x1128), (0x12cdb728u));
  /* 12cb37b4 jmp 0x12cb37c0 */
  goto L_12cb37c0;
L_12cb37b6:;
  /* 12cb37b6 mov dword ptr [ebp - 0x1128], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x1128), (0x12cdb4e4u));
L_12cb37c0:;
  /* 12cb37c0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb37c4 je 0x12cb37d1 */
  if (C.zf) goto L_12cb37d1;
  /* 12cb37c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb37c9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12cb37cf jmp 0x12cb37db */
  goto L_12cb37db;
L_12cb37d1:;
  /* 12cb37d1 mov dword ptr [ebp - 0x112c], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x112c), (0x12cdb4e4u));
L_12cb37db:;
  /* 12cb37db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb37df je 0x12cb37ed */
  if (C.zf) goto L_12cb37ed;
  /* 12cb37e1 mov dword ptr [ebp - 0x1130], 0x12cdb720 */
  w32((uint32_t)(EBP + -0x1130), (0x12cdb720u));
  /* 12cb37eb jmp 0x12cb37f7 */
  goto L_12cb37f7;
L_12cb37ed:;
  /* 12cb37ed mov dword ptr [ebp - 0x1130], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x1130), (0x12cdb4e4u));
L_12cb37f7:;
  /* 12cb37f7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb37fe je 0x12cb380e */
  if (C.zf) goto L_12cb380e;
  /* 12cb3800 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12cb3806 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12cb380c jmp 0x12cb3818 */
  goto L_12cb3818;
L_12cb380e:;
  /* 12cb380e mov dword ptr [ebp - 0x1134], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x1134), (0x12cdb4e4u));
L_12cb3818:;
  /* 12cb3818 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb381f je 0x12cb382d */
  if (C.zf) goto L_12cb382d;
  /* 12cb3821 mov dword ptr [ebp - 0x1138], 0x12cdb714 */
  w32((uint32_t)(EBP + -0x1138), (0x12cdb714u));
  /* 12cb382b jmp 0x12cb3837 */
  goto L_12cb3837;
L_12cb382d:;
  /* 12cb382d mov dword ptr [ebp - 0x1138], 0x12cdb4e4 */
  w32((uint32_t)(EBP + -0x1138), (0x12cdb4e4u));
L_12cb3837:;
  /* 12cb3837 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12cb383d push edx */
  push32((uint32_t)(EDX));
  /* 12cb383e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12cb3844 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3845 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12cb384b push ecx */
  push32((uint32_t)(ECX));
  /* 12cb384c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12cb3852 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3853 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12cb3859 push eax */
  push32((uint32_t)(EAX));
  /* 12cb385a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12cb3860 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3861 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12cb3867 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3868 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12cb386e push eax */
  push32((uint32_t)(EAX));
  /* 12cb386f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12cb3875 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3876 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12cb387c push edx */
  push32((uint32_t)(EDX));
  /* 12cb387d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3880 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3881 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3884 mov edx, dword ptr [ecx*4 + 0x12cdea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdea50)));
  /* 12cb388b push edx */
  push32((uint32_t)(EDX));
  /* 12cb388c push 0x12cdb6c0 */
  push32((uint32_t)(0x12cdb6c0u));
  /* 12cb3891 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cb3896 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12cb389c push eax */
  push32((uint32_t)(EAX));
  /* 12cb389d call 0x12cb7060 */
  push32(0x12cb38a2u); f_12cb7060();
  /* 12cb38a2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb38a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb38a7 jge 0x12cb38bd */
  if ((C.sf==C.of)) goto L_12cb38bd;
  /* 12cb38a9 push 0x12cdb624 */
  push32((uint32_t)(0x12cdb624u));
  /* 12cb38ae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12cb38b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb38b5 call 0x12cb7160 */
  push32(0x12cb38bau); f_12cb7160();
  /* 12cb38ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb38bd:;
  /* 12cb38bd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12cb38c2 push 0x12cdb69c */
  push32((uint32_t)(0x12cdb69cu));
  /* 12cb38c7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12cb38cd push edx */
  push32((uint32_t)(EDX));
  /* 12cb38ce call 0x12cb7910 */
  push32(0x12cb38d3u); f_12cb7910();
  /* 12cb38d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb38d6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12cb38dc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb38e3 jne 0x12cb38f6 */
  if (!C.zf) goto L_12cb38f6;
  /* 12cb38e5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12cb38e7 call 0x12cb7650 */
  push32(0x12cb38ecu); f_12cb7650();
  /* 12cb38ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb38ef push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb38f1 call 0x12cb3970 */
  push32(0x12cb38f6u); f_12cb3970();
L_12cb38f6:;
  /* 12cb38f6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb38fd jne 0x12cb3906 */
  if (!C.zf) goto L_12cb3906;
  /* 12cb38ff mov eax, 1 */
  EAX = (0x1u);
  /* 12cb3904 jmp 0x12cb3908 */
  goto L_12cb3908;
L_12cb3906:;
  /* 12cb3906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb3908:;
  /* 12cb3908 mov esp, ebp */
  ESP = (EBP);
  /* 12cb390a pop ebp */
  EBP = (pop32());
  /* 12cb390b ret  */
  ESPCHK(0x12cb3600u, _esp0);
  ESP += 4; return;
}

/* FUN_10003910 @ 0x12cb3910 (56 bytes, 15 insns) */
void f_12cb3910(void) {
  FTRACE(0x12cb3910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3910 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3911 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3913 cmp dword ptr [0x12ce205c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce205c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb391a je 0x12cb3922 */
  if (C.zf) goto L_12cb3922;
  /* 12cb391c call dword ptr [0x12ce205c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce205c))), 0x12cb3922u);
L_12cb3922:;
  /* 12cb3922 push 0x12cde418 */
  push32((uint32_t)(0x12cde418u));
  /* 12cb3927 push 0x12cde208 */
  push32((uint32_t)(0x12cde208u));
  /* 12cb392c call 0x12cb3ae0 */
  push32(0x12cb3931u); f_12cb3ae0();
  /* 12cb3931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3934 push 0x12cde104 */
  push32((uint32_t)(0x12cde104u));
  /* 12cb3939 push 0x12cde000 */
  push32((uint32_t)(0x12cde000u));
  /* 12cb393e call 0x12cb3ae0 */
  push32(0x12cb3943u); f_12cb3ae0();
  /* 12cb3943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3946 pop ebp */
  EBP = (pop32());
  /* 12cb3947 ret  */
  ESPCHK(0x12cb3910u, _esp0);
  ESP += 4; return;
}

/* FUN_10003950 @ 0x12cb3950 (21 bytes, 10 insns) */
void f_12cb3950(void) {
  FTRACE(0x12cb3950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3950 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3951 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb3955 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb3957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb395a push eax */
  push32((uint32_t)(EAX));
  /* 12cb395b call 0x12cb39d0 */
  push32(0x12cb3960u); f_12cb39d0();
  /* 12cb3960 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3963 pop ebp */
  EBP = (pop32());
  /* 12cb3964 ret  */
  ESPCHK(0x12cb3950u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12cb3970 (21 bytes, 10 insns) */
void f_12cb3970(void) {
  FTRACE(0x12cb3970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3970 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3971 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3973 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb3975 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb3977 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb397a push eax */
  push32((uint32_t)(EAX));
  /* 12cb397b call 0x12cb39d0 */
  push32(0x12cb3980u); f_12cb39d0();
  /* 12cb3980 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3983 pop ebp */
  EBP = (pop32());
  /* 12cb3984 ret  */
  ESPCHK(0x12cb3970u, _esp0);
  ESP += 4; return;
}

/* FUN_10003990 @ 0x12cb3990 (19 bytes, 9 insns) */
void f_12cb3990(void) {
  FTRACE(0x12cb3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3990 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3991 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3993 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb3995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb3997 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb3999 call 0x12cb39d0 */
  push32(0x12cb399eu); f_12cb39d0();
  /* 12cb399e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb39a1 pop ebp */
  EBP = (pop32());
  /* 12cb39a2 ret  */
  ESPCHK(0x12cb3990u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b0 @ 0x12cb39b0 (19 bytes, 9 insns) */
void f_12cb39b0(void) {
  FTRACE(0x12cb39b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb39b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb39b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb39b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb39b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb39b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb39b9 call 0x12cb39d0 */
  push32(0x12cb39beu); f_12cb39d0();
  /* 12cb39be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb39c1 pop ebp */
  EBP = (pop32());
  /* 12cb39c2 ret  */
  ESPCHK(0x12cb39b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x12cb39d0 (227 bytes, 61 insns) */
void f_12cb39d0(void) {
  FTRACE(0x12cb39d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb39d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb39d1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb39d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb39d4 call 0x12cb3ac0 */
  push32(0x12cb39d9u); f_12cb3ac0();
  /* 12cb39d9 cmp dword ptr [0x12ce0554], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0554))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb39e0 jne 0x12cb39f3 */
  if (!C.zf) goto L_12cb39f3;
  /* 12cb39e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb39e5 push eax */
  push32((uint32_t)(EAX));
  /* 12cb39e6 call dword ptr [0x12ce332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce332c))), 0x12cb39ecu);
  /* 12cb39ec push eax */
  push32((uint32_t)(EAX));
  /* 12cb39ed call dword ptr [0x12ce3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3328))), 0x12cb39f3u);
L_12cb39f3:;
  /* 12cb39f3 mov dword ptr [0x12ce0550], 1 */
  w32((uint32_t)(0x12ce0550), (0x1u));
  /* 12cb39fd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12cb3a00 mov byte ptr [0x12ce054c], cl */
  w8((uint32_t)(0x12ce054c), (CL));
  /* 12cb3a06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3a0a jne 0x12cb3a53 */
  if (!C.zf) goto L_12cb3a53;
  /* 12cb3a0c cmp dword ptr [0x12ce2058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce2058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3a13 je 0x12cb3a41 */
  if (C.zf) goto L_12cb3a41;
  /* 12cb3a15 mov edx, dword ptr [0x12ce2054] */
  EDX = (r32((uint32_t)(0x12ce2054)));
  /* 12cb3a1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cb3a1e:;
  /* 12cb3a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3a21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb3a24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb3a27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3a2a cmp ecx, dword ptr [0x12ce2058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce2058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3a30 jb 0x12cb3a41 */
  if (C.cf) goto L_12cb3a41;
  /* 12cb3a32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3a35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3a38 je 0x12cb3a3f */
  if (C.zf) goto L_12cb3a3f;
  /* 12cb3a3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3a3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12cb3a3fu);
L_12cb3a3f:;
  /* 12cb3a3f jmp 0x12cb3a1e */
  goto L_12cb3a1e;
L_12cb3a41:;
  /* 12cb3a41 push 0x12cde724 */
  push32((uint32_t)(0x12cde724u));
  /* 12cb3a46 push 0x12cde51c */
  push32((uint32_t)(0x12cde51cu));
  /* 12cb3a4b call 0x12cb3ae0 */
  push32(0x12cb3a50u); f_12cb3ae0();
  /* 12cb3a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3a53:;
  /* 12cb3a53 push 0x12cde92c */
  push32((uint32_t)(0x12cde92cu));
  /* 12cb3a58 push 0x12cde828 */
  push32((uint32_t)(0x12cde828u));
  /* 12cb3a5d call 0x12cb3ae0 */
  push32(0x12cb3a62u); f_12cb3ae0();
  /* 12cb3a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3a65 cmp dword ptr [0x12ce0558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3a6c jne 0x12cb3a8e */
  if (!C.zf) goto L_12cb3a8e;
  /* 12cb3a6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cb3a70 call 0x12cb56c0 */
  push32(0x12cb3a75u); f_12cb56c0();
  /* 12cb3a75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3a78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb3a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb3a7d je 0x12cb3a8e */
  if (C.zf) goto L_12cb3a8e;
  /* 12cb3a7f mov dword ptr [0x12ce0558], 1 */
  w32((uint32_t)(0x12ce0558), (0x1u));
  /* 12cb3a89 call 0x12cb5fd0 */
  push32(0x12cb3a8eu); f_12cb5fd0();
L_12cb3a8e:;
  /* 12cb3a8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3a92 je 0x12cb3a9b */
  if (C.zf) goto L_12cb3a9b;
  /* 12cb3a94 call 0x12cb3ad0 */
  push32(0x12cb3a99u); f_12cb3ad0();
  /* 12cb3a99 jmp 0x12cb3aaf */
  goto L_12cb3aaf;
L_12cb3a9b:;
  /* 12cb3a9b mov dword ptr [0x12ce0554], 1 */
  w32((uint32_t)(0x12ce0554), (0x1u));
  /* 12cb3aa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3aa9 call dword ptr [0x12ce3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3324))), 0x12cb3aafu);
L_12cb3aaf:;
  /* 12cb3aaf mov esp, ebp */
  ESP = (EBP);
  /* 12cb3ab1 pop ebp */
  EBP = (pop32());
  /* 12cb3ab2 ret  */
  ESPCHK(0x12cb39d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac0 @ 0x12cb3ac0 (15 bytes, 7 insns) */
void f_12cb3ac0(void) {
  FTRACE(0x12cb3ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3ac3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12cb3ac5 call 0x12cb7bb0 */
  push32(0x12cb3acau); f_12cb7bb0();
  /* 12cb3aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3acd pop ebp */
  EBP = (pop32());
  /* 12cb3ace ret  */
  ESPCHK(0x12cb3ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ad0 @ 0x12cb3ad0 (15 bytes, 7 insns) */
void f_12cb3ad0(void) {
  FTRACE(0x12cb3ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3ad3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12cb3ad5 call 0x12cb7c50 */
  push32(0x12cb3adau); f_12cb7c50();
  /* 12cb3ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3add pop ebp */
  EBP = (pop32());
  /* 12cb3ade ret  */
  ESPCHK(0x12cb3ad0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12cb3ae0 (37 bytes, 16 insns) */
void f_12cb3ae0(void) {
  FTRACE(0x12cb3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3ae1 mov ebp, esp */
  EBP = (ESP);
L_12cb3ae3:;
  /* 12cb3ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3ae6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3ae9 jae 0x12cb3b03 */
  if (!C.cf) goto L_12cb3b03;
  /* 12cb3aeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3aee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3af1 je 0x12cb3af8 */
  if (C.zf) goto L_12cb3af8;
  /* 12cb3af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3af6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12cb3af8u);
L_12cb3af8:;
  /* 12cb3af8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3afb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3afe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cb3b01 jmp 0x12cb3ae3 */
  goto L_12cb3ae3;
L_12cb3b03:;
  /* 12cb3b03 pop ebp */
  EBP = (pop32());
  /* 12cb3b04 ret  */
  ESPCHK(0x12cb3ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x12cb3b10 (130 bytes, 42 insns) */
void f_12cb3b10(void) {
  FTRACE(0x12cb3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3b11 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3b14 call 0x12cb7ad0 */
  push32(0x12cb3b19u); f_12cb7ad0();
  /* 12cb3b19 call dword ptr [0x12ce3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3338))), 0x12cb3b1fu);
  /* 12cb3b1f mov dword ptr [0x12cdea5c], eax */
  w32((uint32_t)(0x12cdea5c), (EAX));
  /* 12cb3b24 cmp dword ptr [0x12cdea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3b2b jne 0x12cb3b31 */
  if (!C.zf) goto L_12cb3b31;
  /* 12cb3b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb3b2f jmp 0x12cb3b8e */
  goto L_12cb3b8e;
L_12cb3b31:;
  /* 12cb3b31 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12cb3b33 push 0x12cdb7f8 */
  push32((uint32_t)(0x12cdb7f8u));
  /* 12cb3b38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3b3a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12cb3b3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb3b3e call 0x12cb45c0 */
  push32(0x12cb3b43u); f_12cb45c0();
  /* 12cb3b43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3b46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb3b49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3b4d je 0x12cb3b64 */
  if (C.zf) goto L_12cb3b64;
  /* 12cb3b4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3b52 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3b53 mov ecx, dword ptr [0x12cdea5c] */
  ECX = (r32((uint32_t)(0x12cdea5c)));
  /* 12cb3b59 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3b5a call dword ptr [0x12ce3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3334))), 0x12cb3b60u);
  /* 12cb3b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb3b62 jne 0x12cb3b68 */
  if (!C.zf) goto L_12cb3b68;
L_12cb3b64:;
  /* 12cb3b64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb3b66 jmp 0x12cb3b8e */
  goto L_12cb3b8e;
L_12cb3b68:;
  /* 12cb3b68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3b6b push edx */
  push32((uint32_t)(EDX));
  /* 12cb3b6c call 0x12cb3bd0 */
  push32(0x12cb3b71u); f_12cb3bd0();
  /* 12cb3b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3b74 call dword ptr [0x12ce3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3330))), 0x12cb3b7au);
  /* 12cb3b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3b7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cb3b7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3b82 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12cb3b89 mov eax, 1 */
  EAX = (0x1u);
L_12cb3b8e:;
  /* 12cb3b8e mov esp, ebp */
  ESP = (EBP);
  /* 12cb3b90 pop ebp */
  EBP = (pop32());
  /* 12cb3b91 ret  */
  ESPCHK(0x12cb3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x12cb3ba0 (41 bytes, 11 insns) */
void f_12cb3ba0(void) {
  FTRACE(0x12cb3ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3ba3 call 0x12cb7b10 */
  push32(0x12cb3ba8u); f_12cb7b10();
  /* 12cb3ba8 cmp dword ptr [0x12cdea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3baf je 0x12cb3bc7 */
  if (C.zf) goto L_12cb3bc7;
  /* 12cb3bb1 mov eax, dword ptr [0x12cdea5c] */
  EAX = (r32((uint32_t)(0x12cdea5c)));
  /* 12cb3bb6 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3bb7 call dword ptr [0x12ce333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce333c))), 0x12cb3bbdu);
  /* 12cb3bbd mov dword ptr [0x12cdea5c], 0xffffffff */
  w32((uint32_t)(0x12cdea5c), (0xffffffffu));
L_12cb3bc7:;
  /* 12cb3bc7 pop ebp */
  EBP = (pop32());
  /* 12cb3bc8 ret  */
  ESPCHK(0x12cb3ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd0 @ 0x12cb3bd0 (25 bytes, 8 insns) */
void f_12cb3bd0(void) {
  FTRACE(0x12cb3bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3bd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3bd6 mov dword ptr [eax + 0x50], 0x12cdec00 */
  w32((uint32_t)(EAX + 0x50), (0x12cdec00u));
  /* 12cb3bdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3be0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12cb3be7 pop ebp */
  EBP = (pop32());
  /* 12cb3be8 ret  */
  ESPCHK(0x12cb3bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bf0 @ 0x12cb3bf0 (152 bytes, 48 insns) */
void f_12cb3bf0(void) {
  FTRACE(0x12cb3bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb3bf6 call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cb3bfcu);
  /* 12cb3bfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb3bff mov eax, dword ptr [0x12cdea5c] */
  EAX = (r32((uint32_t)(0x12cdea5c)));
  /* 12cb3c04 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3c05 call dword ptr [0x12ce3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3344))), 0x12cb3c0bu);
  /* 12cb3c0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb3c0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3c12 jne 0x12cb3c77 */
  if (!C.zf) goto L_12cb3c77;
  /* 12cb3c14 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12cb3c19 push 0x12cdb7f8 */
  push32((uint32_t)(0x12cdb7f8u));
  /* 12cb3c1e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3c20 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12cb3c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb3c24 call 0x12cb45c0 */
  push32(0x12cb3c29u); f_12cb45c0();
  /* 12cb3c29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3c2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb3c2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3c33 je 0x12cb3c6d */
  if (C.zf) goto L_12cb3c6d;
  /* 12cb3c35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3c38 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3c39 mov edx, dword ptr [0x12cdea5c] */
  EDX = (r32((uint32_t)(0x12cdea5c)));
  /* 12cb3c3f push edx */
  push32((uint32_t)(EDX));
  /* 12cb3c40 call dword ptr [0x12ce3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3334))), 0x12cb3c46u);
  /* 12cb3c46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb3c48 je 0x12cb3c6d */
  if (C.zf) goto L_12cb3c6d;
  /* 12cb3c4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3c4d push eax */
  push32((uint32_t)(EAX));
  /* 12cb3c4e call 0x12cb3bd0 */
  push32(0x12cb3c53u); f_12cb3bd0();
  /* 12cb3c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3c56 call dword ptr [0x12ce3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3330))), 0x12cb3c5cu);
  /* 12cb3c5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3c5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cb3c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3c64 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12cb3c6b jmp 0x12cb3c77 */
  goto L_12cb3c77;
L_12cb3c6d:;
  /* 12cb3c6d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cb3c6f call 0x12cb3120 */
  push32(0x12cb3c74u); f_12cb3120();
  /* 12cb3c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3c77:;
  /* 12cb3c77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb3c7a push eax */
  push32((uint32_t)(EAX));
  /* 12cb3c7b call dword ptr [0x12ce3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3340))), 0x12cb3c81u);
  /* 12cb3c81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3c84 mov esp, ebp */
  ESP = (EBP);
  /* 12cb3c86 pop ebp */
  EBP = (pop32());
  /* 12cb3c87 ret  */
  ESPCHK(0x12cb3bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c90 @ 0x12cb3c90 (263 bytes, 86 insns) */
void f_12cb3c90(void) {
  FTRACE(0x12cb3c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3c91 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3c93 cmp dword ptr [0x12cdea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3c9a je 0x12cb3d95 */
  if (C.zf) goto L_12cb3d95;
  /* 12cb3ca0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3ca4 jne 0x12cb3cb5 */
  if (!C.zf) goto L_12cb3cb5;
  /* 12cb3ca6 mov eax, dword ptr [0x12cdea5c] */
  EAX = (r32((uint32_t)(0x12cdea5c)));
  /* 12cb3cab push eax */
  push32((uint32_t)(EAX));
  /* 12cb3cac call dword ptr [0x12ce3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3344))), 0x12cb3cb2u);
  /* 12cb3cb2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cb3cb5:;
  /* 12cb3cb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3cb9 je 0x12cb3d86 */
  if (C.zf) goto L_12cb3d86;
  /* 12cb3cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3cc2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3cc6 je 0x12cb3cd9 */
  if (C.zf) goto L_12cb3cd9;
  /* 12cb3cc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3cca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3ccd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12cb3cd0 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3cd1 call 0x12cb4c40 */
  push32(0x12cb3cd6u); f_12cb4c40();
  /* 12cb3cd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3cd9:;
  /* 12cb3cd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3cdc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3ce0 je 0x12cb3cf3 */
  if (C.zf) goto L_12cb3cf3;
  /* 12cb3ce2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3ce4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3ce7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12cb3cea push eax */
  push32((uint32_t)(EAX));
  /* 12cb3ceb call 0x12cb4c40 */
  push32(0x12cb3cf0u); f_12cb4c40();
  /* 12cb3cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3cf3:;
  /* 12cb3cf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3cf6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3cfa je 0x12cb3d0d */
  if (C.zf) goto L_12cb3d0d;
  /* 12cb3cfc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3cfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d01 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12cb3d04 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3d05 call 0x12cb4c40 */
  push32(0x12cb3d0au); f_12cb4c40();
  /* 12cb3d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3d0d:;
  /* 12cb3d0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d10 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3d14 je 0x12cb3d27 */
  if (C.zf) goto L_12cb3d27;
  /* 12cb3d16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3d18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d1b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12cb3d1e push eax */
  push32((uint32_t)(EAX));
  /* 12cb3d1f call 0x12cb4c40 */
  push32(0x12cb3d24u); f_12cb4c40();
  /* 12cb3d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3d27:;
  /* 12cb3d27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d2a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3d2e je 0x12cb3d41 */
  if (C.zf) goto L_12cb3d41;
  /* 12cb3d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3d32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d35 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12cb3d38 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3d39 call 0x12cb4c40 */
  push32(0x12cb3d3eu); f_12cb4c40();
  /* 12cb3d3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3d41:;
  /* 12cb3d41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d44 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3d48 je 0x12cb3d5b */
  if (C.zf) goto L_12cb3d5b;
  /* 12cb3d4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d4f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12cb3d52 push eax */
  push32((uint32_t)(EAX));
  /* 12cb3d53 call 0x12cb4c40 */
  push32(0x12cb3d58u); f_12cb4c40();
  /* 12cb3d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3d5b:;
  /* 12cb3d5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d5e cmp dword ptr [ecx + 0x50], 0x12cdec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12cdec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3d65 je 0x12cb3d78 */
  if (C.zf) goto L_12cb3d78;
  /* 12cb3d67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3d69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d6c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12cb3d6f push eax */
  push32((uint32_t)(EAX));
  /* 12cb3d70 call 0x12cb4c40 */
  push32(0x12cb3d75u); f_12cb4c40();
  /* 12cb3d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3d78:;
  /* 12cb3d78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3d7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb3d7d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3d7e call 0x12cb4c40 */
  push32(0x12cb3d83u); f_12cb4c40();
  /* 12cb3d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3d86:;
  /* 12cb3d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb3d88 mov edx, dword ptr [0x12cdea5c] */
  EDX = (r32((uint32_t)(0x12cdea5c)));
  /* 12cb3d8e push edx */
  push32((uint32_t)(EDX));
  /* 12cb3d8f call dword ptr [0x12ce3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3334))), 0x12cb3d95u);
L_12cb3d95:;
  /* 12cb3d95 pop ebp */
  EBP = (pop32());
  /* 12cb3d96 ret  */
  ESPCHK(0x12cb3c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x12cb3da0 (11 bytes, 5 insns) */
void f_12cb3da0(void) {
  FTRACE(0x12cb3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3da1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3da3 call dword ptr [0x12ce3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3330))), 0x12cb3da9u);
  /* 12cb3da9 pop ebp */
  EBP = (pop32());
  /* 12cb3daa ret  */
  ESPCHK(0x12cb3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db0 @ 0x12cb3db0 (11 bytes, 5 insns) */
void f_12cb3db0(void) {
  FTRACE(0x12cb3db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3db1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3db3 call dword ptr [0x12ce327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce327c))), 0x12cb3db9u);
  /* 12cb3db9 pop ebp */
  EBP = (pop32());
  /* 12cb3dba ret  */
  ESPCHK(0x12cb3db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x12cb3dc0 (804 bytes, 236 insns) */
void f_12cb3dc0(void) {
  FTRACE(0x12cb3dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb3dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb3dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb3dc3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb3dc6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12cb3dcb push 0x12cdb804 */
  push32((uint32_t)(0x12cdb804u));
  /* 12cb3dd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3dd2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12cb3dd7 call 0x12cb41b0 */
  push32(0x12cb3ddcu); f_12cb41b0();
  /* 12cb3ddc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3ddf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12cb3de2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3de6 jne 0x12cb3df2 */
  if (!C.zf) goto L_12cb3df2;
  /* 12cb3de8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12cb3dea call 0x12cb3120 */
  push32(0x12cb3defu); f_12cb3120();
  /* 12cb3def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb3df2:;
  /* 12cb3df2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3df5 mov dword ptr [0x12ce1f00], eax */
  w32((uint32_t)(0x12ce1f00), (EAX));
  /* 12cb3dfa mov dword ptr [0x12ce203c], 0x20 */
  w32((uint32_t)(0x12ce203c), (0x20u));
  /* 12cb3e04 jmp 0x12cb3e0f */
  goto L_12cb3e0f;
L_12cb3e06:;
  /* 12cb3e06 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3e09 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3e0c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12cb3e0f:;
  /* 12cb3e0f mov edx, dword ptr [0x12ce1f00] */
  EDX = (r32((uint32_t)(0x12ce1f00)));
  /* 12cb3e15 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3e1b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3e1e jae 0x12cb3e43 */
  if (!C.cf) goto L_12cb3e43;
  /* 12cb3e20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3e23 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cb3e27 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3e2a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cb3e30 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3e33 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12cb3e37 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3e3a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12cb3e41 jmp 0x12cb3e06 */
  goto L_12cb3e06;
L_12cb3e43:;
  /* 12cb3e43 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12cb3e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb3e47 call dword ptr [0x12ce3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3354))), 0x12cb3e4du);
  /* 12cb3e4d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12cb3e50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb3e56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb3e58 je 0x12cb3fe5 */
  if (C.zf) goto L_12cb3fe5;
  /* 12cb3e5e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3e62 je 0x12cb3fe5 */
  if (C.zf) goto L_12cb3fe5;
  /* 12cb3e68 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb3e6b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb3e6d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12cb3e70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb3e73 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3e76 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb3e79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3e7c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3e7f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12cb3e82 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3e89 jge 0x12cb3e93 */
  if ((C.sf==C.of)) goto L_12cb3e93;
  /* 12cb3e8b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12cb3e8e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12cb3e91 jmp 0x12cb3e9a */
  goto L_12cb3e9a;
L_12cb3e93:;
  /* 12cb3e93 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12cb3e9a:;
  /* 12cb3e9a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12cb3e9d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12cb3ea0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12cb3ea7 jmp 0x12cb3eb2 */
  goto L_12cb3eb2;
L_12cb3ea9:;
  /* 12cb3ea9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12cb3eac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3eaf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12cb3eb2:;
  /* 12cb3eb2 mov ecx, dword ptr [0x12ce203c] */
  ECX = (r32((uint32_t)(0x12ce203c)));
  /* 12cb3eb8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3ebb jge 0x12cb3f52 */
  if ((C.sf==C.of)) goto L_12cb3f52;
  /* 12cb3ec1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12cb3ec6 push 0x12cdb804 */
  push32((uint32_t)(0x12cdb804u));
  /* 12cb3ecb push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb3ecd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12cb3ed2 call 0x12cb41b0 */
  push32(0x12cb3ed7u); f_12cb41b0();
  /* 12cb3ed7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3eda mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12cb3edd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3ee1 jne 0x12cb3eee */
  if (!C.zf) goto L_12cb3eee;
  /* 12cb3ee3 mov edx, dword ptr [0x12ce203c] */
  EDX = (r32((uint32_t)(0x12ce203c)));
  /* 12cb3ee9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12cb3eec jmp 0x12cb3f52 */
  goto L_12cb3f52;
L_12cb3eee:;
  /* 12cb3eee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12cb3ef1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3ef4 mov dword ptr [eax*4 + 0x12ce1f00], ecx */
  w32((uint32_t)(EAX*4 + 0x12ce1f00), (ECX));
  /* 12cb3efb mov edx, dword ptr [0x12ce203c] */
  EDX = (r32((uint32_t)(0x12ce203c)));
  /* 12cb3f01 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3f04 mov dword ptr [0x12ce203c], edx */
  w32((uint32_t)(0x12ce203c), (EDX));
  /* 12cb3f0a jmp 0x12cb3f15 */
  goto L_12cb3f15;
L_12cb3f0c:;
  /* 12cb3f0c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3f0f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3f12 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12cb3f15:;
  /* 12cb3f15 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12cb3f18 mov edx, dword ptr [ecx*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cb3f1f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3f25 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3f28 jae 0x12cb3f4d */
  if (!C.cf) goto L_12cb3f4d;
  /* 12cb3f2a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3f2d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cb3f31 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3f34 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cb3f3a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3f3d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12cb3f41 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3f44 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12cb3f4b jmp 0x12cb3f0c */
  goto L_12cb3f0c;
L_12cb3f4d:;
  /* 12cb3f4d jmp 0x12cb3ea9 */
  goto L_12cb3ea9;
L_12cb3f52:;
  /* 12cb3f52 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12cb3f59 jmp 0x12cb3f76 */
  goto L_12cb3f76;
L_12cb3f5b:;
  /* 12cb3f5b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cb3f5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3f61 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12cb3f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3f67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3f6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb3f6d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12cb3f70 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3f73 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12cb3f76:;
  /* 12cb3f76 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cb3f79 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3f7c jge 0x12cb3fe5 */
  if ((C.sf==C.of)) goto L_12cb3fe5;
  /* 12cb3f7e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12cb3f81 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3f84 je 0x12cb3fe0 */
  if (C.zf) goto L_12cb3fe0;
  /* 12cb3f86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3f89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb3f8c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb3f8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb3f91 je 0x12cb3fe0 */
  if (C.zf) goto L_12cb3fe0;
  /* 12cb3f93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3f96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cb3f99 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb3f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb3f9e jne 0x12cb3fb0 */
  if (!C.zf) goto L_12cb3fb0;
  /* 12cb3fa0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12cb3fa3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb3fa5 push edx */
  push32((uint32_t)(EDX));
  /* 12cb3fa6 call dword ptr [0x12ce3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3350))), 0x12cb3facu);
  /* 12cb3fac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb3fae je 0x12cb3fe0 */
  if (C.zf) goto L_12cb3fe0;
L_12cb3fb0:;
  /* 12cb3fb0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cb3fb3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cb3fb6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cb3fb9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb3fbc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb3fbf mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cb3fc6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3fc8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12cb3fcb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3fce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12cb3fd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb3fd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cb3fd5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb3fd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb3fdb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb3fdd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12cb3fe0:;
  /* 12cb3fe0 jmp 0x12cb3f5b */
  goto L_12cb3f5b;
L_12cb3fe5:;
  /* 12cb3fe5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12cb3fec jmp 0x12cb3ff7 */
  goto L_12cb3ff7;
L_12cb3fee:;
  /* 12cb3fee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cb3ff1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb3ff4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12cb3ff7:;
  /* 12cb3ff7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb3ffb jge 0x12cb40d4 */
  if ((C.sf==C.of)) goto L_12cb40d4;
  /* 12cb4001 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cb4004 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb4007 mov edx, dword ptr [0x12ce1f00] */
  EDX = (r32((uint32_t)(0x12ce1f00)));
  /* 12cb400d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb400f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12cb4012 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb4015 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4018 jne 0x12cb40c0 */
  if (!C.zf) goto L_12cb40c0;
  /* 12cb401e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb4021 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12cb4025 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4029 jne 0x12cb4034 */
  if (!C.zf) goto L_12cb4034;
  /* 12cb402b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12cb4032 jmp 0x12cb4044 */
  goto L_12cb4044;
L_12cb4034:;
  /* 12cb4034 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12cb4037 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb403a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cb403c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb403e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4041 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12cb4044:;
  /* 12cb4044 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12cb4047 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4048 call dword ptr [0x12ce3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3304))), 0x12cb404eu);
  /* 12cb404e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12cb4051 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4055 je 0x12cb40af */
  if (C.zf) goto L_12cb40af;
  /* 12cb4057 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cb405a push ecx */
  push32((uint32_t)(ECX));
  /* 12cb405b call dword ptr [0x12ce3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3350))), 0x12cb4061u);
  /* 12cb4061 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12cb4064 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4068 je 0x12cb40af */
  if (C.zf) goto L_12cb40af;
  /* 12cb406a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb406d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cb4070 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cb4072 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12cb4075 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb407b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb407e jne 0x12cb4090 */
  if (!C.zf) goto L_12cb4090;
  /* 12cb4080 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb4083 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cb4086 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12cb4088 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb408b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12cb408e jmp 0x12cb40ad */
  goto L_12cb40ad;
L_12cb4090:;
  /* 12cb4090 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12cb4093 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb4099 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb409c jne 0x12cb40ad */
  if (!C.zf) goto L_12cb40ad;
  /* 12cb409e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb40a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb40a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12cb40a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb40aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12cb40ad:;
  /* 12cb40ad jmp 0x12cb40be */
  goto L_12cb40be;
L_12cb40af:;
  /* 12cb40af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb40b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb40b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12cb40b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb40bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12cb40be:;
  /* 12cb40be jmp 0x12cb40cf */
  goto L_12cb40cf;
L_12cb40c0:;
  /* 12cb40c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb40c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb40c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12cb40c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb40cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12cb40cf:;
  /* 12cb40cf jmp 0x12cb3fee */
  goto L_12cb3fee;
L_12cb40d4:;
  /* 12cb40d4 mov eax, dword ptr [0x12ce203c] */
  EAX = (r32((uint32_t)(0x12ce203c)));
  /* 12cb40d9 push eax */
  push32((uint32_t)(EAX));
  /* 12cb40da call dword ptr [0x12ce334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce334c))), 0x12cb40e0u);
  /* 12cb40e0 mov esp, ebp */
  ESP = (EBP);
  /* 12cb40e2 pop ebp */
  EBP = (pop32());
  /* 12cb40e3 ret  */
  ESPCHK(0x12cb3dc0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12cb40f0 (155 bytes, 45 insns) */
void f_12cb40f0(void) {
  FTRACE(0x12cb40f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb40f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb40f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb40f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb40f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cb40fd jmp 0x12cb4108 */
  goto L_12cb4108;
L_12cb40ff:;
  /* 12cb40ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb4102 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4105 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cb4108:;
  /* 12cb4108 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb410c jge 0x12cb4187 */
  if ((C.sf==C.of)) goto L_12cb4187;
  /* 12cb410e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb4111 cmp dword ptr [ecx*4 + 0x12ce1f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12ce1f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4119 je 0x12cb4182 */
  if (C.zf) goto L_12cb4182;
  /* 12cb411b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb411e mov eax, dword ptr [edx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cb4125 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb4128 jmp 0x12cb4133 */
  goto L_12cb4133;
L_12cb412a:;
  /* 12cb412a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb412d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4130 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb4133:;
  /* 12cb4133 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb4136 mov eax, dword ptr [edx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cb413d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4142 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4145 jae 0x12cb415f */
  if (!C.cf) goto L_12cb415f;
  /* 12cb4147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb414a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb414e je 0x12cb415d */
  if (C.zf) goto L_12cb415d;
  /* 12cb4150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4153 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4156 push edx */
  push32((uint32_t)(EDX));
  /* 12cb4157 call dword ptr [0x12ce3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3358))), 0x12cb415du);
L_12cb415d:;
  /* 12cb415d jmp 0x12cb412a */
  goto L_12cb412a;
L_12cb415f:;
  /* 12cb415f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb4164 mov ecx, dword ptr [eax*4 + 0x12ce1f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cb416b push ecx */
  push32((uint32_t)(ECX));
  /* 12cb416c call 0x12cb4c40 */
  push32(0x12cb4171u); f_12cb4c40();
  /* 12cb4171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4174 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb4177 mov dword ptr [edx*4 + 0x12ce1f00], 0 */
  w32((uint32_t)(EDX*4 + 0x12ce1f00), (0x0u));
L_12cb4182:;
  /* 12cb4182 jmp 0x12cb40ff */
  goto L_12cb40ff;
L_12cb4187:;
  /* 12cb4187 mov esp, ebp */
  ESP = (EBP);
  /* 12cb4189 pop ebp */
  EBP = (pop32());
  /* 12cb418a ret  */
  ESPCHK(0x12cb40f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004190 @ 0x12cb4190 (29 bytes, 13 insns) */
void f_12cb4190(void) {
  FTRACE(0x12cb4190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4190 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4191 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4193 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4195 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4197 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4199 mov eax, dword ptr [0x12ce0700] */
  EAX = (r32((uint32_t)(0x12ce0700)));
  /* 12cb419e push eax */
  push32((uint32_t)(EAX));
  /* 12cb419f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb41a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb41a3 call 0x12cb4200 */
  push32(0x12cb41a8u); f_12cb4200();
  /* 12cb41a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb41ab pop ebp */
  EBP = (pop32());
  /* 12cb41ac ret  */
  ESPCHK(0x12cb4190u, _esp0);
  ESP += 4; return;
}

/* FUN_100041b0 @ 0x12cb41b0 (35 bytes, 16 insns) */
void f_12cb41b0(void) {
  FTRACE(0x12cb41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb41b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb41b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb41b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb41b6 push eax */
  push32((uint32_t)(EAX));
  /* 12cb41b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb41ba push ecx */
  push32((uint32_t)(ECX));
  /* 12cb41bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb41be push edx */
  push32((uint32_t)(EDX));
  /* 12cb41bf mov eax, dword ptr [0x12ce0700] */
  EAX = (r32((uint32_t)(0x12ce0700)));
  /* 12cb41c4 push eax */
  push32((uint32_t)(EAX));
  /* 12cb41c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb41c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb41c9 call 0x12cb4200 */
  push32(0x12cb41ceu); f_12cb4200();
  /* 12cb41ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb41d1 pop ebp */
  EBP = (pop32());
  /* 12cb41d2 ret  */
  ESPCHK(0x12cb41b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041e0 @ 0x12cb41e0 (27 bytes, 13 insns) */
void f_12cb41e0(void) {
  FTRACE(0x12cb41e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb41e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb41e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb41e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb41e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb41e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb41e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb41ec push eax */
  push32((uint32_t)(EAX));
  /* 12cb41ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb41f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb41f1 call 0x12cb4200 */
  push32(0x12cb41f6u); f_12cb4200();
  /* 12cb41f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb41f9 pop ebp */
  EBP = (pop32());
  /* 12cb41fa ret  */
  ESPCHK(0x12cb41e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004200 @ 0x12cb4200 (94 bytes, 38 insns) */
void f_12cb4200(void) {
  FTRACE(0x12cb4200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4200 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4201 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4203 push ecx */
  push32((uint32_t)(ECX));
L_12cb4204:;
  /* 12cb4204 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb4206 call 0x12cb7bb0 */
  push32(0x12cb420bu); f_12cb7bb0();
  /* 12cb420b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb420e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb4211 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4212 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb4215 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4216 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb4219 push edx */
  push32((uint32_t)(EDX));
  /* 12cb421a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb421d push eax */
  push32((uint32_t)(EAX));
  /* 12cb421e call 0x12cb4280 */
  push32(0x12cb4223u); f_12cb4280();
  /* 12cb4223 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4226 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb4229 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb422b call 0x12cb7c50 */
  push32(0x12cb4230u); f_12cb7c50();
  /* 12cb4230 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4233 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4237 jne 0x12cb423f */
  if (!C.zf) goto L_12cb423f;
  /* 12cb4239 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb423d jne 0x12cb4244 */
  if (!C.zf) goto L_12cb4244;
L_12cb423f:;
  /* 12cb423f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4242 jmp 0x12cb425a */
  goto L_12cb425a;
L_12cb4244:;
  /* 12cb4244 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4247 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4248 call 0x12cb7ef0 */
  push32(0x12cb424du); f_12cb7ef0();
  /* 12cb424d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4252 jne 0x12cb4258 */
  if (!C.zf) goto L_12cb4258;
  /* 12cb4254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4256 jmp 0x12cb425a */
  goto L_12cb425a;
L_12cb4258:;
  /* 12cb4258 jmp 0x12cb4204 */
  goto L_12cb4204;
L_12cb425a:;
  /* 12cb425a mov esp, ebp */
  ESP = (EBP);
  /* 12cb425c pop ebp */
  EBP = (pop32());
  /* 12cb425d ret  */
  ESPCHK(0x12cb4200u, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x12cb4260 (23 bytes, 11 insns) */
void f_12cb4260(void) {
  FTRACE(0x12cb4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4260 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4261 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4263 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4265 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4267 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb426c push eax */
  push32((uint32_t)(EAX));
  /* 12cb426d call 0x12cb4280 */
  push32(0x12cb4272u); f_12cb4280();
  /* 12cb4272 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4275 pop ebp */
  EBP = (pop32());
  /* 12cb4276 ret  */
  ESPCHK(0x12cb4260u, _esp0);
  ESP += 4; return;
}

/* FUN_10004280 @ 0x12cb4280 (787 bytes, 254 insns) */
void f_12cb4280(void) {
  FTRACE(0x12cb4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4280 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4281 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4283 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb4286 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb4287 push esi */
  push32((uint32_t)(ESI));
  /* 12cb4288 push edi */
  push32((uint32_t)(EDI));
  /* 12cb4289 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cb4290 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb4295 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb429a je 0x12cb42cc */
  if (C.zf) goto L_12cb42cc;
L_12cb429c:;
  /* 12cb429c call 0x12cb5350 */
  push32(0x12cb42a1u); f_12cb5350();
  /* 12cb42a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb42a3 jne 0x12cb42c6 */
  if (!C.zf) goto L_12cb42c6;
  /* 12cb42a5 push 0x12cdb8f8 */
  push32((uint32_t)(0x12cdb8f8u));
  /* 12cb42aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb42ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12cb42b1 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb42b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb42b8 call 0x12cb3270 */
  push32(0x12cb42bdu); f_12cb3270();
  /* 12cb42bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb42c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb42c3 jne 0x12cb42c6 */
  if (!C.zf) goto L_12cb42c6;
  /* 12cb42c5 int3  */
  x86_unimpl("int3 @ 0x12cb42c5");
L_12cb42c6:;
  /* 12cb42c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb42c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb42ca jne 0x12cb429c */
  if (!C.zf) goto L_12cb429c;
L_12cb42cc:;
  /* 12cb42cc mov edx, dword ptr [0x12cdea88] */
  EDX = (r32((uint32_t)(0x12cdea88)));
  /* 12cb42d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cb42d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb42d8 cmp eax, dword ptr [0x12cdea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb42de jne 0x12cb42e1 */
  if (!C.zf) goto L_12cb42e1;
  /* 12cb42e0 int3  */
  x86_unimpl("int3 @ 0x12cb42e0");
L_12cb42e1:;
  /* 12cb42e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb42e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb42e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb42e8 push edx */
  push32((uint32_t)(EDX));
  /* 12cb42e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb42ec push eax */
  push32((uint32_t)(EAX));
  /* 12cb42ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb42f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb42f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb42f4 push edx */
  push32((uint32_t)(EDX));
  /* 12cb42f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb42f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb42f9 call dword ptr [0x12cdec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cdec90))), 0x12cb42ffu);
  /* 12cb42ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4304 jne 0x12cb4364 */
  if (!C.zf) goto L_12cb4364;
  /* 12cb4306 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb430a je 0x12cb4337 */
  if (C.zf) goto L_12cb4337;
L_12cb430c:;
  /* 12cb430c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb430f push eax */
  push32((uint32_t)(EAX));
  /* 12cb4310 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb4313 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4314 push 0x12cdb8b4 */
  push32((uint32_t)(0x12cdb8b4u));
  /* 12cb4319 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb431b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb431d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb431f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4321 call 0x12cb3270 */
  push32(0x12cb4326u); f_12cb3270();
  /* 12cb4326 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4329 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb432c jne 0x12cb432f */
  if (!C.zf) goto L_12cb432f;
  /* 12cb432e int3  */
  x86_unimpl("int3 @ 0x12cb432e");
L_12cb432f:;
  /* 12cb432f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb4331 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb4333 jne 0x12cb430c */
  if (!C.zf) goto L_12cb430c;
  /* 12cb4335 jmp 0x12cb435d */
  goto L_12cb435d;
L_12cb4337:;
  /* 12cb4337 push 0x12cdb890 */
  push32((uint32_t)(0x12cdb890u));
  /* 12cb433c push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb4341 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4343 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4345 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4347 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4349 call 0x12cb3270 */
  push32(0x12cb434eu); f_12cb3270();
  /* 12cb434e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4351 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4354 jne 0x12cb4357 */
  if (!C.zf) goto L_12cb4357;
  /* 12cb4356 int3  */
  x86_unimpl("int3 @ 0x12cb4356");
L_12cb4357:;
  /* 12cb4357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb435b jne 0x12cb4337 */
  if (!C.zf) goto L_12cb4337;
L_12cb435d:;
  /* 12cb435d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb435f jmp 0x12cb458c */
  goto L_12cb458c;
L_12cb4364:;
  /* 12cb4364 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb4367 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb436d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4370 je 0x12cb4386 */
  if (C.zf) goto L_12cb4386;
  /* 12cb4372 mov edx, dword ptr [0x12cdea84] */
  EDX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb4378 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb437b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb437d jne 0x12cb4386 */
  if (!C.zf) goto L_12cb4386;
  /* 12cb437f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12cb4386:;
  /* 12cb4386 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb438a ja 0x12cb4397 */
  if ((!C.cf&&!C.zf)) goto L_12cb4397;
  /* 12cb438c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb438f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4392 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4395 jbe 0x12cb43c3 */
  if ((C.cf||C.zf)) goto L_12cb43c3;
L_12cb4397:;
  /* 12cb4397 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb439a push ecx */
  push32((uint32_t)(ECX));
  /* 12cb439b push 0x12cdb868 */
  push32((uint32_t)(0x12cdb868u));
  /* 12cb43a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb43a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb43a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb43a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb43a8 call 0x12cb3270 */
  push32(0x12cb43adu); f_12cb3270();
  /* 12cb43ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb43b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb43b3 jne 0x12cb43b6 */
  if (!C.zf) goto L_12cb43b6;
  /* 12cb43b5 int3  */
  x86_unimpl("int3 @ 0x12cb43b5");
L_12cb43b6:;
  /* 12cb43b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb43b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb43ba jne 0x12cb4397 */
  if (!C.zf) goto L_12cb4397;
  /* 12cb43bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb43be jmp 0x12cb458c */
  goto L_12cb458c;
L_12cb43c3:;
  /* 12cb43c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb43c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb43cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb43ce je 0x12cb4410 */
  if (C.zf) goto L_12cb4410;
  /* 12cb43d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb43d4 je 0x12cb4410 */
  if (C.zf) goto L_12cb4410;
  /* 12cb43d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb43d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb43df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb43e2 je 0x12cb4410 */
  if (C.zf) goto L_12cb4410;
  /* 12cb43e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb43e8 je 0x12cb4410 */
  if (C.zf) goto L_12cb4410;
L_12cb43ea:;
  /* 12cb43ea push 0x12cdb834 */
  push32((uint32_t)(0x12cdb834u));
  /* 12cb43ef push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb43f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb43f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb43f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb43fa push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb43fc call 0x12cb3270 */
  push32(0x12cb4401u); f_12cb3270();
  /* 12cb4401 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4404 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4407 jne 0x12cb440a */
  if (!C.zf) goto L_12cb440a;
  /* 12cb4409 int3  */
  x86_unimpl("int3 @ 0x12cb4409");
L_12cb440a:;
  /* 12cb440a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb440c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb440e jne 0x12cb43ea */
  if (!C.zf) goto L_12cb43ea;
L_12cb4410:;
  /* 12cb4410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4413 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4416 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb4419 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb441c push ecx */
  push32((uint32_t)(ECX));
  /* 12cb441d call 0x12cb8000 */
  push32(0x12cb4422u); f_12cb8000();
  /* 12cb4422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb4428 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb442c jne 0x12cb4435 */
  if (!C.zf) goto L_12cb4435;
  /* 12cb442e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4430 jmp 0x12cb458c */
  goto L_12cb458c;
L_12cb4435:;
  /* 12cb4435 mov edx, dword ptr [0x12cdea88] */
  EDX = (r32((uint32_t)(0x12cdea88)));
  /* 12cb443b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb443e mov dword ptr [0x12cdea88], edx */
  w32((uint32_t)(0x12cdea88), (EDX));
  /* 12cb4444 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4448 je 0x12cb4493 */
  if (C.zf) goto L_12cb4493;
  /* 12cb444a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb444d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cb4453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4456 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cb445d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4460 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12cb4467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb446a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12cb4471 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4474 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4477 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12cb447a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb447d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12cb4484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4487 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12cb448e jmp 0x12cb4533 */
  goto L_12cb4533;
L_12cb4493:;
  /* 12cb4493 mov edx, dword ptr [0x12ce0560] */
  EDX = (r32((uint32_t)(0x12ce0560)));
  /* 12cb4499 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb449c mov dword ptr [0x12ce0560], edx */
  w32((uint32_t)(0x12ce0560), (EDX));
  /* 12cb44a2 mov eax, dword ptr [0x12ce0568] */
  EAX = (r32((uint32_t)(0x12ce0568)));
  /* 12cb44a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb44aa mov dword ptr [0x12ce0568], eax */
  w32((uint32_t)(0x12ce0568), (EAX));
  /* 12cb44af mov ecx, dword ptr [0x12ce0568] */
  ECX = (r32((uint32_t)(0x12ce0568)));
  /* 12cb44b5 cmp ecx, dword ptr [0x12ce056c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce056c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb44bb jbe 0x12cb44c9 */
  if ((C.cf||C.zf)) goto L_12cb44c9;
  /* 12cb44bd mov edx, dword ptr [0x12ce0568] */
  EDX = (r32((uint32_t)(0x12ce0568)));
  /* 12cb44c3 mov dword ptr [0x12ce056c], edx */
  w32((uint32_t)(0x12ce056c), (EDX));
L_12cb44c9:;
  /* 12cb44c9 cmp dword ptr [0x12ce0564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb44d0 je 0x12cb44df */
  if (C.zf) goto L_12cb44df;
  /* 12cb44d2 mov eax, dword ptr [0x12ce0564] */
  EAX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb44d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb44da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12cb44dd jmp 0x12cb44e8 */
  goto L_12cb44e8;
L_12cb44df:;
  /* 12cb44df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb44e2 mov dword ptr [0x12ce055c], edx */
  w32((uint32_t)(0x12ce055c), (EDX));
L_12cb44e8:;
  /* 12cb44e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb44eb mov ecx, dword ptr [0x12ce0564] */
  ECX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb44f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cb44f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb44f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12cb44fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4500 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb4503 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12cb4506 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4509 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb450c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12cb450f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4512 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4515 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12cb4518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb451b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb451e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12cb4521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4524 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb4527 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12cb452a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb452d mov dword ptr [0x12ce0564], ecx */
  w32((uint32_t)(0x12ce0564), (ECX));
L_12cb4533:;
  /* 12cb4533 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb4535 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb4537 mov dl, byte ptr [0x12cdea90] */
  DL = (r8((uint32_t)(0x12cdea90)));
  /* 12cb453d push edx */
  push32((uint32_t)(EDX));
  /* 12cb453e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4541 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4544 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4545 call 0x12cb7f20 */
  push32(0x12cb454au); f_12cb7f20();
  /* 12cb454a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb454d push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb454f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4551 mov cl, byte ptr [0x12cdea90] */
  CL = (r8((uint32_t)(0x12cdea90)));
  /* 12cb4557 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4558 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb455b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb455e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12cb4562 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4563 call 0x12cb7f20 */
  push32(0x12cb4568u); f_12cb7f20();
  /* 12cb4568 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb456b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb456e push edx */
  push32((uint32_t)(EDX));
  /* 12cb456f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4571 mov al, byte ptr [0x12cdea92] */
  AL = (r8((uint32_t)(0x12cdea92)));
  /* 12cb4576 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb457a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb457d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb457e call 0x12cb7f20 */
  push32(0x12cb4583u); f_12cb7f20();
  /* 12cb4583 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4589 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12cb458c:;
  /* 12cb458c pop edi */
  EDI = (pop32());
  /* 12cb458d pop esi */
  ESI = (pop32());
  /* 12cb458e pop ebx */
  EBX = (pop32());
  /* 12cb458f mov esp, ebp */
  ESP = (EBP);
  /* 12cb4591 pop ebp */
  EBP = (pop32());
  /* 12cb4592 ret  */
  ESPCHK(0x12cb4280u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x12cb45a0 (27 bytes, 13 insns) */
void f_12cb45a0(void) {
  FTRACE(0x12cb45a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb45a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb45a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb45a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb45a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb45a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb45a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb45ac push eax */
  push32((uint32_t)(EAX));
  /* 12cb45ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb45b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb45b1 call 0x12cb45c0 */
  push32(0x12cb45b6u); f_12cb45c0();
  /* 12cb45b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb45b9 pop ebp */
  EBP = (pop32());
  /* 12cb45ba ret  */
  ESPCHK(0x12cb45a0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12cb45c0 (96 bytes, 37 insns) */
void f_12cb45c0(void) {
  FTRACE(0x12cb45c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb45c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb45c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb45c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb45c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb45c9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb45cd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12cb45d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb45d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb45d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb45d7 push edx */
  push32((uint32_t)(EDX));
  /* 12cb45d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb45db push eax */
  push32((uint32_t)(EAX));
  /* 12cb45dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb45df push ecx */
  push32((uint32_t)(ECX));
  /* 12cb45e0 call 0x12cb41b0 */
  push32(0x12cb45e5u); f_12cb41b0();
  /* 12cb45e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb45e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb45eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb45ef je 0x12cb4619 */
  if (C.zf) goto L_12cb4619;
  /* 12cb45f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb45f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cb45f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb45fa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb45fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb4600:;
  /* 12cb4600 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4603 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4606 jae 0x12cb4619 */
  if (!C.cf) goto L_12cb4619;
  /* 12cb4608 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb460b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cb460e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4611 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4614 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb4617 jmp 0x12cb4600 */
  goto L_12cb4600;
L_12cb4619:;
  /* 12cb4619 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb461c mov esp, ebp */
  ESP = (EBP);
  /* 12cb461e pop ebp */
  EBP = (pop32());
  /* 12cb461f ret  */
  ESPCHK(0x12cb45c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004620 @ 0x12cb4620 (27 bytes, 13 insns) */
void f_12cb4620(void) {
  FTRACE(0x12cb4620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4620 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4621 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4623 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4625 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4627 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4629 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb462c push eax */
  push32((uint32_t)(EAX));
  /* 12cb462d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4630 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4631 call 0x12cb4640 */
  push32(0x12cb4636u); f_12cb4640();
  /* 12cb4636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4639 pop ebp */
  EBP = (pop32());
  /* 12cb463a ret  */
  ESPCHK(0x12cb4620u, _esp0);
  ESP += 4; return;
}

/* FUN_10004640 @ 0x12cb4640 (64 bytes, 27 insns) */
void f_12cb4640(void) {
  FTRACE(0x12cb4640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4640 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4641 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4643 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4644 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb4646 call 0x12cb7bb0 */
  push32(0x12cb464bu); f_12cb7bb0();
  /* 12cb464b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb464e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4650 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb4653 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4654 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb4657 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4658 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb465b push edx */
  push32((uint32_t)(EDX));
  /* 12cb465c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb465f push eax */
  push32((uint32_t)(EAX));
  /* 12cb4660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4663 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4664 call 0x12cb4680 */
  push32(0x12cb4669u); f_12cb4680();
  /* 12cb4669 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb466c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb466f push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb4671 call 0x12cb7c50 */
  push32(0x12cb4676u); f_12cb7c50();
  /* 12cb4676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb467c mov esp, ebp */
  ESP = (EBP);
  /* 12cb467e pop ebp */
  EBP = (pop32());
  /* 12cb467f ret  */
  ESPCHK(0x12cb4640u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x12cb4680 (1297 bytes, 431 insns) */
void f_12cb4680(void) {
  FTRACE(0x12cb4680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4680 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4681 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4683 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb4686 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb4687 push esi */
  push32((uint32_t)(ESI));
  /* 12cb4688 push edi */
  push32((uint32_t)(EDI));
  /* 12cb4689 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12cb4690 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4694 jne 0x12cb46b3 */
  if (!C.zf) goto L_12cb46b3;
  /* 12cb4696 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb4699 push eax */
  push32((uint32_t)(EAX));
  /* 12cb469a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb469d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb469e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb46a1 push edx */
  push32((uint32_t)(EDX));
  /* 12cb46a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb46a5 push eax */
  push32((uint32_t)(EAX));
  /* 12cb46a6 call 0x12cb41b0 */
  push32(0x12cb46abu); f_12cb41b0();
  /* 12cb46ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb46ae jmp 0x12cb4b8a */
  goto L_12cb4b8a;
L_12cb46b3:;
  /* 12cb46b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb46b7 je 0x12cb46d6 */
  if (C.zf) goto L_12cb46d6;
  /* 12cb46b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb46bd jne 0x12cb46d6 */
  if (!C.zf) goto L_12cb46d6;
  /* 12cb46bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb46c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb46c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb46c6 push edx */
  push32((uint32_t)(EDX));
  /* 12cb46c7 call 0x12cb4c40 */
  push32(0x12cb46ccu); f_12cb4c40();
  /* 12cb46cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb46cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb46d1 jmp 0x12cb4b8a */
  goto L_12cb4b8a;
L_12cb46d6:;
  /* 12cb46d6 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb46db and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb46de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb46e0 je 0x12cb4712 */
  if (C.zf) goto L_12cb4712;
L_12cb46e2:;
  /* 12cb46e2 call 0x12cb5350 */
  push32(0x12cb46e7u); f_12cb5350();
  /* 12cb46e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb46e9 jne 0x12cb470c */
  if (!C.zf) goto L_12cb470c;
  /* 12cb46eb push 0x12cdb8f8 */
  push32((uint32_t)(0x12cdb8f8u));
  /* 12cb46f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb46f2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12cb46f7 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb46fc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb46fe call 0x12cb3270 */
  push32(0x12cb4703u); f_12cb3270();
  /* 12cb4703 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4706 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4709 jne 0x12cb470c */
  if (!C.zf) goto L_12cb470c;
  /* 12cb470b int3  */
  x86_unimpl("int3 @ 0x12cb470b");
L_12cb470c:;
  /* 12cb470c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb470e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb4710 jne 0x12cb46e2 */
  if (!C.zf) goto L_12cb46e2;
L_12cb4712:;
  /* 12cb4712 mov edx, dword ptr [0x12cdea88] */
  EDX = (r32((uint32_t)(0x12cdea88)));
  /* 12cb4718 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cb471b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb471e cmp eax, dword ptr [0x12cdea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4724 jne 0x12cb4727 */
  if (!C.zf) goto L_12cb4727;
  /* 12cb4726 int3  */
  x86_unimpl("int3 @ 0x12cb4726");
L_12cb4727:;
  /* 12cb4727 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb472a push ecx */
  push32((uint32_t)(ECX));
  /* 12cb472b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb472e push edx */
  push32((uint32_t)(EDX));
  /* 12cb472f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb4732 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4733 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb4736 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4737 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb473a push edx */
  push32((uint32_t)(EDX));
  /* 12cb473b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb473e push eax */
  push32((uint32_t)(EAX));
  /* 12cb473f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4741 call dword ptr [0x12cdec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cdec90))), 0x12cb4747u);
  /* 12cb4747 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb474a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb474c jne 0x12cb47ac */
  if (!C.zf) goto L_12cb47ac;
  /* 12cb474e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4752 je 0x12cb477f */
  if (C.zf) goto L_12cb477f;
L_12cb4754:;
  /* 12cb4754 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb4757 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4758 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb475b push edx */
  push32((uint32_t)(EDX));
  /* 12cb475c push 0x12cdba74 */
  push32((uint32_t)(0x12cdba74u));
  /* 12cb4761 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4763 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4765 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4769 call 0x12cb3270 */
  push32(0x12cb476eu); f_12cb3270();
  /* 12cb476e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4771 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4774 jne 0x12cb4777 */
  if (!C.zf) goto L_12cb4777;
  /* 12cb4776 int3  */
  x86_unimpl("int3 @ 0x12cb4776");
L_12cb4777:;
  /* 12cb4777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb477b jne 0x12cb4754 */
  if (!C.zf) goto L_12cb4754;
  /* 12cb477d jmp 0x12cb47a5 */
  goto L_12cb47a5;
L_12cb477f:;
  /* 12cb477f push 0x12cdba50 */
  push32((uint32_t)(0x12cdba50u));
  /* 12cb4784 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb4789 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb478b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb478d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb478f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4791 call 0x12cb3270 */
  push32(0x12cb4796u); f_12cb3270();
  /* 12cb4796 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4799 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb479c jne 0x12cb479f */
  if (!C.zf) goto L_12cb479f;
  /* 12cb479e int3  */
  x86_unimpl("int3 @ 0x12cb479e");
L_12cb479f:;
  /* 12cb479f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb47a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb47a3 jne 0x12cb477f */
  if (!C.zf) goto L_12cb477f;
L_12cb47a5:;
  /* 12cb47a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb47a7 jmp 0x12cb4b8a */
  goto L_12cb4b8a;
L_12cb47ac:;
  /* 12cb47ac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb47b0 jbe 0x12cb47de */
  if ((C.cf||C.zf)) goto L_12cb47de;
L_12cb47b2:;
  /* 12cb47b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb47b5 push edx */
  push32((uint32_t)(EDX));
  /* 12cb47b6 push 0x12cdba20 */
  push32((uint32_t)(0x12cdba20u));
  /* 12cb47bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb47bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb47bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb47c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb47c3 call 0x12cb3270 */
  push32(0x12cb47c8u); f_12cb3270();
  /* 12cb47c8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb47cb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb47ce jne 0x12cb47d1 */
  if (!C.zf) goto L_12cb47d1;
  /* 12cb47d0 int3  */
  x86_unimpl("int3 @ 0x12cb47d0");
L_12cb47d1:;
  /* 12cb47d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb47d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb47d5 jne 0x12cb47b2 */
  if (!C.zf) goto L_12cb47b2;
  /* 12cb47d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb47d9 jmp 0x12cb4b8a */
  goto L_12cb4b8a;
L_12cb47de:;
  /* 12cb47de cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb47e2 je 0x12cb4826 */
  if (C.zf) goto L_12cb4826;
  /* 12cb47e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb47e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb47ed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb47f0 je 0x12cb4826 */
  if (C.zf) goto L_12cb4826;
  /* 12cb47f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb47f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb47fb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb47fe je 0x12cb4826 */
  if (C.zf) goto L_12cb4826;
L_12cb4800:;
  /* 12cb4800 push 0x12cdb834 */
  push32((uint32_t)(0x12cdb834u));
  /* 12cb4805 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb480a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb480c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb480e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4810 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4812 call 0x12cb3270 */
  push32(0x12cb4817u); f_12cb3270();
  /* 12cb4817 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb481a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb481d jne 0x12cb4820 */
  if (!C.zf) goto L_12cb4820;
  /* 12cb481f int3  */
  x86_unimpl("int3 @ 0x12cb481f");
L_12cb4820:;
  /* 12cb4820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4824 jne 0x12cb4800 */
  if (!C.zf) goto L_12cb4800;
L_12cb4826:;
  /* 12cb4826 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4829 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb482a call 0x12cb57b0 */
  push32(0x12cb482fu); f_12cb57b0();
  /* 12cb482f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4834 jne 0x12cb4857 */
  if (!C.zf) goto L_12cb4857;
  /* 12cb4836 push 0x12cdb9fc */
  push32((uint32_t)(0x12cdb9fcu));
  /* 12cb483b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb483d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12cb4842 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4847 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4849 call 0x12cb3270 */
  push32(0x12cb484eu); f_12cb3270();
  /* 12cb484e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4851 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4854 jne 0x12cb4857 */
  if (!C.zf) goto L_12cb4857;
  /* 12cb4856 int3  */
  x86_unimpl("int3 @ 0x12cb4856");
L_12cb4857:;
  /* 12cb4857 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb4859 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb485b jne 0x12cb4826 */
  if (!C.zf) goto L_12cb4826;
  /* 12cb485d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4860 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb4863 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb4866 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb4869 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb486d jne 0x12cb4876 */
  if (!C.zf) goto L_12cb4876;
  /* 12cb486f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12cb4876:;
  /* 12cb4876 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb487a je 0x12cb48ba */
  if (C.zf) goto L_12cb48ba;
L_12cb487c:;
  /* 12cb487c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb487f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4886 jne 0x12cb4891 */
  if (!C.zf) goto L_12cb4891;
  /* 12cb4888 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb488b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb488f je 0x12cb48b2 */
  if (C.zf) goto L_12cb48b2;
L_12cb4891:;
  /* 12cb4891 push 0x12cdb9b4 */
  push32((uint32_t)(0x12cdb9b4u));
  /* 12cb4896 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4898 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12cb489d push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb48a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb48a4 call 0x12cb3270 */
  push32(0x12cb48a9u); f_12cb3270();
  /* 12cb48a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb48ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb48af jne 0x12cb48b2 */
  if (!C.zf) goto L_12cb48b2;
  /* 12cb48b1 int3  */
  x86_unimpl("int3 @ 0x12cb48b1");
L_12cb48b2:;
  /* 12cb48b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb48b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb48b6 jne 0x12cb487c */
  if (!C.zf) goto L_12cb487c;
  /* 12cb48b8 jmp 0x12cb491e */
  goto L_12cb491e;
L_12cb48ba:;
  /* 12cb48ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb48bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb48c0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb48c5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb48c8 jne 0x12cb48df */
  if (!C.zf) goto L_12cb48df;
  /* 12cb48ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb48cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb48d3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb48d6 jne 0x12cb48df */
  if (!C.zf) goto L_12cb48df;
  /* 12cb48d8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12cb48df:;
  /* 12cb48df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb48e2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb48e5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb48ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb48ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb48f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb48f5 je 0x12cb4918 */
  if (C.zf) goto L_12cb4918;
  /* 12cb48f7 push 0x12cdb978 */
  push32((uint32_t)(0x12cdb978u));
  /* 12cb48fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb48fe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12cb4903 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4908 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb490a call 0x12cb3270 */
  push32(0x12cb490fu); f_12cb3270();
  /* 12cb490f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4912 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4915 jne 0x12cb4918 */
  if (!C.zf) goto L_12cb4918;
  /* 12cb4917 int3  */
  x86_unimpl("int3 @ 0x12cb4917");
L_12cb4918:;
  /* 12cb4918 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb491a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb491c jne 0x12cb48df */
  if (!C.zf) goto L_12cb48df;
L_12cb491e:;
  /* 12cb491e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4922 je 0x12cb4949 */
  if (C.zf) goto L_12cb4949;
  /* 12cb4924 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb4927 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb492a push eax */
  push32((uint32_t)(EAX));
  /* 12cb492b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb492e push ecx */
  push32((uint32_t)(ECX));
  /* 12cb492f call 0x12cb8130 */
  push32(0x12cb4934u); f_12cb8130();
  /* 12cb4934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4937 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb493a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb493e jne 0x12cb4947 */
  if (!C.zf) goto L_12cb4947;
  /* 12cb4940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4942 jmp 0x12cb4b8a */
  goto L_12cb4b8a;
L_12cb4947:;
  /* 12cb4947 jmp 0x12cb496c */
  goto L_12cb496c;
L_12cb4949:;
  /* 12cb4949 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb494c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb494f push edx */
  push32((uint32_t)(EDX));
  /* 12cb4950 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb4953 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4954 call 0x12cb8080 */
  push32(0x12cb4959u); f_12cb8080();
  /* 12cb4959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb495c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb495f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4963 jne 0x12cb496c */
  if (!C.zf) goto L_12cb496c;
  /* 12cb4965 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4967 jmp 0x12cb4b8a */
  goto L_12cb4b8a;
L_12cb496c:;
  /* 12cb496c mov ecx, dword ptr [0x12cdea88] */
  ECX = (r32((uint32_t)(0x12cdea88)));
  /* 12cb4972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4975 mov dword ptr [0x12cdea88], ecx */
  w32((uint32_t)(0x12cdea88), (ECX));
  /* 12cb497b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb497f jne 0x12cb49d7 */
  if (!C.zf) goto L_12cb49d7;
  /* 12cb4981 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4984 mov eax, dword ptr [0x12ce0560] */
  EAX = (r32((uint32_t)(0x12ce0560)));
  /* 12cb4989 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb498c mov dword ptr [0x12ce0560], eax */
  w32((uint32_t)(0x12ce0560), (EAX));
  /* 12cb4991 mov ecx, dword ptr [0x12ce0560] */
  ECX = (r32((uint32_t)(0x12ce0560)));
  /* 12cb4997 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb499a mov dword ptr [0x12ce0560], ecx */
  w32((uint32_t)(0x12ce0560), (ECX));
  /* 12cb49a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb49a3 mov eax, dword ptr [0x12ce0568] */
  EAX = (r32((uint32_t)(0x12ce0568)));
  /* 12cb49a8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb49ab mov dword ptr [0x12ce0568], eax */
  w32((uint32_t)(0x12ce0568), (EAX));
  /* 12cb49b0 mov ecx, dword ptr [0x12ce0568] */
  ECX = (r32((uint32_t)(0x12ce0568)));
  /* 12cb49b6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb49b9 mov dword ptr [0x12ce0568], ecx */
  w32((uint32_t)(0x12ce0568), (ECX));
  /* 12cb49bf mov edx, dword ptr [0x12ce0568] */
  EDX = (r32((uint32_t)(0x12ce0568)));
  /* 12cb49c5 cmp edx, dword ptr [0x12ce056c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ce056c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb49cb jbe 0x12cb49d7 */
  if ((C.cf||C.zf)) goto L_12cb49d7;
  /* 12cb49cd mov eax, dword ptr [0x12ce0568] */
  EAX = (r32((uint32_t)(0x12ce0568)));
  /* 12cb49d2 mov dword ptr [0x12ce056c], eax */
  w32((uint32_t)(0x12ce056c), (EAX));
L_12cb49d7:;
  /* 12cb49d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb49da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb49dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb49e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb49e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb49e6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb49e9 jbe 0x12cb4a0f */
  if ((C.cf||C.zf)) goto L_12cb4a0f;
  /* 12cb49eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb49ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb49f1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb49f4 push edx */
  push32((uint32_t)(EDX));
  /* 12cb49f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb49f7 mov al, byte ptr [0x12cdea92] */
  AL = (r8((uint32_t)(0x12cdea92)));
  /* 12cb49fc push eax */
  push32((uint32_t)(EAX));
  /* 12cb49fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4a00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4a03 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4a06 push edx */
  push32((uint32_t)(EDX));
  /* 12cb4a07 call 0x12cb7f20 */
  push32(0x12cb4a0cu); f_12cb7f20();
  /* 12cb4a0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb4a0f:;
  /* 12cb4a0f push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb4a11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4a13 mov al, byte ptr [0x12cdea90] */
  AL = (r8((uint32_t)(0x12cdea90)));
  /* 12cb4a18 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4a19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4a1c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4a1f push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4a20 call 0x12cb7f20 */
  push32(0x12cb4a25u); f_12cb7f20();
  /* 12cb4a25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4a28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4a2c jne 0x12cb4a49 */
  if (!C.zf) goto L_12cb4a49;
  /* 12cb4a2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4a31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb4a34 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cb4a37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4a3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb4a3d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12cb4a40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4a43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb4a46 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12cb4a49:;
  /* 12cb4a49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb4a4f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12cb4a52:;
  /* 12cb4a52 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4a56 jne 0x12cb4a87 */
  if (!C.zf) goto L_12cb4a87;
  /* 12cb4a58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4a5c jne 0x12cb4a66 */
  if (!C.zf) goto L_12cb4a66;
  /* 12cb4a5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4a61 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4a64 je 0x12cb4a87 */
  if (C.zf) goto L_12cb4a87;
L_12cb4a66:;
  /* 12cb4a66 push 0x12cdb944 */
  push32((uint32_t)(0x12cdb944u));
  /* 12cb4a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4a6d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12cb4a72 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4a77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4a79 call 0x12cb3270 */
  push32(0x12cb4a7eu); f_12cb3270();
  /* 12cb4a7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4a81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4a84 jne 0x12cb4a87 */
  if (!C.zf) goto L_12cb4a87;
  /* 12cb4a86 int3  */
  x86_unimpl("int3 @ 0x12cb4a86");
L_12cb4a87:;
  /* 12cb4a87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb4a89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb4a8b jne 0x12cb4a52 */
  if (!C.zf) goto L_12cb4a52;
  /* 12cb4a8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4a90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4a93 je 0x12cb4a9b */
  if (C.zf) goto L_12cb4a9b;
  /* 12cb4a95 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4a99 je 0x12cb4aa3 */
  if (C.zf) goto L_12cb4aa3;
L_12cb4a9b:;
  /* 12cb4a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4a9e jmp 0x12cb4b8a */
  goto L_12cb4b8a;
L_12cb4aa3:;
  /* 12cb4aa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4aa6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4aa9 je 0x12cb4abb */
  if (C.zf) goto L_12cb4abb;
  /* 12cb4aab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4aae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb4ab0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4ab3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb4ab6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cb4ab9 jmp 0x12cb4af7 */
  goto L_12cb4af7;
L_12cb4abb:;
  /* 12cb4abb mov eax, dword ptr [0x12ce055c] */
  EAX = (r32((uint32_t)(0x12ce055c)));
  /* 12cb4ac0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4ac3 je 0x12cb4ae6 */
  if (C.zf) goto L_12cb4ae6;
  /* 12cb4ac5 push 0x12cdb928 */
  push32((uint32_t)(0x12cdb928u));
  /* 12cb4aca push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4acc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12cb4ad1 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4ad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4ad8 call 0x12cb3270 */
  push32(0x12cb4addu); f_12cb3270();
  /* 12cb4add add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4ae0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4ae3 jne 0x12cb4ae6 */
  if (!C.zf) goto L_12cb4ae6;
  /* 12cb4ae5 int3  */
  x86_unimpl("int3 @ 0x12cb4ae5");
L_12cb4ae6:;
  /* 12cb4ae6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4ae8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb4aea jne 0x12cb4abb */
  if (!C.zf) goto L_12cb4abb;
  /* 12cb4aec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4aef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb4af2 mov dword ptr [0x12ce055c], eax */
  w32((uint32_t)(0x12ce055c), (EAX));
L_12cb4af7:;
  /* 12cb4af7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4afa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4afe je 0x12cb4b0f */
  if (C.zf) goto L_12cb4b0f;
  /* 12cb4b00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4b03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb4b06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4b09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb4b0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cb4b0d jmp 0x12cb4b4a */
  goto L_12cb4b4a;
L_12cb4b0f:;
  /* 12cb4b0f mov eax, dword ptr [0x12ce0564] */
  EAX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb4b14 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4b17 je 0x12cb4b3a */
  if (C.zf) goto L_12cb4b3a;
  /* 12cb4b19 push 0x12cdb90c */
  push32((uint32_t)(0x12cdb90cu));
  /* 12cb4b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4b20 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12cb4b25 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4b2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4b2c call 0x12cb3270 */
  push32(0x12cb4b31u); f_12cb3270();
  /* 12cb4b31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4b34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4b37 jne 0x12cb4b3a */
  if (!C.zf) goto L_12cb4b3a;
  /* 12cb4b39 int3  */
  x86_unimpl("int3 @ 0x12cb4b39");
L_12cb4b3a:;
  /* 12cb4b3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4b3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb4b3e jne 0x12cb4b0f */
  if (!C.zf) goto L_12cb4b0f;
  /* 12cb4b40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4b43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb4b45 mov dword ptr [0x12ce0564], eax */
  w32((uint32_t)(0x12ce0564), (EAX));
L_12cb4b4a:;
  /* 12cb4b4a cmp dword ptr [0x12ce0564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4b51 je 0x12cb4b61 */
  if (C.zf) goto L_12cb4b61;
  /* 12cb4b53 mov ecx, dword ptr [0x12ce0564] */
  ECX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb4b59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4b5c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12cb4b5f jmp 0x12cb4b69 */
  goto L_12cb4b69;
L_12cb4b61:;
  /* 12cb4b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4b64 mov dword ptr [0x12ce055c], eax */
  w32((uint32_t)(0x12ce055c), (EAX));
L_12cb4b69:;
  /* 12cb4b69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4b6c mov edx, dword ptr [0x12ce0564] */
  EDX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb4b72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cb4b74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4b77 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cb4b7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb4b81 mov dword ptr [0x12ce0564], ecx */
  w32((uint32_t)(0x12ce0564), (ECX));
  /* 12cb4b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cb4b8a:;
  /* 12cb4b8a pop edi */
  EDI = (pop32());
  /* 12cb4b8b pop esi */
  ESI = (pop32());
  /* 12cb4b8c pop ebx */
  EBX = (pop32());
  /* 12cb4b8d mov esp, ebp */
  ESP = (EBP);
  /* 12cb4b8f pop ebp */
  EBP = (pop32());
  /* 12cb4b90 ret  */
  ESPCHK(0x12cb4680u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x12cb4ba0 (27 bytes, 13 insns) */
void f_12cb4ba0(void) {
  FTRACE(0x12cb4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4ba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4ba9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb4bac push eax */
  push32((uint32_t)(EAX));
  /* 12cb4bad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4bb1 call 0x12cb4bc0 */
  push32(0x12cb4bb6u); f_12cb4bc0();
  /* 12cb4bb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4bb9 pop ebp */
  EBP = (pop32());
  /* 12cb4bba ret  */
  ESPCHK(0x12cb4ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bc0 @ 0x12cb4bc0 (64 bytes, 27 insns) */
void f_12cb4bc0(void) {
  FTRACE(0x12cb4bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4bc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb4bc6 call 0x12cb7bb0 */
  push32(0x12cb4bcbu); f_12cb7bb0();
  /* 12cb4bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4bce push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4bd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb4bd3 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4bd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb4bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4bd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb4bdb push edx */
  push32((uint32_t)(EDX));
  /* 12cb4bdc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb4bdf push eax */
  push32((uint32_t)(EAX));
  /* 12cb4be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4be4 call 0x12cb4680 */
  push32(0x12cb4be9u); f_12cb4680();
  /* 12cb4be9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4bec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb4bef push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb4bf1 call 0x12cb7c50 */
  push32(0x12cb4bf6u); f_12cb7c50();
  /* 12cb4bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4bf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4bfc mov esp, ebp */
  ESP = (EBP);
  /* 12cb4bfe pop ebp */
  EBP = (pop32());
  /* 12cb4bff ret  */
  ESPCHK(0x12cb4bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x12cb4c00 (19 bytes, 9 insns) */
void f_12cb4c00(void) {
  FTRACE(0x12cb4c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4c01 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4c03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4c05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4c08 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4c09 call 0x12cb4c40 */
  push32(0x12cb4c0eu); f_12cb4c40();
  /* 12cb4c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4c11 pop ebp */
  EBP = (pop32());
  /* 12cb4c12 ret  */
  ESPCHK(0x12cb4c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x12cb4c20 (19 bytes, 9 insns) */
void f_12cb4c20(void) {
  FTRACE(0x12cb4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4c21 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4c25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4c28 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4c29 call 0x12cb4c70 */
  push32(0x12cb4c2eu); f_12cb4c70();
  /* 12cb4c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4c31 pop ebp */
  EBP = (pop32());
  /* 12cb4c32 ret  */
  ESPCHK(0x12cb4c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x12cb4c40 (41 bytes, 16 insns) */
void f_12cb4c40(void) {
  FTRACE(0x12cb4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4c41 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4c43 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb4c45 call 0x12cb7bb0 */
  push32(0x12cb4c4au); f_12cb7bb0();
  /* 12cb4c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb4c50 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4c51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4c54 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4c55 call 0x12cb4c70 */
  push32(0x12cb4c5au); f_12cb4c70();
  /* 12cb4c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4c5d push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb4c5f call 0x12cb7c50 */
  push32(0x12cb4c64u); f_12cb7c50();
  /* 12cb4c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4c67 pop ebp */
  EBP = (pop32());
  /* 12cb4c68 ret  */
  ESPCHK(0x12cb4c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c70 @ 0x12cb4c70 (1004 bytes, 342 insns) */
void f_12cb4c70(void) {
  FTRACE(0x12cb4c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb4c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb4c71 mov ebp, esp */
  EBP = (ESP);
  /* 12cb4c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4c74 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb4c75 push esi */
  push32((uint32_t)(ESI));
  /* 12cb4c76 push edi */
  push32((uint32_t)(EDI));
  /* 12cb4c77 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb4c7c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4c81 je 0x12cb4cb3 */
  if (C.zf) goto L_12cb4cb3;
L_12cb4c83:;
  /* 12cb4c83 call 0x12cb5350 */
  push32(0x12cb4c88u); f_12cb5350();
  /* 12cb4c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4c8a jne 0x12cb4cad */
  if (!C.zf) goto L_12cb4cad;
  /* 12cb4c8c push 0x12cdb8f8 */
  push32((uint32_t)(0x12cdb8f8u));
  /* 12cb4c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4c93 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12cb4c98 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4c9f call 0x12cb3270 */
  push32(0x12cb4ca4u); f_12cb3270();
  /* 12cb4ca4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4ca7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4caa jne 0x12cb4cad */
  if (!C.zf) goto L_12cb4cad;
  /* 12cb4cac int3  */
  x86_unimpl("int3 @ 0x12cb4cac");
L_12cb4cad:;
  /* 12cb4cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4caf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb4cb1 jne 0x12cb4c83 */
  if (!C.zf) goto L_12cb4c83;
L_12cb4cb3:;
  /* 12cb4cb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4cb7 jne 0x12cb4cbe */
  if (!C.zf) goto L_12cb4cbe;
  /* 12cb4cb9 jmp 0x12cb5055 */
  goto L_12cb5055;
L_12cb4cbe:;
  /* 12cb4cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4cc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb4cc7 push edx */
  push32((uint32_t)(EDX));
  /* 12cb4cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4ccd push eax */
  push32((uint32_t)(EAX));
  /* 12cb4cce push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb4cd0 call dword ptr [0x12cdec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cdec90))), 0x12cb4cd6u);
  /* 12cb4cd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4cdb jne 0x12cb4d08 */
  if (!C.zf) goto L_12cb4d08;
L_12cb4cdd:;
  /* 12cb4cdd push 0x12cdbbbc */
  push32((uint32_t)(0x12cdbbbcu));
  /* 12cb4ce2 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb4ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4ced push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4cef call 0x12cb3270 */
  push32(0x12cb4cf4u); f_12cb3270();
  /* 12cb4cf4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4cf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4cfa jne 0x12cb4cfd */
  if (!C.zf) goto L_12cb4cfd;
  /* 12cb4cfc int3  */
  x86_unimpl("int3 @ 0x12cb4cfc");
L_12cb4cfd:;
  /* 12cb4cfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4cff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb4d01 jne 0x12cb4cdd */
  if (!C.zf) goto L_12cb4cdd;
  /* 12cb4d03 jmp 0x12cb5055 */
  goto L_12cb5055;
L_12cb4d08:;
  /* 12cb4d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4d0b push edx */
  push32((uint32_t)(EDX));
  /* 12cb4d0c call 0x12cb57b0 */
  push32(0x12cb4d11u); f_12cb57b0();
  /* 12cb4d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4d16 jne 0x12cb4d39 */
  if (!C.zf) goto L_12cb4d39;
  /* 12cb4d18 push 0x12cdb9fc */
  push32((uint32_t)(0x12cdb9fcu));
  /* 12cb4d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4d1f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12cb4d24 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4d29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4d2b call 0x12cb3270 */
  push32(0x12cb4d30u); f_12cb3270();
  /* 12cb4d30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4d33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4d36 jne 0x12cb4d39 */
  if (!C.zf) goto L_12cb4d39;
  /* 12cb4d38 int3  */
  x86_unimpl("int3 @ 0x12cb4d38");
L_12cb4d39:;
  /* 12cb4d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4d3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4d3d jne 0x12cb4d08 */
  if (!C.zf) goto L_12cb4d08;
  /* 12cb4d3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb4d42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb4d45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb4d48:;
  /* 12cb4d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4d4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb4d4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4d53 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4d56 je 0x12cb4d9b */
  if (C.zf) goto L_12cb4d9b;
  /* 12cb4d58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4d5b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4d5f je 0x12cb4d9b */
  if (C.zf) goto L_12cb4d9b;
  /* 12cb4d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4d64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb4d67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4d6c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4d6f je 0x12cb4d9b */
  if (C.zf) goto L_12cb4d9b;
  /* 12cb4d71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4d74 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4d78 je 0x12cb4d9b */
  if (C.zf) goto L_12cb4d9b;
  /* 12cb4d7a push 0x12cdbb94 */
  push32((uint32_t)(0x12cdbb94u));
  /* 12cb4d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4d81 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12cb4d86 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4d8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4d8d call 0x12cb3270 */
  push32(0x12cb4d92u); f_12cb3270();
  /* 12cb4d92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4d95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4d98 jne 0x12cb4d9b */
  if (!C.zf) goto L_12cb4d9b;
  /* 12cb4d9a int3  */
  x86_unimpl("int3 @ 0x12cb4d9a");
L_12cb4d9b:;
  /* 12cb4d9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb4d9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb4d9f jne 0x12cb4d48 */
  if (!C.zf) goto L_12cb4d48;
  /* 12cb4da1 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb4da6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4dab jne 0x12cb4e76 */
  if (!C.zf) goto L_12cb4e76;
  /* 12cb4db1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb4db3 mov cl, byte ptr [0x12cdea90] */
  CL = (r8((uint32_t)(0x12cdea90)));
  /* 12cb4db9 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4dba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4dbd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12cb4dc1 call 0x12cb52c0 */
  push32(0x12cb4dc6u); f_12cb52c0();
  /* 12cb4dc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4dcb jne 0x12cb4e10 */
  if (!C.zf) goto L_12cb4e10;
L_12cb4dcd:;
  /* 12cb4dcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4dd0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4dd3 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4dd7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cb4dda push edx */
  push32((uint32_t)(EDX));
  /* 12cb4ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4dde mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cb4de1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4de7 mov edx, dword ptr [ecx*4 + 0x12cdea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdea94)));
  /* 12cb4dee push edx */
  push32((uint32_t)(EDX));
  /* 12cb4def push 0x12cdbb68 */
  push32((uint32_t)(0x12cdbb68u));
  /* 12cb4df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4df6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4df8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4dfa push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4dfc call 0x12cb3270 */
  push32(0x12cb4e01u); f_12cb3270();
  /* 12cb4e01 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4e04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4e07 jne 0x12cb4e0a */
  if (!C.zf) goto L_12cb4e0a;
  /* 12cb4e09 int3  */
  x86_unimpl("int3 @ 0x12cb4e09");
L_12cb4e0a:;
  /* 12cb4e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4e0e jne 0x12cb4dcd */
  if (!C.zf) goto L_12cb4dcd;
L_12cb4e10:;
  /* 12cb4e10 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb4e12 mov cl, byte ptr [0x12cdea90] */
  CL = (r8((uint32_t)(0x12cdea90)));
  /* 12cb4e18 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4e19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4e1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb4e1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4e22 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12cb4e26 push edx */
  push32((uint32_t)(EDX));
  /* 12cb4e27 call 0x12cb52c0 */
  push32(0x12cb4e2cu); f_12cb52c0();
  /* 12cb4e2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4e31 jne 0x12cb4e76 */
  if (!C.zf) goto L_12cb4e76;
L_12cb4e33:;
  /* 12cb4e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4e36 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4e39 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4e3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4e3d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cb4e40 push edx */
  push32((uint32_t)(EDX));
  /* 12cb4e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4e44 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cb4e47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4e4d mov edx, dword ptr [ecx*4 + 0x12cdea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdea94)));
  /* 12cb4e54 push edx */
  push32((uint32_t)(EDX));
  /* 12cb4e55 push 0x12cdbb3c */
  push32((uint32_t)(0x12cdbb3cu));
  /* 12cb4e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4e60 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb4e62 call 0x12cb3270 */
  push32(0x12cb4e67u); f_12cb3270();
  /* 12cb4e67 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4e6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4e6d jne 0x12cb4e70 */
  if (!C.zf) goto L_12cb4e70;
  /* 12cb4e6f int3  */
  x86_unimpl("int3 @ 0x12cb4e6f");
L_12cb4e70:;
  /* 12cb4e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb4e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb4e74 jne 0x12cb4e33 */
  if (!C.zf) goto L_12cb4e33;
L_12cb4e76:;
  /* 12cb4e76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4e79 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4e7d jne 0x12cb4eeb */
  if (!C.zf) goto L_12cb4eeb;
L_12cb4e7f:;
  /* 12cb4e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4e82 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4e89 jne 0x12cb4e94 */
  if (!C.zf) goto L_12cb4e94;
  /* 12cb4e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4e8e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4e92 je 0x12cb4eb5 */
  if (C.zf) goto L_12cb4eb5;
L_12cb4e94:;
  /* 12cb4e94 push 0x12cdbafc */
  push32((uint32_t)(0x12cdbafcu));
  /* 12cb4e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4e9b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12cb4ea0 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4ea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4ea7 call 0x12cb3270 */
  push32(0x12cb4eacu); f_12cb3270();
  /* 12cb4eac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4eaf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4eb2 jne 0x12cb4eb5 */
  if (!C.zf) goto L_12cb4eb5;
  /* 12cb4eb4 int3  */
  x86_unimpl("int3 @ 0x12cb4eb4");
L_12cb4eb5:;
  /* 12cb4eb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4eb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb4eb9 jne 0x12cb4e7f */
  if (!C.zf) goto L_12cb4e7f;
  /* 12cb4ebb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4ebe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb4ec1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4ec4 push eax */
  push32((uint32_t)(EAX));
  /* 12cb4ec5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4ec7 mov cl, byte ptr [0x12cdea91] */
  CL = (r8((uint32_t)(0x12cdea91)));
  /* 12cb4ecd push ecx */
  push32((uint32_t)(ECX));
  /* 12cb4ece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4ed1 push edx */
  push32((uint32_t)(EDX));
  /* 12cb4ed2 call 0x12cb7f20 */
  push32(0x12cb4ed7u); f_12cb7f20();
  /* 12cb4ed7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4eda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4edd push eax */
  push32((uint32_t)(EAX));
  /* 12cb4ede call 0x12cb8320 */
  push32(0x12cb4ee3u); f_12cb8320();
  /* 12cb4ee3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4ee6 jmp 0x12cb5055 */
  goto L_12cb5055;
L_12cb4eeb:;
  /* 12cb4eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4eee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4ef2 jne 0x12cb4f01 */
  if (!C.zf) goto L_12cb4f01;
  /* 12cb4ef4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4ef8 jne 0x12cb4f01 */
  if (!C.zf) goto L_12cb4f01;
  /* 12cb4efa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12cb4f01:;
  /* 12cb4f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4f04 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb4f07 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4f0a je 0x12cb4f2d */
  if (C.zf) goto L_12cb4f2d;
  /* 12cb4f0c push 0x12cdbadc */
  push32((uint32_t)(0x12cdbadcu));
  /* 12cb4f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4f13 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12cb4f18 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4f1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4f1f call 0x12cb3270 */
  push32(0x12cb4f24u); f_12cb3270();
  /* 12cb4f24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4f27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4f2a jne 0x12cb4f2d */
  if (!C.zf) goto L_12cb4f2d;
  /* 12cb4f2c int3  */
  x86_unimpl("int3 @ 0x12cb4f2c");
L_12cb4f2d:;
  /* 12cb4f2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4f2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb4f31 jne 0x12cb4f01 */
  if (!C.zf) goto L_12cb4f01;
  /* 12cb4f33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4f36 mov eax, dword ptr [0x12ce0568] */
  EAX = (r32((uint32_t)(0x12ce0568)));
  /* 12cb4f3b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb4f3e mov dword ptr [0x12ce0568], eax */
  w32((uint32_t)(0x12ce0568), (EAX));
  /* 12cb4f43 mov ecx, dword ptr [0x12cdea84] */
  ECX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb4f49 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb4f4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb4f4e jne 0x12cb502c */
  if (!C.zf) goto L_12cb502c;
  /* 12cb4f54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4f57 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4f5a je 0x12cb4f6c */
  if (C.zf) goto L_12cb4f6c;
  /* 12cb4f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4f5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb4f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4f64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb4f67 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cb4f6a jmp 0x12cb4faa */
  goto L_12cb4faa;
L_12cb4f6c:;
  /* 12cb4f6c mov ecx, dword ptr [0x12ce055c] */
  ECX = (r32((uint32_t)(0x12ce055c)));
  /* 12cb4f72 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4f75 je 0x12cb4f98 */
  if (C.zf) goto L_12cb4f98;
  /* 12cb4f77 push 0x12cdbac4 */
  push32((uint32_t)(0x12cdbac4u));
  /* 12cb4f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4f7e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12cb4f83 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4f88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4f8a call 0x12cb3270 */
  push32(0x12cb4f8fu); f_12cb3270();
  /* 12cb4f8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4f92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4f95 jne 0x12cb4f98 */
  if (!C.zf) goto L_12cb4f98;
  /* 12cb4f97 int3  */
  x86_unimpl("int3 @ 0x12cb4f97");
L_12cb4f98:;
  /* 12cb4f98 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb4f9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb4f9c jne 0x12cb4f6c */
  if (!C.zf) goto L_12cb4f6c;
  /* 12cb4f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4fa1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb4fa4 mov dword ptr [0x12ce055c], ecx */
  w32((uint32_t)(0x12ce055c), (ECX));
L_12cb4faa:;
  /* 12cb4faa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4fad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4fb1 je 0x12cb4fc2 */
  if (C.zf) goto L_12cb4fc2;
  /* 12cb4fb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4fb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb4fb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4fbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb4fbe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cb4fc0 jmp 0x12cb4fff */
  goto L_12cb4fff;
L_12cb4fc2:;
  /* 12cb4fc2 mov ecx, dword ptr [0x12ce0564] */
  ECX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb4fc8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4fcb je 0x12cb4fee */
  if (C.zf) goto L_12cb4fee;
  /* 12cb4fcd push 0x12cdbaac */
  push32((uint32_t)(0x12cdbaacu));
  /* 12cb4fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb4fd4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12cb4fd9 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb4fde push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb4fe0 call 0x12cb3270 */
  push32(0x12cb4fe5u); f_12cb3270();
  /* 12cb4fe5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb4fe8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb4feb jne 0x12cb4fee */
  if (!C.zf) goto L_12cb4fee;
  /* 12cb4fed int3  */
  x86_unimpl("int3 @ 0x12cb4fed");
L_12cb4fee:;
  /* 12cb4fee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb4ff0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb4ff2 jne 0x12cb4fc2 */
  if (!C.zf) goto L_12cb4fc2;
  /* 12cb4ff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb4ff7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb4ff9 mov dword ptr [0x12ce0564], ecx */
  w32((uint32_t)(0x12ce0564), (ECX));
L_12cb4fff:;
  /* 12cb4fff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5002 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb5005 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5008 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5009 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb500b mov cl, byte ptr [0x12cdea91] */
  CL = (r8((uint32_t)(0x12cdea91)));
  /* 12cb5011 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5012 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5015 push edx */
  push32((uint32_t)(EDX));
  /* 12cb5016 call 0x12cb7f20 */
  push32(0x12cb501bu); f_12cb7f20();
  /* 12cb501b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb501e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5021 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5022 call 0x12cb8320 */
  push32(0x12cb5027u); f_12cb8320();
  /* 12cb5027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb502a jmp 0x12cb5055 */
  goto L_12cb5055;
L_12cb502c:;
  /* 12cb502c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb502f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12cb5036 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5039 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb503c push eax */
  push32((uint32_t)(EAX));
  /* 12cb503d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb503f mov cl, byte ptr [0x12cdea91] */
  CL = (r8((uint32_t)(0x12cdea91)));
  /* 12cb5045 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5049 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb504c push edx */
  push32((uint32_t)(EDX));
  /* 12cb504d call 0x12cb7f20 */
  push32(0x12cb5052u); f_12cb7f20();
  /* 12cb5052 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb5055:;
  /* 12cb5055 pop edi */
  EDI = (pop32());
  /* 12cb5056 pop esi */
  ESI = (pop32());
  /* 12cb5057 pop ebx */
  EBX = (pop32());
  /* 12cb5058 mov esp, ebp */
  ESP = (EBP);
  /* 12cb505a pop ebp */
  EBP = (pop32());
  /* 12cb505b ret  */
  ESPCHK(0x12cb4c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x12cb5060 (19 bytes, 9 insns) */
void f_12cb5060(void) {
  FTRACE(0x12cb5060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5060 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5061 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5063 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb5065 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5068 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5069 call 0x12cb5080 */
  push32(0x12cb506eu); f_12cb5080();
  /* 12cb506e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5071 pop ebp */
  EBP = (pop32());
  /* 12cb5072 ret  */
  ESPCHK(0x12cb5060u, _esp0);
  ESP += 4; return;
}

/* FUN_10005080 @ 0x12cb5080 (342 bytes, 119 insns) */
void f_12cb5080(void) {
  FTRACE(0x12cb5080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5080 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5081 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5086 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb5087 push esi */
  push32((uint32_t)(ESI));
  /* 12cb5088 push edi */
  push32((uint32_t)(EDI));
  /* 12cb5089 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb508e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5093 je 0x12cb50c5 */
  if (C.zf) goto L_12cb50c5;
L_12cb5095:;
  /* 12cb5095 call 0x12cb5350 */
  push32(0x12cb509au); f_12cb5350();
  /* 12cb509a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb509c jne 0x12cb50bf */
  if (!C.zf) goto L_12cb50bf;
  /* 12cb509e push 0x12cdb8f8 */
  push32((uint32_t)(0x12cdb8f8u));
  /* 12cb50a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb50a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12cb50aa push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb50af push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb50b1 call 0x12cb3270 */
  push32(0x12cb50b6u); f_12cb3270();
  /* 12cb50b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb50b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb50bc jne 0x12cb50bf */
  if (!C.zf) goto L_12cb50bf;
  /* 12cb50be int3  */
  x86_unimpl("int3 @ 0x12cb50be");
L_12cb50bf:;
  /* 12cb50bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb50c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb50c3 jne 0x12cb5095 */
  if (!C.zf) goto L_12cb5095;
L_12cb50c5:;
  /* 12cb50c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb50c7 call 0x12cb7bb0 */
  push32(0x12cb50ccu); f_12cb7bb0();
  /* 12cb50cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb50cf:;
  /* 12cb50cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb50d2 push edx */
  push32((uint32_t)(EDX));
  /* 12cb50d3 call 0x12cb57b0 */
  push32(0x12cb50d8u); f_12cb57b0();
  /* 12cb50d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb50db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb50dd jne 0x12cb5100 */
  if (!C.zf) goto L_12cb5100;
  /* 12cb50df push 0x12cdb9fc */
  push32((uint32_t)(0x12cdb9fcu));
  /* 12cb50e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb50e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12cb50eb push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb50f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb50f2 call 0x12cb3270 */
  push32(0x12cb50f7u); f_12cb3270();
  /* 12cb50f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb50fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb50fd jne 0x12cb5100 */
  if (!C.zf) goto L_12cb5100;
  /* 12cb50ff int3  */
  x86_unimpl("int3 @ 0x12cb50ff");
L_12cb5100:;
  /* 12cb5100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5104 jne 0x12cb50cf */
  if (!C.zf) goto L_12cb50cf;
  /* 12cb5106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5109 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb510c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cb510f:;
  /* 12cb510f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5112 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb5115 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb511a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb511d je 0x12cb5162 */
  if (C.zf) goto L_12cb5162;
  /* 12cb511f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5122 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5126 je 0x12cb5162 */
  if (C.zf) goto L_12cb5162;
  /* 12cb5128 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb512b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb512e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5133 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5136 je 0x12cb5162 */
  if (C.zf) goto L_12cb5162;
  /* 12cb5138 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb513b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb513f je 0x12cb5162 */
  if (C.zf) goto L_12cb5162;
  /* 12cb5141 push 0x12cdbb94 */
  push32((uint32_t)(0x12cdbb94u));
  /* 12cb5146 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5148 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12cb514d push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb5152 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb5154 call 0x12cb3270 */
  push32(0x12cb5159u); f_12cb3270();
  /* 12cb5159 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb515c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb515f jne 0x12cb5162 */
  if (!C.zf) goto L_12cb5162;
  /* 12cb5161 int3  */
  x86_unimpl("int3 @ 0x12cb5161");
L_12cb5162:;
  /* 12cb5162 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5164 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb5166 jne 0x12cb510f */
  if (!C.zf) goto L_12cb510f;
  /* 12cb5168 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb516b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb516f jne 0x12cb517e */
  if (!C.zf) goto L_12cb517e;
  /* 12cb5171 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5175 jne 0x12cb517e */
  if (!C.zf) goto L_12cb517e;
  /* 12cb5177 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12cb517e:;
  /* 12cb517e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5181 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5185 je 0x12cb51b9 */
  if (C.zf) goto L_12cb51b9;
L_12cb5187:;
  /* 12cb5187 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb518a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb518d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5190 je 0x12cb51b3 */
  if (C.zf) goto L_12cb51b3;
  /* 12cb5192 push 0x12cdbadc */
  push32((uint32_t)(0x12cdbadcu));
  /* 12cb5197 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5199 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12cb519e push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb51a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb51a5 call 0x12cb3270 */
  push32(0x12cb51aau); f_12cb3270();
  /* 12cb51aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb51ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb51b0 jne 0x12cb51b3 */
  if (!C.zf) goto L_12cb51b3;
  /* 12cb51b2 int3  */
  x86_unimpl("int3 @ 0x12cb51b2");
L_12cb51b3:;
  /* 12cb51b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb51b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb51b7 jne 0x12cb5187 */
  if (!C.zf) goto L_12cb5187;
L_12cb51b9:;
  /* 12cb51b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb51bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb51bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb51c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb51c4 call 0x12cb7c50 */
  push32(0x12cb51c9u); f_12cb7c50();
  /* 12cb51c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb51cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb51cf pop edi */
  EDI = (pop32());
  /* 12cb51d0 pop esi */
  ESI = (pop32());
  /* 12cb51d1 pop ebx */
  EBX = (pop32());
  /* 12cb51d2 mov esp, ebp */
  ESP = (EBP);
  /* 12cb51d4 pop ebp */
  EBP = (pop32());
  /* 12cb51d5 ret  */
  ESPCHK(0x12cb5080u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e0 @ 0x12cb51e0 (28 bytes, 11 insns) */
void f_12cb51e0(void) {
  FTRACE(0x12cb51e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb51e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb51e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb51e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb51e4 mov eax, dword ptr [0x12cdea8c] */
  EAX = (r32((uint32_t)(0x12cdea8c)));
  /* 12cb51e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb51ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb51ef mov dword ptr [0x12cdea8c], ecx */
  w32((uint32_t)(0x12cdea8c), (ECX));
  /* 12cb51f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb51f8 mov esp, ebp */
  ESP = (EBP);
  /* 12cb51fa pop ebp */
  EBP = (pop32());
  /* 12cb51fb ret  */
  ESPCHK(0x12cb51e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x12cb5200 (157 bytes, 59 insns) */
void f_12cb5200(void) {
  FTRACE(0x12cb5200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5200 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5201 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5203 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5204 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb5205 push esi */
  push32((uint32_t)(ESI));
  /* 12cb5206 push edi */
  push32((uint32_t)(EDI));
  /* 12cb5207 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb5209 call 0x12cb7bb0 */
  push32(0x12cb520eu); f_12cb7bb0();
  /* 12cb520e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5214 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5215 call 0x12cb57b0 */
  push32(0x12cb521au); f_12cb57b0();
  /* 12cb521a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb521d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb521f je 0x12cb528c */
  if (C.zf) goto L_12cb528c;
  /* 12cb5221 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5224 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5227 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb522a:;
  /* 12cb522a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb522d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb5230 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5235 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5238 je 0x12cb527d */
  if (C.zf) goto L_12cb527d;
  /* 12cb523a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb523d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5241 je 0x12cb527d */
  if (C.zf) goto L_12cb527d;
  /* 12cb5243 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5246 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb5249 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb524e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5251 je 0x12cb527d */
  if (C.zf) goto L_12cb527d;
  /* 12cb5253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5256 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb525a je 0x12cb527d */
  if (C.zf) goto L_12cb527d;
  /* 12cb525c push 0x12cdbb94 */
  push32((uint32_t)(0x12cdbb94u));
  /* 12cb5261 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5263 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12cb5268 push 0x12cdb8ec */
  push32((uint32_t)(0x12cdb8ecu));
  /* 12cb526d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb526f call 0x12cb3270 */
  push32(0x12cb5274u); f_12cb3270();
  /* 12cb5274 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb527a jne 0x12cb527d */
  if (!C.zf) goto L_12cb527d;
  /* 12cb527c int3  */
  x86_unimpl("int3 @ 0x12cb527c");
L_12cb527d:;
  /* 12cb527d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb527f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb5281 jne 0x12cb522a */
  if (!C.zf) goto L_12cb522a;
  /* 12cb5283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5286 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb5289 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12cb528c:;
  /* 12cb528c push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb528e call 0x12cb7c50 */
  push32(0x12cb5293u); f_12cb7c50();
  /* 12cb5293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5296 pop edi */
  EDI = (pop32());
  /* 12cb5297 pop esi */
  ESI = (pop32());
  /* 12cb5298 pop ebx */
  EBX = (pop32());
  /* 12cb5299 mov esp, ebp */
  ESP = (EBP);
  /* 12cb529b pop ebp */
  EBP = (pop32());
  /* 12cb529c ret  */
  ESPCHK(0x12cb5200u, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x12cb52a0 (28 bytes, 11 insns) */
void f_12cb52a0(void) {
  FTRACE(0x12cb52a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb52a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb52a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb52a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb52a4 mov eax, dword ptr [0x12cdec90] */
  EAX = (r32((uint32_t)(0x12cdec90)));
  /* 12cb52a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb52ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb52af mov dword ptr [0x12cdec90], ecx */
  w32((uint32_t)(0x12cdec90), (ECX));
  /* 12cb52b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb52b8 mov esp, ebp */
  ESP = (EBP);
  /* 12cb52ba pop ebp */
  EBP = (pop32());
  /* 12cb52bb ret  */
  ESPCHK(0x12cb52a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c0 @ 0x12cb52c0 (136 bytes, 55 insns) */
void f_12cb52c0(void) {
  FTRACE(0x12cb52c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb52c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb52c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb52c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb52c4 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb52c5 push esi */
  push32((uint32_t)(ESI));
  /* 12cb52c6 push edi */
  push32((uint32_t)(EDI));
  /* 12cb52c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12cb52ce:;
  /* 12cb52ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb52d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb52d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb52d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cb52da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb52dc je 0x12cb533e */
  if (C.zf) goto L_12cb533e;
  /* 12cb52de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb52e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb52e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cb52e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb52e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb52ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb52f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb52f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cb52f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb52f9 je 0x12cb533c */
  if (C.zf) goto L_12cb533c;
L_12cb52fb:;
  /* 12cb52fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb52fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5303 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5304 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5307 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5309 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12cb530c push edx */
  push32((uint32_t)(EDX));
  /* 12cb530d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5310 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5313 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5314 push 0x12cdbbd8 */
  push32((uint32_t)(0x12cdbbd8u));
  /* 12cb5319 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb531b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb531d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb531f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5321 call 0x12cb3270 */
  push32(0x12cb5326u); f_12cb3270();
  /* 12cb5326 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5329 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb532c jne 0x12cb532f */
  if (!C.zf) goto L_12cb532f;
  /* 12cb532e int3  */
  x86_unimpl("int3 @ 0x12cb532e");
L_12cb532f:;
  /* 12cb532f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5331 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb5333 jne 0x12cb52fb */
  if (!C.zf) goto L_12cb52fb;
  /* 12cb5335 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cb533c:;
  /* 12cb533c jmp 0x12cb52ce */
  goto L_12cb52ce;
L_12cb533e:;
  /* 12cb533e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5341 pop edi */
  EDI = (pop32());
  /* 12cb5342 pop esi */
  ESI = (pop32());
  /* 12cb5343 pop ebx */
  EBX = (pop32());
  /* 12cb5344 mov esp, ebp */
  ESP = (EBP);
  /* 12cb5346 pop ebp */
  EBP = (pop32());
  /* 12cb5347 ret  */
  ESPCHK(0x12cb52c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x12cb5350 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12cb5350(void) {
  FTRACE(0x12cb5350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5350 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5351 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5353 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5356 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb5357 push esi */
  push32((uint32_t)(ESI));
  /* 12cb5358 push edi */
  push32((uint32_t)(EDI));
  /* 12cb5359 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cb5360 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb5365 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb536a jne 0x12cb5376 */
  if (!C.zf) goto L_12cb5376;
  /* 12cb536c mov eax, 1 */
  EAX = (0x1u);
  /* 12cb5371 jmp 0x12cb56a8 */
  goto L_12cb56a8;
L_12cb5376:;
  /* 12cb5376 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb5378 call 0x12cb7bb0 */
  push32(0x12cb537du); f_12cb7bb0();
  /* 12cb537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5380 call 0x12cb8390 */
  push32(0x12cb5385u); f_12cb8390();
  /* 12cb5385 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb5388 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb538c je 0x12cb5499 */
  if (C.zf) goto L_12cb5499;
  /* 12cb5392 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5396 je 0x12cb5499 */
  if (C.zf) goto L_12cb5499;
  /* 12cb539c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb539f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cb53a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb53a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb53a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cb53ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb53af ja 0x12cb5462 */
  if ((!C.cf&&!C.zf)) goto L_12cb5462;
  /* 12cb53b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb53b8 jmp dword ptr [eax*4 + 0x12cb56af] */
  switch (EAX) {
    case 0: goto L_12cb543a;
    case 1: goto L_12cb5412;
    case 2: goto L_12cb53ea;
    case 3: goto L_12cb53bf;
    default: x86_unimpl("switch@0x12cb53b8 out of table"); return;
  }
L_12cb53bf:;
  /* 12cb53bf push 0x12cdbd2c */
  push32((uint32_t)(0x12cdbd2cu));
  /* 12cb53c4 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb53c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb53cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb53cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb53cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb53d1 call 0x12cb3270 */
  push32(0x12cb53d6u); f_12cb3270();
  /* 12cb53d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb53d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb53dc jne 0x12cb53df */
  if (!C.zf) goto L_12cb53df;
  /* 12cb53de int3  */
  x86_unimpl("int3 @ 0x12cb53de");
L_12cb53df:;
  /* 12cb53df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb53e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb53e3 jne 0x12cb53bf */
  if (!C.zf) goto L_12cb53bf;
  /* 12cb53e5 jmp 0x12cb5488 */
  goto L_12cb5488;
L_12cb53ea:;
  /* 12cb53ea push 0x12cdbd08 */
  push32((uint32_t)(0x12cdbd08u));
  /* 12cb53ef push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb53f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb53f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb53f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb53fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb53fc call 0x12cb3270 */
  push32(0x12cb5401u); f_12cb3270();
  /* 12cb5401 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5404 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5407 jne 0x12cb540a */
  if (!C.zf) goto L_12cb540a;
  /* 12cb5409 int3  */
  x86_unimpl("int3 @ 0x12cb5409");
L_12cb540a:;
  /* 12cb540a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb540c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb540e jne 0x12cb53ea */
  if (!C.zf) goto L_12cb53ea;
  /* 12cb5410 jmp 0x12cb5488 */
  goto L_12cb5488;
L_12cb5412:;
  /* 12cb5412 push 0x12cdbce4 */
  push32((uint32_t)(0x12cdbce4u));
  /* 12cb5417 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb541c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb541e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5420 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5422 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5424 call 0x12cb3270 */
  push32(0x12cb5429u); f_12cb3270();
  /* 12cb5429 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb542c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb542f jne 0x12cb5432 */
  if (!C.zf) goto L_12cb5432;
  /* 12cb5431 int3  */
  x86_unimpl("int3 @ 0x12cb5431");
L_12cb5432:;
  /* 12cb5432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5436 jne 0x12cb5412 */
  if (!C.zf) goto L_12cb5412;
  /* 12cb5438 jmp 0x12cb5488 */
  goto L_12cb5488;
L_12cb543a:;
  /* 12cb543a push 0x12cdbcc0 */
  push32((uint32_t)(0x12cdbcc0u));
  /* 12cb543f push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb5444 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5448 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb544a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb544c call 0x12cb3270 */
  push32(0x12cb5451u); f_12cb3270();
  /* 12cb5451 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5457 jne 0x12cb545a */
  if (!C.zf) goto L_12cb545a;
  /* 12cb5459 int3  */
  x86_unimpl("int3 @ 0x12cb5459");
L_12cb545a:;
  /* 12cb545a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb545c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb545e jne 0x12cb543a */
  if (!C.zf) goto L_12cb543a;
  /* 12cb5460 jmp 0x12cb5488 */
  goto L_12cb5488;
L_12cb5462:;
  /* 12cb5462 push 0x12cdbc94 */
  push32((uint32_t)(0x12cdbc94u));
  /* 12cb5467 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb546c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb546e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5470 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5472 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5474 call 0x12cb3270 */
  push32(0x12cb5479u); f_12cb3270();
  /* 12cb5479 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb547c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb547f jne 0x12cb5482 */
  if (!C.zf) goto L_12cb5482;
  /* 12cb5481 int3  */
  x86_unimpl("int3 @ 0x12cb5481");
L_12cb5482:;
  /* 12cb5482 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5484 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb5486 jne 0x12cb5462 */
  if (!C.zf) goto L_12cb5462;
L_12cb5488:;
  /* 12cb5488 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb548a call 0x12cb7c50 */
  push32(0x12cb548fu); f_12cb7c50();
  /* 12cb548f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5494 jmp 0x12cb56a8 */
  goto L_12cb56a8;
L_12cb5499:;
  /* 12cb5499 mov eax, dword ptr [0x12ce0564] */
  EAX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb549e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb54a1 jmp 0x12cb54ab */
  goto L_12cb54ab;
L_12cb54a3:;
  /* 12cb54a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb54a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb54a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cb54ab:;
  /* 12cb54ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb54af je 0x12cb569b */
  if (C.zf) goto L_12cb569b;
  /* 12cb54b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12cb54bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb54bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cb54c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb54c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb54cb je 0x12cb54f0 */
  if (C.zf) goto L_12cb54f0;
  /* 12cb54cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb54d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb54d4 je 0x12cb54f0 */
  if (C.zf) goto L_12cb54f0;
  /* 12cb54d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb54d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cb54dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb54e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb54e5 je 0x12cb54f0 */
  if (C.zf) goto L_12cb54f0;
  /* 12cb54e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb54ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb54ee jne 0x12cb5508 */
  if (!C.zf) goto L_12cb5508;
L_12cb54f0:;
  /* 12cb54f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb54f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cb54f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb54fc mov edx, dword ptr [ecx*4 + 0x12cdea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdea94)));
  /* 12cb5503 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cb5506 jmp 0x12cb550f */
  goto L_12cb550f;
L_12cb5508:;
  /* 12cb5508 mov dword ptr [ebp - 0x14], 0x12cdbc8c */
  w32((uint32_t)(EBP + -0x14), (0x12cdbc8cu));
L_12cb550f:;
  /* 12cb550f push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb5511 mov al, byte ptr [0x12cdea90] */
  AL = (r8((uint32_t)(0x12cdea90)));
  /* 12cb5516 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb551a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb551d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb551e call 0x12cb52c0 */
  push32(0x12cb5523u); f_12cb52c0();
  /* 12cb5523 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5528 jne 0x12cb5564 */
  if (!C.zf) goto L_12cb5564;
L_12cb552a:;
  /* 12cb552a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb552d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5530 push edx */
  push32((uint32_t)(EDX));
  /* 12cb5531 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5534 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12cb5537 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5538 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb553b push edx */
  push32((uint32_t)(EDX));
  /* 12cb553c push 0x12cdbb68 */
  push32((uint32_t)(0x12cdbb68u));
  /* 12cb5541 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5543 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5547 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5549 call 0x12cb3270 */
  push32(0x12cb554eu); f_12cb3270();
  /* 12cb554e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5551 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5554 jne 0x12cb5557 */
  if (!C.zf) goto L_12cb5557;
  /* 12cb5556 int3  */
  x86_unimpl("int3 @ 0x12cb5556");
L_12cb5557:;
  /* 12cb5557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb555b jne 0x12cb552a */
  if (!C.zf) goto L_12cb552a;
  /* 12cb555d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cb5564:;
  /* 12cb5564 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb5566 mov cl, byte ptr [0x12cdea90] */
  CL = (r8((uint32_t)(0x12cdea90)));
  /* 12cb556c push ecx */
  push32((uint32_t)(ECX));
  /* 12cb556d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5570 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb5573 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5576 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12cb557a push edx */
  push32((uint32_t)(EDX));
  /* 12cb557b call 0x12cb52c0 */
  push32(0x12cb5580u); f_12cb52c0();
  /* 12cb5580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5585 jne 0x12cb55c1 */
  if (!C.zf) goto L_12cb55c1;
L_12cb5587:;
  /* 12cb5587 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb558a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb558d push eax */
  push32((uint32_t)(EAX));
  /* 12cb558e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5591 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cb5594 push edx */
  push32((uint32_t)(EDX));
  /* 12cb5595 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb5598 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5599 push 0x12cdbb3c */
  push32((uint32_t)(0x12cdbb3cu));
  /* 12cb559e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb55a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb55a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb55a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb55a6 call 0x12cb3270 */
  push32(0x12cb55abu); f_12cb3270();
  /* 12cb55ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb55ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb55b1 jne 0x12cb55b4 */
  if (!C.zf) goto L_12cb55b4;
  /* 12cb55b3 int3  */
  x86_unimpl("int3 @ 0x12cb55b3");
L_12cb55b4:;
  /* 12cb55b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb55b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb55b8 jne 0x12cb5587 */
  if (!C.zf) goto L_12cb5587;
  /* 12cb55ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cb55c1:;
  /* 12cb55c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb55c4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb55c8 jne 0x12cb561a */
  if (!C.zf) goto L_12cb561a;
  /* 12cb55ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb55cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb55d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb55d1 mov dl, byte ptr [0x12cdea91] */
  DL = (r8((uint32_t)(0x12cdea91)));
  /* 12cb55d7 push edx */
  push32((uint32_t)(EDX));
  /* 12cb55d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb55db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb55de push eax */
  push32((uint32_t)(EAX));
  /* 12cb55df call 0x12cb52c0 */
  push32(0x12cb55e4u); f_12cb52c0();
  /* 12cb55e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb55e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb55e9 jne 0x12cb561a */
  if (!C.zf) goto L_12cb561a;
L_12cb55eb:;
  /* 12cb55eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb55ee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb55f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb55f2 push 0x12cdbc60 */
  push32((uint32_t)(0x12cdbc60u));
  /* 12cb55f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb55f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb55fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb55fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb55ff call 0x12cb3270 */
  push32(0x12cb5604u); f_12cb3270();
  /* 12cb5604 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5607 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb560a jne 0x12cb560d */
  if (!C.zf) goto L_12cb560d;
  /* 12cb560c int3  */
  x86_unimpl("int3 @ 0x12cb560c");
L_12cb560d:;
  /* 12cb560d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb560f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb5611 jne 0x12cb55eb */
  if (!C.zf) goto L_12cb55eb;
  /* 12cb5613 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cb561a:;
  /* 12cb561a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb561e jne 0x12cb5696 */
  if (!C.zf) goto L_12cb5696;
  /* 12cb5620 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5623 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5627 je 0x12cb565c */
  if (C.zf) goto L_12cb565c;
L_12cb5629:;
  /* 12cb5629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb562c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cb562f push edx */
  push32((uint32_t)(EDX));
  /* 12cb5630 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5633 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb5636 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5637 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb563a push edx */
  push32((uint32_t)(EDX));
  /* 12cb563b push 0x12cdbc40 */
  push32((uint32_t)(0x12cdbc40u));
  /* 12cb5640 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5644 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5646 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5648 call 0x12cb3270 */
  push32(0x12cb564du); f_12cb3270();
  /* 12cb564d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5650 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5653 jne 0x12cb5656 */
  if (!C.zf) goto L_12cb5656;
  /* 12cb5655 int3  */
  x86_unimpl("int3 @ 0x12cb5655");
L_12cb5656:;
  /* 12cb5656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb565a jne 0x12cb5629 */
  if (!C.zf) goto L_12cb5629;
L_12cb565c:;
  /* 12cb565c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb565f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cb5662 push edx */
  push32((uint32_t)(EDX));
  /* 12cb5663 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5666 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5669 push eax */
  push32((uint32_t)(EAX));
  /* 12cb566a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb566d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb566e push 0x12cdbc14 */
  push32((uint32_t)(0x12cdbc14u));
  /* 12cb5673 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5675 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5677 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5679 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb567b call 0x12cb3270 */
  push32(0x12cb5680u); f_12cb3270();
  /* 12cb5680 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5683 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5686 jne 0x12cb5689 */
  if (!C.zf) goto L_12cb5689;
  /* 12cb5688 int3  */
  x86_unimpl("int3 @ 0x12cb5688");
L_12cb5689:;
  /* 12cb5689 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb568b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb568d jne 0x12cb565c */
  if (!C.zf) goto L_12cb565c;
  /* 12cb568f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cb5696:;
  /* 12cb5696 jmp 0x12cb54a3 */
  goto L_12cb54a3;
L_12cb569b:;
  /* 12cb569b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb569d call 0x12cb7c50 */
  push32(0x12cb56a2u); f_12cb7c50();
  /* 12cb56a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb56a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cb56a8:;
  /* 12cb56a8 pop edi */
  EDI = (pop32());
  /* 12cb56a9 pop esi */
  ESI = (pop32());
  /* 12cb56aa pop ebx */
  EBX = (pop32());
  /* 12cb56ab mov esp, ebp */
  ESP = (EBP);
  /* 12cb56ad pop ebp */
  EBP = (pop32());
  /* 12cb56ae ret  */
  ESPCHK(0x12cb5350u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c0 @ 0x12cb56c0 (34 bytes, 13 insns) */
void f_12cb56c0(void) {
  FTRACE(0x12cb56c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb56c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb56c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb56c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb56c4 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb56c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb56cc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb56d0 je 0x12cb56db */
  if (C.zf) goto L_12cb56db;
  /* 12cb56d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb56d5 mov dword ptr [0x12cdea84], ecx */
  w32((uint32_t)(0x12cdea84), (ECX));
L_12cb56db:;
  /* 12cb56db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb56de mov esp, ebp */
  ESP = (EBP);
  /* 12cb56e0 pop ebp */
  EBP = (pop32());
  /* 12cb56e1 ret  */
  ESPCHK(0x12cb56c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f0 @ 0x12cb56f0 (103 bytes, 38 insns) */
void f_12cb56f0(void) {
  FTRACE(0x12cb56f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb56f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb56f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb56f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb56f4 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb56f9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb56fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb56fe jne 0x12cb5702 */
  if (!C.zf) goto L_12cb5702;
  /* 12cb5700 jmp 0x12cb5753 */
  goto L_12cb5753;
L_12cb5702:;
  /* 12cb5702 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb5704 call 0x12cb7bb0 */
  push32(0x12cb5709u); f_12cb7bb0();
  /* 12cb5709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb570c mov ecx, dword ptr [0x12ce0564] */
  ECX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb5712 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb5715 jmp 0x12cb571f */
  goto L_12cb571f;
L_12cb5717:;
  /* 12cb5717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb571a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb571c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb571f:;
  /* 12cb571f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5723 je 0x12cb5749 */
  if (C.zf) goto L_12cb5749;
  /* 12cb5725 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5728 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cb572b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5731 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5734 jne 0x12cb5747 */
  if (!C.zf) goto L_12cb5747;
  /* 12cb5736 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb5739 push eax */
  push32((uint32_t)(EAX));
  /* 12cb573a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb573d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5740 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5741 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12cb5744u);
  /* 12cb5744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb5747:;
  /* 12cb5747 jmp 0x12cb5717 */
  goto L_12cb5717;
L_12cb5749:;
  /* 12cb5749 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb574b call 0x12cb7c50 */
  push32(0x12cb5750u); f_12cb7c50();
  /* 12cb5750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb5753:;
  /* 12cb5753 mov esp, ebp */
  ESP = (EBP);
  /* 12cb5755 pop ebp */
  EBP = (pop32());
  /* 12cb5756 ret  */
  ESPCHK(0x12cb56f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12cb5760 (75 bytes, 28 insns) */
void f_12cb5760(void) {
  FTRACE(0x12cb5760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5760 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5761 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5763 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5764 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5768 je 0x12cb579d */
  if (C.zf) goto L_12cb579d;
  /* 12cb576a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb576d push eax */
  push32((uint32_t)(EAX));
  /* 12cb576e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5771 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5772 call dword ptr [0x12ce3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3360))), 0x12cb5778u);
  /* 12cb5778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb577a jne 0x12cb579d */
  if (!C.zf) goto L_12cb579d;
  /* 12cb577c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5780 je 0x12cb5794 */
  if (C.zf) goto L_12cb5794;
  /* 12cb5782 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb5785 push edx */
  push32((uint32_t)(EDX));
  /* 12cb5786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5789 push eax */
  push32((uint32_t)(EAX));
  /* 12cb578a call dword ptr [0x12ce335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce335c))), 0x12cb5790u);
  /* 12cb5790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5792 jne 0x12cb579d */
  if (!C.zf) goto L_12cb579d;
L_12cb5794:;
  /* 12cb5794 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cb579b jmp 0x12cb57a4 */
  goto L_12cb57a4;
L_12cb579d:;
  /* 12cb579d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cb57a4:;
  /* 12cb57a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb57a7 mov esp, ebp */
  ESP = (EBP);
  /* 12cb57a9 pop ebp */
  EBP = (pop32());
  /* 12cb57aa ret  */
  ESPCHK(0x12cb5760u, _esp0);
  ESP += 4; return;
}

/* FUN_100057b0 @ 0x12cb57b0 (134 bytes, 50 insns) */
void f_12cb57b0(void) {
  FTRACE(0x12cb57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb57b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb57b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb57b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb57b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb57b8 jne 0x12cb57be */
  if (!C.zf) goto L_12cb57be;
  /* 12cb57ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb57bc jmp 0x12cb5832 */
  goto L_12cb5832;
L_12cb57be:;
  /* 12cb57be push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb57c0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12cb57c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb57c5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb57c8 push eax */
  push32((uint32_t)(EAX));
  /* 12cb57c9 call 0x12cb5760 */
  push32(0x12cb57ceu); f_12cb5760();
  /* 12cb57ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb57d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb57d3 jne 0x12cb57d9 */
  if (!C.zf) goto L_12cb57d9;
  /* 12cb57d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb57d7 jmp 0x12cb5832 */
  goto L_12cb5832;
L_12cb57d9:;
  /* 12cb57d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb57dc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb57df push ecx */
  push32((uint32_t)(ECX));
  /* 12cb57e0 call 0x12cb84b0 */
  push32(0x12cb57e5u); f_12cb84b0();
  /* 12cb57e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb57e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb57eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb57ef je 0x12cb5806 */
  if (C.zf) goto L_12cb5806;
  /* 12cb57f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb57f4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb57f7 push edx */
  push32((uint32_t)(EDX));
  /* 12cb57f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb57fb push eax */
  push32((uint32_t)(EAX));
  /* 12cb57fc call 0x12cb8510 */
  push32(0x12cb5801u); f_12cb8510();
  /* 12cb5801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5804 jmp 0x12cb5832 */
  goto L_12cb5832;
L_12cb5806:;
  /* 12cb5806 mov ecx, dword ptr [0x12ce0518] */
  ECX = (r32((uint32_t)(0x12ce0518)));
  /* 12cb580c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5812 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb5814 je 0x12cb581d */
  if (C.zf) goto L_12cb581d;
  /* 12cb5816 mov eax, 1 */
  EAX = (0x1u);
  /* 12cb581b jmp 0x12cb5832 */
  goto L_12cb5832;
L_12cb581d:;
  /* 12cb581d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5820 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5823 push edx */
  push32((uint32_t)(EDX));
  /* 12cb5824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5826 mov eax, dword ptr [0x12ce1ecc] */
  EAX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb582b push eax */
  push32((uint32_t)(EAX));
  /* 12cb582c call dword ptr [0x12ce3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3364))), 0x12cb5832u);
L_12cb5832:;
  /* 12cb5832 mov esp, ebp */
  ESP = (EBP);
  /* 12cb5834 pop ebp */
  EBP = (pop32());
  /* 12cb5835 ret  */
  ESPCHK(0x12cb57b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x12cb5840 (227 bytes, 80 insns) */
void f_12cb5840(void) {
  FTRACE(0x12cb5840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5840 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5841 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5843 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5847 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5848 call 0x12cb57b0 */
  push32(0x12cb584du); f_12cb57b0();
  /* 12cb584d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5852 jne 0x12cb585b */
  if (!C.zf) goto L_12cb585b;
  /* 12cb5854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5856 jmp 0x12cb591f */
  goto L_12cb591f;
L_12cb585b:;
  /* 12cb585b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb585d call 0x12cb7bb0 */
  push32(0x12cb5862u); f_12cb7bb0();
  /* 12cb5862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5865 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5868 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb586b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb586e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5871 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb5874 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5879 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb587c je 0x12cb58a0 */
  if (C.zf) goto L_12cb58a0;
  /* 12cb587e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5881 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5885 je 0x12cb58a0 */
  if (C.zf) goto L_12cb58a0;
  /* 12cb5887 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb588a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb588d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5892 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5895 je 0x12cb58a0 */
  if (C.zf) goto L_12cb58a0;
  /* 12cb5897 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb589a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb589e jne 0x12cb5913 */
  if (!C.zf) goto L_12cb5913;
L_12cb58a0:;
  /* 12cb58a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb58a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb58a5 push edx */
  push32((uint32_t)(EDX));
  /* 12cb58a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb58a9 push eax */
  push32((uint32_t)(EAX));
  /* 12cb58aa call 0x12cb5760 */
  push32(0x12cb58afu); f_12cb5760();
  /* 12cb58af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb58b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb58b4 je 0x12cb5913 */
  if (C.zf) goto L_12cb5913;
  /* 12cb58b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb58b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cb58bc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb58bf jne 0x12cb5913 */
  if (!C.zf) goto L_12cb5913;
  /* 12cb58c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb58c4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12cb58c7 cmp ecx, dword ptr [0x12cdea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cdea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb58cd jg 0x12cb5913 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cb5913;
  /* 12cb58cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb58d3 je 0x12cb58e0 */
  if (C.zf) goto L_12cb58e0;
  /* 12cb58d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb58d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb58db mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12cb58de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb58e0:;
  /* 12cb58e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb58e4 je 0x12cb58f1 */
  if (C.zf) goto L_12cb58f1;
  /* 12cb58e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb58e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb58ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb58ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb58f1:;
  /* 12cb58f1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb58f5 je 0x12cb5902 */
  if (C.zf) goto L_12cb5902;
  /* 12cb58f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb58fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb58fd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cb5900 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb5902:;
  /* 12cb5902 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb5904 call 0x12cb7c50 */
  push32(0x12cb5909u); f_12cb7c50();
  /* 12cb5909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb590c mov eax, 1 */
  EAX = (0x1u);
  /* 12cb5911 jmp 0x12cb591f */
  goto L_12cb591f;
L_12cb5913:;
  /* 12cb5913 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb5915 call 0x12cb7c50 */
  push32(0x12cb591au); f_12cb7c50();
  /* 12cb591a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb591d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb591f:;
  /* 12cb591f mov esp, ebp */
  ESP = (EBP);
  /* 12cb5921 pop ebp */
  EBP = (pop32());
  /* 12cb5922 ret  */
  ESPCHK(0x12cb5840u, _esp0);
  ESP += 4; return;
}

/* FUN_10005930 @ 0x12cb5930 (28 bytes, 11 insns) */
void f_12cb5930(void) {
  FTRACE(0x12cb5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5930 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5931 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5933 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5934 mov eax, dword ptr [0x12ce1ed8] */
  EAX = (r32((uint32_t)(0x12ce1ed8)));
  /* 12cb5939 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb593c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb593f mov dword ptr [0x12ce1ed8], ecx */
  w32((uint32_t)(0x12ce1ed8), (ECX));
  /* 12cb5945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5948 mov esp, ebp */
  ESP = (EBP);
  /* 12cb594a pop ebp */
  EBP = (pop32());
  /* 12cb594b ret  */
  ESPCHK(0x12cb5930u, _esp0);
  ESP += 4; return;
}

/* FUN_10005950 @ 0x12cb5950 (362 bytes, 116 insns) */
void f_12cb5950(void) {
  FTRACE(0x12cb5950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5950 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5951 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5956 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb5957 push esi */
  push32((uint32_t)(ESI));
  /* 12cb5958 push edi */
  push32((uint32_t)(EDI));
  /* 12cb5959 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb595d jne 0x12cb598a */
  if (!C.zf) goto L_12cb598a;
L_12cb595f:;
  /* 12cb595f push 0x12cdbd74 */
  push32((uint32_t)(0x12cdbd74u));
  /* 12cb5964 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb5969 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb596b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb596d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb596f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5971 call 0x12cb3270 */
  push32(0x12cb5976u); f_12cb3270();
  /* 12cb5976 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5979 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb597c jne 0x12cb597f */
  if (!C.zf) goto L_12cb597f;
  /* 12cb597e int3  */
  x86_unimpl("int3 @ 0x12cb597e");
L_12cb597f:;
  /* 12cb597f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5983 jne 0x12cb595f */
  if (!C.zf) goto L_12cb595f;
  /* 12cb5985 jmp 0x12cb5ab3 */
  goto L_12cb5ab3;
L_12cb598a:;
  /* 12cb598a push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb598c call 0x12cb7bb0 */
  push32(0x12cb5991u); f_12cb7bb0();
  /* 12cb5991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5994 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5997 mov edx, dword ptr [0x12ce0564] */
  EDX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb599d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cb599f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cb59a6 jmp 0x12cb59b1 */
  goto L_12cb59b1;
L_12cb59a8:;
  /* 12cb59a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb59ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb59ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb59b1:;
  /* 12cb59b1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb59b5 jge 0x12cb59d5 */
  if ((C.sf==C.of)) goto L_12cb59d5;
  /* 12cb59b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb59ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb59bd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12cb59c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb59c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb59cb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12cb59d3 jmp 0x12cb59a8 */
  goto L_12cb59a8;
L_12cb59d5:;
  /* 12cb59d5 mov edx, dword ptr [0x12ce0564] */
  EDX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb59db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cb59de jmp 0x12cb59e8 */
  goto L_12cb59e8;
L_12cb59e0:;
  /* 12cb59e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb59e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb59e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cb59e8:;
  /* 12cb59e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb59ec je 0x12cb5a91 */
  if (C.zf) goto L_12cb5a91;
  /* 12cb59f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb59f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb59f8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb59fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb59ff jl 0x12cb5a67 */
  if ((C.sf!=C.of)) goto L_12cb5a67;
  /* 12cb5a01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5a04 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cb5a07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5a0d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5a10 jge 0x12cb5a67 */
  if ((C.sf==C.of)) goto L_12cb5a67;
  /* 12cb5a12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5a15 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cb5a18 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5a1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5a21 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12cb5a25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5a28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5a2b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cb5a2e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5a34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5a37 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12cb5a3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5a3e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb5a41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5a46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5a49 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12cb5a4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5a50 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5a53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5a56 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cb5a59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5a61 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12cb5a65 jmp 0x12cb5a8c */
  goto L_12cb5a8c;
L_12cb5a67:;
  /* 12cb5a67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5a6a push edx */
  push32((uint32_t)(EDX));
  /* 12cb5a6b push 0x12cdbd50 */
  push32((uint32_t)(0x12cdbd50u));
  /* 12cb5a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5a78 call 0x12cb3270 */
  push32(0x12cb5a7du); f_12cb3270();
  /* 12cb5a7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5a80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5a83 jne 0x12cb5a86 */
  if (!C.zf) goto L_12cb5a86;
  /* 12cb5a85 int3  */
  x86_unimpl("int3 @ 0x12cb5a85");
L_12cb5a86:;
  /* 12cb5a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5a8a jne 0x12cb5a67 */
  if (!C.zf) goto L_12cb5a67;
L_12cb5a8c:;
  /* 12cb5a8c jmp 0x12cb59e0 */
  goto L_12cb59e0;
L_12cb5a91:;
  /* 12cb5a91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5a94 mov edx, dword ptr [0x12ce056c] */
  EDX = (r32((uint32_t)(0x12ce056c)));
  /* 12cb5a9a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12cb5a9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5aa0 mov ecx, dword ptr [0x12ce0560] */
  ECX = (r32((uint32_t)(0x12ce0560)));
  /* 12cb5aa6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12cb5aa9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb5aab call 0x12cb7c50 */
  push32(0x12cb5ab0u); f_12cb7c50();
  /* 12cb5ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb5ab3:;
  /* 12cb5ab3 pop edi */
  EDI = (pop32());
  /* 12cb5ab4 pop esi */
  ESI = (pop32());
  /* 12cb5ab5 pop ebx */
  EBX = (pop32());
  /* 12cb5ab6 mov esp, ebp */
  ESP = (EBP);
  /* 12cb5ab8 pop ebp */
  EBP = (pop32());
  /* 12cb5ab9 ret  */
  ESPCHK(0x12cb5950u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ac0 @ 0x12cb5ac0 (291 bytes, 95 insns) */
void f_12cb5ac0(void) {
  FTRACE(0x12cb5ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb5ac7 push esi */
  push32((uint32_t)(ESI));
  /* 12cb5ac8 push edi */
  push32((uint32_t)(EDI));
  /* 12cb5ac9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cb5ad0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5ad4 je 0x12cb5ae2 */
  if (C.zf) goto L_12cb5ae2;
  /* 12cb5ad6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5ada je 0x12cb5ae2 */
  if (C.zf) goto L_12cb5ae2;
  /* 12cb5adc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5ae0 jne 0x12cb5b10 */
  if (!C.zf) goto L_12cb5b10;
L_12cb5ae2:;
  /* 12cb5ae2 push 0x12cdbd9c */
  push32((uint32_t)(0x12cdbd9cu));
  /* 12cb5ae7 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb5aec push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5aee push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5af4 call 0x12cb3270 */
  push32(0x12cb5af9u); f_12cb3270();
  /* 12cb5af9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5afc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5aff jne 0x12cb5b02 */
  if (!C.zf) goto L_12cb5b02;
  /* 12cb5b01 int3  */
  x86_unimpl("int3 @ 0x12cb5b01");
L_12cb5b02:;
  /* 12cb5b02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5b04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5b06 jne 0x12cb5ae2 */
  if (!C.zf) goto L_12cb5ae2;
  /* 12cb5b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb5b0b jmp 0x12cb5bdc */
  goto L_12cb5bdc;
L_12cb5b10:;
  /* 12cb5b10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cb5b17 jmp 0x12cb5b22 */
  goto L_12cb5b22;
L_12cb5b19:;
  /* 12cb5b19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5b1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb5b22:;
  /* 12cb5b22 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5b26 jge 0x12cb5bac */
  if ((C.sf==C.of)) goto L_12cb5bac;
  /* 12cb5b2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb5b32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb5b38 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12cb5b3c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5b40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5b46 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12cb5b4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb5b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b53 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb5b56 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12cb5b5a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5b64 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12cb5b68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5b6e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5b73 jne 0x12cb5b82 */
  if (!C.zf) goto L_12cb5b82;
  /* 12cb5b75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5b78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5b7b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5b80 je 0x12cb5ba7 */
  if (C.zf) goto L_12cb5ba7;
L_12cb5b82:;
  /* 12cb5b82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5b86 je 0x12cb5ba7 */
  if (C.zf) goto L_12cb5ba7;
  /* 12cb5b88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5b8c jne 0x12cb5ba0 */
  if (!C.zf) goto L_12cb5ba0;
  /* 12cb5b8e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5b92 jne 0x12cb5ba7 */
  if (!C.zf) goto L_12cb5ba7;
  /* 12cb5b94 mov eax, dword ptr [0x12cdea84] */
  EAX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb5b99 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5b9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5b9e je 0x12cb5ba7 */
  if (C.zf) goto L_12cb5ba7;
L_12cb5ba0:;
  /* 12cb5ba0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12cb5ba7:;
  /* 12cb5ba7 jmp 0x12cb5b19 */
  goto L_12cb5b19;
L_12cb5bac:;
  /* 12cb5bac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb5baf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb5bb2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12cb5bb5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5bb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5bbb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12cb5bbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb5bc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb5bc4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12cb5bc7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5bca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5bcd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12cb5bd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5bd3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cb5bd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cb5bdc:;
  /* 12cb5bdc pop edi */
  EDI = (pop32());
  /* 12cb5bdd pop esi */
  ESI = (pop32());
  /* 12cb5bde pop ebx */
  EBX = (pop32());
  /* 12cb5bdf mov esp, ebp */
  ESP = (EBP);
  /* 12cb5be1 pop ebp */
  EBP = (pop32());
  /* 12cb5be2 ret  */
  ESPCHK(0x12cb5ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x12cb5bf0 (697 bytes, 253 insns) */
void f_12cb5bf0(void) {
  FTRACE(0x12cb5bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb5bf7 push esi */
  push32((uint32_t)(ESI));
  /* 12cb5bf8 push edi */
  push32((uint32_t)(EDI));
  /* 12cb5bf9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cb5c00 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb5c02 call 0x12cb7bb0 */
  push32(0x12cb5c07u); f_12cb7bb0();
  /* 12cb5c07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb5c0a:;
  /* 12cb5c0a push 0x12cdbe94 */
  push32((uint32_t)(0x12cdbe94u));
  /* 12cb5c0f push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb5c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5c1c call 0x12cb3270 */
  push32(0x12cb5c21u); f_12cb3270();
  /* 12cb5c21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5c24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5c27 jne 0x12cb5c2a */
  if (!C.zf) goto L_12cb5c2a;
  /* 12cb5c29 int3  */
  x86_unimpl("int3 @ 0x12cb5c29");
L_12cb5c2a:;
  /* 12cb5c2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5c2e jne 0x12cb5c0a */
  if (!C.zf) goto L_12cb5c0a;
  /* 12cb5c30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5c34 je 0x12cb5c3e */
  if (C.zf) goto L_12cb5c3e;
  /* 12cb5c36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5c39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb5c3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cb5c3e:;
  /* 12cb5c3e mov eax, dword ptr [0x12ce0564] */
  EAX = (r32((uint32_t)(0x12ce0564)));
  /* 12cb5c43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb5c46 jmp 0x12cb5c50 */
  goto L_12cb5c50;
L_12cb5c48:;
  /* 12cb5c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5c4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb5c4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cb5c50:;
  /* 12cb5c50 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5c54 je 0x12cb5e72 */
  if (C.zf) goto L_12cb5e72;
  /* 12cb5c5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5c5d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5c60 je 0x12cb5e72 */
  if (C.zf) goto L_12cb5e72;
  /* 12cb5c66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5c69 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cb5c6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5c72 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5c75 je 0x12cb5ca4 */
  if (C.zf) goto L_12cb5ca4;
  /* 12cb5c77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5c7a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cb5c7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5c83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb5c85 je 0x12cb5ca4 */
  if (C.zf) goto L_12cb5ca4;
  /* 12cb5c87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5c8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb5c8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5c92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5c95 jne 0x12cb5ca9 */
  if (!C.zf) goto L_12cb5ca9;
  /* 12cb5c97 mov ecx, dword ptr [0x12cdea84] */
  ECX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb5c9d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5ca0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb5ca2 jne 0x12cb5ca9 */
  if (!C.zf) goto L_12cb5ca9;
L_12cb5ca4:;
  /* 12cb5ca4 jmp 0x12cb5e6d */
  goto L_12cb5e6d;
L_12cb5ca9:;
  /* 12cb5ca9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5cac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5cb0 je 0x12cb5d22 */
  if (C.zf) goto L_12cb5d22;
  /* 12cb5cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5cb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb5cb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5cb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb5cbc push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5cbd call 0x12cb5760 */
  push32(0x12cb5cc2u); f_12cb5760();
  /* 12cb5cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5cc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5cc7 jne 0x12cb5cf3 */
  if (!C.zf) goto L_12cb5cf3;
L_12cb5cc9:;
  /* 12cb5cc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5ccc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cb5ccf push eax */
  push32((uint32_t)(EAX));
  /* 12cb5cd0 push 0x12cdbe80 */
  push32((uint32_t)(0x12cdbe80u));
  /* 12cb5cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5cdd call 0x12cb3270 */
  push32(0x12cb5ce2u); f_12cb3270();
  /* 12cb5ce2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5ce5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5ce8 jne 0x12cb5ceb */
  if (!C.zf) goto L_12cb5ceb;
  /* 12cb5cea int3  */
  x86_unimpl("int3 @ 0x12cb5cea");
L_12cb5ceb:;
  /* 12cb5ceb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5ced test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb5cef jne 0x12cb5cc9 */
  if (!C.zf) goto L_12cb5cc9;
  /* 12cb5cf1 jmp 0x12cb5d22 */
  goto L_12cb5d22;
L_12cb5cf3:;
  /* 12cb5cf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5cf6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cb5cf9 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5cfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5cfd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb5d00 push edx */
  push32((uint32_t)(EDX));
  /* 12cb5d01 push 0x12cdbe74 */
  push32((uint32_t)(0x12cdbe74u));
  /* 12cb5d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d0e call 0x12cb3270 */
  push32(0x12cb5d13u); f_12cb3270();
  /* 12cb5d13 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5d16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5d19 jne 0x12cb5d1c */
  if (!C.zf) goto L_12cb5d1c;
  /* 12cb5d1b int3  */
  x86_unimpl("int3 @ 0x12cb5d1b");
L_12cb5d1c:;
  /* 12cb5d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5d20 jne 0x12cb5cf3 */
  if (!C.zf) goto L_12cb5cf3;
L_12cb5d22:;
  /* 12cb5d22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5d25 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cb5d28 push edx */
  push32((uint32_t)(EDX));
  /* 12cb5d29 push 0x12cdbe6c */
  push32((uint32_t)(0x12cdbe6cu));
  /* 12cb5d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d36 call 0x12cb3270 */
  push32(0x12cb5d3bu); f_12cb3270();
  /* 12cb5d3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5d3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5d41 jne 0x12cb5d44 */
  if (!C.zf) goto L_12cb5d44;
  /* 12cb5d43 int3  */
  x86_unimpl("int3 @ 0x12cb5d43");
L_12cb5d44:;
  /* 12cb5d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb5d48 jne 0x12cb5d22 */
  if (!C.zf) goto L_12cb5d22;
  /* 12cb5d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5d4d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cb5d50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5d56 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5d59 jne 0x12cb5dcc */
  if (!C.zf) goto L_12cb5dcc;
L_12cb5d5b:;
  /* 12cb5d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5d5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb5d61 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5d65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb5d68 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cb5d6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5d70 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5d71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5d74 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5d77 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5d78 push 0x12cdbe38 */
  push32((uint32_t)(0x12cdbe38u));
  /* 12cb5d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5d85 call 0x12cb3270 */
  push32(0x12cb5d8au); f_12cb3270();
  /* 12cb5d8a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5d8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5d90 jne 0x12cb5d93 */
  if (!C.zf) goto L_12cb5d93;
  /* 12cb5d92 int3  */
  x86_unimpl("int3 @ 0x12cb5d92");
L_12cb5d93:;
  /* 12cb5d93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5d95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb5d97 jne 0x12cb5d5b */
  if (!C.zf) goto L_12cb5d5b;
  /* 12cb5d99 cmp dword ptr [0x12ce1ed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1ed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5da0 je 0x12cb5dbb */
  if (C.zf) goto L_12cb5dbb;
  /* 12cb5da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5da5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb5da8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5da9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5dac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5daf push edx */
  push32((uint32_t)(EDX));
  /* 12cb5db0 call dword ptr [0x12ce1ed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce1ed8))), 0x12cb5db6u);
  /* 12cb5db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5db9 jmp 0x12cb5dc7 */
  goto L_12cb5dc7;
L_12cb5dbb:;
  /* 12cb5dbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5dbe push eax */
  push32((uint32_t)(EAX));
  /* 12cb5dbf call 0x12cb5eb0 */
  push32(0x12cb5dc4u); f_12cb5eb0();
  /* 12cb5dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb5dc7:;
  /* 12cb5dc7 jmp 0x12cb5e6d */
  goto L_12cb5e6d;
L_12cb5dcc:;
  /* 12cb5dcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5dcf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5dd3 jne 0x12cb5e12 */
  if (!C.zf) goto L_12cb5e12;
L_12cb5dd5:;
  /* 12cb5dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5dd8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb5ddb push eax */
  push32((uint32_t)(EAX));
  /* 12cb5ddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5ddf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5de2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5de3 push 0x12cdbe10 */
  push32((uint32_t)(0x12cdbe10u));
  /* 12cb5de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5dea push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5dec push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5dee push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5df0 call 0x12cb3270 */
  push32(0x12cb5df5u); f_12cb3270();
  /* 12cb5df5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5df8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5dfb jne 0x12cb5dfe */
  if (!C.zf) goto L_12cb5dfe;
  /* 12cb5dfd int3  */
  x86_unimpl("int3 @ 0x12cb5dfd");
L_12cb5dfe:;
  /* 12cb5dfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5e00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb5e02 jne 0x12cb5dd5 */
  if (!C.zf) goto L_12cb5dd5;
  /* 12cb5e04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5e07 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5e08 call 0x12cb5eb0 */
  push32(0x12cb5e0du); f_12cb5eb0();
  /* 12cb5e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5e10 jmp 0x12cb5e6d */
  goto L_12cb5e6d;
L_12cb5e12:;
  /* 12cb5e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5e15 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cb5e18 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5e1e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5e21 jne 0x12cb5e6d */
  if (!C.zf) goto L_12cb5e6d;
L_12cb5e23:;
  /* 12cb5e23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5e26 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb5e29 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5e2d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cb5e30 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cb5e33 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb5e38 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5e39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5e3c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5e3f push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5e40 push 0x12cdbddc */
  push32((uint32_t)(0x12cdbddcu));
  /* 12cb5e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5e4d call 0x12cb3270 */
  push32(0x12cb5e52u); f_12cb3270();
  /* 12cb5e52 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5e55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5e58 jne 0x12cb5e5b */
  if (!C.zf) goto L_12cb5e5b;
  /* 12cb5e5a int3  */
  x86_unimpl("int3 @ 0x12cb5e5a");
L_12cb5e5b:;
  /* 12cb5e5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5e5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb5e5f jne 0x12cb5e23 */
  if (!C.zf) goto L_12cb5e23;
  /* 12cb5e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb5e64 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5e65 call 0x12cb5eb0 */
  push32(0x12cb5e6au); f_12cb5eb0();
  /* 12cb5e6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb5e6d:;
  /* 12cb5e6d jmp 0x12cb5c48 */
  goto L_12cb5c48;
L_12cb5e72:;
  /* 12cb5e72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb5e74 call 0x12cb7c50 */
  push32(0x12cb5e79u); f_12cb7c50();
  /* 12cb5e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb5e7c:;
  /* 12cb5e7c push 0x12cdbdc4 */
  push32((uint32_t)(0x12cdbdc4u));
  /* 12cb5e81 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb5e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5e8e call 0x12cb3270 */
  push32(0x12cb5e93u); f_12cb3270();
  /* 12cb5e93 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5e96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5e99 jne 0x12cb5e9c */
  if (!C.zf) goto L_12cb5e9c;
  /* 12cb5e9b int3  */
  x86_unimpl("int3 @ 0x12cb5e9b");
L_12cb5e9c:;
  /* 12cb5e9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5e9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb5ea0 jne 0x12cb5e7c */
  if (!C.zf) goto L_12cb5e7c;
  /* 12cb5ea2 pop edi */
  EDI = (pop32());
  /* 12cb5ea3 pop esi */
  ESI = (pop32());
  /* 12cb5ea4 pop ebx */
  EBX = (pop32());
  /* 12cb5ea5 mov esp, ebp */
  ESP = (EBP);
  /* 12cb5ea7 pop ebp */
  EBP = (pop32());
  /* 12cb5ea8 ret  */
  ESPCHK(0x12cb5bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x12cb5eb0 (276 bytes, 89 insns) */
void f_12cb5eb0(void) {
  FTRACE(0x12cb5eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5eb3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb5eb7 push esi */
  push32((uint32_t)(ESI));
  /* 12cb5eb8 push edi */
  push32((uint32_t)(EDI));
  /* 12cb5eb9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12cb5ec0 jmp 0x12cb5ecb */
  goto L_12cb5ecb;
L_12cb5ec2:;
  /* 12cb5ec2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cb5ec5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5ec8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12cb5ecb:;
  /* 12cb5ecb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5ece cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5ed2 jge 0x12cb5edf */
  if ((C.sf==C.of)) goto L_12cb5edf;
  /* 12cb5ed4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5ed7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb5eda mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12cb5edd jmp 0x12cb5ee6 */
  goto L_12cb5ee6;
L_12cb5edf:;
  /* 12cb5edf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12cb5ee6:;
  /* 12cb5ee6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cb5ee9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5eec jge 0x12cb5f8c */
  if ((C.sf==C.of)) goto L_12cb5f8c;
  /* 12cb5ef2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb5ef5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5ef8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12cb5efb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12cb5efe cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5f05 jle 0x12cb5f23 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb5f23;
  /* 12cb5f07 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12cb5f0c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb5f0f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5f15 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5f16 call 0x12cba1c0 */
  push32(0x12cb5f1bu); f_12cba1c0();
  /* 12cb5f1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5f1e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12cb5f21 jmp 0x12cb5f40 */
  goto L_12cb5f40;
L_12cb5f23:;
  /* 12cb5f23 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb5f26 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5f2c mov eax, dword ptr [0x12cdec98] */
  EAX = (r32((uint32_t)(0x12cdec98)));
  /* 12cb5f31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5f33 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12cb5f37 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5f3d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12cb5f40:;
  /* 12cb5f40 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5f44 je 0x12cb5f54 */
  if (C.zf) goto L_12cb5f54;
  /* 12cb5f46 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb5f49 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5f4f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12cb5f52 jmp 0x12cb5f5b */
  goto L_12cb5f5b;
L_12cb5f54:;
  /* 12cb5f54 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12cb5f5b:;
  /* 12cb5f5b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cb5f5e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12cb5f61 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12cb5f65 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12cb5f68 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5f6e push edx */
  push32((uint32_t)(EDX));
  /* 12cb5f6f push 0x12cdbeb8 */
  push32((uint32_t)(0x12cdbeb8u));
  /* 12cb5f74 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cb5f77 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb5f7a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12cb5f7e push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5f7f call 0x12cba0c0 */
  push32(0x12cb5f84u); f_12cba0c0();
  /* 12cb5f84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5f87 jmp 0x12cb5ec2 */
  goto L_12cb5ec2;
L_12cb5f8c:;
  /* 12cb5f8c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12cb5f8f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12cb5f94:;
  /* 12cb5f94 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12cb5f97 push eax */
  push32((uint32_t)(EAX));
  /* 12cb5f98 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12cb5f9b push ecx */
  push32((uint32_t)(ECX));
  /* 12cb5f9c push 0x12cdbea8 */
  push32((uint32_t)(0x12cdbea8u));
  /* 12cb5fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb5fa9 call 0x12cb3270 */
  push32(0x12cb5faeu); f_12cb3270();
  /* 12cb5fae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5fb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5fb4 jne 0x12cb5fb7 */
  if (!C.zf) goto L_12cb5fb7;
  /* 12cb5fb6 int3  */
  x86_unimpl("int3 @ 0x12cb5fb6");
L_12cb5fb7:;
  /* 12cb5fb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb5fb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb5fbb jne 0x12cb5f94 */
  if (!C.zf) goto L_12cb5f94;
  /* 12cb5fbd pop edi */
  EDI = (pop32());
  /* 12cb5fbe pop esi */
  ESI = (pop32());
  /* 12cb5fbf pop ebx */
  EBX = (pop32());
  /* 12cb5fc0 mov esp, ebp */
  ESP = (EBP);
  /* 12cb5fc2 pop ebp */
  EBP = (pop32());
  /* 12cb5fc3 ret  */
  ESPCHK(0x12cb5eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x12cb5fd0 (116 bytes, 46 insns) */
void f_12cb5fd0(void) {
  FTRACE(0x12cb5fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb5fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb5fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb5fd3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb5fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb5fd7 push esi */
  push32((uint32_t)(ESI));
  /* 12cb5fd8 push edi */
  push32((uint32_t)(EDI));
  /* 12cb5fd9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12cb5fdc push eax */
  push32((uint32_t)(EAX));
  /* 12cb5fdd call 0x12cb5950 */
  push32(0x12cb5fe2u); f_12cb5950();
  /* 12cb5fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb5fe5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5fe9 jne 0x12cb6004 */
  if (!C.zf) goto L_12cb6004;
  /* 12cb5feb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb5fef jne 0x12cb6004 */
  if (!C.zf) goto L_12cb6004;
  /* 12cb5ff1 mov ecx, dword ptr [0x12cdea84] */
  ECX = (r32((uint32_t)(0x12cdea84)));
  /* 12cb5ff7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb5ffa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb5ffc je 0x12cb603b */
  if (C.zf) goto L_12cb603b;
  /* 12cb5ffe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6002 je 0x12cb603b */
  if (C.zf) goto L_12cb603b;
L_12cb6004:;
  /* 12cb6004 push 0x12cdbec0 */
  push32((uint32_t)(0x12cdbec0u));
  /* 12cb6009 push 0x12cdb88c */
  push32((uint32_t)(0x12cdb88cu));
  /* 12cb600e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6010 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6012 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6014 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6016 call 0x12cb3270 */
  push32(0x12cb601bu); f_12cb3270();
  /* 12cb601b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb601e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6021 jne 0x12cb6024 */
  if (!C.zf) goto L_12cb6024;
  /* 12cb6023 int3  */
  x86_unimpl("int3 @ 0x12cb6023");
L_12cb6024:;
  /* 12cb6024 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb6026 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb6028 jne 0x12cb6004 */
  if (!C.zf) goto L_12cb6004;
  /* 12cb602a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb602c call 0x12cb5bf0 */
  push32(0x12cb6031u); f_12cb5bf0();
  /* 12cb6031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6034 mov eax, 1 */
  EAX = (0x1u);
  /* 12cb6039 jmp 0x12cb603d */
  goto L_12cb603d;
L_12cb603b:;
  /* 12cb603b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb603d:;
  /* 12cb603d pop edi */
  EDI = (pop32());
  /* 12cb603e pop esi */
  ESI = (pop32());
  /* 12cb603f pop ebx */
  EBX = (pop32());
  /* 12cb6040 mov esp, ebp */
  ESP = (EBP);
  /* 12cb6042 pop ebp */
  EBP = (pop32());
  /* 12cb6043 ret  */
  ESPCHK(0x12cb5fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006050 @ 0x12cb6050 (197 bytes, 79 insns) */
void f_12cb6050(void) {
  FTRACE(0x12cb6050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6050 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6051 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6053 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6054 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb6055 push esi */
  push32((uint32_t)(ESI));
  /* 12cb6056 push edi */
  push32((uint32_t)(EDI));
  /* 12cb6057 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb605b jne 0x12cb6062 */
  if (!C.zf) goto L_12cb6062;
  /* 12cb605d jmp 0x12cb610e */
  goto L_12cb610e;
L_12cb6062:;
  /* 12cb6062 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cb6069 jmp 0x12cb6074 */
  goto L_12cb6074;
L_12cb606b:;
  /* 12cb606b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb606e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6071 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb6074:;
  /* 12cb6074 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6078 jge 0x12cb60be */
  if ((C.sf==C.of)) goto L_12cb60be;
L_12cb607a:;
  /* 12cb607a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb607d mov edx, dword ptr [ecx*4 + 0x12cdea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdea94)));
  /* 12cb6084 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6088 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb608b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12cb608f push edx */
  push32((uint32_t)(EDX));
  /* 12cb6090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6093 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6096 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12cb609a push edx */
  push32((uint32_t)(EDX));
  /* 12cb609b push 0x12cdbf1c */
  push32((uint32_t)(0x12cdbf1cu));
  /* 12cb60a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60a8 call 0x12cb3270 */
  push32(0x12cb60adu); f_12cb3270();
  /* 12cb60ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb60b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb60b3 jne 0x12cb60b6 */
  if (!C.zf) goto L_12cb60b6;
  /* 12cb60b5 int3  */
  x86_unimpl("int3 @ 0x12cb60b5");
L_12cb60b6:;
  /* 12cb60b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb60b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb60ba jne 0x12cb607a */
  if (!C.zf) goto L_12cb607a;
  /* 12cb60bc jmp 0x12cb606b */
  goto L_12cb606b;
L_12cb60be:;
  /* 12cb60be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb60c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12cb60c4 push edx */
  push32((uint32_t)(EDX));
  /* 12cb60c5 push 0x12cdbef8 */
  push32((uint32_t)(0x12cdbef8u));
  /* 12cb60ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60d2 call 0x12cb3270 */
  push32(0x12cb60d7u); f_12cb3270();
  /* 12cb60d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb60da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb60dd jne 0x12cb60e0 */
  if (!C.zf) goto L_12cb60e0;
  /* 12cb60df int3  */
  x86_unimpl("int3 @ 0x12cb60df");
L_12cb60e0:;
  /* 12cb60e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb60e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb60e4 jne 0x12cb60be */
  if (!C.zf) goto L_12cb60be;
L_12cb60e6:;
  /* 12cb60e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb60e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12cb60ec push edx */
  push32((uint32_t)(EDX));
  /* 12cb60ed push 0x12cdbed8 */
  push32((uint32_t)(0x12cdbed8u));
  /* 12cb60f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb60fa call 0x12cb3270 */
  push32(0x12cb60ffu); f_12cb3270();
  /* 12cb60ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6102 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6105 jne 0x12cb6108 */
  if (!C.zf) goto L_12cb6108;
  /* 12cb6107 int3  */
  x86_unimpl("int3 @ 0x12cb6107");
L_12cb6108:;
  /* 12cb6108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb610a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb610c jne 0x12cb60e6 */
  if (!C.zf) goto L_12cb60e6;
L_12cb610e:;
  /* 12cb610e pop edi */
  EDI = (pop32());
  /* 12cb610f pop esi */
  ESI = (pop32());
  /* 12cb6110 pop ebx */
  EBX = (pop32());
  /* 12cb6111 mov esp, ebp */
  ESP = (EBP);
  /* 12cb6113 pop ebp */
  EBP = (pop32());
  /* 12cb6114 ret  */
  ESPCHK(0x12cb6050u, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x12cb6120 (329 bytes, 102 insns) */
void f_12cb6120(void) {
  FTRACE(0x12cb6120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6120 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6121 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6123 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6126 cmp dword ptr [0x12ce2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb612d jne 0x12cb6134 */
  if (!C.zf) goto L_12cb6134;
  /* 12cb612f call 0x12cbaa60 */
  push32(0x12cb6134u); f_12cbaa60();
L_12cb6134:;
  /* 12cb6134 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cb613b mov eax, dword ptr [0x12ce0500] */
  EAX = (r32((uint32_t)(0x12ce0500)));
  /* 12cb6140 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb6143:;
  /* 12cb6143 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6146 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cb6149 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb614b je 0x12cb6179 */
  if (C.zf) goto L_12cb6179;
  /* 12cb614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6150 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb6153 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6156 je 0x12cb6161 */
  if (C.zf) goto L_12cb6161;
  /* 12cb6158 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb615b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb615e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cb6161:;
  /* 12cb6161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6164 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6165 call 0x12cb6fe0 */
  push32(0x12cb616au); f_12cb6fe0();
  /* 12cb616a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb616d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6170 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12cb6174 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb6177 jmp 0x12cb6143 */
  goto L_12cb6143;
L_12cb6179:;
  /* 12cb6179 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12cb617b push 0x12cdbf3c */
  push32((uint32_t)(0x12cdbf3cu));
  /* 12cb6180 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb6182 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6185 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12cb618c push ecx */
  push32((uint32_t)(ECX));
  /* 12cb618d call 0x12cb41b0 */
  push32(0x12cb6192u); f_12cb41b0();
  /* 12cb6192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6195 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb6198 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb619b mov dword ptr [0x12ce0534], edx */
  w32((uint32_t)(0x12ce0534), (EDX));
  /* 12cb61a1 cmp dword ptr [0x12ce0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb61a8 jne 0x12cb61b4 */
  if (!C.zf) goto L_12cb61b4;
  /* 12cb61aa push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb61ac call 0x12cb3120 */
  push32(0x12cb61b1u); f_12cb3120();
  /* 12cb61b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb61b4:;
  /* 12cb61b4 mov eax, dword ptr [0x12ce0500] */
  EAX = (r32((uint32_t)(0x12ce0500)));
  /* 12cb61b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb61bc jmp 0x12cb61c7 */
  goto L_12cb61c7;
L_12cb61be:;
  /* 12cb61be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb61c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb61c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb61c7:;
  /* 12cb61c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb61ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cb61cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb61cf je 0x12cb6237 */
  if (C.zf) goto L_12cb6237;
  /* 12cb61d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb61d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb61d5 call 0x12cb6fe0 */
  push32(0x12cb61dau); f_12cb6fe0();
  /* 12cb61da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb61dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb61e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb61e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb61e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cb61e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb61ec je 0x12cb6235 */
  if (C.zf) goto L_12cb6235;
  /* 12cb61ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12cb61f0 push 0x12cdbf3c */
  push32((uint32_t)(0x12cdbf3cu));
  /* 12cb61f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb61f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb61fa push ecx */
  push32((uint32_t)(ECX));
  /* 12cb61fb call 0x12cb41b0 */
  push32(0x12cb6200u); f_12cb41b0();
  /* 12cb6200 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6203 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6206 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cb6208 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb620b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb620e jne 0x12cb621a */
  if (!C.zf) goto L_12cb621a;
  /* 12cb6210 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb6212 call 0x12cb3120 */
  push32(0x12cb6217u); f_12cb3120();
  /* 12cb6217 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb621a:;
  /* 12cb621a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb621d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb621e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6221 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb6223 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6224 call 0x12cb7160 */
  push32(0x12cb6229u); f_12cb7160();
  /* 12cb6229 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb622c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb622f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6232 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12cb6235:;
  /* 12cb6235 jmp 0x12cb61be */
  goto L_12cb61be;
L_12cb6237:;
  /* 12cb6237 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb6239 mov edx, dword ptr [0x12ce0500] */
  EDX = (r32((uint32_t)(0x12ce0500)));
  /* 12cb623f push edx */
  push32((uint32_t)(EDX));
  /* 12cb6240 call 0x12cb4c40 */
  push32(0x12cb6245u); f_12cb4c40();
  /* 12cb6245 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6248 mov dword ptr [0x12ce0500], 0 */
  w32((uint32_t)(0x12ce0500), (0x0u));
  /* 12cb6252 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6255 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cb625b mov dword ptr [0x12ce2040], 1 */
  w32((uint32_t)(0x12ce2040), (0x1u));
  /* 12cb6265 mov esp, ebp */
  ESP = (EBP);
  /* 12cb6267 pop ebp */
  EBP = (pop32());
  /* 12cb6268 ret  */
  ESPCHK(0x12cb6120u, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x12cb6270 (216 bytes, 69 insns) */
void f_12cb6270(void) {
  FTRACE(0x12cb6270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6270 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6271 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6273 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6276 cmp dword ptr [0x12ce2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb627d jne 0x12cb6284 */
  if (!C.zf) goto L_12cb6284;
  /* 12cb627f call 0x12cbaa60 */
  push32(0x12cb6284u); f_12cbaa60();
L_12cb6284:;
  /* 12cb6284 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12cb6289 push 0x12ce0570 */
  push32((uint32_t)(0x12ce0570u));
  /* 12cb628e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6290 call dword ptr [0x12ce3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3320))), 0x12cb6296u);
  /* 12cb6296 mov dword ptr [0x12ce0544], 0x12ce0570 */
  w32((uint32_t)(0x12ce0544), (0x12ce0570u));
  /* 12cb62a0 mov eax, dword ptr [0x12ce206c] */
  EAX = (r32((uint32_t)(0x12ce206c)));
  /* 12cb62a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb62a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb62aa jne 0x12cb62b7 */
  if (!C.zf) goto L_12cb62b7;
  /* 12cb62ac mov edx, dword ptr [0x12ce0544] */
  EDX = (r32((uint32_t)(0x12ce0544)));
  /* 12cb62b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cb62b5 jmp 0x12cb62bf */
  goto L_12cb62bf;
L_12cb62b7:;
  /* 12cb62b7 mov eax, dword ptr [0x12ce206c] */
  EAX = (r32((uint32_t)(0x12ce206c)));
  /* 12cb62bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12cb62bf:;
  /* 12cb62bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb62c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cb62c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12cb62c8 push edx */
  push32((uint32_t)(EDX));
  /* 12cb62c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12cb62cc push eax */
  push32((uint32_t)(EAX));
  /* 12cb62cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb62cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb62d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb62d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb62d5 call 0x12cb6350 */
  push32(0x12cb62dau); f_12cb6350();
  /* 12cb62da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb62dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12cb62e2 push 0x12cdbf48 */
  push32((uint32_t)(0x12cdbf48u));
  /* 12cb62e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb62e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb62ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb62ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12cb62f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb62f3 call 0x12cb41b0 */
  push32(0x12cb62f8u); f_12cb41b0();
  /* 12cb62f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb62fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb62fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6302 jne 0x12cb630e */
  if (!C.zf) goto L_12cb630e;
  /* 12cb6304 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cb6306 call 0x12cb3120 */
  push32(0x12cb630bu); f_12cb3120();
  /* 12cb630b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb630e:;
  /* 12cb630e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12cb6311 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6312 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12cb6315 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6316 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6319 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb631c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12cb631f push eax */
  push32((uint32_t)(EAX));
  /* 12cb6320 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6323 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6324 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb6327 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6328 call 0x12cb6350 */
  push32(0x12cb632du); f_12cb6350();
  /* 12cb632d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6330 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6333 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6336 mov dword ptr [0x12ce0528], eax */
  w32((uint32_t)(0x12ce0528), (EAX));
  /* 12cb633b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb633e mov dword ptr [0x12ce052c], ecx */
  w32((uint32_t)(0x12ce052c), (ECX));
  /* 12cb6344 mov esp, ebp */
  ESP = (EBP);
  /* 12cb6346 pop ebp */
  EBP = (pop32());
  /* 12cb6347 ret  */
  ESPCHK(0x12cb6270u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x12cb6350 (1060 bytes, 360 insns) */
void f_12cb6350(void) {
  FTRACE(0x12cb6350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6350 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6351 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6353 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6356 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6359 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cb635f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb6362 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12cb6368 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb636b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb636e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6372 je 0x12cb6385 */
  if (C.zf) goto L_12cb6385;
  /* 12cb6374 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6377 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb637a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cb637c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb637f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6382 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12cb6385:;
  /* 12cb6385 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6388 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb638b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb638e jne 0x12cb645d */
  if (!C.zf) goto L_12cb645d;
L_12cb6394:;
  /* 12cb6394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6397 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb639a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb639d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb63a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb63a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb63a6 je 0x12cb6422 */
  if (C.zf) goto L_12cb6422;
  /* 12cb63a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb63ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cb63ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb63b0 je 0x12cb6422 */
  if (C.zf) goto L_12cb6422;
  /* 12cb63b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb63b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb63b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb63b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb63bb mov al, byte ptr [edx + 0x12ce1da1] */
  AL = (r8((uint32_t)(EDX + 0x12ce1da1)));
  /* 12cb63c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cb63c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb63c6 je 0x12cb63f7 */
  if (C.zf) goto L_12cb63f7;
  /* 12cb63c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb63cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb63cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb63d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb63d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cb63d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb63d9 je 0x12cb63f7 */
  if (C.zf) goto L_12cb63f7;
  /* 12cb63db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb63de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb63e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cb63e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cb63e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb63e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb63eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cb63ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb63f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb63f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cb63f7:;
  /* 12cb63f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb63fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb63fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb63ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6402 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cb6404 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6408 je 0x12cb641d */
  if (C.zf) goto L_12cb641d;
  /* 12cb640a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb640d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6410 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb6412 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb6414 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6417 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb641a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12cb641d:;
  /* 12cb641d jmp 0x12cb6394 */
  goto L_12cb6394;
L_12cb6422:;
  /* 12cb6422 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6425 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb6427 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb642a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb642d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cb642f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6433 je 0x12cb6444 */
  if (C.zf) goto L_12cb6444;
  /* 12cb6435 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6438 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12cb643b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb643e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6441 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12cb6444:;
  /* 12cb6444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6447 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb644a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb644d jne 0x12cb6458 */
  if (!C.zf) goto L_12cb6458;
  /* 12cb644f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6452 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6455 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cb6458:;
  /* 12cb6458 jmp 0x12cb652c */
  goto L_12cb652c;
L_12cb645d:;
  /* 12cb645d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6460 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb6462 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6465 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6468 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cb646a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb646e je 0x12cb6483 */
  if (C.zf) goto L_12cb6483;
  /* 12cb6470 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6473 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6476 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb6478 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb647a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb647d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6480 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12cb6483:;
  /* 12cb6483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6486 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb6488 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12cb648b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb648e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6491 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb6494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6497 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb649d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb649f mov dl, byte ptr [ecx + 0x12ce1da1] */
  DL = (r8((uint32_t)(ECX + 0x12ce1da1)));
  /* 12cb64a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb64a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb64aa je 0x12cb64db */
  if (C.zf) goto L_12cb64db;
  /* 12cb64ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb64af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb64b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb64b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb64b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cb64b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb64bd je 0x12cb64d2 */
  if (C.zf) goto L_12cb64d2;
  /* 12cb64bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb64c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb64c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb64c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb64c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb64cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb64cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12cb64d2:;
  /* 12cb64d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb64d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb64d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb64db:;
  /* 12cb64db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb64de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb64e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb64e7 je 0x12cb6507 */
  if (C.zf) goto L_12cb6507;
  /* 12cb64e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb64ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb64f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb64f3 je 0x12cb6507 */
  if (C.zf) goto L_12cb6507;
  /* 12cb64f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb64f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb64fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6501 jne 0x12cb645d */
  if (!C.zf) goto L_12cb645d;
L_12cb6507:;
  /* 12cb6507 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb650a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb6510 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb6512 jne 0x12cb651f */
  if (!C.zf) goto L_12cb651f;
  /* 12cb6514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6517 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb651a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb651d jmp 0x12cb652c */
  goto L_12cb652c;
L_12cb651f:;
  /* 12cb651f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6523 je 0x12cb652c */
  if (C.zf) goto L_12cb652c;
  /* 12cb6525 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6528 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12cb652c:;
  /* 12cb652c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12cb6533:;
  /* 12cb6533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6536 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cb6539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb653b je 0x12cb655e */
  if (C.zf) goto L_12cb655e;
L_12cb653d:;
  /* 12cb653d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6540 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cb6543 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6546 je 0x12cb6553 */
  if (C.zf) goto L_12cb6553;
  /* 12cb6548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb654b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb654e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6551 jne 0x12cb655e */
  if (!C.zf) goto L_12cb655e;
L_12cb6553:;
  /* 12cb6553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6556 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6559 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb655c jmp 0x12cb653d */
  goto L_12cb653d;
L_12cb655e:;
  /* 12cb655e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6561 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb6564 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb6566 jne 0x12cb656d */
  if (!C.zf) goto L_12cb656d;
  /* 12cb6568 jmp 0x12cb674b */
  goto L_12cb674b;
L_12cb656d:;
  /* 12cb656d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6571 je 0x12cb6584 */
  if (C.zf) goto L_12cb6584;
  /* 12cb6573 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6579 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cb657b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb657e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6581 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12cb6584:;
  /* 12cb6584 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb6587 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb6589 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb658c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb658f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12cb6591:;
  /* 12cb6591 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12cb6598 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cb659f:;
  /* 12cb659f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb65a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cb65a5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb65a8 jne 0x12cb65be */
  if (!C.zf) goto L_12cb65be;
  /* 12cb65aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb65ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb65b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb65b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb65b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb65b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cb65bc jmp 0x12cb659f */
  goto L_12cb659f;
L_12cb65be:;
  /* 12cb65be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb65c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb65c4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb65c7 jne 0x12cb661a */
  if (!C.zf) goto L_12cb661a;
  /* 12cb65c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb65cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb65ce mov ecx, 2 */
  ECX = (0x2u);
  /* 12cb65d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cb65d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb65d7 jne 0x12cb6612 */
  if (!C.zf) goto L_12cb6612;
  /* 12cb65d9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb65dd je 0x12cb65ff */
  if (C.zf) goto L_12cb65ff;
  /* 12cb65df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb65e2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cb65e6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb65e9 jne 0x12cb65f6 */
  if (!C.zf) goto L_12cb65f6;
  /* 12cb65eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb65ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb65f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb65f4 jmp 0x12cb65fd */
  goto L_12cb65fd;
L_12cb65f6:;
  /* 12cb65f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cb65fd:;
  /* 12cb65fd jmp 0x12cb6606 */
  goto L_12cb6606;
L_12cb65ff:;
  /* 12cb65ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cb6606:;
  /* 12cb6606 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb6608 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb660c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12cb660f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12cb6612:;
  /* 12cb6612 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb6615 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cb6617 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12cb661a:;
  /* 12cb661a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb661d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb6620 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6623 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cb6626 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb6628 je 0x12cb664e */
  if (C.zf) goto L_12cb664e;
  /* 12cb662a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb662e je 0x12cb663f */
  if (C.zf) goto L_12cb663f;
  /* 12cb6630 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6633 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12cb6636 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6639 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb663c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12cb663f:;
  /* 12cb663f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6642 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb6644 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6647 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb664a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cb664c jmp 0x12cb661a */
  goto L_12cb661a;
L_12cb664e:;
  /* 12cb664e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6651 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cb6654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb6656 je 0x12cb6674 */
  if (C.zf) goto L_12cb6674;
  /* 12cb6658 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb665c jne 0x12cb6679 */
  if (!C.zf) goto L_12cb6679;
  /* 12cb665e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6661 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cb6664 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6667 je 0x12cb6674 */
  if (C.zf) goto L_12cb6674;
  /* 12cb6669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb666c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cb666f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6672 jne 0x12cb6679 */
  if (!C.zf) goto L_12cb6679;
L_12cb6674:;
  /* 12cb6674 jmp 0x12cb6724 */
  goto L_12cb6724;
L_12cb6679:;
  /* 12cb6679 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb667d je 0x12cb6716 */
  if (C.zf) goto L_12cb6716;
  /* 12cb6683 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6687 je 0x12cb66dd */
  if (C.zf) goto L_12cb66dd;
  /* 12cb6689 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb668c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb668e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cb6690 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb6692 mov cl, byte ptr [eax + 0x12ce1da1] */
  CL = (r8((uint32_t)(EAX + 0x12ce1da1)));
  /* 12cb6698 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb669b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb669d je 0x12cb66c8 */
  if (C.zf) goto L_12cb66c8;
  /* 12cb669f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb66a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb66a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cb66a7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12cb66a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb66ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb66af mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12cb66b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb66b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb66b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb66bb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb66be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb66c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb66c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb66c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cb66c8:;
  /* 12cb66c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb66cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb66ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cb66d0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cb66d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb66d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb66d8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cb66db jmp 0x12cb6709 */
  goto L_12cb6709;
L_12cb66dd:;
  /* 12cb66dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb66e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb66e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cb66e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb66e6 mov cl, byte ptr [eax + 0x12ce1da1] */
  CL = (r8((uint32_t)(EAX + 0x12ce1da1)));
  /* 12cb66ec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb66ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb66f1 je 0x12cb6709 */
  if (C.zf) goto L_12cb6709;
  /* 12cb66f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb66f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb66f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb66fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb66ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb6701 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6704 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6707 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb6709:;
  /* 12cb6709 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb670c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb670e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6711 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6714 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb6716:;
  /* 12cb6716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6719 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb671c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb671f jmp 0x12cb6591 */
  goto L_12cb6591;
L_12cb6724:;
  /* 12cb6724 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6728 je 0x12cb6739 */
  if (C.zf) goto L_12cb6739;
  /* 12cb672a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb672d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12cb6730 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6733 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6736 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12cb6739:;
  /* 12cb6739 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb673c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb673e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6741 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cb6744 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cb6746 jmp 0x12cb6533 */
  goto L_12cb6533;
L_12cb674b:;
  /* 12cb674b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb674f je 0x12cb6763 */
  if (C.zf) goto L_12cb6763;
  /* 12cb6751 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6754 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cb675a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb675d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6760 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12cb6763:;
  /* 12cb6763 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb6766 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb6768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb676b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb676e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cb6770 mov esp, ebp */
  ESP = (EBP);
  /* 12cb6772 pop ebp */
  EBP = (pop32());
  /* 12cb6773 ret  */
  ESPCHK(0x12cb6350u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x12cb6780 (537 bytes, 173 insns) */
void f_12cb6780(void) {
  FTRACE(0x12cb6780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6780 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6781 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6783 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6786 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12cb678d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12cb6794 cmp dword ptr [0x12ce0674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb679b jne 0x12cb67da */
  if (!C.zf) goto L_12cb67da;
  /* 12cb679d call dword ptr [0x12ce3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3378))), 0x12cb67a3u);
  /* 12cb67a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cb67a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb67aa je 0x12cb67b8 */
  if (C.zf) goto L_12cb67b8;
  /* 12cb67ac mov dword ptr [0x12ce0674], 1 */
  w32((uint32_t)(0x12ce0674), (0x1u));
  /* 12cb67b6 jmp 0x12cb67da */
  goto L_12cb67da;
L_12cb67b8:;
  /* 12cb67b8 call dword ptr [0x12ce3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3374))), 0x12cb67beu);
  /* 12cb67be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb67c1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb67c5 je 0x12cb67d3 */
  if (C.zf) goto L_12cb67d3;
  /* 12cb67c7 mov dword ptr [0x12ce0674], 2 */
  w32((uint32_t)(0x12ce0674), (0x2u));
  /* 12cb67d1 jmp 0x12cb67da */
  goto L_12cb67da;
L_12cb67d3:;
  /* 12cb67d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb67d5 jmp 0x12cb6995 */
  goto L_12cb6995;
L_12cb67da:;
  /* 12cb67da cmp dword ptr [0x12ce0674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb67e1 jne 0x12cb68de */
  if (!C.zf) goto L_12cb68de;
  /* 12cb67e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb67eb jne 0x12cb6803 */
  if (!C.zf) goto L_12cb6803;
  /* 12cb67ed call dword ptr [0x12ce3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3378))), 0x12cb67f3u);
  /* 12cb67f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cb67f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb67fa jne 0x12cb6803 */
  if (!C.zf) goto L_12cb6803;
  /* 12cb67fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb67fe jmp 0x12cb6995 */
  goto L_12cb6995;
L_12cb6803:;
  /* 12cb6803 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb6806 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cb6809:;
  /* 12cb6809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb680c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb680e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12cb6811 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb6813 je 0x12cb6835 */
  if (C.zf) goto L_12cb6835;
  /* 12cb6815 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6818 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb681b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb681e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6821 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb6823 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12cb6826 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb6828 jne 0x12cb6833 */
  if (!C.zf) goto L_12cb6833;
  /* 12cb682a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb682d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6830 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cb6833:;
  /* 12cb6833 jmp 0x12cb6809 */
  goto L_12cb6809;
L_12cb6835:;
  /* 12cb6835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6838 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb683b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cb683d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb6843 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6845 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6847 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6849 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb684b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb684e push edx */
  push32((uint32_t)(EDX));
  /* 12cb684f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb6852 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6853 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6857 call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cb685du);
  /* 12cb685d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb6860 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6864 je 0x12cb6884 */
  if (C.zf) goto L_12cb6884;
  /* 12cb6866 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12cb6868 push 0x12cdbf54 */
  push32((uint32_t)(0x12cdbf54u));
  /* 12cb686d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb686f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb6872 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6873 call 0x12cb41b0 */
  push32(0x12cb6878u); f_12cb41b0();
  /* 12cb6878 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb687b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb687e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6882 jne 0x12cb6895 */
  if (!C.zf) goto L_12cb6895;
L_12cb6884:;
  /* 12cb6884 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb6887 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6888 call dword ptr [0x12ce336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce336c))), 0x12cb688eu);
  /* 12cb688e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb6890 jmp 0x12cb6995 */
  goto L_12cb6995;
L_12cb6895:;
  /* 12cb6895 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6897 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6899 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb689c push eax */
  push32((uint32_t)(EAX));
  /* 12cb689d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb68a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb68a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb68a4 push edx */
  push32((uint32_t)(EDX));
  /* 12cb68a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb68a8 push eax */
  push32((uint32_t)(EAX));
  /* 12cb68a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb68ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb68ad call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cb68b3u);
  /* 12cb68b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb68b5 jne 0x12cb68cc */
  if (!C.zf) goto L_12cb68cc;
  /* 12cb68b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb68b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb68bc push ecx */
  push32((uint32_t)(ECX));
  /* 12cb68bd call 0x12cb4c40 */
  push32(0x12cb68c2u); f_12cb4c40();
  /* 12cb68c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb68c5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12cb68cc:;
  /* 12cb68cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb68cf push edx */
  push32((uint32_t)(EDX));
  /* 12cb68d0 call dword ptr [0x12ce336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce336c))), 0x12cb68d6u);
  /* 12cb68d6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb68d9 jmp 0x12cb6995 */
  goto L_12cb6995;
L_12cb68de:;
  /* 12cb68de cmp dword ptr [0x12ce0674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb68e5 jne 0x12cb6993 */
  if (!C.zf) goto L_12cb6993;
  /* 12cb68eb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb68ef jne 0x12cb6907 */
  if (!C.zf) goto L_12cb6907;
  /* 12cb68f1 call dword ptr [0x12ce3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3374))), 0x12cb68f7u);
  /* 12cb68f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb68fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb68fe jne 0x12cb6907 */
  if (!C.zf) goto L_12cb6907;
  /* 12cb6900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb6902 jmp 0x12cb6995 */
  goto L_12cb6995;
L_12cb6907:;
  /* 12cb6907 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb690a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cb690d:;
  /* 12cb690d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6910 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cb6913 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb6915 je 0x12cb6935 */
  if (C.zf) goto L_12cb6935;
  /* 12cb6917 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb691a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb691d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb6920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6923 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cb6926 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb6928 jne 0x12cb6933 */
  if (!C.zf) goto L_12cb6933;
  /* 12cb692a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb692d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6930 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cb6933:;
  /* 12cb6933 jmp 0x12cb690d */
  goto L_12cb690d;
L_12cb6935:;
  /* 12cb6935 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6938 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb693b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb693e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cb6941 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12cb6946 push 0x12cdbf54 */
  push32((uint32_t)(0x12cdbf54u));
  /* 12cb694b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb694d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb6950 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6951 call 0x12cb41b0 */
  push32(0x12cb6956u); f_12cb41b0();
  /* 12cb6956 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6959 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb695c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6960 jne 0x12cb6970 */
  if (!C.zf) goto L_12cb6970;
  /* 12cb6962 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb6965 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6966 call dword ptr [0x12ce3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3368))), 0x12cb696cu);
  /* 12cb696c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb696e jmp 0x12cb6995 */
  goto L_12cb6995;
L_12cb6970:;
  /* 12cb6970 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb6973 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6974 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb6977 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6978 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb697b push eax */
  push32((uint32_t)(EAX));
  /* 12cb697c call 0x12cbaa90 */
  push32(0x12cb6981u); f_12cbaa90();
  /* 12cb6981 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6984 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb6987 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6988 call dword ptr [0x12ce3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3368))), 0x12cb698eu);
  /* 12cb698e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6991 jmp 0x12cb6995 */
  goto L_12cb6995;
L_12cb6993:;
  /* 12cb6993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb6995:;
  /* 12cb6995 mov esp, ebp */
  ESP = (EBP);
  /* 12cb6997 pop ebp */
  EBP = (pop32());
  /* 12cb6998 ret  */
  ESPCHK(0x12cb6780u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x12cb69a0 (77 bytes, 25 insns) */
void f_12cb69a0(void) {
  FTRACE(0x12cb69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb69a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb69a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb69a5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cb69aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb69ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb69b0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12cb69b3 push eax */
  push32((uint32_t)(EAX));
  /* 12cb69b4 call dword ptr [0x12ce3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3380))), 0x12cb69bau);
  /* 12cb69ba mov dword ptr [0x12ce1ecc], eax */
  w32((uint32_t)(0x12ce1ecc), (EAX));
  /* 12cb69bf cmp dword ptr [0x12ce1ecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1ecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb69c6 jne 0x12cb69cc */
  if (!C.zf) goto L_12cb69cc;
  /* 12cb69c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb69ca jmp 0x12cb69eb */
  goto L_12cb69eb;
L_12cb69cc:;
  /* 12cb69cc call 0x12cb8450 */
  push32(0x12cb69d1u); f_12cb8450();
  /* 12cb69d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb69d3 jne 0x12cb69e6 */
  if (!C.zf) goto L_12cb69e6;
  /* 12cb69d5 mov ecx, dword ptr [0x12ce1ecc] */
  ECX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb69db push ecx */
  push32((uint32_t)(ECX));
  /* 12cb69dc call dword ptr [0x12ce337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce337c))), 0x12cb69e2u);
  /* 12cb69e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb69e4 jmp 0x12cb69eb */
  goto L_12cb69eb;
L_12cb69e6:;
  /* 12cb69e6 mov eax, 1 */
  EAX = (0x1u);
L_12cb69eb:;
  /* 12cb69eb pop ebp */
  EBP = (pop32());
  /* 12cb69ec ret  */
  ESPCHK(0x12cb69a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x12cb69f0 (156 bytes, 48 insns) */
void f_12cb69f0(void) {
  FTRACE(0x12cb69f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb69f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb69f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb69f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb69f6 mov eax, dword ptr [0x12ce1ec8] */
  EAX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb69fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb69fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cb6a05 jmp 0x12cb6a10 */
  goto L_12cb6a10;
L_12cb6a07:;
  /* 12cb6a07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6a0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6a0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb6a10:;
  /* 12cb6a10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6a13 cmp edx, dword ptr [0x12ce1ec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ce1ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6a19 jge 0x12cb6a66 */
  if ((C.sf==C.of)) goto L_12cb6a66;
  /* 12cb6a1b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12cb6a20 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12cb6a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6a28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cb6a2b push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6a2c call dword ptr [0x12ce3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3388))), 0x12cb6a32u);
  /* 12cb6a32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cb6a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6a39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6a3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cb6a3f push eax */
  push32((uint32_t)(EAX));
  /* 12cb6a40 call dword ptr [0x12ce3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3388))), 0x12cb6a46u);
  /* 12cb6a46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6a49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cb6a4c push edx */
  push32((uint32_t)(EDX));
  /* 12cb6a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6a4f mov eax, dword ptr [0x12ce1ecc] */
  EAX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb6a54 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6a55 call dword ptr [0x12ce3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3384))), 0x12cb6a5bu);
  /* 12cb6a5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6a5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6a61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cb6a64 jmp 0x12cb6a07 */
  goto L_12cb6a07;
L_12cb6a66:;
  /* 12cb6a66 mov edx, dword ptr [0x12ce1ec8] */
  EDX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb6a6c push edx */
  push32((uint32_t)(EDX));
  /* 12cb6a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6a6f mov eax, dword ptr [0x12ce1ecc] */
  EAX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb6a74 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6a75 call dword ptr [0x12ce3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3384))), 0x12cb6a7bu);
  /* 12cb6a7b mov ecx, dword ptr [0x12ce1ecc] */
  ECX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb6a81 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6a82 call dword ptr [0x12ce337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce337c))), 0x12cb6a88u);
  /* 12cb6a88 mov esp, ebp */
  ESP = (EBP);
  /* 12cb6a8a pop ebp */
  EBP = (pop32());
  /* 12cb6a8b ret  */
  ESPCHK(0x12cb69f0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12cb6a90 (73 bytes, 19 insns) */
void f_12cb6a90(void) {
  FTRACE(0x12cb6a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6a91 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6a93 cmp dword ptr [0x12ce0508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6a9a je 0x12cb6aae */
  if (C.zf) goto L_12cb6aae;
  /* 12cb6a9c cmp dword ptr [0x12ce0508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6aa3 jne 0x12cb6ad7 */
  if (!C.zf) goto L_12cb6ad7;
  /* 12cb6aa5 cmp dword ptr [0x12ce050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6aac jne 0x12cb6ad7 */
  if (!C.zf) goto L_12cb6ad7;
L_12cb6aae:;
  /* 12cb6aae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12cb6ab3 call 0x12cb6ae0 */
  push32(0x12cb6ab8u); f_12cb6ae0();
  /* 12cb6ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6abb cmp dword ptr [0x12ce0678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6ac2 je 0x12cb6aca */
  if (C.zf) goto L_12cb6aca;
  /* 12cb6ac4 call dword ptr [0x12ce0678] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce0678))), 0x12cb6acau);
L_12cb6aca:;
  /* 12cb6aca push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cb6acf call 0x12cb6ae0 */
  push32(0x12cb6ad4u); f_12cb6ae0();
  /* 12cb6ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb6ad7:;
  /* 12cb6ad7 pop ebp */
  EBP = (pop32());
  /* 12cb6ad8 ret  */
  ESPCHK(0x12cb6a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ae0 @ 0x12cb6ae0 (447 bytes, 131 insns) */
void f_12cb6ae0(void) {
  FTRACE(0x12cb6ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6ae3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6ae9 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb6aea push esi */
  push32((uint32_t)(ESI));
  /* 12cb6aeb push edi */
  push32((uint32_t)(EDI));
  /* 12cb6aec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cb6af3 jmp 0x12cb6afe */
  goto L_12cb6afe;
L_12cb6af5:;
  /* 12cb6af5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6af8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6afb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cb6afe:;
  /* 12cb6afe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6b02 jae 0x12cb6b17 */
  if (!C.cf) goto L_12cb6b17;
  /* 12cb6b04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6b07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6b0a cmp edx, dword ptr [ecx*8 + 0x12cdeab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12cdeab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6b11 jne 0x12cb6b15 */
  if (!C.zf) goto L_12cb6b15;
  /* 12cb6b13 jmp 0x12cb6b17 */
  goto L_12cb6b17;
L_12cb6b15:;
  /* 12cb6b15 jmp 0x12cb6af5 */
  goto L_12cb6af5;
L_12cb6b17:;
  /* 12cb6b17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6b1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6b1d cmp ecx, dword ptr [eax*8 + 0x12cdeab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12cdeab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6b24 jne 0x12cb6c98 */
  if (!C.zf) goto L_12cb6c98;
  /* 12cb6b2a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6b31 je 0x12cb6b54 */
  if (C.zf) goto L_12cb6b54;
  /* 12cb6b33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6b36 mov eax, dword ptr [edx*8 + 0x12cdeab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12cdeab4)));
  /* 12cb6b3d push eax */
  push32((uint32_t)(EAX));
  /* 12cb6b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6b44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb6b46 call 0x12cb3270 */
  push32(0x12cb6b4bu); f_12cb3270();
  /* 12cb6b4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6b4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6b51 jne 0x12cb6b54 */
  if (!C.zf) goto L_12cb6b54;
  /* 12cb6b53 int3  */
  x86_unimpl("int3 @ 0x12cb6b53");
L_12cb6b54:;
  /* 12cb6b54 cmp dword ptr [0x12ce0508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6b5b je 0x12cb6b6f */
  if (C.zf) goto L_12cb6b6f;
  /* 12cb6b5d cmp dword ptr [0x12ce0508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6b64 jne 0x12cb6ba8 */
  if (!C.zf) goto L_12cb6ba8;
  /* 12cb6b66 cmp dword ptr [0x12ce050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6b6d jne 0x12cb6ba8 */
  if (!C.zf) goto L_12cb6ba8;
L_12cb6b6f:;
  /* 12cb6b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6b71 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12cb6b74 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6b75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6b78 mov eax, dword ptr [edx*8 + 0x12cdeab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12cdeab4)));
  /* 12cb6b7f push eax */
  push32((uint32_t)(EAX));
  /* 12cb6b80 call 0x12cb6fe0 */
  push32(0x12cb6b85u); f_12cb6fe0();
  /* 12cb6b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6b88 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6b89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6b8c mov edx, dword ptr [ecx*8 + 0x12cdeab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12cdeab4)));
  /* 12cb6b93 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6b94 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12cb6b96 call dword ptr [0x12ce3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3304))), 0x12cb6b9cu);
  /* 12cb6b9c push eax */
  push32((uint32_t)(EAX));
  /* 12cb6b9d call dword ptr [0x12ce3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3308))), 0x12cb6ba3u);
  /* 12cb6ba3 jmp 0x12cb6c98 */
  goto L_12cb6c98;
L_12cb6ba8:;
  /* 12cb6ba8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6baf je 0x12cb6c98 */
  if (C.zf) goto L_12cb6c98;
  /* 12cb6bb5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12cb6bba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12cb6bc0 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6bc3 call dword ptr [0x12ce3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3320))), 0x12cb6bc9u);
  /* 12cb6bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb6bcb jne 0x12cb6be1 */
  if (!C.zf) goto L_12cb6be1;
  /* 12cb6bcd push 0x12cdb7bc */
  push32((uint32_t)(0x12cdb7bcu));
  /* 12cb6bd2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12cb6bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6bd9 call 0x12cb7160 */
  push32(0x12cb6bdeu); f_12cb7160();
  /* 12cb6bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb6be1:;
  /* 12cb6be1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12cb6be7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cb6bea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6bed push eax */
  push32((uint32_t)(EAX));
  /* 12cb6bee call 0x12cb6fe0 */
  push32(0x12cb6bf3u); f_12cb6fe0();
  /* 12cb6bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6bf6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6bf9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6bfc jbe 0x12cb6c2a */
  if ((C.cf||C.zf)) goto L_12cb6c2a;
  /* 12cb6bfe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12cb6c04 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6c05 call 0x12cb6fe0 */
  push32(0x12cb6c0au); f_12cb6fe0();
  /* 12cb6c0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6c0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6c10 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12cb6c14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb6c17 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb6c19 push 0x12cdb7b8 */
  push32((uint32_t)(0x12cdb7b8u));
  /* 12cb6c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6c21 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6c22 call 0x12cb79d0 */
  push32(0x12cb6c27u); f_12cb79d0();
  /* 12cb6c27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb6c2a:;
  /* 12cb6c2a push 0x12cdc210 */
  push32((uint32_t)(0x12cdc210u));
  /* 12cb6c2f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12cb6c35 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6c36 call 0x12cb7160 */
  push32(0x12cb6c3bu); f_12cb7160();
  /* 12cb6c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6c3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6c41 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6c42 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12cb6c48 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6c49 call 0x12cb7170 */
  push32(0x12cb6c4eu); f_12cb7170();
  /* 12cb6c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6c51 push 0x12cdb730 */
  push32((uint32_t)(0x12cdb730u));
  /* 12cb6c56 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12cb6c5c push edx */
  push32((uint32_t)(EDX));
  /* 12cb6c5d call 0x12cb7170 */
  push32(0x12cb6c62u); f_12cb7170();
  /* 12cb6c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6c65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6c68 mov ecx, dword ptr [eax*8 + 0x12cdeab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12cdeab4)));
  /* 12cb6c6f push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6c70 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12cb6c76 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6c77 call 0x12cb7170 */
  push32(0x12cb6c7cu); f_12cb7170();
  /* 12cb6c7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6c7f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12cb6c84 push 0x12cdc1e8 */
  push32((uint32_t)(0x12cdc1e8u));
  /* 12cb6c89 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12cb6c8f push eax */
  push32((uint32_t)(EAX));
  /* 12cb6c90 call 0x12cb7910 */
  push32(0x12cb6c95u); f_12cb7910();
  /* 12cb6c95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb6c98:;
  /* 12cb6c98 pop edi */
  EDI = (pop32());
  /* 12cb6c99 pop esi */
  ESI = (pop32());
  /* 12cb6c9a pop ebx */
  EBX = (pop32());
  /* 12cb6c9b mov esp, ebp */
  ESP = (EBP);
  /* 12cb6c9d pop ebp */
  EBP = (pop32());
  /* 12cb6c9e ret  */
  ESPCHK(0x12cb6ae0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12cb6ca0 (80 bytes, 27 insns) */
void f_12cb6ca0(void) {
  FTRACE(0x12cb6ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6ca4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cb6cab jmp 0x12cb6cb6 */
  goto L_12cb6cb6;
L_12cb6cad:;
  /* 12cb6cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6cb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6cb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb6cb6:;
  /* 12cb6cb6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6cba jae 0x12cb6ccf */
  if (!C.cf) goto L_12cb6ccf;
  /* 12cb6cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6cbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6cc2 cmp edx, dword ptr [ecx*8 + 0x12cdeab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12cdeab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6cc9 jne 0x12cb6ccd */
  if (!C.zf) goto L_12cb6ccd;
  /* 12cb6ccb jmp 0x12cb6ccf */
  goto L_12cb6ccf;
L_12cb6ccd:;
  /* 12cb6ccd jmp 0x12cb6cad */
  goto L_12cb6cad;
L_12cb6ccf:;
  /* 12cb6ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6cd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6cd5 cmp ecx, dword ptr [eax*8 + 0x12cdeab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12cdeab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6cdc jne 0x12cb6cea */
  if (!C.zf) goto L_12cb6cea;
  /* 12cb6cde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6ce1 mov eax, dword ptr [edx*8 + 0x12cdeab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12cdeab4)));
  /* 12cb6ce8 jmp 0x12cb6cec */
  goto L_12cb6cec;
L_12cb6cea:;
  /* 12cb6cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb6cec:;
  /* 12cb6cec mov esp, ebp */
  ESP = (EBP);
  /* 12cb6cee pop ebp */
  EBP = (pop32());
  /* 12cb6cef ret  */
  ESPCHK(0x12cb6ca0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12cb6cf0 (66 bytes, 28 insns) */
void f_12cb6cf0(void) {
  FTRACE(0x12cb6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6cf3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6cf7 jne 0x12cb6d17 */
  if (!C.zf) goto L_12cb6d17;
  /* 12cb6cf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6cfd jge 0x12cb6d17 */
  if ((C.sf==C.of)) goto L_12cb6d17;
  /* 12cb6cff push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb6d01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6d04 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6d05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6d08 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6d09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6d0c push edx */
  push32((uint32_t)(EDX));
  /* 12cb6d0d call 0x12cb6d40 */
  push32(0x12cb6d12u); f_12cb6d40();
  /* 12cb6d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6d15 jmp 0x12cb6d2d */
  goto L_12cb6d2d;
L_12cb6d17:;
  /* 12cb6d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6d19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6d1c push eax */
  push32((uint32_t)(EAX));
  /* 12cb6d1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6d20 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6d21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6d24 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6d25 call 0x12cb6d40 */
  push32(0x12cb6d2au); f_12cb6d40();
  /* 12cb6d2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb6d2d:;
  /* 12cb6d2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6d30 pop ebp */
  EBP = (pop32());
  /* 12cb6d31 ret  */
  ESPCHK(0x12cb6cf0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12cb6d40 (194 bytes, 71 insns) */
void f_12cb6d40(void) {
  FTRACE(0x12cb6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6d41 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6d43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6d46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6d49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb6d4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6d50 je 0x12cb6d69 */
  if (C.zf) goto L_12cb6d69;
  /* 12cb6d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6d55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12cb6d58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6d5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6d5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb6d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6d64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cb6d66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cb6d69:;
  /* 12cb6d69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6d6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cb6d6f:;
  /* 12cb6d6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6d72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb6d74 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cb6d77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cb6d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb6d7f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cb6d82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cb6d85 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6d89 jbe 0x12cb6da1 */
  if ((C.cf||C.zf)) goto L_12cb6da1;
  /* 12cb6d8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6d8e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6d91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6d94 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb6d96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6d99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6d9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb6d9f jmp 0x12cb6db5 */
  goto L_12cb6db5;
L_12cb6da1:;
  /* 12cb6da1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6da4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6da7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6daa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb6dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6daf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6db2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb6db5:;
  /* 12cb6db5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6db9 ja 0x12cb6d6f */
  if ((!C.cf&&!C.zf)) goto L_12cb6d6f;
  /* 12cb6dbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6dbe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cb6dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6dc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6dc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb6dca:;
  /* 12cb6dca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6dcd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb6dcf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12cb6dd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6dd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6dd8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb6dda mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb6ddc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6ddf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12cb6de2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12cb6de4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6de7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6dea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb6ded mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6df0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6df3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb6df6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6df9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6dfc jb 0x12cb6dca */
  if (C.cf) goto L_12cb6dca;
  /* 12cb6dfe mov esp, ebp */
  ESP = (EBP);
  /* 12cb6e00 pop ebp */
  EBP = (pop32());
  /* 12cb6e01 ret  */
  ESPCHK(0x12cb6d40u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12cb6e10 (63 bytes, 24 insns) */
void f_12cb6e10(void) {
  FTRACE(0x12cb6e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6e11 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6e14 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6e18 jne 0x12cb6e29 */
  if (!C.zf) goto L_12cb6e29;
  /* 12cb6e1a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6e1e jge 0x12cb6e29 */
  if ((C.sf==C.of)) goto L_12cb6e29;
  /* 12cb6e20 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cb6e27 jmp 0x12cb6e30 */
  goto L_12cb6e30;
L_12cb6e29:;
  /* 12cb6e29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cb6e30:;
  /* 12cb6e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6e33 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6e34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6e37 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6e38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6e3b push edx */
  push32((uint32_t)(EDX));
  /* 12cb6e3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6e3f push eax */
  push32((uint32_t)(EAX));
  /* 12cb6e40 call 0x12cb6d40 */
  push32(0x12cb6e45u); f_12cb6d40();
  /* 12cb6e45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6e48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6e4b mov esp, ebp */
  ESP = (EBP);
  /* 12cb6e4d pop ebp */
  EBP = (pop32());
  /* 12cb6e4e ret  */
  ESPCHK(0x12cb6e10u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12cb6e50 (30 bytes, 14 insns) */
void f_12cb6e50(void) {
  FTRACE(0x12cb6e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6e51 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6e55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6e58 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6e59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6e5c push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6e5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6e60 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6e61 call 0x12cb6d40 */
  push32(0x12cb6e66u); f_12cb6d40();
  /* 12cb6e66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6e69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6e6c pop ebp */
  EBP = (pop32());
  /* 12cb6e6d ret  */
  ESPCHK(0x12cb6e50u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12cb6e70 (72 bytes, 28 insns) */
void f_12cb6e70(void) {
  FTRACE(0x12cb6e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6e71 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6e74 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6e78 jne 0x12cb6e91 */
  if (!C.zf) goto L_12cb6e91;
  /* 12cb6e7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6e7e jg 0x12cb6e91 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cb6e91;
  /* 12cb6e80 jl 0x12cb6e88 */
  if ((C.sf!=C.of)) goto L_12cb6e88;
  /* 12cb6e82 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6e86 jae 0x12cb6e91 */
  if (!C.cf) goto L_12cb6e91;
L_12cb6e88:;
  /* 12cb6e88 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cb6e8f jmp 0x12cb6e98 */
  goto L_12cb6e98;
L_12cb6e91:;
  /* 12cb6e91 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cb6e98:;
  /* 12cb6e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6e9b push eax */
  push32((uint32_t)(EAX));
  /* 12cb6e9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb6e9f push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6ea0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6ea3 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6ea4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6ea7 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6ea8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6eab push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6eac call 0x12cb6ec0 */
  push32(0x12cb6eb1u); f_12cb6ec0();
  /* 12cb6eb1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6eb4 mov esp, ebp */
  ESP = (EBP);
  /* 12cb6eb6 pop ebp */
  EBP = (pop32());
  /* 12cb6eb7 ret  */
  ESPCHK(0x12cb6e70u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12cb6ec0 (242 bytes, 91 insns) */
void f_12cb6ec0(void) {
  FTRACE(0x12cb6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6ec3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6ec6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb6ecc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6ed0 je 0x12cb6ef4 */
  if (C.zf) goto L_12cb6ef4;
  /* 12cb6ed2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6ed5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12cb6ed8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6edb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6ede mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb6ee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6ee4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cb6ee6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6ee9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6eec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cb6eee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cb6ef1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12cb6ef4:;
  /* 12cb6ef4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6ef7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cb6efa:;
  /* 12cb6efa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb6efd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb6eff push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6f00 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6f01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6f04 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6f05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6f08 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6f09 call 0x12cbae40 */
  push32(0x12cb6f0eu); f_12cbae40();
  /* 12cb6f0e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb6f11 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb6f14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb6f16 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6f17 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6f18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6f1b push eax */
  push32((uint32_t)(EAX));
  /* 12cb6f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6f1f push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6f20 call 0x12cbadd0 */
  push32(0x12cb6f25u); f_12cbadd0();
  /* 12cb6f25 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cb6f28 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12cb6f2b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6f2f jbe 0x12cb6f47 */
  if ((C.cf||C.zf)) goto L_12cb6f47;
  /* 12cb6f31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6f34 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6f37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb6f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6f42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb6f45 jmp 0x12cb6f5b */
  goto L_12cb6f5b;
L_12cb6f47:;
  /* 12cb6f47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb6f4a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6f4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb6f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6f58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cb6f5b:;
  /* 12cb6f5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6f5f ja 0x12cb6efa */
  if ((!C.cf&&!C.zf)) goto L_12cb6efa;
  /* 12cb6f61 jb 0x12cb6f69 */
  if (C.cf) goto L_12cb6f69;
  /* 12cb6f63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6f67 ja 0x12cb6efa */
  if ((!C.cf&&!C.zf)) goto L_12cb6efa;
L_12cb6f69:;
  /* 12cb6f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f6c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cb6f6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f72 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6f75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb6f78:;
  /* 12cb6f78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f7b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb6f7d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12cb6f80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6f86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb6f88 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cb6f8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6f8d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12cb6f90 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12cb6f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb6f95 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb6f98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb6f9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6f9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb6fa1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb6fa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb6fa7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb6faa jb 0x12cb6f78 */
  if (C.cf) goto L_12cb6f78;
  /* 12cb6fac mov esp, ebp */
  ESP = (EBP);
  /* 12cb6fae pop ebp */
  EBP = (pop32());
  /* 12cb6faf ret 0x14 */
  ESPCHK(0x12cb6ec0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12cb6fc0 (31 bytes, 15 insns) */
void f_12cb6fc0(void) {
  FTRACE(0x12cb6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb6fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb6fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb6fc5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb6fc8 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6fc9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6fcc push ecx */
  push32((uint32_t)(ECX));
  /* 12cb6fcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb6fd0 push edx */
  push32((uint32_t)(EDX));
  /* 12cb6fd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb6fd4 push eax */
  push32((uint32_t)(EAX));
  /* 12cb6fd5 call 0x12cb6ec0 */
  push32(0x12cb6fdau); f_12cb6ec0();
  /* 12cb6fda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb6fdd pop ebp */
  EBP = (pop32());
  /* 12cb6fde ret  */
  ESPCHK(0x12cb6fc0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12cb6fe0 (123 bytes, 44 insns) */
void f_12cb6fe0(void) {
  FTRACE(0x12cb6fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb6fe0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cb6fe4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cb6fea je 0x12cb7000 */
  if (C.zf) goto L_12cb7000;
L_12cb6fec:;
  /* 12cb6fec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12cb6fee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cb6fef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cb6ff1 je 0x12cb7033 */
  if (C.zf) goto L_12cb7033;
  /* 12cb6ff3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cb6ff9 jne 0x12cb6fec */
  if (!C.zf) goto L_12cb6fec;
  /* 12cb6ffb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12cb7000:;
  /* 12cb7000 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cb7002 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12cb7007 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7009 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb700c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb700e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7011 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12cb7016 je 0x12cb7000 */
  if (C.zf) goto L_12cb7000;
  /* 12cb7018 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cb701b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cb701d je 0x12cb7051 */
  if (C.zf) goto L_12cb7051;
  /* 12cb701f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12cb7021 je 0x12cb7047 */
  if (C.zf) goto L_12cb7047;
  /* 12cb7023 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12cb7028 je 0x12cb703d */
  if (C.zf) goto L_12cb703d;
  /* 12cb702a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12cb702f je 0x12cb7033 */
  if (C.zf) goto L_12cb7033;
  /* 12cb7031 jmp 0x12cb7000 */
  goto L_12cb7000;
L_12cb7033:;
  /* 12cb7033 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12cb7036 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cb703a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb703c ret  */
  ESPCHK(0x12cb6fe0u, _esp0);
  ESP += 4; return;
L_12cb703d:;
  /* 12cb703d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12cb7040 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cb7044 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7046 ret  */
  ESPCHK(0x12cb6fe0u, _esp0);
  ESP += 4; return;
L_12cb7047:;
  /* 12cb7047 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12cb704a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cb704e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7050 ret  */
  ESPCHK(0x12cb6fe0u, _esp0);
  ESP += 4; return;
L_12cb7051:;
  /* 12cb7051 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12cb7054 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cb7058 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb705a ret  */
  ESPCHK(0x12cb6fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x12cb7060 (249 bytes, 93 insns) */
void f_12cb7060(void) {
  FTRACE(0x12cb7060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7060 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7061 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7063 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7066 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb7067 push esi */
  push32((uint32_t)(ESI));
  /* 12cb7068 push edi */
  push32((uint32_t)(EDI));
  /* 12cb7069 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12cb706c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cb706f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12cb7072 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12cb7075:;
  /* 12cb7075 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7079 jne 0x12cb7099 */
  if (!C.zf) goto L_12cb7099;
  /* 12cb707b push 0x12cdc248 */
  push32((uint32_t)(0x12cdc248u));
  /* 12cb7080 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb7082 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12cb7084 push 0x12cdc23c */
  push32((uint32_t)(0x12cdc23cu));
  /* 12cb7089 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb708b call 0x12cb3270 */
  push32(0x12cb7090u); f_12cb3270();
  /* 12cb7090 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7093 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7096 jne 0x12cb7099 */
  if (!C.zf) goto L_12cb7099;
  /* 12cb7098 int3  */
  x86_unimpl("int3 @ 0x12cb7098");
L_12cb7099:;
  /* 12cb7099 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb709b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb709d jne 0x12cb7075 */
  if (!C.zf) goto L_12cb7075;
L_12cb709f:;
  /* 12cb709f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb70a3 jne 0x12cb70c3 */
  if (!C.zf) goto L_12cb70c3;
  /* 12cb70a5 push 0x12cdc22c */
  push32((uint32_t)(0x12cdc22cu));
  /* 12cb70aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb70ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12cb70ae push 0x12cdc23c */
  push32((uint32_t)(0x12cdc23cu));
  /* 12cb70b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb70b5 call 0x12cb3270 */
  push32(0x12cb70bau); f_12cb3270();
  /* 12cb70ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb70bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb70c0 jne 0x12cb70c3 */
  if (!C.zf) goto L_12cb70c3;
  /* 12cb70c2 int3  */
  x86_unimpl("int3 @ 0x12cb70c2");
L_12cb70c3:;
  /* 12cb70c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb70c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb70c7 jne 0x12cb709f */
  if (!C.zf) goto L_12cb709f;
  /* 12cb70c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb70cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12cb70d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb70d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb70d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cb70dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb70df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb70e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cb70e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb70e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb70ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12cb70ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb70f0 push edx */
  push32((uint32_t)(EDX));
  /* 12cb70f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb70f4 push eax */
  push32((uint32_t)(EAX));
  /* 12cb70f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb70f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb70f9 call 0x12cbb140 */
  push32(0x12cb70feu); f_12cbb140();
  /* 12cb70fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7101 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cb7104 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb7107 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb710a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb710d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb7110 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cb7113 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb7116 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb711a jl 0x12cb713e */
  if ((C.sf!=C.of)) goto L_12cb713e;
  /* 12cb711c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb711f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb7121 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12cb7124 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb7126 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb712c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12cb712f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb7132 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb7134 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7137 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb713a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cb713c jmp 0x12cb714f */
  goto L_12cb714f;
L_12cb713e:;
  /* 12cb713e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb7141 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7142 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb7144 call 0x12cbaec0 */
  push32(0x12cb7149u); f_12cbaec0();
  /* 12cb7149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb714c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12cb714f:;
  /* 12cb714f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb7152 pop edi */
  EDI = (pop32());
  /* 12cb7153 pop esi */
  ESI = (pop32());
  /* 12cb7154 pop ebx */
  EBX = (pop32());
  /* 12cb7155 mov esp, ebp */
  ESP = (EBP);
  /* 12cb7157 pop ebp */
  EBP = (pop32());
  /* 12cb7158 ret  */
  ESPCHK(0x12cb7060u, _esp0);
  ESP += 4; return;
}

/* FUN_10007160 @ 0x12cb7160 (7 bytes, 3 insns) */
void f_12cb7160(void) {
  FTRACE(0x12cb7160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7160 push edi */
  push32((uint32_t)(EDI));
  /* 12cb7161 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12cb7165 jmp 0x12cb71d1 */
  jmp_ind(0x12cb71d1u); return;
}

/* FUN_10007170 @ 0x12cb7170 (224 bytes, 84 insns) */
void f_12cb7170(void) {
  FTRACE(0x12cb7170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7170 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cb7174 push edi */
  push32((uint32_t)(EDI));
  /* 12cb7175 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cb717b je 0x12cb718c */
  if (C.zf) goto L_12cb718c;
L_12cb717d:;
  /* 12cb717d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12cb717f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cb7180 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cb7182 je 0x12cb71bf */
  if (C.zf) goto L_12cb71bf;
  /* 12cb7184 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cb718a jne 0x12cb717d */
  if (!C.zf) goto L_12cb717d;
L_12cb718c:;
  /* 12cb718c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cb718e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12cb7193 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7195 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7198 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb719a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb719d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12cb71a2 je 0x12cb718c */
  if (C.zf) goto L_12cb718c;
  /* 12cb71a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cb71a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cb71a9 je 0x12cb71ce */
  if (C.zf) goto L_12cb71ce;
  /* 12cb71ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12cb71ad je 0x12cb71c9 */
  if (C.zf) goto L_12cb71c9;
  /* 12cb71af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12cb71b4 je 0x12cb71c4 */
  if (C.zf) goto L_12cb71c4;
  /* 12cb71b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12cb71bb je 0x12cb71bf */
  if (C.zf) goto L_12cb71bf;
  /* 12cb71bd jmp 0x12cb718c */
  goto L_12cb718c;
L_12cb71bf:;
  /* 12cb71bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12cb71c2 jmp 0x12cb71d1 */
  goto L_12cb71d1;
L_12cb71c4:;
  /* 12cb71c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12cb71c7 jmp 0x12cb71d1 */
  goto L_12cb71d1;
L_12cb71c9:;
  /* 12cb71c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12cb71cc jmp 0x12cb71d1 */
  goto L_12cb71d1;
L_12cb71ce:;
  /* 12cb71ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12cb71d1:;
  /* 12cb71d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cb71d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cb71db je 0x12cb71f6 */
  if (C.zf) goto L_12cb71f6;
L_12cb71dd:;
  /* 12cb71dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cb71df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cb71e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12cb71e2 je 0x12cb7248 */
  if (C.zf) goto L_12cb7248;
  /* 12cb71e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12cb71e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cb71e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12cb71ed jne 0x12cb71dd */
  if (!C.zf) goto L_12cb71dd;
  /* 12cb71ef jmp 0x12cb71f6 */
  goto L_12cb71f6;
L_12cb71f1:;
  /* 12cb71f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cb71f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cb71f6:;
  /* 12cb71f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12cb71fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cb71fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb71ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7202 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7204 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb7206 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7209 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12cb720e je 0x12cb71f1 */
  if (C.zf) goto L_12cb71f1;
  /* 12cb7210 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12cb7212 je 0x12cb7248 */
  if (C.zf) goto L_12cb7248;
  /* 12cb7214 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12cb7216 je 0x12cb723f */
  if (C.zf) goto L_12cb723f;
  /* 12cb7218 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12cb721e je 0x12cb7232 */
  if (C.zf) goto L_12cb7232;
  /* 12cb7220 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12cb7226 je 0x12cb722a */
  if (C.zf) goto L_12cb722a;
  /* 12cb7228 jmp 0x12cb71f1 */
  goto L_12cb71f1;
L_12cb722a:;
  /* 12cb722a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cb722c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cb7230 pop edi */
  EDI = (pop32());
  /* 12cb7231 ret  */
  ESPCHK(0x12cb7170u, _esp0);
  ESP += 4; return;
L_12cb7232:;
  /* 12cb7232 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12cb7235 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cb7239 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12cb723d pop edi */
  EDI = (pop32());
  /* 12cb723e ret  */
  ESPCHK(0x12cb7170u, _esp0);
  ESP += 4; return;
L_12cb723f:;
  /* 12cb723f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12cb7242 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cb7246 pop edi */
  EDI = (pop32());
  /* 12cb7247 ret  */
  ESPCHK(0x12cb7170u, _esp0);
  ESP += 4; return;
L_12cb7248:;
  /* 12cb7248 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12cb724a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cb724e pop edi */
  EDI = (pop32());
  /* 12cb724f ret  */
  ESPCHK(0x12cb7170u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x12cb7250 (243 bytes, 91 insns) */
void f_12cb7250(void) {
  FTRACE(0x12cb7250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7250 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7251 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7253 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7256 push ebx */
  push32((uint32_t)(EBX));
  /* 12cb7257 push esi */
  push32((uint32_t)(ESI));
  /* 12cb7258 push edi */
  push32((uint32_t)(EDI));
  /* 12cb7259 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12cb725c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cb725f:;
  /* 12cb725f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7263 jne 0x12cb7283 */
  if (!C.zf) goto L_12cb7283;
  /* 12cb7265 push 0x12cdc248 */
  push32((uint32_t)(0x12cdc248u));
  /* 12cb726a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb726c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12cb726e push 0x12cdc258 */
  push32((uint32_t)(0x12cdc258u));
  /* 12cb7273 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb7275 call 0x12cb3270 */
  push32(0x12cb727au); f_12cb3270();
  /* 12cb727a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb727d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7280 jne 0x12cb7283 */
  if (!C.zf) goto L_12cb7283;
  /* 12cb7282 int3  */
  x86_unimpl("int3 @ 0x12cb7282");
L_12cb7283:;
  /* 12cb7283 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb7285 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb7287 jne 0x12cb725f */
  if (!C.zf) goto L_12cb725f;
L_12cb7289:;
  /* 12cb7289 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb728d jne 0x12cb72ad */
  if (!C.zf) goto L_12cb72ad;
  /* 12cb728f push 0x12cdc22c */
  push32((uint32_t)(0x12cdc22cu));
  /* 12cb7294 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb7296 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12cb7298 push 0x12cdc258 */
  push32((uint32_t)(0x12cdc258u));
  /* 12cb729d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb729f call 0x12cb3270 */
  push32(0x12cb72a4u); f_12cb3270();
  /* 12cb72a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb72a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb72aa jne 0x12cb72ad */
  if (!C.zf) goto L_12cb72ad;
  /* 12cb72ac int3  */
  x86_unimpl("int3 @ 0x12cb72ac");
L_12cb72ad:;
  /* 12cb72ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb72af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb72b1 jne 0x12cb7289 */
  if (!C.zf) goto L_12cb7289;
  /* 12cb72b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb72b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12cb72bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb72c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb72c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cb72c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb72c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb72cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cb72ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb72d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb72d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12cb72d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cb72da push ecx */
  push32((uint32_t)(ECX));
  /* 12cb72db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb72de push edx */
  push32((uint32_t)(EDX));
  /* 12cb72df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb72e2 push eax */
  push32((uint32_t)(EAX));
  /* 12cb72e3 call 0x12cbb140 */
  push32(0x12cb72e8u); f_12cbb140();
  /* 12cb72e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb72eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cb72ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb72f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb72f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb72f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb72fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cb72fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb7300 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7304 jl 0x12cb7328 */
  if ((C.sf!=C.of)) goto L_12cb7328;
  /* 12cb7306 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb7309 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb730b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cb730e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb7310 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb7316 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cb7319 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb731c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb731e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7321 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb7324 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cb7326 jmp 0x12cb7339 */
  goto L_12cb7339;
L_12cb7328:;
  /* 12cb7328 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb732b push edx */
  push32((uint32_t)(EDX));
  /* 12cb732c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb732e call 0x12cbaec0 */
  push32(0x12cb7333u); f_12cbaec0();
  /* 12cb7333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7336 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12cb7339:;
  /* 12cb7339 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb733c pop edi */
  EDI = (pop32());
  /* 12cb733d pop esi */
  ESI = (pop32());
  /* 12cb733e pop ebx */
  EBX = (pop32());
  /* 12cb733f mov esp, ebp */
  ESP = (EBP);
  /* 12cb7341 pop ebp */
  EBP = (pop32());
  /* 12cb7342 ret  */
  ESPCHK(0x12cb7250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x12cb7350 (47 bytes, 17 insns) */
void f_12cb7350(void) {
  FTRACE(0x12cb7350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7350 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7351 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7356 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12cb735a jb 0x12cb7370 */
  if (C.cf) goto L_12cb7370;
L_12cb735c:;
  /* 12cb735c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7362 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7367 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12cb7369 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb736e jae 0x12cb735c */
  if (!C.cf) goto L_12cb735c;
L_12cb7370:;
  /* 12cb7370 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7372 mov eax, esp */
  EAX = (ESP);
  /* 12cb7374 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12cb7376 mov esp, ecx */
  ESP = (ECX);
  /* 12cb7378 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb737a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb737d push eax */
  push32((uint32_t)(EAX));
  /* 12cb737e ret  */
  ESPCHK(0x12cb7350u, _esp0);
  ESP += 4; return;
}

/* FUN_10007380 @ 0x12cb7380 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12cb7380(void) {
  FTRACE(0x12cb7380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7380 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7381 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7386 push esi */
  push32((uint32_t)(ESI));
  /* 12cb7387 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb738b je 0x12cb7393 */
  if (C.zf) goto L_12cb7393;
  /* 12cb738d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7391 jne 0x12cb7398 */
  if (!C.zf) goto L_12cb7398;
L_12cb7393:;
  /* 12cb7393 jmp 0x12cb7568 */
  goto L_12cb7568;
L_12cb7398:;
  /* 12cb7398 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb739c je 0x12cb73b4 */
  if (C.zf) goto L_12cb73b4;
  /* 12cb739e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb73a2 je 0x12cb73b4 */
  if (C.zf) goto L_12cb73b4;
  /* 12cb73a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb73a8 je 0x12cb73b4 */
  if (C.zf) goto L_12cb73b4;
  /* 12cb73aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb73ae jne 0x12cb7491 */
  if (!C.zf) goto L_12cb7491;
L_12cb73b4:;
  /* 12cb73b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb73b6 call 0x12cb7bb0 */
  push32(0x12cb73bbu); f_12cb7bb0();
  /* 12cb73bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb73be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb73c2 je 0x12cb73ca */
  if (C.zf) goto L_12cb73ca;
  /* 12cb73c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb73c8 jne 0x12cb740f */
  if (!C.zf) goto L_12cb740f;
L_12cb73ca:;
  /* 12cb73ca cmp dword ptr [0x12ce068c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce068c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb73d1 jne 0x12cb740f */
  if (!C.zf) goto L_12cb740f;
  /* 12cb73d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb73d5 push 0x12cb75b0 */
  push32((uint32_t)(0x12cb75b0u));
  /* 12cb73da call dword ptr [0x12ce338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce338c))), 0x12cb73e0u);
  /* 12cb73e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb73e3 jne 0x12cb73f1 */
  if (!C.zf) goto L_12cb73f1;
  /* 12cb73e5 mov dword ptr [0x12ce068c], 1 */
  w32((uint32_t)(0x12ce068c), (0x1u));
  /* 12cb73ef jmp 0x12cb740f */
  goto L_12cb740f;
L_12cb73f1:;
  /* 12cb73f1 call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cb73f7u);
  /* 12cb73f7 mov esi, eax */
  ESI = (EAX);
  /* 12cb73f9 call 0x12cbc090 */
  push32(0x12cb73feu); f_12cbc090();
  /* 12cb73fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12cb7400 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb7402 call 0x12cb7c50 */
  push32(0x12cb7407u); f_12cb7c50();
  /* 12cb7407 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb740a jmp 0x12cb7568 */
  goto L_12cb7568;
L_12cb740f:;
  /* 12cb740f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7412 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb7415 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7418 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb741b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cb741e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7422 ja 0x12cb7482 */
  if ((!C.cf&&!C.zf)) goto L_12cb7482;
  /* 12cb7424 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7427 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb7429 mov dl, byte ptr [eax + 0x12cb758f] */
  DL = (r8((uint32_t)(EAX + 0x12cb758f)));
  /* 12cb742f jmp dword ptr [edx*4 + 0x12cb757b] */
  switch (EDX) {
    case 0: goto L_12cb7436;
    case 1: goto L_12cb7470;
    case 2: goto L_12cb744a;
    case 3: goto L_12cb745d;
    case 4: goto L_12cb7482;
    default: x86_unimpl("switch@0x12cb742f out of table"); return;
  }
L_12cb7436:;
  /* 12cb7436 mov ecx, dword ptr [0x12ce067c] */
  ECX = (r32((uint32_t)(0x12ce067c)));
  /* 12cb743c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cb743f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7442 mov dword ptr [0x12ce067c], edx */
  w32((uint32_t)(0x12ce067c), (EDX));
  /* 12cb7448 jmp 0x12cb7482 */
  goto L_12cb7482;
L_12cb744a:;
  /* 12cb744a mov eax, dword ptr [0x12ce0680] */
  EAX = (r32((uint32_t)(0x12ce0680)));
  /* 12cb744f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb7452 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7455 mov dword ptr [0x12ce0680], ecx */
  w32((uint32_t)(0x12ce0680), (ECX));
  /* 12cb745b jmp 0x12cb7482 */
  goto L_12cb7482;
L_12cb745d:;
  /* 12cb745d mov edx, dword ptr [0x12ce0684] */
  EDX = (r32((uint32_t)(0x12ce0684)));
  /* 12cb7463 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cb7466 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7469 mov dword ptr [0x12ce0684], eax */
  w32((uint32_t)(0x12ce0684), (EAX));
  /* 12cb746e jmp 0x12cb7482 */
  goto L_12cb7482;
L_12cb7470:;
  /* 12cb7470 mov ecx, dword ptr [0x12ce0688] */
  ECX = (r32((uint32_t)(0x12ce0688)));
  /* 12cb7476 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cb7479 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb747c mov dword ptr [0x12ce0688], edx */
  w32((uint32_t)(0x12ce0688), (EDX));
L_12cb7482:;
  /* 12cb7482 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb7484 call 0x12cb7c50 */
  push32(0x12cb7489u); f_12cb7c50();
  /* 12cb7489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb748c jmp 0x12cb7563 */
  goto L_12cb7563;
L_12cb7491:;
  /* 12cb7491 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7495 je 0x12cb74a8 */
  if (C.zf) goto L_12cb74a8;
  /* 12cb7497 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb749b je 0x12cb74a8 */
  if (C.zf) goto L_12cb74a8;
  /* 12cb749d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb74a1 je 0x12cb74a8 */
  if (C.zf) goto L_12cb74a8;
  /* 12cb74a3 jmp 0x12cb7568 */
  goto L_12cb7568;
L_12cb74a8:;
  /* 12cb74a8 call 0x12cb3bf0 */
  push32(0x12cb74adu); f_12cb3bf0();
  /* 12cb74ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb74b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb74b3 cmp dword ptr [eax + 0x50], 0x12cdec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12cdec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb74ba jne 0x12cb7505 */
  if (!C.zf) goto L_12cb7505;
  /* 12cb74bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12cb74c1 push 0x12cdc264 */
  push32((uint32_t)(0x12cdc264u));
  /* 12cb74c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb74c8 mov ecx, dword ptr [0x12cdec80] */
  ECX = (r32((uint32_t)(0x12cdec80)));
  /* 12cb74ce push ecx */
  push32((uint32_t)(ECX));
  /* 12cb74cf call 0x12cb41b0 */
  push32(0x12cb74d4u); f_12cb41b0();
  /* 12cb74d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb74d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb74da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12cb74dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb74e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb74e4 je 0x12cb7503 */
  if (C.zf) goto L_12cb7503;
  /* 12cb74e6 mov ecx, dword ptr [0x12cdec80] */
  ECX = (r32((uint32_t)(0x12cdec80)));
  /* 12cb74ec push ecx */
  push32((uint32_t)(ECX));
  /* 12cb74ed push 0x12cdec00 */
  push32((uint32_t)(0x12cdec00u));
  /* 12cb74f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb74f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12cb74f8 push eax */
  push32((uint32_t)(EAX));
  /* 12cb74f9 call 0x12cbaa90 */
  push32(0x12cb74feu); f_12cbaa90();
  /* 12cb74fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7501 jmp 0x12cb7505 */
  goto L_12cb7505;
L_12cb7503:;
  /* 12cb7503 jmp 0x12cb7568 */
  goto L_12cb7568;
L_12cb7505:;
  /* 12cb7505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7508 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cb750b push edx */
  push32((uint32_t)(EDX));
  /* 12cb750c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb750f push eax */
  push32((uint32_t)(EAX));
  /* 12cb7510 call 0x12cb7890 */
  push32(0x12cb7515u); f_12cb7890();
  /* 12cb7515 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7518 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb751b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb751f jne 0x12cb7523 */
  if (!C.zf) goto L_12cb7523;
  /* 12cb7521 jmp 0x12cb7568 */
  goto L_12cb7568;
L_12cb7523:;
  /* 12cb7523 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7526 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb7529 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cb752c:;
  /* 12cb752c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb752f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb7532 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7535 jne 0x12cb7563 */
  if (!C.zf) goto L_12cb7563;
  /* 12cb7537 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb753a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb753d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cb7540 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7543 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7546 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cb7549 mov edx, dword ptr [0x12cdec84] */
  EDX = (r32((uint32_t)(0x12cdec84)));
  /* 12cb754f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb7552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7555 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12cb7558 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb755a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb755d jb 0x12cb7561 */
  if (C.cf) goto L_12cb7561;
  /* 12cb755f jmp 0x12cb7563 */
  goto L_12cb7563;
L_12cb7561:;
  /* 12cb7561 jmp 0x12cb752c */
  goto L_12cb752c;
L_12cb7563:;
  /* 12cb7563 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb7566 jmp 0x12cb7576 */
  goto L_12cb7576;
L_12cb7568:;
  /* 12cb7568 call 0x12cbc080 */
  push32(0x12cb756du); f_12cbc080();
  /* 12cb756d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12cb7573 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cb7576:;
  /* 12cb7576 pop esi */
  ESI = (pop32());
  /* 12cb7577 mov esp, ebp */
  ESP = (EBP);
  /* 12cb7579 pop ebp */
  EBP = (pop32());
  /* 12cb757a ret  */
  ESPCHK(0x12cb7380u, _esp0);
  ESP += 4; return;
}

/* FUN_100075b0 @ 0x12cb75b0 (146 bytes, 45 insns) */
void f_12cb75b0(void) {
  FTRACE(0x12cb75b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb75b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb75b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb75b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb75b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb75b8 call 0x12cb7bb0 */
  push32(0x12cb75bdu); f_12cb7bb0();
  /* 12cb75bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb75c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb75c4 jne 0x12cb75de */
  if (!C.zf) goto L_12cb75de;
  /* 12cb75c6 mov dword ptr [ebp - 8], 0x12ce067c */
  w32((uint32_t)(EBP + -0x8), (0x12ce067cu));
  /* 12cb75cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb75d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb75d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cb75d5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12cb75dc jmp 0x12cb75f4 */
  goto L_12cb75f4;
L_12cb75de:;
  /* 12cb75de mov dword ptr [ebp - 8], 0x12ce0680 */
  w32((uint32_t)(EBP + -0x8), (0x12ce0680u));
  /* 12cb75e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb75e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb75ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb75ed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12cb75f4:;
  /* 12cb75f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb75f8 jne 0x12cb7608 */
  if (!C.zf) goto L_12cb7608;
  /* 12cb75fa push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb75fc call 0x12cb7c50 */
  push32(0x12cb7601u); f_12cb7c50();
  /* 12cb7601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7606 jmp 0x12cb763c */
  goto L_12cb763c;
L_12cb7608:;
  /* 12cb7608 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb760c je 0x12cb762d */
  if (C.zf) goto L_12cb762d;
  /* 12cb760e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7611 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12cb7617 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb7619 call 0x12cb7c50 */
  push32(0x12cb761eu); f_12cb7c50();
  /* 12cb761e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7621 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7624 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7625 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12cb7628u);
  /* 12cb7628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb762b jmp 0x12cb7637 */
  goto L_12cb7637;
L_12cb762d:;
  /* 12cb762d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb762f call 0x12cb7c50 */
  push32(0x12cb7634u); f_12cb7c50();
  /* 12cb7634 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7637:;
  /* 12cb7637 mov eax, 1 */
  EAX = (0x1u);
L_12cb763c:;
  /* 12cb763c mov esp, ebp */
  ESP = (EBP);
  /* 12cb763e pop ebp */
  EBP = (pop32());
  /* 12cb763f ret 4 */
  ESPCHK(0x12cb75b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007650 @ 0x12cb7650 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12cb7650(void) {
  FTRACE(0x12cb7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7650 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7651 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7653 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7656 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cb765d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7660 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cb7663 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb7666 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7669 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cb766c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7670 ja 0x12cb771e */
  if ((!C.cf&&!C.zf)) goto L_12cb771e;
  /* 12cb7676 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb7679 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb767b mov dl, byte ptr [eax + 0x12cb7872] */
  DL = (r8((uint32_t)(EAX + 0x12cb7872)));
  /* 12cb7681 jmp dword ptr [edx*4 + 0x12cb785a] */
  switch (EDX) {
    case 0: goto L_12cb7688;
    case 1: goto L_12cb76f3;
    case 2: goto L_12cb76d9;
    case 3: goto L_12cb76a5;
    case 4: goto L_12cb76bf;
    case 5: goto L_12cb771e;
    default: x86_unimpl("switch@0x12cb7681 out of table"); return;
  }
L_12cb7688:;
  /* 12cb7688 mov dword ptr [ebp - 0x18], 0x12ce067c */
  w32((uint32_t)(EBP + -0x18), (0x12ce067cu));
  /* 12cb768f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb7692 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb7694 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cb7697 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb769a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb769d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb76a0 jmp 0x12cb7726 */
  goto L_12cb7726;
L_12cb76a5:;
  /* 12cb76a5 mov dword ptr [ebp - 0x18], 0x12ce0680 */
  w32((uint32_t)(EBP + -0x18), (0x12ce0680u));
  /* 12cb76ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb76af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb76b1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cb76b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb76b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb76ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb76bd jmp 0x12cb7726 */
  goto L_12cb7726;
L_12cb76bf:;
  /* 12cb76bf mov dword ptr [ebp - 0x18], 0x12ce0684 */
  w32((uint32_t)(EBP + -0x18), (0x12ce0684u));
  /* 12cb76c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb76c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb76cb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cb76ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb76d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb76d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb76d7 jmp 0x12cb7726 */
  goto L_12cb7726;
L_12cb76d9:;
  /* 12cb76d9 mov dword ptr [ebp - 0x18], 0x12ce0688 */
  w32((uint32_t)(EBP + -0x18), (0x12ce0688u));
  /* 12cb76e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb76e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb76e5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cb76e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb76eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb76ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb76f1 jmp 0x12cb7726 */
  goto L_12cb7726;
L_12cb76f3:;
  /* 12cb76f3 call 0x12cb3bf0 */
  push32(0x12cb76f8u); f_12cb3bf0();
  /* 12cb76f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb76fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb76fe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cb7701 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7705 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7706 call 0x12cb7890 */
  push32(0x12cb770bu); f_12cb7890();
  /* 12cb770b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb770e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7711 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb7714 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb7717 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb7719 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cb771c jmp 0x12cb7726 */
  goto L_12cb7726;
L_12cb771e:;
  /* 12cb771e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7721 jmp 0x12cb7856 */
  goto L_12cb7856;
L_12cb7726:;
  /* 12cb7726 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb772a je 0x12cb7736 */
  if (C.zf) goto L_12cb7736;
  /* 12cb772c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb772e call 0x12cb7bb0 */
  push32(0x12cb7733u); f_12cb7bb0();
  /* 12cb7733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7736:;
  /* 12cb7736 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb773a jne 0x12cb7753 */
  if (!C.zf) goto L_12cb7753;
  /* 12cb773c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7740 je 0x12cb774c */
  if (C.zf) goto L_12cb774c;
  /* 12cb7742 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb7744 call 0x12cb7c50 */
  push32(0x12cb7749u); f_12cb7c50();
  /* 12cb7749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb774c:;
  /* 12cb774c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb774e jmp 0x12cb7856 */
  goto L_12cb7856;
L_12cb7753:;
  /* 12cb7753 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7757 jne 0x12cb7770 */
  if (!C.zf) goto L_12cb7770;
  /* 12cb7759 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb775d je 0x12cb7769 */
  if (C.zf) goto L_12cb7769;
  /* 12cb775f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb7761 call 0x12cb7c50 */
  push32(0x12cb7766u); f_12cb7c50();
  /* 12cb7766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7769:;
  /* 12cb7769 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cb776b call 0x12cb3970 */
  push32(0x12cb7770u); f_12cb3970();
L_12cb7770:;
  /* 12cb7770 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7774 je 0x12cb7782 */
  if (C.zf) goto L_12cb7782;
  /* 12cb7776 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb777a je 0x12cb7782 */
  if (C.zf) goto L_12cb7782;
  /* 12cb777c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7780 jne 0x12cb77ae */
  if (!C.zf) goto L_12cb77ae;
L_12cb7782:;
  /* 12cb7782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7785 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12cb7788 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cb778b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb778e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12cb7795 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7799 jne 0x12cb77ae */
  if (!C.zf) goto L_12cb77ae;
  /* 12cb779b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb779e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12cb77a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cb77a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb77a7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12cb77ae:;
  /* 12cb77ae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb77b2 jne 0x12cb77f0 */
  if (!C.zf) goto L_12cb77f0;
  /* 12cb77b4 mov eax, dword ptr [0x12cdec78] */
  EAX = (r32((uint32_t)(0x12cdec78)));
  /* 12cb77b9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb77bc jmp 0x12cb77c7 */
  goto L_12cb77c7;
L_12cb77be:;
  /* 12cb77be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb77c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb77c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cb77c7:;
  /* 12cb77c7 mov edx, dword ptr [0x12cdec78] */
  EDX = (r32((uint32_t)(0x12cdec78)));
  /* 12cb77cd add edx, dword ptr [0x12cdec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12cdec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb77d3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb77d6 jge 0x12cb77ee */
  if ((C.sf==C.of)) goto L_12cb77ee;
  /* 12cb77d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb77db imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb77de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb77e1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cb77e4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12cb77ec jmp 0x12cb77be */
  goto L_12cb77be;
L_12cb77ee:;
  /* 12cb77ee jmp 0x12cb77f9 */
  goto L_12cb77f9;
L_12cb77f0:;
  /* 12cb77f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb77f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12cb77f9:;
  /* 12cb77f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb77fd je 0x12cb7809 */
  if (C.zf) goto L_12cb7809;
  /* 12cb77ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12cb7801 call 0x12cb7c50 */
  push32(0x12cb7806u); f_12cb7c50();
  /* 12cb7806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7809:;
  /* 12cb7809 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb780d jne 0x12cb7820 */
  if (!C.zf) goto L_12cb7820;
  /* 12cb780f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7812 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12cb7815 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7816 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cb7818 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12cb781bu);
  /* 12cb781b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb781e jmp 0x12cb782a */
  goto L_12cb782a;
L_12cb7820:;
  /* 12cb7820 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7823 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7824 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12cb7827u);
  /* 12cb7827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb782a:;
  /* 12cb782a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb782e je 0x12cb783c */
  if (C.zf) goto L_12cb783c;
  /* 12cb7830 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7834 je 0x12cb783c */
  if (C.zf) goto L_12cb783c;
  /* 12cb7836 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb783a jne 0x12cb7854 */
  if (!C.zf) goto L_12cb7854;
L_12cb783c:;
  /* 12cb783c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb783f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb7842 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12cb7845 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7849 jne 0x12cb7854 */
  if (!C.zf) goto L_12cb7854;
  /* 12cb784b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb784e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7851 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12cb7854:;
  /* 12cb7854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb7856:;
  /* 12cb7856 mov esp, ebp */
  ESP = (EBP);
  /* 12cb7858 pop ebp */
  EBP = (pop32());
  /* 12cb7859 ret  */
  ESPCHK(0x12cb7650u, _esp0);
  ESP += 4; return;
}

/* FUN_10007890 @ 0x12cb7890 (91 bytes, 35 insns) */
void f_12cb7890(void) {
  FTRACE(0x12cb7890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7890 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7891 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7893 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7894 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7897 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb789a:;
  /* 12cb789a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb789d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb78a0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb78a3 je 0x12cb78c3 */
  if (C.zf) goto L_12cb78c3;
  /* 12cb78a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb78a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb78ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb78ae mov ecx, dword ptr [0x12cdec84] */
  ECX = (r32((uint32_t)(0x12cdec84)));
  /* 12cb78b4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb78b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb78ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb78bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb78bf jae 0x12cb78c3 */
  if (!C.cf) goto L_12cb78c3;
  /* 12cb78c1 jmp 0x12cb789a */
  goto L_12cb789a;
L_12cb78c3:;
  /* 12cb78c3 mov eax, dword ptr [0x12cdec84] */
  EAX = (r32((uint32_t)(0x12cdec84)));
  /* 12cb78c8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb78cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb78ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb78d0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb78d3 jae 0x12cb78e5 */
  if (!C.cf) goto L_12cb78e5;
  /* 12cb78d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb78d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb78db cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb78de jne 0x12cb78e5 */
  if (!C.zf) goto L_12cb78e5;
  /* 12cb78e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb78e3 jmp 0x12cb78e7 */
  goto L_12cb78e7;
L_12cb78e5:;
  /* 12cb78e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb78e7:;
  /* 12cb78e7 mov esp, ebp */
  ESP = (EBP);
  /* 12cb78e9 pop ebp */
  EBP = (pop32());
  /* 12cb78ea ret  */
  ESPCHK(0x12cb7890u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x12cb78f0 (13 bytes, 6 insns) */
void f_12cb78f0(void) {
  FTRACE(0x12cb78f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb78f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb78f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb78f3 call 0x12cb3bf0 */
  push32(0x12cb78f8u); f_12cb3bf0();
  /* 12cb78f8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb78fb pop ebp */
  EBP = (pop32());
  /* 12cb78fc ret  */
  ESPCHK(0x12cb78f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x12cb7900 (13 bytes, 6 insns) */
void f_12cb7900(void) {
  FTRACE(0x12cb7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7900 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7901 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7903 call 0x12cb3bf0 */
  push32(0x12cb7908u); f_12cb3bf0();
  /* 12cb7908 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb790b pop ebp */
  EBP = (pop32());
  /* 12cb790c ret  */
  ESPCHK(0x12cb7900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x12cb7910 (187 bytes, 54 insns) */
void f_12cb7910(void) {
  FTRACE(0x12cb7910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7910 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7911 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7913 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7916 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cb791d cmp dword ptr [0x12ce0690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7924 jne 0x12cb7983 */
  if (!C.zf) goto L_12cb7983;
  /* 12cb7926 push 0x12cdb690 */
  push32((uint32_t)(0x12cdb690u));
  /* 12cb792b call dword ptr [0x12ce3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3318))), 0x12cb7931u);
  /* 12cb7931 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb7934 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7938 je 0x12cb7957 */
  if (C.zf) goto L_12cb7957;
  /* 12cb793a push 0x12cdc294 */
  push32((uint32_t)(0x12cdc294u));
  /* 12cb793f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7942 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7943 call dword ptr [0x12ce3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3314))), 0x12cb7949u);
  /* 12cb7949 mov dword ptr [0x12ce0690], eax */
  w32((uint32_t)(0x12ce0690), (EAX));
  /* 12cb794e cmp dword ptr [0x12ce0690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7955 jne 0x12cb795b */
  if (!C.zf) goto L_12cb795b;
L_12cb7957:;
  /* 12cb7957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7959 jmp 0x12cb79c7 */
  goto L_12cb79c7;
L_12cb795b:;
  /* 12cb795b push 0x12cdc284 */
  push32((uint32_t)(0x12cdc284u));
  /* 12cb7960 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7963 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7964 call dword ptr [0x12ce3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3314))), 0x12cb796au);
  /* 12cb796a mov dword ptr [0x12ce0694], eax */
  w32((uint32_t)(0x12ce0694), (EAX));
  /* 12cb796f push 0x12cdc270 */
  push32((uint32_t)(0x12cdc270u));
  /* 12cb7974 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7977 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7978 call dword ptr [0x12ce3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3314))), 0x12cb797eu);
  /* 12cb797e mov dword ptr [0x12ce0698], eax */
  w32((uint32_t)(0x12ce0698), (EAX));
L_12cb7983:;
  /* 12cb7983 cmp dword ptr [0x12ce0694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb798a je 0x12cb7995 */
  if (C.zf) goto L_12cb7995;
  /* 12cb798c call dword ptr [0x12ce0694] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce0694))), 0x12cb7992u);
  /* 12cb7992 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb7995:;
  /* 12cb7995 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7999 je 0x12cb79b1 */
  if (C.zf) goto L_12cb79b1;
  /* 12cb799b cmp dword ptr [0x12ce0698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb79a2 je 0x12cb79b1 */
  if (C.zf) goto L_12cb79b1;
  /* 12cb79a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb79a7 push eax */
  push32((uint32_t)(EAX));
  /* 12cb79a8 call dword ptr [0x12ce0698] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce0698))), 0x12cb79aeu);
  /* 12cb79ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb79b1:;
  /* 12cb79b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb79b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb79b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb79b8 push edx */
  push32((uint32_t)(EDX));
  /* 12cb79b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb79bc push eax */
  push32((uint32_t)(EAX));
  /* 12cb79bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb79c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb79c1 call dword ptr [0x12ce0690] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce0690))), 0x12cb79c7u);
L_12cb79c7:;
  /* 12cb79c7 mov esp, ebp */
  ESP = (EBP);
  /* 12cb79c9 pop ebp */
  EBP = (pop32());
  /* 12cb79ca ret  */
  ESPCHK(0x12cb7910u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12cb79d0 (254 bytes, 109 insns) */
void f_12cb79d0(void) {
  FTRACE(0x12cb79d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb79d0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cb79d4 push edi */
  push32((uint32_t)(EDI));
  /* 12cb79d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb79d7 je 0x12cb7a53 */
  if (C.zf) goto L_12cb7a53;
  /* 12cb79d9 push esi */
  push32((uint32_t)(ESI));
  /* 12cb79da push ebx */
  push32((uint32_t)(EBX));
  /* 12cb79db mov ebx, ecx */
  EBX = (ECX);
  /* 12cb79dd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12cb79e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12cb79e7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12cb79eb jne 0x12cb79f4 */
  if (!C.zf) goto L_12cb79f4;
  /* 12cb79ed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cb79f0 jne 0x12cb7a61 */
  if (!C.zf) goto L_12cb7a61;
  /* 12cb79f2 jmp 0x12cb7a15 */
  goto L_12cb7a15;
L_12cb79f4:;
  /* 12cb79f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cb79f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cb79f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cb79f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cb79fa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cb79fb je 0x12cb7a22 */
  if (C.zf) goto L_12cb7a22;
  /* 12cb79fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cb79ff je 0x12cb7a2a */
  if (C.zf) goto L_12cb7a2a;
  /* 12cb7a01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12cb7a07 jne 0x12cb79f4 */
  if (!C.zf) goto L_12cb79f4;
  /* 12cb7a09 mov ebx, ecx */
  EBX = (ECX);
  /* 12cb7a0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cb7a0e jne 0x12cb7a61 */
  if (!C.zf) goto L_12cb7a61;
L_12cb7a10:;
  /* 12cb7a10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12cb7a13 je 0x12cb7a22 */
  if (C.zf) goto L_12cb7a22;
L_12cb7a15:;
  /* 12cb7a15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cb7a17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cb7a18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cb7a1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cb7a1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cb7a1d je 0x12cb7a4e */
  if (C.zf) goto L_12cb7a4e;
  /* 12cb7a1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12cb7a20 jne 0x12cb7a15 */
  if (!C.zf) goto L_12cb7a15;
L_12cb7a22:;
  /* 12cb7a22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cb7a26 pop ebx */
  EBX = (pop32());
  /* 12cb7a27 pop esi */
  ESI = (pop32());
  /* 12cb7a28 pop edi */
  EDI = (pop32());
  /* 12cb7a29 ret  */
  ESPCHK(0x12cb79d0u, _esp0);
  ESP += 4; return;
L_12cb7a2a:;
  /* 12cb7a2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cb7a30 je 0x12cb7a44 */
  if (C.zf) goto L_12cb7a44;
L_12cb7a32:;
  /* 12cb7a32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cb7a34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cb7a35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cb7a36 je 0x12cb7ac6 */
  if (C.zf) goto L_12cb7ac6;
  /* 12cb7a3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cb7a42 jne 0x12cb7a32 */
  if (!C.zf) goto L_12cb7a32;
L_12cb7a44:;
  /* 12cb7a44 mov ebx, ecx */
  EBX = (ECX);
  /* 12cb7a46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cb7a49 jne 0x12cb7ab7 */
  if (!C.zf) goto L_12cb7ab7;
L_12cb7a4b:;
  /* 12cb7a4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cb7a4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12cb7a4e:;
  /* 12cb7a4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12cb7a4f jne 0x12cb7a4b */
  if (!C.zf) goto L_12cb7a4b;
  /* 12cb7a51 pop ebx */
  EBX = (pop32());
  /* 12cb7a52 pop esi */
  ESI = (pop32());
L_12cb7a53:;
  /* 12cb7a53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cb7a57 pop edi */
  EDI = (pop32());
  /* 12cb7a58 ret  */
  ESPCHK(0x12cb79d0u, _esp0);
  ESP += 4; return;
L_12cb7a59:;
  /* 12cb7a59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cb7a5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7a5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cb7a5f je 0x12cb7a10 */
  if (C.zf) goto L_12cb7a10;
L_12cb7a61:;
  /* 12cb7a61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12cb7a66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12cb7a68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7a6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7a6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7a6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12cb7a71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7a74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12cb7a79 je 0x12cb7a59 */
  if (C.zf) goto L_12cb7a59;
  /* 12cb7a7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12cb7a7d je 0x12cb7aab */
  if (C.zf) goto L_12cb7aab;
  /* 12cb7a7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12cb7a81 je 0x12cb7aa1 */
  if (C.zf) goto L_12cb7aa1;
  /* 12cb7a83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12cb7a89 je 0x12cb7a97 */
  if (C.zf) goto L_12cb7a97;
  /* 12cb7a8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12cb7a91 jne 0x12cb7a59 */
  if (!C.zf) goto L_12cb7a59;
  /* 12cb7a93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cb7a95 jmp 0x12cb7aaf */
  goto L_12cb7aaf;
L_12cb7a97:;
  /* 12cb7a97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb7a9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cb7a9f jmp 0x12cb7aaf */
  goto L_12cb7aaf;
L_12cb7aa1:;
  /* 12cb7aa1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb7aa7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12cb7aa9 jmp 0x12cb7aaf */
  goto L_12cb7aaf;
L_12cb7aab:;
  /* 12cb7aab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb7aad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12cb7aaf:;
  /* 12cb7aaf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7ab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7ab4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cb7ab5 je 0x12cb7ac1 */
  if (C.zf) goto L_12cb7ac1;
L_12cb7ab7:;
  /* 12cb7ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb7ab9:;
  /* 12cb7ab9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12cb7abb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7abe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cb7abf jne 0x12cb7ab9 */
  if (!C.zf) goto L_12cb7ab9;
L_12cb7ac1:;
  /* 12cb7ac1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12cb7ac4 jne 0x12cb7a4b */
  if (!C.zf) goto L_12cb7a4b;
L_12cb7ac6:;
  /* 12cb7ac6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cb7aca pop ebx */
  EBX = (pop32());
  /* 12cb7acb pop esi */
  ESI = (pop32());
  /* 12cb7acc pop edi */
  EDI = (pop32());
  /* 12cb7acd ret  */
  ESPCHK(0x12cb79d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x12cb7ad0 (55 bytes, 16 insns) */
void f_12cb7ad0(void) {
  FTRACE(0x12cb7ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7ad3 mov eax, dword ptr [0x12cdeb84] */
  EAX = (r32((uint32_t)(0x12cdeb84)));
  /* 12cb7ad8 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7ad9 call dword ptr [0x12ce3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3390))), 0x12cb7adfu);
  /* 12cb7adf mov ecx, dword ptr [0x12cdeb74] */
  ECX = (r32((uint32_t)(0x12cdeb74)));
  /* 12cb7ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7ae6 call dword ptr [0x12ce3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3390))), 0x12cb7aecu);
  /* 12cb7aec mov edx, dword ptr [0x12cdeb64] */
  EDX = (r32((uint32_t)(0x12cdeb64)));
  /* 12cb7af2 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7af3 call dword ptr [0x12ce3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3390))), 0x12cb7af9u);
  /* 12cb7af9 mov eax, dword ptr [0x12cdeb44] */
  EAX = (r32((uint32_t)(0x12cdeb44)));
  /* 12cb7afe push eax */
  push32((uint32_t)(EAX));
  /* 12cb7aff call dword ptr [0x12ce3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3390))), 0x12cb7b05u);
  /* 12cb7b05 pop ebp */
  EBP = (pop32());
  /* 12cb7b06 ret  */
  ESPCHK(0x12cb7ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x12cb7b10 (159 bytes, 47 insns) */
void f_12cb7b10(void) {
  FTRACE(0x12cb7b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7b11 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7b14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cb7b1b jmp 0x12cb7b26 */
  goto L_12cb7b26;
L_12cb7b1d:;
  /* 12cb7b1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7b20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7b23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb7b26:;
  /* 12cb7b26 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7b2a jge 0x12cb7b79 */
  if ((C.sf==C.of)) goto L_12cb7b79;
  /* 12cb7b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7b2f cmp dword ptr [ecx*4 + 0x12cdeb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12cdeb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7b37 je 0x12cb7b77 */
  if (C.zf) goto L_12cb7b77;
  /* 12cb7b39 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7b3d je 0x12cb7b77 */
  if (C.zf) goto L_12cb7b77;
  /* 12cb7b3f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7b43 je 0x12cb7b77 */
  if (C.zf) goto L_12cb7b77;
  /* 12cb7b45 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7b49 je 0x12cb7b77 */
  if (C.zf) goto L_12cb7b77;
  /* 12cb7b4b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7b4f je 0x12cb7b77 */
  if (C.zf) goto L_12cb7b77;
  /* 12cb7b51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7b54 mov eax, dword ptr [edx*4 + 0x12cdeb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12cdeb40)));
  /* 12cb7b5b push eax */
  push32((uint32_t)(EAX));
  /* 12cb7b5c call dword ptr [0x12ce3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3358))), 0x12cb7b62u);
  /* 12cb7b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb7b64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7b67 mov edx, dword ptr [ecx*4 + 0x12cdeb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdeb40)));
  /* 12cb7b6e push edx */
  push32((uint32_t)(EDX));
  /* 12cb7b6f call 0x12cb4c40 */
  push32(0x12cb7b74u); f_12cb4c40();
  /* 12cb7b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7b77:;
  /* 12cb7b77 jmp 0x12cb7b1d */
  goto L_12cb7b1d;
L_12cb7b79:;
  /* 12cb7b79 mov eax, dword ptr [0x12cdeb64] */
  EAX = (r32((uint32_t)(0x12cdeb64)));
  /* 12cb7b7e push eax */
  push32((uint32_t)(EAX));
  /* 12cb7b7f call dword ptr [0x12ce3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3358))), 0x12cb7b85u);
  /* 12cb7b85 mov ecx, dword ptr [0x12cdeb74] */
  ECX = (r32((uint32_t)(0x12cdeb74)));
  /* 12cb7b8b push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7b8c call dword ptr [0x12ce3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3358))), 0x12cb7b92u);
  /* 12cb7b92 mov edx, dword ptr [0x12cdeb84] */
  EDX = (r32((uint32_t)(0x12cdeb84)));
  /* 12cb7b98 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7b99 call dword ptr [0x12ce3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3358))), 0x12cb7b9fu);
  /* 12cb7b9f mov eax, dword ptr [0x12cdeb44] */
  EAX = (r32((uint32_t)(0x12cdeb44)));
  /* 12cb7ba4 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7ba5 call dword ptr [0x12ce3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3358))), 0x12cb7babu);
  /* 12cb7bab mov esp, ebp */
  ESP = (EBP);
  /* 12cb7bad pop ebp */
  EBP = (pop32());
  /* 12cb7bae ret  */
  ESPCHK(0x12cb7b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x12cb7bb0 (151 bytes, 46 insns) */
void f_12cb7bb0(void) {
  FTRACE(0x12cb7bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7bb7 cmp dword ptr [eax*4 + 0x12cdeb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12cdeb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7bbf jne 0x12cb7c32 */
  if (!C.zf) goto L_12cb7c32;
  /* 12cb7bc1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12cb7bc6 push 0x12cdc2a0 */
  push32((uint32_t)(0x12cdc2a0u));
  /* 12cb7bcb push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb7bcd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12cb7bcf call 0x12cb41b0 */
  push32(0x12cb7bd4u); f_12cb41b0();
  /* 12cb7bd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7bd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb7bda cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7bde jne 0x12cb7bea */
  if (!C.zf) goto L_12cb7bea;
  /* 12cb7be0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cb7be2 call 0x12cb3120 */
  push32(0x12cb7be7u); f_12cb3120();
  /* 12cb7be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7bea:;
  /* 12cb7bea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cb7bec call 0x12cb7bb0 */
  push32(0x12cb7bf1u); f_12cb7bb0();
  /* 12cb7bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7bf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7bf7 cmp dword ptr [ecx*4 + 0x12cdeb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12cdeb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7bff jne 0x12cb7c1a */
  if (!C.zf) goto L_12cb7c1a;
  /* 12cb7c01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7c04 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7c05 call dword ptr [0x12ce3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3390))), 0x12cb7c0bu);
  /* 12cb7c0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7c11 mov dword ptr [eax*4 + 0x12cdeb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12cdeb40), (ECX));
  /* 12cb7c18 jmp 0x12cb7c28 */
  goto L_12cb7c28;
L_12cb7c1a:;
  /* 12cb7c1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cb7c1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7c1f push edx */
  push32((uint32_t)(EDX));
  /* 12cb7c20 call 0x12cb4c40 */
  push32(0x12cb7c25u); f_12cb4c40();
  /* 12cb7c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7c28:;
  /* 12cb7c28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cb7c2a call 0x12cb7c50 */
  push32(0x12cb7c2fu); f_12cb7c50();
  /* 12cb7c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7c32:;
  /* 12cb7c32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7c35 mov ecx, dword ptr [eax*4 + 0x12cdeb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12cdeb40)));
  /* 12cb7c3c push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7c3d call dword ptr [0x12ce3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3394))), 0x12cb7c43u);
  /* 12cb7c43 mov esp, ebp */
  ESP = (EBP);
  /* 12cb7c45 pop ebp */
  EBP = (pop32());
  /* 12cb7c46 ret  */
  ESPCHK(0x12cb7bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x12cb7c50 (22 bytes, 8 insns) */
void f_12cb7c50(void) {
  FTRACE(0x12cb7c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7c51 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7c56 mov ecx, dword ptr [eax*4 + 0x12cdeb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12cdeb40)));
  /* 12cb7c5d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7c5e call dword ptr [0x12ce3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3398))), 0x12cb7c64u);
  /* 12cb7c64 pop ebp */
  EBP = (pop32());
  /* 12cb7c65 ret  */
  ESPCHK(0x12cb7c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x12cb7c70 (26 bytes, 10 insns) */
void f_12cb7c70(void) {
  FTRACE(0x12cb7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7c71 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7c73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7c76 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb7c79 call dword ptr [0x12ce32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32f4))), 0x12cb7c7fu);
  /* 12cb7c7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12cb7c84 call dword ptr [0x12ce3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3324))), 0x12cb7c8au);
  /* 12cb7c8a pop ebp */
  EBP = (pop32());
  /* 12cb7c8b ret  */
  ESPCHK(0x12cb7c70u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12cb7c90 (446 bytes, 130 insns) */
void f_12cb7c90(void) {
  FTRACE(0x12cb7c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7c91 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7c93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb7c96 call 0x12cb3bf0 */
  push32(0x12cb7c9bu); f_12cb3bf0();
  /* 12cb7c9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb7c9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7ca1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12cb7ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7ca8 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7ca9 call 0x12cb7e50 */
  push32(0x12cb7caeu); f_12cb7e50();
  /* 12cb7cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7cb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb7cb4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7cb8 je 0x12cb7cc3 */
  if (C.zf) goto L_12cb7cc3;
  /* 12cb7cba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7cbd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7cc1 jne 0x12cb7cd2 */
  if (!C.zf) goto L_12cb7cd2;
L_12cb7cc3:;
  /* 12cb7cc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7cc7 call dword ptr [0x12ce32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32f0))), 0x12cb7ccdu);
  /* 12cb7ccd jmp 0x12cb7e4a */
  goto L_12cb7e4a;
L_12cb7cd2:;
  /* 12cb7cd2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7cd5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7cd9 jne 0x12cb7cef */
  if (!C.zf) goto L_12cb7cef;
  /* 12cb7cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7cde mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12cb7ce5 mov eax, 1 */
  EAX = (0x1u);
  /* 12cb7cea jmp 0x12cb7e4a */
  goto L_12cb7e4a;
L_12cb7cef:;
  /* 12cb7cef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7cf2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7cf6 jne 0x12cb7d00 */
  if (!C.zf) goto L_12cb7d00;
  /* 12cb7cf8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7cfb jmp 0x12cb7e4a */
  goto L_12cb7e4a;
L_12cb7d00:;
  /* 12cb7d00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7d03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cb7d06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb7d09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7d0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12cb7d0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cb7d12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7d15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7d18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12cb7d1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7d1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7d22 jne 0x12cb7e27 */
  if (!C.zf) goto L_12cb7e27;
  /* 12cb7d28 mov eax, dword ptr [0x12cdec78] */
  EAX = (r32((uint32_t)(0x12cdec78)));
  /* 12cb7d2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cb7d30 jmp 0x12cb7d3b */
  goto L_12cb7d3b;
L_12cb7d32:;
  /* 12cb7d32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb7d35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7d38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12cb7d3b:;
  /* 12cb7d3b mov edx, dword ptr [0x12cdec78] */
  EDX = (r32((uint32_t)(0x12cdec78)));
  /* 12cb7d41 add edx, dword ptr [0x12cdec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12cdec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7d47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7d4a jge 0x12cb7d62 */
  if ((C.sf==C.of)) goto L_12cb7d62;
  /* 12cb7d4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb7d4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb7d52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7d55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cb7d58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12cb7d60 jmp 0x12cb7d32 */
  goto L_12cb7d32;
L_12cb7d62:;
  /* 12cb7d62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7d65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12cb7d68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cb7d6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7d6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7d74 jne 0x12cb7d85 */
  if (!C.zf) goto L_12cb7d85;
  /* 12cb7d76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7d79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12cb7d80 jmp 0x12cb7e0d */
  goto L_12cb7e0d;
L_12cb7d85:;
  /* 12cb7d85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7d88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7d8e jne 0x12cb7d9c */
  if (!C.zf) goto L_12cb7d9c;
  /* 12cb7d90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7d93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12cb7d9a jmp 0x12cb7e0d */
  goto L_12cb7e0d;
L_12cb7d9c:;
  /* 12cb7d9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7d9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7da5 jne 0x12cb7db3 */
  if (!C.zf) goto L_12cb7db3;
  /* 12cb7da7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7daa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12cb7db1 jmp 0x12cb7e0d */
  goto L_12cb7e0d;
L_12cb7db3:;
  /* 12cb7db3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7db6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7dbc jne 0x12cb7dca */
  if (!C.zf) goto L_12cb7dca;
  /* 12cb7dbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7dc1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12cb7dc8 jmp 0x12cb7e0d */
  goto L_12cb7e0d;
L_12cb7dca:;
  /* 12cb7dca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7dcd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7dd3 jne 0x12cb7de1 */
  if (!C.zf) goto L_12cb7de1;
  /* 12cb7dd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7dd8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12cb7ddf jmp 0x12cb7e0d */
  goto L_12cb7e0d;
L_12cb7de1:;
  /* 12cb7de1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7de4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7dea jne 0x12cb7df8 */
  if (!C.zf) goto L_12cb7df8;
  /* 12cb7dec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7def mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12cb7df6 jmp 0x12cb7e0d */
  goto L_12cb7e0d;
L_12cb7df8:;
  /* 12cb7df8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7dfb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7e01 jne 0x12cb7e0d */
  if (!C.zf) goto L_12cb7e0d;
  /* 12cb7e03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7e06 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12cb7e0d:;
  /* 12cb7e0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7e10 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12cb7e13 push edx */
  push32((uint32_t)(EDX));
  /* 12cb7e14 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cb7e16 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12cb7e19u);
  /* 12cb7e19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7e1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7e1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb7e22 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12cb7e25 jmp 0x12cb7e3e */
  goto L_12cb7e3e;
L_12cb7e27:;
  /* 12cb7e27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7e2a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12cb7e31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb7e34 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb7e37 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7e38 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12cb7e3bu);
  /* 12cb7e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb7e3e:;
  /* 12cb7e3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb7e41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb7e44 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12cb7e47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cb7e4a:;
  /* 12cb7e4a mov esp, ebp */
  ESP = (EBP);
  /* 12cb7e4c pop ebp */
  EBP = (pop32());
  /* 12cb7e4d ret  */
  ESPCHK(0x12cb7c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x12cb7e50 (89 bytes, 35 insns) */
void f_12cb7e50(void) {
  FTRACE(0x12cb7e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7e51 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7e54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7e57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cb7e5a:;
  /* 12cb7e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7e5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb7e5f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7e62 je 0x12cb7e82 */
  if (C.zf) goto L_12cb7e82;
  /* 12cb7e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7e67 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7e6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb7e6d mov ecx, dword ptr [0x12cdec84] */
  ECX = (r32((uint32_t)(0x12cdec84)));
  /* 12cb7e73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb7e76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7e79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7e7b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7e7e jae 0x12cb7e82 */
  if (!C.cf) goto L_12cb7e82;
  /* 12cb7e80 jmp 0x12cb7e5a */
  goto L_12cb7e5a;
L_12cb7e82:;
  /* 12cb7e82 mov eax, dword ptr [0x12cdec84] */
  EAX = (r32((uint32_t)(0x12cdec84)));
  /* 12cb7e87 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb7e8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb7e8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7e8f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7e92 jae 0x12cb7e9e */
  if (!C.cf) goto L_12cb7e9e;
  /* 12cb7e94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7e97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb7e99 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7e9c je 0x12cb7ea2 */
  if (C.zf) goto L_12cb7ea2;
L_12cb7e9e:;
  /* 12cb7e9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7ea0 jmp 0x12cb7ea5 */
  goto L_12cb7ea5;
L_12cb7ea2:;
  /* 12cb7ea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cb7ea5:;
  /* 12cb7ea5 mov esp, ebp */
  ESP = (EBP);
  /* 12cb7ea7 pop ebp */
  EBP = (pop32());
  /* 12cb7ea8 ret  */
  ESPCHK(0x12cb7e50u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12cb7eb0 (48 bytes, 17 insns) */
void f_12cb7eb0(void) {
  FTRACE(0x12cb7eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7eb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb7eb6 call 0x12cb7bb0 */
  push32(0x12cb7ebbu); f_12cb7bb0();
  /* 12cb7ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7ebe mov eax, dword ptr [0x12ce0704] */
  EAX = (r32((uint32_t)(0x12ce0704)));
  /* 12cb7ec3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb7ec6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7ec9 mov dword ptr [0x12ce0704], ecx */
  w32((uint32_t)(0x12ce0704), (ECX));
  /* 12cb7ecf push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb7ed1 call 0x12cb7c50 */
  push32(0x12cb7ed6u); f_12cb7c50();
  /* 12cb7ed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7ed9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7edc mov esp, ebp */
  ESP = (EBP);
  /* 12cb7ede pop ebp */
  EBP = (pop32());
  /* 12cb7edf ret  */
  ESPCHK(0x12cb7eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ee0 @ 0x12cb7ee0 (10 bytes, 5 insns) */
void f_12cb7ee0(void) {
  FTRACE(0x12cb7ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7ee3 mov eax, dword ptr [0x12ce0704] */
  EAX = (r32((uint32_t)(0x12ce0704)));
  /* 12cb7ee8 pop ebp */
  EBP = (pop32());
  /* 12cb7ee9 ret  */
  ESPCHK(0x12cb7ee0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12cb7ef0 (45 bytes, 19 insns) */
void f_12cb7ef0(void) {
  FTRACE(0x12cb7ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7ef4 mov eax, dword ptr [0x12ce0704] */
  EAX = (r32((uint32_t)(0x12ce0704)));
  /* 12cb7ef9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb7efc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7f00 je 0x12cb7f10 */
  if (C.zf) goto L_12cb7f10;
  /* 12cb7f02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7f05 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7f06 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12cb7f09u);
  /* 12cb7f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7f0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb7f0e jne 0x12cb7f14 */
  if (!C.zf) goto L_12cb7f14;
L_12cb7f10:;
  /* 12cb7f10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7f12 jmp 0x12cb7f19 */
  goto L_12cb7f19;
L_12cb7f14:;
  /* 12cb7f14 mov eax, 1 */
  EAX = (0x1u);
L_12cb7f19:;
  /* 12cb7f19 mov esp, ebp */
  ESP = (EBP);
  /* 12cb7f1b pop ebp */
  EBP = (pop32());
  /* 12cb7f1c ret  */
  ESPCHK(0x12cb7ef0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12cb7f20 (88 bytes, 40 insns) */
void f_12cb7f20(void) {
  FTRACE(0x12cb7f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7f20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cb7f24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cb7f28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb7f2a je 0x12cb7f73 */
  if (C.zf) goto L_12cb7f73;
  /* 12cb7f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7f2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12cb7f32 push edi */
  push32((uint32_t)(EDI));
  /* 12cb7f33 mov edi, ecx */
  EDI = (ECX);
  /* 12cb7f35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7f38 jb 0x12cb7f67 */
  if (C.cf) goto L_12cb7f67;
  /* 12cb7f3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cb7f3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb7f3f je 0x12cb7f49 */
  if (C.zf) goto L_12cb7f49;
  /* 12cb7f41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12cb7f43:;
  /* 12cb7f43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cb7f45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cb7f46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cb7f47 jne 0x12cb7f43 */
  if (!C.zf) goto L_12cb7f43;
L_12cb7f49:;
  /* 12cb7f49 mov ecx, eax */
  ECX = (EAX);
  /* 12cb7f4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12cb7f4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7f50 mov ecx, eax */
  ECX = (EAX);
  /* 12cb7f52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cb7f55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7f57 mov ecx, edx */
  ECX = (EDX);
  /* 12cb7f59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb7f5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cb7f5f je 0x12cb7f67 */
  if (C.zf) goto L_12cb7f67;
  /* 12cb7f61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12cb7f63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb7f65 je 0x12cb7f6d */
  if (C.zf) goto L_12cb7f6d;
L_12cb7f67:;
  /* 12cb7f67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cb7f69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cb7f6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12cb7f6b jne 0x12cb7f67 */
  if (!C.zf) goto L_12cb7f67;
L_12cb7f6d:;
  /* 12cb7f6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cb7f71 pop edi */
  EDI = (pop32());
  /* 12cb7f72 ret  */
  ESPCHK(0x12cb7f20u, _esp0);
  ESP += 4; return;
L_12cb7f73:;
  /* 12cb7f73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cb7f77 ret  */
  ESPCHK(0x12cb7f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x12cb7f80 (23 bytes, 10 insns) */
void f_12cb7f80(void) {
  FTRACE(0x12cb7f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7f81 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7f83 mov eax, dword ptr [0x12ce0700] */
  EAX = (r32((uint32_t)(0x12ce0700)));
  /* 12cb7f88 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7f89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7f8c push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7f8d call 0x12cb7fa0 */
  push32(0x12cb7f92u); f_12cb7fa0();
  /* 12cb7f92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7f95 pop ebp */
  EBP = (pop32());
  /* 12cb7f96 ret  */
  ESPCHK(0x12cb7f80u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12cb7fa0 (87 bytes, 34 insns) */
void f_12cb7fa0(void) {
  FTRACE(0x12cb7fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb7fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb7fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb7fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7fa4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7fa8 jbe 0x12cb7fae */
  if ((C.cf||C.zf)) goto L_12cb7fae;
  /* 12cb7faa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7fac jmp 0x12cb7ff3 */
  goto L_12cb7ff3;
L_12cb7fae:;
  /* 12cb7fae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7fb2 ja 0x12cb7fc5 */
  if ((!C.cf&&!C.zf)) goto L_12cb7fc5;
  /* 12cb7fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7fb7 push eax */
  push32((uint32_t)(EAX));
  /* 12cb7fb8 call 0x12cb8000 */
  push32(0x12cb7fbdu); f_12cb8000();
  /* 12cb7fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7fc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb7fc3 jmp 0x12cb7fcc */
  goto L_12cb7fcc;
L_12cb7fc5:;
  /* 12cb7fc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cb7fcc:;
  /* 12cb7fcc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7fd0 jne 0x12cb7fd8 */
  if (!C.zf) goto L_12cb7fd8;
  /* 12cb7fd2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb7fd6 jne 0x12cb7fdd */
  if (!C.zf) goto L_12cb7fdd;
L_12cb7fd8:;
  /* 12cb7fd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb7fdb jmp 0x12cb7ff3 */
  goto L_12cb7ff3;
L_12cb7fdd:;
  /* 12cb7fdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb7fe0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb7fe1 call 0x12cb7ef0 */
  push32(0x12cb7fe6u); f_12cb7ef0();
  /* 12cb7fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb7fe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb7feb jne 0x12cb7ff1 */
  if (!C.zf) goto L_12cb7ff1;
  /* 12cb7fed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb7fef jmp 0x12cb7ff3 */
  goto L_12cb7ff3;
L_12cb7ff1:;
  /* 12cb7ff1 jmp 0x12cb7fae */
  goto L_12cb7fae;
L_12cb7ff3:;
  /* 12cb7ff3 mov esp, ebp */
  ESP = (EBP);
  /* 12cb7ff5 pop ebp */
  EBP = (pop32());
  /* 12cb7ff6 ret  */
  ESPCHK(0x12cb7fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x12cb8000 (109 bytes, 37 insns) */
void f_12cb8000(void) {
  FTRACE(0x12cb8000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8000 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8001 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8003 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8007 cmp eax, dword ptr [0x12cdec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb800d ja 0x12cb803d */
  if ((!C.cf&&!C.zf)) goto L_12cb803d;
  /* 12cb800f push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb8011 call 0x12cb7bb0 */
  push32(0x12cb8016u); f_12cb7bb0();
  /* 12cb8016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8019 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb801c push ecx */
  push32((uint32_t)(ECX));
  /* 12cb801d call 0x12cb8b40 */
  push32(0x12cb8022u); f_12cb8b40();
  /* 12cb8022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8025 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb8028 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb802a call 0x12cb7c50 */
  push32(0x12cb802fu); f_12cb7c50();
  /* 12cb802f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8032 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8036 je 0x12cb803d */
  if (C.zf) goto L_12cb803d;
  /* 12cb8038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb803b jmp 0x12cb8069 */
  goto L_12cb8069;
L_12cb803d:;
  /* 12cb803d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8041 jne 0x12cb804a */
  if (!C.zf) goto L_12cb804a;
  /* 12cb8043 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12cb804a:;
  /* 12cb804a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb804d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8050 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8053 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cb8056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8059 push eax */
  push32((uint32_t)(EAX));
  /* 12cb805a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb805c mov ecx, dword ptr [0x12ce1ecc] */
  ECX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb8062 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8063 call dword ptr [0x12ce32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32ec))), 0x12cb8069u);
L_12cb8069:;
  /* 12cb8069 mov esp, ebp */
  ESP = (EBP);
  /* 12cb806b pop ebp */
  EBP = (pop32());
  /* 12cb806c ret  */
  ESPCHK(0x12cb8000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008070 @ 0x12cb8070 (10 bytes, 5 insns) */
void f_12cb8070(void) {
  FTRACE(0x12cb8070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8070 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8071 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8073 mov eax, 1 */
  EAX = (0x1u);
  /* 12cb8078 pop ebp */
  EBP = (pop32());
  /* 12cb8079 ret  */
  ESPCHK(0x12cb8070u, _esp0);
  ESP += 4; return;
}

/* FUN_10008080 @ 0x12cb8080 (173 bytes, 59 insns) */
void f_12cb8080(void) {
  FTRACE(0x12cb8080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8080 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8081 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8086 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb808a jbe 0x12cb8093 */
  if ((C.cf||C.zf)) goto L_12cb8093;
  /* 12cb808c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb808e jmp 0x12cb8129 */
  goto L_12cb8129;
L_12cb8093:;
  /* 12cb8093 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb8095 call 0x12cb7bb0 */
  push32(0x12cb809au); f_12cb7bb0();
  /* 12cb809a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb809d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb80a0 push eax */
  push32((uint32_t)(EAX));
  /* 12cb80a1 call 0x12cb84b0 */
  push32(0x12cb80a6u); f_12cb84b0();
  /* 12cb80a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb80a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb80ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb80b0 je 0x12cb80f1 */
  if (C.zf) goto L_12cb80f1;
  /* 12cb80b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cb80b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb80bc cmp ecx, dword ptr [0x12cdec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cdec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb80c2 ja 0x12cb80e2 */
  if ((!C.cf&&!C.zf)) goto L_12cb80e2;
  /* 12cb80c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb80c7 push edx */
  push32((uint32_t)(EDX));
  /* 12cb80c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb80cb push eax */
  push32((uint32_t)(EAX));
  /* 12cb80cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb80cf push ecx */
  push32((uint32_t)(ECX));
  /* 12cb80d0 call 0x12cb9380 */
  push32(0x12cb80d5u); f_12cb9380();
  /* 12cb80d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb80d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb80da je 0x12cb80e2 */
  if (C.zf) goto L_12cb80e2;
  /* 12cb80dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb80df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cb80e2:;
  /* 12cb80e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb80e4 call 0x12cb7c50 */
  push32(0x12cb80e9u); f_12cb7c50();
  /* 12cb80e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb80ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb80ef jmp 0x12cb8129 */
  goto L_12cb8129;
L_12cb80f1:;
  /* 12cb80f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb80f3 call 0x12cb7c50 */
  push32(0x12cb80f8u); f_12cb7c50();
  /* 12cb80f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb80fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb80ff jne 0x12cb8108 */
  if (!C.zf) goto L_12cb8108;
  /* 12cb8101 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12cb8108:;
  /* 12cb8108 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb810b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb810e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12cb8110 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12cb8113 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb8116 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8117 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb811a push edx */
  push32((uint32_t)(EDX));
  /* 12cb811b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cb811d mov eax, dword ptr [0x12ce1ecc] */
  EAX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb8122 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8123 call dword ptr [0x12ce32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e8))), 0x12cb8129u);
L_12cb8129:;
  /* 12cb8129 mov esp, ebp */
  ESP = (EBP);
  /* 12cb812b pop ebp */
  EBP = (pop32());
  /* 12cb812c ret  */
  ESPCHK(0x12cb8080u, _esp0);
  ESP += 4; return;
}

/* FUN_10008130 @ 0x12cb8130 (490 bytes, 165 insns) */
void f_12cb8130(void) {
  FTRACE(0x12cb8130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8130 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8131 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8133 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8136 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb813a jne 0x12cb814d */
  if (!C.zf) goto L_12cb814d;
  /* 12cb813c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb813f push eax */
  push32((uint32_t)(EAX));
  /* 12cb8140 call 0x12cb7f80 */
  push32(0x12cb8145u); f_12cb7f80();
  /* 12cb8145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8148 jmp 0x12cb8316 */
  goto L_12cb8316;
L_12cb814d:;
  /* 12cb814d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8151 jne 0x12cb8166 */
  if (!C.zf) goto L_12cb8166;
  /* 12cb8153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8156 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8157 call 0x12cb8320 */
  push32(0x12cb815cu); f_12cb8320();
  /* 12cb815c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb815f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8161 jmp 0x12cb8316 */
  goto L_12cb8316;
L_12cb8166:;
  /* 12cb8166 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cb816d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8171 ja 0x12cb82e9 */
  if ((!C.cf&&!C.zf)) goto L_12cb82e9;
  /* 12cb8177 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb8179 call 0x12cb7bb0 */
  push32(0x12cb817eu); f_12cb7bb0();
  /* 12cb817e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8184 push edx */
  push32((uint32_t)(EDX));
  /* 12cb8185 call 0x12cb84b0 */
  push32(0x12cb818au); f_12cb84b0();
  /* 12cb818a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb818d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb8190 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8194 je 0x12cb82ac */
  if (C.zf) goto L_12cb82ac;
  /* 12cb819a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb819d cmp eax, dword ptr [0x12cdec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb81a3 ja 0x12cb8220 */
  if ((!C.cf&&!C.zf)) goto L_12cb8220;
  /* 12cb81a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb81a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb81a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb81ac push edx */
  push32((uint32_t)(EDX));
  /* 12cb81ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb81b0 push eax */
  push32((uint32_t)(EAX));
  /* 12cb81b1 call 0x12cb9380 */
  push32(0x12cb81b6u); f_12cb9380();
  /* 12cb81b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb81b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb81bb je 0x12cb81c5 */
  if (C.zf) goto L_12cb81c5;
  /* 12cb81bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb81c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cb81c3 jmp 0x12cb8220 */
  goto L_12cb8220;
L_12cb81c5:;
  /* 12cb81c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb81c8 push edx */
  push32((uint32_t)(EDX));
  /* 12cb81c9 call 0x12cb8b40 */
  push32(0x12cb81ceu); f_12cb8b40();
  /* 12cb81ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb81d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb81d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb81d8 je 0x12cb8220 */
  if (C.zf) goto L_12cb8220;
  /* 12cb81da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb81dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12cb81e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb81e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb81e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb81e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb81ec jae 0x12cb81f6 */
  if (!C.cf) goto L_12cb81f6;
  /* 12cb81ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb81f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb81f4 jmp 0x12cb81fc */
  goto L_12cb81fc;
L_12cb81f6:;
  /* 12cb81f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb81f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cb81fc:;
  /* 12cb81fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb81ff push edx */
  push32((uint32_t)(EDX));
  /* 12cb8200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8203 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8204 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb8207 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8208 call 0x12cbaa90 */
  push32(0x12cb820du); f_12cbaa90();
  /* 12cb820d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8210 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8213 push edx */
  push32((uint32_t)(EDX));
  /* 12cb8214 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb8217 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8218 call 0x12cb8570 */
  push32(0x12cb821du); f_12cb8570();
  /* 12cb821d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb8220:;
  /* 12cb8220 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8224 jne 0x12cb82a0 */
  if (!C.zf) goto L_12cb82a0;
  /* 12cb8226 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb822a jne 0x12cb8233 */
  if (!C.zf) goto L_12cb8233;
  /* 12cb822c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12cb8233:;
  /* 12cb8233 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb8236 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8239 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb823c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cb823f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb8242 push edx */
  push32((uint32_t)(EDX));
  /* 12cb8243 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb8245 mov eax, dword ptr [0x12ce1ecc] */
  EAX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb824a push eax */
  push32((uint32_t)(EAX));
  /* 12cb824b call dword ptr [0x12ce32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32ec))), 0x12cb8251u);
  /* 12cb8251 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb8254 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8258 je 0x12cb82a0 */
  if (C.zf) goto L_12cb82a0;
  /* 12cb825a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb825d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cb8260 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8263 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb8266 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8269 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb826c jae 0x12cb8276 */
  if (!C.cf) goto L_12cb8276;
  /* 12cb826e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8271 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cb8274 jmp 0x12cb827c */
  goto L_12cb827c;
L_12cb8276:;
  /* 12cb8276 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb8279 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12cb827c:;
  /* 12cb827c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb827f push eax */
  push32((uint32_t)(EAX));
  /* 12cb8280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8283 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8284 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb8287 push edx */
  push32((uint32_t)(EDX));
  /* 12cb8288 call 0x12cbaa90 */
  push32(0x12cb828du); f_12cbaa90();
  /* 12cb828d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8293 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8294 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb8297 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8298 call 0x12cb8570 */
  push32(0x12cb829du); f_12cb8570();
  /* 12cb829d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cb82a0:;
  /* 12cb82a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb82a2 call 0x12cb7c50 */
  push32(0x12cb82a7u); f_12cb7c50();
  /* 12cb82a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb82aa jmp 0x12cb82e9 */
  goto L_12cb82e9;
L_12cb82ac:;
  /* 12cb82ac push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb82ae call 0x12cb7c50 */
  push32(0x12cb82b3u); f_12cb7c50();
  /* 12cb82b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb82b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb82ba jne 0x12cb82c3 */
  if (!C.zf) goto L_12cb82c3;
  /* 12cb82bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12cb82c3:;
  /* 12cb82c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb82c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb82c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb82cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12cb82cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb82d2 push eax */
  push32((uint32_t)(EAX));
  /* 12cb82d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb82d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb82d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb82d9 mov edx, dword ptr [0x12ce1ecc] */
  EDX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb82df push edx */
  push32((uint32_t)(EDX));
  /* 12cb82e0 call dword ptr [0x12ce32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e8))), 0x12cb82e6u);
  /* 12cb82e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cb82e9:;
  /* 12cb82e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb82ed jne 0x12cb82f8 */
  if (!C.zf) goto L_12cb82f8;
  /* 12cb82ef cmp dword ptr [0x12ce0700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb82f6 jne 0x12cb82fd */
  if (!C.zf) goto L_12cb82fd;
L_12cb82f8:;
  /* 12cb82f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb82fb jmp 0x12cb8316 */
  goto L_12cb8316;
L_12cb82fd:;
  /* 12cb82fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb8300 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8301 call 0x12cb7ef0 */
  push32(0x12cb8306u); f_12cb7ef0();
  /* 12cb8306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb830b jne 0x12cb8311 */
  if (!C.zf) goto L_12cb8311;
  /* 12cb830d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb830f jmp 0x12cb8316 */
  goto L_12cb8316;
L_12cb8311:;
  /* 12cb8311 jmp 0x12cb8166 */
  goto L_12cb8166;
L_12cb8316:;
  /* 12cb8316 mov esp, ebp */
  ESP = (EBP);
  /* 12cb8318 pop ebp */
  EBP = (pop32());
  /* 12cb8319 ret  */
  ESPCHK(0x12cb8130u, _esp0);
  ESP += 4; return;
}

/* FUN_10008320 @ 0x12cb8320 (104 bytes, 38 insns) */
void f_12cb8320(void) {
  FTRACE(0x12cb8320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8320 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8321 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8323 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8324 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8328 jne 0x12cb832c */
  if (!C.zf) goto L_12cb832c;
  /* 12cb832a jmp 0x12cb8384 */
  goto L_12cb8384;
L_12cb832c:;
  /* 12cb832c push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb832e call 0x12cb7bb0 */
  push32(0x12cb8333u); f_12cb7bb0();
  /* 12cb8333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8339 push eax */
  push32((uint32_t)(EAX));
  /* 12cb833a call 0x12cb84b0 */
  push32(0x12cb833fu); f_12cb84b0();
  /* 12cb833f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8342 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb8345 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8349 je 0x12cb8367 */
  if (C.zf) goto L_12cb8367;
  /* 12cb834b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb834e push ecx */
  push32((uint32_t)(ECX));
  /* 12cb834f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8352 push edx */
  push32((uint32_t)(EDX));
  /* 12cb8353 call 0x12cb8570 */
  push32(0x12cb8358u); f_12cb8570();
  /* 12cb8358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb835b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb835d call 0x12cb7c50 */
  push32(0x12cb8362u); f_12cb7c50();
  /* 12cb8362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8365 jmp 0x12cb8384 */
  goto L_12cb8384;
L_12cb8367:;
  /* 12cb8367 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb8369 call 0x12cb7c50 */
  push32(0x12cb836eu); f_12cb7c50();
  /* 12cb836e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8371 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8374 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8375 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb8377 mov ecx, dword ptr [0x12ce1ecc] */
  ECX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb837d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb837e call dword ptr [0x12ce3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3384))), 0x12cb8384u);
L_12cb8384:;
  /* 12cb8384 mov esp, ebp */
  ESP = (EBP);
  /* 12cb8386 pop ebp */
  EBP = (pop32());
  /* 12cb8387 ret  */
  ESPCHK(0x12cb8320u, _esp0);
  ESP += 4; return;
}

/* FUN_10008390 @ 0x12cb8390 (116 bytes, 34 insns) */
void f_12cb8390(void) {
  FTRACE(0x12cb8390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8390 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8391 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8393 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8394 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12cb839b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb839d call 0x12cb7bb0 */
  push32(0x12cb83a2u); f_12cb7bb0();
  /* 12cb83a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb83a5 call 0x12cb9aa0 */
  push32(0x12cb83aau); f_12cb9aa0();
  /* 12cb83aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb83ac jge 0x12cb83b5 */
  if ((C.sf==C.of)) goto L_12cb83b5;
  /* 12cb83ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12cb83b5:;
  /* 12cb83b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cb83b7 call 0x12cb7c50 */
  push32(0x12cb83bcu); f_12cb7c50();
  /* 12cb83bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb83bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb83c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb83c3 mov eax, dword ptr [0x12ce1ecc] */
  EAX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb83c8 push eax */
  push32((uint32_t)(EAX));
  /* 12cb83c9 call dword ptr [0x12ce3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3364))), 0x12cb83cfu);
  /* 12cb83cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb83d1 jne 0x12cb83fd */
  if (!C.zf) goto L_12cb83fd;
  /* 12cb83d3 call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cb83d9u);
  /* 12cb83d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb83dc jne 0x12cb83f6 */
  if (!C.zf) goto L_12cb83f6;
  /* 12cb83de call 0x12cbc090 */
  push32(0x12cb83e3u); f_12cbc090();
  /* 12cb83e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12cb83e9 call 0x12cbc080 */
  push32(0x12cb83eeu); f_12cbc080();
  /* 12cb83ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12cb83f4 jmp 0x12cb83fd */
  goto L_12cb83fd;
L_12cb83f6:;
  /* 12cb83f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12cb83fd:;
  /* 12cb83fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8400 mov esp, ebp */
  ESP = (EBP);
  /* 12cb8402 pop ebp */
  EBP = (pop32());
  /* 12cb8403 ret  */
  ESPCHK(0x12cb8390u, _esp0);
  ESP += 4; return;
}

/* FUN_10008410 @ 0x12cb8410 (10 bytes, 5 insns) */
void f_12cb8410(void) {
  FTRACE(0x12cb8410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8410 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8411 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8413 call 0x12cb8390 */
  push32(0x12cb8418u); f_12cb8390();
  /* 12cb8418 pop ebp */
  EBP = (pop32());
  /* 12cb8419 ret  */
  ESPCHK(0x12cb8410u, _esp0);
  ESP += 4; return;
}

