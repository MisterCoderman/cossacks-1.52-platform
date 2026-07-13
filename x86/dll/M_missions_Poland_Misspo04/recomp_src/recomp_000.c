#include "recomp.h"

/* thunk_FUN_10002900 @ 0x108b1005 (5 bytes, 1 insns) */
void f_108b1005(void) {
  FTRACE(0x108b1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b1005 jmp 0x108b2900 */
  f_108b2900(); return;
}

/* OnInit @ 0x108b100a (5 bytes, 1 insns) */
void f_108b100a(void) {
  FTRACE(0x108b100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b100a jmp 0x108b1090 */
  f_108b1090(); return;
}

/* thunk_FUN_10001030 @ 0x108b100f (5 bytes, 1 insns) */
void f_108b100f(void) {
  FTRACE(0x108b100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b100f jmp 0x108b1030 */
  f_108b1030(); return;
}

/* ProcessScenary @ 0x108b1014 (5 bytes, 1 insns) */
void f_108b1014(void) {
  FTRACE(0x108b1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b1014 jmp 0x108b1510 */
  f_108b1510(); return;
}

/* FUN_10001030 @ 0x108b1030 (67 bytes, 26 insns) */
void f_108b1030(void) {
  FTRACE(0x108b1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b1030 push ebp */
  push32((uint32_t)(EBP));
  /* 108b1031 mov ebp, esp */
  EBP = (ESP);
  /* 108b1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b1036 push ebx */
  push32((uint32_t)(EBX));
  /* 108b1037 push esi */
  push32((uint32_t)(ESI));
  /* 108b1038 push edi */
  push32((uint32_t)(EDI));
  /* 108b1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 108b103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 108b1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108b1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108b1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1052 je 0x108b1056 */
  if (C.zf) goto L_108b1056;
  /* 108b1054 jmp 0x108b105b */
  goto L_108b105b;
L_108b1056:;
  /* 108b1056 call 0x108b100a */
  push32(0x108b105bu); f_108b100a();
L_108b105b:;
  /* 108b105b mov eax, 1 */
  EAX = (0x1u);
  /* 108b1060 pop edi */
  EDI = (pop32());
  /* 108b1061 pop esi */
  ESI = (pop32());
  /* 108b1062 pop ebx */
  EBX = (pop32());
  /* 108b1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1068 call 0x108b2a20 */
  push32(0x108b106du); f_108b2a20();
  /* 108b106d mov esp, ebp */
  ESP = (EBP);
  /* 108b106f pop ebp */
  EBP = (pop32());
  /* 108b1070 ret 0xc */
  ESPCHK(0x108b1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x108b1090 (911 bytes, 239 insns) */
void f_108b1090(void) {
  FTRACE(0x108b1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b1090 push ebp */
  push32((uint32_t)(EBP));
  /* 108b1091 mov ebp, esp */
  EBP = (ESP);
  /* 108b1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b1096 push ebx */
  push32((uint32_t)(EBX));
  /* 108b1097 push esi */
  push32((uint32_t)(ESI));
  /* 108b1098 push edi */
  push32((uint32_t)(EDI));
  /* 108b1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 108b109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 108b10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108b10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108b10a8 mov esi, esp */
  ESI = (ESP);
  /* 108b10aa push 0x108da0d8 */
  push32((uint32_t)(0x108da0d8u));
  /* 108b10af push 0x108df468 */
  push32((uint32_t)(0x108df468u));
  /* 108b10b4 call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b10bau);
  /* 108b10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b10bf call 0x108b2a20 */
  push32(0x108b10c4u); f_108b2a20();
  /* 108b10c4 mov esi, esp */
  ESI = (ESP);
  /* 108b10c6 push 0x108da0d4 */
  push32((uint32_t)(0x108da0d4u));
  /* 108b10cb push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b10d0 call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b10d6u);
  /* 108b10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b10db call 0x108b2a20 */
  push32(0x108b10e0u); f_108b2a20();
  /* 108b10e0 mov esi, esp */
  ESI = (ESP);
  /* 108b10e2 push 0x108da0d0 */
  push32((uint32_t)(0x108da0d0u));
  /* 108b10e7 push 0x108df478 */
  push32((uint32_t)(0x108df478u));
  /* 108b10ec call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b10f2u);
  /* 108b10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b10f7 call 0x108b2a20 */
  push32(0x108b10fcu); f_108b2a20();
  /* 108b10fc mov esi, esp */
  ESI = (ESP);
  /* 108b10fe push 0x108da0cc */
  push32((uint32_t)(0x108da0ccu));
  /* 108b1103 push 0x108df480 */
  push32((uint32_t)(0x108df480u));
  /* 108b1108 call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b110eu);
  /* 108b110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1113 call 0x108b2a20 */
  push32(0x108b1118u); f_108b2a20();
  /* 108b1118 mov esi, esp */
  ESI = (ESP);
  /* 108b111a push 0x108da0c8 */
  push32((uint32_t)(0x108da0c8u));
  /* 108b111f push 0x108df488 */
  push32((uint32_t)(0x108df488u));
  /* 108b1124 call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b112au);
  /* 108b112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b112f call 0x108b2a20 */
  push32(0x108b1134u); f_108b2a20();
  /* 108b1134 mov esi, esp */
  ESI = (ESP);
  /* 108b1136 push 0x108da0c4 */
  push32((uint32_t)(0x108da0c4u));
  /* 108b113b push 0x108df490 */
  push32((uint32_t)(0x108df490u));
  /* 108b1140 call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b1146u);
  /* 108b1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b114b call 0x108b2a20 */
  push32(0x108b1150u); f_108b2a20();
  /* 108b1150 mov esi, esp */
  ESI = (ESP);
  /* 108b1152 push 0x108da0c0 */
  push32((uint32_t)(0x108da0c0u));
  /* 108b1157 push 0x108df498 */
  push32((uint32_t)(0x108df498u));
  /* 108b115c call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b1162u);
  /* 108b1162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1167 call 0x108b2a20 */
  push32(0x108b116cu); f_108b2a20();
  /* 108b116c mov esi, esp */
  ESI = (ESP);
  /* 108b116e push 0x108da0bc */
  push32((uint32_t)(0x108da0bcu));
  /* 108b1173 push 0x108df4a0 */
  push32((uint32_t)(0x108df4a0u));
  /* 108b1178 call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b117eu);
  /* 108b117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1183 call 0x108b2a20 */
  push32(0x108b1188u); f_108b2a20();
  /* 108b1188 mov esi, esp */
  ESI = (ESP);
  /* 108b118a push 0x108da0b8 */
  push32((uint32_t)(0x108da0b8u));
  /* 108b118f push 0x108df4a8 */
  push32((uint32_t)(0x108df4a8u));
  /* 108b1194 call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b119au);
  /* 108b119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b119f call 0x108b2a20 */
  push32(0x108b11a4u); f_108b2a20();
  /* 108b11a4 mov esi, esp */
  ESI = (ESP);
  /* 108b11a6 push 0x108da0b4 */
  push32((uint32_t)(0x108da0b4u));
  /* 108b11ab push 0x108df4b0 */
  push32((uint32_t)(0x108df4b0u));
  /* 108b11b0 call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b11b6u);
  /* 108b11b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b11bb call 0x108b2a20 */
  push32(0x108b11c0u); f_108b2a20();
  /* 108b11c0 mov esi, esp */
  ESI = (ESP);
  /* 108b11c2 push 0x108da0b0 */
  push32((uint32_t)(0x108da0b0u));
  /* 108b11c7 push 0x108df4b8 */
  push32((uint32_t)(0x108df4b8u));
  /* 108b11cc call dword ptr [0x108e247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e247c))), 0x108b11d2u);
  /* 108b11d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b11d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b11d7 call 0x108b2a20 */
  push32(0x108b11dcu); f_108b2a20();
  /* 108b11dc mov esi, esp */
  ESI = (ESP);
  /* 108b11de push 0x108da0ac */
  push32((uint32_t)(0x108da0acu));
  /* 108b11e3 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b11e8 call dword ptr [0x108e2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2480))), 0x108b11eeu);
  /* 108b11ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b11f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b11f3 call 0x108b2a20 */
  push32(0x108b11f8u); f_108b2a20();
  /* 108b11f8 mov esi, esp */
  ESI = (ESP);
  /* 108b11fa push 0x108da0a8 */
  push32((uint32_t)(0x108da0a8u));
  /* 108b11ff push 0x108df4c8 */
  push32((uint32_t)(0x108df4c8u));
  /* 108b1204 call dword ptr [0x108e2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2480))), 0x108b120au);
  /* 108b120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b120f call 0x108b2a20 */
  push32(0x108b1214u); f_108b2a20();
  /* 108b1214 mov esi, esp */
  ESI = (ESP);
  /* 108b1216 push 0x108da0a4 */
  push32((uint32_t)(0x108da0a4u));
  /* 108b121b push 0x108df4d0 */
  push32((uint32_t)(0x108df4d0u));
  /* 108b1220 call dword ptr [0x108e2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2480))), 0x108b1226u);
  /* 108b1226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b122b call 0x108b2a20 */
  push32(0x108b1230u); f_108b2a20();
  /* 108b1230 mov esi, esp */
  ESI = (ESP);
  /* 108b1232 push 0x108da0a0 */
  push32((uint32_t)(0x108da0a0u));
  /* 108b1237 push 0x108df4d8 */
  push32((uint32_t)(0x108df4d8u));
  /* 108b123c call dword ptr [0x108e2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2480))), 0x108b1242u);
  /* 108b1242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1247 call 0x108b2a20 */
  push32(0x108b124cu); f_108b2a20();
  /* 108b124c mov esi, esp */
  ESI = (ESP);
  /* 108b124e push 0x108da09c */
  push32((uint32_t)(0x108da09cu));
  /* 108b1253 push 0x108df4e0 */
  push32((uint32_t)(0x108df4e0u));
  /* 108b1258 call dword ptr [0x108e2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2480))), 0x108b125eu);
  /* 108b125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1263 call 0x108b2a20 */
  push32(0x108b1268u); f_108b2a20();
  /* 108b1268 mov esi, esp */
  ESI = (ESP);
  /* 108b126a push 0x108da098 */
  push32((uint32_t)(0x108da098u));
  /* 108b126f push 0x108df4e8 */
  push32((uint32_t)(0x108df4e8u));
  /* 108b1274 call dword ptr [0x108e2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2480))), 0x108b127au);
  /* 108b127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b127f call 0x108b2a20 */
  push32(0x108b1284u); f_108b2a20();
  /* 108b1284 mov esi, esp */
  ESI = (ESP);
  /* 108b1286 push 0x108da094 */
  push32((uint32_t)(0x108da094u));
  /* 108b128b push 0x108df4f0 */
  push32((uint32_t)(0x108df4f0u));
  /* 108b1290 call dword ptr [0x108e2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2480))), 0x108b1296u);
  /* 108b1296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b129b call 0x108b2a20 */
  push32(0x108b12a0u); f_108b2a20();
  /* 108b12a0 mov esi, esp */
  ESI = (ESP);
  /* 108b12a2 push 0x108da090 */
  push32((uint32_t)(0x108da090u));
  /* 108b12a7 push 0x108df4f8 */
  push32((uint32_t)(0x108df4f8u));
  /* 108b12ac call dword ptr [0x108e2480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2480))), 0x108b12b2u);
  /* 108b12b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b12b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b12b7 call 0x108b2a20 */
  push32(0x108b12bcu); f_108b2a20();
  /* 108b12bc mov dword ptr [0x108df400], 0 */
  w32((uint32_t)(0x108df400), (0x0u));
  /* 108b12c6 jmp 0x108b12d5 */
  goto L_108b12d5;
L_108b12c8:;
  /* 108b12c8 mov eax, dword ptr [0x108df400] */
  EAX = (r32((uint32_t)(0x108df400)));
  /* 108b12cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b12d0 mov dword ptr [0x108df400], eax */
  w32((uint32_t)(0x108df400), (EAX));
L_108b12d5:;
  /* 108b12d5 cmp dword ptr [0x108df400], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x108df400))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b12dc jge 0x108b1302 */
  if ((C.sf==C.of)) goto L_108b1302;
  /* 108b12de mov esi, esp */
  ESI = (ESP);
  /* 108b12e0 push 8 */
  push32((uint32_t)(0x8u));
  /* 108b12e2 mov ecx, dword ptr [0x108df400] */
  ECX = (r32((uint32_t)(0x108df400)));
  /* 108b12e8 lea edx, [ecx*8 + 0x108df418] */
  EDX = ((uint32_t)(ECX*8 + 0x108df418));
  /* 108b12ef push edx */
  push32((uint32_t)(EDX));
  /* 108b12f0 call dword ptr [0x108e2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2478))), 0x108b12f6u);
  /* 108b12f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b12f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b12fb call 0x108b2a20 */
  push32(0x108b1300u); f_108b2a20();
  /* 108b1300 jmp 0x108b12c8 */
  goto L_108b12c8;
L_108b1302:;
  /* 108b1302 mov esi, esp */
  ESI = (ESP);
  /* 108b1304 push 0x108da078 */
  push32((uint32_t)(0x108da078u));
  /* 108b1309 push 0x108df500 */
  push32((uint32_t)(0x108df500u));
  /* 108b130e call dword ptr [0x108e2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2488))), 0x108b1314u);
  /* 108b1314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1319 call 0x108b2a20 */
  push32(0x108b131eu); f_108b2a20();
  /* 108b131e mov esi, esp */
  ESI = (ESP);
  /* 108b1320 push 0x108da064 */
  push32((uint32_t)(0x108da064u));
  /* 108b1325 push 0x108df508 */
  push32((uint32_t)(0x108df508u));
  /* 108b132a call dword ptr [0x108e2488] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2488))), 0x108b1330u);
  /* 108b1330 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1333 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1335 call 0x108b2a20 */
  push32(0x108b133au); f_108b2a20();
  /* 108b133a mov esi, esp */
  ESI = (ESP);
  /* 108b133c push 0x108da054 */
  push32((uint32_t)(0x108da054u));
  /* 108b1341 push 0x108df3e0 */
  push32((uint32_t)(0x108df3e0u));
  /* 108b1346 call dword ptr [0x108e248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e248c))), 0x108b134cu);
  /* 108b134c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b134f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1351 call 0x108b2a20 */
  push32(0x108b1356u); f_108b2a20();
  /* 108b1356 mov esi, esp */
  ESI = (ESP);
  /* 108b1358 push 0x108da044 */
  push32((uint32_t)(0x108da044u));
  /* 108b135d push 0x108df3e8 */
  push32((uint32_t)(0x108df3e8u));
  /* 108b1362 call dword ptr [0x108e248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e248c))), 0x108b1368u);
  /* 108b1368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b136b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b136d call 0x108b2a20 */
  push32(0x108b1372u); f_108b2a20();
  /* 108b1372 mov esi, esp */
  ESI = (ESP);
  /* 108b1374 push 0x108da034 */
  push32((uint32_t)(0x108da034u));
  /* 108b1379 push 0x108df3f0 */
  push32((uint32_t)(0x108df3f0u));
  /* 108b137e call dword ptr [0x108e248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e248c))), 0x108b1384u);
  /* 108b1384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1389 call 0x108b2a20 */
  push32(0x108b138eu); f_108b2a20();
  /* 108b138e mov esi, esp */
  ESI = (ESP);
  /* 108b1390 push 0x108da028 */
  push32((uint32_t)(0x108da028u));
  /* 108b1395 push 0x108df3f8 */
  push32((uint32_t)(0x108df3f8u));
  /* 108b139a call dword ptr [0x108e248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e248c))), 0x108b13a0u);
  /* 108b13a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b13a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b13a5 call 0x108b2a20 */
  push32(0x108b13aau); f_108b2a20();
  /* 108b13aa mov esi, esp */
  ESI = (ESP);
  /* 108b13ac push 4 */
  push32((uint32_t)(0x4u));
  /* 108b13ae push 0x108df404 */
  push32((uint32_t)(0x108df404u));
  /* 108b13b3 call dword ptr [0x108e2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2478))), 0x108b13b9u);
  /* 108b13b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b13bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b13be call 0x108b2a20 */
  push32(0x108b13c3u); f_108b2a20();
  /* 108b13c3 mov esi, esp */
  ESI = (ESP);
  /* 108b13c5 push 8 */
  push32((uint32_t)(0x8u));
  /* 108b13c7 push 0x108df408 */
  push32((uint32_t)(0x108df408u));
  /* 108b13cc call dword ptr [0x108e2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2478))), 0x108b13d2u);
  /* 108b13d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b13d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b13d7 call 0x108b2a20 */
  push32(0x108b13dcu); f_108b2a20();
  /* 108b13dc mov esi, esp */
  ESI = (ESP);
  /* 108b13de push 8 */
  push32((uint32_t)(0x8u));
  /* 108b13e0 push 0x108df410 */
  push32((uint32_t)(0x108df410u));
  /* 108b13e5 call dword ptr [0x108e2478] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2478))), 0x108b13ebu);
  /* 108b13eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b13ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b13f0 call 0x108b2a20 */
  push32(0x108b13f5u); f_108b2a20();
  /* 108b13f5 mov esi, esp */
  ESI = (ESP);
  /* 108b13f7 push 0x108da01c */
  push32((uint32_t)(0x108da01cu));
  /* 108b13fc push 1 */
  push32((uint32_t)(0x1u));
  /* 108b13fe call dword ptr [0x108e2484] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2484))), 0x108b1404u);
  /* 108b1404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1407 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1409 call 0x108b2a20 */
  push32(0x108b140eu); f_108b2a20();
  /* 108b140e pop edi */
  EDI = (pop32());
  /* 108b140f pop esi */
  ESI = (pop32());
  /* 108b1410 pop ebx */
  EBX = (pop32());
  /* 108b1411 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1414 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1416 call 0x108b2a20 */
  push32(0x108b141bu); f_108b2a20();
  /* 108b141b mov esp, ebp */
  ESP = (EBP);
  /* 108b141d pop ebp */
  EBP = (pop32());
  /* 108b141e ret  */
  ESPCHK(0x108b1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001510 @ 0x108b1510 (4083 bytes, 1176 insns) */
void f_108b1510(void) {
  FTRACE(0x108b1510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b1510 push ebp */
  push32((uint32_t)(EBP));
  /* 108b1511 mov ebp, esp */
  EBP = (ESP);
  /* 108b1513 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b1516 push ebx */
  push32((uint32_t)(EBX));
  /* 108b1517 push esi */
  push32((uint32_t)(ESI));
  /* 108b1518 push edi */
  push32((uint32_t)(EDI));
  /* 108b1519 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 108b151c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 108b1521 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108b1526 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108b1528 mov esi, esp */
  ESI = (ESP);
  /* 108b152a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 108b152c call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b1532u);
  /* 108b1532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1537 call 0x108b2a20 */
  push32(0x108b153cu); f_108b2a20();
  /* 108b153c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1543 je 0x108b1807 */
  if (C.zf) goto L_108b1807;
  /* 108b1549 mov esi, esp */
  ESI = (ESP);
  /* 108b154b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b154d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 108b154f call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b1555u);
  /* 108b1555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1558 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b155a call 0x108b2a20 */
  push32(0x108b155fu); f_108b2a20();
  /* 108b155f mov dword ptr [0x108df404], 0 */
  w32((uint32_t)(0x108df404), (0x0u));
  /* 108b1569 mov esi, esp */
  ESI = (ESP);
  /* 108b156b push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 108b1570 push 3 */
  push32((uint32_t)(0x3u));
  /* 108b1572 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1574 call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b157au);
  /* 108b157a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b157d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b157f call 0x108b2a20 */
  push32(0x108b1584u); f_108b2a20();
  /* 108b1584 mov esi, esp */
  ESI = (ESP);
  /* 108b1586 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 108b158b push 1 */
  push32((uint32_t)(0x1u));
  /* 108b158d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b158f call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b1595u);
  /* 108b1595 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1598 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b159a call 0x108b2a20 */
  push32(0x108b159fu); f_108b2a20();
  /* 108b159f mov esi, esp */
  ESI = (ESP);
  /* 108b15a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b15a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b15a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b15a7 call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b15adu);
  /* 108b15ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b15b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b15b2 call 0x108b2a20 */
  push32(0x108b15b7u); f_108b2a20();
  /* 108b15b7 mov esi, esp */
  ESI = (ESP);
  /* 108b15b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b15bb push 2 */
  push32((uint32_t)(0x2u));
  /* 108b15bd push 0 */
  push32((uint32_t)(0x0u));
  /* 108b15bf call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b15c5u);
  /* 108b15c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b15c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b15ca call 0x108b2a20 */
  push32(0x108b15cfu); f_108b2a20();
  /* 108b15cf mov esi, esp */
  ESI = (ESP);
  /* 108b15d1 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 108b15d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 108b15d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b15da call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b15e0u);
  /* 108b15e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b15e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b15e5 call 0x108b2a20 */
  push32(0x108b15eau); f_108b2a20();
  /* 108b15ea mov esi, esp */
  ESI = (ESP);
  /* 108b15ec push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 108b15f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b15f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b15f5 call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b15fbu);
  /* 108b15fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b15fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1600 call 0x108b2a20 */
  push32(0x108b1605u); f_108b2a20();
  /* 108b1605 mov esi, esp */
  ESI = (ESP);
  /* 108b1607 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 108b160c push 3 */
  push32((uint32_t)(0x3u));
  /* 108b160e push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1610 call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b1616u);
  /* 108b1616 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b161b call 0x108b2a20 */
  push32(0x108b1620u); f_108b2a20();
  /* 108b1620 mov esi, esp */
  ESI = (ESP);
  /* 108b1622 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 108b1627 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1629 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b162b call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b1631u);
  /* 108b1631 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1634 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1636 call 0x108b2a20 */
  push32(0x108b163bu); f_108b2a20();
  /* 108b163b mov esi, esp */
  ESI = (ESP);
  /* 108b163d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b163f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1641 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1643 call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b1649u);
  /* 108b1649 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b164c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b164e call 0x108b2a20 */
  push32(0x108b1653u); f_108b2a20();
  /* 108b1653 mov esi, esp */
  ESI = (ESP);
  /* 108b1655 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1657 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b1659 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b165b call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b1661u);
  /* 108b1661 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1664 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1666 call 0x108b2a20 */
  push32(0x108b166bu); f_108b2a20();
  /* 108b166b mov esi, esp */
  ESI = (ESP);
  /* 108b166d push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 108b1672 push 5 */
  push32((uint32_t)(0x5u));
  /* 108b1674 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1676 call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b167cu);
  /* 108b167c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b167f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1681 call 0x108b2a20 */
  push32(0x108b1686u); f_108b2a20();
  /* 108b1686 mov esi, esp */
  ESI = (ESP);
  /* 108b1688 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 108b168d push 4 */
  push32((uint32_t)(0x4u));
  /* 108b168f push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1691 call dword ptr [0x108e241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e241c))), 0x108b1697u);
  /* 108b1697 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b169a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b169c call 0x108b2a20 */
  push32(0x108b16a1u); f_108b2a20();
  /* 108b16a1 mov esi, esp */
  ESI = (ESP);
  /* 108b16a3 push 0x108da114 */
  push32((uint32_t)(0x108da114u));
  /* 108b16a8 call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b16aeu);
  /* 108b16ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b16b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b16b3 call 0x108b2a20 */
  push32(0x108b16b8u); f_108b2a20();
  /* 108b16b8 mov esi, esp */
  ESI = (ESP);
  /* 108b16ba push 0 */
  push32((uint32_t)(0x0u));
  /* 108b16bc push 0x108df478 */
  push32((uint32_t)(0x108df478u));
  /* 108b16c1 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b16c7u);
  /* 108b16c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b16ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b16cc call 0x108b2a20 */
  push32(0x108b16d1u); f_108b2a20();
  /* 108b16d1 mov esi, esp */
  ESI = (ESP);
  /* 108b16d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b16d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b16d7 push 0x108df4d0 */
  push32((uint32_t)(0x108df4d0u));
  /* 108b16dc push 1 */
  push32((uint32_t)(0x1u));
  /* 108b16de call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b16e4u);
  /* 108b16e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b16e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b16e9 call 0x108b2a20 */
  push32(0x108b16eeu); f_108b2a20();
  /* 108b16ee mov esi, esp */
  ESI = (ESP);
  /* 108b16f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b16f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b16f4 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b16f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b16fb call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b1701u);
  /* 108b1701 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1704 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1706 call 0x108b2a20 */
  push32(0x108b170bu); f_108b2a20();
  /* 108b170b mov esi, esp */
  ESI = (ESP);
  /* 108b170d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b170f push 0x108df480 */
  push32((uint32_t)(0x108df480u));
  /* 108b1714 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b171au);
  /* 108b171a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b171d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b171f call 0x108b2a20 */
  push32(0x108b1724u); f_108b2a20();
  /* 108b1724 mov esi, esp */
  ESI = (ESP);
  /* 108b1726 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1728 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b172a push 0x108df4d8 */
  push32((uint32_t)(0x108df4d8u));
  /* 108b172f push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1731 call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b1737u);
  /* 108b1737 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b173a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b173c call 0x108b2a20 */
  push32(0x108b1741u); f_108b2a20();
  /* 108b1741 mov esi, esp */
  ESI = (ESP);
  /* 108b1743 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b1745 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1747 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b174c push 1 */
  push32((uint32_t)(0x1u));
  /* 108b174e call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b1754u);
  /* 108b1754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1759 call 0x108b2a20 */
  push32(0x108b175eu); f_108b2a20();
  /* 108b175e mov esi, esp */
  ESI = (ESP);
  /* 108b1760 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1762 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b1768u);
  /* 108b1768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b176b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b176d call 0x108b2a20 */
  push32(0x108b1772u); f_108b2a20();
  /* 108b1772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1774 jne 0x108b17a3 */
  if (!C.zf) goto L_108b17a3;
  /* 108b1776 mov esi, esp */
  ESI = (ESP);
  /* 108b1778 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b177a push 0x108df4b8 */
  push32((uint32_t)(0x108df4b8u));
  /* 108b177f call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b1785u);
  /* 108b1785 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1788 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b178a call 0x108b2a20 */
  push32(0x108b178fu); f_108b2a20();
  /* 108b178f mov esi, esp */
  ESI = (ESP);
  /* 108b1791 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1793 call dword ptr [0x108e2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2424))), 0x108b1799u);
  /* 108b1799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b179c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b179e call 0x108b2a20 */
  push32(0x108b17a3u); f_108b2a20();
L_108b17a3:;
  /* 108b17a3 mov esi, esp */
  ESI = (ESP);
  /* 108b17a5 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 108b17a7 call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b17adu);
  /* 108b17ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b17b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b17b2 call 0x108b2a20 */
  push32(0x108b17b7u); f_108b2a20();
  /* 108b17b7 mov esi, esp */
  ESI = (ESP);
  /* 108b17b9 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 108b17bb call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b17c1u);
  /* 108b17c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b17c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b17c6 call 0x108b2a20 */
  push32(0x108b17cbu); f_108b2a20();
  /* 108b17cb mov esi, esp */
  ESI = (ESP);
  /* 108b17cd push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108b17cf call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b17d5u);
  /* 108b17d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b17d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b17da call 0x108b2a20 */
  push32(0x108b17dfu); f_108b2a20();
  /* 108b17df mov esi, esp */
  ESI = (ESP);
  /* 108b17e1 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 108b17e3 call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b17e9u);
  /* 108b17e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b17ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b17ee call 0x108b2a20 */
  push32(0x108b17f3u); f_108b2a20();
  /* 108b17f3 mov esi, esp */
  ESI = (ESP);
  /* 108b17f5 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 108b17f7 call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b17fdu);
  /* 108b17fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1802 call 0x108b2a20 */
  push32(0x108b1807u); f_108b2a20();
L_108b1807:;
  /* 108b1807 mov esi, esp */
  ESI = (ESP);
  /* 108b1809 push 5 */
  push32((uint32_t)(0x5u));
  /* 108b180b call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b1811u);
  /* 108b1811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1816 call 0x108b2a20 */
  push32(0x108b181bu); f_108b2a20();
  /* 108b181b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1822 je 0x108b18c7 */
  if (C.zf) goto L_108b18c7;
  /* 108b1828 mov esi, esp */
  ESI = (ESP);
  /* 108b182a call dword ptr [0x108e2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2438))), 0x108b1830u);
  /* 108b1830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1832 call 0x108b2a20 */
  push32(0x108b1837u); f_108b2a20();
  /* 108b1837 mov esi, eax */
  ESI = (EAX);
  /* 108b1839 mov edi, esp */
  EDI = (ESP);
  /* 108b183b push 1 */
  push32((uint32_t)(0x1u));
  /* 108b183d call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b1843u);
  /* 108b1843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1846 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1848 call 0x108b2a20 */
  push32(0x108b184du); f_108b2a20();
  /* 108b184d imul eax, eax, 0x12c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x12cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b1853 mov ecx, 0x7d0 */
  ECX = (0x7d0u);
  /* 108b1858 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b185a cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b185c jle 0x108b18c7 */
  if ((C.zf||C.sf!=C.of)) goto L_108b18c7;
  /* 108b185e mov esi, esp */
  ESI = (ESP);
  /* 108b1860 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1862 push 5 */
  push32((uint32_t)(0x5u));
  /* 108b1864 call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b186au);
  /* 108b186a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b186d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b186f call 0x108b2a20 */
  push32(0x108b1874u); f_108b2a20();
  /* 108b1874 mov esi, esp */
  ESI = (ESP);
  /* 108b1876 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1878 push 0x108df488 */
  push32((uint32_t)(0x108df488u));
  /* 108b187d call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b1883u);
  /* 108b1883 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1886 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1888 call 0x108b2a20 */
  push32(0x108b188du); f_108b2a20();
  /* 108b188d mov esi, esp */
  ESI = (ESP);
  /* 108b188f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1891 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1893 push 0x108df4e0 */
  push32((uint32_t)(0x108df4e0u));
  /* 108b1898 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b189a call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b18a0u);
  /* 108b18a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b18a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b18a5 call 0x108b2a20 */
  push32(0x108b18aau); f_108b2a20();
  /* 108b18aa mov esi, esp */
  ESI = (ESP);
  /* 108b18ac push 2 */
  push32((uint32_t)(0x2u));
  /* 108b18ae push 0 */
  push32((uint32_t)(0x0u));
  /* 108b18b0 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b18b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b18b7 call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b18bdu);
  /* 108b18bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b18c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b18c2 call 0x108b2a20 */
  push32(0x108b18c7u); f_108b2a20();
L_108b18c7:;
  /* 108b18c7 mov esi, esp */
  ESI = (ESP);
  /* 108b18c9 push 0x108df488 */
  push32((uint32_t)(0x108df488u));
  /* 108b18ce push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b18d3 call dword ptr [0x108e2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2430))), 0x108b18d9u);
  /* 108b18d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b18dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b18de call 0x108b2a20 */
  push32(0x108b18e3u); f_108b2a20();
  /* 108b18e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b18e5 jle 0x108b1922 */
  if ((C.zf||C.sf!=C.of)) goto L_108b1922;
  /* 108b18e7 mov esi, esp */
  ESI = (ESP);
  /* 108b18e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b18eb push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b18f0 call dword ptr [0x108e2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2440))), 0x108b18f6u);
  /* 108b18f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b18f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b18fb call 0x108b2a20 */
  push32(0x108b1900u); f_108b2a20();
  /* 108b1900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1902 jle 0x108b1922 */
  if ((C.zf||C.sf!=C.of)) goto L_108b1922;
  /* 108b1904 mov esi, esp */
  ESI = (ESP);
  /* 108b1906 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1908 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b190d push 0x108df488 */
  push32((uint32_t)(0x108df488u));
  /* 108b1912 call dword ptr [0x108e2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2444))), 0x108b1918u);
  /* 108b1918 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b191b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b191d call 0x108b2a20 */
  push32(0x108b1922u); f_108b2a20();
L_108b1922:;
  /* 108b1922 mov esi, esp */
  ESI = (ESP);
  /* 108b1924 push 6 */
  push32((uint32_t)(0x6u));
  /* 108b1926 call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b192cu);
  /* 108b192c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b192f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1931 call 0x108b2a20 */
  push32(0x108b1936u); f_108b2a20();
  /* 108b1936 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b193b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b193d je 0x108b19e2 */
  if (C.zf) goto L_108b19e2;
  /* 108b1943 mov esi, esp */
  ESI = (ESP);
  /* 108b1945 call dword ptr [0x108e2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2438))), 0x108b194bu);
  /* 108b194b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b194d call 0x108b2a20 */
  push32(0x108b1952u); f_108b2a20();
  /* 108b1952 mov esi, eax */
  ESI = (EAX);
  /* 108b1954 mov edi, esp */
  EDI = (ESP);
  /* 108b1956 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1958 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b195eu);
  /* 108b195e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1961 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1963 call 0x108b2a20 */
  push32(0x108b1968u); f_108b2a20();
  /* 108b1968 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b196e mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 108b1973 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b1975 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1977 jle 0x108b19e2 */
  if ((C.zf||C.sf!=C.of)) goto L_108b19e2;
  /* 108b1979 mov esi, esp */
  ESI = (ESP);
  /* 108b197b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b197d push 6 */
  push32((uint32_t)(0x6u));
  /* 108b197f call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b1985u);
  /* 108b1985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1988 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b198a call 0x108b2a20 */
  push32(0x108b198fu); f_108b2a20();
  /* 108b198f mov esi, esp */
  ESI = (ESP);
  /* 108b1991 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1993 push 0x108df490 */
  push32((uint32_t)(0x108df490u));
  /* 108b1998 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b199eu);
  /* 108b199e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b19a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b19a3 call 0x108b2a20 */
  push32(0x108b19a8u); f_108b2a20();
  /* 108b19a8 mov esi, esp */
  ESI = (ESP);
  /* 108b19aa push 0 */
  push32((uint32_t)(0x0u));
  /* 108b19ac push 0 */
  push32((uint32_t)(0x0u));
  /* 108b19ae push 0x108df4d0 */
  push32((uint32_t)(0x108df4d0u));
  /* 108b19b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b19b5 call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b19bbu);
  /* 108b19bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b19be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b19c0 call 0x108b2a20 */
  push32(0x108b19c5u); f_108b2a20();
  /* 108b19c5 mov esi, esp */
  ESI = (ESP);
  /* 108b19c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b19c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b19cb push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b19d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b19d2 call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b19d8u);
  /* 108b19d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b19db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b19dd call 0x108b2a20 */
  push32(0x108b19e2u); f_108b2a20();
L_108b19e2:;
  /* 108b19e2 mov esi, esp */
  ESI = (ESP);
  /* 108b19e4 push 0x108df490 */
  push32((uint32_t)(0x108df490u));
  /* 108b19e9 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b19ee call dword ptr [0x108e2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2430))), 0x108b19f4u);
  /* 108b19f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b19f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b19f9 call 0x108b2a20 */
  push32(0x108b19feu); f_108b2a20();
  /* 108b19fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1a00 jle 0x108b1a3d */
  if ((C.zf||C.sf!=C.of)) goto L_108b1a3d;
  /* 108b1a02 mov esi, esp */
  ESI = (ESP);
  /* 108b1a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1a06 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b1a0b call dword ptr [0x108e2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2440))), 0x108b1a11u);
  /* 108b1a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1a14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1a16 call 0x108b2a20 */
  push32(0x108b1a1bu); f_108b2a20();
  /* 108b1a1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1a1d jle 0x108b1a3d */
  if ((C.zf||C.sf!=C.of)) goto L_108b1a3d;
  /* 108b1a1f mov esi, esp */
  ESI = (ESP);
  /* 108b1a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1a23 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b1a28 push 0x108df490 */
  push32((uint32_t)(0x108df490u));
  /* 108b1a2d call dword ptr [0x108e2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2444))), 0x108b1a33u);
  /* 108b1a33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1a38 call 0x108b2a20 */
  push32(0x108b1a3du); f_108b2a20();
L_108b1a3d:;
  /* 108b1a3d mov esi, esp */
  ESI = (ESP);
  /* 108b1a3f push 7 */
  push32((uint32_t)(0x7u));
  /* 108b1a41 call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b1a47u);
  /* 108b1a47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1a4c call 0x108b2a20 */
  push32(0x108b1a51u); f_108b2a20();
  /* 108b1a51 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1a58 je 0x108b1afd */
  if (C.zf) goto L_108b1afd;
  /* 108b1a5e mov esi, esp */
  ESI = (ESP);
  /* 108b1a60 call dword ptr [0x108e2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2438))), 0x108b1a66u);
  /* 108b1a66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1a68 call 0x108b2a20 */
  push32(0x108b1a6du); f_108b2a20();
  /* 108b1a6d mov esi, eax */
  ESI = (EAX);
  /* 108b1a6f mov edi, esp */
  EDI = (ESP);
  /* 108b1a71 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1a73 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b1a79u);
  /* 108b1a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1a7c cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1a7e call 0x108b2a20 */
  push32(0x108b1a83u); f_108b2a20();
  /* 108b1a83 imul eax, eax, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x258u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b1a89 mov ecx, 0x1d4c */
  ECX = (0x1d4cu);
  /* 108b1a8e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b1a90 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1a92 jle 0x108b1afd */
  if ((C.zf||C.sf!=C.of)) goto L_108b1afd;
  /* 108b1a94 mov esi, esp */
  ESI = (ESP);
  /* 108b1a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1a98 push 7 */
  push32((uint32_t)(0x7u));
  /* 108b1a9a call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b1aa0u);
  /* 108b1aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1aa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1aa5 call 0x108b2a20 */
  push32(0x108b1aaau); f_108b2a20();
  /* 108b1aaa mov esi, esp */
  ESI = (ESP);
  /* 108b1aac push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1aae push 0x108df498 */
  push32((uint32_t)(0x108df498u));
  /* 108b1ab3 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b1ab9u);
  /* 108b1ab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1abe call 0x108b2a20 */
  push32(0x108b1ac3u); f_108b2a20();
  /* 108b1ac3 mov esi, esp */
  ESI = (ESP);
  /* 108b1ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1ac9 push 0x108df4e0 */
  push32((uint32_t)(0x108df4e0u));
  /* 108b1ace push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1ad0 call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b1ad6u);
  /* 108b1ad6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1ad9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1adb call 0x108b2a20 */
  push32(0x108b1ae0u); f_108b2a20();
  /* 108b1ae0 mov esi, esp */
  ESI = (ESP);
  /* 108b1ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b1ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1ae6 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b1aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1aed call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b1af3u);
  /* 108b1af3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1af8 call 0x108b2a20 */
  push32(0x108b1afdu); f_108b2a20();
L_108b1afd:;
  /* 108b1afd mov esi, esp */
  ESI = (ESP);
  /* 108b1aff push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1b01 call dword ptr [0x108e243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e243c))), 0x108b1b07u);
  /* 108b1b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1b0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1b0c call 0x108b2a20 */
  push32(0x108b1b11u); f_108b2a20();
  /* 108b1b11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1b18 je 0x108b1b4c */
  if (C.zf) goto L_108b1b4c;
  /* 108b1b1a mov esi, esp */
  ESI = (ESP);
  /* 108b1b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1b1e push 0x108df498 */
  push32((uint32_t)(0x108df498u));
  /* 108b1b23 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b1b29u);
  /* 108b1b29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1b2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1b2e call 0x108b2a20 */
  push32(0x108b1b33u); f_108b2a20();
  /* 108b1b33 mov esi, esp */
  ESI = (ESP);
  /* 108b1b35 push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b1b3a push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1b3c call dword ptr [0x108e244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e244c))), 0x108b1b42u);
  /* 108b1b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1b45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1b47 call 0x108b2a20 */
  push32(0x108b1b4cu); f_108b2a20();
L_108b1b4c:;
  /* 108b1b4c mov esi, esp */
  ESI = (ESP);
  /* 108b1b4e push 8 */
  push32((uint32_t)(0x8u));
  /* 108b1b50 call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b1b56u);
  /* 108b1b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1b5b call 0x108b2a20 */
  push32(0x108b1b60u); f_108b2a20();
  /* 108b1b60 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1b65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1b67 je 0x108b1c8a */
  if (C.zf) goto L_108b1c8a;
  /* 108b1b6d mov esi, esp */
  ESI = (ESP);
  /* 108b1b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1b71 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b1b77u);
  /* 108b1b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1b7c call 0x108b2a20 */
  push32(0x108b1b81u); f_108b2a20();
  /* 108b1b81 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1b84 jge 0x108b1c8a */
  if ((C.sf==C.of)) goto L_108b1c8a;
  /* 108b1b8a mov esi, esp */
  ESI = (ESP);
  /* 108b1b8c call dword ptr [0x108e2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2438))), 0x108b1b92u);
  /* 108b1b92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1b94 call 0x108b2a20 */
  push32(0x108b1b99u); f_108b2a20();
  /* 108b1b99 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1b9e jle 0x108b1c8a */
  if ((C.zf||C.sf!=C.of)) goto L_108b1c8a;
  /* 108b1ba4 mov esi, esp */
  ESI = (ESP);
  /* 108b1ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1ba8 push 8 */
  push32((uint32_t)(0x8u));
  /* 108b1baa call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b1bb0u);
  /* 108b1bb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1bb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1bb5 call 0x108b2a20 */
  push32(0x108b1bbau); f_108b2a20();
  /* 108b1bba mov esi, esp */
  ESI = (ESP);
  /* 108b1bbc push 0x108da10c */
  push32((uint32_t)(0x108da10cu));
  /* 108b1bc1 call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b1bc7u);
  /* 108b1bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1bca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1bcc call 0x108b2a20 */
  push32(0x108b1bd1u); f_108b2a20();
  /* 108b1bd1 mov esi, esp */
  ESI = (ESP);
  /* 108b1bd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1bd5 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b1bdbu);
  /* 108b1bdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1bde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1be0 call 0x108b2a20 */
  push32(0x108b1be5u); f_108b2a20();
  /* 108b1be5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b1be8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1bec je 0x108b1bff */
  if (C.zf) goto L_108b1bff;
  /* 108b1bee cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1bf2 je 0x108b1c2e */
  if (C.zf) goto L_108b1c2e;
  /* 108b1bf4 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1bf8 je 0x108b1c5d */
  if (C.zf) goto L_108b1c5d;
  /* 108b1bfa jmp 0x108b1c8a */
  goto L_108b1c8a;
L_108b1bff:;
  /* 108b1bff mov esi, esp */
  ESI = (ESP);
  /* 108b1c01 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108b1c06 push 0x108df4e8 */
  push32((uint32_t)(0x108df4e8u));
  /* 108b1c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1c0d push 0x108df500 */
  push32((uint32_t)(0x108df500u));
  /* 108b1c12 push 0x108df3e0 */
  push32((uint32_t)(0x108df3e0u));
  /* 108b1c17 push 0x108df408 */
  push32((uint32_t)(0x108df408u));
  /* 108b1c1c call dword ptr [0x108e2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2450))), 0x108b1c22u);
  /* 108b1c22 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1c25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1c27 call 0x108b2a20 */
  push32(0x108b1c2cu); f_108b2a20();
  /* 108b1c2c jmp 0x108b1c8a */
  goto L_108b1c8a;
L_108b1c2e:;
  /* 108b1c2e mov esi, esp */
  ESI = (ESP);
  /* 108b1c30 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108b1c35 push 0x108df4e8 */
  push32((uint32_t)(0x108df4e8u));
  /* 108b1c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1c3c push 0x108df500 */
  push32((uint32_t)(0x108df500u));
  /* 108b1c41 push 0x108df3e8 */
  push32((uint32_t)(0x108df3e8u));
  /* 108b1c46 push 0x108df408 */
  push32((uint32_t)(0x108df408u));
  /* 108b1c4b call dword ptr [0x108e2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2450))), 0x108b1c51u);
  /* 108b1c51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1c54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1c56 call 0x108b2a20 */
  push32(0x108b1c5bu); f_108b2a20();
  /* 108b1c5b jmp 0x108b1c8a */
  goto L_108b1c8a;
L_108b1c5d:;
  /* 108b1c5d mov esi, esp */
  ESI = (ESP);
  /* 108b1c5f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108b1c64 push 0x108df4e8 */
  push32((uint32_t)(0x108df4e8u));
  /* 108b1c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1c6b push 0x108df500 */
  push32((uint32_t)(0x108df500u));
  /* 108b1c70 push 0x108df3f0 */
  push32((uint32_t)(0x108df3f0u));
  /* 108b1c75 push 0x108df408 */
  push32((uint32_t)(0x108df408u));
  /* 108b1c7a call dword ptr [0x108e2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2450))), 0x108b1c80u);
  /* 108b1c80 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1c85 call 0x108b2a20 */
  push32(0x108b1c8au); f_108b2a20();
L_108b1c8a:;
  /* 108b1c8a mov esi, esp */
  ESI = (ESP);
  /* 108b1c8c push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1c8e push 0x108df4b0 */
  push32((uint32_t)(0x108df4b0u));
  /* 108b1c93 call dword ptr [0x108e2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2448))), 0x108b1c99u);
  /* 108b1c99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1c9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1c9e call 0x108b2a20 */
  push32(0x108b1ca3u); f_108b2a20();
  /* 108b1ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1ca5 jle 0x108b1cdb */
  if ((C.zf||C.sf!=C.of)) goto L_108b1cdb;
  /* 108b1ca7 mov esi, esp */
  ESI = (ESP);
  /* 108b1ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1cab push 0x108df4b0 */
  push32((uint32_t)(0x108df4b0u));
  /* 108b1cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1cb2 call dword ptr [0x108e2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2458))), 0x108b1cb8u);
  /* 108b1cb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1cbd call 0x108b2a20 */
  push32(0x108b1cc2u); f_108b2a20();
  /* 108b1cc2 mov esi, esp */
  ESI = (ESP);
  /* 108b1cc4 push 0x108df468 */
  push32((uint32_t)(0x108df468u));
  /* 108b1cc9 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1ccb call dword ptr [0x108e244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e244c))), 0x108b1cd1u);
  /* 108b1cd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1cd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1cd6 call 0x108b2a20 */
  push32(0x108b1cdbu); f_108b2a20();
L_108b1cdb:;
  /* 108b1cdb mov esi, esp */
  ESI = (ESP);
  /* 108b1cdd push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1cdf push 0x108df468 */
  push32((uint32_t)(0x108df468u));
  /* 108b1ce4 call dword ptr [0x108e2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2448))), 0x108b1ceau);
  /* 108b1cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1ced cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1cef call 0x108b2a20 */
  push32(0x108b1cf4u); f_108b2a20();
  /* 108b1cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1cf6 jle 0x108b1d3b */
  if ((C.zf||C.sf!=C.of)) goto L_108b1d3b;
  /* 108b1cf8 mov esi, esp */
  ESI = (ESP);
  /* 108b1cfa push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1cfc call dword ptr [0x108e245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e245c))), 0x108b1d02u);
  /* 108b1d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1d05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1d07 call 0x108b2a20 */
  push32(0x108b1d0cu); f_108b2a20();
  /* 108b1d0c mov esi, esp */
  ESI = (ESP);
  /* 108b1d0e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1d10 push 0x108df468 */
  push32((uint32_t)(0x108df468u));
  /* 108b1d15 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1d17 call dword ptr [0x108e2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2458))), 0x108b1d1du);
  /* 108b1d1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1d20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1d22 call 0x108b2a20 */
  push32(0x108b1d27u); f_108b2a20();
  /* 108b1d27 mov esi, esp */
  ESI = (ESP);
  /* 108b1d29 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1d2b call dword ptr [0x108e2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2454))), 0x108b1d31u);
  /* 108b1d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1d34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1d36 call 0x108b2a20 */
  push32(0x108b1d3bu); f_108b2a20();
L_108b1d3b:;
  /* 108b1d3b mov esi, esp */
  ESI = (ESP);
  /* 108b1d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1d3f push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b1d44 call dword ptr [0x108e2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2448))), 0x108b1d4au);
  /* 108b1d4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1d4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1d4f call 0x108b2a20 */
  push32(0x108b1d54u); f_108b2a20();
  /* 108b1d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1d56 jle 0x108b1d9b */
  if ((C.zf||C.sf!=C.of)) goto L_108b1d9b;
  /* 108b1d58 mov esi, esp */
  ESI = (ESP);
  /* 108b1d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1d5c call dword ptr [0x108e245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e245c))), 0x108b1d62u);
  /* 108b1d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1d65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1d67 call 0x108b2a20 */
  push32(0x108b1d6cu); f_108b2a20();
  /* 108b1d6c mov esi, esp */
  ESI = (ESP);
  /* 108b1d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1d70 push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b1d75 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1d77 call dword ptr [0x108e2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2458))), 0x108b1d7du);
  /* 108b1d7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1d80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1d82 call 0x108b2a20 */
  push32(0x108b1d87u); f_108b2a20();
  /* 108b1d87 mov esi, esp */
  ESI = (ESP);
  /* 108b1d89 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1d8b call dword ptr [0x108e2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2454))), 0x108b1d91u);
  /* 108b1d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1d94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1d96 call 0x108b2a20 */
  push32(0x108b1d9bu); f_108b2a20();
L_108b1d9b:;
  /* 108b1d9b mov esi, esp */
  ESI = (ESP);
  /* 108b1d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 108b1d9f call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b1da5u);
  /* 108b1da5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1da8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1daa call 0x108b2a20 */
  push32(0x108b1dafu); f_108b2a20();
  /* 108b1daf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1db4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1db6 je 0x108b1e06 */
  if (C.zf) goto L_108b1e06;
  /* 108b1db8 push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b1dbd call 0x108b1005 */
  push32(0x108b1dc2u); f_108b1005();
  /* 108b1dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1dc5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1dc8 jge 0x108b1e06 */
  if ((C.sf==C.of)) goto L_108b1e06;
  /* 108b1dca mov esi, esp */
  ESI = (ESP);
  /* 108b1dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1dce push 2 */
  push32((uint32_t)(0x2u));
  /* 108b1dd0 call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b1dd6u);
  /* 108b1dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1dd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1ddb call 0x108b2a20 */
  push32(0x108b1de0u); f_108b2a20();
  /* 108b1de0 mov esi, esp */
  ESI = (ESP);
  /* 108b1de2 push 0x108da104 */
  push32((uint32_t)(0x108da104u));
  /* 108b1de7 call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b1dedu);
  /* 108b1ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1df0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1df2 call 0x108b2a20 */
  push32(0x108b1df7u); f_108b2a20();
  /* 108b1df7 mov esi, esp */
  ESI = (ESP);
  /* 108b1df9 call dword ptr [0x108e2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2464))), 0x108b1dffu);
  /* 108b1dff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1e01 call 0x108b2a20 */
  push32(0x108b1e06u); f_108b2a20();
L_108b1e06:;
  /* 108b1e06 mov esi, esp */
  ESI = (ESP);
  /* 108b1e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b1e0a call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b1e10u);
  /* 108b1e10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1e15 call 0x108b2a20 */
  push32(0x108b1e1au); f_108b2a20();
  /* 108b1e1a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1e21 je 0x108b1e8e */
  if (C.zf) goto L_108b1e8e;
  /* 108b1e23 push 0x108df468 */
  push32((uint32_t)(0x108df468u));
  /* 108b1e28 call 0x108b1005 */
  push32(0x108b1e2du); f_108b1005();
  /* 108b1e2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1e30 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1e33 jge 0x108b1e8e */
  if ((C.sf==C.of)) goto L_108b1e8e;
  /* 108b1e35 mov esi, esp */
  ESI = (ESP);
  /* 108b1e37 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1e39 call dword ptr [0x108e243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e243c))), 0x108b1e3fu);
  /* 108b1e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1e42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1e44 call 0x108b2a20 */
  push32(0x108b1e49u); f_108b2a20();
  /* 108b1e49 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1e4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1e50 jne 0x108b1e8e */
  if (!C.zf) goto L_108b1e8e;
  /* 108b1e52 mov esi, esp */
  ESI = (ESP);
  /* 108b1e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1e56 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b1e58 call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b1e5eu);
  /* 108b1e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1e61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1e63 call 0x108b2a20 */
  push32(0x108b1e68u); f_108b2a20();
  /* 108b1e68 mov esi, esp */
  ESI = (ESP);
  /* 108b1e6a push 0x108da0fc */
  push32((uint32_t)(0x108da0fcu));
  /* 108b1e6f call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b1e75u);
  /* 108b1e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1e78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1e7a call 0x108b2a20 */
  push32(0x108b1e7fu); f_108b2a20();
  /* 108b1e7f mov esi, esp */
  ESI = (ESP);
  /* 108b1e81 call dword ptr [0x108e2464] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2464))), 0x108b1e87u);
  /* 108b1e87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1e89 call 0x108b2a20 */
  push32(0x108b1e8eu); f_108b2a20();
L_108b1e8e:;
  /* 108b1e8e mov esi, esp */
  ESI = (ESP);
  /* 108b1e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1e92 call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b1e98u);
  /* 108b1e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1e9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1e9d call 0x108b2a20 */
  push32(0x108b1ea2u); f_108b2a20();
  /* 108b1ea2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1ea9 je 0x108b1f56 */
  if (C.zf) goto L_108b1f56;
  /* 108b1eaf mov esi, esp */
  ESI = (ESP);
  /* 108b1eb1 push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b1eb6 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b1ebb call dword ptr [0x108e2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2430))), 0x108b1ec1u);
  /* 108b1ec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1ec4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1ec6 call 0x108b2a20 */
  push32(0x108b1ecbu); f_108b2a20();
  /* 108b1ecb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1ece jne 0x108b1f56 */
  if (!C.zf) goto L_108b1f56;
  /* 108b1ed4 mov esi, esp */
  ESI = (ESP);
  /* 108b1ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1ed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1eda call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b1ee0u);
  /* 108b1ee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1ee3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1ee5 call 0x108b2a20 */
  push32(0x108b1eeau); f_108b2a20();
  /* 108b1eea mov esi, esp */
  ESI = (ESP);
  /* 108b1eec push 0x108da0f4 */
  push32((uint32_t)(0x108da0f4u));
  /* 108b1ef1 call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b1ef7u);
  /* 108b1ef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1efa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1efc call 0x108b2a20 */
  push32(0x108b1f01u); f_108b2a20();
  /* 108b1f01 mov esi, esp */
  ESI = (ESP);
  /* 108b1f03 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 108b1f05 call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b1f0bu);
  /* 108b1f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1f0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1f10 call 0x108b2a20 */
  push32(0x108b1f15u); f_108b2a20();
  /* 108b1f15 mov esi, esp */
  ESI = (ESP);
  /* 108b1f17 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 108b1f19 call dword ptr [0x108e2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2468))), 0x108b1f1fu);
  /* 108b1f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1f22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1f24 call 0x108b2a20 */
  push32(0x108b1f29u); f_108b2a20();
  /* 108b1f29 mov esi, esp */
  ESI = (ESP);
  /* 108b1f2b push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108b1f2d call dword ptr [0x108e2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2468))), 0x108b1f33u);
  /* 108b1f33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1f36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1f38 call 0x108b2a20 */
  push32(0x108b1f3du); f_108b2a20();
  /* 108b1f3d mov esi, esp */
  ESI = (ESP);
  /* 108b1f3f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 108b1f44 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1f46 call dword ptr [0x108e2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2460))), 0x108b1f4cu);
  /* 108b1f4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1f4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1f51 call 0x108b2a20 */
  push32(0x108b1f56u); f_108b2a20();
L_108b1f56:;
  /* 108b1f56 mov esi, esp */
  ESI = (ESP);
  /* 108b1f58 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b1f5a call dword ptr [0x108e2470] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2470))), 0x108b1f60u);
  /* 108b1f60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1f63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1f65 call 0x108b2a20 */
  push32(0x108b1f6au); f_108b2a20();
  /* 108b1f6a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b1f6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1f71 je 0x108b204e */
  if (C.zf) goto L_108b204e;
  /* 108b1f77 mov esi, esp */
  ESI = (ESP);
  /* 108b1f79 push 0x108da0ec */
  push32((uint32_t)(0x108da0ecu));
  /* 108b1f7e call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b1f84u);
  /* 108b1f84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1f87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1f89 call 0x108b2a20 */
  push32(0x108b1f8eu); f_108b2a20();
  /* 108b1f8e mov esi, esp */
  ESI = (ESP);
  /* 108b1f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1f92 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b1f98u);
  /* 108b1f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1f9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1f9d call 0x108b2a20 */
  push32(0x108b1fa2u); f_108b2a20();
  /* 108b1fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b1fa4 jne 0x108b1fea */
  if (!C.zf) goto L_108b1fea;
  /* 108b1fa6 mov esi, esp */
  ESI = (ESP);
  /* 108b1fa8 push 0x108da10c */
  push32((uint32_t)(0x108da10cu));
  /* 108b1fad call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b1fb3u);
  /* 108b1fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1fb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1fb8 call 0x108b2a20 */
  push32(0x108b1fbdu); f_108b2a20();
  /* 108b1fbd mov esi, esp */
  ESI = (ESP);
  /* 108b1fbf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108b1fc4 push 0x108df4e8 */
  push32((uint32_t)(0x108df4e8u));
  /* 108b1fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b1fcb push 0x108df500 */
  push32((uint32_t)(0x108df500u));
  /* 108b1fd0 push 0x108df3e8 */
  push32((uint32_t)(0x108df3e8u));
  /* 108b1fd5 push 0x108df410 */
  push32((uint32_t)(0x108df410u));
  /* 108b1fda call dword ptr [0x108e2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2450))), 0x108b1fe0u);
  /* 108b1fe0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1fe5 call 0x108b2a20 */
  push32(0x108b1feau); f_108b2a20();
L_108b1fea:;
  /* 108b1fea mov esi, esp */
  ESI = (ESP);
  /* 108b1fec push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108b1fee call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b1ff4u);
  /* 108b1ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b1ff7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b1ff9 call 0x108b2a20 */
  push32(0x108b1ffeu); f_108b2a20();
  /* 108b1ffe mov esi, esp */
  ESI = (ESP);
  /* 108b2000 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 108b2002 call dword ptr [0x108e2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2468))), 0x108b2008u);
  /* 108b2008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b200b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b200d call 0x108b2a20 */
  push32(0x108b2012u); f_108b2a20();
  /* 108b2012 mov esi, esp */
  ESI = (ESP);
  /* 108b2014 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 108b2016 call dword ptr [0x108e2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2468))), 0x108b201cu);
  /* 108b201c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b201f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2021 call 0x108b2a20 */
  push32(0x108b2026u); f_108b2a20();
  /* 108b2026 mov esi, esp */
  ESI = (ESP);
  /* 108b2028 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 108b202a call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b2030u);
  /* 108b2030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2033 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2035 call 0x108b2a20 */
  push32(0x108b203au); f_108b2a20();
  /* 108b203a mov esi, esp */
  ESI = (ESP);
  /* 108b203c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 108b203e call dword ptr [0x108e2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2468))), 0x108b2044u);
  /* 108b2044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2047 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2049 call 0x108b2a20 */
  push32(0x108b204eu); f_108b2a20();
L_108b204e:;
  /* 108b204e mov esi, esp */
  ESI = (ESP);
  /* 108b2050 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2052 call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b2058u);
  /* 108b2058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b205b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b205d call 0x108b2a20 */
  push32(0x108b2062u); f_108b2a20();
  /* 108b2062 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2067 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b2069 jne 0x108b214f */
  if (!C.zf) goto L_108b214f;
  /* 108b206f mov esi, esp */
  ESI = (ESP);
  /* 108b2071 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b2073 call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b2079u);
  /* 108b2079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b207c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b207e call 0x108b2a20 */
  push32(0x108b2083u); f_108b2a20();
  /* 108b2083 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b208a je 0x108b214f */
  if (C.zf) goto L_108b214f;
  /* 108b2090 mov esi, esp */
  ESI = (ESP);
  /* 108b2092 push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b2097 push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b209c call dword ptr [0x108e2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2430))), 0x108b20a2u);
  /* 108b20a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b20a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b20a7 call 0x108b2a20 */
  push32(0x108b20acu); f_108b2a20();
  /* 108b20ac cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b20af jge 0x108b214f */
  if ((C.sf==C.of)) goto L_108b214f;
  /* 108b20b5 mov esi, esp */
  ESI = (ESP);
  /* 108b20b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b20b9 call dword ptr [0x108e243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e243c))), 0x108b20bfu);
  /* 108b20bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b20c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b20c4 call 0x108b2a20 */
  push32(0x108b20c9u); f_108b2a20();
  /* 108b20c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b20ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b20d0 jne 0x108b214f */
  if (!C.zf) goto L_108b214f;
  /* 108b20d2 mov esi, esp */
  ESI = (ESP);
  /* 108b20d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b20d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b20d8 call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b20deu);
  /* 108b20de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b20e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b20e3 call 0x108b2a20 */
  push32(0x108b20e8u); f_108b2a20();
  /* 108b20e8 mov esi, esp */
  ESI = (ESP);
  /* 108b20ea push 0x108da0e4 */
  push32((uint32_t)(0x108da0e4u));
  /* 108b20ef call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b20f5u);
  /* 108b20f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b20f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b20fa call 0x108b2a20 */
  push32(0x108b20ffu); f_108b2a20();
  /* 108b20ff mov esi, esp */
  ESI = (ESP);
  /* 108b2101 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108b2103 call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b2109u);
  /* 108b2109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b210c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b210e call 0x108b2a20 */
  push32(0x108b2113u); f_108b2a20();
  /* 108b2113 mov esi, esp */
  ESI = (ESP);
  /* 108b2115 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 108b2117 call dword ptr [0x108e2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2434))), 0x108b211du);
  /* 108b211d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2120 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2122 call 0x108b2a20 */
  push32(0x108b2127u); f_108b2a20();
  /* 108b2127 mov esi, esp */
  ESI = (ESP);
  /* 108b2129 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 108b212b call dword ptr [0x108e2468] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2468))), 0x108b2131u);
  /* 108b2131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2134 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2136 call 0x108b2a20 */
  push32(0x108b213bu); f_108b2a20();
  /* 108b213b mov esi, esp */
  ESI = (ESP);
  /* 108b213d push 1 */
  push32((uint32_t)(0x1u));
  /* 108b213f call dword ptr [0x108e2474] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2474))), 0x108b2145u);
  /* 108b2145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2148 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b214a call 0x108b2a20 */
  push32(0x108b214fu); f_108b2a20();
L_108b214f:;
  /* 108b214f mov esi, esp */
  ESI = (ESP);
  /* 108b2151 push 3 */
  push32((uint32_t)(0x3u));
  /* 108b2153 call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b2159u);
  /* 108b2159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b215c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b215e call 0x108b2a20 */
  push32(0x108b2163u); f_108b2a20();
  /* 108b2163 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b216a je 0x108b2254 */
  if (C.zf) goto L_108b2254;
  /* 108b2170 mov esi, esp */
  ESI = (ESP);
  /* 108b2172 push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b2177 push 0x108df4f8 */
  push32((uint32_t)(0x108df4f8u));
  /* 108b217c call dword ptr [0x108e2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2430))), 0x108b2182u);
  /* 108b2182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2187 call 0x108b2a20 */
  push32(0x108b218cu); f_108b2a20();
  /* 108b218c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b218e jle 0x108b2254 */
  if ((C.zf||C.sf!=C.of)) goto L_108b2254;
  /* 108b2194 mov esi, esp */
  ESI = (ESP);
  /* 108b2196 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2198 call dword ptr [0x108e243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e243c))), 0x108b219eu);
  /* 108b219e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b21a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b21a3 call 0x108b2a20 */
  push32(0x108b21a8u); f_108b2a20();
  /* 108b21a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b21ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b21af je 0x108b2254 */
  if (C.zf) goto L_108b2254;
  /* 108b21b5 mov esi, esp */
  ESI = (ESP);
  /* 108b21b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b21b9 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b21bfu);
  /* 108b21bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b21c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b21c4 call 0x108b2a20 */
  push32(0x108b21c9u); f_108b2a20();
  /* 108b21c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b21cc jle 0x108b2254 */
  if ((C.zf||C.sf!=C.of)) goto L_108b2254;
  /* 108b21d2 mov esi, esp */
  ESI = (ESP);
  /* 108b21d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b21d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 108b21d8 call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b21deu);
  /* 108b21de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b21e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b21e3 call 0x108b2a20 */
  push32(0x108b21e8u); f_108b2a20();
  /* 108b21e8 mov esi, esp */
  ESI = (ESP);
  /* 108b21ea push 0 */
  push32((uint32_t)(0x0u));
  /* 108b21ec push 0x108df4a0 */
  push32((uint32_t)(0x108df4a0u));
  /* 108b21f1 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b21f7u);
  /* 108b21f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b21fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b21fc call 0x108b2a20 */
  push32(0x108b2201u); f_108b2a20();
  /* 108b2201 mov esi, esp */
  ESI = (ESP);
  /* 108b2203 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b2205 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b2207 push 0x108df4c8 */
  push32((uint32_t)(0x108df4c8u));
  /* 108b220c push 1 */
  push32((uint32_t)(0x1u));
  /* 108b220e call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b2214u);
  /* 108b2214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2219 call 0x108b2a20 */
  push32(0x108b221eu); f_108b2a20();
  /* 108b221e mov esi, esp */
  ESI = (ESP);
  /* 108b2220 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b2222 push 0x108df4a8 */
  push32((uint32_t)(0x108df4a8u));
  /* 108b2227 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b222du);
  /* 108b222d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2230 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2232 call 0x108b2a20 */
  push32(0x108b2237u); f_108b2a20();
  /* 108b2237 mov esi, esp */
  ESI = (ESP);
  /* 108b2239 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b223b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b223d push 0x108df4f8 */
  push32((uint32_t)(0x108df4f8u));
  /* 108b2242 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2244 call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b224au);
  /* 108b224a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b224d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b224f call 0x108b2a20 */
  push32(0x108b2254u); f_108b2a20();
L_108b2254:;
  /* 108b2254 mov esi, esp */
  ESI = (ESP);
  /* 108b2256 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b2258 call dword ptr [0x108e2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2414))), 0x108b225eu);
  /* 108b225e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2263 call 0x108b2a20 */
  push32(0x108b2268u); f_108b2a20();
  /* 108b2268 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b226d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b226f je 0x108b22eb */
  if (C.zf) goto L_108b22eb;
  /* 108b2271 mov esi, esp */
  ESI = (ESP);
  /* 108b2273 push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b2278 push 0x108df4c8 */
  push32((uint32_t)(0x108df4c8u));
  /* 108b227d call dword ptr [0x108e2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2430))), 0x108b2283u);
  /* 108b2283 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2286 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2288 call 0x108b2a20 */
  push32(0x108b228du); f_108b2a20();
  /* 108b228d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2290 jne 0x108b22eb */
  if (!C.zf) goto L_108b22eb;
  /* 108b2292 mov esi, esp */
  ESI = (ESP);
  /* 108b2294 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2296 call dword ptr [0x108e243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e243c))), 0x108b229cu);
  /* 108b229c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b229f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b22a1 call 0x108b2a20 */
  push32(0x108b22a6u); f_108b2a20();
  /* 108b22a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b22ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b22ad je 0x108b22eb */
  if (C.zf) goto L_108b22eb;
  /* 108b22af mov esi, esp */
  ESI = (ESP);
  /* 108b22b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b22b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b22b5 call dword ptr [0x108e240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e240c))), 0x108b22bbu);
  /* 108b22bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b22be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b22c0 call 0x108b2a20 */
  push32(0x108b22c5u); f_108b2a20();
  /* 108b22c5 mov esi, esp */
  ESI = (ESP);
  /* 108b22c7 push 0x108da0dc */
  push32((uint32_t)(0x108da0dcu));
  /* 108b22cc call dword ptr [0x108e2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2420))), 0x108b22d2u);
  /* 108b22d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b22d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b22d7 call 0x108b2a20 */
  push32(0x108b22dcu); f_108b2a20();
  /* 108b22dc mov esi, esp */
  ESI = (ESP);
  /* 108b22de call dword ptr [0x108e246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e246c))), 0x108b22e4u);
  /* 108b22e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b22e6 call 0x108b2a20 */
  push32(0x108b22ebu); f_108b2a20();
L_108b22eb:;
  /* 108b22eb mov esi, esp */
  ESI = (ESP);
  /* 108b22ed call dword ptr [0x108e2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2438))), 0x108b22f3u);
  /* 108b22f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b22f5 call 0x108b2a20 */
  push32(0x108b22fau); f_108b2a20();
  /* 108b22fa mov esi, eax */
  ESI = (EAX);
  /* 108b22fc mov edi, esp */
  EDI = (ESP);
  /* 108b22fe push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2300 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b2306u);
  /* 108b2306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2309 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b230b call 0x108b2a20 */
  push32(0x108b2310u); f_108b2a20();
  /* 108b2310 imul eax, eax, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x258u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b2316 mov edi, 0x1f40 */
  EDI = (0x1f40u);
  /* 108b231b sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b231d mov ebx, esp */
  EBX = (ESP);
  /* 108b231f push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2321 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b2327u);
  /* 108b2327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b232a cmp ebx, esp */
  { uint32_t _a=(EBX),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b232c call 0x108b2a20 */
  push32(0x108b2331u); f_108b2a20();
  /* 108b2331 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b2337 mov edx, 0x9c4 */
  EDX = (0x9c4u);
  /* 108b233c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b233e mov eax, dword ptr [0x108df404] */
  EAX = (r32((uint32_t)(0x108df404)));
  /* 108b2343 imul eax, edx */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b2346 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2348 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b234a jle 0x108b2473 */
  if ((C.zf||C.sf!=C.of)) goto L_108b2473;
  /* 108b2350 cmp dword ptr [0x108df404], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x108df404))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2357 jge 0x108b2473 */
  if ((C.sf==C.of)) goto L_108b2473;
  /* 108b235d mov esi, esp */
  ESI = (ESP);
  /* 108b235f push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2361 call dword ptr [0x108e242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e242c))), 0x108b2367u);
  /* 108b2367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b236a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b236c call 0x108b2a20 */
  push32(0x108b2371u); f_108b2a20();
  /* 108b2371 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b2374 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2378 je 0x108b2382 */
  if (C.zf) goto L_108b2382;
  /* 108b237a cmp dword ptr [ebp - 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b237e je 0x108b23ba */
  if (C.zf) goto L_108b23ba;
  /* 108b2380 jmp 0x108b23f1 */
  goto L_108b23f1;
L_108b2382:;
  /* 108b2382 mov esi, esp */
  ESI = (ESP);
  /* 108b2384 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108b2389 push 0x108df4f0 */
  push32((uint32_t)(0x108df4f0u));
  /* 108b238e push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2390 push 0x108df508 */
  push32((uint32_t)(0x108df508u));
  /* 108b2395 push 0x108df3f8 */
  push32((uint32_t)(0x108df3f8u));
  /* 108b239a mov ecx, dword ptr [0x108df404] */
  ECX = (r32((uint32_t)(0x108df404)));
  /* 108b23a0 lea edx, [ecx*8 + 0x108df418] */
  EDX = ((uint32_t)(ECX*8 + 0x108df418));
  /* 108b23a7 push edx */
  push32((uint32_t)(EDX));
  /* 108b23a8 call dword ptr [0x108e2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2450))), 0x108b23aeu);
  /* 108b23ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b23b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b23b3 call 0x108b2a20 */
  push32(0x108b23b8u); f_108b2a20();
  /* 108b23b8 jmp 0x108b2427 */
  goto L_108b2427;
L_108b23ba:;
  /* 108b23ba mov esi, esp */
  ESI = (ESP);
  /* 108b23bc push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108b23c1 push 0x108df4f0 */
  push32((uint32_t)(0x108df4f0u));
  /* 108b23c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b23c8 push 0x108df508 */
  push32((uint32_t)(0x108df508u));
  /* 108b23cd push 0x108df3e8 */
  push32((uint32_t)(0x108df3e8u));
  /* 108b23d2 mov eax, dword ptr [0x108df404] */
  EAX = (r32((uint32_t)(0x108df404)));
  /* 108b23d7 lea ecx, [eax*8 + 0x108df418] */
  ECX = ((uint32_t)(EAX*8 + 0x108df418));
  /* 108b23de push ecx */
  push32((uint32_t)(ECX));
  /* 108b23df call dword ptr [0x108e2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2450))), 0x108b23e5u);
  /* 108b23e5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b23e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b23ea call 0x108b2a20 */
  push32(0x108b23efu); f_108b2a20();
  /* 108b23ef jmp 0x108b2427 */
  goto L_108b2427;
L_108b23f1:;
  /* 108b23f1 mov esi, esp */
  ESI = (ESP);
  /* 108b23f3 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108b23f8 push 0x108df4f0 */
  push32((uint32_t)(0x108df4f0u));
  /* 108b23fd push 1 */
  push32((uint32_t)(0x1u));
  /* 108b23ff push 0x108df508 */
  push32((uint32_t)(0x108df508u));
  /* 108b2404 push 0x108df3e0 */
  push32((uint32_t)(0x108df3e0u));
  /* 108b2409 mov edx, dword ptr [0x108df404] */
  EDX = (r32((uint32_t)(0x108df404)));
  /* 108b240f lea eax, [edx*8 + 0x108df418] */
  EAX = ((uint32_t)(EDX*8 + 0x108df418));
  /* 108b2416 push eax */
  push32((uint32_t)(EAX));
  /* 108b2417 call dword ptr [0x108e2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2450))), 0x108b241du);
  /* 108b241d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2420 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2422 call 0x108b2a20 */
  push32(0x108b2427u); f_108b2a20();
L_108b2427:;
  /* 108b2427 mov esi, esp */
  ESI = (ESP);
  /* 108b2429 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b242b mov ecx, dword ptr [0x108df404] */
  ECX = (r32((uint32_t)(0x108df404)));
  /* 108b2431 lea edx, [ecx*8 + 0x108df418] */
  EDX = ((uint32_t)(ECX*8 + 0x108df418));
  /* 108b2438 push edx */
  push32((uint32_t)(EDX));
  /* 108b2439 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b243fu);
  /* 108b243f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2444 call 0x108b2a20 */
  push32(0x108b2449u); f_108b2a20();
  /* 108b2449 mov esi, esp */
  ESI = (ESP);
  /* 108b244b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b244d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b244f push 0x108df4c0 */
  push32((uint32_t)(0x108df4c0u));
  /* 108b2454 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2456 call dword ptr [0x108e2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2428))), 0x108b245cu);
  /* 108b245c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b245f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2461 call 0x108b2a20 */
  push32(0x108b2466u); f_108b2a20();
  /* 108b2466 mov eax, dword ptr [0x108df404] */
  EAX = (r32((uint32_t)(0x108df404)));
  /* 108b246b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b246e mov dword ptr [0x108df404], eax */
  w32((uint32_t)(0x108df404), (EAX));
L_108b2473:;
  /* 108b2473 mov dword ptr [0x108df400], 0 */
  w32((uint32_t)(0x108df400), (0x0u));
  /* 108b247d jmp 0x108b248e */
  goto L_108b248e;
L_108b247f:;
  /* 108b247f mov ecx, dword ptr [0x108df400] */
  ECX = (r32((uint32_t)(0x108df400)));
  /* 108b2485 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2488 mov dword ptr [0x108df400], ecx */
  w32((uint32_t)(0x108df400), (ECX));
L_108b248e:;
  /* 108b248e mov edx, dword ptr [0x108df400] */
  EDX = (r32((uint32_t)(0x108df400)));
  /* 108b2494 cmp edx, dword ptr [0x108df404] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108df404))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b249a jge 0x108b24f2 */
  if ((C.sf==C.of)) goto L_108b24f2;
  /* 108b249c mov eax, dword ptr [0x108df400] */
  EAX = (r32((uint32_t)(0x108df400)));
  /* 108b24a1 lea ecx, [eax*8 + 0x108df418] */
  ECX = ((uint32_t)(EAX*8 + 0x108df418));
  /* 108b24a8 push ecx */
  push32((uint32_t)(ECX));
  /* 108b24a9 call 0x108b1005 */
  push32(0x108b24aeu); f_108b1005();
  /* 108b24ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b24b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b24b3 jle 0x108b24f0 */
  if ((C.zf||C.sf!=C.of)) goto L_108b24f0;
  /* 108b24b5 mov esi, esp */
  ESI = (ESP);
  /* 108b24b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b24b9 mov edx, dword ptr [0x108df400] */
  EDX = (r32((uint32_t)(0x108df400)));
  /* 108b24bf lea eax, [edx*8 + 0x108df418] */
  EAX = ((uint32_t)(EDX*8 + 0x108df418));
  /* 108b24c6 push eax */
  push32((uint32_t)(EAX));
  /* 108b24c7 call dword ptr [0x108e2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2418))), 0x108b24cdu);
  /* 108b24cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b24d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b24d2 call 0x108b2a20 */
  push32(0x108b24d7u); f_108b2a20();
  /* 108b24d7 mov esi, esp */
  ESI = (ESP);
  /* 108b24d9 push 0x108df470 */
  push32((uint32_t)(0x108df470u));
  /* 108b24de push 1 */
  push32((uint32_t)(0x1u));
  /* 108b24e0 call dword ptr [0x108e244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e244c))), 0x108b24e6u);
  /* 108b24e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b24e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b24eb call 0x108b2a20 */
  push32(0x108b24f0u); f_108b2a20();
L_108b24f0:;
  /* 108b24f0 jmp 0x108b247f */
  goto L_108b247f;
L_108b24f2:;
  /* 108b24f2 pop edi */
  EDI = (pop32());
  /* 108b24f3 pop esi */
  ESI = (pop32());
  /* 108b24f4 pop ebx */
  EBX = (pop32());
  /* 108b24f5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b24f8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b24fa call 0x108b2a20 */
  push32(0x108b24ffu); f_108b2a20();
  /* 108b24ff mov esp, ebp */
  ESP = (EBP);
  /* 108b2501 pop ebp */
  EBP = (pop32());
  /* 108b2502 ret  */
  ESPCHK(0x108b1510u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x108b2900 (63 bytes, 26 insns) */
void f_108b2900(void) {
  FTRACE(0x108b2900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2900 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2901 mov ebp, esp */
  EBP = (ESP);
  /* 108b2903 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b2906 push ebx */
  push32((uint32_t)(EBX));
  /* 108b2907 push esi */
  push32((uint32_t)(ESI));
  /* 108b2908 push edi */
  push32((uint32_t)(EDI));
  /* 108b2909 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 108b290c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 108b2911 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108b2916 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108b2918 mov esi, esp */
  ESI = (ESP);
  /* 108b291a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b291d push eax */
  push32((uint32_t)(EAX));
  /* 108b291e call dword ptr [0x108e2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2410))), 0x108b2924u);
  /* 108b2924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2927 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2929 call 0x108b2a20 */
  push32(0x108b292eu); f_108b2a20();
  /* 108b292e pop edi */
  EDI = (pop32());
  /* 108b292f pop esi */
  ESI = (pop32());
  /* 108b2930 pop ebx */
  EBX = (pop32());
  /* 108b2931 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2934 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2936 call 0x108b2a20 */
  push32(0x108b293bu); f_108b2a20();
  /* 108b293b mov esp, ebp */
  ESP = (EBP);
  /* 108b293d pop ebp */
  EBP = (pop32());
  /* 108b293e ret  */
  ESPCHK(0x108b2900u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x108b2a20 (56 bytes, 28 insns) */
void f_108b2a20(void) {
  FTRACE(0x108b2a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2a20 jne 0x108b2a23 */
  if (!C.zf) goto L_108b2a23;
  /* 108b2a22 ret  */
  ESPCHK(0x108b2a20u, _esp0);
  ESP += 4; return;
L_108b2a23:;
  /* 108b2a23 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2a24 mov ebp, esp */
  EBP = (ESP);
  /* 108b2a26 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b2a29 push eax */
  push32((uint32_t)(EAX));
  /* 108b2a2a push edx */
  push32((uint32_t)(EDX));
  /* 108b2a2b push ebx */
  push32((uint32_t)(EBX));
  /* 108b2a2c push esi */
  push32((uint32_t)(ESI));
  /* 108b2a2d push edi */
  push32((uint32_t)(EDI));
  /* 108b2a2e push 0x108da130 */
  push32((uint32_t)(0x108da130u));
  /* 108b2a33 push 0x108da12c */
  push32((uint32_t)(0x108da12cu));
  /* 108b2a38 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 108b2a3a push 0x108da11c */
  push32((uint32_t)(0x108da11cu));
  /* 108b2a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2a41 call 0x108b2df0 */
  push32(0x108b2a46u); f_108b2df0();
  /* 108b2a46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2a49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2a4c jne 0x108b2a4f */
  if (!C.zf) goto L_108b2a4f;
  /* 108b2a4e int3  */
  x86_unimpl("int3 @ 0x108b2a4e");
L_108b2a4f:;
  /* 108b2a4f pop edi */
  EDI = (pop32());
  /* 108b2a50 pop esi */
  ESI = (pop32());
  /* 108b2a51 pop ebx */
  EBX = (pop32());
  /* 108b2a52 pop edx */
  EDX = (pop32());
  /* 108b2a53 pop eax */
  EAX = (pop32());
  /* 108b2a54 mov esp, ebp */
  ESP = (EBP);
  /* 108b2a56 pop ebp */
  EBP = (pop32());
  /* 108b2a57 ret  */
  ESPCHK(0x108b2a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a60 @ 0x108b2a60 (313 bytes, 78 insns) */
void f_108b2a60(void) {
  FTRACE(0x108b2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2a61 mov ebp, esp */
  EBP = (ESP);
  /* 108b2a63 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2a67 jne 0x108b2b27 */
  if (!C.zf) goto L_108b2b27;
  /* 108b2a6d call dword ptr [0x108e2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2310))), 0x108b2a73u);
  /* 108b2a73 mov dword ptr [0x108df570], eax */
  w32((uint32_t)(0x108df570), (EAX));
  /* 108b2a78 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b2a7a call 0x108b6520 */
  push32(0x108b2a7fu); f_108b6520();
  /* 108b2a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b2a84 jne 0x108b2a8d */
  if (!C.zf) goto L_108b2a8d;
  /* 108b2a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b2a88 jmp 0x108b2b95 */
  goto L_108b2b95;
L_108b2a8d:;
  /* 108b2a8d mov eax, dword ptr [0x108df570] */
  EAX = (r32((uint32_t)(0x108df570)));
  /* 108b2a92 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 108b2a95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2a9a mov dword ptr [0x108df57c], eax */
  w32((uint32_t)(0x108df57c), (EAX));
  /* 108b2a9f mov ecx, dword ptr [0x108df570] */
  ECX = (r32((uint32_t)(0x108df570)));
  /* 108b2aa5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b2aab mov dword ptr [0x108df578], ecx */
  w32((uint32_t)(0x108df578), (ECX));
  /* 108b2ab1 mov edx, dword ptr [0x108df578] */
  EDX = (r32((uint32_t)(0x108df578)));
  /* 108b2ab7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 108b2aba add edx, dword ptr [0x108df57c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108df57c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2ac0 mov dword ptr [0x108df574], edx */
  w32((uint32_t)(0x108df574), (EDX));
  /* 108b2ac6 mov eax, dword ptr [0x108df570] */
  EAX = (r32((uint32_t)(0x108df570)));
  /* 108b2acb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108b2ace and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2ad3 mov dword ptr [0x108df570], eax */
  w32((uint32_t)(0x108df570), (EAX));
  /* 108b2ad8 call 0x108b3690 */
  push32(0x108b2addu); f_108b3690();
  /* 108b2add test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b2adf jne 0x108b2aed */
  if (!C.zf) goto L_108b2aed;
  /* 108b2ae1 call 0x108b6570 */
  push32(0x108b2ae6u); f_108b6570();
  /* 108b2ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b2ae8 jmp 0x108b2b95 */
  goto L_108b2b95;
L_108b2aed:;
  /* 108b2aed call dword ptr [0x108e230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e230c))), 0x108b2af3u);
  /* 108b2af3 mov dword ptr [0x108e10ac], eax */
  w32((uint32_t)(0x108e10ac), (EAX));
  /* 108b2af8 call 0x108b6300 */
  push32(0x108b2afdu); f_108b6300();
  /* 108b2afd mov dword ptr [0x108df558], eax */
  w32((uint32_t)(0x108df558), (EAX));
  /* 108b2b02 call 0x108b3940 */
  push32(0x108b2b07u); f_108b3940();
  /* 108b2b07 call 0x108b5df0 */
  push32(0x108b2b0cu); f_108b5df0();
  /* 108b2b0c call 0x108b5ca0 */
  push32(0x108b2b11u); f_108b5ca0();
  /* 108b2b11 call 0x108b3490 */
  push32(0x108b2b16u); f_108b3490();
  /* 108b2b16 mov ecx, dword ptr [0x108df554] */
  ECX = (r32((uint32_t)(0x108df554)));
  /* 108b2b1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2b1f mov dword ptr [0x108df554], ecx */
  w32((uint32_t)(0x108df554), (ECX));
  /* 108b2b25 jmp 0x108b2b90 */
  goto L_108b2b90;
L_108b2b27:;
  /* 108b2b27 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2b2b jne 0x108b2b80 */
  if (!C.zf) goto L_108b2b80;
  /* 108b2b2d cmp dword ptr [0x108df554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2b34 jle 0x108b2b7a */
  if ((C.zf||C.sf!=C.of)) goto L_108b2b7a;
  /* 108b2b36 mov edx, dword ptr [0x108df554] */
  EDX = (r32((uint32_t)(0x108df554)));
  /* 108b2b3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b2b3f mov dword ptr [0x108df554], edx */
  w32((uint32_t)(0x108df554), (EDX));
  /* 108b2b45 cmp dword ptr [0x108df5a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df5a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2b4c jne 0x108b2b53 */
  if (!C.zf) goto L_108b2b53;
  /* 108b2b4e call 0x108b3510 */
  push32(0x108b2b53u); f_108b3510();
L_108b2b53:;
  /* 108b2b53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108b2b55 call 0x108b5240 */
  push32(0x108b2b5au); f_108b5240();
  /* 108b2b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2b5d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108b2b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b2b62 je 0x108b2b69 */
  if (C.zf) goto L_108b2b69;
  /* 108b2b64 call 0x108b5b50 */
  push32(0x108b2b69u); f_108b5b50();
L_108b2b69:;
  /* 108b2b69 call 0x108b3c70 */
  push32(0x108b2b6eu); f_108b3c70();
  /* 108b2b6e call 0x108b3720 */
  push32(0x108b2b73u); f_108b3720();
  /* 108b2b73 call 0x108b6570 */
  push32(0x108b2b78u); f_108b6570();
  /* 108b2b78 jmp 0x108b2b7e */
  goto L_108b2b7e;
L_108b2b7a:;
  /* 108b2b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b2b7c jmp 0x108b2b95 */
  goto L_108b2b95;
L_108b2b7e:;
  /* 108b2b7e jmp 0x108b2b90 */
  goto L_108b2b90;
L_108b2b80:;
  /* 108b2b80 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2b84 jne 0x108b2b90 */
  if (!C.zf) goto L_108b2b90;
  /* 108b2b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b2b88 call 0x108b3810 */
  push32(0x108b2b8du); f_108b3810();
  /* 108b2b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b2b90:;
  /* 108b2b90 mov eax, 1 */
  EAX = (0x1u);
L_108b2b95:;
  /* 108b2b95 pop ebp */
  EBP = (pop32());
  /* 108b2b96 ret 0xc */
  ESPCHK(0x108b2a60u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x108b2ba0 (243 bytes, 86 insns) */
void f_108b2ba0(void) {
  FTRACE(0x108b2ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2ba1 mov ebp, esp */
  EBP = (ESP);
  /* 108b2ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2ba4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108b2bab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2baf jne 0x108b2bc1 */
  if (!C.zf) goto L_108b2bc1;
  /* 108b2bb1 cmp dword ptr [0x108df554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2bb8 jne 0x108b2bc1 */
  if (!C.zf) goto L_108b2bc1;
  /* 108b2bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b2bbc jmp 0x108b2c8d */
  goto L_108b2c8d;
L_108b2bc1:;
  /* 108b2bc1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2bc5 je 0x108b2bcd */
  if (C.zf) goto L_108b2bcd;
  /* 108b2bc7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2bcb jne 0x108b2c0f */
  if (!C.zf) goto L_108b2c0f;
L_108b2bcd:;
  /* 108b2bcd cmp dword ptr [0x108e10bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e10bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2bd4 je 0x108b2beb */
  if (C.zf) goto L_108b2beb;
  /* 108b2bd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b2bd9 push eax */
  push32((uint32_t)(EAX));
  /* 108b2bda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2bdd push ecx */
  push32((uint32_t)(ECX));
  /* 108b2bde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2be1 push edx */
  push32((uint32_t)(EDX));
  /* 108b2be2 call dword ptr [0x108e10bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e10bc))), 0x108b2be8u);
  /* 108b2be8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b2beb:;
  /* 108b2beb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2bef je 0x108b2c05 */
  if (C.zf) goto L_108b2c05;
  /* 108b2bf1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b2bf4 push eax */
  push32((uint32_t)(EAX));
  /* 108b2bf5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2bf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2bfc push edx */
  push32((uint32_t)(EDX));
  /* 108b2bfd call 0x108b2a60 */
  push32(0x108b2c02u); f_108b2a60();
  /* 108b2c02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b2c05:;
  /* 108b2c05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2c09 jne 0x108b2c0f */
  if (!C.zf) goto L_108b2c0f;
  /* 108b2c0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b2c0d jmp 0x108b2c8d */
  goto L_108b2c8d;
L_108b2c0f:;
  /* 108b2c0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b2c12 push eax */
  push32((uint32_t)(EAX));
  /* 108b2c13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2c16 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2c17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2c1a push edx */
  push32((uint32_t)(EDX));
  /* 108b2c1b call 0x108b100f */
  push32(0x108b2c20u); f_108b100f();
  /* 108b2c20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b2c23 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2c27 jne 0x108b2c3e */
  if (!C.zf) goto L_108b2c3e;
  /* 108b2c29 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2c2d jne 0x108b2c3e */
  if (!C.zf) goto L_108b2c3e;
  /* 108b2c2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b2c32 push eax */
  push32((uint32_t)(EAX));
  /* 108b2c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b2c35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2c38 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2c39 call 0x108b2a60 */
  push32(0x108b2c3eu); f_108b2a60();
L_108b2c3e:;
  /* 108b2c3e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2c42 je 0x108b2c4a */
  if (C.zf) goto L_108b2c4a;
  /* 108b2c44 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2c48 jne 0x108b2c8a */
  if (!C.zf) goto L_108b2c8a;
L_108b2c4a:;
  /* 108b2c4a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b2c4d push edx */
  push32((uint32_t)(EDX));
  /* 108b2c4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2c51 push eax */
  push32((uint32_t)(EAX));
  /* 108b2c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2c55 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2c56 call 0x108b2a60 */
  push32(0x108b2c5bu); f_108b2a60();
  /* 108b2c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b2c5d jne 0x108b2c66 */
  if (!C.zf) goto L_108b2c66;
  /* 108b2c5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108b2c66:;
  /* 108b2c66 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2c6a je 0x108b2c8a */
  if (C.zf) goto L_108b2c8a;
  /* 108b2c6c cmp dword ptr [0x108e10bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e10bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2c73 je 0x108b2c8a */
  if (C.zf) goto L_108b2c8a;
  /* 108b2c75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b2c78 push edx */
  push32((uint32_t)(EDX));
  /* 108b2c79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2c7c push eax */
  push32((uint32_t)(EAX));
  /* 108b2c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2c80 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2c81 call dword ptr [0x108e10bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e10bc))), 0x108b2c87u);
  /* 108b2c87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b2c8a:;
  /* 108b2c8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108b2c8d:;
  /* 108b2c8d mov esp, ebp */
  ESP = (EBP);
  /* 108b2c8f pop ebp */
  EBP = (pop32());
  /* 108b2c90 ret 0xc */
  ESPCHK(0x108b2ba0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x108b2ca0 (58 bytes, 18 insns) */
void f_108b2ca0(void) {
  FTRACE(0x108b2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2ca1 mov ebp, esp */
  EBP = (ESP);
  /* 108b2ca3 cmp dword ptr [0x108df560], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df560))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2caa je 0x108b2cbe */
  if (C.zf) goto L_108b2cbe;
  /* 108b2cac cmp dword ptr [0x108df560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2cb3 jne 0x108b2cc3 */
  if (!C.zf) goto L_108b2cc3;
  /* 108b2cb5 cmp dword ptr [0x108df564], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df564))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2cbc jne 0x108b2cc3 */
  if (!C.zf) goto L_108b2cc3;
L_108b2cbe:;
  /* 108b2cbe call 0x108b6610 */
  push32(0x108b2cc3u); f_108b6610();
L_108b2cc3:;
  /* 108b2cc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2cc6 push eax */
  push32((uint32_t)(EAX));
  /* 108b2cc7 call 0x108b6660 */
  push32(0x108b2cccu); f_108b6660();
  /* 108b2ccc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2ccf push 0xff */
  push32((uint32_t)(0xffu));
  /* 108b2cd4 call dword ptr [0x108dda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x108dda30))), 0x108b2cdau);
  /* 108b2cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2cdd pop ebp */
  EBP = (pop32());
  /* 108b2cde ret  */
  ESPCHK(0x108b2ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce0 @ 0x108b2ce0 (11 bytes, 5 insns) */
void f_108b2ce0(void) {
  FTRACE(0x108b2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 108b2ce3 call dword ptr [0x108e2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2314))), 0x108b2ce9u);
  /* 108b2ce9 pop ebp */
  EBP = (pop32());
  /* 108b2cea ret  */
  ESPCHK(0x108b2ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf0 @ 0x108b2cf0 (87 bytes, 30 insns) */
void f_108b2cf0(void) {
  FTRACE(0x108b2cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2cf1 mov ebp, esp */
  EBP = (ESP);
  /* 108b2cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2cf4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2cf8 jl 0x108b2d00 */
  if ((C.sf!=C.of)) goto L_108b2d00;
  /* 108b2cfa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2cfe jl 0x108b2d05 */
  if ((C.sf!=C.of)) goto L_108b2d05;
L_108b2d00:;
  /* 108b2d00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2d03 jmp 0x108b2d43 */
  goto L_108b2d43;
L_108b2d05:;
  /* 108b2d05 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2d09 jne 0x108b2d17 */
  if (!C.zf) goto L_108b2d17;
  /* 108b2d0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2d0e mov eax, dword ptr [eax*4 + 0x108dda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x108dda38)));
  /* 108b2d15 jmp 0x108b2d43 */
  goto L_108b2d43;
L_108b2d17:;
  /* 108b2d17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2d1a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 108b2d1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b2d1f je 0x108b2d26 */
  if (C.zf) goto L_108b2d26;
  /* 108b2d21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2d24 jmp 0x108b2d43 */
  goto L_108b2d43;
L_108b2d26:;
  /* 108b2d26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2d29 mov eax, dword ptr [edx*4 + 0x108dda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108dda38)));
  /* 108b2d30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b2d33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2d36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2d39 mov dword ptr [ecx*4 + 0x108dda38], edx */
  w32((uint32_t)(ECX*4 + 0x108dda38), (EDX));
  /* 108b2d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108b2d43:;
  /* 108b2d43 mov esp, ebp */
  ESP = (EBP);
  /* 108b2d45 pop ebp */
  EBP = (pop32());
  /* 108b2d46 ret  */
  ESPCHK(0x108b2cf0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x108b2d50 (126 bytes, 38 insns) */
void f_108b2d50(void) {
  FTRACE(0x108b2d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2d50 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2d51 mov ebp, esp */
  EBP = (ESP);
  /* 108b2d53 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2d54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2d58 jl 0x108b2d60 */
  if ((C.sf!=C.of)) goto L_108b2d60;
  /* 108b2d5a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2d5e jl 0x108b2d67 */
  if ((C.sf!=C.of)) goto L_108b2d67;
L_108b2d60:;
  /* 108b2d60 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 108b2d65 jmp 0x108b2dca */
  goto L_108b2dca;
L_108b2d67:;
  /* 108b2d67 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2d6b jne 0x108b2d79 */
  if (!C.zf) goto L_108b2d79;
  /* 108b2d6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2d70 mov eax, dword ptr [eax*4 + 0x108dda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x108dda44)));
  /* 108b2d77 jmp 0x108b2dca */
  goto L_108b2dca;
L_108b2d79:;
  /* 108b2d79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2d7c mov edx, dword ptr [ecx*4 + 0x108dda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dda44)));
  /* 108b2d83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b2d86 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2d8a jne 0x108b2da0 */
  if (!C.zf) goto L_108b2da0;
  /* 108b2d8c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 108b2d8e call dword ptr [0x108e2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2318))), 0x108b2d94u);
  /* 108b2d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2d97 mov dword ptr [ecx*4 + 0x108dda44], eax */
  w32((uint32_t)(ECX*4 + 0x108dda44), (EAX));
  /* 108b2d9e jmp 0x108b2dc7 */
  goto L_108b2dc7;
L_108b2da0:;
  /* 108b2da0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2da4 jne 0x108b2dba */
  if (!C.zf) goto L_108b2dba;
  /* 108b2da6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108b2da8 call dword ptr [0x108e2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2318))), 0x108b2daeu);
  /* 108b2dae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2db1 mov dword ptr [edx*4 + 0x108dda44], eax */
  w32((uint32_t)(EDX*4 + 0x108dda44), (EAX));
  /* 108b2db8 jmp 0x108b2dc7 */
  goto L_108b2dc7;
L_108b2dba:;
  /* 108b2dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2dbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2dc0 mov dword ptr [eax*4 + 0x108dda44], ecx */
  w32((uint32_t)(EAX*4 + 0x108dda44), (ECX));
L_108b2dc7:;
  /* 108b2dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108b2dca:;
  /* 108b2dca mov esp, ebp */
  ESP = (EBP);
  /* 108b2dcc pop ebp */
  EBP = (pop32());
  /* 108b2dcd ret  */
  ESPCHK(0x108b2d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dd0 @ 0x108b2dd0 (28 bytes, 11 insns) */
void f_108b2dd0(void) {
  FTRACE(0x108b2dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2dd1 mov ebp, esp */
  EBP = (ESP);
  /* 108b2dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2dd4 mov eax, dword ptr [0x108e10a0] */
  EAX = (r32((uint32_t)(0x108e10a0)));
  /* 108b2dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b2ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2ddf mov dword ptr [0x108e10a0], ecx */
  w32((uint32_t)(0x108e10a0), (ECX));
  /* 108b2de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b2de8 mov esp, ebp */
  ESP = (EBP);
  /* 108b2dea pop ebp */
  EBP = (pop32());
  /* 108b2deb ret  */
  ESPCHK(0x108b2dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002df0 @ 0x108b2df0 (912 bytes, 248 insns) */
void f_108b2df0(void) {
  FTRACE(0x108b2df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b2df0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b2df1 mov ebp, esp */
  EBP = (ESP);
  /* 108b2df3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 108b2df8 call 0x108b6ed0 */
  push32(0x108b2dfdu); f_108b6ed0();
  /* 108b2dfd push edi */
  push32((uint32_t)(EDI));
  /* 108b2dfe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 108b2e05 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 108b2e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b2e0c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 108b2e12 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108b2e14 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 108b2e16 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 108b2e17 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 108b2e1e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 108b2e23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b2e25 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 108b2e2b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108b2e2d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 108b2e2f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 108b2e30 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 108b2e37 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 108b2e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b2e3e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 108b2e44 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108b2e46 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 108b2e48 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 108b2e49 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 108b2e4c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 108b2e52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2e56 jl 0x108b2e5e */
  if ((C.sf!=C.of)) goto L_108b2e5e;
  /* 108b2e58 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2e5c jl 0x108b2e66 */
  if ((C.sf!=C.of)) goto L_108b2e66;
L_108b2e5e:;
  /* 108b2e5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2e61 jmp 0x108b317b */
  goto L_108b317b;
L_108b2e66:;
  /* 108b2e66 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2e6a jne 0x108b2f10 */
  if (!C.zf) goto L_108b2f10;
  /* 108b2e70 push 0x108dda34 */
  push32((uint32_t)(0x108dda34u));
  /* 108b2e75 call dword ptr [0x108e2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2330))), 0x108b2e7bu);
  /* 108b2e7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b2e7d jle 0x108b2f10 */
  if ((C.zf||C.sf!=C.of)) goto L_108b2f10;
  /* 108b2e83 cmp dword ptr [0x108df568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2e8a jne 0x108b2ece */
  if (!C.zf) goto L_108b2ece;
  /* 108b2e8c push 0x108da2d8 */
  push32((uint32_t)(0x108da2d8u));
  /* 108b2e91 call dword ptr [0x108e232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e232c))), 0x108b2e97u);
  /* 108b2e97 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 108b2e9d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2ea4 je 0x108b2ec6 */
  if (C.zf) goto L_108b2ec6;
  /* 108b2ea6 push 0x108da2cc */
  push32((uint32_t)(0x108da2ccu));
  /* 108b2eab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 108b2eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2eb2 call dword ptr [0x108e2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2328))), 0x108b2eb8u);
  /* 108b2eb8 mov dword ptr [0x108df568], eax */
  w32((uint32_t)(0x108df568), (EAX));
  /* 108b2ebd cmp dword ptr [0x108df568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2ec4 jne 0x108b2ece */
  if (!C.zf) goto L_108b2ece;
L_108b2ec6:;
  /* 108b2ec6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2ec9 jmp 0x108b317b */
  goto L_108b317b;
L_108b2ece:;
  /* 108b2ece mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b2ed1 push edx */
  push32((uint32_t)(EDX));
  /* 108b2ed2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2ed5 push eax */
  push32((uint32_t)(EAX));
  /* 108b2ed6 push 0x108da298 */
  push32((uint32_t)(0x108da298u));
  /* 108b2edb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 108b2ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2ee2 call dword ptr [0x108df568] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df568))), 0x108b2ee8u);
  /* 108b2ee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2eeb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108b2ef1 push edx */
  push32((uint32_t)(EDX));
  /* 108b2ef2 call dword ptr [0x108e2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2324))), 0x108b2ef8u);
  /* 108b2ef8 push 0x108dda34 */
  push32((uint32_t)(0x108dda34u));
  /* 108b2efd call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108b2f03u);
  /* 108b2f03 call 0x108b2ce0 */
  push32(0x108b2f08u); f_108b2ce0();
  /* 108b2f08 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b2f0b jmp 0x108b317b */
  goto L_108b317b;
L_108b2f10:;
  /* 108b2f10 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2f14 je 0x108b2f4d */
  if (C.zf) goto L_108b2f4d;
  /* 108b2f16 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 108b2f1c push eax */
  push32((uint32_t)(EAX));
  /* 108b2f1d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b2f20 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2f21 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 108b2f26 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 108b2f2c push edx */
  push32((uint32_t)(EDX));
  /* 108b2f2d call 0x108b6dd0 */
  push32(0x108b2f32u); f_108b6dd0();
  /* 108b2f32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b2f37 jge 0x108b2f4d */
  if ((C.sf==C.of)) goto L_108b2f4d;
  /* 108b2f39 push 0x108da26c */
  push32((uint32_t)(0x108da26cu));
  /* 108b2f3e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 108b2f44 push eax */
  push32((uint32_t)(EAX));
  /* 108b2f45 call 0x108b6ce0 */
  push32(0x108b2f4au); f_108b6ce0();
  /* 108b2f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b2f4d:;
  /* 108b2f4d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2f51 jne 0x108b2f85 */
  if (!C.zf) goto L_108b2f85;
  /* 108b2f53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2f57 je 0x108b2f65 */
  if (C.zf) goto L_108b2f65;
  /* 108b2f59 mov dword ptr [ebp - 0x3028], 0x108da258 */
  w32((uint32_t)(EBP + -0x3028), (0x108da258u));
  /* 108b2f63 jmp 0x108b2f6f */
  goto L_108b2f6f;
L_108b2f65:;
  /* 108b2f65 mov dword ptr [ebp - 0x3028], 0x108da244 */
  w32((uint32_t)(EBP + -0x3028), (0x108da244u));
L_108b2f6f:;
  /* 108b2f6f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 108b2f75 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2f76 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 108b2f7c push edx */
  push32((uint32_t)(EDX));
  /* 108b2f7d call 0x108b6ce0 */
  push32(0x108b2f82u); f_108b6ce0();
  /* 108b2f82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b2f85:;
  /* 108b2f85 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 108b2f8b push eax */
  push32((uint32_t)(EAX));
  /* 108b2f8c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 108b2f92 push ecx */
  push32((uint32_t)(ECX));
  /* 108b2f93 call 0x108b6cf0 */
  push32(0x108b2f98u); f_108b6cf0();
  /* 108b2f98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b2f9b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2f9f jne 0x108b2fda */
  if (!C.zf) goto L_108b2fda;
  /* 108b2fa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b2fa4 mov eax, dword ptr [edx*4 + 0x108dda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108dda38)));
  /* 108b2fab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108b2fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b2fb0 je 0x108b2fc6 */
  if (C.zf) goto L_108b2fc6;
  /* 108b2fb2 push 0x108da240 */
  push32((uint32_t)(0x108da240u));
  /* 108b2fb7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 108b2fbd push ecx */
  push32((uint32_t)(ECX));
  /* 108b2fbe call 0x108b6cf0 */
  push32(0x108b2fc3u); f_108b6cf0();
  /* 108b2fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b2fc6:;
  /* 108b2fc6 push 0x108da23c */
  push32((uint32_t)(0x108da23cu));
  /* 108b2fcb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 108b2fd1 push edx */
  push32((uint32_t)(EDX));
  /* 108b2fd2 call 0x108b6cf0 */
  push32(0x108b2fd7u); f_108b6cf0();
  /* 108b2fd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b2fda:;
  /* 108b2fda cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b2fde je 0x108b3022 */
  if (C.zf) goto L_108b3022;
  /* 108b2fe0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 108b2fe6 push eax */
  push32((uint32_t)(EAX));
  /* 108b2fe7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b2fea push ecx */
  push32((uint32_t)(ECX));
  /* 108b2feb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b2fee push edx */
  push32((uint32_t)(EDX));
  /* 108b2fef push 0x108da230 */
  push32((uint32_t)(0x108da230u));
  /* 108b2ff4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108b2ff9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 108b2fff push eax */
  push32((uint32_t)(EAX));
  /* 108b3000 call 0x108b6be0 */
  push32(0x108b3005u); f_108b6be0();
  /* 108b3005 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b300a jge 0x108b3020 */
  if ((C.sf==C.of)) goto L_108b3020;
  /* 108b300c push 0x108da26c */
  push32((uint32_t)(0x108da26cu));
  /* 108b3011 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 108b3017 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3018 call 0x108b6ce0 */
  push32(0x108b301du); f_108b6ce0();
  /* 108b301d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b3020:;
  /* 108b3020 jmp 0x108b3038 */
  goto L_108b3038;
L_108b3022:;
  /* 108b3022 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 108b3028 push edx */
  push32((uint32_t)(EDX));
  /* 108b3029 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 108b302f push eax */
  push32((uint32_t)(EAX));
  /* 108b3030 call 0x108b6ce0 */
  push32(0x108b3035u); f_108b6ce0();
  /* 108b3035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b3038:;
  /* 108b3038 cmp dword ptr [0x108e10a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e10a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b303f je 0x108b307c */
  if (C.zf) goto L_108b307c;
  /* 108b3041 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 108b3047 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3048 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108b304e push edx */
  push32((uint32_t)(EDX));
  /* 108b304f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3052 push eax */
  push32((uint32_t)(EAX));
  /* 108b3053 call dword ptr [0x108e10a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e10a0))), 0x108b3059u);
  /* 108b3059 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b305c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b305e je 0x108b307c */
  if (C.zf) goto L_108b307c;
  /* 108b3060 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3064 jne 0x108b3071 */
  if (!C.zf) goto L_108b3071;
  /* 108b3066 push 0x108dda34 */
  push32((uint32_t)(0x108dda34u));
  /* 108b306b call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108b3071u);
L_108b3071:;
  /* 108b3071 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 108b3077 jmp 0x108b317b */
  goto L_108b317b;
L_108b307c:;
  /* 108b307c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b307f mov edx, dword ptr [ecx*4 + 0x108dda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dda38)));
  /* 108b3086 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108b3089 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b308b je 0x108b30cb */
  if (C.zf) goto L_108b30cb;
  /* 108b308d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3090 cmp dword ptr [eax*4 + 0x108dda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x108dda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3098 je 0x108b30cb */
  if (C.zf) goto L_108b30cb;
  /* 108b309a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b309c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 108b30a2 push ecx */
  push32((uint32_t)(ECX));
  /* 108b30a3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108b30a9 push edx */
  push32((uint32_t)(EDX));
  /* 108b30aa call 0x108b6b60 */
  push32(0x108b30afu); f_108b6b60();
  /* 108b30af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b30b2 push eax */
  push32((uint32_t)(EAX));
  /* 108b30b3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 108b30b9 push eax */
  push32((uint32_t)(EAX));
  /* 108b30ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b30bd mov edx, dword ptr [ecx*4 + 0x108dda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dda44)));
  /* 108b30c4 push edx */
  push32((uint32_t)(EDX));
  /* 108b30c5 call dword ptr [0x108e231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e231c))), 0x108b30cbu);
L_108b30cb:;
  /* 108b30cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b30ce mov ecx, dword ptr [eax*4 + 0x108dda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108dda38)));
  /* 108b30d5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 108b30d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b30da je 0x108b30e9 */
  if (C.zf) goto L_108b30e9;
  /* 108b30dc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108b30e2 push edx */
  push32((uint32_t)(EDX));
  /* 108b30e3 call dword ptr [0x108e2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2324))), 0x108b30e9u);
L_108b30e9:;
  /* 108b30e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b30ec mov ecx, dword ptr [eax*4 + 0x108dda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108dda38)));
  /* 108b30f3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108b30f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b30f8 je 0x108b3168 */
  if (C.zf) goto L_108b3168;
  /* 108b30fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b30fe je 0x108b311d */
  if (C.zf) goto L_108b311d;
  /* 108b3100 push 0xa */
  push32((uint32_t)(0xau));
  /* 108b3102 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 108b3108 push edx */
  push32((uint32_t)(EDX));
  /* 108b3109 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b310c push eax */
  push32((uint32_t)(EAX));
  /* 108b310d call 0x108b6870 */
  push32(0x108b3112u); f_108b6870();
  /* 108b3112 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3115 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 108b311b jmp 0x108b3127 */
  goto L_108b3127;
L_108b311d:;
  /* 108b311d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_108b3127:;
  /* 108b3127 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 108b312d push ecx */
  push32((uint32_t)(ECX));
  /* 108b312e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b3131 push edx */
  push32((uint32_t)(EDX));
  /* 108b3132 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 108b3138 push eax */
  push32((uint32_t)(EAX));
  /* 108b3139 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b313c push ecx */
  push32((uint32_t)(ECX));
  /* 108b313d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3140 push edx */
  push32((uint32_t)(EDX));
  /* 108b3141 call 0x108b3180 */
  push32(0x108b3146u); f_108b3180();
  /* 108b3146 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3149 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 108b314f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3153 jne 0x108b3160 */
  if (!C.zf) goto L_108b3160;
  /* 108b3155 push 0x108dda34 */
  push32((uint32_t)(0x108dda34u));
  /* 108b315a call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108b3160u);
L_108b3160:;
  /* 108b3160 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 108b3166 jmp 0x108b317b */
  goto L_108b317b;
L_108b3168:;
  /* 108b3168 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b316c jne 0x108b3179 */
  if (!C.zf) goto L_108b3179;
  /* 108b316e push 0x108dda34 */
  push32((uint32_t)(0x108dda34u));
  /* 108b3173 call dword ptr [0x108e2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2320))), 0x108b3179u);
L_108b3179:;
  /* 108b3179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b317b:;
  /* 108b317b pop edi */
  EDI = (pop32());
  /* 108b317c mov esp, ebp */
  ESP = (EBP);
  /* 108b317e pop ebp */
  EBP = (pop32());
  /* 108b317f ret  */
  ESPCHK(0x108b2df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003180 @ 0x108b3180 (780 bytes, 197 insns) */
void f_108b3180(void) {
  FTRACE(0x108b3180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3180 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3181 mov ebp, esp */
  EBP = (ESP);
  /* 108b3183 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 108b3188 call 0x108b6ed0 */
  push32(0x108b318du); f_108b6ed0();
L_108b318d:;
  /* 108b318d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3191 jne 0x108b31b8 */
  if (!C.zf) goto L_108b31b8;
  /* 108b3193 push 0x108da428 */
  push32((uint32_t)(0x108da428u));
  /* 108b3198 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b319a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 108b319f push 0x108da41c */
  push32((uint32_t)(0x108da41cu));
  /* 108b31a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b31a6 call 0x108b2df0 */
  push32(0x108b31abu); f_108b2df0();
  /* 108b31ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b31ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b31b1 jne 0x108b31b8 */
  if (!C.zf) goto L_108b31b8;
  /* 108b31b3 call 0x108b2ce0 */
  push32(0x108b31b8u); f_108b2ce0();
L_108b31b8:;
  /* 108b31b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b31ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b31bc jne 0x108b318d */
  if (!C.zf) goto L_108b318d;
  /* 108b31be push 0x104 */
  push32((uint32_t)(0x104u));
  /* 108b31c3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 108b31c9 push ecx */
  push32((uint32_t)(ECX));
  /* 108b31ca push 0 */
  push32((uint32_t)(0x0u));
  /* 108b31cc call dword ptr [0x108e2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2334))), 0x108b31d2u);
  /* 108b31d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b31d4 jne 0x108b31ea */
  if (!C.zf) goto L_108b31ea;
  /* 108b31d6 push 0x108da404 */
  push32((uint32_t)(0x108da404u));
  /* 108b31db lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 108b31e1 push edx */
  push32((uint32_t)(EDX));
  /* 108b31e2 call 0x108b6ce0 */
  push32(0x108b31e7u); f_108b6ce0();
  /* 108b31e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b31ea:;
  /* 108b31ea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 108b31f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b31f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b31f6 push ecx */
  push32((uint32_t)(ECX));
  /* 108b31f7 call 0x108b6b60 */
  push32(0x108b31fcu); f_108b6b60();
  /* 108b31fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b31ff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3202 jbe 0x108b322d */
  if ((C.cf||C.zf)) goto L_108b322d;
  /* 108b3204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3207 push edx */
  push32((uint32_t)(EDX));
  /* 108b3208 call 0x108b6b60 */
  push32(0x108b320du); f_108b6b60();
  /* 108b320d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3210 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3213 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 108b3217 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b321a push 3 */
  push32((uint32_t)(0x3u));
  /* 108b321c push 0x108da400 */
  push32((uint32_t)(0x108da400u));
  /* 108b3221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3224 push eax */
  push32((uint32_t)(EAX));
  /* 108b3225 call 0x108b7550 */
  push32(0x108b322au); f_108b7550();
  /* 108b322a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b322d:;
  /* 108b322d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b3230 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 108b3236 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b323d je 0x108b3288 */
  if (C.zf) goto L_108b3288;
  /* 108b323f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108b3245 push edx */
  push32((uint32_t)(EDX));
  /* 108b3246 call 0x108b6b60 */
  push32(0x108b324bu); f_108b6b60();
  /* 108b324b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b324e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3251 jbe 0x108b3288 */
  if ((C.cf||C.zf)) goto L_108b3288;
  /* 108b3253 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108b3259 push eax */
  push32((uint32_t)(EAX));
  /* 108b325a call 0x108b6b60 */
  push32(0x108b325fu); f_108b6b60();
  /* 108b325f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3262 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108b3268 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 108b326c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 108b3272 push 3 */
  push32((uint32_t)(0x3u));
  /* 108b3274 push 0x108da400 */
  push32((uint32_t)(0x108da400u));
  /* 108b3279 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108b327f push eax */
  push32((uint32_t)(EAX));
  /* 108b3280 call 0x108b7550 */
  push32(0x108b3285u); f_108b7550();
  /* 108b3285 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b3288:;
  /* 108b3288 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b328c jne 0x108b329a */
  if (!C.zf) goto L_108b329a;
  /* 108b328e mov dword ptr [ebp - 0x1114], 0x108da38c */
  w32((uint32_t)(EBP + -0x1114), (0x108da38cu));
  /* 108b3298 jmp 0x108b32a4 */
  goto L_108b32a4;
L_108b329a:;
  /* 108b329a mov dword ptr [ebp - 0x1114], 0x108da12c */
  w32((uint32_t)(EBP + -0x1114), (0x108da12cu));
L_108b32a4:;
  /* 108b32a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b32a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108b32aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b32ac je 0x108b32b9 */
  if (C.zf) goto L_108b32b9;
  /* 108b32ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b32b1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 108b32b7 jmp 0x108b32c3 */
  goto L_108b32c3;
L_108b32b9:;
  /* 108b32b9 mov dword ptr [ebp - 0x1118], 0x108da12c */
  w32((uint32_t)(EBP + -0x1118), (0x108da12cu));
L_108b32c3:;
  /* 108b32c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b32c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108b32c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b32cb je 0x108b32df */
  if (C.zf) goto L_108b32df;
  /* 108b32cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b32d1 jne 0x108b32df */
  if (!C.zf) goto L_108b32df;
  /* 108b32d3 mov dword ptr [ebp - 0x111c], 0x108da37c */
  w32((uint32_t)(EBP + -0x111c), (0x108da37cu));
  /* 108b32dd jmp 0x108b32e9 */
  goto L_108b32e9;
L_108b32df:;
  /* 108b32df mov dword ptr [ebp - 0x111c], 0x108da12c */
  w32((uint32_t)(EBP + -0x111c), (0x108da12cu));
L_108b32e9:;
  /* 108b32e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b32ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b32ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b32f1 je 0x108b32ff */
  if (C.zf) goto L_108b32ff;
  /* 108b32f3 mov dword ptr [ebp - 0x1120], 0x108da378 */
  w32((uint32_t)(EBP + -0x1120), (0x108da378u));
  /* 108b32fd jmp 0x108b3309 */
  goto L_108b3309;
L_108b32ff:;
  /* 108b32ff mov dword ptr [ebp - 0x1120], 0x108da12c */
  w32((uint32_t)(EBP + -0x1120), (0x108da12cu));
L_108b3309:;
  /* 108b3309 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b330d je 0x108b331a */
  if (C.zf) goto L_108b331a;
  /* 108b330f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b3312 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 108b3318 jmp 0x108b3324 */
  goto L_108b3324;
L_108b331a:;
  /* 108b331a mov dword ptr [ebp - 0x1124], 0x108da12c */
  w32((uint32_t)(EBP + -0x1124), (0x108da12cu));
L_108b3324:;
  /* 108b3324 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3328 je 0x108b3336 */
  if (C.zf) goto L_108b3336;
  /* 108b332a mov dword ptr [ebp - 0x1128], 0x108da370 */
  w32((uint32_t)(EBP + -0x1128), (0x108da370u));
  /* 108b3334 jmp 0x108b3340 */
  goto L_108b3340;
L_108b3336:;
  /* 108b3336 mov dword ptr [ebp - 0x1128], 0x108da12c */
  w32((uint32_t)(EBP + -0x1128), (0x108da12cu));
L_108b3340:;
  /* 108b3340 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3344 je 0x108b3351 */
  if (C.zf) goto L_108b3351;
  /* 108b3346 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b3349 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 108b334f jmp 0x108b335b */
  goto L_108b335b;
L_108b3351:;
  /* 108b3351 mov dword ptr [ebp - 0x112c], 0x108da12c */
  w32((uint32_t)(EBP + -0x112c), (0x108da12cu));
L_108b335b:;
  /* 108b335b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b335f je 0x108b336d */
  if (C.zf) goto L_108b336d;
  /* 108b3361 mov dword ptr [ebp - 0x1130], 0x108da368 */
  w32((uint32_t)(EBP + -0x1130), (0x108da368u));
  /* 108b336b jmp 0x108b3377 */
  goto L_108b3377;
L_108b336d:;
  /* 108b336d mov dword ptr [ebp - 0x1130], 0x108da12c */
  w32((uint32_t)(EBP + -0x1130), (0x108da12cu));
L_108b3377:;
  /* 108b3377 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b337e je 0x108b338e */
  if (C.zf) goto L_108b338e;
  /* 108b3380 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108b3386 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 108b338c jmp 0x108b3398 */
  goto L_108b3398;
L_108b338e:;
  /* 108b338e mov dword ptr [ebp - 0x1134], 0x108da12c */
  w32((uint32_t)(EBP + -0x1134), (0x108da12cu));
L_108b3398:;
  /* 108b3398 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b339f je 0x108b33ad */
  if (C.zf) goto L_108b33ad;
  /* 108b33a1 mov dword ptr [ebp - 0x1138], 0x108da35c */
  w32((uint32_t)(EBP + -0x1138), (0x108da35cu));
  /* 108b33ab jmp 0x108b33b7 */
  goto L_108b33b7;
L_108b33ad:;
  /* 108b33ad mov dword ptr [ebp - 0x1138], 0x108da12c */
  w32((uint32_t)(EBP + -0x1138), (0x108da12cu));
L_108b33b7:;
  /* 108b33b7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 108b33bd push edx */
  push32((uint32_t)(EDX));
  /* 108b33be mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 108b33c4 push eax */
  push32((uint32_t)(EAX));
  /* 108b33c5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 108b33cb push ecx */
  push32((uint32_t)(ECX));
  /* 108b33cc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 108b33d2 push edx */
  push32((uint32_t)(EDX));
  /* 108b33d3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 108b33d9 push eax */
  push32((uint32_t)(EAX));
  /* 108b33da mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 108b33e0 push ecx */
  push32((uint32_t)(ECX));
  /* 108b33e1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 108b33e7 push edx */
  push32((uint32_t)(EDX));
  /* 108b33e8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 108b33ee push eax */
  push32((uint32_t)(EAX));
  /* 108b33ef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 108b33f5 push ecx */
  push32((uint32_t)(ECX));
  /* 108b33f6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 108b33fc push edx */
  push32((uint32_t)(EDX));
  /* 108b33fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3400 push eax */
  push32((uint32_t)(EAX));
  /* 108b3401 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3404 mov edx, dword ptr [ecx*4 + 0x108dda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dda50)));
  /* 108b340b push edx */
  push32((uint32_t)(EDX));
  /* 108b340c push 0x108da308 */
  push32((uint32_t)(0x108da308u));
  /* 108b3411 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108b3416 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 108b341c push eax */
  push32((uint32_t)(EAX));
  /* 108b341d call 0x108b6be0 */
  push32(0x108b3422u); f_108b6be0();
  /* 108b3422 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b3427 jge 0x108b343d */
  if ((C.sf==C.of)) goto L_108b343d;
  /* 108b3429 push 0x108da26c */
  push32((uint32_t)(0x108da26cu));
  /* 108b342e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 108b3434 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3435 call 0x108b6ce0 */
  push32(0x108b343au); f_108b6ce0();
  /* 108b343a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b343d:;
  /* 108b343d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 108b3442 push 0x108da2e4 */
  push32((uint32_t)(0x108da2e4u));
  /* 108b3447 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 108b344d push edx */
  push32((uint32_t)(EDX));
  /* 108b344e call 0x108b7490 */
  push32(0x108b3453u); f_108b7490();
  /* 108b3453 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3456 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 108b345c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3463 jne 0x108b3476 */
  if (!C.zf) goto L_108b3476;
  /* 108b3465 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108b3467 call 0x108b71d0 */
  push32(0x108b346cu); f_108b71d0();
  /* 108b346c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b346f push 3 */
  push32((uint32_t)(0x3u));
  /* 108b3471 call 0x108b34f0 */
  push32(0x108b3476u); f_108b34f0();
L_108b3476:;
  /* 108b3476 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b347d jne 0x108b3486 */
  if (!C.zf) goto L_108b3486;
  /* 108b347f mov eax, 1 */
  EAX = (0x1u);
  /* 108b3484 jmp 0x108b3488 */
  goto L_108b3488;
L_108b3486:;
  /* 108b3486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b3488:;
  /* 108b3488 mov esp, ebp */
  ESP = (EBP);
  /* 108b348a pop ebp */
  EBP = (pop32());
  /* 108b348b ret  */
  ESPCHK(0x108b3180u, _esp0);
  ESP += 4; return;
}

/* FUN_10003490 @ 0x108b3490 (56 bytes, 15 insns) */
void f_108b3490(void) {
  FTRACE(0x108b3490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3490 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3491 mov ebp, esp */
  EBP = (ESP);
  /* 108b3493 cmp dword ptr [0x108e109c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e109c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b349a je 0x108b34a2 */
  if (C.zf) goto L_108b34a2;
  /* 108b349c call dword ptr [0x108e109c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e109c))), 0x108b34a2u);
L_108b34a2:;
  /* 108b34a2 push 0x108dd418 */
  push32((uint32_t)(0x108dd418u));
  /* 108b34a7 push 0x108dd208 */
  push32((uint32_t)(0x108dd208u));
  /* 108b34ac call 0x108b3660 */
  push32(0x108b34b1u); f_108b3660();
  /* 108b34b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b34b4 push 0x108dd104 */
  push32((uint32_t)(0x108dd104u));
  /* 108b34b9 push 0x108dd000 */
  push32((uint32_t)(0x108dd000u));
  /* 108b34be call 0x108b3660 */
  push32(0x108b34c3u); f_108b3660();
  /* 108b34c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b34c6 pop ebp */
  EBP = (pop32());
  /* 108b34c7 ret  */
  ESPCHK(0x108b3490u, _esp0);
  ESP += 4; return;
}

/* FUN_100034d0 @ 0x108b34d0 (21 bytes, 10 insns) */
void f_108b34d0(void) {
  FTRACE(0x108b34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b34d1 mov ebp, esp */
  EBP = (ESP);
  /* 108b34d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b34d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b34d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b34da push eax */
  push32((uint32_t)(EAX));
  /* 108b34db call 0x108b3550 */
  push32(0x108b34e0u); f_108b3550();
  /* 108b34e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b34e3 pop ebp */
  EBP = (pop32());
  /* 108b34e4 ret  */
  ESPCHK(0x108b34d0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x108b34f0 (21 bytes, 10 insns) */
void f_108b34f0(void) {
  FTRACE(0x108b34f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b34f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b34f1 mov ebp, esp */
  EBP = (ESP);
  /* 108b34f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b34f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b34f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b34fa push eax */
  push32((uint32_t)(EAX));
  /* 108b34fb call 0x108b3550 */
  push32(0x108b3500u); f_108b3550();
  /* 108b3500 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3503 pop ebp */
  EBP = (pop32());
  /* 108b3504 ret  */
  ESPCHK(0x108b34f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003510 @ 0x108b3510 (19 bytes, 9 insns) */
void f_108b3510(void) {
  FTRACE(0x108b3510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3510 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3511 mov ebp, esp */
  EBP = (ESP);
  /* 108b3513 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3515 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3517 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3519 call 0x108b3550 */
  push32(0x108b351eu); f_108b3550();
  /* 108b351e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3521 pop ebp */
  EBP = (pop32());
  /* 108b3522 ret  */
  ESPCHK(0x108b3510u, _esp0);
  ESP += 4; return;
}

/* FUN_10003530 @ 0x108b3530 (19 bytes, 9 insns) */
void f_108b3530(void) {
  FTRACE(0x108b3530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3530 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3531 mov ebp, esp */
  EBP = (ESP);
  /* 108b3533 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3535 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3537 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3539 call 0x108b3550 */
  push32(0x108b353eu); f_108b3550();
  /* 108b353e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3541 pop ebp */
  EBP = (pop32());
  /* 108b3542 ret  */
  ESPCHK(0x108b3530u, _esp0);
  ESP += 4; return;
}

/* FUN_10003550 @ 0x108b3550 (227 bytes, 61 insns) */
void f_108b3550(void) {
  FTRACE(0x108b3550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3550 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3551 mov ebp, esp */
  EBP = (ESP);
  /* 108b3553 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3554 call 0x108b3640 */
  push32(0x108b3559u); f_108b3640();
  /* 108b3559 cmp dword ptr [0x108df5ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df5ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3560 jne 0x108b3573 */
  if (!C.zf) goto L_108b3573;
  /* 108b3562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3565 push eax */
  push32((uint32_t)(EAX));
  /* 108b3566 call dword ptr [0x108e2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2340))), 0x108b356cu);
  /* 108b356c push eax */
  push32((uint32_t)(EAX));
  /* 108b356d call dword ptr [0x108e233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e233c))), 0x108b3573u);
L_108b3573:;
  /* 108b3573 mov dword ptr [0x108df5a8], 1 */
  w32((uint32_t)(0x108df5a8), (0x1u));
  /* 108b357d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 108b3580 mov byte ptr [0x108df5a4], cl */
  w8((uint32_t)(0x108df5a4), (CL));
  /* 108b3586 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b358a jne 0x108b35d3 */
  if (!C.zf) goto L_108b35d3;
  /* 108b358c cmp dword ptr [0x108e1098], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e1098))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3593 je 0x108b35c1 */
  if (C.zf) goto L_108b35c1;
  /* 108b3595 mov edx, dword ptr [0x108e1094] */
  EDX = (r32((uint32_t)(0x108e1094)));
  /* 108b359b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108b359e:;
  /* 108b359e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b35a1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b35a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b35a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b35aa cmp ecx, dword ptr [0x108e1098] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108e1098))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b35b0 jb 0x108b35c1 */
  if (C.cf) goto L_108b35c1;
  /* 108b35b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b35b5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b35b8 je 0x108b35bf */
  if (C.zf) goto L_108b35bf;
  /* 108b35ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b35bd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x108b35bfu);
L_108b35bf:;
  /* 108b35bf jmp 0x108b359e */
  goto L_108b359e;
L_108b35c1:;
  /* 108b35c1 push 0x108dd724 */
  push32((uint32_t)(0x108dd724u));
  /* 108b35c6 push 0x108dd51c */
  push32((uint32_t)(0x108dd51cu));
  /* 108b35cb call 0x108b3660 */
  push32(0x108b35d0u); f_108b3660();
  /* 108b35d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b35d3:;
  /* 108b35d3 push 0x108dd92c */
  push32((uint32_t)(0x108dd92cu));
  /* 108b35d8 push 0x108dd828 */
  push32((uint32_t)(0x108dd828u));
  /* 108b35dd call 0x108b3660 */
  push32(0x108b35e2u); f_108b3660();
  /* 108b35e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b35e5 cmp dword ptr [0x108df5b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df5b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b35ec jne 0x108b360e */
  if (!C.zf) goto L_108b360e;
  /* 108b35ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108b35f0 call 0x108b5240 */
  push32(0x108b35f5u); f_108b5240();
  /* 108b35f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b35f8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108b35fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b35fd je 0x108b360e */
  if (C.zf) goto L_108b360e;
  /* 108b35ff mov dword ptr [0x108df5b0], 1 */
  w32((uint32_t)(0x108df5b0), (0x1u));
  /* 108b3609 call 0x108b5b50 */
  push32(0x108b360eu); f_108b5b50();
L_108b360e:;
  /* 108b360e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3612 je 0x108b361b */
  if (C.zf) goto L_108b361b;
  /* 108b3614 call 0x108b3650 */
  push32(0x108b3619u); f_108b3650();
  /* 108b3619 jmp 0x108b362f */
  goto L_108b362f;
L_108b361b:;
  /* 108b361b mov dword ptr [0x108df5ac], 1 */
  w32((uint32_t)(0x108df5ac), (0x1u));
  /* 108b3625 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3628 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3629 call dword ptr [0x108e2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2338))), 0x108b362fu);
L_108b362f:;
  /* 108b362f mov esp, ebp */
  ESP = (EBP);
  /* 108b3631 pop ebp */
  EBP = (pop32());
  /* 108b3632 ret  */
  ESPCHK(0x108b3550u, _esp0);
  ESP += 4; return;
}

/* FUN_10003640 @ 0x108b3640 (15 bytes, 7 insns) */
void f_108b3640(void) {
  FTRACE(0x108b3640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3640 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3641 mov ebp, esp */
  EBP = (ESP);
  /* 108b3643 push 0xd */
  push32((uint32_t)(0xdu));
  /* 108b3645 call 0x108b7730 */
  push32(0x108b364au); f_108b7730();
  /* 108b364a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b364d pop ebp */
  EBP = (pop32());
  /* 108b364e ret  */
  ESPCHK(0x108b3640u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x108b3650 (15 bytes, 7 insns) */
void f_108b3650(void) {
  FTRACE(0x108b3650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3650 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3651 mov ebp, esp */
  EBP = (ESP);
  /* 108b3653 push 0xd */
  push32((uint32_t)(0xdu));
  /* 108b3655 call 0x108b77d0 */
  push32(0x108b365au); f_108b77d0();
  /* 108b365a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b365d pop ebp */
  EBP = (pop32());
  /* 108b365e ret  */
  ESPCHK(0x108b3650u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x108b3660 (37 bytes, 16 insns) */
void f_108b3660(void) {
  FTRACE(0x108b3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3660 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3661 mov ebp, esp */
  EBP = (ESP);
L_108b3663:;
  /* 108b3663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3666 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3669 jae 0x108b3683 */
  if (!C.cf) goto L_108b3683;
  /* 108b366b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b366e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3671 je 0x108b3678 */
  if (C.zf) goto L_108b3678;
  /* 108b3673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3676 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x108b3678u);
L_108b3678:;
  /* 108b3678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b367b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b367e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108b3681 jmp 0x108b3663 */
  goto L_108b3663;
L_108b3683:;
  /* 108b3683 pop ebp */
  EBP = (pop32());
  /* 108b3684 ret  */
  ESPCHK(0x108b3660u, _esp0);
  ESP += 4; return;
}

/* FUN_10003690 @ 0x108b3690 (130 bytes, 42 insns) */
void f_108b3690(void) {
  FTRACE(0x108b3690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3690 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3691 mov ebp, esp */
  EBP = (ESP);
  /* 108b3693 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3694 call 0x108b7650 */
  push32(0x108b3699u); f_108b7650();
  /* 108b3699 call dword ptr [0x108e234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e234c))), 0x108b369fu);
  /* 108b369f mov dword ptr [0x108dda5c], eax */
  w32((uint32_t)(0x108dda5c), (EAX));
  /* 108b36a4 cmp dword ptr [0x108dda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x108dda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b36ab jne 0x108b36b1 */
  if (!C.zf) goto L_108b36b1;
  /* 108b36ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b36af jmp 0x108b370e */
  goto L_108b370e;
L_108b36b1:;
  /* 108b36b1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 108b36b3 push 0x108da440 */
  push32((uint32_t)(0x108da440u));
  /* 108b36b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b36ba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 108b36bc push 1 */
  push32((uint32_t)(0x1u));
  /* 108b36be call 0x108b4140 */
  push32(0x108b36c3u); f_108b4140();
  /* 108b36c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b36c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b36c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b36cd je 0x108b36e4 */
  if (C.zf) goto L_108b36e4;
  /* 108b36cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b36d2 push eax */
  push32((uint32_t)(EAX));
  /* 108b36d3 mov ecx, dword ptr [0x108dda5c] */
  ECX = (r32((uint32_t)(0x108dda5c)));
  /* 108b36d9 push ecx */
  push32((uint32_t)(ECX));
  /* 108b36da call dword ptr [0x108e2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2348))), 0x108b36e0u);
  /* 108b36e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b36e2 jne 0x108b36e8 */
  if (!C.zf) goto L_108b36e8;
L_108b36e4:;
  /* 108b36e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b36e6 jmp 0x108b370e */
  goto L_108b370e;
L_108b36e8:;
  /* 108b36e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b36eb push edx */
  push32((uint32_t)(EDX));
  /* 108b36ec call 0x108b3750 */
  push32(0x108b36f1u); f_108b3750();
  /* 108b36f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b36f4 call dword ptr [0x108e2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2344))), 0x108b36fau);
  /* 108b36fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b36fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108b36ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3702 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 108b3709 mov eax, 1 */
  EAX = (0x1u);
L_108b370e:;
  /* 108b370e mov esp, ebp */
  ESP = (EBP);
  /* 108b3710 pop ebp */
  EBP = (pop32());
  /* 108b3711 ret  */
  ESPCHK(0x108b3690u, _esp0);
  ESP += 4; return;
}

/* FUN_10003720 @ 0x108b3720 (41 bytes, 11 insns) */
void f_108b3720(void) {
  FTRACE(0x108b3720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3720 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3721 mov ebp, esp */
  EBP = (ESP);
  /* 108b3723 call 0x108b7690 */
  push32(0x108b3728u); f_108b7690();
  /* 108b3728 cmp dword ptr [0x108dda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x108dda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b372f je 0x108b3747 */
  if (C.zf) goto L_108b3747;
  /* 108b3731 mov eax, dword ptr [0x108dda5c] */
  EAX = (r32((uint32_t)(0x108dda5c)));
  /* 108b3736 push eax */
  push32((uint32_t)(EAX));
  /* 108b3737 call dword ptr [0x108e2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2350))), 0x108b373du);
  /* 108b373d mov dword ptr [0x108dda5c], 0xffffffff */
  w32((uint32_t)(0x108dda5c), (0xffffffffu));
L_108b3747:;
  /* 108b3747 pop ebp */
  EBP = (pop32());
  /* 108b3748 ret  */
  ESPCHK(0x108b3720u, _esp0);
  ESP += 4; return;
}

/* FUN_10003750 @ 0x108b3750 (25 bytes, 8 insns) */
void f_108b3750(void) {
  FTRACE(0x108b3750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3750 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3751 mov ebp, esp */
  EBP = (ESP);
  /* 108b3753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3756 mov dword ptr [eax + 0x50], 0x108ddc00 */
  w32((uint32_t)(EAX + 0x50), (0x108ddc00u));
  /* 108b375d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3760 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 108b3767 pop ebp */
  EBP = (pop32());
  /* 108b3768 ret  */
  ESPCHK(0x108b3750u, _esp0);
  ESP += 4; return;
}

/* FUN_10003770 @ 0x108b3770 (152 bytes, 48 insns) */
void f_108b3770(void) {
  FTRACE(0x108b3770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3770 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3771 mov ebp, esp */
  EBP = (ESP);
  /* 108b3773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b3776 call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108b377cu);
  /* 108b377c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b377f mov eax, dword ptr [0x108dda5c] */
  EAX = (r32((uint32_t)(0x108dda5c)));
  /* 108b3784 push eax */
  push32((uint32_t)(EAX));
  /* 108b3785 call dword ptr [0x108e2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2288))), 0x108b378bu);
  /* 108b378b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b378e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3792 jne 0x108b37f7 */
  if (!C.zf) goto L_108b37f7;
  /* 108b3794 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 108b3799 push 0x108da440 */
  push32((uint32_t)(0x108da440u));
  /* 108b379e push 2 */
  push32((uint32_t)(0x2u));
  /* 108b37a0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 108b37a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b37a4 call 0x108b4140 */
  push32(0x108b37a9u); f_108b4140();
  /* 108b37a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b37ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b37af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b37b3 je 0x108b37ed */
  if (C.zf) goto L_108b37ed;
  /* 108b37b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b37b8 push ecx */
  push32((uint32_t)(ECX));
  /* 108b37b9 mov edx, dword ptr [0x108dda5c] */
  EDX = (r32((uint32_t)(0x108dda5c)));
  /* 108b37bf push edx */
  push32((uint32_t)(EDX));
  /* 108b37c0 call dword ptr [0x108e2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2348))), 0x108b37c6u);
  /* 108b37c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b37c8 je 0x108b37ed */
  if (C.zf) goto L_108b37ed;
  /* 108b37ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b37cd push eax */
  push32((uint32_t)(EAX));
  /* 108b37ce call 0x108b3750 */
  push32(0x108b37d3u); f_108b3750();
  /* 108b37d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b37d6 call dword ptr [0x108e2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2344))), 0x108b37dcu);
  /* 108b37dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b37df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108b37e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b37e4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 108b37eb jmp 0x108b37f7 */
  goto L_108b37f7;
L_108b37ed:;
  /* 108b37ed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 108b37ef call 0x108b2ca0 */
  push32(0x108b37f4u); f_108b2ca0();
  /* 108b37f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b37f7:;
  /* 108b37f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b37fa push eax */
  push32((uint32_t)(EAX));
  /* 108b37fb call dword ptr [0x108e2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2354))), 0x108b3801u);
  /* 108b3801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3804 mov esp, ebp */
  ESP = (EBP);
  /* 108b3806 pop ebp */
  EBP = (pop32());
  /* 108b3807 ret  */
  ESPCHK(0x108b3770u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x108b3810 (263 bytes, 86 insns) */
void f_108b3810(void) {
  FTRACE(0x108b3810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3810 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3811 mov ebp, esp */
  EBP = (ESP);
  /* 108b3813 cmp dword ptr [0x108dda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x108dda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b381a je 0x108b3915 */
  if (C.zf) goto L_108b3915;
  /* 108b3820 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3824 jne 0x108b3835 */
  if (!C.zf) goto L_108b3835;
  /* 108b3826 mov eax, dword ptr [0x108dda5c] */
  EAX = (r32((uint32_t)(0x108dda5c)));
  /* 108b382b push eax */
  push32((uint32_t)(EAX));
  /* 108b382c call dword ptr [0x108e2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2288))), 0x108b3832u);
  /* 108b3832 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108b3835:;
  /* 108b3835 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3839 je 0x108b3906 */
  if (C.zf) goto L_108b3906;
  /* 108b383f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3842 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3846 je 0x108b3859 */
  if (C.zf) goto L_108b3859;
  /* 108b3848 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b384a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b384d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 108b3850 push eax */
  push32((uint32_t)(EAX));
  /* 108b3851 call 0x108b47c0 */
  push32(0x108b3856u); f_108b47c0();
  /* 108b3856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b3859:;
  /* 108b3859 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b385c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3860 je 0x108b3873 */
  if (C.zf) goto L_108b3873;
  /* 108b3862 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b3864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3867 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 108b386a push eax */
  push32((uint32_t)(EAX));
  /* 108b386b call 0x108b47c0 */
  push32(0x108b3870u); f_108b47c0();
  /* 108b3870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b3873:;
  /* 108b3873 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3876 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b387a je 0x108b388d */
  if (C.zf) goto L_108b388d;
  /* 108b387c push 2 */
  push32((uint32_t)(0x2u));
  /* 108b387e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3881 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 108b3884 push eax */
  push32((uint32_t)(EAX));
  /* 108b3885 call 0x108b47c0 */
  push32(0x108b388au); f_108b47c0();
  /* 108b388a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b388d:;
  /* 108b388d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3890 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3894 je 0x108b38a7 */
  if (C.zf) goto L_108b38a7;
  /* 108b3896 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b3898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b389b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 108b389e push eax */
  push32((uint32_t)(EAX));
  /* 108b389f call 0x108b47c0 */
  push32(0x108b38a4u); f_108b47c0();
  /* 108b38a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b38a7:;
  /* 108b38a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b38aa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b38ae je 0x108b38c1 */
  if (C.zf) goto L_108b38c1;
  /* 108b38b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b38b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b38b5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 108b38b8 push eax */
  push32((uint32_t)(EAX));
  /* 108b38b9 call 0x108b47c0 */
  push32(0x108b38beu); f_108b47c0();
  /* 108b38be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b38c1:;
  /* 108b38c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b38c4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b38c8 je 0x108b38db */
  if (C.zf) goto L_108b38db;
  /* 108b38ca push 2 */
  push32((uint32_t)(0x2u));
  /* 108b38cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b38cf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 108b38d2 push eax */
  push32((uint32_t)(EAX));
  /* 108b38d3 call 0x108b47c0 */
  push32(0x108b38d8u); f_108b47c0();
  /* 108b38d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b38db:;
  /* 108b38db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b38de cmp dword ptr [ecx + 0x50], 0x108ddc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x108ddc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b38e5 je 0x108b38f8 */
  if (C.zf) goto L_108b38f8;
  /* 108b38e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b38e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b38ec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 108b38ef push eax */
  push32((uint32_t)(EAX));
  /* 108b38f0 call 0x108b47c0 */
  push32(0x108b38f5u); f_108b47c0();
  /* 108b38f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b38f8:;
  /* 108b38f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b38fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b38fd push ecx */
  push32((uint32_t)(ECX));
  /* 108b38fe call 0x108b47c0 */
  push32(0x108b3903u); f_108b47c0();
  /* 108b3903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b3906:;
  /* 108b3906 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3908 mov edx, dword ptr [0x108dda5c] */
  EDX = (r32((uint32_t)(0x108dda5c)));
  /* 108b390e push edx */
  push32((uint32_t)(EDX));
  /* 108b390f call dword ptr [0x108e2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2348))), 0x108b3915u);
L_108b3915:;
  /* 108b3915 pop ebp */
  EBP = (pop32());
  /* 108b3916 ret  */
  ESPCHK(0x108b3810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003920 @ 0x108b3920 (11 bytes, 5 insns) */
void f_108b3920(void) {
  FTRACE(0x108b3920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3920 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3921 mov ebp, esp */
  EBP = (ESP);
  /* 108b3923 call dword ptr [0x108e2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2344))), 0x108b3929u);
  /* 108b3929 pop ebp */
  EBP = (pop32());
  /* 108b392a ret  */
  ESPCHK(0x108b3920u, _esp0);
  ESP += 4; return;
}

/* FUN_10003930 @ 0x108b3930 (11 bytes, 5 insns) */
void f_108b3930(void) {
  FTRACE(0x108b3930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3930 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3931 mov ebp, esp */
  EBP = (ESP);
  /* 108b3933 call dword ptr [0x108e2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2360))), 0x108b3939u);
  /* 108b3939 pop ebp */
  EBP = (pop32());
  /* 108b393a ret  */
  ESPCHK(0x108b3930u, _esp0);
  ESP += 4; return;
}

/* FUN_10003940 @ 0x108b3940 (804 bytes, 236 insns) */
void f_108b3940(void) {
  FTRACE(0x108b3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3940 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3941 mov ebp, esp */
  EBP = (ESP);
  /* 108b3943 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b3946 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 108b394b push 0x108da44c */
  push32((uint32_t)(0x108da44cu));
  /* 108b3950 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b3952 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108b3957 call 0x108b3d30 */
  push32(0x108b395cu); f_108b3d30();
  /* 108b395c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b395f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 108b3962 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3966 jne 0x108b3972 */
  if (!C.zf) goto L_108b3972;
  /* 108b3968 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 108b396a call 0x108b2ca0 */
  push32(0x108b396fu); f_108b2ca0();
  /* 108b396f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b3972:;
  /* 108b3972 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3975 mov dword ptr [0x108e0f40], eax */
  w32((uint32_t)(0x108e0f40), (EAX));
  /* 108b397a mov dword ptr [0x108e107c], 0x20 */
  w32((uint32_t)(0x108e107c), (0x20u));
  /* 108b3984 jmp 0x108b398f */
  goto L_108b398f;
L_108b3986:;
  /* 108b3986 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3989 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b398c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_108b398f:;
  /* 108b398f mov edx, dword ptr [0x108e0f40] */
  EDX = (r32((uint32_t)(0x108e0f40)));
  /* 108b3995 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b399b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b399e jae 0x108b39c3 */
  if (!C.cf) goto L_108b39c3;
  /* 108b39a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b39a3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 108b39a7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b39aa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108b39b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b39b3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 108b39b7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b39ba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108b39c1 jmp 0x108b3986 */
  goto L_108b3986;
L_108b39c3:;
  /* 108b39c3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 108b39c6 push ecx */
  push32((uint32_t)(ECX));
  /* 108b39c7 call dword ptr [0x108e236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e236c))), 0x108b39cdu);
  /* 108b39cd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 108b39d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b39d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b39d8 je 0x108b3b65 */
  if (C.zf) goto L_108b3b65;
  /* 108b39de cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b39e2 je 0x108b3b65 */
  if (C.zf) goto L_108b3b65;
  /* 108b39e8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b39eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b39ed mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 108b39f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b39f3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b39f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b39f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b39fc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b39ff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 108b3a02 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3a09 jge 0x108b3a13 */
  if ((C.sf==C.of)) goto L_108b3a13;
  /* 108b3a0b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 108b3a0e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 108b3a11 jmp 0x108b3a1a */
  goto L_108b3a1a;
L_108b3a13:;
  /* 108b3a13 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_108b3a1a:;
  /* 108b3a1a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 108b3a1d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 108b3a20 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 108b3a27 jmp 0x108b3a32 */
  goto L_108b3a32;
L_108b3a29:;
  /* 108b3a29 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 108b3a2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3a2f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_108b3a32:;
  /* 108b3a32 mov ecx, dword ptr [0x108e107c] */
  ECX = (r32((uint32_t)(0x108e107c)));
  /* 108b3a38 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3a3b jge 0x108b3ad2 */
  if ((C.sf==C.of)) goto L_108b3ad2;
  /* 108b3a41 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 108b3a46 push 0x108da44c */
  push32((uint32_t)(0x108da44cu));
  /* 108b3a4b push 2 */
  push32((uint32_t)(0x2u));
  /* 108b3a4d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108b3a52 call 0x108b3d30 */
  push32(0x108b3a57u); f_108b3d30();
  /* 108b3a57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3a5a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 108b3a5d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3a61 jne 0x108b3a6e */
  if (!C.zf) goto L_108b3a6e;
  /* 108b3a63 mov edx, dword ptr [0x108e107c] */
  EDX = (r32((uint32_t)(0x108e107c)));
  /* 108b3a69 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 108b3a6c jmp 0x108b3ad2 */
  goto L_108b3ad2;
L_108b3a6e:;
  /* 108b3a6e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 108b3a71 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3a74 mov dword ptr [eax*4 + 0x108e0f40], ecx */
  w32((uint32_t)(EAX*4 + 0x108e0f40), (ECX));
  /* 108b3a7b mov edx, dword ptr [0x108e107c] */
  EDX = (r32((uint32_t)(0x108e107c)));
  /* 108b3a81 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3a84 mov dword ptr [0x108e107c], edx */
  w32((uint32_t)(0x108e107c), (EDX));
  /* 108b3a8a jmp 0x108b3a95 */
  goto L_108b3a95;
L_108b3a8c:;
  /* 108b3a8c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3a8f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3a92 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_108b3a95:;
  /* 108b3a95 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 108b3a98 mov edx, dword ptr [ecx*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108e0f40)));
  /* 108b3a9f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3aa5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3aa8 jae 0x108b3acd */
  if (!C.cf) goto L_108b3acd;
  /* 108b3aaa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3aad mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 108b3ab1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3ab4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 108b3aba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3abd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 108b3ac1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3ac4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108b3acb jmp 0x108b3a8c */
  goto L_108b3a8c;
L_108b3acd:;
  /* 108b3acd jmp 0x108b3a29 */
  goto L_108b3a29;
L_108b3ad2:;
  /* 108b3ad2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 108b3ad9 jmp 0x108b3af6 */
  goto L_108b3af6;
L_108b3adb:;
  /* 108b3adb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108b3ade add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3ae1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 108b3ae4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3ae7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3aea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b3aed mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 108b3af0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3af3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_108b3af6:;
  /* 108b3af6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108b3af9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3afc jge 0x108b3b65 */
  if ((C.sf==C.of)) goto L_108b3b65;
  /* 108b3afe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 108b3b01 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3b04 je 0x108b3b60 */
  if (C.zf) goto L_108b3b60;
  /* 108b3b06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3b09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b3b0c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 108b3b0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b3b11 je 0x108b3b60 */
  if (C.zf) goto L_108b3b60;
  /* 108b3b13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3b16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108b3b19 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 108b3b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b3b1e jne 0x108b3b30 */
  if (!C.zf) goto L_108b3b30;
  /* 108b3b20 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 108b3b23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b3b25 push edx */
  push32((uint32_t)(EDX));
  /* 108b3b26 call dword ptr [0x108e2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2368))), 0x108b3b2cu);
  /* 108b3b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b3b2e je 0x108b3b60 */
  if (C.zf) goto L_108b3b60;
L_108b3b30:;
  /* 108b3b30 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 108b3b33 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108b3b36 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108b3b39 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108b3b3c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b3b3f mov edx, dword ptr [eax*4 + 0x108e0f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108b3b46 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3b48 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 108b3b4b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3b4e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 108b3b51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b3b53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108b3b55 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3b5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b3b5d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_108b3b60:;
  /* 108b3b60 jmp 0x108b3adb */
  goto L_108b3adb;
L_108b3b65:;
  /* 108b3b65 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 108b3b6c jmp 0x108b3b77 */
  goto L_108b3b77;
L_108b3b6e:;
  /* 108b3b6e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 108b3b71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3b74 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_108b3b77:;
  /* 108b3b77 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3b7b jge 0x108b3c54 */
  if ((C.sf==C.of)) goto L_108b3c54;
  /* 108b3b81 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108b3b84 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b3b87 mov edx, dword ptr [0x108e0f40] */
  EDX = (r32((uint32_t)(0x108e0f40)));
  /* 108b3b8d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3b8f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 108b3b92 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3b95 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3b98 jne 0x108b3c40 */
  if (!C.zf) goto L_108b3c40;
  /* 108b3b9e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3ba1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 108b3ba5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3ba9 jne 0x108b3bb4 */
  if (!C.zf) goto L_108b3bb4;
  /* 108b3bab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 108b3bb2 jmp 0x108b3bc4 */
  goto L_108b3bc4;
L_108b3bb4:;
  /* 108b3bb4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 108b3bb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b3bba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 108b3bbc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b3bbe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3bc1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_108b3bc4:;
  /* 108b3bc4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 108b3bc7 push eax */
  push32((uint32_t)(EAX));
  /* 108b3bc8 call dword ptr [0x108e2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2318))), 0x108b3bceu);
  /* 108b3bce mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 108b3bd1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3bd5 je 0x108b3c2f */
  if (C.zf) goto L_108b3c2f;
  /* 108b3bd7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108b3bda push ecx */
  push32((uint32_t)(ECX));
  /* 108b3bdb call dword ptr [0x108e2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2368))), 0x108b3be1u);
  /* 108b3be1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 108b3be4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3be8 je 0x108b3c2f */
  if (C.zf) goto L_108b3c2f;
  /* 108b3bea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3bed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108b3bf0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108b3bf2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 108b3bf5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b3bfb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3bfe jne 0x108b3c10 */
  if (!C.zf) goto L_108b3c10;
  /* 108b3c00 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3c03 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 108b3c06 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 108b3c08 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3c0b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 108b3c0e jmp 0x108b3c2d */
  goto L_108b3c2d;
L_108b3c10:;
  /* 108b3c10 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 108b3c13 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b3c19 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3c1c jne 0x108b3c2d */
  if (!C.zf) goto L_108b3c2d;
  /* 108b3c1e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3c21 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b3c24 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 108b3c27 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3c2a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_108b3c2d:;
  /* 108b3c2d jmp 0x108b3c3e */
  goto L_108b3c3e;
L_108b3c2f:;
  /* 108b3c2f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3c32 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b3c35 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 108b3c38 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3c3b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_108b3c3e:;
  /* 108b3c3e jmp 0x108b3c4f */
  goto L_108b3c4f;
L_108b3c40:;
  /* 108b3c40 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3c43 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108b3c46 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 108b3c49 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b3c4c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_108b3c4f:;
  /* 108b3c4f jmp 0x108b3b6e */
  goto L_108b3b6e;
L_108b3c54:;
  /* 108b3c54 mov eax, dword ptr [0x108e107c] */
  EAX = (r32((uint32_t)(0x108e107c)));
  /* 108b3c59 push eax */
  push32((uint32_t)(EAX));
  /* 108b3c5a call dword ptr [0x108e2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2364))), 0x108b3c60u);
  /* 108b3c60 mov esp, ebp */
  ESP = (EBP);
  /* 108b3c62 pop ebp */
  EBP = (pop32());
  /* 108b3c63 ret  */
  ESPCHK(0x108b3940u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x108b3c70 (155 bytes, 45 insns) */
void f_108b3c70(void) {
  FTRACE(0x108b3c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3c70 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3c71 mov ebp, esp */
  EBP = (ESP);
  /* 108b3c73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b3c76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108b3c7d jmp 0x108b3c88 */
  goto L_108b3c88;
L_108b3c7f:;
  /* 108b3c7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b3c82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3c85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108b3c88:;
  /* 108b3c88 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3c8c jge 0x108b3d07 */
  if ((C.sf==C.of)) goto L_108b3d07;
  /* 108b3c8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b3c91 cmp dword ptr [ecx*4 + 0x108e0f40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x108e0f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3c99 je 0x108b3d02 */
  if (C.zf) goto L_108b3d02;
  /* 108b3c9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b3c9e mov eax, dword ptr [edx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108b3ca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b3ca8 jmp 0x108b3cb3 */
  goto L_108b3cb3;
L_108b3caa:;
  /* 108b3caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3cad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3cb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b3cb3:;
  /* 108b3cb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b3cb6 mov eax, dword ptr [edx*4 + 0x108e0f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108e0f40)));
  /* 108b3cbd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3cc2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3cc5 jae 0x108b3cdf */
  if (!C.cf) goto L_108b3cdf;
  /* 108b3cc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3cca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3cce je 0x108b3cdd */
  if (C.zf) goto L_108b3cdd;
  /* 108b3cd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3cd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3cd6 push edx */
  push32((uint32_t)(EDX));
  /* 108b3cd7 call dword ptr [0x108e2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2370))), 0x108b3cddu);
L_108b3cdd:;
  /* 108b3cdd jmp 0x108b3caa */
  goto L_108b3caa;
L_108b3cdf:;
  /* 108b3cdf push 2 */
  push32((uint32_t)(0x2u));
  /* 108b3ce1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b3ce4 mov ecx, dword ptr [eax*4 + 0x108e0f40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108e0f40)));
  /* 108b3ceb push ecx */
  push32((uint32_t)(ECX));
  /* 108b3cec call 0x108b47c0 */
  push32(0x108b3cf1u); f_108b47c0();
  /* 108b3cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3cf4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b3cf7 mov dword ptr [edx*4 + 0x108e0f40], 0 */
  w32((uint32_t)(EDX*4 + 0x108e0f40), (0x0u));
L_108b3d02:;
  /* 108b3d02 jmp 0x108b3c7f */
  goto L_108b3c7f;
L_108b3d07:;
  /* 108b3d07 mov esp, ebp */
  ESP = (EBP);
  /* 108b3d09 pop ebp */
  EBP = (pop32());
  /* 108b3d0a ret  */
  ESPCHK(0x108b3c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d10 @ 0x108b3d10 (29 bytes, 13 insns) */
void f_108b3d10(void) {
  FTRACE(0x108b3d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3d10 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3d11 mov ebp, esp */
  EBP = (ESP);
  /* 108b3d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3d19 mov eax, dword ptr [0x108df758] */
  EAX = (r32((uint32_t)(0x108df758)));
  /* 108b3d1e push eax */
  push32((uint32_t)(EAX));
  /* 108b3d1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3d22 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3d23 call 0x108b3d80 */
  push32(0x108b3d28u); f_108b3d80();
  /* 108b3d28 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3d2b pop ebp */
  EBP = (pop32());
  /* 108b3d2c ret  */
  ESPCHK(0x108b3d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d30 @ 0x108b3d30 (35 bytes, 16 insns) */
void f_108b3d30(void) {
  FTRACE(0x108b3d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3d30 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3d31 mov ebp, esp */
  EBP = (ESP);
  /* 108b3d33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b3d36 push eax */
  push32((uint32_t)(EAX));
  /* 108b3d37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b3d3a push ecx */
  push32((uint32_t)(ECX));
  /* 108b3d3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b3d3e push edx */
  push32((uint32_t)(EDX));
  /* 108b3d3f mov eax, dword ptr [0x108df758] */
  EAX = (r32((uint32_t)(0x108df758)));
  /* 108b3d44 push eax */
  push32((uint32_t)(EAX));
  /* 108b3d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3d48 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3d49 call 0x108b3d80 */
  push32(0x108b3d4eu); f_108b3d80();
  /* 108b3d4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3d51 pop ebp */
  EBP = (pop32());
  /* 108b3d52 ret  */
  ESPCHK(0x108b3d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d60 @ 0x108b3d60 (27 bytes, 13 insns) */
void f_108b3d60(void) {
  FTRACE(0x108b3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3d61 mov ebp, esp */
  EBP = (ESP);
  /* 108b3d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b3d6c push eax */
  push32((uint32_t)(EAX));
  /* 108b3d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3d70 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3d71 call 0x108b3d80 */
  push32(0x108b3d76u); f_108b3d80();
  /* 108b3d76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3d79 pop ebp */
  EBP = (pop32());
  /* 108b3d7a ret  */
  ESPCHK(0x108b3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d80 @ 0x108b3d80 (94 bytes, 38 insns) */
void f_108b3d80(void) {
  FTRACE(0x108b3d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3d80 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3d81 mov ebp, esp */
  EBP = (ESP);
  /* 108b3d83 push ecx */
  push32((uint32_t)(ECX));
L_108b3d84:;
  /* 108b3d84 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b3d86 call 0x108b7730 */
  push32(0x108b3d8bu); f_108b7730();
  /* 108b3d8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3d8e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b3d91 push eax */
  push32((uint32_t)(EAX));
  /* 108b3d92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b3d95 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3d96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b3d99 push edx */
  push32((uint32_t)(EDX));
  /* 108b3d9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3d9d push eax */
  push32((uint32_t)(EAX));
  /* 108b3d9e call 0x108b3e00 */
  push32(0x108b3da3u); f_108b3e00();
  /* 108b3da3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3da6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b3da9 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b3dab call 0x108b77d0 */
  push32(0x108b3db0u); f_108b77d0();
  /* 108b3db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3db3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3db7 jne 0x108b3dbf */
  if (!C.zf) goto L_108b3dbf;
  /* 108b3db9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3dbd jne 0x108b3dc4 */
  if (!C.zf) goto L_108b3dc4;
L_108b3dbf:;
  /* 108b3dbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3dc2 jmp 0x108b3dda */
  goto L_108b3dda;
L_108b3dc4:;
  /* 108b3dc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3dc8 call 0x108b7a70 */
  push32(0x108b3dcdu); f_108b7a70();
  /* 108b3dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b3dd2 jne 0x108b3dd8 */
  if (!C.zf) goto L_108b3dd8;
  /* 108b3dd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b3dd6 jmp 0x108b3dda */
  goto L_108b3dda;
L_108b3dd8:;
  /* 108b3dd8 jmp 0x108b3d84 */
  goto L_108b3d84;
L_108b3dda:;
  /* 108b3dda mov esp, ebp */
  ESP = (EBP);
  /* 108b3ddc pop ebp */
  EBP = (pop32());
  /* 108b3ddd ret  */
  ESPCHK(0x108b3d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de0 @ 0x108b3de0 (23 bytes, 11 insns) */
void f_108b3de0(void) {
  FTRACE(0x108b3de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3de0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3de1 mov ebp, esp */
  EBP = (ESP);
  /* 108b3de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3de7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3de9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3dec push eax */
  push32((uint32_t)(EAX));
  /* 108b3ded call 0x108b3e00 */
  push32(0x108b3df2u); f_108b3e00();
  /* 108b3df2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3df5 pop ebp */
  EBP = (pop32());
  /* 108b3df6 ret  */
  ESPCHK(0x108b3de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e00 @ 0x108b3e00 (787 bytes, 254 insns) */
void f_108b3e00(void) {
  FTRACE(0x108b3e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b3e00 push ebp */
  push32((uint32_t)(EBP));
  /* 108b3e01 mov ebp, esp */
  EBP = (ESP);
  /* 108b3e03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b3e06 push ebx */
  push32((uint32_t)(EBX));
  /* 108b3e07 push esi */
  push32((uint32_t)(ESI));
  /* 108b3e08 push edi */
  push32((uint32_t)(EDI));
  /* 108b3e09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108b3e10 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b3e15 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108b3e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b3e1a je 0x108b3e4c */
  if (C.zf) goto L_108b3e4c;
L_108b3e1c:;
  /* 108b3e1c call 0x108b4ed0 */
  push32(0x108b3e21u); f_108b4ed0();
  /* 108b3e21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b3e23 jne 0x108b3e46 */
  if (!C.zf) goto L_108b3e46;
  /* 108b3e25 push 0x108da540 */
  push32((uint32_t)(0x108da540u));
  /* 108b3e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3e2c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 108b3e31 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b3e36 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b3e38 call 0x108b2df0 */
  push32(0x108b3e3du); f_108b2df0();
  /* 108b3e3d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3e40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3e43 jne 0x108b3e46 */
  if (!C.zf) goto L_108b3e46;
  /* 108b3e45 int3  */
  x86_unimpl("int3 @ 0x108b3e45");
L_108b3e46:;
  /* 108b3e46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b3e48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b3e4a jne 0x108b3e1c */
  if (!C.zf) goto L_108b3e1c;
L_108b3e4c:;
  /* 108b3e4c mov edx, dword ptr [0x108dda88] */
  EDX = (r32((uint32_t)(0x108dda88)));
  /* 108b3e52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108b3e55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b3e58 cmp eax, dword ptr [0x108dda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108dda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3e5e jne 0x108b3e61 */
  if (!C.zf) goto L_108b3e61;
  /* 108b3e60 int3  */
  x86_unimpl("int3 @ 0x108b3e60");
L_108b3e61:;
  /* 108b3e61 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b3e64 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3e65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b3e68 push edx */
  push32((uint32_t)(EDX));
  /* 108b3e69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b3e6c push eax */
  push32((uint32_t)(EAX));
  /* 108b3e6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b3e70 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3e71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3e74 push edx */
  push32((uint32_t)(EDX));
  /* 108b3e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3e79 call dword ptr [0x108ddc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x108ddc90))), 0x108b3e7fu);
  /* 108b3e7f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b3e84 jne 0x108b3ee4 */
  if (!C.zf) goto L_108b3ee4;
  /* 108b3e86 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3e8a je 0x108b3eb7 */
  if (C.zf) goto L_108b3eb7;
L_108b3e8c:;
  /* 108b3e8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b3e8f push eax */
  push32((uint32_t)(EAX));
  /* 108b3e90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b3e93 push ecx */
  push32((uint32_t)(ECX));
  /* 108b3e94 push 0x108da4fc */
  push32((uint32_t)(0x108da4fcu));
  /* 108b3e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3ea1 call 0x108b2df0 */
  push32(0x108b3ea6u); f_108b2df0();
  /* 108b3ea6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3ea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3eac jne 0x108b3eaf */
  if (!C.zf) goto L_108b3eaf;
  /* 108b3eae int3  */
  x86_unimpl("int3 @ 0x108b3eae");
L_108b3eaf:;
  /* 108b3eaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b3eb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b3eb3 jne 0x108b3e8c */
  if (!C.zf) goto L_108b3e8c;
  /* 108b3eb5 jmp 0x108b3edd */
  goto L_108b3edd;
L_108b3eb7:;
  /* 108b3eb7 push 0x108da4d8 */
  push32((uint32_t)(0x108da4d8u));
  /* 108b3ebc push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b3ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3ec9 call 0x108b2df0 */
  push32(0x108b3eceu); f_108b2df0();
  /* 108b3ece add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3ed1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3ed4 jne 0x108b3ed7 */
  if (!C.zf) goto L_108b3ed7;
  /* 108b3ed6 int3  */
  x86_unimpl("int3 @ 0x108b3ed6");
L_108b3ed7:;
  /* 108b3ed7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b3ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b3edb jne 0x108b3eb7 */
  if (!C.zf) goto L_108b3eb7;
L_108b3edd:;
  /* 108b3edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b3edf jmp 0x108b410c */
  goto L_108b410c;
L_108b3ee4:;
  /* 108b3ee4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b3ee7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b3eed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3ef0 je 0x108b3f06 */
  if (C.zf) goto L_108b3f06;
  /* 108b3ef2 mov edx, dword ptr [0x108dda84] */
  EDX = (r32((uint32_t)(0x108dda84)));
  /* 108b3ef8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108b3efb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b3efd jne 0x108b3f06 */
  if (!C.zf) goto L_108b3f06;
  /* 108b3eff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_108b3f06:;
  /* 108b3f06 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3f0a ja 0x108b3f17 */
  if ((!C.cf&&!C.zf)) goto L_108b3f17;
  /* 108b3f0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3f0f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3f12 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3f15 jbe 0x108b3f43 */
  if ((C.cf||C.zf)) goto L_108b3f43;
L_108b3f17:;
  /* 108b3f17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3f1a push ecx */
  push32((uint32_t)(ECX));
  /* 108b3f1b push 0x108da4b0 */
  push32((uint32_t)(0x108da4b0u));
  /* 108b3f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3f28 call 0x108b2df0 */
  push32(0x108b3f2du); f_108b2df0();
  /* 108b3f2d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3f33 jne 0x108b3f36 */
  if (!C.zf) goto L_108b3f36;
  /* 108b3f35 int3  */
  x86_unimpl("int3 @ 0x108b3f35");
L_108b3f36:;
  /* 108b3f36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b3f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b3f3a jne 0x108b3f17 */
  if (!C.zf) goto L_108b3f17;
  /* 108b3f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b3f3e jmp 0x108b410c */
  goto L_108b410c;
L_108b3f43:;
  /* 108b3f43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b3f46 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b3f4b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3f4e je 0x108b3f90 */
  if (C.zf) goto L_108b3f90;
  /* 108b3f50 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3f54 je 0x108b3f90 */
  if (C.zf) goto L_108b3f90;
  /* 108b3f56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b3f59 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b3f5f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3f62 je 0x108b3f90 */
  if (C.zf) goto L_108b3f90;
  /* 108b3f64 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3f68 je 0x108b3f90 */
  if (C.zf) goto L_108b3f90;
L_108b3f6a:;
  /* 108b3f6a push 0x108da47c */
  push32((uint32_t)(0x108da47cu));
  /* 108b3f6f push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b3f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b3f7a push 1 */
  push32((uint32_t)(0x1u));
  /* 108b3f7c call 0x108b2df0 */
  push32(0x108b3f81u); f_108b2df0();
  /* 108b3f81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3f84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3f87 jne 0x108b3f8a */
  if (!C.zf) goto L_108b3f8a;
  /* 108b3f89 int3  */
  x86_unimpl("int3 @ 0x108b3f89");
L_108b3f8a:;
  /* 108b3f8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b3f8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b3f8e jne 0x108b3f6a */
  if (!C.zf) goto L_108b3f6a;
L_108b3f90:;
  /* 108b3f90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3f93 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3f96 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b3f99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b3f9c push ecx */
  push32((uint32_t)(ECX));
  /* 108b3f9d call 0x108b7b80 */
  push32(0x108b3fa2u); f_108b7b80();
  /* 108b3fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b3fa8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3fac jne 0x108b3fb5 */
  if (!C.zf) goto L_108b3fb5;
  /* 108b3fae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b3fb0 jmp 0x108b410c */
  goto L_108b410c;
L_108b3fb5:;
  /* 108b3fb5 mov edx, dword ptr [0x108dda88] */
  EDX = (r32((uint32_t)(0x108dda88)));
  /* 108b3fbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b3fbe mov dword ptr [0x108dda88], edx */
  w32((uint32_t)(0x108dda88), (EDX));
  /* 108b3fc4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b3fc8 je 0x108b4013 */
  if (C.zf) goto L_108b4013;
  /* 108b3fca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3fcd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108b3fd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3fd6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 108b3fdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3fe0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 108b3fe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3fea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 108b3ff1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3ff4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b3ff7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 108b3ffa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b3ffd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 108b4004 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4007 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 108b400e jmp 0x108b40b3 */
  goto L_108b40b3;
L_108b4013:;
  /* 108b4013 mov edx, dword ptr [0x108df5b8] */
  EDX = (r32((uint32_t)(0x108df5b8)));
  /* 108b4019 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b401c mov dword ptr [0x108df5b8], edx */
  w32((uint32_t)(0x108df5b8), (EDX));
  /* 108b4022 mov eax, dword ptr [0x108df5c0] */
  EAX = (r32((uint32_t)(0x108df5c0)));
  /* 108b4027 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b402a mov dword ptr [0x108df5c0], eax */
  w32((uint32_t)(0x108df5c0), (EAX));
  /* 108b402f mov ecx, dword ptr [0x108df5c0] */
  ECX = (r32((uint32_t)(0x108df5c0)));
  /* 108b4035 cmp ecx, dword ptr [0x108df5c4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108df5c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b403b jbe 0x108b4049 */
  if ((C.cf||C.zf)) goto L_108b4049;
  /* 108b403d mov edx, dword ptr [0x108df5c0] */
  EDX = (r32((uint32_t)(0x108df5c0)));
  /* 108b4043 mov dword ptr [0x108df5c4], edx */
  w32((uint32_t)(0x108df5c4), (EDX));
L_108b4049:;
  /* 108b4049 cmp dword ptr [0x108df5bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df5bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4050 je 0x108b405f */
  if (C.zf) goto L_108b405f;
  /* 108b4052 mov eax, dword ptr [0x108df5bc] */
  EAX = (r32((uint32_t)(0x108df5bc)));
  /* 108b4057 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b405a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108b405d jmp 0x108b4068 */
  goto L_108b4068;
L_108b405f:;
  /* 108b405f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4062 mov dword ptr [0x108df5b4], edx */
  w32((uint32_t)(0x108df5b4), (EDX));
L_108b4068:;
  /* 108b4068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b406b mov ecx, dword ptr [0x108df5bc] */
  ECX = (r32((uint32_t)(0x108df5bc)));
  /* 108b4071 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108b4073 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4076 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 108b407d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4080 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b4083 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 108b4086 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4089 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b408c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 108b408f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4092 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4095 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 108b4098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b409b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b409e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 108b40a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b40a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b40a7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 108b40aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b40ad mov dword ptr [0x108df5bc], ecx */
  w32((uint32_t)(0x108df5bc), (ECX));
L_108b40b3:;
  /* 108b40b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b40b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b40b7 mov dl, byte ptr [0x108dda90] */
  DL = (r8((uint32_t)(0x108dda90)));
  /* 108b40bd push edx */
  push32((uint32_t)(EDX));
  /* 108b40be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b40c1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b40c4 push eax */
  push32((uint32_t)(EAX));
  /* 108b40c5 call 0x108b7aa0 */
  push32(0x108b40cau); f_108b7aa0();
  /* 108b40ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b40cd push 4 */
  push32((uint32_t)(0x4u));
  /* 108b40cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b40d1 mov cl, byte ptr [0x108dda90] */
  CL = (r8((uint32_t)(0x108dda90)));
  /* 108b40d7 push ecx */
  push32((uint32_t)(ECX));
  /* 108b40d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b40db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b40de lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 108b40e2 push ecx */
  push32((uint32_t)(ECX));
  /* 108b40e3 call 0x108b7aa0 */
  push32(0x108b40e8u); f_108b7aa0();
  /* 108b40e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b40eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b40ee push edx */
  push32((uint32_t)(EDX));
  /* 108b40ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b40f1 mov al, byte ptr [0x108dda92] */
  AL = (r8((uint32_t)(0x108dda92)));
  /* 108b40f6 push eax */
  push32((uint32_t)(EAX));
  /* 108b40f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b40fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b40fd push ecx */
  push32((uint32_t)(ECX));
  /* 108b40fe call 0x108b7aa0 */
  push32(0x108b4103u); f_108b7aa0();
  /* 108b4103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4106 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4109 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108b410c:;
  /* 108b410c pop edi */
  EDI = (pop32());
  /* 108b410d pop esi */
  ESI = (pop32());
  /* 108b410e pop ebx */
  EBX = (pop32());
  /* 108b410f mov esp, ebp */
  ESP = (EBP);
  /* 108b4111 pop ebp */
  EBP = (pop32());
  /* 108b4112 ret  */
  ESPCHK(0x108b3e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004120 @ 0x108b4120 (27 bytes, 13 insns) */
void f_108b4120(void) {
  FTRACE(0x108b4120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4120 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4121 mov ebp, esp */
  EBP = (ESP);
  /* 108b4123 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4125 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4127 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b4129 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b412c push eax */
  push32((uint32_t)(EAX));
  /* 108b412d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4130 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4131 call 0x108b4140 */
  push32(0x108b4136u); f_108b4140();
  /* 108b4136 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4139 pop ebp */
  EBP = (pop32());
  /* 108b413a ret  */
  ESPCHK(0x108b4120u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x108b4140 (96 bytes, 37 insns) */
void f_108b4140(void) {
  FTRACE(0x108b4140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4140 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4141 mov ebp, esp */
  EBP = (ESP);
  /* 108b4143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4146 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4149 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b414d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108b4150 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b4153 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4154 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b4157 push edx */
  push32((uint32_t)(EDX));
  /* 108b4158 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b415b push eax */
  push32((uint32_t)(EAX));
  /* 108b415c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b415f push ecx */
  push32((uint32_t)(ECX));
  /* 108b4160 call 0x108b3d30 */
  push32(0x108b4165u); f_108b3d30();
  /* 108b4165 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4168 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b416b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b416f je 0x108b4199 */
  if (C.zf) goto L_108b4199;
  /* 108b4171 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4174 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108b4177 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b417a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b417d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b4180:;
  /* 108b4180 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4183 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4186 jae 0x108b4199 */
  if (!C.cf) goto L_108b4199;
  /* 108b4188 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b418b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108b418e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4191 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4194 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b4197 jmp 0x108b4180 */
  goto L_108b4180;
L_108b4199:;
  /* 108b4199 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b419c mov esp, ebp */
  ESP = (EBP);
  /* 108b419e pop ebp */
  EBP = (pop32());
  /* 108b419f ret  */
  ESPCHK(0x108b4140u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x108b41a0 (27 bytes, 13 insns) */
void f_108b41a0(void) {
  FTRACE(0x108b41a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b41a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b41a1 mov ebp, esp */
  EBP = (ESP);
  /* 108b41a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b41a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b41a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b41a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b41ac push eax */
  push32((uint32_t)(EAX));
  /* 108b41ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b41b0 push ecx */
  push32((uint32_t)(ECX));
  /* 108b41b1 call 0x108b41c0 */
  push32(0x108b41b6u); f_108b41c0();
  /* 108b41b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b41b9 pop ebp */
  EBP = (pop32());
  /* 108b41ba ret  */
  ESPCHK(0x108b41a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x108b41c0 (64 bytes, 27 insns) */
void f_108b41c0(void) {
  FTRACE(0x108b41c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b41c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b41c1 mov ebp, esp */
  EBP = (ESP);
  /* 108b41c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b41c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b41c6 call 0x108b7730 */
  push32(0x108b41cbu); f_108b7730();
  /* 108b41cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b41ce push 1 */
  push32((uint32_t)(0x1u));
  /* 108b41d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b41d3 push eax */
  push32((uint32_t)(EAX));
  /* 108b41d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b41d7 push ecx */
  push32((uint32_t)(ECX));
  /* 108b41d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b41db push edx */
  push32((uint32_t)(EDX));
  /* 108b41dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b41df push eax */
  push32((uint32_t)(EAX));
  /* 108b41e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b41e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b41e4 call 0x108b4200 */
  push32(0x108b41e9u); f_108b4200();
  /* 108b41e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b41ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b41ef push 9 */
  push32((uint32_t)(0x9u));
  /* 108b41f1 call 0x108b77d0 */
  push32(0x108b41f6u); f_108b77d0();
  /* 108b41f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b41f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b41fc mov esp, ebp */
  ESP = (EBP);
  /* 108b41fe pop ebp */
  EBP = (pop32());
  /* 108b41ff ret  */
  ESPCHK(0x108b41c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004200 @ 0x108b4200 (1297 bytes, 431 insns) */
void f_108b4200(void) {
  FTRACE(0x108b4200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4200 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4201 mov ebp, esp */
  EBP = (ESP);
  /* 108b4203 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4206 push ebx */
  push32((uint32_t)(EBX));
  /* 108b4207 push esi */
  push32((uint32_t)(ESI));
  /* 108b4208 push edi */
  push32((uint32_t)(EDI));
  /* 108b4209 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 108b4210 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4214 jne 0x108b4233 */
  if (!C.zf) goto L_108b4233;
  /* 108b4216 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b4219 push eax */
  push32((uint32_t)(EAX));
  /* 108b421a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b421d push ecx */
  push32((uint32_t)(ECX));
  /* 108b421e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b4221 push edx */
  push32((uint32_t)(EDX));
  /* 108b4222 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4225 push eax */
  push32((uint32_t)(EAX));
  /* 108b4226 call 0x108b3d30 */
  push32(0x108b422bu); f_108b3d30();
  /* 108b422b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b422e jmp 0x108b470a */
  goto L_108b470a;
L_108b4233:;
  /* 108b4233 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4237 je 0x108b4256 */
  if (C.zf) goto L_108b4256;
  /* 108b4239 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b423d jne 0x108b4256 */
  if (!C.zf) goto L_108b4256;
  /* 108b423f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b4242 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4246 push edx */
  push32((uint32_t)(EDX));
  /* 108b4247 call 0x108b47c0 */
  push32(0x108b424cu); f_108b47c0();
  /* 108b424c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b424f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4251 jmp 0x108b470a */
  goto L_108b470a;
L_108b4256:;
  /* 108b4256 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b425b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108b425e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4260 je 0x108b4292 */
  if (C.zf) goto L_108b4292;
L_108b4262:;
  /* 108b4262 call 0x108b4ed0 */
  push32(0x108b4267u); f_108b4ed0();
  /* 108b4267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4269 jne 0x108b428c */
  if (!C.zf) goto L_108b428c;
  /* 108b426b push 0x108da540 */
  push32((uint32_t)(0x108da540u));
  /* 108b4270 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4272 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 108b4277 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b427c push 2 */
  push32((uint32_t)(0x2u));
  /* 108b427e call 0x108b2df0 */
  push32(0x108b4283u); f_108b2df0();
  /* 108b4283 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4286 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4289 jne 0x108b428c */
  if (!C.zf) goto L_108b428c;
  /* 108b428b int3  */
  x86_unimpl("int3 @ 0x108b428b");
L_108b428c:;
  /* 108b428c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b428e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4290 jne 0x108b4262 */
  if (!C.zf) goto L_108b4262;
L_108b4292:;
  /* 108b4292 mov edx, dword ptr [0x108dda88] */
  EDX = (r32((uint32_t)(0x108dda88)));
  /* 108b4298 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108b429b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b429e cmp eax, dword ptr [0x108dda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108dda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b42a4 jne 0x108b42a7 */
  if (!C.zf) goto L_108b42a7;
  /* 108b42a6 int3  */
  x86_unimpl("int3 @ 0x108b42a6");
L_108b42a7:;
  /* 108b42a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b42aa push ecx */
  push32((uint32_t)(ECX));
  /* 108b42ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b42ae push edx */
  push32((uint32_t)(EDX));
  /* 108b42af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b42b2 push eax */
  push32((uint32_t)(EAX));
  /* 108b42b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b42b6 push ecx */
  push32((uint32_t)(ECX));
  /* 108b42b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b42ba push edx */
  push32((uint32_t)(EDX));
  /* 108b42bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b42be push eax */
  push32((uint32_t)(EAX));
  /* 108b42bf push 2 */
  push32((uint32_t)(0x2u));
  /* 108b42c1 call dword ptr [0x108ddc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x108ddc90))), 0x108b42c7u);
  /* 108b42c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b42ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b42cc jne 0x108b432c */
  if (!C.zf) goto L_108b432c;
  /* 108b42ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b42d2 je 0x108b42ff */
  if (C.zf) goto L_108b42ff;
L_108b42d4:;
  /* 108b42d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b42d7 push ecx */
  push32((uint32_t)(ECX));
  /* 108b42d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b42db push edx */
  push32((uint32_t)(EDX));
  /* 108b42dc push 0x108da6bc */
  push32((uint32_t)(0x108da6bcu));
  /* 108b42e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b42e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b42e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b42e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b42e9 call 0x108b2df0 */
  push32(0x108b42eeu); f_108b2df0();
  /* 108b42ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b42f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b42f4 jne 0x108b42f7 */
  if (!C.zf) goto L_108b42f7;
  /* 108b42f6 int3  */
  x86_unimpl("int3 @ 0x108b42f6");
L_108b42f7:;
  /* 108b42f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b42f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b42fb jne 0x108b42d4 */
  if (!C.zf) goto L_108b42d4;
  /* 108b42fd jmp 0x108b4325 */
  goto L_108b4325;
L_108b42ff:;
  /* 108b42ff push 0x108da698 */
  push32((uint32_t)(0x108da698u));
  /* 108b4304 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b4309 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b430b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b430d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b430f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4311 call 0x108b2df0 */
  push32(0x108b4316u); f_108b2df0();
  /* 108b4316 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4319 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b431c jne 0x108b431f */
  if (!C.zf) goto L_108b431f;
  /* 108b431e int3  */
  x86_unimpl("int3 @ 0x108b431e");
L_108b431f:;
  /* 108b431f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4321 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4323 jne 0x108b42ff */
  if (!C.zf) goto L_108b42ff;
L_108b4325:;
  /* 108b4325 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4327 jmp 0x108b470a */
  goto L_108b470a;
L_108b432c:;
  /* 108b432c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4330 jbe 0x108b435e */
  if ((C.cf||C.zf)) goto L_108b435e;
L_108b4332:;
  /* 108b4332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4335 push edx */
  push32((uint32_t)(EDX));
  /* 108b4336 push 0x108da668 */
  push32((uint32_t)(0x108da668u));
  /* 108b433b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b433d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b433f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4341 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b4343 call 0x108b2df0 */
  push32(0x108b4348u); f_108b2df0();
  /* 108b4348 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b434b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b434e jne 0x108b4351 */
  if (!C.zf) goto L_108b4351;
  /* 108b4350 int3  */
  x86_unimpl("int3 @ 0x108b4350");
L_108b4351:;
  /* 108b4351 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4353 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4355 jne 0x108b4332 */
  if (!C.zf) goto L_108b4332;
  /* 108b4357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4359 jmp 0x108b470a */
  goto L_108b470a;
L_108b435e:;
  /* 108b435e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4362 je 0x108b43a6 */
  if (C.zf) goto L_108b43a6;
  /* 108b4364 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b4367 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b436d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4370 je 0x108b43a6 */
  if (C.zf) goto L_108b43a6;
  /* 108b4372 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b4375 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b437b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b437e je 0x108b43a6 */
  if (C.zf) goto L_108b43a6;
L_108b4380:;
  /* 108b4380 push 0x108da47c */
  push32((uint32_t)(0x108da47cu));
  /* 108b4385 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b438a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b438c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b438e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4390 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b4392 call 0x108b2df0 */
  push32(0x108b4397u); f_108b2df0();
  /* 108b4397 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b439a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b439d jne 0x108b43a0 */
  if (!C.zf) goto L_108b43a0;
  /* 108b439f int3  */
  x86_unimpl("int3 @ 0x108b439f");
L_108b43a0:;
  /* 108b43a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b43a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b43a4 jne 0x108b4380 */
  if (!C.zf) goto L_108b4380;
L_108b43a6:;
  /* 108b43a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b43a9 push ecx */
  push32((uint32_t)(ECX));
  /* 108b43aa call 0x108b5330 */
  push32(0x108b43afu); f_108b5330();
  /* 108b43af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b43b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b43b4 jne 0x108b43d7 */
  if (!C.zf) goto L_108b43d7;
  /* 108b43b6 push 0x108da644 */
  push32((uint32_t)(0x108da644u));
  /* 108b43bb push 0 */
  push32((uint32_t)(0x0u));
  /* 108b43bd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 108b43c2 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b43c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b43c9 call 0x108b2df0 */
  push32(0x108b43ceu); f_108b2df0();
  /* 108b43ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b43d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b43d4 jne 0x108b43d7 */
  if (!C.zf) goto L_108b43d7;
  /* 108b43d6 int3  */
  x86_unimpl("int3 @ 0x108b43d6");
L_108b43d7:;
  /* 108b43d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b43d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b43db jne 0x108b43a6 */
  if (!C.zf) goto L_108b43a6;
  /* 108b43dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b43e0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b43e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b43e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b43e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b43ed jne 0x108b43f6 */
  if (!C.zf) goto L_108b43f6;
  /* 108b43ef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_108b43f6:;
  /* 108b43f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b43fa je 0x108b443a */
  if (C.zf) goto L_108b443a;
L_108b43fc:;
  /* 108b43fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b43ff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4406 jne 0x108b4411 */
  if (!C.zf) goto L_108b4411;
  /* 108b4408 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b440b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b440f je 0x108b4432 */
  if (C.zf) goto L_108b4432;
L_108b4411:;
  /* 108b4411 push 0x108da5fc */
  push32((uint32_t)(0x108da5fcu));
  /* 108b4416 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4418 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 108b441d push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4422 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4424 call 0x108b2df0 */
  push32(0x108b4429u); f_108b2df0();
  /* 108b4429 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b442c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b442f jne 0x108b4432 */
  if (!C.zf) goto L_108b4432;
  /* 108b4431 int3  */
  x86_unimpl("int3 @ 0x108b4431");
L_108b4432:;
  /* 108b4432 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4434 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4436 jne 0x108b43fc */
  if (!C.zf) goto L_108b43fc;
  /* 108b4438 jmp 0x108b449e */
  goto L_108b449e;
L_108b443a:;
  /* 108b443a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b443d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b4440 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b4445 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4448 jne 0x108b445f */
  if (!C.zf) goto L_108b445f;
  /* 108b444a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b444d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b4453 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4456 jne 0x108b445f */
  if (!C.zf) goto L_108b445f;
  /* 108b4458 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_108b445f:;
  /* 108b445f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4462 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b4465 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b446a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b446d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b4473 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4475 je 0x108b4498 */
  if (C.zf) goto L_108b4498;
  /* 108b4477 push 0x108da5c0 */
  push32((uint32_t)(0x108da5c0u));
  /* 108b447c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b447e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 108b4483 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4488 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b448a call 0x108b2df0 */
  push32(0x108b448fu); f_108b2df0();
  /* 108b448f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4492 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4495 jne 0x108b4498 */
  if (!C.zf) goto L_108b4498;
  /* 108b4497 int3  */
  x86_unimpl("int3 @ 0x108b4497");
L_108b4498:;
  /* 108b4498 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b449a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b449c jne 0x108b445f */
  if (!C.zf) goto L_108b445f;
L_108b449e:;
  /* 108b449e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b44a2 je 0x108b44c9 */
  if (C.zf) goto L_108b44c9;
  /* 108b44a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b44a7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b44aa push eax */
  push32((uint32_t)(EAX));
  /* 108b44ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b44ae push ecx */
  push32((uint32_t)(ECX));
  /* 108b44af call 0x108b7cb0 */
  push32(0x108b44b4u); f_108b7cb0();
  /* 108b44b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b44b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b44ba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b44be jne 0x108b44c7 */
  if (!C.zf) goto L_108b44c7;
  /* 108b44c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b44c2 jmp 0x108b470a */
  goto L_108b470a;
L_108b44c7:;
  /* 108b44c7 jmp 0x108b44ec */
  goto L_108b44ec;
L_108b44c9:;
  /* 108b44c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b44cc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b44cf push edx */
  push32((uint32_t)(EDX));
  /* 108b44d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b44d3 push eax */
  push32((uint32_t)(EAX));
  /* 108b44d4 call 0x108b7c00 */
  push32(0x108b44d9u); f_108b7c00();
  /* 108b44d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b44dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b44df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b44e3 jne 0x108b44ec */
  if (!C.zf) goto L_108b44ec;
  /* 108b44e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b44e7 jmp 0x108b470a */
  goto L_108b470a;
L_108b44ec:;
  /* 108b44ec mov ecx, dword ptr [0x108dda88] */
  ECX = (r32((uint32_t)(0x108dda88)));
  /* 108b44f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b44f5 mov dword ptr [0x108dda88], ecx */
  w32((uint32_t)(0x108dda88), (ECX));
  /* 108b44fb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b44ff jne 0x108b4557 */
  if (!C.zf) goto L_108b4557;
  /* 108b4501 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4504 mov eax, dword ptr [0x108df5b8] */
  EAX = (r32((uint32_t)(0x108df5b8)));
  /* 108b4509 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b450c mov dword ptr [0x108df5b8], eax */
  w32((uint32_t)(0x108df5b8), (EAX));
  /* 108b4511 mov ecx, dword ptr [0x108df5b8] */
  ECX = (r32((uint32_t)(0x108df5b8)));
  /* 108b4517 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b451a mov dword ptr [0x108df5b8], ecx */
  w32((uint32_t)(0x108df5b8), (ECX));
  /* 108b4520 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4523 mov eax, dword ptr [0x108df5c0] */
  EAX = (r32((uint32_t)(0x108df5c0)));
  /* 108b4528 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b452b mov dword ptr [0x108df5c0], eax */
  w32((uint32_t)(0x108df5c0), (EAX));
  /* 108b4530 mov ecx, dword ptr [0x108df5c0] */
  ECX = (r32((uint32_t)(0x108df5c0)));
  /* 108b4536 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4539 mov dword ptr [0x108df5c0], ecx */
  w32((uint32_t)(0x108df5c0), (ECX));
  /* 108b453f mov edx, dword ptr [0x108df5c0] */
  EDX = (r32((uint32_t)(0x108df5c0)));
  /* 108b4545 cmp edx, dword ptr [0x108df5c4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108df5c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b454b jbe 0x108b4557 */
  if ((C.cf||C.zf)) goto L_108b4557;
  /* 108b454d mov eax, dword ptr [0x108df5c0] */
  EAX = (r32((uint32_t)(0x108df5c0)));
  /* 108b4552 mov dword ptr [0x108df5c4], eax */
  w32((uint32_t)(0x108df5c4), (EAX));
L_108b4557:;
  /* 108b4557 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b455a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b455d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b4560 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4563 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4566 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4569 jbe 0x108b458f */
  if ((C.cf||C.zf)) goto L_108b458f;
  /* 108b456b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b456e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4571 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4574 push edx */
  push32((uint32_t)(EDX));
  /* 108b4575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4577 mov al, byte ptr [0x108dda92] */
  AL = (r8((uint32_t)(0x108dda92)));
  /* 108b457c push eax */
  push32((uint32_t)(EAX));
  /* 108b457d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4580 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4583 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4586 push edx */
  push32((uint32_t)(EDX));
  /* 108b4587 call 0x108b7aa0 */
  push32(0x108b458cu); f_108b7aa0();
  /* 108b458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b458f:;
  /* 108b458f push 4 */
  push32((uint32_t)(0x4u));
  /* 108b4591 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4593 mov al, byte ptr [0x108dda90] */
  AL = (r8((uint32_t)(0x108dda90)));
  /* 108b4598 push eax */
  push32((uint32_t)(EAX));
  /* 108b4599 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b459c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b459f push ecx */
  push32((uint32_t)(ECX));
  /* 108b45a0 call 0x108b7aa0 */
  push32(0x108b45a5u); f_108b7aa0();
  /* 108b45a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b45a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b45ac jne 0x108b45c9 */
  if (!C.zf) goto L_108b45c9;
  /* 108b45ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b45b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b45b4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108b45b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b45ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b45bd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 108b45c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b45c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b45c6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_108b45c9:;
  /* 108b45c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b45cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b45cf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_108b45d2:;
  /* 108b45d2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b45d6 jne 0x108b4607 */
  if (!C.zf) goto L_108b4607;
  /* 108b45d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b45dc jne 0x108b45e6 */
  if (!C.zf) goto L_108b45e6;
  /* 108b45de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b45e1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b45e4 je 0x108b4607 */
  if (C.zf) goto L_108b4607;
L_108b45e6:;
  /* 108b45e6 push 0x108da58c */
  push32((uint32_t)(0x108da58cu));
  /* 108b45eb push 0 */
  push32((uint32_t)(0x0u));
  /* 108b45ed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 108b45f2 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b45f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b45f9 call 0x108b2df0 */
  push32(0x108b45feu); f_108b2df0();
  /* 108b45fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4601 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4604 jne 0x108b4607 */
  if (!C.zf) goto L_108b4607;
  /* 108b4606 int3  */
  x86_unimpl("int3 @ 0x108b4606");
L_108b4607:;
  /* 108b4607 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b4609 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b460b jne 0x108b45d2 */
  if (!C.zf) goto L_108b45d2;
  /* 108b460d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4610 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4613 je 0x108b461b */
  if (C.zf) goto L_108b461b;
  /* 108b4615 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4619 je 0x108b4623 */
  if (C.zf) goto L_108b4623;
L_108b461b:;
  /* 108b461b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b461e jmp 0x108b470a */
  goto L_108b470a;
L_108b4623:;
  /* 108b4623 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4626 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4629 je 0x108b463b */
  if (C.zf) goto L_108b463b;
  /* 108b462b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b462e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b4630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4633 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b4636 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108b4639 jmp 0x108b4677 */
  goto L_108b4677;
L_108b463b:;
  /* 108b463b mov eax, dword ptr [0x108df5b4] */
  EAX = (r32((uint32_t)(0x108df5b4)));
  /* 108b4640 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4643 je 0x108b4666 */
  if (C.zf) goto L_108b4666;
  /* 108b4645 push 0x108da570 */
  push32((uint32_t)(0x108da570u));
  /* 108b464a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b464c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 108b4651 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4656 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4658 call 0x108b2df0 */
  push32(0x108b465du); f_108b2df0();
  /* 108b465d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4663 jne 0x108b4666 */
  if (!C.zf) goto L_108b4666;
  /* 108b4665 int3  */
  x86_unimpl("int3 @ 0x108b4665");
L_108b4666:;
  /* 108b4666 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4668 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b466a jne 0x108b463b */
  if (!C.zf) goto L_108b463b;
  /* 108b466c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b466f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b4672 mov dword ptr [0x108df5b4], eax */
  w32((uint32_t)(0x108df5b4), (EAX));
L_108b4677:;
  /* 108b4677 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b467a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b467e je 0x108b468f */
  if (C.zf) goto L_108b468f;
  /* 108b4680 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4683 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b4686 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4689 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b468b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108b468d jmp 0x108b46ca */
  goto L_108b46ca;
L_108b468f:;
  /* 108b468f mov eax, dword ptr [0x108df5bc] */
  EAX = (r32((uint32_t)(0x108df5bc)));
  /* 108b4694 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4697 je 0x108b46ba */
  if (C.zf) goto L_108b46ba;
  /* 108b4699 push 0x108da554 */
  push32((uint32_t)(0x108da554u));
  /* 108b469e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b46a0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 108b46a5 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b46aa push 2 */
  push32((uint32_t)(0x2u));
  /* 108b46ac call 0x108b2df0 */
  push32(0x108b46b1u); f_108b2df0();
  /* 108b46b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b46b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b46b7 jne 0x108b46ba */
  if (!C.zf) goto L_108b46ba;
  /* 108b46b9 int3  */
  x86_unimpl("int3 @ 0x108b46b9");
L_108b46ba:;
  /* 108b46ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b46bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b46be jne 0x108b468f */
  if (!C.zf) goto L_108b468f;
  /* 108b46c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b46c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b46c5 mov dword ptr [0x108df5bc], eax */
  w32((uint32_t)(0x108df5bc), (EAX));
L_108b46ca:;
  /* 108b46ca cmp dword ptr [0x108df5bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df5bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b46d1 je 0x108b46e1 */
  if (C.zf) goto L_108b46e1;
  /* 108b46d3 mov ecx, dword ptr [0x108df5bc] */
  ECX = (r32((uint32_t)(0x108df5bc)));
  /* 108b46d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b46dc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108b46df jmp 0x108b46e9 */
  goto L_108b46e9;
L_108b46e1:;
  /* 108b46e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b46e4 mov dword ptr [0x108df5b4], eax */
  w32((uint32_t)(0x108df5b4), (EAX));
L_108b46e9:;
  /* 108b46e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b46ec mov edx, dword ptr [0x108df5bc] */
  EDX = (r32((uint32_t)(0x108df5bc)));
  /* 108b46f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108b46f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b46f7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 108b46fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4701 mov dword ptr [0x108df5bc], ecx */
  w32((uint32_t)(0x108df5bc), (ECX));
  /* 108b4707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108b470a:;
  /* 108b470a pop edi */
  EDI = (pop32());
  /* 108b470b pop esi */
  ESI = (pop32());
  /* 108b470c pop ebx */
  EBX = (pop32());
  /* 108b470d mov esp, ebp */
  ESP = (EBP);
  /* 108b470f pop ebp */
  EBP = (pop32());
  /* 108b4710 ret  */
  ESPCHK(0x108b4200u, _esp0);
  ESP += 4; return;
}

/* FUN_10004720 @ 0x108b4720 (27 bytes, 13 insns) */
void f_108b4720(void) {
  FTRACE(0x108b4720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4720 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4721 mov ebp, esp */
  EBP = (ESP);
  /* 108b4723 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4725 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4727 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b4729 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b472c push eax */
  push32((uint32_t)(EAX));
  /* 108b472d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4730 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4731 call 0x108b4740 */
  push32(0x108b4736u); f_108b4740();
  /* 108b4736 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4739 pop ebp */
  EBP = (pop32());
  /* 108b473a ret  */
  ESPCHK(0x108b4720u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x108b4740 (64 bytes, 27 insns) */
void f_108b4740(void) {
  FTRACE(0x108b4740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4740 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4741 mov ebp, esp */
  EBP = (ESP);
  /* 108b4743 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4744 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b4746 call 0x108b7730 */
  push32(0x108b474bu); f_108b7730();
  /* 108b474b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b474e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4750 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b4753 push eax */
  push32((uint32_t)(EAX));
  /* 108b4754 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b4757 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4758 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b475b push edx */
  push32((uint32_t)(EDX));
  /* 108b475c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b475f push eax */
  push32((uint32_t)(EAX));
  /* 108b4760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4763 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4764 call 0x108b4200 */
  push32(0x108b4769u); f_108b4200();
  /* 108b4769 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b476c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b476f push 9 */
  push32((uint32_t)(0x9u));
  /* 108b4771 call 0x108b77d0 */
  push32(0x108b4776u); f_108b77d0();
  /* 108b4776 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b477c mov esp, ebp */
  ESP = (EBP);
  /* 108b477e pop ebp */
  EBP = (pop32());
  /* 108b477f ret  */
  ESPCHK(0x108b4740u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x108b4780 (19 bytes, 9 insns) */
void f_108b4780(void) {
  FTRACE(0x108b4780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4780 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4781 mov ebp, esp */
  EBP = (ESP);
  /* 108b4783 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b4785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4788 push eax */
  push32((uint32_t)(EAX));
  /* 108b4789 call 0x108b47c0 */
  push32(0x108b478eu); f_108b47c0();
  /* 108b478e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4791 pop ebp */
  EBP = (pop32());
  /* 108b4792 ret  */
  ESPCHK(0x108b4780u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x108b47a0 (19 bytes, 9 insns) */
void f_108b47a0(void) {
  FTRACE(0x108b47a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b47a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b47a1 mov ebp, esp */
  EBP = (ESP);
  /* 108b47a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b47a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b47a8 push eax */
  push32((uint32_t)(EAX));
  /* 108b47a9 call 0x108b47f0 */
  push32(0x108b47aeu); f_108b47f0();
  /* 108b47ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b47b1 pop ebp */
  EBP = (pop32());
  /* 108b47b2 ret  */
  ESPCHK(0x108b47a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c0 @ 0x108b47c0 (41 bytes, 16 insns) */
void f_108b47c0(void) {
  FTRACE(0x108b47c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b47c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b47c1 mov ebp, esp */
  EBP = (ESP);
  /* 108b47c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b47c5 call 0x108b7730 */
  push32(0x108b47cau); f_108b7730();
  /* 108b47ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b47cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b47d0 push eax */
  push32((uint32_t)(EAX));
  /* 108b47d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b47d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108b47d5 call 0x108b47f0 */
  push32(0x108b47dau); f_108b47f0();
  /* 108b47da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b47dd push 9 */
  push32((uint32_t)(0x9u));
  /* 108b47df call 0x108b77d0 */
  push32(0x108b47e4u); f_108b77d0();
  /* 108b47e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b47e7 pop ebp */
  EBP = (pop32());
  /* 108b47e8 ret  */
  ESPCHK(0x108b47c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047f0 @ 0x108b47f0 (1004 bytes, 342 insns) */
void f_108b47f0(void) {
  FTRACE(0x108b47f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b47f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b47f1 mov ebp, esp */
  EBP = (ESP);
  /* 108b47f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b47f4 push ebx */
  push32((uint32_t)(EBX));
  /* 108b47f5 push esi */
  push32((uint32_t)(ESI));
  /* 108b47f6 push edi */
  push32((uint32_t)(EDI));
  /* 108b47f7 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b47fc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108b47ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4801 je 0x108b4833 */
  if (C.zf) goto L_108b4833;
L_108b4803:;
  /* 108b4803 call 0x108b4ed0 */
  push32(0x108b4808u); f_108b4ed0();
  /* 108b4808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b480a jne 0x108b482d */
  if (!C.zf) goto L_108b482d;
  /* 108b480c push 0x108da540 */
  push32((uint32_t)(0x108da540u));
  /* 108b4811 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4813 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 108b4818 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b481d push 2 */
  push32((uint32_t)(0x2u));
  /* 108b481f call 0x108b2df0 */
  push32(0x108b4824u); f_108b2df0();
  /* 108b4824 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4827 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b482a jne 0x108b482d */
  if (!C.zf) goto L_108b482d;
  /* 108b482c int3  */
  x86_unimpl("int3 @ 0x108b482c");
L_108b482d:;
  /* 108b482d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b482f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4831 jne 0x108b4803 */
  if (!C.zf) goto L_108b4803;
L_108b4833:;
  /* 108b4833 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4837 jne 0x108b483e */
  if (!C.zf) goto L_108b483e;
  /* 108b4839 jmp 0x108b4bd5 */
  goto L_108b4bd5;
L_108b483e:;
  /* 108b483e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4840 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4842 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4844 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4847 push edx */
  push32((uint32_t)(EDX));
  /* 108b4848 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b484a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b484d push eax */
  push32((uint32_t)(EAX));
  /* 108b484e push 3 */
  push32((uint32_t)(0x3u));
  /* 108b4850 call dword ptr [0x108ddc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x108ddc90))), 0x108b4856u);
  /* 108b4856 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b485b jne 0x108b4888 */
  if (!C.zf) goto L_108b4888;
L_108b485d:;
  /* 108b485d push 0x108da804 */
  push32((uint32_t)(0x108da804u));
  /* 108b4862 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b4867 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4869 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b486b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b486d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b486f call 0x108b2df0 */
  push32(0x108b4874u); f_108b2df0();
  /* 108b4874 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b487a jne 0x108b487d */
  if (!C.zf) goto L_108b487d;
  /* 108b487c int3  */
  x86_unimpl("int3 @ 0x108b487c");
L_108b487d:;
  /* 108b487d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b487f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4881 jne 0x108b485d */
  if (!C.zf) goto L_108b485d;
  /* 108b4883 jmp 0x108b4bd5 */
  goto L_108b4bd5;
L_108b4888:;
  /* 108b4888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b488b push edx */
  push32((uint32_t)(EDX));
  /* 108b488c call 0x108b5330 */
  push32(0x108b4891u); f_108b5330();
  /* 108b4891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4896 jne 0x108b48b9 */
  if (!C.zf) goto L_108b48b9;
  /* 108b4898 push 0x108da644 */
  push32((uint32_t)(0x108da644u));
  /* 108b489d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b489f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 108b48a4 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b48a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b48ab call 0x108b2df0 */
  push32(0x108b48b0u); f_108b2df0();
  /* 108b48b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b48b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b48b6 jne 0x108b48b9 */
  if (!C.zf) goto L_108b48b9;
  /* 108b48b8 int3  */
  x86_unimpl("int3 @ 0x108b48b8");
L_108b48b9:;
  /* 108b48b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b48bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b48bd jne 0x108b4888 */
  if (!C.zf) goto L_108b4888;
  /* 108b48bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b48c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b48c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b48c8:;
  /* 108b48c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b48cb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b48ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b48d3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b48d6 je 0x108b491b */
  if (C.zf) goto L_108b491b;
  /* 108b48d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b48db cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b48df je 0x108b491b */
  if (C.zf) goto L_108b491b;
  /* 108b48e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b48e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b48e7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b48ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b48ef je 0x108b491b */
  if (C.zf) goto L_108b491b;
  /* 108b48f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b48f4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b48f8 je 0x108b491b */
  if (C.zf) goto L_108b491b;
  /* 108b48fa push 0x108da7dc */
  push32((uint32_t)(0x108da7dcu));
  /* 108b48ff push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4901 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 108b4906 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b490b push 2 */
  push32((uint32_t)(0x2u));
  /* 108b490d call 0x108b2df0 */
  push32(0x108b4912u); f_108b2df0();
  /* 108b4912 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4915 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4918 jne 0x108b491b */
  if (!C.zf) goto L_108b491b;
  /* 108b491a int3  */
  x86_unimpl("int3 @ 0x108b491a");
L_108b491b:;
  /* 108b491b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b491d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b491f jne 0x108b48c8 */
  if (!C.zf) goto L_108b48c8;
  /* 108b4921 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b4926 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108b4929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b492b jne 0x108b49f6 */
  if (!C.zf) goto L_108b49f6;
  /* 108b4931 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b4933 mov cl, byte ptr [0x108dda90] */
  CL = (r8((uint32_t)(0x108dda90)));
  /* 108b4939 push ecx */
  push32((uint32_t)(ECX));
  /* 108b493a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b493d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4940 push edx */
  push32((uint32_t)(EDX));
  /* 108b4941 call 0x108b4e40 */
  push32(0x108b4946u); f_108b4e40();
  /* 108b4946 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b494b jne 0x108b4990 */
  if (!C.zf) goto L_108b4990;
L_108b494d:;
  /* 108b494d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4950 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4953 push eax */
  push32((uint32_t)(EAX));
  /* 108b4954 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4957 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108b495a push edx */
  push32((uint32_t)(EDX));
  /* 108b495b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b495e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108b4961 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b4967 mov edx, dword ptr [ecx*4 + 0x108dda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dda94)));
  /* 108b496e push edx */
  push32((uint32_t)(EDX));
  /* 108b496f push 0x108da7b0 */
  push32((uint32_t)(0x108da7b0u));
  /* 108b4974 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4976 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4978 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b497a push 1 */
  push32((uint32_t)(0x1u));
  /* 108b497c call 0x108b2df0 */
  push32(0x108b4981u); f_108b2df0();
  /* 108b4981 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4984 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4987 jne 0x108b498a */
  if (!C.zf) goto L_108b498a;
  /* 108b4989 int3  */
  x86_unimpl("int3 @ 0x108b4989");
L_108b498a:;
  /* 108b498a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b498c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b498e jne 0x108b494d */
  if (!C.zf) goto L_108b494d;
L_108b4990:;
  /* 108b4990 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b4992 mov cl, byte ptr [0x108dda90] */
  CL = (r8((uint32_t)(0x108dda90)));
  /* 108b4998 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4999 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b499c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b499f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b49a2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 108b49a6 push edx */
  push32((uint32_t)(EDX));
  /* 108b49a7 call 0x108b4e40 */
  push32(0x108b49acu); f_108b4e40();
  /* 108b49ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b49af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b49b1 jne 0x108b49f6 */
  if (!C.zf) goto L_108b49f6;
L_108b49b3:;
  /* 108b49b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b49b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b49b9 push eax */
  push32((uint32_t)(EAX));
  /* 108b49ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b49bd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108b49c0 push edx */
  push32((uint32_t)(EDX));
  /* 108b49c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b49c4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108b49c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b49cd mov edx, dword ptr [ecx*4 + 0x108dda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dda94)));
  /* 108b49d4 push edx */
  push32((uint32_t)(EDX));
  /* 108b49d5 push 0x108da784 */
  push32((uint32_t)(0x108da784u));
  /* 108b49da push 0 */
  push32((uint32_t)(0x0u));
  /* 108b49dc push 0 */
  push32((uint32_t)(0x0u));
  /* 108b49de push 0 */
  push32((uint32_t)(0x0u));
  /* 108b49e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b49e2 call 0x108b2df0 */
  push32(0x108b49e7u); f_108b2df0();
  /* 108b49e7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b49ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b49ed jne 0x108b49f0 */
  if (!C.zf) goto L_108b49f0;
  /* 108b49ef int3  */
  x86_unimpl("int3 @ 0x108b49ef");
L_108b49f0:;
  /* 108b49f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b49f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b49f4 jne 0x108b49b3 */
  if (!C.zf) goto L_108b49b3;
L_108b49f6:;
  /* 108b49f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b49f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b49fd jne 0x108b4a6b */
  if (!C.zf) goto L_108b4a6b;
L_108b49ff:;
  /* 108b49ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4a02 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4a09 jne 0x108b4a14 */
  if (!C.zf) goto L_108b4a14;
  /* 108b4a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4a0e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4a12 je 0x108b4a35 */
  if (C.zf) goto L_108b4a35;
L_108b4a14:;
  /* 108b4a14 push 0x108da744 */
  push32((uint32_t)(0x108da744u));
  /* 108b4a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4a1b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 108b4a20 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4a25 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4a27 call 0x108b2df0 */
  push32(0x108b4a2cu); f_108b2df0();
  /* 108b4a2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4a2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4a32 jne 0x108b4a35 */
  if (!C.zf) goto L_108b4a35;
  /* 108b4a34 int3  */
  x86_unimpl("int3 @ 0x108b4a34");
L_108b4a35:;
  /* 108b4a35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4a37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4a39 jne 0x108b49ff */
  if (!C.zf) goto L_108b49ff;
  /* 108b4a3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4a3e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b4a41 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4a44 push eax */
  push32((uint32_t)(EAX));
  /* 108b4a45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4a47 mov cl, byte ptr [0x108dda91] */
  CL = (r8((uint32_t)(0x108dda91)));
  /* 108b4a4d push ecx */
  push32((uint32_t)(ECX));
  /* 108b4a4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4a51 push edx */
  push32((uint32_t)(EDX));
  /* 108b4a52 call 0x108b7aa0 */
  push32(0x108b4a57u); f_108b7aa0();
  /* 108b4a57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4a5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4a5d push eax */
  push32((uint32_t)(EAX));
  /* 108b4a5e call 0x108b7ea0 */
  push32(0x108b4a63u); f_108b7ea0();
  /* 108b4a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4a66 jmp 0x108b4bd5 */
  goto L_108b4bd5;
L_108b4a6b:;
  /* 108b4a6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4a6e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4a72 jne 0x108b4a81 */
  if (!C.zf) goto L_108b4a81;
  /* 108b4a74 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4a78 jne 0x108b4a81 */
  if (!C.zf) goto L_108b4a81;
  /* 108b4a7a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_108b4a81:;
  /* 108b4a81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4a84 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b4a87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4a8a je 0x108b4aad */
  if (C.zf) goto L_108b4aad;
  /* 108b4a8c push 0x108da724 */
  push32((uint32_t)(0x108da724u));
  /* 108b4a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4a93 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 108b4a98 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4a9f call 0x108b2df0 */
  push32(0x108b4aa4u); f_108b2df0();
  /* 108b4aa4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4aa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4aaa jne 0x108b4aad */
  if (!C.zf) goto L_108b4aad;
  /* 108b4aac int3  */
  x86_unimpl("int3 @ 0x108b4aac");
L_108b4aad:;
  /* 108b4aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4aaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4ab1 jne 0x108b4a81 */
  if (!C.zf) goto L_108b4a81;
  /* 108b4ab3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4ab6 mov eax, dword ptr [0x108df5c0] */
  EAX = (r32((uint32_t)(0x108df5c0)));
  /* 108b4abb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4abe mov dword ptr [0x108df5c0], eax */
  w32((uint32_t)(0x108df5c0), (EAX));
  /* 108b4ac3 mov ecx, dword ptr [0x108dda84] */
  ECX = (r32((uint32_t)(0x108dda84)));
  /* 108b4ac9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 108b4acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4ace jne 0x108b4bac */
  if (!C.zf) goto L_108b4bac;
  /* 108b4ad4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4ad7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4ada je 0x108b4aec */
  if (C.zf) goto L_108b4aec;
  /* 108b4adc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4adf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b4ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4ae4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b4ae7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108b4aea jmp 0x108b4b2a */
  goto L_108b4b2a;
L_108b4aec:;
  /* 108b4aec mov ecx, dword ptr [0x108df5b4] */
  ECX = (r32((uint32_t)(0x108df5b4)));
  /* 108b4af2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4af5 je 0x108b4b18 */
  if (C.zf) goto L_108b4b18;
  /* 108b4af7 push 0x108da70c */
  push32((uint32_t)(0x108da70cu));
  /* 108b4afc push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4afe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 108b4b03 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4b08 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4b0a call 0x108b2df0 */
  push32(0x108b4b0fu); f_108b2df0();
  /* 108b4b0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4b12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4b15 jne 0x108b4b18 */
  if (!C.zf) goto L_108b4b18;
  /* 108b4b17 int3  */
  x86_unimpl("int3 @ 0x108b4b17");
L_108b4b18:;
  /* 108b4b18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b4b1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b4b1c jne 0x108b4aec */
  if (!C.zf) goto L_108b4aec;
  /* 108b4b1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4b21 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b4b24 mov dword ptr [0x108df5b4], ecx */
  w32((uint32_t)(0x108df5b4), (ECX));
L_108b4b2a:;
  /* 108b4b2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4b2d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4b31 je 0x108b4b42 */
  if (C.zf) goto L_108b4b42;
  /* 108b4b33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4b36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b4b39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4b3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b4b3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108b4b40 jmp 0x108b4b7f */
  goto L_108b4b7f;
L_108b4b42:;
  /* 108b4b42 mov ecx, dword ptr [0x108df5bc] */
  ECX = (r32((uint32_t)(0x108df5bc)));
  /* 108b4b48 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4b4b je 0x108b4b6e */
  if (C.zf) goto L_108b4b6e;
  /* 108b4b4d push 0x108da6f4 */
  push32((uint32_t)(0x108da6f4u));
  /* 108b4b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4b54 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 108b4b59 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4b5e push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4b60 call 0x108b2df0 */
  push32(0x108b4b65u); f_108b2df0();
  /* 108b4b65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4b68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4b6b jne 0x108b4b6e */
  if (!C.zf) goto L_108b4b6e;
  /* 108b4b6d int3  */
  x86_unimpl("int3 @ 0x108b4b6d");
L_108b4b6e:;
  /* 108b4b6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b4b70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b4b72 jne 0x108b4b42 */
  if (!C.zf) goto L_108b4b42;
  /* 108b4b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4b77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b4b79 mov dword ptr [0x108df5bc], ecx */
  w32((uint32_t)(0x108df5bc), (ECX));
L_108b4b7f:;
  /* 108b4b7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4b82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b4b85 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4b88 push eax */
  push32((uint32_t)(EAX));
  /* 108b4b89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4b8b mov cl, byte ptr [0x108dda91] */
  CL = (r8((uint32_t)(0x108dda91)));
  /* 108b4b91 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4b92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4b95 push edx */
  push32((uint32_t)(EDX));
  /* 108b4b96 call 0x108b7aa0 */
  push32(0x108b4b9bu); f_108b7aa0();
  /* 108b4b9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4b9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4ba1 push eax */
  push32((uint32_t)(EAX));
  /* 108b4ba2 call 0x108b7ea0 */
  push32(0x108b4ba7u); f_108b7ea0();
  /* 108b4ba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4baa jmp 0x108b4bd5 */
  goto L_108b4bd5;
L_108b4bac:;
  /* 108b4bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4baf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 108b4bb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4bb9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b4bbc push eax */
  push32((uint32_t)(EAX));
  /* 108b4bbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4bbf mov cl, byte ptr [0x108dda91] */
  CL = (r8((uint32_t)(0x108dda91)));
  /* 108b4bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4bc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4bc9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4bcc push edx */
  push32((uint32_t)(EDX));
  /* 108b4bcd call 0x108b7aa0 */
  push32(0x108b4bd2u); f_108b7aa0();
  /* 108b4bd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b4bd5:;
  /* 108b4bd5 pop edi */
  EDI = (pop32());
  /* 108b4bd6 pop esi */
  ESI = (pop32());
  /* 108b4bd7 pop ebx */
  EBX = (pop32());
  /* 108b4bd8 mov esp, ebp */
  ESP = (EBP);
  /* 108b4bda pop ebp */
  EBP = (pop32());
  /* 108b4bdb ret  */
  ESPCHK(0x108b47f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004be0 @ 0x108b4be0 (19 bytes, 9 insns) */
void f_108b4be0(void) {
  FTRACE(0x108b4be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4be0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4be1 mov ebp, esp */
  EBP = (ESP);
  /* 108b4be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b4be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4be8 push eax */
  push32((uint32_t)(EAX));
  /* 108b4be9 call 0x108b4c00 */
  push32(0x108b4beeu); f_108b4c00();
  /* 108b4bee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4bf1 pop ebp */
  EBP = (pop32());
  /* 108b4bf2 ret  */
  ESPCHK(0x108b4be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x108b4c00 (342 bytes, 119 insns) */
void f_108b4c00(void) {
  FTRACE(0x108b4c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4c00 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4c01 mov ebp, esp */
  EBP = (ESP);
  /* 108b4c03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4c06 push ebx */
  push32((uint32_t)(EBX));
  /* 108b4c07 push esi */
  push32((uint32_t)(ESI));
  /* 108b4c08 push edi */
  push32((uint32_t)(EDI));
  /* 108b4c09 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b4c0e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108b4c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4c13 je 0x108b4c45 */
  if (C.zf) goto L_108b4c45;
L_108b4c15:;
  /* 108b4c15 call 0x108b4ed0 */
  push32(0x108b4c1au); f_108b4ed0();
  /* 108b4c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4c1c jne 0x108b4c3f */
  if (!C.zf) goto L_108b4c3f;
  /* 108b4c1e push 0x108da540 */
  push32((uint32_t)(0x108da540u));
  /* 108b4c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4c25 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 108b4c2a push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4c2f push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4c31 call 0x108b2df0 */
  push32(0x108b4c36u); f_108b2df0();
  /* 108b4c36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4c39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4c3c jne 0x108b4c3f */
  if (!C.zf) goto L_108b4c3f;
  /* 108b4c3e int3  */
  x86_unimpl("int3 @ 0x108b4c3e");
L_108b4c3f:;
  /* 108b4c3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4c41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4c43 jne 0x108b4c15 */
  if (!C.zf) goto L_108b4c15;
L_108b4c45:;
  /* 108b4c45 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b4c47 call 0x108b7730 */
  push32(0x108b4c4cu); f_108b7730();
  /* 108b4c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b4c4f:;
  /* 108b4c4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4c52 push edx */
  push32((uint32_t)(EDX));
  /* 108b4c53 call 0x108b5330 */
  push32(0x108b4c58u); f_108b5330();
  /* 108b4c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4c5d jne 0x108b4c80 */
  if (!C.zf) goto L_108b4c80;
  /* 108b4c5f push 0x108da644 */
  push32((uint32_t)(0x108da644u));
  /* 108b4c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4c66 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 108b4c6b push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4c70 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4c72 call 0x108b2df0 */
  push32(0x108b4c77u); f_108b2df0();
  /* 108b4c77 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4c7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4c7d jne 0x108b4c80 */
  if (!C.zf) goto L_108b4c80;
  /* 108b4c7f int3  */
  x86_unimpl("int3 @ 0x108b4c7f");
L_108b4c80:;
  /* 108b4c80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4c84 jne 0x108b4c4f */
  if (!C.zf) goto L_108b4c4f;
  /* 108b4c86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4c89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4c8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108b4c8f:;
  /* 108b4c8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4c92 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b4c95 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b4c9a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4c9d je 0x108b4ce2 */
  if (C.zf) goto L_108b4ce2;
  /* 108b4c9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4ca2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4ca6 je 0x108b4ce2 */
  if (C.zf) goto L_108b4ce2;
  /* 108b4ca8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4cab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b4cae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b4cb3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4cb6 je 0x108b4ce2 */
  if (C.zf) goto L_108b4ce2;
  /* 108b4cb8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4cbb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4cbf je 0x108b4ce2 */
  if (C.zf) goto L_108b4ce2;
  /* 108b4cc1 push 0x108da7dc */
  push32((uint32_t)(0x108da7dcu));
  /* 108b4cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4cc8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 108b4ccd push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4cd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4cd4 call 0x108b2df0 */
  push32(0x108b4cd9u); f_108b2df0();
  /* 108b4cd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4cdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4cdf jne 0x108b4ce2 */
  if (!C.zf) goto L_108b4ce2;
  /* 108b4ce1 int3  */
  x86_unimpl("int3 @ 0x108b4ce1");
L_108b4ce2:;
  /* 108b4ce2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b4ce4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b4ce6 jne 0x108b4c8f */
  if (!C.zf) goto L_108b4c8f;
  /* 108b4ce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4ceb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4cef jne 0x108b4cfe */
  if (!C.zf) goto L_108b4cfe;
  /* 108b4cf1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4cf5 jne 0x108b4cfe */
  if (!C.zf) goto L_108b4cfe;
  /* 108b4cf7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_108b4cfe:;
  /* 108b4cfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4d01 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4d05 je 0x108b4d39 */
  if (C.zf) goto L_108b4d39;
L_108b4d07:;
  /* 108b4d07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4d0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b4d0d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4d10 je 0x108b4d33 */
  if (C.zf) goto L_108b4d33;
  /* 108b4d12 push 0x108da724 */
  push32((uint32_t)(0x108da724u));
  /* 108b4d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4d19 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 108b4d1e push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4d25 call 0x108b2df0 */
  push32(0x108b4d2au); f_108b2df0();
  /* 108b4d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4d30 jne 0x108b4d33 */
  if (!C.zf) goto L_108b4d33;
  /* 108b4d32 int3  */
  x86_unimpl("int3 @ 0x108b4d32");
L_108b4d33:;
  /* 108b4d33 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4d35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4d37 jne 0x108b4d07 */
  if (!C.zf) goto L_108b4d07;
L_108b4d39:;
  /* 108b4d39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b4d3c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b4d3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b4d42 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b4d44 call 0x108b77d0 */
  push32(0x108b4d49u); f_108b77d0();
  /* 108b4d49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4d4f pop edi */
  EDI = (pop32());
  /* 108b4d50 pop esi */
  ESI = (pop32());
  /* 108b4d51 pop ebx */
  EBX = (pop32());
  /* 108b4d52 mov esp, ebp */
  ESP = (EBP);
  /* 108b4d54 pop ebp */
  EBP = (pop32());
  /* 108b4d55 ret  */
  ESPCHK(0x108b4c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d60 @ 0x108b4d60 (28 bytes, 11 insns) */
void f_108b4d60(void) {
  FTRACE(0x108b4d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4d60 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4d61 mov ebp, esp */
  EBP = (ESP);
  /* 108b4d63 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4d64 mov eax, dword ptr [0x108dda8c] */
  EAX = (r32((uint32_t)(0x108dda8c)));
  /* 108b4d69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b4d6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4d6f mov dword ptr [0x108dda8c], ecx */
  w32((uint32_t)(0x108dda8c), (ECX));
  /* 108b4d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4d78 mov esp, ebp */
  ESP = (EBP);
  /* 108b4d7a pop ebp */
  EBP = (pop32());
  /* 108b4d7b ret  */
  ESPCHK(0x108b4d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d80 @ 0x108b4d80 (157 bytes, 59 insns) */
void f_108b4d80(void) {
  FTRACE(0x108b4d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4d80 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4d81 mov ebp, esp */
  EBP = (ESP);
  /* 108b4d83 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4d84 push ebx */
  push32((uint32_t)(EBX));
  /* 108b4d85 push esi */
  push32((uint32_t)(ESI));
  /* 108b4d86 push edi */
  push32((uint32_t)(EDI));
  /* 108b4d87 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b4d89 call 0x108b7730 */
  push32(0x108b4d8eu); f_108b7730();
  /* 108b4d8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4d91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4d94 push eax */
  push32((uint32_t)(EAX));
  /* 108b4d95 call 0x108b5330 */
  push32(0x108b4d9au); f_108b5330();
  /* 108b4d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4d9f je 0x108b4e0c */
  if (C.zf) goto L_108b4e0c;
  /* 108b4da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4da4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4da7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b4daa:;
  /* 108b4daa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4dad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b4db0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b4db5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4db8 je 0x108b4dfd */
  if (C.zf) goto L_108b4dfd;
  /* 108b4dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4dbd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4dc1 je 0x108b4dfd */
  if (C.zf) goto L_108b4dfd;
  /* 108b4dc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4dc6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b4dc9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b4dce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4dd1 je 0x108b4dfd */
  if (C.zf) goto L_108b4dfd;
  /* 108b4dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4dd6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4dda je 0x108b4dfd */
  if (C.zf) goto L_108b4dfd;
  /* 108b4ddc push 0x108da7dc */
  push32((uint32_t)(0x108da7dcu));
  /* 108b4de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4de3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 108b4de8 push 0x108da534 */
  push32((uint32_t)(0x108da534u));
  /* 108b4ded push 2 */
  push32((uint32_t)(0x2u));
  /* 108b4def call 0x108b2df0 */
  push32(0x108b4df4u); f_108b2df0();
  /* 108b4df4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4df7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4dfa jne 0x108b4dfd */
  if (!C.zf) goto L_108b4dfd;
  /* 108b4dfc int3  */
  x86_unimpl("int3 @ 0x108b4dfc");
L_108b4dfd:;
  /* 108b4dfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b4dff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b4e01 jne 0x108b4daa */
  if (!C.zf) goto L_108b4daa;
  /* 108b4e03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4e06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4e09 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_108b4e0c:;
  /* 108b4e0c push 9 */
  push32((uint32_t)(0x9u));
  /* 108b4e0e call 0x108b77d0 */
  push32(0x108b4e13u); f_108b77d0();
  /* 108b4e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4e16 pop edi */
  EDI = (pop32());
  /* 108b4e17 pop esi */
  ESI = (pop32());
  /* 108b4e18 pop ebx */
  EBX = (pop32());
  /* 108b4e19 mov esp, ebp */
  ESP = (EBP);
  /* 108b4e1b pop ebp */
  EBP = (pop32());
  /* 108b4e1c ret  */
  ESPCHK(0x108b4d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e20 @ 0x108b4e20 (28 bytes, 11 insns) */
void f_108b4e20(void) {
  FTRACE(0x108b4e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4e20 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4e21 mov ebp, esp */
  EBP = (ESP);
  /* 108b4e23 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4e24 mov eax, dword ptr [0x108ddc90] */
  EAX = (r32((uint32_t)(0x108ddc90)));
  /* 108b4e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b4e2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4e2f mov dword ptr [0x108ddc90], ecx */
  w32((uint32_t)(0x108ddc90), (ECX));
  /* 108b4e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4e38 mov esp, ebp */
  ESP = (EBP);
  /* 108b4e3a pop ebp */
  EBP = (pop32());
  /* 108b4e3b ret  */
  ESPCHK(0x108b4e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x108b4e40 (136 bytes, 55 insns) */
void f_108b4e40(void) {
  FTRACE(0x108b4e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4e40 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4e41 mov ebp, esp */
  EBP = (ESP);
  /* 108b4e43 push ecx */
  push32((uint32_t)(ECX));
  /* 108b4e44 push ebx */
  push32((uint32_t)(EBX));
  /* 108b4e45 push esi */
  push32((uint32_t)(ESI));
  /* 108b4e46 push edi */
  push32((uint32_t)(EDI));
  /* 108b4e47 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_108b4e4e:;
  /* 108b4e4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b4e51 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b4e54 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4e57 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108b4e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4e5c je 0x108b4ebe */
  if (C.zf) goto L_108b4ebe;
  /* 108b4e5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4e61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4e63 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108b4e65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4e68 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b4e6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4e71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4e74 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108b4e77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4e79 je 0x108b4ebc */
  if (C.zf) goto L_108b4ebc;
L_108b4e7b:;
  /* 108b4e7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b4e7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b4e83 push eax */
  push32((uint32_t)(EAX));
  /* 108b4e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4e87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b4e89 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 108b4e8c push edx */
  push32((uint32_t)(EDX));
  /* 108b4e8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b4e90 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4e93 push eax */
  push32((uint32_t)(EAX));
  /* 108b4e94 push 0x108da820 */
  push32((uint32_t)(0x108da820u));
  /* 108b4e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4ea1 call 0x108b2df0 */
  push32(0x108b4ea6u); f_108b2df0();
  /* 108b4ea6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4ea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4eac jne 0x108b4eaf */
  if (!C.zf) goto L_108b4eaf;
  /* 108b4eae int3  */
  x86_unimpl("int3 @ 0x108b4eae");
L_108b4eaf:;
  /* 108b4eaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4eb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4eb3 jne 0x108b4e7b */
  if (!C.zf) goto L_108b4e7b;
  /* 108b4eb5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108b4ebc:;
  /* 108b4ebc jmp 0x108b4e4e */
  goto L_108b4e4e;
L_108b4ebe:;
  /* 108b4ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b4ec1 pop edi */
  EDI = (pop32());
  /* 108b4ec2 pop esi */
  ESI = (pop32());
  /* 108b4ec3 pop ebx */
  EBX = (pop32());
  /* 108b4ec4 mov esp, ebp */
  ESP = (EBP);
  /* 108b4ec6 pop ebp */
  EBP = (pop32());
  /* 108b4ec7 ret  */
  ESPCHK(0x108b4e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ed0 @ 0x108b4ed0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_108b4ed0(void) {
  FTRACE(0x108b4ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b4ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b4ed1 mov ebp, esp */
  EBP = (ESP);
  /* 108b4ed3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b4ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 108b4ed7 push esi */
  push32((uint32_t)(ESI));
  /* 108b4ed8 push edi */
  push32((uint32_t)(EDI));
  /* 108b4ed9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108b4ee0 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b4ee5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108b4ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4eea jne 0x108b4ef6 */
  if (!C.zf) goto L_108b4ef6;
  /* 108b4eec mov eax, 1 */
  EAX = (0x1u);
  /* 108b4ef1 jmp 0x108b5228 */
  goto L_108b5228;
L_108b4ef6:;
  /* 108b4ef6 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b4ef8 call 0x108b7730 */
  push32(0x108b4efdu); f_108b7730();
  /* 108b4efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4f00 call 0x108b7f10 */
  push32(0x108b4f05u); f_108b7f10();
  /* 108b4f05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b4f08 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4f0c je 0x108b5019 */
  if (C.zf) goto L_108b5019;
  /* 108b4f12 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4f16 je 0x108b5019 */
  if (C.zf) goto L_108b5019;
  /* 108b4f1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b4f1f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108b4f22 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b4f25 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4f28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108b4f2b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4f2f ja 0x108b4fe2 */
  if ((!C.cf&&!C.zf)) goto L_108b4fe2;
  /* 108b4f35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b4f38 jmp dword ptr [eax*4 + 0x108b522f] */
  switch (EAX) {
    case 0: goto L_108b4fba;
    case 1: goto L_108b4f92;
    case 2: goto L_108b4f6a;
    case 3: goto L_108b4f3f;
    default: x86_unimpl("switch@0x108b4f38 out of table"); return;
  }
L_108b4f3f:;
  /* 108b4f3f push 0x108da974 */
  push32((uint32_t)(0x108da974u));
  /* 108b4f44 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b4f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f51 call 0x108b2df0 */
  push32(0x108b4f56u); f_108b2df0();
  /* 108b4f56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4f59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4f5c jne 0x108b4f5f */
  if (!C.zf) goto L_108b4f5f;
  /* 108b4f5e int3  */
  x86_unimpl("int3 @ 0x108b4f5e");
L_108b4f5f:;
  /* 108b4f5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4f61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4f63 jne 0x108b4f3f */
  if (!C.zf) goto L_108b4f3f;
  /* 108b4f65 jmp 0x108b5008 */
  goto L_108b5008;
L_108b4f6a:;
  /* 108b4f6a push 0x108da950 */
  push32((uint32_t)(0x108da950u));
  /* 108b4f6f push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b4f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f7c call 0x108b2df0 */
  push32(0x108b4f81u); f_108b2df0();
  /* 108b4f81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4f84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4f87 jne 0x108b4f8a */
  if (!C.zf) goto L_108b4f8a;
  /* 108b4f89 int3  */
  x86_unimpl("int3 @ 0x108b4f89");
L_108b4f8a:;
  /* 108b4f8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b4f8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b4f8e jne 0x108b4f6a */
  if (!C.zf) goto L_108b4f6a;
  /* 108b4f90 jmp 0x108b5008 */
  goto L_108b5008;
L_108b4f92:;
  /* 108b4f92 push 0x108da92c */
  push32((uint32_t)(0x108da92cu));
  /* 108b4f97 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b4f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4fa4 call 0x108b2df0 */
  push32(0x108b4fa9u); f_108b2df0();
  /* 108b4fa9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4fac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4faf jne 0x108b4fb2 */
  if (!C.zf) goto L_108b4fb2;
  /* 108b4fb1 int3  */
  x86_unimpl("int3 @ 0x108b4fb1");
L_108b4fb2:;
  /* 108b4fb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b4fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b4fb6 jne 0x108b4f92 */
  if (!C.zf) goto L_108b4f92;
  /* 108b4fb8 jmp 0x108b5008 */
  goto L_108b5008;
L_108b4fba:;
  /* 108b4fba push 0x108da908 */
  push32((uint32_t)(0x108da908u));
  /* 108b4fbf push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b4fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4fca push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4fcc call 0x108b2df0 */
  push32(0x108b4fd1u); f_108b2df0();
  /* 108b4fd1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4fd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4fd7 jne 0x108b4fda */
  if (!C.zf) goto L_108b4fda;
  /* 108b4fd9 int3  */
  x86_unimpl("int3 @ 0x108b4fd9");
L_108b4fda:;
  /* 108b4fda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b4fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b4fde jne 0x108b4fba */
  if (!C.zf) goto L_108b4fba;
  /* 108b4fe0 jmp 0x108b5008 */
  goto L_108b5008;
L_108b4fe2:;
  /* 108b4fe2 push 0x108da8dc */
  push32((uint32_t)(0x108da8dcu));
  /* 108b4fe7 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b4fec push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4fee push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b4ff4 call 0x108b2df0 */
  push32(0x108b4ff9u); f_108b2df0();
  /* 108b4ff9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b4ffc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b4fff jne 0x108b5002 */
  if (!C.zf) goto L_108b5002;
  /* 108b5001 int3  */
  x86_unimpl("int3 @ 0x108b5001");
L_108b5002:;
  /* 108b5002 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b5004 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b5006 jne 0x108b4fe2 */
  if (!C.zf) goto L_108b4fe2;
L_108b5008:;
  /* 108b5008 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b500a call 0x108b77d0 */
  push32(0x108b500fu); f_108b77d0();
  /* 108b500f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5014 jmp 0x108b5228 */
  goto L_108b5228;
L_108b5019:;
  /* 108b5019 mov eax, dword ptr [0x108df5bc] */
  EAX = (r32((uint32_t)(0x108df5bc)));
  /* 108b501e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b5021 jmp 0x108b502b */
  goto L_108b502b;
L_108b5023:;
  /* 108b5023 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5026 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b5028 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108b502b:;
  /* 108b502b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b502f je 0x108b521b */
  if (C.zf) goto L_108b521b;
  /* 108b5035 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108b503c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b503f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108b5042 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b5048 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b504b je 0x108b5070 */
  if (C.zf) goto L_108b5070;
  /* 108b504d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5050 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5054 je 0x108b5070 */
  if (C.zf) goto L_108b5070;
  /* 108b5056 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5059 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108b505c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b5062 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5065 je 0x108b5070 */
  if (C.zf) goto L_108b5070;
  /* 108b5067 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b506a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b506e jne 0x108b5088 */
  if (!C.zf) goto L_108b5088;
L_108b5070:;
  /* 108b5070 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5073 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108b5076 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b507c mov edx, dword ptr [ecx*4 + 0x108dda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dda94)));
  /* 108b5083 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108b5086 jmp 0x108b508f */
  goto L_108b508f;
L_108b5088:;
  /* 108b5088 mov dword ptr [ebp - 0x14], 0x108da8d4 */
  w32((uint32_t)(EBP + -0x14), (0x108da8d4u));
L_108b508f:;
  /* 108b508f push 4 */
  push32((uint32_t)(0x4u));
  /* 108b5091 mov al, byte ptr [0x108dda90] */
  AL = (r8((uint32_t)(0x108dda90)));
  /* 108b5096 push eax */
  push32((uint32_t)(EAX));
  /* 108b5097 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b509a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b509d push ecx */
  push32((uint32_t)(ECX));
  /* 108b509e call 0x108b4e40 */
  push32(0x108b50a3u); f_108b4e40();
  /* 108b50a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b50a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b50a8 jne 0x108b50e4 */
  if (!C.zf) goto L_108b50e4;
L_108b50aa:;
  /* 108b50aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b50ad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b50b0 push edx */
  push32((uint32_t)(EDX));
  /* 108b50b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b50b4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108b50b7 push ecx */
  push32((uint32_t)(ECX));
  /* 108b50b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b50bb push edx */
  push32((uint32_t)(EDX));
  /* 108b50bc push 0x108da7b0 */
  push32((uint32_t)(0x108da7b0u));
  /* 108b50c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b50c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b50c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b50c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b50c9 call 0x108b2df0 */
  push32(0x108b50ceu); f_108b2df0();
  /* 108b50ce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b50d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b50d4 jne 0x108b50d7 */
  if (!C.zf) goto L_108b50d7;
  /* 108b50d6 int3  */
  x86_unimpl("int3 @ 0x108b50d6");
L_108b50d7:;
  /* 108b50d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b50d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b50db jne 0x108b50aa */
  if (!C.zf) goto L_108b50aa;
  /* 108b50dd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108b50e4:;
  /* 108b50e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 108b50e6 mov cl, byte ptr [0x108dda90] */
  CL = (r8((uint32_t)(0x108dda90)));
  /* 108b50ec push ecx */
  push32((uint32_t)(ECX));
  /* 108b50ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b50f0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b50f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b50f6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 108b50fa push edx */
  push32((uint32_t)(EDX));
  /* 108b50fb call 0x108b4e40 */
  push32(0x108b5100u); f_108b4e40();
  /* 108b5100 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5105 jne 0x108b5141 */
  if (!C.zf) goto L_108b5141;
L_108b5107:;
  /* 108b5107 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b510a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b510d push eax */
  push32((uint32_t)(EAX));
  /* 108b510e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5111 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108b5114 push edx */
  push32((uint32_t)(EDX));
  /* 108b5115 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b5118 push eax */
  push32((uint32_t)(EAX));
  /* 108b5119 push 0x108da784 */
  push32((uint32_t)(0x108da784u));
  /* 108b511e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5120 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5122 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5124 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5126 call 0x108b2df0 */
  push32(0x108b512bu); f_108b2df0();
  /* 108b512b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b512e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5131 jne 0x108b5134 */
  if (!C.zf) goto L_108b5134;
  /* 108b5133 int3  */
  x86_unimpl("int3 @ 0x108b5133");
L_108b5134:;
  /* 108b5134 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b5136 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b5138 jne 0x108b5107 */
  if (!C.zf) goto L_108b5107;
  /* 108b513a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108b5141:;
  /* 108b5141 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5144 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5148 jne 0x108b519a */
  if (!C.zf) goto L_108b519a;
  /* 108b514a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b514d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b5150 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5151 mov dl, byte ptr [0x108dda91] */
  DL = (r8((uint32_t)(0x108dda91)));
  /* 108b5157 push edx */
  push32((uint32_t)(EDX));
  /* 108b5158 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b515b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b515e push eax */
  push32((uint32_t)(EAX));
  /* 108b515f call 0x108b4e40 */
  push32(0x108b5164u); f_108b4e40();
  /* 108b5164 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5167 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5169 jne 0x108b519a */
  if (!C.zf) goto L_108b519a;
L_108b516b:;
  /* 108b516b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b516e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5171 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5172 push 0x108da8a8 */
  push32((uint32_t)(0x108da8a8u));
  /* 108b5177 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5179 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b517b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b517d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b517f call 0x108b2df0 */
  push32(0x108b5184u); f_108b2df0();
  /* 108b5184 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5187 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b518a jne 0x108b518d */
  if (!C.zf) goto L_108b518d;
  /* 108b518c int3  */
  x86_unimpl("int3 @ 0x108b518c");
L_108b518d:;
  /* 108b518d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b518f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b5191 jne 0x108b516b */
  if (!C.zf) goto L_108b516b;
  /* 108b5193 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108b519a:;
  /* 108b519a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b519e jne 0x108b5216 */
  if (!C.zf) goto L_108b5216;
  /* 108b51a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b51a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b51a7 je 0x108b51dc */
  if (C.zf) goto L_108b51dc;
L_108b51a9:;
  /* 108b51a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b51ac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 108b51af push edx */
  push32((uint32_t)(EDX));
  /* 108b51b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b51b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b51b6 push ecx */
  push32((uint32_t)(ECX));
  /* 108b51b7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b51ba push edx */
  push32((uint32_t)(EDX));
  /* 108b51bb push 0x108da888 */
  push32((uint32_t)(0x108da888u));
  /* 108b51c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b51c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b51c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b51c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b51c8 call 0x108b2df0 */
  push32(0x108b51cdu); f_108b2df0();
  /* 108b51cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b51d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b51d3 jne 0x108b51d6 */
  if (!C.zf) goto L_108b51d6;
  /* 108b51d5 int3  */
  x86_unimpl("int3 @ 0x108b51d5");
L_108b51d6:;
  /* 108b51d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b51d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b51da jne 0x108b51a9 */
  if (!C.zf) goto L_108b51a9;
L_108b51dc:;
  /* 108b51dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b51df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108b51e2 push edx */
  push32((uint32_t)(EDX));
  /* 108b51e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b51e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b51e9 push eax */
  push32((uint32_t)(EAX));
  /* 108b51ea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b51ed push ecx */
  push32((uint32_t)(ECX));
  /* 108b51ee push 0x108da85c */
  push32((uint32_t)(0x108da85cu));
  /* 108b51f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b51f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b51f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b51f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b51fb call 0x108b2df0 */
  push32(0x108b5200u); f_108b2df0();
  /* 108b5200 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5203 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5206 jne 0x108b5209 */
  if (!C.zf) goto L_108b5209;
  /* 108b5208 int3  */
  x86_unimpl("int3 @ 0x108b5208");
L_108b5209:;
  /* 108b5209 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b520b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b520d jne 0x108b51dc */
  if (!C.zf) goto L_108b51dc;
  /* 108b520f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108b5216:;
  /* 108b5216 jmp 0x108b5023 */
  goto L_108b5023;
L_108b521b:;
  /* 108b521b push 9 */
  push32((uint32_t)(0x9u));
  /* 108b521d call 0x108b77d0 */
  push32(0x108b5222u); f_108b77d0();
  /* 108b5222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108b5228:;
  /* 108b5228 pop edi */
  EDI = (pop32());
  /* 108b5229 pop esi */
  ESI = (pop32());
  /* 108b522a pop ebx */
  EBX = (pop32());
  /* 108b522b mov esp, ebp */
  ESP = (EBP);
  /* 108b522d pop ebp */
  EBP = (pop32());
  /* 108b522e ret  */
  ESPCHK(0x108b4ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x108b5240 (34 bytes, 13 insns) */
void f_108b5240(void) {
  FTRACE(0x108b5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5240 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5241 mov ebp, esp */
  EBP = (ESP);
  /* 108b5243 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5244 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b5249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b524c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5250 je 0x108b525b */
  if (C.zf) goto L_108b525b;
  /* 108b5252 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5255 mov dword ptr [0x108dda84], ecx */
  w32((uint32_t)(0x108dda84), (ECX));
L_108b525b:;
  /* 108b525b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b525e mov esp, ebp */
  ESP = (EBP);
  /* 108b5260 pop ebp */
  EBP = (pop32());
  /* 108b5261 ret  */
  ESPCHK(0x108b5240u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x108b5270 (103 bytes, 38 insns) */
void f_108b5270(void) {
  FTRACE(0x108b5270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5270 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5271 mov ebp, esp */
  EBP = (ESP);
  /* 108b5273 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5274 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b5279 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 108b527c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b527e jne 0x108b5282 */
  if (!C.zf) goto L_108b5282;
  /* 108b5280 jmp 0x108b52d3 */
  goto L_108b52d3;
L_108b5282:;
  /* 108b5282 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b5284 call 0x108b7730 */
  push32(0x108b5289u); f_108b7730();
  /* 108b5289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b528c mov ecx, dword ptr [0x108df5bc] */
  ECX = (r32((uint32_t)(0x108df5bc)));
  /* 108b5292 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b5295 jmp 0x108b529f */
  goto L_108b529f;
L_108b5297:;
  /* 108b5297 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b529a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b529c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b529f:;
  /* 108b529f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b52a3 je 0x108b52c9 */
  if (C.zf) goto L_108b52c9;
  /* 108b52a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b52a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108b52ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b52b1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b52b4 jne 0x108b52c7 */
  if (!C.zf) goto L_108b52c7;
  /* 108b52b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b52b9 push eax */
  push32((uint32_t)(EAX));
  /* 108b52ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b52bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b52c0 push ecx */
  push32((uint32_t)(ECX));
  /* 108b52c1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x108b52c4u);
  /* 108b52c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b52c7:;
  /* 108b52c7 jmp 0x108b5297 */
  goto L_108b5297;
L_108b52c9:;
  /* 108b52c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b52cb call 0x108b77d0 */
  push32(0x108b52d0u); f_108b77d0();
  /* 108b52d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b52d3:;
  /* 108b52d3 mov esp, ebp */
  ESP = (EBP);
  /* 108b52d5 pop ebp */
  EBP = (pop32());
  /* 108b52d6 ret  */
  ESPCHK(0x108b5270u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x108b52e0 (75 bytes, 28 insns) */
void f_108b52e0(void) {
  FTRACE(0x108b52e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b52e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b52e1 mov ebp, esp */
  EBP = (ESP);
  /* 108b52e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b52e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b52e8 je 0x108b531d */
  if (C.zf) goto L_108b531d;
  /* 108b52ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b52ed push eax */
  push32((uint32_t)(EAX));
  /* 108b52ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b52f1 push ecx */
  push32((uint32_t)(ECX));
  /* 108b52f2 call dword ptr [0x108e2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2378))), 0x108b52f8u);
  /* 108b52f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b52fa jne 0x108b531d */
  if (!C.zf) goto L_108b531d;
  /* 108b52fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5300 je 0x108b5314 */
  if (C.zf) goto L_108b5314;
  /* 108b5302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b5305 push edx */
  push32((uint32_t)(EDX));
  /* 108b5306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5309 push eax */
  push32((uint32_t)(EAX));
  /* 108b530a call dword ptr [0x108e2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2374))), 0x108b5310u);
  /* 108b5310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5312 jne 0x108b531d */
  if (!C.zf) goto L_108b531d;
L_108b5314:;
  /* 108b5314 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108b531b jmp 0x108b5324 */
  goto L_108b5324;
L_108b531d:;
  /* 108b531d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108b5324:;
  /* 108b5324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5327 mov esp, ebp */
  ESP = (EBP);
  /* 108b5329 pop ebp */
  EBP = (pop32());
  /* 108b532a ret  */
  ESPCHK(0x108b52e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x108b5330 (134 bytes, 50 insns) */
void f_108b5330(void) {
  FTRACE(0x108b5330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5330 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5331 mov ebp, esp */
  EBP = (ESP);
  /* 108b5333 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5334 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5338 jne 0x108b533e */
  if (!C.zf) goto L_108b533e;
  /* 108b533a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b533c jmp 0x108b53b2 */
  goto L_108b53b2;
L_108b533e:;
  /* 108b533e push 1 */
  push32((uint32_t)(0x1u));
  /* 108b5340 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108b5342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5345 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5348 push eax */
  push32((uint32_t)(EAX));
  /* 108b5349 call 0x108b52e0 */
  push32(0x108b534eu); f_108b52e0();
  /* 108b534e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5353 jne 0x108b5359 */
  if (!C.zf) goto L_108b5359;
  /* 108b5355 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5357 jmp 0x108b53b2 */
  goto L_108b53b2;
L_108b5359:;
  /* 108b5359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b535c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b535f push ecx */
  push32((uint32_t)(ECX));
  /* 108b5360 call 0x108b8030 */
  push32(0x108b5365u); f_108b8030();
  /* 108b5365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b536b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b536f je 0x108b5386 */
  if (C.zf) goto L_108b5386;
  /* 108b5371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5374 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5377 push edx */
  push32((uint32_t)(EDX));
  /* 108b5378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b537b push eax */
  push32((uint32_t)(EAX));
  /* 108b537c call 0x108b8090 */
  push32(0x108b5381u); f_108b8090();
  /* 108b5381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5384 jmp 0x108b53b2 */
  goto L_108b53b2;
L_108b5386:;
  /* 108b5386 mov ecx, dword ptr [0x108df570] */
  ECX = (r32((uint32_t)(0x108df570)));
  /* 108b538c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 108b5392 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b5394 je 0x108b539d */
  if (C.zf) goto L_108b539d;
  /* 108b5396 mov eax, 1 */
  EAX = (0x1u);
  /* 108b539b jmp 0x108b53b2 */
  goto L_108b53b2;
L_108b539d:;
  /* 108b539d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b53a0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b53a3 push edx */
  push32((uint32_t)(EDX));
  /* 108b53a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b53a6 mov eax, dword ptr [0x108e0f0c] */
  EAX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b53ab push eax */
  push32((uint32_t)(EAX));
  /* 108b53ac call dword ptr [0x108e237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e237c))), 0x108b53b2u);
L_108b53b2:;
  /* 108b53b2 mov esp, ebp */
  ESP = (EBP);
  /* 108b53b4 pop ebp */
  EBP = (pop32());
  /* 108b53b5 ret  */
  ESPCHK(0x108b5330u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x108b53c0 (227 bytes, 80 insns) */
void f_108b53c0(void) {
  FTRACE(0x108b53c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b53c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b53c1 mov ebp, esp */
  EBP = (ESP);
  /* 108b53c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b53c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b53c7 push eax */
  push32((uint32_t)(EAX));
  /* 108b53c8 call 0x108b5330 */
  push32(0x108b53cdu); f_108b5330();
  /* 108b53cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b53d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b53d2 jne 0x108b53db */
  if (!C.zf) goto L_108b53db;
  /* 108b53d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b53d6 jmp 0x108b549f */
  goto L_108b549f;
L_108b53db:;
  /* 108b53db push 9 */
  push32((uint32_t)(0x9u));
  /* 108b53dd call 0x108b7730 */
  push32(0x108b53e2u); f_108b7730();
  /* 108b53e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b53e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b53e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b53eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b53ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b53f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b53f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b53f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b53fc je 0x108b5420 */
  if (C.zf) goto L_108b5420;
  /* 108b53fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5401 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5405 je 0x108b5420 */
  if (C.zf) goto L_108b5420;
  /* 108b5407 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b540a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b540d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b5412 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5415 je 0x108b5420 */
  if (C.zf) goto L_108b5420;
  /* 108b5417 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b541a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b541e jne 0x108b5493 */
  if (!C.zf) goto L_108b5493;
L_108b5420:;
  /* 108b5420 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b5422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b5425 push edx */
  push32((uint32_t)(EDX));
  /* 108b5426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5429 push eax */
  push32((uint32_t)(EAX));
  /* 108b542a call 0x108b52e0 */
  push32(0x108b542fu); f_108b52e0();
  /* 108b542f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5434 je 0x108b5493 */
  if (C.zf) goto L_108b5493;
  /* 108b5436 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5439 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108b543c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b543f jne 0x108b5493 */
  if (!C.zf) goto L_108b5493;
  /* 108b5441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5444 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108b5447 cmp ecx, dword ptr [0x108dda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108dda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b544d jg 0x108b5493 */
  if ((!C.zf&&C.sf==C.of)) goto L_108b5493;
  /* 108b544f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5453 je 0x108b5460 */
  if (C.zf) goto L_108b5460;
  /* 108b5455 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b545b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108b545e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b5460:;
  /* 108b5460 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5464 je 0x108b5471 */
  if (C.zf) goto L_108b5471;
  /* 108b5466 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b5469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b546c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b546f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b5471:;
  /* 108b5471 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5475 je 0x108b5482 */
  if (C.zf) goto L_108b5482;
  /* 108b5477 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b547a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b547d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108b5480 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b5482:;
  /* 108b5482 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b5484 call 0x108b77d0 */
  push32(0x108b5489u); f_108b77d0();
  /* 108b5489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b548c mov eax, 1 */
  EAX = (0x1u);
  /* 108b5491 jmp 0x108b549f */
  goto L_108b549f;
L_108b5493:;
  /* 108b5493 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b5495 call 0x108b77d0 */
  push32(0x108b549au); f_108b77d0();
  /* 108b549a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b549d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b549f:;
  /* 108b549f mov esp, ebp */
  ESP = (EBP);
  /* 108b54a1 pop ebp */
  EBP = (pop32());
  /* 108b54a2 ret  */
  ESPCHK(0x108b53c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x108b54b0 (28 bytes, 11 insns) */
void f_108b54b0(void) {
  FTRACE(0x108b54b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b54b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b54b1 mov ebp, esp */
  EBP = (ESP);
  /* 108b54b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b54b4 mov eax, dword ptr [0x108e0f18] */
  EAX = (r32((uint32_t)(0x108e0f18)));
  /* 108b54b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b54bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b54bf mov dword ptr [0x108e0f18], ecx */
  w32((uint32_t)(0x108e0f18), (ECX));
  /* 108b54c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b54c8 mov esp, ebp */
  ESP = (EBP);
  /* 108b54ca pop ebp */
  EBP = (pop32());
  /* 108b54cb ret  */
  ESPCHK(0x108b54b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d0 @ 0x108b54d0 (362 bytes, 116 insns) */
void f_108b54d0(void) {
  FTRACE(0x108b54d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b54d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b54d1 mov ebp, esp */
  EBP = (ESP);
  /* 108b54d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b54d6 push ebx */
  push32((uint32_t)(EBX));
  /* 108b54d7 push esi */
  push32((uint32_t)(ESI));
  /* 108b54d8 push edi */
  push32((uint32_t)(EDI));
  /* 108b54d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b54dd jne 0x108b550a */
  if (!C.zf) goto L_108b550a;
L_108b54df:;
  /* 108b54df push 0x108da9bc */
  push32((uint32_t)(0x108da9bcu));
  /* 108b54e4 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b54e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b54eb push 0 */
  push32((uint32_t)(0x0u));
  /* 108b54ed push 0 */
  push32((uint32_t)(0x0u));
  /* 108b54ef push 0 */
  push32((uint32_t)(0x0u));
  /* 108b54f1 call 0x108b2df0 */
  push32(0x108b54f6u); f_108b2df0();
  /* 108b54f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b54f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b54fc jne 0x108b54ff */
  if (!C.zf) goto L_108b54ff;
  /* 108b54fe int3  */
  x86_unimpl("int3 @ 0x108b54fe");
L_108b54ff:;
  /* 108b54ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5503 jne 0x108b54df */
  if (!C.zf) goto L_108b54df;
  /* 108b5505 jmp 0x108b5633 */
  goto L_108b5633;
L_108b550a:;
  /* 108b550a push 9 */
  push32((uint32_t)(0x9u));
  /* 108b550c call 0x108b7730 */
  push32(0x108b5511u); f_108b7730();
  /* 108b5511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5514 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5517 mov edx, dword ptr [0x108df5bc] */
  EDX = (r32((uint32_t)(0x108df5bc)));
  /* 108b551d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108b551f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b5526 jmp 0x108b5531 */
  goto L_108b5531;
L_108b5528:;
  /* 108b5528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b552b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b552e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b5531:;
  /* 108b5531 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5535 jge 0x108b5555 */
  if ((C.sf==C.of)) goto L_108b5555;
  /* 108b5537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b553a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b553d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 108b5545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b554b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 108b5553 jmp 0x108b5528 */
  goto L_108b5528;
L_108b5555:;
  /* 108b5555 mov edx, dword ptr [0x108df5bc] */
  EDX = (r32((uint32_t)(0x108df5bc)));
  /* 108b555b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108b555e jmp 0x108b5568 */
  goto L_108b5568;
L_108b5560:;
  /* 108b5560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5563 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b5565 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108b5568:;
  /* 108b5568 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b556c je 0x108b5611 */
  if (C.zf) goto L_108b5611;
  /* 108b5572 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5575 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b5578 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b557d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b557f jl 0x108b55e7 */
  if ((C.sf!=C.of)) goto L_108b55e7;
  /* 108b5581 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5584 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108b5587 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b558d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5590 jge 0x108b55e7 */
  if ((C.sf==C.of)) goto L_108b55e7;
  /* 108b5592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5595 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108b5598 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b559e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b55a1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 108b55a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b55a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b55ab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108b55ae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b55b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b55b7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 108b55bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b55be mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b55c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b55c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b55c9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 108b55cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b55d0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b55d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b55d6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 108b55d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b55de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b55e1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 108b55e5 jmp 0x108b560c */
  goto L_108b560c;
L_108b55e7:;
  /* 108b55e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b55ea push edx */
  push32((uint32_t)(EDX));
  /* 108b55eb push 0x108da998 */
  push32((uint32_t)(0x108da998u));
  /* 108b55f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b55f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b55f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b55f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b55f8 call 0x108b2df0 */
  push32(0x108b55fdu); f_108b2df0();
  /* 108b55fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5600 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5603 jne 0x108b5606 */
  if (!C.zf) goto L_108b5606;
  /* 108b5605 int3  */
  x86_unimpl("int3 @ 0x108b5605");
L_108b5606:;
  /* 108b5606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b560a jne 0x108b55e7 */
  if (!C.zf) goto L_108b55e7;
L_108b560c:;
  /* 108b560c jmp 0x108b5560 */
  goto L_108b5560;
L_108b5611:;
  /* 108b5611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5614 mov edx, dword ptr [0x108df5c4] */
  EDX = (r32((uint32_t)(0x108df5c4)));
  /* 108b561a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 108b561d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5620 mov ecx, dword ptr [0x108df5b8] */
  ECX = (r32((uint32_t)(0x108df5b8)));
  /* 108b5626 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 108b5629 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b562b call 0x108b77d0 */
  push32(0x108b5630u); f_108b77d0();
  /* 108b5630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b5633:;
  /* 108b5633 pop edi */
  EDI = (pop32());
  /* 108b5634 pop esi */
  ESI = (pop32());
  /* 108b5635 pop ebx */
  EBX = (pop32());
  /* 108b5636 mov esp, ebp */
  ESP = (EBP);
  /* 108b5638 pop ebp */
  EBP = (pop32());
  /* 108b5639 ret  */
  ESPCHK(0x108b54d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005640 @ 0x108b5640 (291 bytes, 95 insns) */
void f_108b5640(void) {
  FTRACE(0x108b5640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5640 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5641 mov ebp, esp */
  EBP = (ESP);
  /* 108b5643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5646 push ebx */
  push32((uint32_t)(EBX));
  /* 108b5647 push esi */
  push32((uint32_t)(ESI));
  /* 108b5648 push edi */
  push32((uint32_t)(EDI));
  /* 108b5649 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108b5650 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5654 je 0x108b5662 */
  if (C.zf) goto L_108b5662;
  /* 108b5656 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b565a je 0x108b5662 */
  if (C.zf) goto L_108b5662;
  /* 108b565c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5660 jne 0x108b5690 */
  if (!C.zf) goto L_108b5690;
L_108b5662:;
  /* 108b5662 push 0x108da9e4 */
  push32((uint32_t)(0x108da9e4u));
  /* 108b5667 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b566c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b566e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5670 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5672 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5674 call 0x108b2df0 */
  push32(0x108b5679u); f_108b2df0();
  /* 108b5679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b567c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b567f jne 0x108b5682 */
  if (!C.zf) goto L_108b5682;
  /* 108b5681 int3  */
  x86_unimpl("int3 @ 0x108b5681");
L_108b5682:;
  /* 108b5682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5686 jne 0x108b5662 */
  if (!C.zf) goto L_108b5662;
  /* 108b5688 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b568b jmp 0x108b575c */
  goto L_108b575c;
L_108b5690:;
  /* 108b5690 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b5697 jmp 0x108b56a2 */
  goto L_108b56a2;
L_108b5699:;
  /* 108b5699 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b569c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b569f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b56a2:;
  /* 108b56a2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b56a6 jge 0x108b572c */
  if ((C.sf==C.of)) goto L_108b572c;
  /* 108b56ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b56af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b56b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b56b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108b56b8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 108b56bc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b56c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b56c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b56c6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 108b56ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b56cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b56d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b56d3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108b56d6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 108b56da sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b56de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b56e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b56e4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 108b56e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b56eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b56ee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b56f3 jne 0x108b5702 */
  if (!C.zf) goto L_108b5702;
  /* 108b56f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b56f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b56fb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5700 je 0x108b5727 */
  if (C.zf) goto L_108b5727;
L_108b5702:;
  /* 108b5702 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5706 je 0x108b5727 */
  if (C.zf) goto L_108b5727;
  /* 108b5708 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b570c jne 0x108b5720 */
  if (!C.zf) goto L_108b5720;
  /* 108b570e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5712 jne 0x108b5727 */
  if (!C.zf) goto L_108b5727;
  /* 108b5714 mov eax, dword ptr [0x108dda84] */
  EAX = (r32((uint32_t)(0x108dda84)));
  /* 108b5719 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 108b571c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b571e je 0x108b5727 */
  if (C.zf) goto L_108b5727;
L_108b5720:;
  /* 108b5720 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_108b5727:;
  /* 108b5727 jmp 0x108b5699 */
  goto L_108b5699;
L_108b572c:;
  /* 108b572c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b572f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b5732 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 108b5735 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5738 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b573b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 108b573e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5741 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b5744 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 108b5747 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b574a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b574d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 108b5750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5753 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108b5759 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_108b575c:;
  /* 108b575c pop edi */
  EDI = (pop32());
  /* 108b575d pop esi */
  ESI = (pop32());
  /* 108b575e pop ebx */
  EBX = (pop32());
  /* 108b575f mov esp, ebp */
  ESP = (EBP);
  /* 108b5761 pop ebp */
  EBP = (pop32());
  /* 108b5762 ret  */
  ESPCHK(0x108b5640u, _esp0);
  ESP += 4; return;
}

/* FUN_10005770 @ 0x108b5770 (697 bytes, 253 insns) */
void f_108b5770(void) {
  FTRACE(0x108b5770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5770 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5771 mov ebp, esp */
  EBP = (ESP);
  /* 108b5773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5776 push ebx */
  push32((uint32_t)(EBX));
  /* 108b5777 push esi */
  push32((uint32_t)(ESI));
  /* 108b5778 push edi */
  push32((uint32_t)(EDI));
  /* 108b5779 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108b5780 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b5782 call 0x108b7730 */
  push32(0x108b5787u); f_108b7730();
  /* 108b5787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b578a:;
  /* 108b578a push 0x108daadc */
  push32((uint32_t)(0x108daadcu));
  /* 108b578f push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b5794 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5796 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5798 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b579a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b579c call 0x108b2df0 */
  push32(0x108b57a1u); f_108b2df0();
  /* 108b57a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b57a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b57a7 jne 0x108b57aa */
  if (!C.zf) goto L_108b57aa;
  /* 108b57a9 int3  */
  x86_unimpl("int3 @ 0x108b57a9");
L_108b57aa:;
  /* 108b57aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b57ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b57ae jne 0x108b578a */
  if (!C.zf) goto L_108b578a;
  /* 108b57b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b57b4 je 0x108b57be */
  if (C.zf) goto L_108b57be;
  /* 108b57b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b57b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b57bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108b57be:;
  /* 108b57be mov eax, dword ptr [0x108df5bc] */
  EAX = (r32((uint32_t)(0x108df5bc)));
  /* 108b57c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b57c6 jmp 0x108b57d0 */
  goto L_108b57d0;
L_108b57c8:;
  /* 108b57c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b57cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b57cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108b57d0:;
  /* 108b57d0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b57d4 je 0x108b59f2 */
  if (C.zf) goto L_108b59f2;
  /* 108b57da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b57dd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b57e0 je 0x108b59f2 */
  if (C.zf) goto L_108b59f2;
  /* 108b57e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b57e9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108b57ec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b57f2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b57f5 je 0x108b5824 */
  if (C.zf) goto L_108b5824;
  /* 108b57f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b57fa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108b57fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b5803 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b5805 je 0x108b5824 */
  if (C.zf) goto L_108b5824;
  /* 108b5807 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b580a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b580d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b5812 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5815 jne 0x108b5829 */
  if (!C.zf) goto L_108b5829;
  /* 108b5817 mov ecx, dword ptr [0x108dda84] */
  ECX = (r32((uint32_t)(0x108dda84)));
  /* 108b581d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 108b5820 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b5822 jne 0x108b5829 */
  if (!C.zf) goto L_108b5829;
L_108b5824:;
  /* 108b5824 jmp 0x108b59ed */
  goto L_108b59ed;
L_108b5829:;
  /* 108b5829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b582c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5830 je 0x108b58a2 */
  if (C.zf) goto L_108b58a2;
  /* 108b5832 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5834 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b5836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5839 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108b583c push ecx */
  push32((uint32_t)(ECX));
  /* 108b583d call 0x108b52e0 */
  push32(0x108b5842u); f_108b52e0();
  /* 108b5842 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5847 jne 0x108b5873 */
  if (!C.zf) goto L_108b5873;
L_108b5849:;
  /* 108b5849 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b584c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108b584f push eax */
  push32((uint32_t)(EAX));
  /* 108b5850 push 0x108daac8 */
  push32((uint32_t)(0x108daac8u));
  /* 108b5855 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5857 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5859 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b585b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b585d call 0x108b2df0 */
  push32(0x108b5862u); f_108b2df0();
  /* 108b5862 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5865 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5868 jne 0x108b586b */
  if (!C.zf) goto L_108b586b;
  /* 108b586a int3  */
  x86_unimpl("int3 @ 0x108b586a");
L_108b586b:;
  /* 108b586b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b586d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b586f jne 0x108b5849 */
  if (!C.zf) goto L_108b5849;
  /* 108b5871 jmp 0x108b58a2 */
  goto L_108b58a2;
L_108b5873:;
  /* 108b5873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5876 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108b5879 push eax */
  push32((uint32_t)(EAX));
  /* 108b587a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b587d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b5880 push edx */
  push32((uint32_t)(EDX));
  /* 108b5881 push 0x108daabc */
  push32((uint32_t)(0x108daabcu));
  /* 108b5886 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5888 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b588a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b588c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b588e call 0x108b2df0 */
  push32(0x108b5893u); f_108b2df0();
  /* 108b5893 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5896 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5899 jne 0x108b589c */
  if (!C.zf) goto L_108b589c;
  /* 108b589b int3  */
  x86_unimpl("int3 @ 0x108b589b");
L_108b589c:;
  /* 108b589c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b589e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b58a0 jne 0x108b5873 */
  if (!C.zf) goto L_108b5873;
L_108b58a2:;
  /* 108b58a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b58a5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108b58a8 push edx */
  push32((uint32_t)(EDX));
  /* 108b58a9 push 0x108daab4 */
  push32((uint32_t)(0x108daab4u));
  /* 108b58ae push 0 */
  push32((uint32_t)(0x0u));
  /* 108b58b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b58b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b58b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b58b6 call 0x108b2df0 */
  push32(0x108b58bbu); f_108b2df0();
  /* 108b58bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b58be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b58c1 jne 0x108b58c4 */
  if (!C.zf) goto L_108b58c4;
  /* 108b58c3 int3  */
  x86_unimpl("int3 @ 0x108b58c3");
L_108b58c4:;
  /* 108b58c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b58c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b58c8 jne 0x108b58a2 */
  if (!C.zf) goto L_108b58a2;
  /* 108b58ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b58cd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108b58d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b58d6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b58d9 jne 0x108b594c */
  if (!C.zf) goto L_108b594c;
L_108b58db:;
  /* 108b58db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b58de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b58e1 push ecx */
  push32((uint32_t)(ECX));
  /* 108b58e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b58e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b58e8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108b58eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b58f0 push eax */
  push32((uint32_t)(EAX));
  /* 108b58f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b58f4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b58f7 push ecx */
  push32((uint32_t)(ECX));
  /* 108b58f8 push 0x108daa80 */
  push32((uint32_t)(0x108daa80u));
  /* 108b58fd push 0 */
  push32((uint32_t)(0x0u));
  /* 108b58ff push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5901 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5903 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5905 call 0x108b2df0 */
  push32(0x108b590au); f_108b2df0();
  /* 108b590a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b590d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5910 jne 0x108b5913 */
  if (!C.zf) goto L_108b5913;
  /* 108b5912 int3  */
  x86_unimpl("int3 @ 0x108b5912");
L_108b5913:;
  /* 108b5913 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b5915 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b5917 jne 0x108b58db */
  if (!C.zf) goto L_108b58db;
  /* 108b5919 cmp dword ptr [0x108e0f18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e0f18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5920 je 0x108b593b */
  if (C.zf) goto L_108b593b;
  /* 108b5922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5925 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b5928 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5929 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b592c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b592f push edx */
  push32((uint32_t)(EDX));
  /* 108b5930 call dword ptr [0x108e0f18] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e0f18))), 0x108b5936u);
  /* 108b5936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5939 jmp 0x108b5947 */
  goto L_108b5947;
L_108b593b:;
  /* 108b593b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b593e push eax */
  push32((uint32_t)(EAX));
  /* 108b593f call 0x108b5a30 */
  push32(0x108b5944u); f_108b5a30();
  /* 108b5944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b5947:;
  /* 108b5947 jmp 0x108b59ed */
  goto L_108b59ed;
L_108b594c:;
  /* 108b594c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b594f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5953 jne 0x108b5992 */
  if (!C.zf) goto L_108b5992;
L_108b5955:;
  /* 108b5955 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5958 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b595b push eax */
  push32((uint32_t)(EAX));
  /* 108b595c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b595f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5962 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5963 push 0x108daa58 */
  push32((uint32_t)(0x108daa58u));
  /* 108b5968 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b596a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b596c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b596e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5970 call 0x108b2df0 */
  push32(0x108b5975u); f_108b2df0();
  /* 108b5975 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5978 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b597b jne 0x108b597e */
  if (!C.zf) goto L_108b597e;
  /* 108b597d int3  */
  x86_unimpl("int3 @ 0x108b597d");
L_108b597e:;
  /* 108b597e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b5980 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b5982 jne 0x108b5955 */
  if (!C.zf) goto L_108b5955;
  /* 108b5984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5987 push eax */
  push32((uint32_t)(EAX));
  /* 108b5988 call 0x108b5a30 */
  push32(0x108b598du); f_108b5a30();
  /* 108b598d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5990 jmp 0x108b59ed */
  goto L_108b59ed;
L_108b5992:;
  /* 108b5992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5995 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108b5998 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b599e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b59a1 jne 0x108b59ed */
  if (!C.zf) goto L_108b59ed;
L_108b59a3:;
  /* 108b59a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b59a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108b59a9 push ecx */
  push32((uint32_t)(ECX));
  /* 108b59aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b59ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108b59b0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108b59b3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b59b8 push eax */
  push32((uint32_t)(EAX));
  /* 108b59b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b59bc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b59bf push ecx */
  push32((uint32_t)(ECX));
  /* 108b59c0 push 0x108daa24 */
  push32((uint32_t)(0x108daa24u));
  /* 108b59c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b59c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b59c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b59cb push 0 */
  push32((uint32_t)(0x0u));
  /* 108b59cd call 0x108b2df0 */
  push32(0x108b59d2u); f_108b2df0();
  /* 108b59d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b59d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b59d8 jne 0x108b59db */
  if (!C.zf) goto L_108b59db;
  /* 108b59da int3  */
  x86_unimpl("int3 @ 0x108b59da");
L_108b59db:;
  /* 108b59db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b59dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b59df jne 0x108b59a3 */
  if (!C.zf) goto L_108b59a3;
  /* 108b59e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b59e4 push eax */
  push32((uint32_t)(EAX));
  /* 108b59e5 call 0x108b5a30 */
  push32(0x108b59eau); f_108b5a30();
  /* 108b59ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b59ed:;
  /* 108b59ed jmp 0x108b57c8 */
  goto L_108b57c8;
L_108b59f2:;
  /* 108b59f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b59f4 call 0x108b77d0 */
  push32(0x108b59f9u); f_108b77d0();
  /* 108b59f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b59fc:;
  /* 108b59fc push 0x108daa0c */
  push32((uint32_t)(0x108daa0cu));
  /* 108b5a01 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b5a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5a0e call 0x108b2df0 */
  push32(0x108b5a13u); f_108b2df0();
  /* 108b5a13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5a19 jne 0x108b5a1c */
  if (!C.zf) goto L_108b5a1c;
  /* 108b5a1b int3  */
  x86_unimpl("int3 @ 0x108b5a1b");
L_108b5a1c:;
  /* 108b5a1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b5a1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b5a20 jne 0x108b59fc */
  if (!C.zf) goto L_108b59fc;
  /* 108b5a22 pop edi */
  EDI = (pop32());
  /* 108b5a23 pop esi */
  ESI = (pop32());
  /* 108b5a24 pop ebx */
  EBX = (pop32());
  /* 108b5a25 mov esp, ebp */
  ESP = (EBP);
  /* 108b5a27 pop ebp */
  EBP = (pop32());
  /* 108b5a28 ret  */
  ESPCHK(0x108b5770u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a30 @ 0x108b5a30 (276 bytes, 89 insns) */
void f_108b5a30(void) {
  FTRACE(0x108b5a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5a30 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5a31 mov ebp, esp */
  EBP = (ESP);
  /* 108b5a33 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5a36 push ebx */
  push32((uint32_t)(EBX));
  /* 108b5a37 push esi */
  push32((uint32_t)(ESI));
  /* 108b5a38 push edi */
  push32((uint32_t)(EDI));
  /* 108b5a39 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 108b5a40 jmp 0x108b5a4b */
  goto L_108b5a4b;
L_108b5a42:;
  /* 108b5a42 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108b5a45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5a48 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_108b5a4b:;
  /* 108b5a4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5a4e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5a52 jge 0x108b5a5f */
  if ((C.sf==C.of)) goto L_108b5a5f;
  /* 108b5a54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5a57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108b5a5a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 108b5a5d jmp 0x108b5a66 */
  goto L_108b5a66;
L_108b5a5f:;
  /* 108b5a5f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_108b5a66:;
  /* 108b5a66 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108b5a69 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5a6c jge 0x108b5b0c */
  if ((C.sf==C.of)) goto L_108b5b0c;
  /* 108b5a72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5a75 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5a78 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 108b5a7b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 108b5a7e cmp dword ptr [0x108ddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108ddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5a85 jle 0x108b5aa3 */
  if ((C.zf||C.sf!=C.of)) goto L_108b5aa3;
  /* 108b5a87 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 108b5a8c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b5a8f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b5a95 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5a96 call 0x108b9d40 */
  push32(0x108b5a9bu); f_108b9d40();
  /* 108b5a9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5a9e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 108b5aa1 jmp 0x108b5ac0 */
  goto L_108b5ac0;
L_108b5aa3:;
  /* 108b5aa3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b5aa6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b5aac mov eax, dword ptr [0x108ddc98] */
  EAX = (r32((uint32_t)(0x108ddc98)));
  /* 108b5ab1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b5ab3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 108b5ab7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 108b5abd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_108b5ac0:;
  /* 108b5ac0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5ac4 je 0x108b5ad4 */
  if (C.zf) goto L_108b5ad4;
  /* 108b5ac6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b5ac9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b5acf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 108b5ad2 jmp 0x108b5adb */
  goto L_108b5adb;
L_108b5ad4:;
  /* 108b5ad4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_108b5adb:;
  /* 108b5adb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108b5ade mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 108b5ae1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 108b5ae5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108b5ae8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b5aee push edx */
  push32((uint32_t)(EDX));
  /* 108b5aef push 0x108dab00 */
  push32((uint32_t)(0x108dab00u));
  /* 108b5af4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108b5af7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b5afa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 108b5afe push ecx */
  push32((uint32_t)(ECX));
  /* 108b5aff call 0x108b9c40 */
  push32(0x108b5b04u); f_108b9c40();
  /* 108b5b04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5b07 jmp 0x108b5a42 */
  goto L_108b5a42;
L_108b5b0c:;
  /* 108b5b0c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108b5b0f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_108b5b14:;
  /* 108b5b14 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 108b5b17 push eax */
  push32((uint32_t)(EAX));
  /* 108b5b18 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 108b5b1b push ecx */
  push32((uint32_t)(ECX));
  /* 108b5b1c push 0x108daaf0 */
  push32((uint32_t)(0x108daaf0u));
  /* 108b5b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5b29 call 0x108b2df0 */
  push32(0x108b5b2eu); f_108b2df0();
  /* 108b5b2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5b31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5b34 jne 0x108b5b37 */
  if (!C.zf) goto L_108b5b37;
  /* 108b5b36 int3  */
  x86_unimpl("int3 @ 0x108b5b36");
L_108b5b37:;
  /* 108b5b37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b5b39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b5b3b jne 0x108b5b14 */
  if (!C.zf) goto L_108b5b14;
  /* 108b5b3d pop edi */
  EDI = (pop32());
  /* 108b5b3e pop esi */
  ESI = (pop32());
  /* 108b5b3f pop ebx */
  EBX = (pop32());
  /* 108b5b40 mov esp, ebp */
  ESP = (EBP);
  /* 108b5b42 pop ebp */
  EBP = (pop32());
  /* 108b5b43 ret  */
  ESPCHK(0x108b5a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b50 @ 0x108b5b50 (116 bytes, 46 insns) */
void f_108b5b50(void) {
  FTRACE(0x108b5b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5b50 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5b51 mov ebp, esp */
  EBP = (ESP);
  /* 108b5b53 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5b56 push ebx */
  push32((uint32_t)(EBX));
  /* 108b5b57 push esi */
  push32((uint32_t)(ESI));
  /* 108b5b58 push edi */
  push32((uint32_t)(EDI));
  /* 108b5b59 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 108b5b5c push eax */
  push32((uint32_t)(EAX));
  /* 108b5b5d call 0x108b54d0 */
  push32(0x108b5b62u); f_108b54d0();
  /* 108b5b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5b65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5b69 jne 0x108b5b84 */
  if (!C.zf) goto L_108b5b84;
  /* 108b5b6b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5b6f jne 0x108b5b84 */
  if (!C.zf) goto L_108b5b84;
  /* 108b5b71 mov ecx, dword ptr [0x108dda84] */
  ECX = (r32((uint32_t)(0x108dda84)));
  /* 108b5b77 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 108b5b7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b5b7c je 0x108b5bbb */
  if (C.zf) goto L_108b5bbb;
  /* 108b5b7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5b82 je 0x108b5bbb */
  if (C.zf) goto L_108b5bbb;
L_108b5b84:;
  /* 108b5b84 push 0x108dab08 */
  push32((uint32_t)(0x108dab08u));
  /* 108b5b89 push 0x108da4d4 */
  push32((uint32_t)(0x108da4d4u));
  /* 108b5b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5b96 call 0x108b2df0 */
  push32(0x108b5b9bu); f_108b2df0();
  /* 108b5b9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5b9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5ba1 jne 0x108b5ba4 */
  if (!C.zf) goto L_108b5ba4;
  /* 108b5ba3 int3  */
  x86_unimpl("int3 @ 0x108b5ba3");
L_108b5ba4:;
  /* 108b5ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b5ba6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b5ba8 jne 0x108b5b84 */
  if (!C.zf) goto L_108b5b84;
  /* 108b5baa push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5bac call 0x108b5770 */
  push32(0x108b5bb1u); f_108b5770();
  /* 108b5bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5bb4 mov eax, 1 */
  EAX = (0x1u);
  /* 108b5bb9 jmp 0x108b5bbd */
  goto L_108b5bbd;
L_108b5bbb:;
  /* 108b5bbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b5bbd:;
  /* 108b5bbd pop edi */
  EDI = (pop32());
  /* 108b5bbe pop esi */
  ESI = (pop32());
  /* 108b5bbf pop ebx */
  EBX = (pop32());
  /* 108b5bc0 mov esp, ebp */
  ESP = (EBP);
  /* 108b5bc2 pop ebp */
  EBP = (pop32());
  /* 108b5bc3 ret  */
  ESPCHK(0x108b5b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x108b5bd0 (197 bytes, 79 insns) */
void f_108b5bd0(void) {
  FTRACE(0x108b5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5bd1 mov ebp, esp */
  EBP = (ESP);
  /* 108b5bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5bd4 push ebx */
  push32((uint32_t)(EBX));
  /* 108b5bd5 push esi */
  push32((uint32_t)(ESI));
  /* 108b5bd6 push edi */
  push32((uint32_t)(EDI));
  /* 108b5bd7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5bdb jne 0x108b5be2 */
  if (!C.zf) goto L_108b5be2;
  /* 108b5bdd jmp 0x108b5c8e */
  goto L_108b5c8e;
L_108b5be2:;
  /* 108b5be2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b5be9 jmp 0x108b5bf4 */
  goto L_108b5bf4;
L_108b5beb:;
  /* 108b5beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5bee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5bf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b5bf4:;
  /* 108b5bf4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5bf8 jge 0x108b5c3e */
  if ((C.sf==C.of)) goto L_108b5c3e;
L_108b5bfa:;
  /* 108b5bfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5bfd mov edx, dword ptr [ecx*4 + 0x108dda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108dda94)));
  /* 108b5c04 push edx */
  push32((uint32_t)(EDX));
  /* 108b5c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5c08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5c0b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 108b5c0f push edx */
  push32((uint32_t)(EDX));
  /* 108b5c10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5c13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5c16 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 108b5c1a push edx */
  push32((uint32_t)(EDX));
  /* 108b5c1b push 0x108dab64 */
  push32((uint32_t)(0x108dab64u));
  /* 108b5c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c28 call 0x108b2df0 */
  push32(0x108b5c2du); f_108b2df0();
  /* 108b5c2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5c30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5c33 jne 0x108b5c36 */
  if (!C.zf) goto L_108b5c36;
  /* 108b5c35 int3  */
  x86_unimpl("int3 @ 0x108b5c35");
L_108b5c36:;
  /* 108b5c36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5c3a jne 0x108b5bfa */
  if (!C.zf) goto L_108b5bfa;
  /* 108b5c3c jmp 0x108b5beb */
  goto L_108b5beb;
L_108b5c3e:;
  /* 108b5c3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5c41 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 108b5c44 push edx */
  push32((uint32_t)(EDX));
  /* 108b5c45 push 0x108dab40 */
  push32((uint32_t)(0x108dab40u));
  /* 108b5c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c52 call 0x108b2df0 */
  push32(0x108b5c57u); f_108b2df0();
  /* 108b5c57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5c5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5c5d jne 0x108b5c60 */
  if (!C.zf) goto L_108b5c60;
  /* 108b5c5f int3  */
  x86_unimpl("int3 @ 0x108b5c5f");
L_108b5c60:;
  /* 108b5c60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5c64 jne 0x108b5c3e */
  if (!C.zf) goto L_108b5c3e;
L_108b5c66:;
  /* 108b5c66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5c69 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 108b5c6c push edx */
  push32((uint32_t)(EDX));
  /* 108b5c6d push 0x108dab20 */
  push32((uint32_t)(0x108dab20u));
  /* 108b5c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5c7a call 0x108b2df0 */
  push32(0x108b5c7fu); f_108b2df0();
  /* 108b5c7f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5c82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5c85 jne 0x108b5c88 */
  if (!C.zf) goto L_108b5c88;
  /* 108b5c87 int3  */
  x86_unimpl("int3 @ 0x108b5c87");
L_108b5c88:;
  /* 108b5c88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5c8c jne 0x108b5c66 */
  if (!C.zf) goto L_108b5c66;
L_108b5c8e:;
  /* 108b5c8e pop edi */
  EDI = (pop32());
  /* 108b5c8f pop esi */
  ESI = (pop32());
  /* 108b5c90 pop ebx */
  EBX = (pop32());
  /* 108b5c91 mov esp, ebp */
  ESP = (EBP);
  /* 108b5c93 pop ebp */
  EBP = (pop32());
  /* 108b5c94 ret  */
  ESPCHK(0x108b5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x108b5ca0 (329 bytes, 102 insns) */
void f_108b5ca0(void) {
  FTRACE(0x108b5ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5ca1 mov ebp, esp */
  EBP = (ESP);
  /* 108b5ca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5ca6 cmp dword ptr [0x108e1090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e1090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5cad jne 0x108b5cb4 */
  if (!C.zf) goto L_108b5cb4;
  /* 108b5caf call 0x108ba5e0 */
  push32(0x108b5cb4u); f_108ba5e0();
L_108b5cb4:;
  /* 108b5cb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108b5cbb mov eax, dword ptr [0x108df558] */
  EAX = (r32((uint32_t)(0x108df558)));
  /* 108b5cc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b5cc3:;
  /* 108b5cc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5cc6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108b5cc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b5ccb je 0x108b5cf9 */
  if (C.zf) goto L_108b5cf9;
  /* 108b5ccd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5cd0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b5cd3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5cd6 je 0x108b5ce1 */
  if (C.zf) goto L_108b5ce1;
  /* 108b5cd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5cdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5cde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108b5ce1:;
  /* 108b5ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5ce4 push eax */
  push32((uint32_t)(EAX));
  /* 108b5ce5 call 0x108b6b60 */
  push32(0x108b5ceau); f_108b6b60();
  /* 108b5cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5ced mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5cf0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 108b5cf4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b5cf7 jmp 0x108b5cc3 */
  goto L_108b5cc3;
L_108b5cf9:;
  /* 108b5cf9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 108b5cfb push 0x108dab84 */
  push32((uint32_t)(0x108dab84u));
  /* 108b5d00 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b5d02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5d05 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 108b5d0c push ecx */
  push32((uint32_t)(ECX));
  /* 108b5d0d call 0x108b3d30 */
  push32(0x108b5d12u); f_108b3d30();
  /* 108b5d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5d15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b5d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5d1b mov dword ptr [0x108df58c], edx */
  w32((uint32_t)(0x108df58c), (EDX));
  /* 108b5d21 cmp dword ptr [0x108df58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5d28 jne 0x108b5d34 */
  if (!C.zf) goto L_108b5d34;
  /* 108b5d2a push 9 */
  push32((uint32_t)(0x9u));
  /* 108b5d2c call 0x108b2ca0 */
  push32(0x108b5d31u); f_108b2ca0();
  /* 108b5d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b5d34:;
  /* 108b5d34 mov eax, dword ptr [0x108df558] */
  EAX = (r32((uint32_t)(0x108df558)));
  /* 108b5d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b5d3c jmp 0x108b5d47 */
  goto L_108b5d47;
L_108b5d3e:;
  /* 108b5d3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5d41 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5d44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b5d47:;
  /* 108b5d47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5d4a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108b5d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5d4f je 0x108b5db7 */
  if (C.zf) goto L_108b5db7;
  /* 108b5d51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5d54 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5d55 call 0x108b6b60 */
  push32(0x108b5d5au); f_108b6b60();
  /* 108b5d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5d5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5d60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b5d63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5d66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108b5d69 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5d6c je 0x108b5db5 */
  if (C.zf) goto L_108b5db5;
  /* 108b5d6e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 108b5d70 push 0x108dab84 */
  push32((uint32_t)(0x108dab84u));
  /* 108b5d75 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b5d77 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b5d7a push ecx */
  push32((uint32_t)(ECX));
  /* 108b5d7b call 0x108b3d30 */
  push32(0x108b5d80u); f_108b3d30();
  /* 108b5d80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5d83 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5d86 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108b5d88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5d8b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5d8e jne 0x108b5d9a */
  if (!C.zf) goto L_108b5d9a;
  /* 108b5d90 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b5d92 call 0x108b2ca0 */
  push32(0x108b5d97u); f_108b2ca0();
  /* 108b5d97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b5d9a:;
  /* 108b5d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5d9d push ecx */
  push32((uint32_t)(ECX));
  /* 108b5d9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5da1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b5da3 push eax */
  push32((uint32_t)(EAX));
  /* 108b5da4 call 0x108b6ce0 */
  push32(0x108b5da9u); f_108b6ce0();
  /* 108b5da9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5dac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5daf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5db2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_108b5db5:;
  /* 108b5db5 jmp 0x108b5d3e */
  goto L_108b5d3e;
L_108b5db7:;
  /* 108b5db7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b5db9 mov edx, dword ptr [0x108df558] */
  EDX = (r32((uint32_t)(0x108df558)));
  /* 108b5dbf push edx */
  push32((uint32_t)(EDX));
  /* 108b5dc0 call 0x108b47c0 */
  push32(0x108b5dc5u); f_108b47c0();
  /* 108b5dc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5dc8 mov dword ptr [0x108df558], 0 */
  w32((uint32_t)(0x108df558), (0x0u));
  /* 108b5dd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5dd5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108b5ddb mov dword ptr [0x108e1080], 1 */
  w32((uint32_t)(0x108e1080), (0x1u));
  /* 108b5de5 mov esp, ebp */
  ESP = (EBP);
  /* 108b5de7 pop ebp */
  EBP = (pop32());
  /* 108b5de8 ret  */
  ESPCHK(0x108b5ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x108b5df0 (216 bytes, 69 insns) */
void f_108b5df0(void) {
  FTRACE(0x108b5df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5df0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5df1 mov ebp, esp */
  EBP = (ESP);
  /* 108b5df3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5df6 cmp dword ptr [0x108e1090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e1090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5dfd jne 0x108b5e04 */
  if (!C.zf) goto L_108b5e04;
  /* 108b5dff call 0x108ba5e0 */
  push32(0x108b5e04u); f_108ba5e0();
L_108b5e04:;
  /* 108b5e04 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 108b5e09 push 0x108df5c8 */
  push32((uint32_t)(0x108df5c8u));
  /* 108b5e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5e10 call dword ptr [0x108e2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2334))), 0x108b5e16u);
  /* 108b5e16 mov dword ptr [0x108df59c], 0x108df5c8 */
  w32((uint32_t)(0x108df59c), (0x108df5c8u));
  /* 108b5e20 mov eax, dword ptr [0x108e10ac] */
  EAX = (r32((uint32_t)(0x108e10ac)));
  /* 108b5e25 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b5e28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b5e2a jne 0x108b5e37 */
  if (!C.zf) goto L_108b5e37;
  /* 108b5e2c mov edx, dword ptr [0x108df59c] */
  EDX = (r32((uint32_t)(0x108df59c)));
  /* 108b5e32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108b5e35 jmp 0x108b5e3f */
  goto L_108b5e3f;
L_108b5e37:;
  /* 108b5e37 mov eax, dword ptr [0x108e10ac] */
  EAX = (r32((uint32_t)(0x108e10ac)));
  /* 108b5e3c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_108b5e3f:;
  /* 108b5e3f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b5e42 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108b5e45 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 108b5e48 push edx */
  push32((uint32_t)(EDX));
  /* 108b5e49 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 108b5e4c push eax */
  push32((uint32_t)(EAX));
  /* 108b5e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 108b5e51 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b5e54 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5e55 call 0x108b5ed0 */
  push32(0x108b5e5au); f_108b5ed0();
  /* 108b5e5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5e5d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108b5e62 push 0x108dab90 */
  push32((uint32_t)(0x108dab90u));
  /* 108b5e67 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b5e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5e6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5e6f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 108b5e72 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5e73 call 0x108b3d30 */
  push32(0x108b5e78u); f_108b3d30();
  /* 108b5e78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5e7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b5e7e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5e82 jne 0x108b5e8e */
  if (!C.zf) goto L_108b5e8e;
  /* 108b5e84 push 8 */
  push32((uint32_t)(0x8u));
  /* 108b5e86 call 0x108b2ca0 */
  push32(0x108b5e8bu); f_108b2ca0();
  /* 108b5e8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b5e8e:;
  /* 108b5e8e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 108b5e91 push edx */
  push32((uint32_t)(EDX));
  /* 108b5e92 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 108b5e95 push eax */
  push32((uint32_t)(EAX));
  /* 108b5e96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5e99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5e9c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 108b5e9f push eax */
  push32((uint32_t)(EAX));
  /* 108b5ea0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b5ea4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b5ea7 push edx */
  push32((uint32_t)(EDX));
  /* 108b5ea8 call 0x108b5ed0 */
  push32(0x108b5eadu); f_108b5ed0();
  /* 108b5ead add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5eb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b5eb3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5eb6 mov dword ptr [0x108df580], eax */
  w32((uint32_t)(0x108df580), (EAX));
  /* 108b5ebb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b5ebe mov dword ptr [0x108df584], ecx */
  w32((uint32_t)(0x108df584), (ECX));
  /* 108b5ec4 mov esp, ebp */
  ESP = (EBP);
  /* 108b5ec6 pop ebp */
  EBP = (pop32());
  /* 108b5ec7 ret  */
  ESPCHK(0x108b5df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x108b5ed0 (1060 bytes, 360 insns) */
void f_108b5ed0(void) {
  FTRACE(0x108b5ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b5ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b5ed1 mov ebp, esp */
  EBP = (ESP);
  /* 108b5ed3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b5ed6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5ed9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108b5edf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b5ee2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 108b5ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b5eeb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b5eee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5ef2 je 0x108b5f05 */
  if (C.zf) goto L_108b5f05;
  /* 108b5ef4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b5ef7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5efa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108b5efc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b5eff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5f02 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_108b5f05:;
  /* 108b5f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5f08 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b5f0b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5f0e jne 0x108b5fdd */
  if (!C.zf) goto L_108b5fdd;
L_108b5f14:;
  /* 108b5f14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5f17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5f1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b5f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5f20 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b5f23 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5f26 je 0x108b5fa2 */
  if (C.zf) goto L_108b5fa2;
  /* 108b5f28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5f2b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108b5f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5f30 je 0x108b5fa2 */
  if (C.zf) goto L_108b5fa2;
  /* 108b5f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5f35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b5f37 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b5f39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b5f3b mov al, byte ptr [edx + 0x108e0de1] */
  AL = (r8((uint32_t)(EDX + 0x108e0de1)));
  /* 108b5f41 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108b5f44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b5f46 je 0x108b5f77 */
  if (C.zf) goto L_108b5f77;
  /* 108b5f48 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5f4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b5f4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5f50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5f53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108b5f55 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5f59 je 0x108b5f77 */
  if (C.zf) goto L_108b5f77;
  /* 108b5f5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5f5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5f61 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108b5f63 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108b5f65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5f68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5f6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108b5f6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5f71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5f74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108b5f77:;
  /* 108b5f77 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5f7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b5f7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5f7f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5f82 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108b5f84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5f88 je 0x108b5f9d */
  if (C.zf) goto L_108b5f9d;
  /* 108b5f8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5f8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5f90 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b5f92 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b5f94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5f97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5f9a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108b5f9d:;
  /* 108b5f9d jmp 0x108b5f14 */
  goto L_108b5f14;
L_108b5fa2:;
  /* 108b5fa2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5fa5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b5fa7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5faa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5fad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108b5faf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5fb3 je 0x108b5fc4 */
  if (C.zf) goto L_108b5fc4;
  /* 108b5fb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5fb8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108b5fbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5fbe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5fc1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_108b5fc4:;
  /* 108b5fc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5fc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b5fca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5fcd jne 0x108b5fd8 */
  if (!C.zf) goto L_108b5fd8;
  /* 108b5fcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5fd2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5fd5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108b5fd8:;
  /* 108b5fd8 jmp 0x108b60ac */
  goto L_108b60ac;
L_108b5fdd:;
  /* 108b5fdd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5fe0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b5fe2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b5fe5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b5fe8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108b5fea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b5fee je 0x108b6003 */
  if (C.zf) goto L_108b6003;
  /* 108b5ff0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5ff3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b5ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b5ff8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b5ffa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b5ffd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6000 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108b6003:;
  /* 108b6003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6006 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b6008 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 108b600b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b600e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6011 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b6014 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b6017 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b601d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b601f mov dl, byte ptr [ecx + 0x108e0de1] */
  DL = (r8((uint32_t)(ECX + 0x108e0de1)));
  /* 108b6025 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108b6028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b602a je 0x108b605b */
  if (C.zf) goto L_108b605b;
  /* 108b602c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b602f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b6031 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6034 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b6037 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108b6039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b603d je 0x108b6052 */
  if (C.zf) goto L_108b6052;
  /* 108b603f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6045 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b6047 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b6049 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b604c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b604f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108b6052:;
  /* 108b6052 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6055 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6058 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b605b:;
  /* 108b605b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b605e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b6064 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6067 je 0x108b6087 */
  if (C.zf) goto L_108b6087;
  /* 108b6069 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b606c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b6071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b6073 je 0x108b6087 */
  if (C.zf) goto L_108b6087;
  /* 108b6075 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b6078 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b607e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6081 jne 0x108b5fdd */
  if (!C.zf) goto L_108b5fdd;
L_108b6087:;
  /* 108b6087 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b608a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b6090 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b6092 jne 0x108b609f */
  if (!C.zf) goto L_108b609f;
  /* 108b6094 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6097 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b609a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b609d jmp 0x108b60ac */
  goto L_108b60ac;
L_108b609f:;
  /* 108b609f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b60a3 je 0x108b60ac */
  if (C.zf) goto L_108b60ac;
  /* 108b60a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b60a8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_108b60ac:;
  /* 108b60ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_108b60b3:;
  /* 108b60b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b60b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108b60b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b60bb je 0x108b60de */
  if (C.zf) goto L_108b60de;
L_108b60bd:;
  /* 108b60bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b60c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108b60c3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b60c6 je 0x108b60d3 */
  if (C.zf) goto L_108b60d3;
  /* 108b60c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b60cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b60ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b60d1 jne 0x108b60de */
  if (!C.zf) goto L_108b60de;
L_108b60d3:;
  /* 108b60d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b60d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b60d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b60dc jmp 0x108b60bd */
  goto L_108b60bd;
L_108b60de:;
  /* 108b60de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b60e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b60e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b60e6 jne 0x108b60ed */
  if (!C.zf) goto L_108b60ed;
  /* 108b60e8 jmp 0x108b62cb */
  goto L_108b62cb;
L_108b60ed:;
  /* 108b60ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b60f1 je 0x108b6104 */
  if (C.zf) goto L_108b6104;
  /* 108b60f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b60f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b60f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108b60fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b60fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6101 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108b6104:;
  /* 108b6104 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b6107 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b6109 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b610c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b610f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_108b6111:;
  /* 108b6111 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108b6118 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108b611f:;
  /* 108b611f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6122 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108b6125 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6128 jne 0x108b613e */
  if (!C.zf) goto L_108b613e;
  /* 108b612a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b612d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6130 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b6133 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b6136 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6139 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108b613c jmp 0x108b611f */
  goto L_108b611f;
L_108b613e:;
  /* 108b613e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6141 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b6144 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6147 jne 0x108b619a */
  if (!C.zf) goto L_108b619a;
  /* 108b6149 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b614c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b614e mov ecx, 2 */
  ECX = (0x2u);
  /* 108b6153 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108b6155 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b6157 jne 0x108b6192 */
  if (!C.zf) goto L_108b6192;
  /* 108b6159 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b615d je 0x108b617f */
  if (C.zf) goto L_108b617f;
  /* 108b615f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6162 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108b6166 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6169 jne 0x108b6176 */
  if (!C.zf) goto L_108b6176;
  /* 108b616b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b616e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6171 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b6174 jmp 0x108b617d */
  goto L_108b617d;
L_108b6176:;
  /* 108b6176 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108b617d:;
  /* 108b617d jmp 0x108b6186 */
  goto L_108b6186;
L_108b617f:;
  /* 108b617f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108b6186:;
  /* 108b6186 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b6188 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b618c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 108b618f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_108b6192:;
  /* 108b6192 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b6195 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108b6197 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_108b619a:;
  /* 108b619a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b619d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b61a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b61a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108b61a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b61a8 je 0x108b61ce */
  if (C.zf) goto L_108b61ce;
  /* 108b61aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b61ae je 0x108b61bf */
  if (C.zf) goto L_108b61bf;
  /* 108b61b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b61b3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 108b61b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b61b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b61bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_108b61bf:;
  /* 108b61bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b61c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b61c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b61c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b61ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108b61cc jmp 0x108b619a */
  goto L_108b619a;
L_108b61ce:;
  /* 108b61ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b61d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108b61d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b61d6 je 0x108b61f4 */
  if (C.zf) goto L_108b61f4;
  /* 108b61d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b61dc jne 0x108b61f9 */
  if (!C.zf) goto L_108b61f9;
  /* 108b61de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b61e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108b61e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b61e7 je 0x108b61f4 */
  if (C.zf) goto L_108b61f4;
  /* 108b61e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b61ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108b61ef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b61f2 jne 0x108b61f9 */
  if (!C.zf) goto L_108b61f9;
L_108b61f4:;
  /* 108b61f4 jmp 0x108b62a4 */
  goto L_108b62a4;
L_108b61f9:;
  /* 108b61f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b61fd je 0x108b6296 */
  if (C.zf) goto L_108b6296;
  /* 108b6203 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6207 je 0x108b625d */
  if (C.zf) goto L_108b625d;
  /* 108b6209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b620c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b620e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108b6210 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b6212 mov cl, byte ptr [eax + 0x108e0de1] */
  CL = (r8((uint32_t)(EAX + 0x108e0de1)));
  /* 108b6218 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108b621b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b621d je 0x108b6248 */
  if (C.zf) goto L_108b6248;
  /* 108b621f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6222 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6225 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108b6227 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108b6229 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b622c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b622f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 108b6232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6235 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6238 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b623b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b623e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b6240 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6243 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b6246 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108b6248:;
  /* 108b6248 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b624b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b624e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108b6250 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108b6252 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6255 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6258 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108b625b jmp 0x108b6289 */
  goto L_108b6289;
L_108b625d:;
  /* 108b625d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6262 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108b6264 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b6266 mov cl, byte ptr [eax + 0x108e0de1] */
  CL = (r8((uint32_t)(EAX + 0x108e0de1)));
  /* 108b626c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108b626f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b6271 je 0x108b6289 */
  if (C.zf) goto L_108b6289;
  /* 108b6273 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6276 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6279 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b627c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b627f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b6281 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6284 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b6287 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b6289:;
  /* 108b6289 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b628c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b628e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6291 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b6294 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108b6296:;
  /* 108b6296 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6299 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b629c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b629f jmp 0x108b6111 */
  goto L_108b6111;
L_108b62a4:;
  /* 108b62a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b62a8 je 0x108b62b9 */
  if (C.zf) goto L_108b62b9;
  /* 108b62aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b62ad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108b62b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b62b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b62b6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_108b62b9:;
  /* 108b62b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b62bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b62be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b62c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108b62c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108b62c6 jmp 0x108b60b3 */
  goto L_108b60b3;
L_108b62cb:;
  /* 108b62cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b62cf je 0x108b62e3 */
  if (C.zf) goto L_108b62e3;
  /* 108b62d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b62d4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108b62da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b62dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b62e0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108b62e3:;
  /* 108b62e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b62e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b62e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b62eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b62ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108b62f0 mov esp, ebp */
  ESP = (EBP);
  /* 108b62f2 pop ebp */
  EBP = (pop32());
  /* 108b62f3 ret  */
  ESPCHK(0x108b5ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x108b6300 (537 bytes, 173 insns) */
void f_108b6300(void) {
  FTRACE(0x108b6300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6300 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6301 mov ebp, esp */
  EBP = (ESP);
  /* 108b6303 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6306 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 108b630d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 108b6314 cmp dword ptr [0x108df6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b631b jne 0x108b635a */
  if (!C.zf) goto L_108b635a;
  /* 108b631d call dword ptr [0x108e2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2390))), 0x108b6323u);
  /* 108b6323 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108b6326 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b632a je 0x108b6338 */
  if (C.zf) goto L_108b6338;
  /* 108b632c mov dword ptr [0x108df6cc], 1 */
  w32((uint32_t)(0x108df6cc), (0x1u));
  /* 108b6336 jmp 0x108b635a */
  goto L_108b635a;
L_108b6338:;
  /* 108b6338 call dword ptr [0x108e238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e238c))), 0x108b633eu);
  /* 108b633e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b6341 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6345 je 0x108b6353 */
  if (C.zf) goto L_108b6353;
  /* 108b6347 mov dword ptr [0x108df6cc], 2 */
  w32((uint32_t)(0x108df6cc), (0x2u));
  /* 108b6351 jmp 0x108b635a */
  goto L_108b635a;
L_108b6353:;
  /* 108b6353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6355 jmp 0x108b6515 */
  goto L_108b6515;
L_108b635a:;
  /* 108b635a cmp dword ptr [0x108df6cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df6cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6361 jne 0x108b645e */
  if (!C.zf) goto L_108b645e;
  /* 108b6367 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b636b jne 0x108b6383 */
  if (!C.zf) goto L_108b6383;
  /* 108b636d call dword ptr [0x108e2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2390))), 0x108b6373u);
  /* 108b6373 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108b6376 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b637a jne 0x108b6383 */
  if (!C.zf) goto L_108b6383;
  /* 108b637c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b637e jmp 0x108b6515 */
  goto L_108b6515;
L_108b6383:;
  /* 108b6383 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b6386 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108b6389:;
  /* 108b6389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b638c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b638e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 108b6391 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b6393 je 0x108b63b5 */
  if (C.zf) goto L_108b63b5;
  /* 108b6395 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6398 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b639b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b639e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b63a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b63a3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 108b63a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b63a8 jne 0x108b63b3 */
  if (!C.zf) goto L_108b63b3;
  /* 108b63aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b63ad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b63b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108b63b3:;
  /* 108b63b3 jmp 0x108b6389 */
  goto L_108b6389;
L_108b63b5:;
  /* 108b63b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b63b8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b63bb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108b63bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b63c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b63c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b63c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b63c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b63c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b63cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b63ce push edx */
  push32((uint32_t)(EDX));
  /* 108b63cf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b63d2 push eax */
  push32((uint32_t)(EAX));
  /* 108b63d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b63d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b63d7 call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108b63ddu);
  /* 108b63dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b63e0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b63e4 je 0x108b6404 */
  if (C.zf) goto L_108b6404;
  /* 108b63e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 108b63e8 push 0x108dab9c */
  push32((uint32_t)(0x108dab9cu));
  /* 108b63ed push 2 */
  push32((uint32_t)(0x2u));
  /* 108b63ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b63f2 push ecx */
  push32((uint32_t)(ECX));
  /* 108b63f3 call 0x108b3d30 */
  push32(0x108b63f8u); f_108b3d30();
  /* 108b63f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b63fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b63fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6402 jne 0x108b6415 */
  if (!C.zf) goto L_108b6415;
L_108b6404:;
  /* 108b6404 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b6407 push edx */
  push32((uint32_t)(EDX));
  /* 108b6408 call dword ptr [0x108e2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2384))), 0x108b640eu);
  /* 108b640e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6410 jmp 0x108b6515 */
  goto L_108b6515;
L_108b6415:;
  /* 108b6415 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6417 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6419 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b641c push eax */
  push32((uint32_t)(EAX));
  /* 108b641d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b6420 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6424 push edx */
  push32((uint32_t)(EDX));
  /* 108b6425 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b6428 push eax */
  push32((uint32_t)(EAX));
  /* 108b6429 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b642b push 0 */
  push32((uint32_t)(0x0u));
  /* 108b642d call dword ptr [0x108e2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2388))), 0x108b6433u);
  /* 108b6433 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b6435 jne 0x108b644c */
  if (!C.zf) goto L_108b644c;
  /* 108b6437 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b6439 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b643c push ecx */
  push32((uint32_t)(ECX));
  /* 108b643d call 0x108b47c0 */
  push32(0x108b6442u); f_108b47c0();
  /* 108b6442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6445 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_108b644c:;
  /* 108b644c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b644f push edx */
  push32((uint32_t)(EDX));
  /* 108b6450 call dword ptr [0x108e2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2384))), 0x108b6456u);
  /* 108b6456 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b6459 jmp 0x108b6515 */
  goto L_108b6515;
L_108b645e:;
  /* 108b645e cmp dword ptr [0x108df6cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108df6cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6465 jne 0x108b6513 */
  if (!C.zf) goto L_108b6513;
  /* 108b646b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b646f jne 0x108b6487 */
  if (!C.zf) goto L_108b6487;
  /* 108b6471 call dword ptr [0x108e238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e238c))), 0x108b6477u);
  /* 108b6477 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b647a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b647e jne 0x108b6487 */
  if (!C.zf) goto L_108b6487;
  /* 108b6480 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6482 jmp 0x108b6515 */
  goto L_108b6515;
L_108b6487:;
  /* 108b6487 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b648a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108b648d:;
  /* 108b648d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b6490 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108b6493 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b6495 je 0x108b64b5 */
  if (C.zf) goto L_108b64b5;
  /* 108b6497 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b649a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b649d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b64a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b64a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108b64a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b64a8 jne 0x108b64b3 */
  if (!C.zf) goto L_108b64b3;
  /* 108b64aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b64ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b64b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_108b64b3:;
  /* 108b64b3 jmp 0x108b648d */
  goto L_108b648d;
L_108b64b5:;
  /* 108b64b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b64b8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b64bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b64be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108b64c1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 108b64c6 push 0x108dab9c */
  push32((uint32_t)(0x108dab9cu));
  /* 108b64cb push 2 */
  push32((uint32_t)(0x2u));
  /* 108b64cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b64d0 push edx */
  push32((uint32_t)(EDX));
  /* 108b64d1 call 0x108b3d30 */
  push32(0x108b64d6u); f_108b3d30();
  /* 108b64d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b64d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b64dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b64e0 jne 0x108b64f0 */
  if (!C.zf) goto L_108b64f0;
  /* 108b64e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b64e5 push eax */
  push32((uint32_t)(EAX));
  /* 108b64e6 call dword ptr [0x108e2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2358))), 0x108b64ecu);
  /* 108b64ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b64ee jmp 0x108b6515 */
  goto L_108b6515;
L_108b64f0:;
  /* 108b64f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b64f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b64f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b64f7 push edx */
  push32((uint32_t)(EDX));
  /* 108b64f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b64fb push eax */
  push32((uint32_t)(EAX));
  /* 108b64fc call 0x108ba610 */
  push32(0x108b6501u); f_108ba610();
  /* 108b6501 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6504 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b6507 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6508 call dword ptr [0x108e2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2358))), 0x108b650eu);
  /* 108b650e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b6511 jmp 0x108b6515 */
  goto L_108b6515;
L_108b6513:;
  /* 108b6513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b6515:;
  /* 108b6515 mov esp, ebp */
  ESP = (EBP);
  /* 108b6517 pop ebp */
  EBP = (pop32());
  /* 108b6518 ret  */
  ESPCHK(0x108b6300u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x108b6520 (77 bytes, 25 insns) */
void f_108b6520(void) {
  FTRACE(0x108b6520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6520 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6521 mov ebp, esp */
  EBP = (ESP);
  /* 108b6523 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6525 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108b652a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b652c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6530 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 108b6533 push eax */
  push32((uint32_t)(EAX));
  /* 108b6534 call dword ptr [0x108e2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2394))), 0x108b653au);
  /* 108b653a mov dword ptr [0x108e0f0c], eax */
  w32((uint32_t)(0x108e0f0c), (EAX));
  /* 108b653f cmp dword ptr [0x108e0f0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108e0f0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6546 jne 0x108b654c */
  if (!C.zf) goto L_108b654c;
  /* 108b6548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b654a jmp 0x108b656b */
  goto L_108b656b;
L_108b654c:;
  /* 108b654c call 0x108b7fd0 */
  push32(0x108b6551u); f_108b7fd0();
  /* 108b6551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b6553 jne 0x108b6566 */
  if (!C.zf) goto L_108b6566;
  /* 108b6555 mov ecx, dword ptr [0x108e0f0c] */
  ECX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b655b push ecx */
  push32((uint32_t)(ECX));
  /* 108b655c call dword ptr [0x108e2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2380))), 0x108b6562u);
  /* 108b6562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6564 jmp 0x108b656b */
  goto L_108b656b;
L_108b6566:;
  /* 108b6566 mov eax, 1 */
  EAX = (0x1u);
L_108b656b:;
  /* 108b656b pop ebp */
  EBP = (pop32());
  /* 108b656c ret  */
  ESPCHK(0x108b6520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006570 @ 0x108b6570 (156 bytes, 48 insns) */
void f_108b6570(void) {
  FTRACE(0x108b6570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6570 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6571 mov ebp, esp */
  EBP = (ESP);
  /* 108b6573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6576 mov eax, dword ptr [0x108e0f08] */
  EAX = (r32((uint32_t)(0x108e0f08)));
  /* 108b657b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b657e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b6585 jmp 0x108b6590 */
  goto L_108b6590;
L_108b6587:;
  /* 108b6587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b658a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b658d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b6590:;
  /* 108b6590 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6593 cmp edx, dword ptr [0x108e0f04] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108e0f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6599 jge 0x108b65e6 */
  if ((C.sf==C.of)) goto L_108b65e6;
  /* 108b659b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 108b65a0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 108b65a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b65a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 108b65ab push ecx */
  push32((uint32_t)(ECX));
  /* 108b65ac call dword ptr [0x108e239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e239c))), 0x108b65b2u);
  /* 108b65b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 108b65b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b65b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b65bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108b65bf push eax */
  push32((uint32_t)(EAX));
  /* 108b65c0 call dword ptr [0x108e239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e239c))), 0x108b65c6u);
  /* 108b65c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b65c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108b65cc push edx */
  push32((uint32_t)(EDX));
  /* 108b65cd push 0 */
  push32((uint32_t)(0x0u));
  /* 108b65cf mov eax, dword ptr [0x108e0f0c] */
  EAX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b65d4 push eax */
  push32((uint32_t)(EAX));
  /* 108b65d5 call dword ptr [0x108e2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2398))), 0x108b65dbu);
  /* 108b65db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b65de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b65e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108b65e4 jmp 0x108b6587 */
  goto L_108b6587;
L_108b65e6:;
  /* 108b65e6 mov edx, dword ptr [0x108e0f08] */
  EDX = (r32((uint32_t)(0x108e0f08)));
  /* 108b65ec push edx */
  push32((uint32_t)(EDX));
  /* 108b65ed push 0 */
  push32((uint32_t)(0x0u));
  /* 108b65ef mov eax, dword ptr [0x108e0f0c] */
  EAX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b65f4 push eax */
  push32((uint32_t)(EAX));
  /* 108b65f5 call dword ptr [0x108e2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2398))), 0x108b65fbu);
  /* 108b65fb mov ecx, dword ptr [0x108e0f0c] */
  ECX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b6601 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6602 call dword ptr [0x108e2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2380))), 0x108b6608u);
  /* 108b6608 mov esp, ebp */
  ESP = (EBP);
  /* 108b660a pop ebp */
  EBP = (pop32());
  /* 108b660b ret  */
  ESPCHK(0x108b6570u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x108b6610 (73 bytes, 19 insns) */
void f_108b6610(void) {
  FTRACE(0x108b6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6610 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6611 mov ebp, esp */
  EBP = (ESP);
  /* 108b6613 cmp dword ptr [0x108df560], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df560))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b661a je 0x108b662e */
  if (C.zf) goto L_108b662e;
  /* 108b661c cmp dword ptr [0x108df560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6623 jne 0x108b6657 */
  if (!C.zf) goto L_108b6657;
  /* 108b6625 cmp dword ptr [0x108df564], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df564))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b662c jne 0x108b6657 */
  if (!C.zf) goto L_108b6657;
L_108b662e:;
  /* 108b662e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 108b6633 call 0x108b6660 */
  push32(0x108b6638u); f_108b6660();
  /* 108b6638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b663b cmp dword ptr [0x108df6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6642 je 0x108b664a */
  if (C.zf) goto L_108b664a;
  /* 108b6644 call dword ptr [0x108df6d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df6d0))), 0x108b664au);
L_108b664a:;
  /* 108b664a push 0xff */
  push32((uint32_t)(0xffu));
  /* 108b664f call 0x108b6660 */
  push32(0x108b6654u); f_108b6660();
  /* 108b6654 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b6657:;
  /* 108b6657 pop ebp */
  EBP = (pop32());
  /* 108b6658 ret  */
  ESPCHK(0x108b6610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x108b6660 (447 bytes, 131 insns) */
void f_108b6660(void) {
  FTRACE(0x108b6660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6660 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6661 mov ebp, esp */
  EBP = (ESP);
  /* 108b6663 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6669 push ebx */
  push32((uint32_t)(EBX));
  /* 108b666a push esi */
  push32((uint32_t)(ESI));
  /* 108b666b push edi */
  push32((uint32_t)(EDI));
  /* 108b666c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108b6673 jmp 0x108b667e */
  goto L_108b667e;
L_108b6675:;
  /* 108b6675 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6678 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b667b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108b667e:;
  /* 108b667e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6682 jae 0x108b6697 */
  if (!C.cf) goto L_108b6697;
  /* 108b6684 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6687 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b668a cmp edx, dword ptr [ecx*8 + 0x108ddab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x108ddab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6691 jne 0x108b6695 */
  if (!C.zf) goto L_108b6695;
  /* 108b6693 jmp 0x108b6697 */
  goto L_108b6697;
L_108b6695:;
  /* 108b6695 jmp 0x108b6675 */
  goto L_108b6675;
L_108b6697:;
  /* 108b6697 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b669a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b669d cmp ecx, dword ptr [eax*8 + 0x108ddab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x108ddab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b66a4 jne 0x108b6818 */
  if (!C.zf) goto L_108b6818;
  /* 108b66aa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b66b1 je 0x108b66d4 */
  if (C.zf) goto L_108b66d4;
  /* 108b66b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b66b6 mov eax, dword ptr [edx*8 + 0x108ddab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x108ddab4)));
  /* 108b66bd push eax */
  push32((uint32_t)(EAX));
  /* 108b66be push 0 */
  push32((uint32_t)(0x0u));
  /* 108b66c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b66c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b66c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b66c6 call 0x108b2df0 */
  push32(0x108b66cbu); f_108b2df0();
  /* 108b66cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b66ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b66d1 jne 0x108b66d4 */
  if (!C.zf) goto L_108b66d4;
  /* 108b66d3 int3  */
  x86_unimpl("int3 @ 0x108b66d3");
L_108b66d4:;
  /* 108b66d4 cmp dword ptr [0x108df560], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df560))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b66db je 0x108b66ef */
  if (C.zf) goto L_108b66ef;
  /* 108b66dd cmp dword ptr [0x108df560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b66e4 jne 0x108b6728 */
  if (!C.zf) goto L_108b6728;
  /* 108b66e6 cmp dword ptr [0x108df564], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108df564))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b66ed jne 0x108b6728 */
  if (!C.zf) goto L_108b6728;
L_108b66ef:;
  /* 108b66ef push 0 */
  push32((uint32_t)(0x0u));
  /* 108b66f1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 108b66f4 push ecx */
  push32((uint32_t)(ECX));
  /* 108b66f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b66f8 mov eax, dword ptr [edx*8 + 0x108ddab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x108ddab4)));
  /* 108b66ff push eax */
  push32((uint32_t)(EAX));
  /* 108b6700 call 0x108b6b60 */
  push32(0x108b6705u); f_108b6b60();
  /* 108b6705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6708 push eax */
  push32((uint32_t)(EAX));
  /* 108b6709 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b670c mov edx, dword ptr [ecx*8 + 0x108ddab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x108ddab4)));
  /* 108b6713 push edx */
  push32((uint32_t)(EDX));
  /* 108b6714 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108b6716 call dword ptr [0x108e2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2318))), 0x108b671cu);
  /* 108b671c push eax */
  push32((uint32_t)(EAX));
  /* 108b671d call dword ptr [0x108e231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e231c))), 0x108b6723u);
  /* 108b6723 jmp 0x108b6818 */
  goto L_108b6818;
L_108b6728:;
  /* 108b6728 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b672f je 0x108b6818 */
  if (C.zf) goto L_108b6818;
  /* 108b6735 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 108b673a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 108b6740 push eax */
  push32((uint32_t)(EAX));
  /* 108b6741 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6743 call dword ptr [0x108e2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2334))), 0x108b6749u);
  /* 108b6749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b674b jne 0x108b6761 */
  if (!C.zf) goto L_108b6761;
  /* 108b674d push 0x108da404 */
  push32((uint32_t)(0x108da404u));
  /* 108b6752 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 108b6758 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6759 call 0x108b6ce0 */
  push32(0x108b675eu); f_108b6ce0();
  /* 108b675e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b6761:;
  /* 108b6761 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 108b6767 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108b676a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b676d push eax */
  push32((uint32_t)(EAX));
  /* 108b676e call 0x108b6b60 */
  push32(0x108b6773u); f_108b6b60();
  /* 108b6773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6776 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6779 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b677c jbe 0x108b67aa */
  if ((C.cf||C.zf)) goto L_108b67aa;
  /* 108b677e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 108b6784 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6785 call 0x108b6b60 */
  push32(0x108b678au); f_108b6b60();
  /* 108b678a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b678d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b6790 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 108b6794 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b6797 push 3 */
  push32((uint32_t)(0x3u));
  /* 108b6799 push 0x108da400 */
  push32((uint32_t)(0x108da400u));
  /* 108b679e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b67a1 push ecx */
  push32((uint32_t)(ECX));
  /* 108b67a2 call 0x108b7550 */
  push32(0x108b67a7u); f_108b7550();
  /* 108b67a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b67aa:;
  /* 108b67aa push 0x108dae58 */
  push32((uint32_t)(0x108dae58u));
  /* 108b67af lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 108b67b5 push edx */
  push32((uint32_t)(EDX));
  /* 108b67b6 call 0x108b6ce0 */
  push32(0x108b67bbu); f_108b6ce0();
  /* 108b67bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b67be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b67c1 push eax */
  push32((uint32_t)(EAX));
  /* 108b67c2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 108b67c8 push ecx */
  push32((uint32_t)(ECX));
  /* 108b67c9 call 0x108b6cf0 */
  push32(0x108b67ceu); f_108b6cf0();
  /* 108b67ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b67d1 push 0x108da378 */
  push32((uint32_t)(0x108da378u));
  /* 108b67d6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 108b67dc push edx */
  push32((uint32_t)(EDX));
  /* 108b67dd call 0x108b6cf0 */
  push32(0x108b67e2u); f_108b6cf0();
  /* 108b67e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b67e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b67e8 mov ecx, dword ptr [eax*8 + 0x108ddab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x108ddab4)));
  /* 108b67ef push ecx */
  push32((uint32_t)(ECX));
  /* 108b67f0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 108b67f6 push edx */
  push32((uint32_t)(EDX));
  /* 108b67f7 call 0x108b6cf0 */
  push32(0x108b67fcu); f_108b6cf0();
  /* 108b67fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b67ff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 108b6804 push 0x108dae30 */
  push32((uint32_t)(0x108dae30u));
  /* 108b6809 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 108b680f push eax */
  push32((uint32_t)(EAX));
  /* 108b6810 call 0x108b7490 */
  push32(0x108b6815u); f_108b7490();
  /* 108b6815 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b6818:;
  /* 108b6818 pop edi */
  EDI = (pop32());
  /* 108b6819 pop esi */
  ESI = (pop32());
  /* 108b681a pop ebx */
  EBX = (pop32());
  /* 108b681b mov esp, ebp */
  ESP = (EBP);
  /* 108b681d pop ebp */
  EBP = (pop32());
  /* 108b681e ret  */
  ESPCHK(0x108b6660u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x108b6820 (80 bytes, 27 insns) */
void f_108b6820(void) {
  FTRACE(0x108b6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6820 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6821 mov ebp, esp */
  EBP = (ESP);
  /* 108b6823 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6824 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b682b jmp 0x108b6836 */
  goto L_108b6836;
L_108b682d:;
  /* 108b682d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6830 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6833 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b6836:;
  /* 108b6836 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b683a jae 0x108b684f */
  if (!C.cf) goto L_108b684f;
  /* 108b683c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b683f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6842 cmp edx, dword ptr [ecx*8 + 0x108ddab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x108ddab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6849 jne 0x108b684d */
  if (!C.zf) goto L_108b684d;
  /* 108b684b jmp 0x108b684f */
  goto L_108b684f;
L_108b684d:;
  /* 108b684d jmp 0x108b682d */
  goto L_108b682d;
L_108b684f:;
  /* 108b684f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6855 cmp ecx, dword ptr [eax*8 + 0x108ddab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x108ddab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b685c jne 0x108b686a */
  if (!C.zf) goto L_108b686a;
  /* 108b685e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6861 mov eax, dword ptr [edx*8 + 0x108ddab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x108ddab4)));
  /* 108b6868 jmp 0x108b686c */
  goto L_108b686c;
L_108b686a:;
  /* 108b686a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b686c:;
  /* 108b686c mov esp, ebp */
  ESP = (EBP);
  /* 108b686e pop ebp */
  EBP = (pop32());
  /* 108b686f ret  */
  ESPCHK(0x108b6820u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x108b6870 (66 bytes, 28 insns) */
void f_108b6870(void) {
  FTRACE(0x108b6870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6870 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6871 mov ebp, esp */
  EBP = (ESP);
  /* 108b6873 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6877 jne 0x108b6897 */
  if (!C.zf) goto L_108b6897;
  /* 108b6879 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b687d jge 0x108b6897 */
  if ((C.sf==C.of)) goto L_108b6897;
  /* 108b687f push 1 */
  push32((uint32_t)(0x1u));
  /* 108b6881 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6884 push eax */
  push32((uint32_t)(EAX));
  /* 108b6885 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6888 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b688c push edx */
  push32((uint32_t)(EDX));
  /* 108b688d call 0x108b68c0 */
  push32(0x108b6892u); f_108b68c0();
  /* 108b6892 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6895 jmp 0x108b68ad */
  goto L_108b68ad;
L_108b6897:;
  /* 108b6897 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6899 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b689c push eax */
  push32((uint32_t)(EAX));
  /* 108b689d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b68a0 push ecx */
  push32((uint32_t)(ECX));
  /* 108b68a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b68a4 push edx */
  push32((uint32_t)(EDX));
  /* 108b68a5 call 0x108b68c0 */
  push32(0x108b68aau); f_108b68c0();
  /* 108b68aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b68ad:;
  /* 108b68ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b68b0 pop ebp */
  EBP = (pop32());
  /* 108b68b1 ret  */
  ESPCHK(0x108b6870u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x108b68c0 (194 bytes, 71 insns) */
void f_108b68c0(void) {
  FTRACE(0x108b68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b68c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b68c1 mov ebp, esp */
  EBP = (ESP);
  /* 108b68c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b68c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b68c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b68cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b68d0 je 0x108b68e9 */
  if (C.zf) goto L_108b68e9;
  /* 108b68d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b68d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 108b68d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b68db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b68de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b68e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b68e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108b68e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108b68e9:;
  /* 108b68e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b68ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108b68ef:;
  /* 108b68ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b68f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b68f4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108b68f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108b68fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b68fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b68ff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108b6902 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108b6905 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6909 jbe 0x108b6921 */
  if ((C.cf||C.zf)) goto L_108b6921;
  /* 108b690b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b690e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6914 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b6916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6919 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b691c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b691f jmp 0x108b6935 */
  goto L_108b6935;
L_108b6921:;
  /* 108b6921 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b6924 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b692a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b692c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b692f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6932 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b6935:;
  /* 108b6935 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6939 ja 0x108b68ef */
  if ((!C.cf&&!C.zf)) goto L_108b68ef;
  /* 108b693b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b693e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108b6941 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6944 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6947 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b694a:;
  /* 108b694a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b694d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b694f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 108b6952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6955 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6958 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b695a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b695c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b695f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 108b6962 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108b6964 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6967 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b696a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b696d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6970 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6973 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b6976 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6979 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b697c jb 0x108b694a */
  if (C.cf) goto L_108b694a;
  /* 108b697e mov esp, ebp */
  ESP = (EBP);
  /* 108b6980 pop ebp */
  EBP = (pop32());
  /* 108b6981 ret  */
  ESPCHK(0x108b68c0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x108b6990 (63 bytes, 24 insns) */
void f_108b6990(void) {
  FTRACE(0x108b6990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6990 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6991 mov ebp, esp */
  EBP = (ESP);
  /* 108b6993 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6994 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6998 jne 0x108b69a9 */
  if (!C.zf) goto L_108b69a9;
  /* 108b699a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b699e jge 0x108b69a9 */
  if ((C.sf==C.of)) goto L_108b69a9;
  /* 108b69a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108b69a7 jmp 0x108b69b0 */
  goto L_108b69b0;
L_108b69a9:;
  /* 108b69a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108b69b0:;
  /* 108b69b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b69b3 push eax */
  push32((uint32_t)(EAX));
  /* 108b69b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b69b7 push ecx */
  push32((uint32_t)(ECX));
  /* 108b69b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b69bb push edx */
  push32((uint32_t)(EDX));
  /* 108b69bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b69bf push eax */
  push32((uint32_t)(EAX));
  /* 108b69c0 call 0x108b68c0 */
  push32(0x108b69c5u); f_108b68c0();
  /* 108b69c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b69c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b69cb mov esp, ebp */
  ESP = (EBP);
  /* 108b69cd pop ebp */
  EBP = (pop32());
  /* 108b69ce ret  */
  ESPCHK(0x108b6990u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x108b69d0 (30 bytes, 14 insns) */
void f_108b69d0(void) {
  FTRACE(0x108b69d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b69d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b69d1 mov ebp, esp */
  EBP = (ESP);
  /* 108b69d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b69d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b69d8 push eax */
  push32((uint32_t)(EAX));
  /* 108b69d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b69dc push ecx */
  push32((uint32_t)(ECX));
  /* 108b69dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b69e0 push edx */
  push32((uint32_t)(EDX));
  /* 108b69e1 call 0x108b68c0 */
  push32(0x108b69e6u); f_108b68c0();
  /* 108b69e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b69e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b69ec pop ebp */
  EBP = (pop32());
  /* 108b69ed ret  */
  ESPCHK(0x108b69d0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x108b69f0 (72 bytes, 28 insns) */
void f_108b69f0(void) {
  FTRACE(0x108b69f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b69f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b69f1 mov ebp, esp */
  EBP = (ESP);
  /* 108b69f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b69f4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b69f8 jne 0x108b6a11 */
  if (!C.zf) goto L_108b6a11;
  /* 108b69fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b69fe jg 0x108b6a11 */
  if ((!C.zf&&C.sf==C.of)) goto L_108b6a11;
  /* 108b6a00 jl 0x108b6a08 */
  if ((C.sf!=C.of)) goto L_108b6a08;
  /* 108b6a02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6a06 jae 0x108b6a11 */
  if (!C.cf) goto L_108b6a11;
L_108b6a08:;
  /* 108b6a08 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108b6a0f jmp 0x108b6a18 */
  goto L_108b6a18;
L_108b6a11:;
  /* 108b6a11 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108b6a18:;
  /* 108b6a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6a1b push eax */
  push32((uint32_t)(EAX));
  /* 108b6a1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b6a1f push ecx */
  push32((uint32_t)(ECX));
  /* 108b6a20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6a23 push edx */
  push32((uint32_t)(EDX));
  /* 108b6a24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6a27 push eax */
  push32((uint32_t)(EAX));
  /* 108b6a28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6a2b push ecx */
  push32((uint32_t)(ECX));
  /* 108b6a2c call 0x108b6a40 */
  push32(0x108b6a31u); f_108b6a40();
  /* 108b6a31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6a34 mov esp, ebp */
  ESP = (EBP);
  /* 108b6a36 pop ebp */
  EBP = (pop32());
  /* 108b6a37 ret  */
  ESPCHK(0x108b69f0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x108b6a40 (242 bytes, 91 insns) */
void f_108b6a40(void) {
  FTRACE(0x108b6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6a41 mov ebp, esp */
  EBP = (ESP);
  /* 108b6a43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6a46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6a49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b6a4c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6a50 je 0x108b6a74 */
  if (C.zf) goto L_108b6a74;
  /* 108b6a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6a55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 108b6a58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6a5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6a5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b6a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6a64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108b6a66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6a69 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6a6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108b6a6e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108b6a71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108b6a74:;
  /* 108b6a74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6a77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108b6a7a:;
  /* 108b6a7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b6a7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b6a7f push ecx */
  push32((uint32_t)(ECX));
  /* 108b6a80 push eax */
  push32((uint32_t)(EAX));
  /* 108b6a81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6a84 push edx */
  push32((uint32_t)(EDX));
  /* 108b6a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6a88 push eax */
  push32((uint32_t)(EAX));
  /* 108b6a89 call 0x108ba9c0 */
  push32(0x108b6a8eu); f_108ba9c0();
  /* 108b6a8e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b6a91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b6a94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b6a96 push edx */
  push32((uint32_t)(EDX));
  /* 108b6a97 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6a98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6a9b push eax */
  push32((uint32_t)(EAX));
  /* 108b6a9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6a9f push ecx */
  push32((uint32_t)(ECX));
  /* 108b6aa0 call 0x108ba950 */
  push32(0x108b6aa5u); f_108ba950();
  /* 108b6aa5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108b6aa8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 108b6aab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6aaf jbe 0x108b6ac7 */
  if ((C.cf||C.zf)) goto L_108b6ac7;
  /* 108b6ab1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b6ab4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6ab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6aba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b6abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6abf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6ac2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b6ac5 jmp 0x108b6adb */
  goto L_108b6adb;
L_108b6ac7:;
  /* 108b6ac7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b6aca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6ad0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b6ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6ad5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6ad8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108b6adb:;
  /* 108b6adb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6adf ja 0x108b6a7a */
  if ((!C.cf&&!C.zf)) goto L_108b6a7a;
  /* 108b6ae1 jb 0x108b6ae9 */
  if (C.cf) goto L_108b6ae9;
  /* 108b6ae3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6ae7 ja 0x108b6a7a */
  if ((!C.cf&&!C.zf)) goto L_108b6a7a;
L_108b6ae9:;
  /* 108b6ae9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6aec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108b6aef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6af2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6af5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b6af8:;
  /* 108b6af8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6afb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b6afd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 108b6b00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6b03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6b06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b6b08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108b6b0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6b0d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 108b6b10 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108b6b12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b6b15 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6b18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b6b1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6b1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6b21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b6b24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b6b27 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6b2a jb 0x108b6af8 */
  if (C.cf) goto L_108b6af8;
  /* 108b6b2c mov esp, ebp */
  ESP = (EBP);
  /* 108b6b2e pop ebp */
  EBP = (pop32());
  /* 108b6b2f ret 0x14 */
  ESPCHK(0x108b6a40u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x108b6b40 (31 bytes, 15 insns) */
void f_108b6b40(void) {
  FTRACE(0x108b6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6b40 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6b41 mov ebp, esp */
  EBP = (ESP);
  /* 108b6b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6b45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b6b48 push eax */
  push32((uint32_t)(EAX));
  /* 108b6b49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6b4c push ecx */
  push32((uint32_t)(ECX));
  /* 108b6b4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6b50 push edx */
  push32((uint32_t)(EDX));
  /* 108b6b51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6b54 push eax */
  push32((uint32_t)(EAX));
  /* 108b6b55 call 0x108b6a40 */
  push32(0x108b6b5au); f_108b6a40();
  /* 108b6b5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6b5d pop ebp */
  EBP = (pop32());
  /* 108b6b5e ret  */
  ESPCHK(0x108b6b40u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x108b6b60 (123 bytes, 44 insns) */
void f_108b6b60(void) {
  FTRACE(0x108b6b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6b60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108b6b64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108b6b6a je 0x108b6b80 */
  if (C.zf) goto L_108b6b80;
L_108b6b6c:;
  /* 108b6b6c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 108b6b6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108b6b6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108b6b71 je 0x108b6bb3 */
  if (C.zf) goto L_108b6bb3;
  /* 108b6b73 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108b6b79 jne 0x108b6b6c */
  if (!C.zf) goto L_108b6b6c;
  /* 108b6b7b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108b6b80:;
  /* 108b6b80 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108b6b82 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108b6b87 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6b89 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b6b8c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6b8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6b91 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108b6b96 je 0x108b6b80 */
  if (C.zf) goto L_108b6b80;
  /* 108b6b98 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 108b6b9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108b6b9d je 0x108b6bd1 */
  if (C.zf) goto L_108b6bd1;
  /* 108b6b9f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 108b6ba1 je 0x108b6bc7 */
  if (C.zf) goto L_108b6bc7;
  /* 108b6ba3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 108b6ba8 je 0x108b6bbd */
  if (C.zf) goto L_108b6bbd;
  /* 108b6baa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 108b6baf je 0x108b6bb3 */
  if (C.zf) goto L_108b6bb3;
  /* 108b6bb1 jmp 0x108b6b80 */
  goto L_108b6b80;
L_108b6bb3:;
  /* 108b6bb3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 108b6bb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108b6bba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6bbc ret  */
  ESPCHK(0x108b6b60u, _esp0);
  ESP += 4; return;
L_108b6bbd:;
  /* 108b6bbd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 108b6bc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108b6bc4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6bc6 ret  */
  ESPCHK(0x108b6b60u, _esp0);
  ESP += 4; return;
L_108b6bc7:;
  /* 108b6bc7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 108b6bca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108b6bce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6bd0 ret  */
  ESPCHK(0x108b6b60u, _esp0);
  ESP += 4; return;
L_108b6bd1:;
  /* 108b6bd1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 108b6bd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108b6bd8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6bda ret  */
  ESPCHK(0x108b6b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x108b6be0 (249 bytes, 93 insns) */
void f_108b6be0(void) {
  FTRACE(0x108b6be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6be0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6be1 mov ebp, esp */
  EBP = (ESP);
  /* 108b6be3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6be6 push ebx */
  push32((uint32_t)(EBX));
  /* 108b6be7 push esi */
  push32((uint32_t)(ESI));
  /* 108b6be8 push edi */
  push32((uint32_t)(EDI));
  /* 108b6be9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 108b6bec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108b6bef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 108b6bf2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_108b6bf5:;
  /* 108b6bf5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6bf9 jne 0x108b6c19 */
  if (!C.zf) goto L_108b6c19;
  /* 108b6bfb push 0x108dae90 */
  push32((uint32_t)(0x108dae90u));
  /* 108b6c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6c02 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 108b6c04 push 0x108dae84 */
  push32((uint32_t)(0x108dae84u));
  /* 108b6c09 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b6c0b call 0x108b2df0 */
  push32(0x108b6c10u); f_108b2df0();
  /* 108b6c10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6c13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6c16 jne 0x108b6c19 */
  if (!C.zf) goto L_108b6c19;
  /* 108b6c18 int3  */
  x86_unimpl("int3 @ 0x108b6c18");
L_108b6c19:;
  /* 108b6c19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b6c1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b6c1d jne 0x108b6bf5 */
  if (!C.zf) goto L_108b6bf5;
L_108b6c1f:;
  /* 108b6c1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6c23 jne 0x108b6c43 */
  if (!C.zf) goto L_108b6c43;
  /* 108b6c25 push 0x108dae74 */
  push32((uint32_t)(0x108dae74u));
  /* 108b6c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6c2c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 108b6c2e push 0x108dae84 */
  push32((uint32_t)(0x108dae84u));
  /* 108b6c33 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b6c35 call 0x108b2df0 */
  push32(0x108b6c3au); f_108b2df0();
  /* 108b6c3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6c3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6c40 jne 0x108b6c43 */
  if (!C.zf) goto L_108b6c43;
  /* 108b6c42 int3  */
  x86_unimpl("int3 @ 0x108b6c42");
L_108b6c43:;
  /* 108b6c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b6c47 jne 0x108b6c1f */
  if (!C.zf) goto L_108b6c1f;
  /* 108b6c49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c4c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 108b6c53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6c59 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108b6c5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6c62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108b6c64 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6c6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108b6c6d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108b6c70 push edx */
  push32((uint32_t)(EDX));
  /* 108b6c71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6c74 push eax */
  push32((uint32_t)(EAX));
  /* 108b6c75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c78 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6c79 call 0x108bacc0 */
  push32(0x108b6c7eu); f_108bacc0();
  /* 108b6c7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6c81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108b6c84 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c87 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b6c8a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6c8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c90 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 108b6c93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c96 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6c9a jl 0x108b6cbe */
  if ((C.sf!=C.of)) goto L_108b6cbe;
  /* 108b6c9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6c9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b6ca1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 108b6ca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b6ca6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b6cac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 108b6caf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6cb2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b6cb4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6cb7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6cba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108b6cbc jmp 0x108b6ccf */
  goto L_108b6ccf;
L_108b6cbe:;
  /* 108b6cbe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6cc1 push eax */
  push32((uint32_t)(EAX));
  /* 108b6cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6cc4 call 0x108baa40 */
  push32(0x108b6cc9u); f_108baa40();
  /* 108b6cc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6ccc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_108b6ccf:;
  /* 108b6ccf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b6cd2 pop edi */
  EDI = (pop32());
  /* 108b6cd3 pop esi */
  ESI = (pop32());
  /* 108b6cd4 pop ebx */
  EBX = (pop32());
  /* 108b6cd5 mov esp, ebp */
  ESP = (EBP);
  /* 108b6cd7 pop ebp */
  EBP = (pop32());
  /* 108b6cd8 ret  */
  ESPCHK(0x108b6be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x108b6ce0 (7 bytes, 3 insns) */
void f_108b6ce0(void) {
  FTRACE(0x108b6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6ce0 push edi */
  push32((uint32_t)(EDI));
  /* 108b6ce1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 108b6ce5 jmp 0x108b6d51 */
  jmp_ind(0x108b6d51u); return;
}

/* FUN_10006cf0 @ 0x108b6cf0 (224 bytes, 84 insns) */
void f_108b6cf0(void) {
  FTRACE(0x108b6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6cf0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108b6cf4 push edi */
  push32((uint32_t)(EDI));
  /* 108b6cf5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108b6cfb je 0x108b6d0c */
  if (C.zf) goto L_108b6d0c;
L_108b6cfd:;
  /* 108b6cfd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 108b6cff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108b6d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108b6d02 je 0x108b6d3f */
  if (C.zf) goto L_108b6d3f;
  /* 108b6d04 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108b6d0a jne 0x108b6cfd */
  if (!C.zf) goto L_108b6cfd;
L_108b6d0c:;
  /* 108b6d0c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108b6d0e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108b6d13 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6d15 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b6d18 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6d1a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6d1d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108b6d22 je 0x108b6d0c */
  if (C.zf) goto L_108b6d0c;
  /* 108b6d24 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 108b6d27 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108b6d29 je 0x108b6d4e */
  if (C.zf) goto L_108b6d4e;
  /* 108b6d2b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 108b6d2d je 0x108b6d49 */
  if (C.zf) goto L_108b6d49;
  /* 108b6d2f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 108b6d34 je 0x108b6d44 */
  if (C.zf) goto L_108b6d44;
  /* 108b6d36 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 108b6d3b je 0x108b6d3f */
  if (C.zf) goto L_108b6d3f;
  /* 108b6d3d jmp 0x108b6d0c */
  goto L_108b6d0c;
L_108b6d3f:;
  /* 108b6d3f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 108b6d42 jmp 0x108b6d51 */
  goto L_108b6d51;
L_108b6d44:;
  /* 108b6d44 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 108b6d47 jmp 0x108b6d51 */
  goto L_108b6d51;
L_108b6d49:;
  /* 108b6d49 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 108b6d4c jmp 0x108b6d51 */
  goto L_108b6d51;
L_108b6d4e:;
  /* 108b6d4e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_108b6d51:;
  /* 108b6d51 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 108b6d55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108b6d5b je 0x108b6d76 */
  if (C.zf) goto L_108b6d76;
L_108b6d5d:;
  /* 108b6d5d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108b6d5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108b6d60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108b6d62 je 0x108b6dc8 */
  if (C.zf) goto L_108b6dc8;
  /* 108b6d64 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 108b6d66 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108b6d67 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108b6d6d jne 0x108b6d5d */
  if (!C.zf) goto L_108b6d5d;
  /* 108b6d6f jmp 0x108b6d76 */
  goto L_108b6d76;
L_108b6d71:;
  /* 108b6d71 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108b6d73 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108b6d76:;
  /* 108b6d76 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108b6d7b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108b6d7d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6d7f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b6d82 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b6d84 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b6d86 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6d89 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108b6d8e je 0x108b6d71 */
  if (C.zf) goto L_108b6d71;
  /* 108b6d90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108b6d92 je 0x108b6dc8 */
  if (C.zf) goto L_108b6dc8;
  /* 108b6d94 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 108b6d96 je 0x108b6dbf */
  if (C.zf) goto L_108b6dbf;
  /* 108b6d98 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 108b6d9e je 0x108b6db2 */
  if (C.zf) goto L_108b6db2;
  /* 108b6da0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 108b6da6 je 0x108b6daa */
  if (C.zf) goto L_108b6daa;
  /* 108b6da8 jmp 0x108b6d71 */
  goto L_108b6d71;
L_108b6daa:;
  /* 108b6daa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108b6dac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108b6db0 pop edi */
  EDI = (pop32());
  /* 108b6db1 ret  */
  ESPCHK(0x108b6cf0u, _esp0);
  ESP += 4; return;
L_108b6db2:;
  /* 108b6db2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 108b6db5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108b6db9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 108b6dbd pop edi */
  EDI = (pop32());
  /* 108b6dbe ret  */
  ESPCHK(0x108b6cf0u, _esp0);
  ESP += 4; return;
L_108b6dbf:;
  /* 108b6dbf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 108b6dc2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108b6dc6 pop edi */
  EDI = (pop32());
  /* 108b6dc7 ret  */
  ESPCHK(0x108b6cf0u, _esp0);
  ESP += 4; return;
L_108b6dc8:;
  /* 108b6dc8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 108b6dca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108b6dce pop edi */
  EDI = (pop32());
  /* 108b6dcf ret  */
  ESPCHK(0x108b6cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x108b6dd0 (243 bytes, 91 insns) */
void f_108b6dd0(void) {
  FTRACE(0x108b6dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6dd1 mov ebp, esp */
  EBP = (ESP);
  /* 108b6dd3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6dd6 push ebx */
  push32((uint32_t)(EBX));
  /* 108b6dd7 push esi */
  push32((uint32_t)(ESI));
  /* 108b6dd8 push edi */
  push32((uint32_t)(EDI));
  /* 108b6dd9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 108b6ddc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_108b6ddf:;
  /* 108b6ddf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6de3 jne 0x108b6e03 */
  if (!C.zf) goto L_108b6e03;
  /* 108b6de5 push 0x108dae90 */
  push32((uint32_t)(0x108dae90u));
  /* 108b6dea push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6dec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 108b6dee push 0x108daea0 */
  push32((uint32_t)(0x108daea0u));
  /* 108b6df3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b6df5 call 0x108b2df0 */
  push32(0x108b6dfau); f_108b2df0();
  /* 108b6dfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6dfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6e00 jne 0x108b6e03 */
  if (!C.zf) goto L_108b6e03;
  /* 108b6e02 int3  */
  x86_unimpl("int3 @ 0x108b6e02");
L_108b6e03:;
  /* 108b6e03 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b6e05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b6e07 jne 0x108b6ddf */
  if (!C.zf) goto L_108b6ddf;
L_108b6e09:;
  /* 108b6e09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6e0d jne 0x108b6e2d */
  if (!C.zf) goto L_108b6e2d;
  /* 108b6e0f push 0x108dae74 */
  push32((uint32_t)(0x108dae74u));
  /* 108b6e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6e16 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 108b6e18 push 0x108daea0 */
  push32((uint32_t)(0x108daea0u));
  /* 108b6e1d push 2 */
  push32((uint32_t)(0x2u));
  /* 108b6e1f call 0x108b2df0 */
  push32(0x108b6e24u); f_108b2df0();
  /* 108b6e24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6e27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6e2a jne 0x108b6e2d */
  if (!C.zf) goto L_108b6e2d;
  /* 108b6e2c int3  */
  x86_unimpl("int3 @ 0x108b6e2c");
L_108b6e2d:;
  /* 108b6e2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b6e2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b6e31 jne 0x108b6e09 */
  if (!C.zf) goto L_108b6e09;
  /* 108b6e33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e36 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 108b6e3d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6e43 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108b6e46 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6e4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108b6e4e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6e54 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108b6e57 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108b6e5a push ecx */
  push32((uint32_t)(ECX));
  /* 108b6e5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b6e5e push edx */
  push32((uint32_t)(EDX));
  /* 108b6e5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e62 push eax */
  push32((uint32_t)(EAX));
  /* 108b6e63 call 0x108bacc0 */
  push32(0x108b6e68u); f_108bacc0();
  /* 108b6e68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6e6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108b6e6e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e71 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b6e74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6e77 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108b6e7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e80 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6e84 jl 0x108b6ea8 */
  if ((C.sf!=C.of)) goto L_108b6ea8;
  /* 108b6e86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e89 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b6e8b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108b6e8e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108b6e90 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108b6e96 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 108b6e99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6e9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b6e9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6ea1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6ea4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108b6ea6 jmp 0x108b6eb9 */
  goto L_108b6eb9;
L_108b6ea8:;
  /* 108b6ea8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108b6eab push edx */
  push32((uint32_t)(EDX));
  /* 108b6eac push 0 */
  push32((uint32_t)(0x0u));
  /* 108b6eae call 0x108baa40 */
  push32(0x108b6eb3u); f_108baa40();
  /* 108b6eb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6eb6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_108b6eb9:;
  /* 108b6eb9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108b6ebc pop edi */
  EDI = (pop32());
  /* 108b6ebd pop esi */
  ESI = (pop32());
  /* 108b6ebe pop ebx */
  EBX = (pop32());
  /* 108b6ebf mov esp, ebp */
  ESP = (EBP);
  /* 108b6ec1 pop ebp */
  EBP = (pop32());
  /* 108b6ec2 ret  */
  ESPCHK(0x108b6dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ed0 @ 0x108b6ed0 (47 bytes, 17 insns) */
void f_108b6ed0(void) {
  FTRACE(0x108b6ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 108b6ed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6ed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 108b6eda jb 0x108b6ef0 */
  if (C.cf) goto L_108b6ef0;
L_108b6edc:;
  /* 108b6edc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6ee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6ee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 108b6ee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6eee jae 0x108b6edc */
  if (!C.cf) goto L_108b6edc;
L_108b6ef0:;
  /* 108b6ef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6ef2 mov eax, esp */
  EAX = (ESP);
  /* 108b6ef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 108b6ef6 mov esp, ecx */
  ESP = (ECX);
  /* 108b6ef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b6efa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b6efd push eax */
  push32((uint32_t)(EAX));
  /* 108b6efe ret  */
  ESPCHK(0x108b6ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f00 @ 0x108b6f00 (507 bytes, 151 insns) [1 switch table(s)] */
void f_108b6f00(void) {
  FTRACE(0x108b6f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b6f00 push ebp */
  push32((uint32_t)(EBP));
  /* 108b6f01 mov ebp, esp */
  EBP = (ESP);
  /* 108b6f03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6f06 push esi */
  push32((uint32_t)(ESI));
  /* 108b6f07 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f0b je 0x108b6f13 */
  if (C.zf) goto L_108b6f13;
  /* 108b6f0d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f11 jne 0x108b6f18 */
  if (!C.zf) goto L_108b6f18;
L_108b6f13:;
  /* 108b6f13 jmp 0x108b70e8 */
  goto L_108b70e8;
L_108b6f18:;
  /* 108b6f18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f1c je 0x108b6f34 */
  if (C.zf) goto L_108b6f34;
  /* 108b6f1e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f22 je 0x108b6f34 */
  if (C.zf) goto L_108b6f34;
  /* 108b6f24 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f28 je 0x108b6f34 */
  if (C.zf) goto L_108b6f34;
  /* 108b6f2a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f2e jne 0x108b7011 */
  if (!C.zf) goto L_108b7011;
L_108b6f34:;
  /* 108b6f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b6f36 call 0x108b7730 */
  push32(0x108b6f3bu); f_108b7730();
  /* 108b6f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6f3e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f42 je 0x108b6f4a */
  if (C.zf) goto L_108b6f4a;
  /* 108b6f44 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f48 jne 0x108b6f8f */
  if (!C.zf) goto L_108b6f8f;
L_108b6f4a:;
  /* 108b6f4a cmp dword ptr [0x108df6e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df6e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f51 jne 0x108b6f8f */
  if (!C.zf) goto L_108b6f8f;
  /* 108b6f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b6f55 push 0x108b7130 */
  push32((uint32_t)(0x108b7130u));
  /* 108b6f5a call dword ptr [0x108e23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e23a0))), 0x108b6f60u);
  /* 108b6f60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6f63 jne 0x108b6f71 */
  if (!C.zf) goto L_108b6f71;
  /* 108b6f65 mov dword ptr [0x108df6e4], 1 */
  w32((uint32_t)(0x108df6e4), (0x1u));
  /* 108b6f6f jmp 0x108b6f8f */
  goto L_108b6f8f;
L_108b6f71:;
  /* 108b6f71 call dword ptr [0x108e228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e228c))), 0x108b6f77u);
  /* 108b6f77 mov esi, eax */
  ESI = (EAX);
  /* 108b6f79 call 0x108bbc10 */
  push32(0x108b6f7eu); f_108bbc10();
  /* 108b6f7e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 108b6f80 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b6f82 call 0x108b77d0 */
  push32(0x108b6f87u); f_108b77d0();
  /* 108b6f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b6f8a jmp 0x108b70e8 */
  goto L_108b70e8;
L_108b6f8f:;
  /* 108b6f8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b6f92 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b6f95 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b6f98 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b6f9b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108b6f9e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b6fa2 ja 0x108b7002 */
  if ((!C.cf&&!C.zf)) goto L_108b7002;
  /* 108b6fa4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b6fa7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b6fa9 mov dl, byte ptr [eax + 0x108b710f] */
  DL = (r8((uint32_t)(EAX + 0x108b710f)));
  /* 108b6faf jmp dword ptr [edx*4 + 0x108b70fb] */
  switch (EDX) {
    case 0: goto L_108b6fb6;
    case 1: goto L_108b6ff0;
    case 2: goto L_108b6fca;
    case 3: goto L_108b6fdd;
    case 4: goto L_108b7002;
    default: x86_unimpl("switch@0x108b6faf out of table"); return;
  }
L_108b6fb6:;
  /* 108b6fb6 mov ecx, dword ptr [0x108df6d4] */
  ECX = (r32((uint32_t)(0x108df6d4)));
  /* 108b6fbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108b6fbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6fc2 mov dword ptr [0x108df6d4], edx */
  w32((uint32_t)(0x108df6d4), (EDX));
  /* 108b6fc8 jmp 0x108b7002 */
  goto L_108b7002;
L_108b6fca:;
  /* 108b6fca mov eax, dword ptr [0x108df6d8] */
  EAX = (r32((uint32_t)(0x108df6d8)));
  /* 108b6fcf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b6fd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6fd5 mov dword ptr [0x108df6d8], ecx */
  w32((uint32_t)(0x108df6d8), (ECX));
  /* 108b6fdb jmp 0x108b7002 */
  goto L_108b7002;
L_108b6fdd:;
  /* 108b6fdd mov edx, dword ptr [0x108df6dc] */
  EDX = (r32((uint32_t)(0x108df6dc)));
  /* 108b6fe3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108b6fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6fe9 mov dword ptr [0x108df6dc], eax */
  w32((uint32_t)(0x108df6dc), (EAX));
  /* 108b6fee jmp 0x108b7002 */
  goto L_108b7002;
L_108b6ff0:;
  /* 108b6ff0 mov ecx, dword ptr [0x108df6e0] */
  ECX = (r32((uint32_t)(0x108df6e0)));
  /* 108b6ff6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108b6ff9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b6ffc mov dword ptr [0x108df6e0], edx */
  w32((uint32_t)(0x108df6e0), (EDX));
L_108b7002:;
  /* 108b7002 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b7004 call 0x108b77d0 */
  push32(0x108b7009u); f_108b77d0();
  /* 108b7009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b700c jmp 0x108b70e3 */
  goto L_108b70e3;
L_108b7011:;
  /* 108b7011 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7015 je 0x108b7028 */
  if (C.zf) goto L_108b7028;
  /* 108b7017 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b701b je 0x108b7028 */
  if (C.zf) goto L_108b7028;
  /* 108b701d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7021 je 0x108b7028 */
  if (C.zf) goto L_108b7028;
  /* 108b7023 jmp 0x108b70e8 */
  goto L_108b70e8;
L_108b7028:;
  /* 108b7028 call 0x108b3770 */
  push32(0x108b702du); f_108b3770();
  /* 108b702d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b7030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7033 cmp dword ptr [eax + 0x50], 0x108ddc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x108ddc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b703a jne 0x108b7085 */
  if (!C.zf) goto L_108b7085;
  /* 108b703c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 108b7041 push 0x108daeac */
  push32((uint32_t)(0x108daeacu));
  /* 108b7046 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b7048 mov ecx, dword ptr [0x108ddc80] */
  ECX = (r32((uint32_t)(0x108ddc80)));
  /* 108b704e push ecx */
  push32((uint32_t)(ECX));
  /* 108b704f call 0x108b3d30 */
  push32(0x108b7054u); f_108b3d30();
  /* 108b7054 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7057 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b705a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 108b705d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7060 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7064 je 0x108b7083 */
  if (C.zf) goto L_108b7083;
  /* 108b7066 mov ecx, dword ptr [0x108ddc80] */
  ECX = (r32((uint32_t)(0x108ddc80)));
  /* 108b706c push ecx */
  push32((uint32_t)(ECX));
  /* 108b706d push 0x108ddc00 */
  push32((uint32_t)(0x108ddc00u));
  /* 108b7072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7075 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 108b7078 push eax */
  push32((uint32_t)(EAX));
  /* 108b7079 call 0x108ba610 */
  push32(0x108b707eu); f_108ba610();
  /* 108b707e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7081 jmp 0x108b7085 */
  goto L_108b7085;
L_108b7083:;
  /* 108b7083 jmp 0x108b70e8 */
  goto L_108b70e8;
L_108b7085:;
  /* 108b7085 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7088 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108b708b push edx */
  push32((uint32_t)(EDX));
  /* 108b708c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b708f push eax */
  push32((uint32_t)(EAX));
  /* 108b7090 call 0x108b7410 */
  push32(0x108b7095u); f_108b7410();
  /* 108b7095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7098 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b709b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b709f jne 0x108b70a3 */
  if (!C.zf) goto L_108b70a3;
  /* 108b70a1 jmp 0x108b70e8 */
  goto L_108b70e8;
L_108b70a3:;
  /* 108b70a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b70a6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108b70a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_108b70ac:;
  /* 108b70ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b70af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b70b2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b70b5 jne 0x108b70e3 */
  if (!C.zf) goto L_108b70e3;
  /* 108b70b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b70ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b70bd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108b70c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b70c3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b70c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108b70c9 mov edx, dword ptr [0x108ddc84] */
  EDX = (r32((uint32_t)(0x108ddc84)));
  /* 108b70cf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b70d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b70d5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 108b70d8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b70da cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b70dd jb 0x108b70e1 */
  if (C.cf) goto L_108b70e1;
  /* 108b70df jmp 0x108b70e3 */
  goto L_108b70e3;
L_108b70e1:;
  /* 108b70e1 jmp 0x108b70ac */
  goto L_108b70ac;
L_108b70e3:;
  /* 108b70e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b70e6 jmp 0x108b70f6 */
  goto L_108b70f6;
L_108b70e8:;
  /* 108b70e8 call 0x108bbc00 */
  push32(0x108b70edu); f_108bbc00();
  /* 108b70ed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 108b70f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108b70f6:;
  /* 108b70f6 pop esi */
  ESI = (pop32());
  /* 108b70f7 mov esp, ebp */
  ESP = (EBP);
  /* 108b70f9 pop ebp */
  EBP = (pop32());
  /* 108b70fa ret  */
  ESPCHK(0x108b6f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x108b7130 (146 bytes, 45 insns) */
void f_108b7130(void) {
  FTRACE(0x108b7130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7130 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7131 mov ebp, esp */
  EBP = (ESP);
  /* 108b7133 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b7136 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b7138 call 0x108b7730 */
  push32(0x108b713du); f_108b7730();
  /* 108b713d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7140 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7144 jne 0x108b715e */
  if (!C.zf) goto L_108b715e;
  /* 108b7146 mov dword ptr [ebp - 8], 0x108df6d4 */
  w32((uint32_t)(EBP + -0x8), (0x108df6d4u));
  /* 108b714d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7150 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108b7152 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108b7155 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 108b715c jmp 0x108b7174 */
  goto L_108b7174;
L_108b715e:;
  /* 108b715e mov dword ptr [ebp - 8], 0x108df6d8 */
  w32((uint32_t)(EBP + -0x8), (0x108df6d8u));
  /* 108b7165 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7168 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b716a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b716d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_108b7174:;
  /* 108b7174 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7178 jne 0x108b7188 */
  if (!C.zf) goto L_108b7188;
  /* 108b717a push 1 */
  push32((uint32_t)(0x1u));
  /* 108b717c call 0x108b77d0 */
  push32(0x108b7181u); f_108b77d0();
  /* 108b7181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7186 jmp 0x108b71bc */
  goto L_108b71bc;
L_108b7188:;
  /* 108b7188 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b718c je 0x108b71ad */
  if (C.zf) goto L_108b71ad;
  /* 108b718e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7191 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 108b7197 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b7199 call 0x108b77d0 */
  push32(0x108b719eu); f_108b77d0();
  /* 108b719e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b71a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b71a4 push edx */
  push32((uint32_t)(EDX));
  /* 108b71a5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x108b71a8u);
  /* 108b71a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b71ab jmp 0x108b71b7 */
  goto L_108b71b7;
L_108b71ad:;
  /* 108b71ad push 1 */
  push32((uint32_t)(0x1u));
  /* 108b71af call 0x108b77d0 */
  push32(0x108b71b4u); f_108b77d0();
  /* 108b71b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b71b7:;
  /* 108b71b7 mov eax, 1 */
  EAX = (0x1u);
L_108b71bc:;
  /* 108b71bc mov esp, ebp */
  ESP = (EBP);
  /* 108b71be pop ebp */
  EBP = (pop32());
  /* 108b71bf ret 4 */
  ESPCHK(0x108b7130u, _esp0);
  ESP += 8; return;
}

/* FUN_100071d0 @ 0x108b71d0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_108b71d0(void) {
  FTRACE(0x108b71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b71d1 mov ebp, esp */
  EBP = (ESP);
  /* 108b71d3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b71d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 108b71dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b71e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108b71e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b71e6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b71e9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 108b71ec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b71f0 ja 0x108b729e */
  if ((!C.cf&&!C.zf)) goto L_108b729e;
  /* 108b71f6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108b71f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b71fb mov dl, byte ptr [eax + 0x108b73f2] */
  DL = (r8((uint32_t)(EAX + 0x108b73f2)));
  /* 108b7201 jmp dword ptr [edx*4 + 0x108b73da] */
  switch (EDX) {
    case 0: goto L_108b7208;
    case 1: goto L_108b7273;
    case 2: goto L_108b7259;
    case 3: goto L_108b7225;
    case 4: goto L_108b723f;
    case 5: goto L_108b729e;
    default: x86_unimpl("switch@0x108b7201 out of table"); return;
  }
L_108b7208:;
  /* 108b7208 mov dword ptr [ebp - 0x18], 0x108df6d4 */
  w32((uint32_t)(EBP + -0x18), (0x108df6d4u));
  /* 108b720f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b7212 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b7214 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108b7217 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b721a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b721d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b7220 jmp 0x108b72a6 */
  goto L_108b72a6;
L_108b7225:;
  /* 108b7225 mov dword ptr [ebp - 0x18], 0x108df6d8 */
  w32((uint32_t)(EBP + -0x18), (0x108df6d8u));
  /* 108b722c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b722f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b7231 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108b7234 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b7237 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b723a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b723d jmp 0x108b72a6 */
  goto L_108b72a6;
L_108b723f:;
  /* 108b723f mov dword ptr [ebp - 0x18], 0x108df6dc */
  w32((uint32_t)(EBP + -0x18), (0x108df6dcu));
  /* 108b7246 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b7249 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b724b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108b724e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b7251 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7254 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b7257 jmp 0x108b72a6 */
  goto L_108b72a6;
L_108b7259:;
  /* 108b7259 mov dword ptr [ebp - 0x18], 0x108df6e0 */
  w32((uint32_t)(EBP + -0x18), (0x108df6e0u));
  /* 108b7260 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b7263 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b7265 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108b7268 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b726b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b726e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b7271 jmp 0x108b72a6 */
  goto L_108b72a6;
L_108b7273:;
  /* 108b7273 call 0x108b3770 */
  push32(0x108b7278u); f_108b3770();
  /* 108b7278 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b727b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b727e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108b7281 push edx */
  push32((uint32_t)(EDX));
  /* 108b7282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7285 push eax */
  push32((uint32_t)(EAX));
  /* 108b7286 call 0x108b7410 */
  push32(0x108b728bu); f_108b7410();
  /* 108b728b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b728e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7291 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108b7294 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b7297 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b7299 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108b729c jmp 0x108b72a6 */
  goto L_108b72a6;
L_108b729e:;
  /* 108b729e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b72a1 jmp 0x108b73d6 */
  goto L_108b73d6;
L_108b72a6:;
  /* 108b72a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b72aa je 0x108b72b6 */
  if (C.zf) goto L_108b72b6;
  /* 108b72ac push 1 */
  push32((uint32_t)(0x1u));
  /* 108b72ae call 0x108b7730 */
  push32(0x108b72b3u); f_108b7730();
  /* 108b72b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b72b6:;
  /* 108b72b6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b72ba jne 0x108b72d3 */
  if (!C.zf) goto L_108b72d3;
  /* 108b72bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b72c0 je 0x108b72cc */
  if (C.zf) goto L_108b72cc;
  /* 108b72c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108b72c4 call 0x108b77d0 */
  push32(0x108b72c9u); f_108b77d0();
  /* 108b72c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b72cc:;
  /* 108b72cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b72ce jmp 0x108b73d6 */
  goto L_108b73d6;
L_108b72d3:;
  /* 108b72d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b72d7 jne 0x108b72f0 */
  if (!C.zf) goto L_108b72f0;
  /* 108b72d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b72dd je 0x108b72e9 */
  if (C.zf) goto L_108b72e9;
  /* 108b72df push 1 */
  push32((uint32_t)(0x1u));
  /* 108b72e1 call 0x108b77d0 */
  push32(0x108b72e6u); f_108b77d0();
  /* 108b72e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b72e9:;
  /* 108b72e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 108b72eb call 0x108b34f0 */
  push32(0x108b72f0u); f_108b34f0();
L_108b72f0:;
  /* 108b72f0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b72f4 je 0x108b7302 */
  if (C.zf) goto L_108b7302;
  /* 108b72f6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b72fa je 0x108b7302 */
  if (C.zf) goto L_108b7302;
  /* 108b72fc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7300 jne 0x108b732e */
  if (!C.zf) goto L_108b732e;
L_108b7302:;
  /* 108b7302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7305 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 108b7308 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108b730b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b730e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 108b7315 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7319 jne 0x108b732e */
  if (!C.zf) goto L_108b732e;
  /* 108b731b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b731e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 108b7321 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108b7324 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7327 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_108b732e:;
  /* 108b732e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7332 jne 0x108b7370 */
  if (!C.zf) goto L_108b7370;
  /* 108b7334 mov eax, dword ptr [0x108ddc78] */
  EAX = (r32((uint32_t)(0x108ddc78)));
  /* 108b7339 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b733c jmp 0x108b7347 */
  goto L_108b7347;
L_108b733e:;
  /* 108b733e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b7341 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7344 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108b7347:;
  /* 108b7347 mov edx, dword ptr [0x108ddc78] */
  EDX = (r32((uint32_t)(0x108ddc78)));
  /* 108b734d add edx, dword ptr [0x108ddc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108ddc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7353 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7356 jge 0x108b736e */
  if ((C.sf==C.of)) goto L_108b736e;
  /* 108b7358 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b735b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b735e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7361 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108b7364 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 108b736c jmp 0x108b733e */
  goto L_108b733e;
L_108b736e:;
  /* 108b736e jmp 0x108b7379 */
  goto L_108b7379;
L_108b7370:;
  /* 108b7370 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b7373 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_108b7379:;
  /* 108b7379 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b737d je 0x108b7389 */
  if (C.zf) goto L_108b7389;
  /* 108b737f push 1 */
  push32((uint32_t)(0x1u));
  /* 108b7381 call 0x108b77d0 */
  push32(0x108b7386u); f_108b77d0();
  /* 108b7386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b7389:;
  /* 108b7389 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b738d jne 0x108b73a0 */
  if (!C.zf) goto L_108b73a0;
  /* 108b738f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7392 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 108b7395 push edx */
  push32((uint32_t)(EDX));
  /* 108b7396 push 8 */
  push32((uint32_t)(0x8u));
  /* 108b7398 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x108b739bu);
  /* 108b739b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b739e jmp 0x108b73aa */
  goto L_108b73aa;
L_108b73a0:;
  /* 108b73a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b73a3 push eax */
  push32((uint32_t)(EAX));
  /* 108b73a4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x108b73a7u);
  /* 108b73a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b73aa:;
  /* 108b73aa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b73ae je 0x108b73bc */
  if (C.zf) goto L_108b73bc;
  /* 108b73b0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b73b4 je 0x108b73bc */
  if (C.zf) goto L_108b73bc;
  /* 108b73b6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b73ba jne 0x108b73d4 */
  if (!C.zf) goto L_108b73d4;
L_108b73bc:;
  /* 108b73bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b73bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b73c2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 108b73c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b73c9 jne 0x108b73d4 */
  if (!C.zf) goto L_108b73d4;
  /* 108b73cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b73ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b73d1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_108b73d4:;
  /* 108b73d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b73d6:;
  /* 108b73d6 mov esp, ebp */
  ESP = (EBP);
  /* 108b73d8 pop ebp */
  EBP = (pop32());
  /* 108b73d9 ret  */
  ESPCHK(0x108b71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007410 @ 0x108b7410 (91 bytes, 35 insns) */
void f_108b7410(void) {
  FTRACE(0x108b7410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7410 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7411 mov ebp, esp */
  EBP = (ESP);
  /* 108b7413 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7414 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7417 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b741a:;
  /* 108b741a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b741d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108b7420 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7423 je 0x108b7443 */
  if (C.zf) goto L_108b7443;
  /* 108b7425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7428 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b742b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b742e mov ecx, dword ptr [0x108ddc84] */
  ECX = (r32((uint32_t)(0x108ddc84)));
  /* 108b7434 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b7437 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b743a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b743c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b743f jae 0x108b7443 */
  if (!C.cf) goto L_108b7443;
  /* 108b7441 jmp 0x108b741a */
  goto L_108b741a;
L_108b7443:;
  /* 108b7443 mov eax, dword ptr [0x108ddc84] */
  EAX = (r32((uint32_t)(0x108ddc84)));
  /* 108b7448 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b744b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b744e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7450 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7453 jae 0x108b7465 */
  if (!C.cf) goto L_108b7465;
  /* 108b7455 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7458 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108b745b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b745e jne 0x108b7465 */
  if (!C.zf) goto L_108b7465;
  /* 108b7460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7463 jmp 0x108b7467 */
  goto L_108b7467;
L_108b7465:;
  /* 108b7465 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b7467:;
  /* 108b7467 mov esp, ebp */
  ESP = (EBP);
  /* 108b7469 pop ebp */
  EBP = (pop32());
  /* 108b746a ret  */
  ESPCHK(0x108b7410u, _esp0);
  ESP += 4; return;
}

/* FUN_10007470 @ 0x108b7470 (13 bytes, 6 insns) */
void f_108b7470(void) {
  FTRACE(0x108b7470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7470 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7471 mov ebp, esp */
  EBP = (ESP);
  /* 108b7473 call 0x108b3770 */
  push32(0x108b7478u); f_108b3770();
  /* 108b7478 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b747b pop ebp */
  EBP = (pop32());
  /* 108b747c ret  */
  ESPCHK(0x108b7470u, _esp0);
  ESP += 4; return;
}

/* FUN_10007480 @ 0x108b7480 (13 bytes, 6 insns) */
void f_108b7480(void) {
  FTRACE(0x108b7480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7480 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7481 mov ebp, esp */
  EBP = (ESP);
  /* 108b7483 call 0x108b3770 */
  push32(0x108b7488u); f_108b3770();
  /* 108b7488 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b748b pop ebp */
  EBP = (pop32());
  /* 108b748c ret  */
  ESPCHK(0x108b7480u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x108b7490 (187 bytes, 54 insns) */
void f_108b7490(void) {
  FTRACE(0x108b7490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7490 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7491 mov ebp, esp */
  EBP = (ESP);
  /* 108b7493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b7496 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b749d cmp dword ptr [0x108df6e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df6e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b74a4 jne 0x108b7503 */
  if (!C.zf) goto L_108b7503;
  /* 108b74a6 push 0x108da2d8 */
  push32((uint32_t)(0x108da2d8u));
  /* 108b74ab call dword ptr [0x108e232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e232c))), 0x108b74b1u);
  /* 108b74b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b74b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b74b8 je 0x108b74d7 */
  if (C.zf) goto L_108b74d7;
  /* 108b74ba push 0x108daedc */
  push32((uint32_t)(0x108daedcu));
  /* 108b74bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b74c2 push eax */
  push32((uint32_t)(EAX));
  /* 108b74c3 call dword ptr [0x108e2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2328))), 0x108b74c9u);
  /* 108b74c9 mov dword ptr [0x108df6e8], eax */
  w32((uint32_t)(0x108df6e8), (EAX));
  /* 108b74ce cmp dword ptr [0x108df6e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df6e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b74d5 jne 0x108b74db */
  if (!C.zf) goto L_108b74db;
L_108b74d7:;
  /* 108b74d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b74d9 jmp 0x108b7547 */
  goto L_108b7547;
L_108b74db:;
  /* 108b74db push 0x108daecc */
  push32((uint32_t)(0x108daeccu));
  /* 108b74e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b74e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b74e4 call dword ptr [0x108e2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2328))), 0x108b74eau);
  /* 108b74ea mov dword ptr [0x108df6ec], eax */
  w32((uint32_t)(0x108df6ec), (EAX));
  /* 108b74ef push 0x108daeb8 */
  push32((uint32_t)(0x108daeb8u));
  /* 108b74f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b74f7 push edx */
  push32((uint32_t)(EDX));
  /* 108b74f8 call dword ptr [0x108e2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2328))), 0x108b74feu);
  /* 108b74fe mov dword ptr [0x108df6f0], eax */
  w32((uint32_t)(0x108df6f0), (EAX));
L_108b7503:;
  /* 108b7503 cmp dword ptr [0x108df6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b750a je 0x108b7515 */
  if (C.zf) goto L_108b7515;
  /* 108b750c call dword ptr [0x108df6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df6ec))), 0x108b7512u);
  /* 108b7512 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b7515:;
  /* 108b7515 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7519 je 0x108b7531 */
  if (C.zf) goto L_108b7531;
  /* 108b751b cmp dword ptr [0x108df6f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df6f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7522 je 0x108b7531 */
  if (C.zf) goto L_108b7531;
  /* 108b7524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7527 push eax */
  push32((uint32_t)(EAX));
  /* 108b7528 call dword ptr [0x108df6f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df6f0))), 0x108b752eu);
  /* 108b752e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b7531:;
  /* 108b7531 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108b7534 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7535 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7538 push edx */
  push32((uint32_t)(EDX));
  /* 108b7539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b753c push eax */
  push32((uint32_t)(EAX));
  /* 108b753d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7540 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7541 call dword ptr [0x108df6e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108df6e8))), 0x108b7547u);
L_108b7547:;
  /* 108b7547 mov esp, ebp */
  ESP = (EBP);
  /* 108b7549 pop ebp */
  EBP = (pop32());
  /* 108b754a ret  */
  ESPCHK(0x108b7490u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x108b7550 (254 bytes, 109 insns) */
void f_108b7550(void) {
  FTRACE(0x108b7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7550 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 108b7554 push edi */
  push32((uint32_t)(EDI));
  /* 108b7555 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108b7557 je 0x108b75d3 */
  if (C.zf) goto L_108b75d3;
  /* 108b7559 push esi */
  push32((uint32_t)(ESI));
  /* 108b755a push ebx */
  push32((uint32_t)(EBX));
  /* 108b755b mov ebx, ecx */
  EBX = (ECX);
  /* 108b755d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 108b7561 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 108b7567 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 108b756b jne 0x108b7574 */
  if (!C.zf) goto L_108b7574;
  /* 108b756d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108b7570 jne 0x108b75e1 */
  if (!C.zf) goto L_108b75e1;
  /* 108b7572 jmp 0x108b7595 */
  goto L_108b7595;
L_108b7574:;
  /* 108b7574 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108b7576 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108b7577 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108b7579 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108b757a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108b757b je 0x108b75a2 */
  if (C.zf) goto L_108b75a2;
  /* 108b757d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108b757f je 0x108b75aa */
  if (C.zf) goto L_108b75aa;
  /* 108b7581 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 108b7587 jne 0x108b7574 */
  if (!C.zf) goto L_108b7574;
  /* 108b7589 mov ebx, ecx */
  EBX = (ECX);
  /* 108b758b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108b758e jne 0x108b75e1 */
  if (!C.zf) goto L_108b75e1;
L_108b7590:;
  /* 108b7590 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 108b7593 je 0x108b75a2 */
  if (C.zf) goto L_108b75a2;
L_108b7595:;
  /* 108b7595 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 108b7597 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108b7598 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108b759a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108b759b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108b759d je 0x108b75ce */
  if (C.zf) goto L_108b75ce;
  /* 108b759f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 108b75a0 jne 0x108b7595 */
  if (!C.zf) goto L_108b7595;
L_108b75a2:;
  /* 108b75a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108b75a6 pop ebx */
  EBX = (pop32());
  /* 108b75a7 pop esi */
  ESI = (pop32());
  /* 108b75a8 pop edi */
  EDI = (pop32());
  /* 108b75a9 ret  */
  ESPCHK(0x108b7550u, _esp0);
  ESP += 4; return;
L_108b75aa:;
  /* 108b75aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108b75b0 je 0x108b75c4 */
  if (C.zf) goto L_108b75c4;
L_108b75b2:;
  /* 108b75b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108b75b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108b75b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108b75b6 je 0x108b7646 */
  if (C.zf) goto L_108b7646;
  /* 108b75bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108b75c2 jne 0x108b75b2 */
  if (!C.zf) goto L_108b75b2;
L_108b75c4:;
  /* 108b75c4 mov ebx, ecx */
  EBX = (ECX);
  /* 108b75c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108b75c9 jne 0x108b7637 */
  if (!C.zf) goto L_108b7637;
L_108b75cb:;
  /* 108b75cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108b75cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_108b75ce:;
  /* 108b75ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 108b75cf jne 0x108b75cb */
  if (!C.zf) goto L_108b75cb;
  /* 108b75d1 pop ebx */
  EBX = (pop32());
  /* 108b75d2 pop esi */
  ESI = (pop32());
L_108b75d3:;
  /* 108b75d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108b75d7 pop edi */
  EDI = (pop32());
  /* 108b75d8 ret  */
  ESPCHK(0x108b7550u, _esp0);
  ESP += 4; return;
L_108b75d9:;
  /* 108b75d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108b75db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108b75de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108b75df je 0x108b7590 */
  if (C.zf) goto L_108b7590;
L_108b75e1:;
  /* 108b75e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108b75e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 108b75e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b75ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b75ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108b75ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 108b75f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108b75f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108b75f9 je 0x108b75d9 */
  if (C.zf) goto L_108b75d9;
  /* 108b75fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108b75fd je 0x108b762b */
  if (C.zf) goto L_108b762b;
  /* 108b75ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 108b7601 je 0x108b7621 */
  if (C.zf) goto L_108b7621;
  /* 108b7603 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 108b7609 je 0x108b7617 */
  if (C.zf) goto L_108b7617;
  /* 108b760b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 108b7611 jne 0x108b75d9 */
  if (!C.zf) goto L_108b75d9;
  /* 108b7613 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108b7615 jmp 0x108b762f */
  goto L_108b762f;
L_108b7617:;
  /* 108b7617 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b761d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108b761f jmp 0x108b762f */
  goto L_108b762f;
L_108b7621:;
  /* 108b7621 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108b7627 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108b7629 jmp 0x108b762f */
  goto L_108b762f;
L_108b762b:;
  /* 108b762b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108b762d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_108b762f:;
  /* 108b762f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7634 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108b7635 je 0x108b7641 */
  if (C.zf) goto L_108b7641;
L_108b7637:;
  /* 108b7637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108b7639:;
  /* 108b7639 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 108b763b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108b763e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108b763f jne 0x108b7639 */
  if (!C.zf) goto L_108b7639;
L_108b7641:;
  /* 108b7641 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 108b7644 jne 0x108b75cb */
  if (!C.zf) goto L_108b75cb;
L_108b7646:;
  /* 108b7646 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108b764a pop ebx */
  EBX = (pop32());
  /* 108b764b pop esi */
  ESI = (pop32());
  /* 108b764c pop edi */
  EDI = (pop32());
  /* 108b764d ret  */
  ESPCHK(0x108b7550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x108b7650 (55 bytes, 16 insns) */
void f_108b7650(void) {
  FTRACE(0x108b7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7650 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7651 mov ebp, esp */
  EBP = (ESP);
  /* 108b7653 mov eax, dword ptr [0x108ddb84] */
  EAX = (r32((uint32_t)(0x108ddb84)));
  /* 108b7658 push eax */
  push32((uint32_t)(EAX));
  /* 108b7659 call dword ptr [0x108e23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e23a4))), 0x108b765fu);
  /* 108b765f mov ecx, dword ptr [0x108ddb74] */
  ECX = (r32((uint32_t)(0x108ddb74)));
  /* 108b7665 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7666 call dword ptr [0x108e23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e23a4))), 0x108b766cu);
  /* 108b766c mov edx, dword ptr [0x108ddb64] */
  EDX = (r32((uint32_t)(0x108ddb64)));
  /* 108b7672 push edx */
  push32((uint32_t)(EDX));
  /* 108b7673 call dword ptr [0x108e23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e23a4))), 0x108b7679u);
  /* 108b7679 mov eax, dword ptr [0x108ddb44] */
  EAX = (r32((uint32_t)(0x108ddb44)));
  /* 108b767e push eax */
  push32((uint32_t)(EAX));
  /* 108b767f call dword ptr [0x108e23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e23a4))), 0x108b7685u);
  /* 108b7685 pop ebp */
  EBP = (pop32());
  /* 108b7686 ret  */
  ESPCHK(0x108b7650u, _esp0);
  ESP += 4; return;
}

/* FUN_10007690 @ 0x108b7690 (159 bytes, 47 insns) */
void f_108b7690(void) {
  FTRACE(0x108b7690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7690 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7691 mov ebp, esp */
  EBP = (ESP);
  /* 108b7693 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b769b jmp 0x108b76a6 */
  goto L_108b76a6;
L_108b769d:;
  /* 108b769d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b76a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b76a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b76a6:;
  /* 108b76a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b76aa jge 0x108b76f9 */
  if ((C.sf==C.of)) goto L_108b76f9;
  /* 108b76ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b76af cmp dword ptr [ecx*4 + 0x108ddb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x108ddb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b76b7 je 0x108b76f7 */
  if (C.zf) goto L_108b76f7;
  /* 108b76b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b76bd je 0x108b76f7 */
  if (C.zf) goto L_108b76f7;
  /* 108b76bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b76c3 je 0x108b76f7 */
  if (C.zf) goto L_108b76f7;
  /* 108b76c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b76c9 je 0x108b76f7 */
  if (C.zf) goto L_108b76f7;
  /* 108b76cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b76cf je 0x108b76f7 */
  if (C.zf) goto L_108b76f7;
  /* 108b76d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b76d4 mov eax, dword ptr [edx*4 + 0x108ddb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108ddb40)));
  /* 108b76db push eax */
  push32((uint32_t)(EAX));
  /* 108b76dc call dword ptr [0x108e2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2370))), 0x108b76e2u);
  /* 108b76e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108b76e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b76e7 mov edx, dword ptr [ecx*4 + 0x108ddb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108ddb40)));
  /* 108b76ee push edx */
  push32((uint32_t)(EDX));
  /* 108b76ef call 0x108b47c0 */
  push32(0x108b76f4u); f_108b47c0();
  /* 108b76f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b76f7:;
  /* 108b76f7 jmp 0x108b769d */
  goto L_108b769d;
L_108b76f9:;
  /* 108b76f9 mov eax, dword ptr [0x108ddb64] */
  EAX = (r32((uint32_t)(0x108ddb64)));
  /* 108b76fe push eax */
  push32((uint32_t)(EAX));
  /* 108b76ff call dword ptr [0x108e2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2370))), 0x108b7705u);
  /* 108b7705 mov ecx, dword ptr [0x108ddb74] */
  ECX = (r32((uint32_t)(0x108ddb74)));
  /* 108b770b push ecx */
  push32((uint32_t)(ECX));
  /* 108b770c call dword ptr [0x108e2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2370))), 0x108b7712u);
  /* 108b7712 mov edx, dword ptr [0x108ddb84] */
  EDX = (r32((uint32_t)(0x108ddb84)));
  /* 108b7718 push edx */
  push32((uint32_t)(EDX));
  /* 108b7719 call dword ptr [0x108e2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2370))), 0x108b771fu);
  /* 108b771f mov eax, dword ptr [0x108ddb44] */
  EAX = (r32((uint32_t)(0x108ddb44)));
  /* 108b7724 push eax */
  push32((uint32_t)(EAX));
  /* 108b7725 call dword ptr [0x108e2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2370))), 0x108b772bu);
  /* 108b772b mov esp, ebp */
  ESP = (EBP);
  /* 108b772d pop ebp */
  EBP = (pop32());
  /* 108b772e ret  */
  ESPCHK(0x108b7690u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x108b7730 (151 bytes, 46 insns) */
void f_108b7730(void) {
  FTRACE(0x108b7730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7730 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7731 mov ebp, esp */
  EBP = (ESP);
  /* 108b7733 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7737 cmp dword ptr [eax*4 + 0x108ddb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x108ddb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b773f jne 0x108b77b2 */
  if (!C.zf) goto L_108b77b2;
  /* 108b7741 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 108b7746 push 0x108daee8 */
  push32((uint32_t)(0x108daee8u));
  /* 108b774b push 2 */
  push32((uint32_t)(0x2u));
  /* 108b774d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 108b774f call 0x108b3d30 */
  push32(0x108b7754u); f_108b3d30();
  /* 108b7754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7757 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b775a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b775e jne 0x108b776a */
  if (!C.zf) goto L_108b776a;
  /* 108b7760 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108b7762 call 0x108b2ca0 */
  push32(0x108b7767u); f_108b2ca0();
  /* 108b7767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b776a:;
  /* 108b776a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108b776c call 0x108b7730 */
  push32(0x108b7771u); f_108b7730();
  /* 108b7771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7774 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7777 cmp dword ptr [ecx*4 + 0x108ddb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x108ddb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b777f jne 0x108b779a */
  if (!C.zf) goto L_108b779a;
  /* 108b7781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7784 push edx */
  push32((uint32_t)(EDX));
  /* 108b7785 call dword ptr [0x108e23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e23a4))), 0x108b778bu);
  /* 108b778b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b778e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7791 mov dword ptr [eax*4 + 0x108ddb40], ecx */
  w32((uint32_t)(EAX*4 + 0x108ddb40), (ECX));
  /* 108b7798 jmp 0x108b77a8 */
  goto L_108b77a8;
L_108b779a:;
  /* 108b779a push 2 */
  push32((uint32_t)(0x2u));
  /* 108b779c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b779f push edx */
  push32((uint32_t)(EDX));
  /* 108b77a0 call 0x108b47c0 */
  push32(0x108b77a5u); f_108b47c0();
  /* 108b77a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b77a8:;
  /* 108b77a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108b77aa call 0x108b77d0 */
  push32(0x108b77afu); f_108b77d0();
  /* 108b77af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b77b2:;
  /* 108b77b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b77b5 mov ecx, dword ptr [eax*4 + 0x108ddb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108ddb40)));
  /* 108b77bc push ecx */
  push32((uint32_t)(ECX));
  /* 108b77bd call dword ptr [0x108e2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2308))), 0x108b77c3u);
  /* 108b77c3 mov esp, ebp */
  ESP = (EBP);
  /* 108b77c5 pop ebp */
  EBP = (pop32());
  /* 108b77c6 ret  */
  ESPCHK(0x108b7730u, _esp0);
  ESP += 4; return;
}

/* FUN_100077d0 @ 0x108b77d0 (22 bytes, 8 insns) */
void f_108b77d0(void) {
  FTRACE(0x108b77d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b77d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b77d1 mov ebp, esp */
  EBP = (ESP);
  /* 108b77d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b77d6 mov ecx, dword ptr [eax*4 + 0x108ddb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108ddb40)));
  /* 108b77dd push ecx */
  push32((uint32_t)(ECX));
  /* 108b77de call dword ptr [0x108e2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2304))), 0x108b77e4u);
  /* 108b77e4 pop ebp */
  EBP = (pop32());
  /* 108b77e5 ret  */
  ESPCHK(0x108b77d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077f0 @ 0x108b77f0 (26 bytes, 10 insns) */
void f_108b77f0(void) {
  FTRACE(0x108b77f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b77f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b77f1 mov ebp, esp */
  EBP = (ESP);
  /* 108b77f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b77f6 push eax */
  push32((uint32_t)(EAX));
  /* 108b77f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b77f9 call dword ptr [0x108e235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e235c))), 0x108b77ffu);
  /* 108b77ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 108b7804 call dword ptr [0x108e2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2338))), 0x108b780au);
  /* 108b780a pop ebp */
  EBP = (pop32());
  /* 108b780b ret  */
  ESPCHK(0x108b77f0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x108b7810 (446 bytes, 130 insns) */
void f_108b7810(void) {
  FTRACE(0x108b7810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7810 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7811 mov ebp, esp */
  EBP = (ESP);
  /* 108b7813 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b7816 call 0x108b3770 */
  push32(0x108b781bu); f_108b3770();
  /* 108b781b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b781e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7821 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 108b7824 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7828 push edx */
  push32((uint32_t)(EDX));
  /* 108b7829 call 0x108b79d0 */
  push32(0x108b782eu); f_108b79d0();
  /* 108b782e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7831 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b7834 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7838 je 0x108b7843 */
  if (C.zf) goto L_108b7843;
  /* 108b783a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b783d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7841 jne 0x108b7852 */
  if (!C.zf) goto L_108b7852;
L_108b7843:;
  /* 108b7843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7846 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7847 call dword ptr [0x108e22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22fc))), 0x108b784du);
  /* 108b784d jmp 0x108b79ca */
  goto L_108b79ca;
L_108b7852:;
  /* 108b7852 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b7855 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7859 jne 0x108b786f */
  if (!C.zf) goto L_108b786f;
  /* 108b785b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b785e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108b7865 mov eax, 1 */
  EAX = (0x1u);
  /* 108b786a jmp 0x108b79ca */
  goto L_108b79ca;
L_108b786f:;
  /* 108b786f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b7872 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7876 jne 0x108b7880 */
  if (!C.zf) goto L_108b7880;
  /* 108b7878 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108b787b jmp 0x108b79ca */
  goto L_108b79ca;
L_108b7880:;
  /* 108b7880 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b7883 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108b7886 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b7889 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b788c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 108b788f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108b7892 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7895 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7898 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 108b789b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b789e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b78a2 jne 0x108b79a7 */
  if (!C.zf) goto L_108b79a7;
  /* 108b78a8 mov eax, dword ptr [0x108ddc78] */
  EAX = (r32((uint32_t)(0x108ddc78)));
  /* 108b78ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108b78b0 jmp 0x108b78bb */
  goto L_108b78bb;
L_108b78b2:;
  /* 108b78b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b78b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b78b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_108b78bb:;
  /* 108b78bb mov edx, dword ptr [0x108ddc78] */
  EDX = (r32((uint32_t)(0x108ddc78)));
  /* 108b78c1 add edx, dword ptr [0x108ddc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108ddc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b78c7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b78ca jge 0x108b78e2 */
  if ((C.sf==C.of)) goto L_108b78e2;
  /* 108b78cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b78cf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b78d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b78d5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108b78d8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 108b78e0 jmp 0x108b78b2 */
  goto L_108b78b2;
L_108b78e2:;
  /* 108b78e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b78e5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 108b78e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108b78eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b78ee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b78f4 jne 0x108b7905 */
  if (!C.zf) goto L_108b7905;
  /* 108b78f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b78f9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 108b7900 jmp 0x108b798d */
  goto L_108b798d;
L_108b7905:;
  /* 108b7905 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b7908 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b790e jne 0x108b791c */
  if (!C.zf) goto L_108b791c;
  /* 108b7910 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7913 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 108b791a jmp 0x108b798d */
  goto L_108b798d;
L_108b791c:;
  /* 108b791c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b791f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7925 jne 0x108b7933 */
  if (!C.zf) goto L_108b7933;
  /* 108b7927 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b792a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 108b7931 jmp 0x108b798d */
  goto L_108b798d;
L_108b7933:;
  /* 108b7933 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b7936 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b793c jne 0x108b794a */
  if (!C.zf) goto L_108b794a;
  /* 108b793e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7941 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 108b7948 jmp 0x108b798d */
  goto L_108b798d;
L_108b794a:;
  /* 108b794a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b794d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7953 jne 0x108b7961 */
  if (!C.zf) goto L_108b7961;
  /* 108b7955 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7958 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 108b795f jmp 0x108b798d */
  goto L_108b798d;
L_108b7961:;
  /* 108b7961 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b7964 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b796a jne 0x108b7978 */
  if (!C.zf) goto L_108b7978;
  /* 108b796c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b796f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 108b7976 jmp 0x108b798d */
  goto L_108b798d;
L_108b7978:;
  /* 108b7978 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b797b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7981 jne 0x108b798d */
  if (!C.zf) goto L_108b798d;
  /* 108b7983 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7986 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_108b798d:;
  /* 108b798d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7990 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 108b7993 push edx */
  push32((uint32_t)(EDX));
  /* 108b7994 push 8 */
  push32((uint32_t)(0x8u));
  /* 108b7996 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x108b7999u);
  /* 108b7999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b799c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b799f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b79a2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 108b79a5 jmp 0x108b79be */
  goto L_108b79be;
L_108b79a7:;
  /* 108b79a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b79aa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 108b79b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b79b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108b79b7 push ecx */
  push32((uint32_t)(ECX));
  /* 108b79b8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x108b79bbu);
  /* 108b79bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b79be:;
  /* 108b79be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b79c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108b79c4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 108b79c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108b79ca:;
  /* 108b79ca mov esp, ebp */
  ESP = (EBP);
  /* 108b79cc pop ebp */
  EBP = (pop32());
  /* 108b79cd ret  */
  ESPCHK(0x108b7810u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x108b79d0 (89 bytes, 35 insns) */
void f_108b79d0(void) {
  FTRACE(0x108b79d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b79d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b79d1 mov ebp, esp */
  EBP = (ESP);
  /* 108b79d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b79d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b79d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108b79da:;
  /* 108b79da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b79dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108b79df cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b79e2 je 0x108b7a02 */
  if (C.zf) goto L_108b7a02;
  /* 108b79e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b79e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b79ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b79ed mov ecx, dword ptr [0x108ddc84] */
  ECX = (r32((uint32_t)(0x108ddc84)));
  /* 108b79f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b79f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b79f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b79fb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b79fe jae 0x108b7a02 */
  if (!C.cf) goto L_108b7a02;
  /* 108b7a00 jmp 0x108b79da */
  goto L_108b79da;
L_108b7a02:;
  /* 108b7a02 mov eax, dword ptr [0x108ddc84] */
  EAX = (r32((uint32_t)(0x108ddc84)));
  /* 108b7a07 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108b7a0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7a0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7a0f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7a12 jae 0x108b7a1e */
  if (!C.cf) goto L_108b7a1e;
  /* 108b7a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7a17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108b7a19 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7a1c je 0x108b7a22 */
  if (C.zf) goto L_108b7a22;
L_108b7a1e:;
  /* 108b7a1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7a20 jmp 0x108b7a25 */
  goto L_108b7a25;
L_108b7a22:;
  /* 108b7a22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108b7a25:;
  /* 108b7a25 mov esp, ebp */
  ESP = (EBP);
  /* 108b7a27 pop ebp */
  EBP = (pop32());
  /* 108b7a28 ret  */
  ESPCHK(0x108b79d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x108b7a30 (48 bytes, 17 insns) */
void f_108b7a30(void) {
  FTRACE(0x108b7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7a31 mov ebp, esp */
  EBP = (ESP);
  /* 108b7a33 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7a34 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7a36 call 0x108b7730 */
  push32(0x108b7a3bu); f_108b7730();
  /* 108b7a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7a3e mov eax, dword ptr [0x108df75c] */
  EAX = (r32((uint32_t)(0x108df75c)));
  /* 108b7a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b7a46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7a49 mov dword ptr [0x108df75c], ecx */
  w32((uint32_t)(0x108df75c), (ECX));
  /* 108b7a4f push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7a51 call 0x108b77d0 */
  push32(0x108b7a56u); f_108b77d0();
  /* 108b7a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7a59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7a5c mov esp, ebp */
  ESP = (EBP);
  /* 108b7a5e pop ebp */
  EBP = (pop32());
  /* 108b7a5f ret  */
  ESPCHK(0x108b7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x108b7a60 (10 bytes, 5 insns) */
void f_108b7a60(void) {
  FTRACE(0x108b7a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7a60 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7a61 mov ebp, esp */
  EBP = (ESP);
  /* 108b7a63 mov eax, dword ptr [0x108df75c] */
  EAX = (r32((uint32_t)(0x108df75c)));
  /* 108b7a68 pop ebp */
  EBP = (pop32());
  /* 108b7a69 ret  */
  ESPCHK(0x108b7a60u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x108b7a70 (45 bytes, 19 insns) */
void f_108b7a70(void) {
  FTRACE(0x108b7a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7a70 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7a71 mov ebp, esp */
  EBP = (ESP);
  /* 108b7a73 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7a74 mov eax, dword ptr [0x108df75c] */
  EAX = (r32((uint32_t)(0x108df75c)));
  /* 108b7a79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b7a7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7a80 je 0x108b7a90 */
  if (C.zf) goto L_108b7a90;
  /* 108b7a82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7a85 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7a86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x108b7a89u);
  /* 108b7a89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b7a8e jne 0x108b7a94 */
  if (!C.zf) goto L_108b7a94;
L_108b7a90:;
  /* 108b7a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7a92 jmp 0x108b7a99 */
  goto L_108b7a99;
L_108b7a94:;
  /* 108b7a94 mov eax, 1 */
  EAX = (0x1u);
L_108b7a99:;
  /* 108b7a99 mov esp, ebp */
  ESP = (EBP);
  /* 108b7a9b pop ebp */
  EBP = (pop32());
  /* 108b7a9c ret  */
  ESPCHK(0x108b7a70u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x108b7aa0 (88 bytes, 40 insns) */
void f_108b7aa0(void) {
  FTRACE(0x108b7aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7aa0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 108b7aa4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108b7aa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b7aaa je 0x108b7af3 */
  if (C.zf) goto L_108b7af3;
  /* 108b7aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7aae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 108b7ab2 push edi */
  push32((uint32_t)(EDI));
  /* 108b7ab3 mov edi, ecx */
  EDI = (ECX);
  /* 108b7ab5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7ab8 jb 0x108b7ae7 */
  if (C.cf) goto L_108b7ae7;
  /* 108b7aba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108b7abc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 108b7abf je 0x108b7ac9 */
  if (C.zf) goto L_108b7ac9;
  /* 108b7ac1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_108b7ac3:;
  /* 108b7ac3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108b7ac5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108b7ac6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108b7ac7 jne 0x108b7ac3 */
  if (!C.zf) goto L_108b7ac3;
L_108b7ac9:;
  /* 108b7ac9 mov ecx, eax */
  ECX = (EAX);
  /* 108b7acb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 108b7ace add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7ad0 mov ecx, eax */
  ECX = (EAX);
  /* 108b7ad2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 108b7ad5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7ad7 mov ecx, edx */
  ECX = (EDX);
  /* 108b7ad9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108b7adc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108b7adf je 0x108b7ae7 */
  if (C.zf) goto L_108b7ae7;
  /* 108b7ae1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108b7ae3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108b7ae5 je 0x108b7aed */
  if (C.zf) goto L_108b7aed;
L_108b7ae7:;
  /* 108b7ae7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 108b7ae9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108b7aea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 108b7aeb jne 0x108b7ae7 */
  if (!C.zf) goto L_108b7ae7;
L_108b7aed:;
  /* 108b7aed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 108b7af1 pop edi */
  EDI = (pop32());
  /* 108b7af2 ret  */
  ESPCHK(0x108b7aa0u, _esp0);
  ESP += 4; return;
L_108b7af3:;
  /* 108b7af3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 108b7af7 ret  */
  ESPCHK(0x108b7aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b00 @ 0x108b7b00 (23 bytes, 10 insns) */
void f_108b7b00(void) {
  FTRACE(0x108b7b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7b00 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7b01 mov ebp, esp */
  EBP = (ESP);
  /* 108b7b03 mov eax, dword ptr [0x108df758] */
  EAX = (r32((uint32_t)(0x108df758)));
  /* 108b7b08 push eax */
  push32((uint32_t)(EAX));
  /* 108b7b09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7b0c push ecx */
  push32((uint32_t)(ECX));
  /* 108b7b0d call 0x108b7b20 */
  push32(0x108b7b12u); f_108b7b20();
  /* 108b7b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7b15 pop ebp */
  EBP = (pop32());
  /* 108b7b16 ret  */
  ESPCHK(0x108b7b00u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x108b7b20 (87 bytes, 34 insns) */
void f_108b7b20(void) {
  FTRACE(0x108b7b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7b20 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7b21 mov ebp, esp */
  EBP = (ESP);
  /* 108b7b23 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7b24 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7b28 jbe 0x108b7b2e */
  if ((C.cf||C.zf)) goto L_108b7b2e;
  /* 108b7b2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7b2c jmp 0x108b7b73 */
  goto L_108b7b73;
L_108b7b2e:;
  /* 108b7b2e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7b32 ja 0x108b7b45 */
  if ((!C.cf&&!C.zf)) goto L_108b7b45;
  /* 108b7b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7b37 push eax */
  push32((uint32_t)(EAX));
  /* 108b7b38 call 0x108b7b80 */
  push32(0x108b7b3du); f_108b7b80();
  /* 108b7b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7b40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b7b43 jmp 0x108b7b4c */
  goto L_108b7b4c;
L_108b7b45:;
  /* 108b7b45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108b7b4c:;
  /* 108b7b4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7b50 jne 0x108b7b58 */
  if (!C.zf) goto L_108b7b58;
  /* 108b7b52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7b56 jne 0x108b7b5d */
  if (!C.zf) goto L_108b7b5d;
L_108b7b58:;
  /* 108b7b58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7b5b jmp 0x108b7b73 */
  goto L_108b7b73;
L_108b7b5d:;
  /* 108b7b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7b60 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7b61 call 0x108b7a70 */
  push32(0x108b7b66u); f_108b7a70();
  /* 108b7b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b7b6b jne 0x108b7b71 */
  if (!C.zf) goto L_108b7b71;
  /* 108b7b6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7b6f jmp 0x108b7b73 */
  goto L_108b7b73;
L_108b7b71:;
  /* 108b7b71 jmp 0x108b7b2e */
  goto L_108b7b2e;
L_108b7b73:;
  /* 108b7b73 mov esp, ebp */
  ESP = (EBP);
  /* 108b7b75 pop ebp */
  EBP = (pop32());
  /* 108b7b76 ret  */
  ESPCHK(0x108b7b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b80 @ 0x108b7b80 (109 bytes, 37 insns) */
void f_108b7b80(void) {
  FTRACE(0x108b7b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7b80 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7b81 mov ebp, esp */
  EBP = (ESP);
  /* 108b7b83 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7b87 cmp eax, dword ptr [0x108ddc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108ddc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7b8d ja 0x108b7bbd */
  if ((!C.cf&&!C.zf)) goto L_108b7bbd;
  /* 108b7b8f push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7b91 call 0x108b7730 */
  push32(0x108b7b96u); f_108b7730();
  /* 108b7b96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7b99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7b9c push ecx */
  push32((uint32_t)(ECX));
  /* 108b7b9d call 0x108b86c0 */
  push32(0x108b7ba2u); f_108b86c0();
  /* 108b7ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7ba5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b7ba8 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7baa call 0x108b77d0 */
  push32(0x108b7bafu); f_108b77d0();
  /* 108b7baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7bb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7bb6 je 0x108b7bbd */
  if (C.zf) goto L_108b7bbd;
  /* 108b7bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7bbb jmp 0x108b7be9 */
  goto L_108b7be9;
L_108b7bbd:;
  /* 108b7bbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7bc1 jne 0x108b7bca */
  if (!C.zf) goto L_108b7bca;
  /* 108b7bc3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_108b7bca:;
  /* 108b7bca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7bcd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7bd0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 108b7bd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108b7bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7bd9 push eax */
  push32((uint32_t)(EAX));
  /* 108b7bda push 0 */
  push32((uint32_t)(0x0u));
  /* 108b7bdc mov ecx, dword ptr [0x108e0f0c] */
  ECX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b7be2 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7be3 call dword ptr [0x108e22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22f8))), 0x108b7be9u);
L_108b7be9:;
  /* 108b7be9 mov esp, ebp */
  ESP = (EBP);
  /* 108b7beb pop ebp */
  EBP = (pop32());
  /* 108b7bec ret  */
  ESPCHK(0x108b7b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x108b7bf0 (10 bytes, 5 insns) */
void f_108b7bf0(void) {
  FTRACE(0x108b7bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7bf1 mov ebp, esp */
  EBP = (ESP);
  /* 108b7bf3 mov eax, 1 */
  EAX = (0x1u);
  /* 108b7bf8 pop ebp */
  EBP = (pop32());
  /* 108b7bf9 ret  */
  ESPCHK(0x108b7bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x108b7c00 (173 bytes, 59 insns) */
void f_108b7c00(void) {
  FTRACE(0x108b7c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7c00 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7c01 mov ebp, esp */
  EBP = (ESP);
  /* 108b7c03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b7c06 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7c0a jbe 0x108b7c13 */
  if ((C.cf||C.zf)) goto L_108b7c13;
  /* 108b7c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7c0e jmp 0x108b7ca9 */
  goto L_108b7ca9;
L_108b7c13:;
  /* 108b7c13 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7c15 call 0x108b7730 */
  push32(0x108b7c1au); f_108b7730();
  /* 108b7c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7c1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7c20 push eax */
  push32((uint32_t)(EAX));
  /* 108b7c21 call 0x108b8030 */
  push32(0x108b7c26u); f_108b8030();
  /* 108b7c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7c29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b7c2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7c30 je 0x108b7c71 */
  if (C.zf) goto L_108b7c71;
  /* 108b7c32 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108b7c39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7c3c cmp ecx, dword ptr [0x108ddc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108ddc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7c42 ja 0x108b7c62 */
  if ((!C.cf&&!C.zf)) goto L_108b7c62;
  /* 108b7c44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7c47 push edx */
  push32((uint32_t)(EDX));
  /* 108b7c48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7c4b push eax */
  push32((uint32_t)(EAX));
  /* 108b7c4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7c4f push ecx */
  push32((uint32_t)(ECX));
  /* 108b7c50 call 0x108b8f00 */
  push32(0x108b7c55u); f_108b8f00();
  /* 108b7c55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b7c5a je 0x108b7c62 */
  if (C.zf) goto L_108b7c62;
  /* 108b7c5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7c5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108b7c62:;
  /* 108b7c62 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7c64 call 0x108b77d0 */
  push32(0x108b7c69u); f_108b77d0();
  /* 108b7c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7c6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7c6f jmp 0x108b7ca9 */
  goto L_108b7ca9;
L_108b7c71:;
  /* 108b7c71 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7c73 call 0x108b77d0 */
  push32(0x108b7c78u); f_108b77d0();
  /* 108b7c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7c7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7c7f jne 0x108b7c88 */
  if (!C.zf) goto L_108b7c88;
  /* 108b7c81 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_108b7c88:;
  /* 108b7c88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7c8b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7c8e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 108b7c90 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108b7c93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7c96 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7c97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7c9a push edx */
  push32((uint32_t)(EDX));
  /* 108b7c9b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 108b7c9d mov eax, dword ptr [0x108e0f0c] */
  EAX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b7ca2 push eax */
  push32((uint32_t)(EAX));
  /* 108b7ca3 call dword ptr [0x108e2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2300))), 0x108b7ca9u);
L_108b7ca9:;
  /* 108b7ca9 mov esp, ebp */
  ESP = (EBP);
  /* 108b7cab pop ebp */
  EBP = (pop32());
  /* 108b7cac ret  */
  ESPCHK(0x108b7c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x108b7cb0 (490 bytes, 165 insns) */
void f_108b7cb0(void) {
  FTRACE(0x108b7cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7cb1 mov ebp, esp */
  EBP = (ESP);
  /* 108b7cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b7cb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7cba jne 0x108b7ccd */
  if (!C.zf) goto L_108b7ccd;
  /* 108b7cbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7cbf push eax */
  push32((uint32_t)(EAX));
  /* 108b7cc0 call 0x108b7b00 */
  push32(0x108b7cc5u); f_108b7b00();
  /* 108b7cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7cc8 jmp 0x108b7e96 */
  goto L_108b7e96;
L_108b7ccd:;
  /* 108b7ccd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7cd1 jne 0x108b7ce6 */
  if (!C.zf) goto L_108b7ce6;
  /* 108b7cd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7cd7 call 0x108b7ea0 */
  push32(0x108b7cdcu); f_108b7ea0();
  /* 108b7cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7ce1 jmp 0x108b7e96 */
  goto L_108b7e96;
L_108b7ce6:;
  /* 108b7ce6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108b7ced cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7cf1 ja 0x108b7e69 */
  if ((!C.cf&&!C.zf)) goto L_108b7e69;
  /* 108b7cf7 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7cf9 call 0x108b7730 */
  push32(0x108b7cfeu); f_108b7730();
  /* 108b7cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7d04 push edx */
  push32((uint32_t)(EDX));
  /* 108b7d05 call 0x108b8030 */
  push32(0x108b7d0au); f_108b8030();
  /* 108b7d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7d0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108b7d10 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7d14 je 0x108b7e2c */
  if (C.zf) goto L_108b7e2c;
  /* 108b7d1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7d1d cmp eax, dword ptr [0x108ddc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108ddc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7d23 ja 0x108b7da0 */
  if ((!C.cf&&!C.zf)) goto L_108b7da0;
  /* 108b7d25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7d28 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7d29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7d2c push edx */
  push32((uint32_t)(EDX));
  /* 108b7d2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b7d30 push eax */
  push32((uint32_t)(EAX));
  /* 108b7d31 call 0x108b8f00 */
  push32(0x108b7d36u); f_108b8f00();
  /* 108b7d36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b7d3b je 0x108b7d45 */
  if (C.zf) goto L_108b7d45;
  /* 108b7d3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7d40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108b7d43 jmp 0x108b7da0 */
  goto L_108b7da0;
L_108b7d45:;
  /* 108b7d45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7d48 push edx */
  push32((uint32_t)(EDX));
  /* 108b7d49 call 0x108b86c0 */
  push32(0x108b7d4eu); f_108b86c0();
  /* 108b7d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7d51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b7d54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7d58 je 0x108b7da0 */
  if (C.zf) goto L_108b7da0;
  /* 108b7d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7d5d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 108b7d60 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b7d63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108b7d66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7d69 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7d6c jae 0x108b7d76 */
  if (!C.cf) goto L_108b7d76;
  /* 108b7d6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7d71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108b7d74 jmp 0x108b7d7c */
  goto L_108b7d7c;
L_108b7d76:;
  /* 108b7d76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7d79 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108b7d7c:;
  /* 108b7d7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108b7d7f push edx */
  push32((uint32_t)(EDX));
  /* 108b7d80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7d83 push eax */
  push32((uint32_t)(EAX));
  /* 108b7d84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7d87 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7d88 call 0x108ba610 */
  push32(0x108b7d8du); f_108ba610();
  /* 108b7d8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7d90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7d93 push edx */
  push32((uint32_t)(EDX));
  /* 108b7d94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b7d97 push eax */
  push32((uint32_t)(EAX));
  /* 108b7d98 call 0x108b80f0 */
  push32(0x108b7d9du); f_108b80f0();
  /* 108b7d9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b7da0:;
  /* 108b7da0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7da4 jne 0x108b7e20 */
  if (!C.zf) goto L_108b7e20;
  /* 108b7da6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7daa jne 0x108b7db3 */
  if (!C.zf) goto L_108b7db3;
  /* 108b7dac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_108b7db3:;
  /* 108b7db3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7db6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7db9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 108b7dbc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 108b7dbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7dc2 push edx */
  push32((uint32_t)(EDX));
  /* 108b7dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b7dc5 mov eax, dword ptr [0x108e0f0c] */
  EAX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b7dca push eax */
  push32((uint32_t)(EAX));
  /* 108b7dcb call dword ptr [0x108e22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e22f8))), 0x108b7dd1u);
  /* 108b7dd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108b7dd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7dd8 je 0x108b7e20 */
  if (C.zf) goto L_108b7e20;
  /* 108b7dda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7ddd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 108b7de0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108b7de3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108b7de6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7de9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7dec jae 0x108b7df6 */
  if (!C.cf) goto L_108b7df6;
  /* 108b7dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7df1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108b7df4 jmp 0x108b7dfc */
  goto L_108b7dfc;
L_108b7df6:;
  /* 108b7df6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7df9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_108b7dfc:;
  /* 108b7dfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108b7dff push eax */
  push32((uint32_t)(EAX));
  /* 108b7e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7e03 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7e04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7e07 push edx */
  push32((uint32_t)(EDX));
  /* 108b7e08 call 0x108ba610 */
  push32(0x108b7e0du); f_108ba610();
  /* 108b7e0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7e13 push eax */
  push32((uint32_t)(EAX));
  /* 108b7e14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108b7e17 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7e18 call 0x108b80f0 */
  push32(0x108b7e1du); f_108b80f0();
  /* 108b7e1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108b7e20:;
  /* 108b7e20 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7e22 call 0x108b77d0 */
  push32(0x108b7e27u); f_108b77d0();
  /* 108b7e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7e2a jmp 0x108b7e69 */
  goto L_108b7e69;
L_108b7e2c:;
  /* 108b7e2c push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7e2e call 0x108b77d0 */
  push32(0x108b7e33u); f_108b77d0();
  /* 108b7e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7e36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7e3a jne 0x108b7e43 */
  if (!C.zf) goto L_108b7e43;
  /* 108b7e3c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_108b7e43:;
  /* 108b7e43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7e46 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7e49 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 108b7e4c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 108b7e4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7e52 push eax */
  push32((uint32_t)(EAX));
  /* 108b7e53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7e56 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b7e59 mov edx, dword ptr [0x108e0f0c] */
  EDX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b7e5f push edx */
  push32((uint32_t)(EDX));
  /* 108b7e60 call dword ptr [0x108e2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2300))), 0x108b7e66u);
  /* 108b7e66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108b7e69:;
  /* 108b7e69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7e6d jne 0x108b7e78 */
  if (!C.zf) goto L_108b7e78;
  /* 108b7e6f cmp dword ptr [0x108df758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108df758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7e76 jne 0x108b7e7d */
  if (!C.zf) goto L_108b7e7d;
L_108b7e78:;
  /* 108b7e78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108b7e7b jmp 0x108b7e96 */
  goto L_108b7e96;
L_108b7e7d:;
  /* 108b7e7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108b7e80 push eax */
  push32((uint32_t)(EAX));
  /* 108b7e81 call 0x108b7a70 */
  push32(0x108b7e86u); f_108b7a70();
  /* 108b7e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108b7e8b jne 0x108b7e91 */
  if (!C.zf) goto L_108b7e91;
  /* 108b7e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108b7e8f jmp 0x108b7e96 */
  goto L_108b7e96;
L_108b7e91:;
  /* 108b7e91 jmp 0x108b7ce6 */
  goto L_108b7ce6;
L_108b7e96:;
  /* 108b7e96 mov esp, ebp */
  ESP = (EBP);
  /* 108b7e98 pop ebp */
  EBP = (pop32());
  /* 108b7e99 ret  */
  ESPCHK(0x108b7cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x108b7ea0 (104 bytes, 38 insns) */
void f_108b7ea0(void) {
  FTRACE(0x108b7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108b7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 108b7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 108b7ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 108b7ea4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7ea8 jne 0x108b7eac */
  if (!C.zf) goto L_108b7eac;
  /* 108b7eaa jmp 0x108b7f04 */
  goto L_108b7f04;
L_108b7eac:;
  /* 108b7eac push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7eae call 0x108b7730 */
  push32(0x108b7eb3u); f_108b7730();
  /* 108b7eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7eb9 push eax */
  push32((uint32_t)(EAX));
  /* 108b7eba call 0x108b8030 */
  push32(0x108b7ebfu); f_108b8030();
  /* 108b7ebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7ec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108b7ec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108b7ec9 je 0x108b7ee7 */
  if (C.zf) goto L_108b7ee7;
  /* 108b7ecb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7ece push ecx */
  push32((uint32_t)(ECX));
  /* 108b7ecf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108b7ed2 push edx */
  push32((uint32_t)(EDX));
  /* 108b7ed3 call 0x108b80f0 */
  push32(0x108b7ed8u); f_108b80f0();
  /* 108b7ed8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7edb push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7edd call 0x108b77d0 */
  push32(0x108b7ee2u); f_108b77d0();
  /* 108b7ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7ee5 jmp 0x108b7f04 */
  goto L_108b7f04;
L_108b7ee7:;
  /* 108b7ee7 push 9 */
  push32((uint32_t)(0x9u));
  /* 108b7ee9 call 0x108b77d0 */
  push32(0x108b7eeeu); f_108b77d0();
  /* 108b7eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108b7ef1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108b7ef4 push eax */
  push32((uint32_t)(EAX));
  /* 108b7ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108b7ef7 mov ecx, dword ptr [0x108e0f0c] */
  ECX = (r32((uint32_t)(0x108e0f0c)));
  /* 108b7efd push ecx */
  push32((uint32_t)(ECX));
  /* 108b7efe call dword ptr [0x108e2398] */
  call_ind((uint32_t)(r32((uint32_t)(0x108e2398))), 0x108b7f04u);
L_108b7f04:;
  /* 108b7f04 mov esp, ebp */
  ESP = (EBP);
  /* 108b7f06 pop ebp */
  EBP = (pop32());
  /* 108b7f07 ret  */
  ESPCHK(0x108b7ea0u, _esp0);
  ESP += 4; return;
}

