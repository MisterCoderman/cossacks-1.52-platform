#include "recomp.h"

/* OnInit @ 0x10dd1005 (5 bytes, 1 insns) */
void f_10dd1005(void) {
  FTRACE(0x10dd1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd1005 jmp 0x10dd1090 */
  f_10dd1090(); return;
}

/* thunk_FUN_10002690 @ 0x10dd100a (5 bytes, 1 insns) */
void f_10dd100a(void) {
  FTRACE(0x10dd100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd100a jmp 0x10dd2690 */
  f_10dd2690(); return;
}

/* thunk_FUN_10001030 @ 0x10dd100f (5 bytes, 1 insns) */
void f_10dd100f(void) {
  FTRACE(0x10dd100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd100f jmp 0x10dd1030 */
  f_10dd1030(); return;
}

/* ProcessScenary @ 0x10dd1014 (5 bytes, 1 insns) */
void f_10dd1014(void) {
  FTRACE(0x10dd1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd1014 jmp 0x10dd1750 */
  f_10dd1750(); return;
}

/* FUN_10001030 @ 0x10dd1030 (67 bytes, 26 insns) */
void f_10dd1030(void) {
  FTRACE(0x10dd1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd1030 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd1031 mov ebp, esp */
  EBP = (ESP);
  /* 10dd1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd1036 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd1037 push esi */
  push32((uint32_t)(ESI));
  /* 10dd1038 push edi */
  push32((uint32_t)(EDI));
  /* 10dd1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10dd103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10dd1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10dd1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10dd1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1052 je 0x10dd1056 */
  if (C.zf) goto L_10dd1056;
  /* 10dd1054 jmp 0x10dd105b */
  goto L_10dd105b;
L_10dd1056:;
  /* 10dd1056 call 0x10dd1005 */
  push32(0x10dd105bu); f_10dd1005();
L_10dd105b:;
  /* 10dd105b mov eax, 1 */
  EAX = (0x1u);
  /* 10dd1060 pop edi */
  EDI = (pop32());
  /* 10dd1061 pop esi */
  ESI = (pop32());
  /* 10dd1062 pop ebx */
  EBX = (pop32());
  /* 10dd1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1068 call 0x10dd2780 */
  push32(0x10dd106du); f_10dd2780();
  /* 10dd106d mov esp, ebp */
  ESP = (EBP);
  /* 10dd106f pop ebp */
  EBP = (pop32());
  /* 10dd1070 ret 0xc */
  ESPCHK(0x10dd1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10dd1090 (1376 bytes, 359 insns) */
void f_10dd1090(void) {
  FTRACE(0x10dd1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd1090 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd1091 mov ebp, esp */
  EBP = (ESP);
  /* 10dd1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd1096 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd1097 push esi */
  push32((uint32_t)(ESI));
  /* 10dd1098 push edi */
  push32((uint32_t)(EDI));
  /* 10dd1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10dd109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10dd10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10dd10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10dd10a8 mov esi, esp */
  ESI = (ESP);
  /* 10dd10aa push 0x10dfa218 */
  push32((uint32_t)(0x10dfa218u));
  /* 10dd10af push 0x10dff428 */
  push32((uint32_t)(0x10dff428u));
  /* 10dd10b4 call dword ptr [0x10e0243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0243c))), 0x10dd10bau);
  /* 10dd10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd10bf call 0x10dd2780 */
  push32(0x10dd10c4u); f_10dd2780();
  /* 10dd10c4 mov esi, esp */
  ESI = (ESP);
  /* 10dd10c6 push 0x10dfa210 */
  push32((uint32_t)(0x10dfa210u));
  /* 10dd10cb push 0x10dff430 */
  push32((uint32_t)(0x10dff430u));
  /* 10dd10d0 call dword ptr [0x10e0243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0243c))), 0x10dd10d6u);
  /* 10dd10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd10db call 0x10dd2780 */
  push32(0x10dd10e0u); f_10dd2780();
  /* 10dd10e0 mov esi, esp */
  ESI = (ESP);
  /* 10dd10e2 push 0x10dfa208 */
  push32((uint32_t)(0x10dfa208u));
  /* 10dd10e7 push 0x10dff438 */
  push32((uint32_t)(0x10dff438u));
  /* 10dd10ec call dword ptr [0x10e0243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0243c))), 0x10dd10f2u);
  /* 10dd10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd10f7 call 0x10dd2780 */
  push32(0x10dd10fcu); f_10dd2780();
  /* 10dd10fc mov esi, esp */
  ESI = (ESP);
  /* 10dd10fe push 0x10dfa200 */
  push32((uint32_t)(0x10dfa200u));
  /* 10dd1103 push 0x10dff440 */
  push32((uint32_t)(0x10dff440u));
  /* 10dd1108 call dword ptr [0x10e0243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0243c))), 0x10dd110eu);
  /* 10dd110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1113 call 0x10dd2780 */
  push32(0x10dd1118u); f_10dd2780();
  /* 10dd1118 mov esi, esp */
  ESI = (ESP);
  /* 10dd111a push 0x10dfa1f8 */
  push32((uint32_t)(0x10dfa1f8u));
  /* 10dd111f push 0x10dff448 */
  push32((uint32_t)(0x10dff448u));
  /* 10dd1124 call dword ptr [0x10e0243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0243c))), 0x10dd112au);
  /* 10dd112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd112f call 0x10dd2780 */
  push32(0x10dd1134u); f_10dd2780();
  /* 10dd1134 mov esi, esp */
  ESI = (ESP);
  /* 10dd1136 push 0x10dfa1f0 */
  push32((uint32_t)(0x10dfa1f0u));
  /* 10dd113b push 0x10dff450 */
  push32((uint32_t)(0x10dff450u));
  /* 10dd1140 call dword ptr [0x10e0243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0243c))), 0x10dd1146u);
  /* 10dd1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd114b call 0x10dd2780 */
  push32(0x10dd1150u); f_10dd2780();
  /* 10dd1150 mov esi, esp */
  ESI = (ESP);
  /* 10dd1152 push 0x10dfa1e8 */
  push32((uint32_t)(0x10dfa1e8u));
  /* 10dd1157 push 0x10dff3e0 */
  push32((uint32_t)(0x10dff3e0u));
  /* 10dd115c call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1162u);
  /* 10dd1162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1167 call 0x10dd2780 */
  push32(0x10dd116cu); f_10dd2780();
  /* 10dd116c mov esi, esp */
  ESI = (ESP);
  /* 10dd116e push 0x10dfa1e0 */
  push32((uint32_t)(0x10dfa1e0u));
  /* 10dd1173 push 0x10dff3f0 */
  push32((uint32_t)(0x10dff3f0u));
  /* 10dd1178 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd117eu);
  /* 10dd117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1183 call 0x10dd2780 */
  push32(0x10dd1188u); f_10dd2780();
  /* 10dd1188 mov esi, esp */
  ESI = (ESP);
  /* 10dd118a push 0x10dfa1d8 */
  push32((uint32_t)(0x10dfa1d8u));
  /* 10dd118f push 0x10dff3e8 */
  push32((uint32_t)(0x10dff3e8u));
  /* 10dd1194 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd119au);
  /* 10dd119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd119f call 0x10dd2780 */
  push32(0x10dd11a4u); f_10dd2780();
  /* 10dd11a4 mov esi, esp */
  ESI = (ESP);
  /* 10dd11a6 push 0x10dfa1d0 */
  push32((uint32_t)(0x10dfa1d0u));
  /* 10dd11ab push 0x10dff400 */
  push32((uint32_t)(0x10dff400u));
  /* 10dd11b0 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd11b6u);
  /* 10dd11b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd11bb call 0x10dd2780 */
  push32(0x10dd11c0u); f_10dd2780();
  /* 10dd11c0 mov esi, esp */
  ESI = (ESP);
  /* 10dd11c2 push 0x10dfa1c8 */
  push32((uint32_t)(0x10dfa1c8u));
  /* 10dd11c7 push 0x10dff3f8 */
  push32((uint32_t)(0x10dff3f8u));
  /* 10dd11cc call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd11d2u);
  /* 10dd11d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd11d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd11d7 call 0x10dd2780 */
  push32(0x10dd11dcu); f_10dd2780();
  /* 10dd11dc mov esi, esp */
  ESI = (ESP);
  /* 10dd11de push 0x10dfa1c0 */
  push32((uint32_t)(0x10dfa1c0u));
  /* 10dd11e3 push 0x10dff410 */
  push32((uint32_t)(0x10dff410u));
  /* 10dd11e8 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd11eeu);
  /* 10dd11ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd11f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd11f3 call 0x10dd2780 */
  push32(0x10dd11f8u); f_10dd2780();
  /* 10dd11f8 mov esi, esp */
  ESI = (ESP);
  /* 10dd11fa push 0x10dfa1b8 */
  push32((uint32_t)(0x10dfa1b8u));
  /* 10dd11ff push 0x10dff408 */
  push32((uint32_t)(0x10dff408u));
  /* 10dd1204 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd120au);
  /* 10dd120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd120f call 0x10dd2780 */
  push32(0x10dd1214u); f_10dd2780();
  /* 10dd1214 mov esi, esp */
  ESI = (ESP);
  /* 10dd1216 push 0x10dfa1b0 */
  push32((uint32_t)(0x10dfa1b0u));
  /* 10dd121b push 0x10dff420 */
  push32((uint32_t)(0x10dff420u));
  /* 10dd1220 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1226u);
  /* 10dd1226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd122b call 0x10dd2780 */
  push32(0x10dd1230u); f_10dd2780();
  /* 10dd1230 mov esi, esp */
  ESI = (ESP);
  /* 10dd1232 push 0x10dfa1a8 */
  push32((uint32_t)(0x10dfa1a8u));
  /* 10dd1237 push 0x10dff418 */
  push32((uint32_t)(0x10dff418u));
  /* 10dd123c call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1242u);
  /* 10dd1242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1247 call 0x10dd2780 */
  push32(0x10dd124cu); f_10dd2780();
  /* 10dd124c mov esi, esp */
  ESI = (ESP);
  /* 10dd124e push 0x10dfa19c */
  push32((uint32_t)(0x10dfa19cu));
  /* 10dd1253 push 0x10dff488 */
  push32((uint32_t)(0x10dff488u));
  /* 10dd1258 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd125eu);
  /* 10dd125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1263 call 0x10dd2780 */
  push32(0x10dd1268u); f_10dd2780();
  /* 10dd1268 mov esi, esp */
  ESI = (ESP);
  /* 10dd126a push 0x10dfa190 */
  push32((uint32_t)(0x10dfa190u));
  /* 10dd126f push 0x10dff4f0 */
  push32((uint32_t)(0x10dff4f0u));
  /* 10dd1274 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd127au);
  /* 10dd127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd127f call 0x10dd2780 */
  push32(0x10dd1284u); f_10dd2780();
  /* 10dd1284 mov esi, esp */
  ESI = (ESP);
  /* 10dd1286 push 0x10dfa184 */
  push32((uint32_t)(0x10dfa184u));
  /* 10dd128b push 0x10dff4f8 */
  push32((uint32_t)(0x10dff4f8u));
  /* 10dd1290 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1296u);
  /* 10dd1296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd129b call 0x10dd2780 */
  push32(0x10dd12a0u); f_10dd2780();
  /* 10dd12a0 mov esi, esp */
  ESI = (ESP);
  /* 10dd12a2 push 0x10dfa178 */
  push32((uint32_t)(0x10dfa178u));
  /* 10dd12a7 push 0x10dff4d8 */
  push32((uint32_t)(0x10dff4d8u));
  /* 10dd12ac call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd12b2u);
  /* 10dd12b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd12b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd12b7 call 0x10dd2780 */
  push32(0x10dd12bcu); f_10dd2780();
  /* 10dd12bc mov esi, esp */
  ESI = (ESP);
  /* 10dd12be push 0x10dfa16c */
  push32((uint32_t)(0x10dfa16cu));
  /* 10dd12c3 push 0x10dff4e8 */
  push32((uint32_t)(0x10dff4e8u));
  /* 10dd12c8 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd12ceu);
  /* 10dd12ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd12d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd12d3 call 0x10dd2780 */
  push32(0x10dd12d8u); f_10dd2780();
  /* 10dd12d8 mov esi, esp */
  ESI = (ESP);
  /* 10dd12da push 0x10dfa160 */
  push32((uint32_t)(0x10dfa160u));
  /* 10dd12df push 0x10dff4c0 */
  push32((uint32_t)(0x10dff4c0u));
  /* 10dd12e4 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd12eau);
  /* 10dd12ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd12ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd12ef call 0x10dd2780 */
  push32(0x10dd12f4u); f_10dd2780();
  /* 10dd12f4 mov esi, esp */
  ESI = (ESP);
  /* 10dd12f6 push 0x10dfa154 */
  push32((uint32_t)(0x10dfa154u));
  /* 10dd12fb push 0x10dff4d0 */
  push32((uint32_t)(0x10dff4d0u));
  /* 10dd1300 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1306u);
  /* 10dd1306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd130b call 0x10dd2780 */
  push32(0x10dd1310u); f_10dd2780();
  /* 10dd1310 mov esi, esp */
  ESI = (ESP);
  /* 10dd1312 push 0x10dfa148 */
  push32((uint32_t)(0x10dfa148u));
  /* 10dd1317 push 0x10dff498 */
  push32((uint32_t)(0x10dff498u));
  /* 10dd131c call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1322u);
  /* 10dd1322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1327 call 0x10dd2780 */
  push32(0x10dd132cu); f_10dd2780();
  /* 10dd132c mov esi, esp */
  ESI = (ESP);
  /* 10dd132e push 0x10dfa13c */
  push32((uint32_t)(0x10dfa13cu));
  /* 10dd1333 push 0x10dff4b0 */
  push32((uint32_t)(0x10dff4b0u));
  /* 10dd1338 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd133eu);
  /* 10dd133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1343 call 0x10dd2780 */
  push32(0x10dd1348u); f_10dd2780();
  /* 10dd1348 mov esi, esp */
  ESI = (ESP);
  /* 10dd134a push 0x10dfa130 */
  push32((uint32_t)(0x10dfa130u));
  /* 10dd134f push 0x10dff528 */
  push32((uint32_t)(0x10dff528u));
  /* 10dd1354 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd135au);
  /* 10dd135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd135f call 0x10dd2780 */
  push32(0x10dd1364u); f_10dd2780();
  /* 10dd1364 mov esi, esp */
  ESI = (ESP);
  /* 10dd1366 push 0x10dfa124 */
  push32((uint32_t)(0x10dfa124u));
  /* 10dd136b push 0x10dff4e0 */
  push32((uint32_t)(0x10dff4e0u));
  /* 10dd1370 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1376u);
  /* 10dd1376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd137b call 0x10dd2780 */
  push32(0x10dd1380u); f_10dd2780();
  /* 10dd1380 mov esi, esp */
  ESI = (ESP);
  /* 10dd1382 push 0x10dfa118 */
  push32((uint32_t)(0x10dfa118u));
  /* 10dd1387 push 0x10dff4b8 */
  push32((uint32_t)(0x10dff4b8u));
  /* 10dd138c call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1392u);
  /* 10dd1392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1397 call 0x10dd2780 */
  push32(0x10dd139cu); f_10dd2780();
  /* 10dd139c mov esi, esp */
  ESI = (ESP);
  /* 10dd139e push 0x10dfa10c */
  push32((uint32_t)(0x10dfa10cu));
  /* 10dd13a3 push 0x10dff4c8 */
  push32((uint32_t)(0x10dff4c8u));
  /* 10dd13a8 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd13aeu);
  /* 10dd13ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd13b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd13b3 call 0x10dd2780 */
  push32(0x10dd13b8u); f_10dd2780();
  /* 10dd13b8 mov esi, esp */
  ESI = (ESP);
  /* 10dd13ba push 0x10dfa100 */
  push32((uint32_t)(0x10dfa100u));
  /* 10dd13bf push 0x10dff490 */
  push32((uint32_t)(0x10dff490u));
  /* 10dd13c4 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd13cau);
  /* 10dd13ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd13cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd13cf call 0x10dd2780 */
  push32(0x10dd13d4u); f_10dd2780();
  /* 10dd13d4 mov esi, esp */
  ESI = (ESP);
  /* 10dd13d6 push 0x10dfa0f4 */
  push32((uint32_t)(0x10dfa0f4u));
  /* 10dd13db push 0x10dff4a8 */
  push32((uint32_t)(0x10dff4a8u));
  /* 10dd13e0 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd13e6u);
  /* 10dd13e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd13e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd13eb call 0x10dd2780 */
  push32(0x10dd13f0u); f_10dd2780();
  /* 10dd13f0 mov esi, esp */
  ESI = (ESP);
  /* 10dd13f2 push 0x10dfa0e8 */
  push32((uint32_t)(0x10dfa0e8u));
  /* 10dd13f7 push 0x10dff520 */
  push32((uint32_t)(0x10dff520u));
  /* 10dd13fc call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1402u);
  /* 10dd1402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1407 call 0x10dd2780 */
  push32(0x10dd140cu); f_10dd2780();
  /* 10dd140c mov esi, esp */
  ESI = (ESP);
  /* 10dd140e push 0x10dfa0dc */
  push32((uint32_t)(0x10dfa0dcu));
  /* 10dd1413 push 0x10dff530 */
  push32((uint32_t)(0x10dff530u));
  /* 10dd1418 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd141eu);
  /* 10dd141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1423 call 0x10dd2780 */
  push32(0x10dd1428u); f_10dd2780();
  /* 10dd1428 mov esi, esp */
  ESI = (ESP);
  /* 10dd142a push 0x10dfa0d0 */
  push32((uint32_t)(0x10dfa0d0u));
  /* 10dd142f push 0x10dff508 */
  push32((uint32_t)(0x10dff508u));
  /* 10dd1434 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd143au);
  /* 10dd143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd143f call 0x10dd2780 */
  push32(0x10dd1444u); f_10dd2780();
  /* 10dd1444 mov esi, esp */
  ESI = (ESP);
  /* 10dd1446 push 0x10dfa0c4 */
  push32((uint32_t)(0x10dfa0c4u));
  /* 10dd144b push 0x10dff510 */
  push32((uint32_t)(0x10dff510u));
  /* 10dd1450 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1456u);
  /* 10dd1456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd145b call 0x10dd2780 */
  push32(0x10dd1460u); f_10dd2780();
  /* 10dd1460 mov esi, esp */
  ESI = (ESP);
  /* 10dd1462 push 0x10dfa0b8 */
  push32((uint32_t)(0x10dfa0b8u));
  /* 10dd1467 push 0x10dff500 */
  push32((uint32_t)(0x10dff500u));
  /* 10dd146c call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd1472u);
  /* 10dd1472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1477 call 0x10dd2780 */
  push32(0x10dd147cu); f_10dd2780();
  /* 10dd147c mov esi, esp */
  ESI = (ESP);
  /* 10dd147e push 0x10dfa0ac */
  push32((uint32_t)(0x10dfa0acu));
  /* 10dd1483 push 0x10dff4a0 */
  push32((uint32_t)(0x10dff4a0u));
  /* 10dd1488 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd148eu);
  /* 10dd148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1493 call 0x10dd2780 */
  push32(0x10dd1498u); f_10dd2780();
  /* 10dd1498 mov esi, esp */
  ESI = (ESP);
  /* 10dd149a push 0x10dfa0a0 */
  push32((uint32_t)(0x10dfa0a0u));
  /* 10dd149f push 0x10dff518 */
  push32((uint32_t)(0x10dff518u));
  /* 10dd14a4 call dword ptr [0x10e02440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02440))), 0x10dd14aau);
  /* 10dd14aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd14ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd14af call 0x10dd2780 */
  push32(0x10dd14b4u); f_10dd2780();
  /* 10dd14b4 mov esi, esp */
  ESI = (ESP);
  /* 10dd14b6 push 0x10dfa08c */
  push32((uint32_t)(0x10dfa08cu));
  /* 10dd14bb push 0x10dff458 */
  push32((uint32_t)(0x10dff458u));
  /* 10dd14c0 call dword ptr [0x10e02444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02444))), 0x10dd14c6u);
  /* 10dd14c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd14c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd14cb call 0x10dd2780 */
  push32(0x10dd14d0u); f_10dd2780();
  /* 10dd14d0 mov esi, esp */
  ESI = (ESP);
  /* 10dd14d2 push 0x10dfa078 */
  push32((uint32_t)(0x10dfa078u));
  /* 10dd14d7 push 0x10dff460 */
  push32((uint32_t)(0x10dff460u));
  /* 10dd14dc call dword ptr [0x10e02444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02444))), 0x10dd14e2u);
  /* 10dd14e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd14e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd14e7 call 0x10dd2780 */
  push32(0x10dd14ecu); f_10dd2780();
  /* 10dd14ec mov esi, esp */
  ESI = (ESP);
  /* 10dd14ee push 0x10dfa05c */
  push32((uint32_t)(0x10dfa05cu));
  /* 10dd14f3 push 0x10dff468 */
  push32((uint32_t)(0x10dff468u));
  /* 10dd14f8 call dword ptr [0x10e02444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02444))), 0x10dd14feu);
  /* 10dd14fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1503 call 0x10dd2780 */
  push32(0x10dd1508u); f_10dd2780();
  /* 10dd1508 mov esi, esp */
  ESI = (ESP);
  /* 10dd150a push 0x10dfa050 */
  push32((uint32_t)(0x10dfa050u));
  /* 10dd150f push 0x10dff470 */
  push32((uint32_t)(0x10dff470u));
  /* 10dd1514 call dword ptr [0x10e02444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02444))), 0x10dd151au);
  /* 10dd151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd151f call 0x10dd2780 */
  push32(0x10dd1524u); f_10dd2780();
  /* 10dd1524 mov esi, esp */
  ESI = (ESP);
  /* 10dd1526 push 0x10dfa040 */
  push32((uint32_t)(0x10dfa040u));
  /* 10dd152b push 0x10dff478 */
  push32((uint32_t)(0x10dff478u));
  /* 10dd1530 call dword ptr [0x10e02444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02444))), 0x10dd1536u);
  /* 10dd1536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd153b call 0x10dd2780 */
  push32(0x10dd1540u); f_10dd2780();
  /* 10dd1540 mov esi, esp */
  ESI = (ESP);
  /* 10dd1542 push 0x10dfa030 */
  push32((uint32_t)(0x10dfa030u));
  /* 10dd1547 push 0x10dff480 */
  push32((uint32_t)(0x10dff480u));
  /* 10dd154c call dword ptr [0x10e02444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02444))), 0x10dd1552u);
  /* 10dd1552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1557 call 0x10dd2780 */
  push32(0x10dd155cu); f_10dd2780();
  /* 10dd155c mov esi, esp */
  ESI = (ESP);
  /* 10dd155e call dword ptr [0x10e02448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02448))), 0x10dd1564u);
  /* 10dd1564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1566 call 0x10dd2780 */
  push32(0x10dd156bu); f_10dd2780();
  /* 10dd156b mov esi, esp */
  ESI = (ESP);
  /* 10dd156d push 0x10dfa028 */
  push32((uint32_t)(0x10dfa028u));
  /* 10dd1572 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1574 call dword ptr [0x10e0244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0244c))), 0x10dd157au);
  /* 10dd157a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd157d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd157f call 0x10dd2780 */
  push32(0x10dd1584u); f_10dd2780();
  /* 10dd1584 mov esi, esp */
  ESI = (ESP);
  /* 10dd1586 push 0x10dfa01c */
  push32((uint32_t)(0x10dfa01cu));
  /* 10dd158b push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd158d call dword ptr [0x10e0244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0244c))), 0x10dd1593u);
  /* 10dd1593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1596 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1598 call 0x10dd2780 */
  push32(0x10dd159du); f_10dd2780();
  /* 10dd159d mov esi, esp */
  ESI = (ESP);
  /* 10dd159f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd15a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd15a3 call dword ptr [0x10e02450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02450))), 0x10dd15a9u);
  /* 10dd15a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd15ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd15ae call 0x10dd2780 */
  push32(0x10dd15b3u); f_10dd2780();
  /* 10dd15b3 mov esi, esp */
  ESI = (ESP);
  /* 10dd15b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd15b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd15b9 call dword ptr [0x10e02450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02450))), 0x10dd15bfu);
  /* 10dd15bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd15c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd15c4 call 0x10dd2780 */
  push32(0x10dd15c9u); f_10dd2780();
  /* 10dd15c9 mov esi, esp */
  ESI = (ESP);
  /* 10dd15cb push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10dd15cd push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd15cf call dword ptr [0x10e02450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02450))), 0x10dd15d5u);
  /* 10dd15d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd15d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd15da call 0x10dd2780 */
  push32(0x10dd15dfu); f_10dd2780();
  /* 10dd15df pop edi */
  EDI = (pop32());
  /* 10dd15e0 pop esi */
  ESI = (pop32());
  /* 10dd15e1 pop ebx */
  EBX = (pop32());
  /* 10dd15e2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd15e5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd15e7 call 0x10dd2780 */
  push32(0x10dd15ecu); f_10dd2780();
  /* 10dd15ec mov esp, ebp */
  ESP = (EBP);
  /* 10dd15ee pop ebp */
  EBP = (pop32());
  /* 10dd15ef ret  */
  ESPCHK(0x10dd1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001750 @ 0x10dd1750 (3115 bytes, 929 insns) */
void f_10dd1750(void) {
  FTRACE(0x10dd1750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd1750 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd1751 mov ebp, esp */
  EBP = (ESP);
  /* 10dd1753 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd1756 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd1757 push esi */
  push32((uint32_t)(ESI));
  /* 10dd1758 push edi */
  push32((uint32_t)(EDI));
  /* 10dd1759 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10dd175c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10dd1761 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10dd1766 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10dd1768 mov esi, esp */
  ESI = (ESP);
  /* 10dd176a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10dd176c call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd1772u);
  /* 10dd1772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1777 call 0x10dd2780 */
  push32(0x10dd177cu); f_10dd2780();
  /* 10dd177c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1783 je 0x10dd1d0e */
  if (C.zf) goto L_10dd1d0e;
  /* 10dd1789 mov esi, esp */
  ESI = (ESP);
  /* 10dd178b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd178d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10dd178f call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd1795u);
  /* 10dd1795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1798 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd179a call 0x10dd2780 */
  push32(0x10dd179fu); f_10dd2780();
  /* 10dd179f mov esi, esp */
  ESI = (ESP);
  /* 10dd17a1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10dd17a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd17a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd17aa call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd17b0u);
  /* 10dd17b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd17b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd17b5 call 0x10dd2780 */
  push32(0x10dd17bau); f_10dd2780();
  /* 10dd17ba mov esi, esp */
  ESI = (ESP);
  /* 10dd17bc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10dd17c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd17c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd17c5 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd17cbu);
  /* 10dd17cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd17ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd17d0 call 0x10dd2780 */
  push32(0x10dd17d5u); f_10dd2780();
  /* 10dd17d5 mov esi, esp */
  ESI = (ESP);
  /* 10dd17d7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10dd17dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd17de push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd17e0 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd17e6u);
  /* 10dd17e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd17e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd17eb call 0x10dd2780 */
  push32(0x10dd17f0u); f_10dd2780();
  /* 10dd17f0 mov esi, esp */
  ESI = (ESP);
  /* 10dd17f2 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10dd17f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd17f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd17fb call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd1801u);
  /* 10dd1801 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1804 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1806 call 0x10dd2780 */
  push32(0x10dd180bu); f_10dd2780();
  /* 10dd180b mov esi, esp */
  ESI = (ESP);
  /* 10dd180d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10dd1812 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd1814 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1816 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd181cu);
  /* 10dd181c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd181f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1821 call 0x10dd2780 */
  push32(0x10dd1826u); f_10dd2780();
  /* 10dd1826 mov esi, esp */
  ESI = (ESP);
  /* 10dd1828 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10dd182d push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd182f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1831 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd1837u);
  /* 10dd1837 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd183a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd183c call 0x10dd2780 */
  push32(0x10dd1841u); f_10dd2780();
  /* 10dd1841 mov esi, esp */
  ESI = (ESP);
  /* 10dd1843 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10dd1848 push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd184a push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd184c call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd1852u);
  /* 10dd1852 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1855 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1857 call 0x10dd2780 */
  push32(0x10dd185cu); f_10dd2780();
  /* 10dd185c mov esi, esp */
  ESI = (ESP);
  /* 10dd185e push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10dd1863 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1865 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1867 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd186du);
  /* 10dd186d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1870 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1872 call 0x10dd2780 */
  push32(0x10dd1877u); f_10dd2780();
  /* 10dd1877 mov esi, esp */
  ESI = (ESP);
  /* 10dd1879 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10dd187e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1880 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1882 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd1888u);
  /* 10dd1888 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd188b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd188d call 0x10dd2780 */
  push32(0x10dd1892u); f_10dd2780();
  /* 10dd1892 mov esi, esp */
  ESI = (ESP);
  /* 10dd1894 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10dd1899 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd189b push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd189d call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd18a3u);
  /* 10dd18a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd18a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd18a8 call 0x10dd2780 */
  push32(0x10dd18adu); f_10dd2780();
  /* 10dd18ad mov esi, esp */
  ESI = (ESP);
  /* 10dd18af push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10dd18b4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd18b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd18b8 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd18beu);
  /* 10dd18be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd18c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd18c3 call 0x10dd2780 */
  push32(0x10dd18c8u); f_10dd2780();
  /* 10dd18c8 mov esi, esp */
  ESI = (ESP);
  /* 10dd18ca push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10dd18cf push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd18d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd18d3 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd18d9u);
  /* 10dd18d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd18dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd18de call 0x10dd2780 */
  push32(0x10dd18e3u); f_10dd2780();
  /* 10dd18e3 mov esi, esp */
  ESI = (ESP);
  /* 10dd18e5 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10dd18ea push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd18ec push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd18ee call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd18f4u);
  /* 10dd18f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd18f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd18f9 call 0x10dd2780 */
  push32(0x10dd18feu); f_10dd2780();
  /* 10dd18fe mov esi, esp */
  ESI = (ESP);
  /* 10dd1900 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10dd1905 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1907 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd1909 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd190fu);
  /* 10dd190f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1912 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1914 call 0x10dd2780 */
  push32(0x10dd1919u); f_10dd2780();
  /* 10dd1919 mov esi, esp */
  ESI = (ESP);
  /* 10dd191b push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10dd1920 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1922 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd1924 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd192au);
  /* 10dd192a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd192d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd192f call 0x10dd2780 */
  push32(0x10dd1934u); f_10dd2780();
  /* 10dd1934 mov esi, esp */
  ESI = (ESP);
  /* 10dd1936 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10dd193b push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd193d push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd193f call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd1945u);
  /* 10dd1945 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1948 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd194a call 0x10dd2780 */
  push32(0x10dd194fu); f_10dd2780();
  /* 10dd194f mov esi, esp */
  ESI = (ESP);
  /* 10dd1951 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10dd1956 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd1958 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd195a call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd1960u);
  /* 10dd1960 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1963 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1965 call 0x10dd2780 */
  push32(0x10dd196au); f_10dd2780();
  /* 10dd196a mov esi, esp */
  ESI = (ESP);
  /* 10dd196c push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10dd1971 push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd1973 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd1975 call dword ptr [0x10e023f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f8))), 0x10dd197bu);
  /* 10dd197b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd197e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1980 call 0x10dd2780 */
  push32(0x10dd1985u); f_10dd2780();
  /* 10dd1985 mov esi, esp */
  ESI = (ESP);
  /* 10dd1987 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1989 push 0x10dff410 */
  push32((uint32_t)(0x10dff410u));
  /* 10dd198e push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1990 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1996u);
  /* 10dd1996 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1999 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd199b call 0x10dd2780 */
  push32(0x10dd19a0u); f_10dd2780();
  /* 10dd19a0 mov esi, esp */
  ESI = (ESP);
  /* 10dd19a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd19a4 push 0x10dff408 */
  push32((uint32_t)(0x10dff408u));
  /* 10dd19a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd19ab call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd19b1u);
  /* 10dd19b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd19b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd19b6 call 0x10dd2780 */
  push32(0x10dd19bbu); f_10dd2780();
  /* 10dd19bb mov esi, esp */
  ESI = (ESP);
  /* 10dd19bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd19bf push 0x10dff418 */
  push32((uint32_t)(0x10dff418u));
  /* 10dd19c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd19c6 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd19ccu);
  /* 10dd19cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd19cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd19d1 call 0x10dd2780 */
  push32(0x10dd19d6u); f_10dd2780();
  /* 10dd19d6 mov esi, esp */
  ESI = (ESP);
  /* 10dd19d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd19da push 0x10dff420 */
  push32((uint32_t)(0x10dff420u));
  /* 10dd19df push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd19e1 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd19e7u);
  /* 10dd19e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd19ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd19ec call 0x10dd2780 */
  push32(0x10dd19f1u); f_10dd2780();
  /* 10dd19f1 mov esi, esp */
  ESI = (ESP);
  /* 10dd19f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd19f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd19f7 call dword ptr [0x10e02400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02400))), 0x10dd19fdu);
  /* 10dd19fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1a00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1a02 call 0x10dd2780 */
  push32(0x10dd1a07u); f_10dd2780();
  /* 10dd1a07 mov esi, esp */
  ESI = (ESP);
  /* 10dd1a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1a0b push 0x10dff3f0 */
  push32((uint32_t)(0x10dff3f0u));
  /* 10dd1a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a12 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1a18u);
  /* 10dd1a18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1a1d call 0x10dd2780 */
  push32(0x10dd1a22u); f_10dd2780();
  /* 10dd1a22 mov esi, esp */
  ESI = (ESP);
  /* 10dd1a24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a26 push 0x10dff510 */
  push32((uint32_t)(0x10dff510u));
  /* 10dd1a2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a2d call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1a33u);
  /* 10dd1a33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1a38 call 0x10dd2780 */
  push32(0x10dd1a3du); f_10dd2780();
  /* 10dd1a3d mov esi, esp */
  ESI = (ESP);
  /* 10dd1a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a41 push 0x10dff500 */
  push32((uint32_t)(0x10dff500u));
  /* 10dd1a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a48 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1a4eu);
  /* 10dd1a4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1a51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1a53 call 0x10dd2780 */
  push32(0x10dd1a58u); f_10dd2780();
  /* 10dd1a58 mov esi, esp */
  ESI = (ESP);
  /* 10dd1a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a5c push 0x10dff4e8 */
  push32((uint32_t)(0x10dff4e8u));
  /* 10dd1a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a63 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1a69u);
  /* 10dd1a69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1a6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1a6e call 0x10dd2780 */
  push32(0x10dd1a73u); f_10dd2780();
  /* 10dd1a73 mov esi, esp */
  ESI = (ESP);
  /* 10dd1a75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a77 push 0x10dff488 */
  push32((uint32_t)(0x10dff488u));
  /* 10dd1a7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a7e call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1a84u);
  /* 10dd1a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1a87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1a89 call 0x10dd2780 */
  push32(0x10dd1a8eu); f_10dd2780();
  /* 10dd1a8e mov esi, esp */
  ESI = (ESP);
  /* 10dd1a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a92 push 0x10dff4f0 */
  push32((uint32_t)(0x10dff4f0u));
  /* 10dd1a97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1a99 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1a9fu);
  /* 10dd1a9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1aa4 call 0x10dd2780 */
  push32(0x10dd1aa9u); f_10dd2780();
  /* 10dd1aa9 mov esi, esp */
  ESI = (ESP);
  /* 10dd1aab push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1aad push 0x10dff4f8 */
  push32((uint32_t)(0x10dff4f8u));
  /* 10dd1ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1ab4 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1abau);
  /* 10dd1aba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1abd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1abf call 0x10dd2780 */
  push32(0x10dd1ac4u); f_10dd2780();
  /* 10dd1ac4 mov esi, esp */
  ESI = (ESP);
  /* 10dd1ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1ac8 push 0x10dff4d8 */
  push32((uint32_t)(0x10dff4d8u));
  /* 10dd1acd push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1acf call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1ad5u);
  /* 10dd1ad5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1ad8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1ada call 0x10dd2780 */
  push32(0x10dd1adfu); f_10dd2780();
  /* 10dd1adf mov esi, esp */
  ESI = (ESP);
  /* 10dd1ae1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1ae3 push 0x10dff4b8 */
  push32((uint32_t)(0x10dff4b8u));
  /* 10dd1ae8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1aea call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1af0u);
  /* 10dd1af0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1af3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1af5 call 0x10dd2780 */
  push32(0x10dd1afau); f_10dd2780();
  /* 10dd1afa mov esi, esp */
  ESI = (ESP);
  /* 10dd1afc push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1afe push 0x10dff4c8 */
  push32((uint32_t)(0x10dff4c8u));
  /* 10dd1b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b05 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1b0bu);
  /* 10dd1b0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1b10 call 0x10dd2780 */
  push32(0x10dd1b15u); f_10dd2780();
  /* 10dd1b15 mov esi, esp */
  ESI = (ESP);
  /* 10dd1b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b19 push 0x10dff528 */
  push32((uint32_t)(0x10dff528u));
  /* 10dd1b1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b20 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1b26u);
  /* 10dd1b26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1b29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1b2b call 0x10dd2780 */
  push32(0x10dd1b30u); f_10dd2780();
  /* 10dd1b30 mov esi, esp */
  ESI = (ESP);
  /* 10dd1b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b34 push 0x10dff4b0 */
  push32((uint32_t)(0x10dff4b0u));
  /* 10dd1b39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b3b call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1b41u);
  /* 10dd1b41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1b44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1b46 call 0x10dd2780 */
  push32(0x10dd1b4bu); f_10dd2780();
  /* 10dd1b4b mov esi, esp */
  ESI = (ESP);
  /* 10dd1b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b4f push 0x10dff4d0 */
  push32((uint32_t)(0x10dff4d0u));
  /* 10dd1b54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b56 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1b5cu);
  /* 10dd1b5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1b5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1b61 call 0x10dd2780 */
  push32(0x10dd1b66u); f_10dd2780();
  /* 10dd1b66 mov esi, esp */
  ESI = (ESP);
  /* 10dd1b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b6a push 0x10dff498 */
  push32((uint32_t)(0x10dff498u));
  /* 10dd1b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b71 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1b77u);
  /* 10dd1b77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1b7c call 0x10dd2780 */
  push32(0x10dd1b81u); f_10dd2780();
  /* 10dd1b81 mov esi, esp */
  ESI = (ESP);
  /* 10dd1b83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b85 push 0x10dff4e0 */
  push32((uint32_t)(0x10dff4e0u));
  /* 10dd1b8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1b8c call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1b92u);
  /* 10dd1b92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1b95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1b97 call 0x10dd2780 */
  push32(0x10dd1b9cu); f_10dd2780();
  /* 10dd1b9c mov esi, esp */
  ESI = (ESP);
  /* 10dd1b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1ba0 push 0x10dff4c0 */
  push32((uint32_t)(0x10dff4c0u));
  /* 10dd1ba5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1ba7 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1badu);
  /* 10dd1bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1bb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1bb2 call 0x10dd2780 */
  push32(0x10dd1bb7u); f_10dd2780();
  /* 10dd1bb7 mov esi, esp */
  ESI = (ESP);
  /* 10dd1bb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1bbb push 0x10dff530 */
  push32((uint32_t)(0x10dff530u));
  /* 10dd1bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1bc2 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1bc8u);
  /* 10dd1bc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1bcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1bcd call 0x10dd2780 */
  push32(0x10dd1bd2u); f_10dd2780();
  /* 10dd1bd2 mov esi, esp */
  ESI = (ESP);
  /* 10dd1bd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1bd6 push 0x10dff508 */
  push32((uint32_t)(0x10dff508u));
  /* 10dd1bdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1bdd call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1be3u);
  /* 10dd1be3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1be6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1be8 call 0x10dd2780 */
  push32(0x10dd1bedu); f_10dd2780();
  /* 10dd1bed mov esi, esp */
  ESI = (ESP);
  /* 10dd1bef push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1bf1 push 0x10dff4a8 */
  push32((uint32_t)(0x10dff4a8u));
  /* 10dd1bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1bf8 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1bfeu);
  /* 10dd1bfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1c03 call 0x10dd2780 */
  push32(0x10dd1c08u); f_10dd2780();
  /* 10dd1c08 mov esi, esp */
  ESI = (ESP);
  /* 10dd1c0a push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c0c push 0x10dff490 */
  push32((uint32_t)(0x10dff490u));
  /* 10dd1c11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c13 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1c19u);
  /* 10dd1c19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1c1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1c1e call 0x10dd2780 */
  push32(0x10dd1c23u); f_10dd2780();
  /* 10dd1c23 mov esi, esp */
  ESI = (ESP);
  /* 10dd1c25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c27 push 0x10dff520 */
  push32((uint32_t)(0x10dff520u));
  /* 10dd1c2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c2e call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1c34u);
  /* 10dd1c34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1c37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1c39 call 0x10dd2780 */
  push32(0x10dd1c3eu); f_10dd2780();
  /* 10dd1c3e mov esi, esp */
  ESI = (ESP);
  /* 10dd1c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c42 call dword ptr [0x10e02404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02404))), 0x10dd1c48u);
  /* 10dd1c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1c4d call 0x10dd2780 */
  push32(0x10dd1c52u); f_10dd2780();
  /* 10dd1c52 mov esi, esp */
  ESI = (ESP);
  /* 10dd1c54 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10dd1c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1c58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c5c push 0x10dfa250 */
  push32((uint32_t)(0x10dfa250u));
  /* 10dd1c61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c63 call dword ptr [0x10e02408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02408))), 0x10dd1c69u);
  /* 10dd1c69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1c6e call 0x10dd2780 */
  push32(0x10dd1c73u); f_10dd2780();
  /* 10dd1c73 mov esi, esp */
  ESI = (ESP);
  /* 10dd1c75 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10dd1c77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1c79 call dword ptr [0x10e0240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0240c))), 0x10dd1c7fu);
  /* 10dd1c7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1c84 call 0x10dd2780 */
  push32(0x10dd1c89u); f_10dd2780();
  /* 10dd1c89 mov esi, esp */
  ESI = (ESP);
  /* 10dd1c8b push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10dd1c90 push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd1c92 call dword ptr [0x10e0240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0240c))), 0x10dd1c98u);
  /* 10dd1c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1c9d call 0x10dd2780 */
  push32(0x10dd1ca2u); f_10dd2780();
  /* 10dd1ca2 mov esi, esp */
  ESI = (ESP);
  /* 10dd1ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1ca6 push 0x10dff458 */
  push32((uint32_t)(0x10dff458u));
  /* 10dd1cab push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1cad call dword ptr [0x10e02410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02410))), 0x10dd1cb3u);
  /* 10dd1cb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1cb8 call 0x10dd2780 */
  push32(0x10dd1cbdu); f_10dd2780();
  /* 10dd1cbd mov esi, esp */
  ESI = (ESP);
  /* 10dd1cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1cc1 push 0x10dff460 */
  push32((uint32_t)(0x10dff460u));
  /* 10dd1cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1cc8 call dword ptr [0x10e02410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02410))), 0x10dd1cceu);
  /* 10dd1cce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1cd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1cd3 call 0x10dd2780 */
  push32(0x10dd1cd8u); f_10dd2780();
  /* 10dd1cd8 mov esi, esp */
  ESI = (ESP);
  /* 10dd1cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1cdc push 0x10dff468 */
  push32((uint32_t)(0x10dff468u));
  /* 10dd1ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1ce3 call dword ptr [0x10e02410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02410))), 0x10dd1ce9u);
  /* 10dd1ce9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1cec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1cee call 0x10dd2780 */
  push32(0x10dd1cf3u); f_10dd2780();
  /* 10dd1cf3 mov esi, esp */
  ESI = (ESP);
  /* 10dd1cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1cf7 push 0x10dff470 */
  push32((uint32_t)(0x10dff470u));
  /* 10dd1cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1cfe call dword ptr [0x10e02410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02410))), 0x10dd1d04u);
  /* 10dd1d04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1d09 call 0x10dd2780 */
  push32(0x10dd1d0eu); f_10dd2780();
L_10dd1d0e:;
  /* 10dd1d0e mov esi, esp */
  ESI = (ESP);
  /* 10dd1d10 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10dd1d12 call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd1d18u);
  /* 10dd1d18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1d1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1d1d call 0x10dd2780 */
  push32(0x10dd1d22u); f_10dd2780();
  /* 10dd1d22 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1d29 je 0x10dd1db5 */
  if (C.zf) goto L_10dd1db5;
  /* 10dd1d2f mov esi, esp */
  ESI = (ESP);
  /* 10dd1d31 push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd1d33 call dword ptr [0x10e02414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02414))), 0x10dd1d39u);
  /* 10dd1d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1d3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1d3e call 0x10dd2780 */
  push32(0x10dd1d43u); f_10dd2780();
  /* 10dd1d43 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1d4a je 0x10dd1db5 */
  if (C.zf) goto L_10dd1db5;
  /* 10dd1d4c mov esi, esp */
  ESI = (ESP);
  /* 10dd1d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1d50 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10dd1d52 call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd1d58u);
  /* 10dd1d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1d5d call 0x10dd2780 */
  push32(0x10dd1d62u); f_10dd2780();
  /* 10dd1d62 mov esi, esp */
  ESI = (ESP);
  /* 10dd1d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1d66 push 0x10dff510 */
  push32((uint32_t)(0x10dff510u));
  /* 10dd1d6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1d6d call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1d73u);
  /* 10dd1d73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1d76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1d78 call 0x10dd2780 */
  push32(0x10dd1d7du); f_10dd2780();
  /* 10dd1d7d mov esi, esp */
  ESI = (ESP);
  /* 10dd1d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1d81 push 0x10dff500 */
  push32((uint32_t)(0x10dff500u));
  /* 10dd1d86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1d88 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1d8eu);
  /* 10dd1d8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1d91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1d93 call 0x10dd2780 */
  push32(0x10dd1d98u); f_10dd2780();
  /* 10dd1d98 mov esi, esp */
  ESI = (ESP);
  /* 10dd1d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1d9c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10dd1d9e push 0x10dff438 */
  push32((uint32_t)(0x10dff438u));
  /* 10dd1da3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1da5 call dword ptr [0x10e02418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02418))), 0x10dd1dabu);
  /* 10dd1dab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1dae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1db0 call 0x10dd2780 */
  push32(0x10dd1db5u); f_10dd2780();
L_10dd1db5:;
  /* 10dd1db5 mov esi, esp */
  ESI = (ESP);
  /* 10dd1db7 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10dd1db9 call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd1dbfu);
  /* 10dd1dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1dc4 call 0x10dd2780 */
  push32(0x10dd1dc9u); f_10dd2780();
  /* 10dd1dc9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1dd0 je 0x10dd1e11 */
  if (C.zf) goto L_10dd1e11;
  /* 10dd1dd2 mov esi, esp */
  ESI = (ESP);
  /* 10dd1dd4 push 0x10dff510 */
  push32((uint32_t)(0x10dff510u));
  /* 10dd1dd9 push 0x10dff438 */
  push32((uint32_t)(0x10dff438u));
  /* 10dd1dde call dword ptr [0x10e0241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0241c))), 0x10dd1de4u);
  /* 10dd1de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1de7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1de9 call 0x10dd2780 */
  push32(0x10dd1deeu); f_10dd2780();
  /* 10dd1dee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1df1 jle 0x10dd1e11 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd1e11;
  /* 10dd1df3 mov esi, esp */
  ESI = (ESP);
  /* 10dd1df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1df7 push 0x10dff450 */
  push32((uint32_t)(0x10dff450u));
  /* 10dd1dfc push 0x10dff510 */
  push32((uint32_t)(0x10dff510u));
  /* 10dd1e01 call dword ptr [0x10e02420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02420))), 0x10dd1e07u);
  /* 10dd1e07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1e0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1e0c call 0x10dd2780 */
  push32(0x10dd1e11u); f_10dd2780();
L_10dd1e11:;
  /* 10dd1e11 mov esi, esp */
  ESI = (ESP);
  /* 10dd1e13 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10dd1e15 call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd1e1bu);
  /* 10dd1e1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1e1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1e20 call 0x10dd2780 */
  push32(0x10dd1e25u); f_10dd2780();
  /* 10dd1e25 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1e2c je 0x10dd1ee1 */
  if (C.zf) goto L_10dd1ee1;
  /* 10dd1e32 mov esi, esp */
  ESI = (ESP);
  /* 10dd1e34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1e36 call dword ptr [0x10e02414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02414))), 0x10dd1e3cu);
  /* 10dd1e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1e3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1e41 call 0x10dd2780 */
  push32(0x10dd1e46u); f_10dd2780();
  /* 10dd1e46 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1e4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1e4d je 0x10dd1ee1 */
  if (C.zf) goto L_10dd1ee1;
  /* 10dd1e53 mov esi, esp */
  ESI = (ESP);
  /* 10dd1e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1e57 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10dd1e59 call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd1e5fu);
  /* 10dd1e5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1e62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1e64 call 0x10dd2780 */
  push32(0x10dd1e69u); f_10dd2780();
  /* 10dd1e69 mov esi, esp */
  ESI = (ESP);
  /* 10dd1e6b push 0x10dfa248 */
  push32((uint32_t)(0x10dfa248u));
  /* 10dd1e70 call dword ptr [0x10e02424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02424))), 0x10dd1e76u);
  /* 10dd1e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1e7b call 0x10dd2780 */
  push32(0x10dd1e80u); f_10dd2780();
  /* 10dd1e80 mov esi, esp */
  ESI = (ESP);
  /* 10dd1e82 push 0x10dfa240 */
  push32((uint32_t)(0x10dfa240u));
  /* 10dd1e87 call dword ptr [0x10e02424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02424))), 0x10dd1e8du);
  /* 10dd1e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1e90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1e92 call 0x10dd2780 */
  push32(0x10dd1e97u); f_10dd2780();
  /* 10dd1e97 mov esi, esp */
  ESI = (ESP);
  /* 10dd1e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1e9b push 0x10dff4a0 */
  push32((uint32_t)(0x10dff4a0u));
  /* 10dd1ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1ea2 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1ea8u);
  /* 10dd1ea8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1eab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1ead call 0x10dd2780 */
  push32(0x10dd1eb2u); f_10dd2780();
  /* 10dd1eb2 mov esi, esp */
  ESI = (ESP);
  /* 10dd1eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1eb6 push 0x10dff518 */
  push32((uint32_t)(0x10dff518u));
  /* 10dd1ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1ebd call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd1ec3u);
  /* 10dd1ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1ec6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1ec8 call 0x10dd2780 */
  push32(0x10dd1ecdu); f_10dd2780();
  /* 10dd1ecd mov esi, esp */
  ESI = (ESP);
  /* 10dd1ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1ed1 call dword ptr [0x10e02428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02428))), 0x10dd1ed7u);
  /* 10dd1ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1edc call 0x10dd2780 */
  push32(0x10dd1ee1u); f_10dd2780();
L_10dd1ee1:;
  /* 10dd1ee1 mov esi, esp */
  ESI = (ESP);
  /* 10dd1ee3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10dd1ee5 call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd1eebu);
  /* 10dd1eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1eee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1ef0 call 0x10dd2780 */
  push32(0x10dd1ef5u); f_10dd2780();
  /* 10dd1ef5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1efc je 0x10dd1f89 */
  if (C.zf) goto L_10dd1f89;
  /* 10dd1f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1f04 push 0x10dff478 */
  push32((uint32_t)(0x10dff478u));
  /* 10dd1f09 call 0x10dd100a */
  push32(0x10dd1f0eu); f_10dd100a();
  /* 10dd1f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1f13 jle 0x10dd1f89 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd1f89;
  /* 10dd1f15 mov esi, esp */
  ESI = (ESP);
  /* 10dd1f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1f19 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10dd1f1b call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd1f21u);
  /* 10dd1f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1f26 call 0x10dd2780 */
  push32(0x10dd1f2bu); f_10dd2780();
  /* 10dd1f2b mov esi, esp */
  ESI = (ESP);
  /* 10dd1f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1f31 push 0x10dff478 */
  push32((uint32_t)(0x10dff478u));
  /* 10dd1f36 call dword ptr [0x10e0242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0242c))), 0x10dd1f3cu);
  /* 10dd1f3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1f3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1f41 call 0x10dd2780 */
  push32(0x10dd1f46u); f_10dd2780();
  /* 10dd1f46 mov esi, esp */
  ESI = (ESP);
  /* 10dd1f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1f4a call dword ptr [0x10e02428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02428))), 0x10dd1f50u);
  /* 10dd1f50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1f53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1f55 call 0x10dd2780 */
  push32(0x10dd1f5au); f_10dd2780();
  /* 10dd1f5a mov esi, esp */
  ESI = (ESP);
  /* 10dd1f5c push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10dd1f61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd1f63 call dword ptr [0x10e0240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0240c))), 0x10dd1f69u);
  /* 10dd1f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1f6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1f6e call 0x10dd2780 */
  push32(0x10dd1f73u); f_10dd2780();
  /* 10dd1f73 mov esi, esp */
  ESI = (ESP);
  /* 10dd1f75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1f77 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10dd1f79 call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd1f7fu);
  /* 10dd1f7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1f82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1f84 call 0x10dd2780 */
  push32(0x10dd1f89u); f_10dd2780();
L_10dd1f89:;
  /* 10dd1f89 mov esi, esp */
  ESI = (ESP);
  /* 10dd1f8b push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10dd1f8d call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd1f93u);
  /* 10dd1f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1f96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1f98 call 0x10dd2780 */
  push32(0x10dd1f9du); f_10dd2780();
  /* 10dd1f9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1fa4 je 0x10dd1fef */
  if (C.zf) goto L_10dd1fef;
  /* 10dd1fa6 mov esi, esp */
  ESI = (ESP);
  /* 10dd1fa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd1faa call dword ptr [0x10e02414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02414))), 0x10dd1fb0u);
  /* 10dd1fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1fb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1fb5 call 0x10dd2780 */
  push32(0x10dd1fbau); f_10dd2780();
  /* 10dd1fba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd1fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd1fc1 je 0x10dd1fef */
  if (C.zf) goto L_10dd1fef;
  /* 10dd1fc3 mov esi, esp */
  ESI = (ESP);
  /* 10dd1fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd1fc7 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10dd1fc9 call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd1fcfu);
  /* 10dd1fcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1fd4 call 0x10dd2780 */
  push32(0x10dd1fd9u); f_10dd2780();
  /* 10dd1fd9 mov esi, esp */
  ESI = (ESP);
  /* 10dd1fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd1fdd push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10dd1fdf call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd1fe5u);
  /* 10dd1fe5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1fe8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1fea call 0x10dd2780 */
  push32(0x10dd1fefu); f_10dd2780();
L_10dd1fef:;
  /* 10dd1fef mov esi, esp */
  ESI = (ESP);
  /* 10dd1ff1 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10dd1ff3 call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd1ff9u);
  /* 10dd1ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd1ffc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd1ffe call 0x10dd2780 */
  push32(0x10dd2003u); f_10dd2780();
  /* 10dd2003 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd200a je 0x10dd20c7 */
  if (C.zf) goto L_10dd20c7;
  /* 10dd2010 mov esi, esp */
  ESI = (ESP);
  /* 10dd2012 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd2014 push 0x10dff430 */
  push32((uint32_t)(0x10dff430u));
  /* 10dd2019 call dword ptr [0x10e02430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02430))), 0x10dd201fu);
  /* 10dd201f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2022 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2024 call 0x10dd2780 */
  push32(0x10dd2029u); f_10dd2780();
  /* 10dd2029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd202b jne 0x10dd20c7 */
  if (!C.zf) goto L_10dd20c7;
  /* 10dd2031 mov esi, esp */
  ESI = (ESP);
  /* 10dd2033 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2035 push 0x10dff430 */
  push32((uint32_t)(0x10dff430u));
  /* 10dd203a call dword ptr [0x10e02430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02430))), 0x10dd2040u);
  /* 10dd2040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2043 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2045 call 0x10dd2780 */
  push32(0x10dd204au); f_10dd2780();
  /* 10dd204a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd204c jle 0x10dd20c7 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd20c7;
  /* 10dd204e mov esi, esp */
  ESI = (ESP);
  /* 10dd2050 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2052 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10dd2054 call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd205au);
  /* 10dd205a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd205d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd205f call 0x10dd2780 */
  push32(0x10dd2064u); f_10dd2780();
  /* 10dd2064 mov esi, esp */
  ESI = (ESP);
  /* 10dd2066 push 0x10dfa238 */
  push32((uint32_t)(0x10dfa238u));
  /* 10dd206b call dword ptr [0x10e02424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02424))), 0x10dd2071u);
  /* 10dd2071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2074 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2076 call 0x10dd2780 */
  push32(0x10dd207bu); f_10dd2780();
  /* 10dd207b mov esi, esp */
  ESI = (ESP);
  /* 10dd207d push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd207f push 0x10dff410 */
  push32((uint32_t)(0x10dff410u));
  /* 10dd2084 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd2086 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd208cu);
  /* 10dd208c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd208f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2091 call 0x10dd2780 */
  push32(0x10dd2096u); f_10dd2780();
  /* 10dd2096 mov esi, esp */
  ESI = (ESP);
  /* 10dd2098 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd209a push 0x10dff420 */
  push32((uint32_t)(0x10dff420u));
  /* 10dd209f push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd20a1 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd20a7u);
  /* 10dd20a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd20aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd20ac call 0x10dd2780 */
  push32(0x10dd20b1u); f_10dd2780();
  /* 10dd20b1 mov esi, esp */
  ESI = (ESP);
  /* 10dd20b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd20b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd20b7 call dword ptr [0x10e02400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02400))), 0x10dd20bdu);
  /* 10dd20bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd20c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd20c2 call 0x10dd2780 */
  push32(0x10dd20c7u); f_10dd2780();
L_10dd20c7:;
  /* 10dd20c7 mov esi, esp */
  ESI = (ESP);
  /* 10dd20c9 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10dd20cb call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd20d1u);
  /* 10dd20d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd20d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd20d6 call 0x10dd2780 */
  push32(0x10dd20dbu); f_10dd2780();
  /* 10dd20db and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd20e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd20e2 je 0x10dd2180 */
  if (C.zf) goto L_10dd2180;
  /* 10dd20e8 mov esi, esp */
  ESI = (ESP);
  /* 10dd20ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd20ec push 0x10dff440 */
  push32((uint32_t)(0x10dff440u));
  /* 10dd20f1 call dword ptr [0x10e02430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02430))), 0x10dd20f7u);
  /* 10dd20f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd20fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd20fc call 0x10dd2780 */
  push32(0x10dd2101u); f_10dd2780();
  /* 10dd2101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2103 jne 0x10dd2180 */
  if (!C.zf) goto L_10dd2180;
  /* 10dd2105 mov esi, esp */
  ESI = (ESP);
  /* 10dd2107 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2109 push 0x10dff440 */
  push32((uint32_t)(0x10dff440u));
  /* 10dd210e call dword ptr [0x10e02430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02430))), 0x10dd2114u);
  /* 10dd2114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2117 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2119 call 0x10dd2780 */
  push32(0x10dd211eu); f_10dd2780();
  /* 10dd211e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2120 jle 0x10dd2180 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd2180;
  /* 10dd2122 mov esi, esp */
  ESI = (ESP);
  /* 10dd2124 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2126 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10dd2128 call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd212eu);
  /* 10dd212e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2131 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2133 call 0x10dd2780 */
  push32(0x10dd2138u); f_10dd2780();
  /* 10dd2138 mov esi, esp */
  ESI = (ESP);
  /* 10dd213a push 0x10dfa230 */
  push32((uint32_t)(0x10dfa230u));
  /* 10dd213f call dword ptr [0x10e02424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02424))), 0x10dd2145u);
  /* 10dd2145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2148 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd214a call 0x10dd2780 */
  push32(0x10dd214fu); f_10dd2780();
  /* 10dd214f mov esi, esp */
  ESI = (ESP);
  /* 10dd2151 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2153 push 0x10dff408 */
  push32((uint32_t)(0x10dff408u));
  /* 10dd2158 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd215a call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd2160u);
  /* 10dd2160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2165 call 0x10dd2780 */
  push32(0x10dd216au); f_10dd2780();
  /* 10dd216a mov esi, esp */
  ESI = (ESP);
  /* 10dd216c push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd216e push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd2170 call dword ptr [0x10e02400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02400))), 0x10dd2176u);
  /* 10dd2176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2179 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd217b call 0x10dd2780 */
  push32(0x10dd2180u); f_10dd2780();
L_10dd2180:;
  /* 10dd2180 mov esi, esp */
  ESI = (ESP);
  /* 10dd2182 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10dd2184 call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd218au);
  /* 10dd218a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd218d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd218f call 0x10dd2780 */
  push32(0x10dd2194u); f_10dd2780();
  /* 10dd2194 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd219b je 0x10dd2239 */
  if (C.zf) goto L_10dd2239;
  /* 10dd21a1 mov esi, esp */
  ESI = (ESP);
  /* 10dd21a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd21a5 push 0x10dff448 */
  push32((uint32_t)(0x10dff448u));
  /* 10dd21aa call dword ptr [0x10e02430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02430))), 0x10dd21b0u);
  /* 10dd21b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd21b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd21b5 call 0x10dd2780 */
  push32(0x10dd21bau); f_10dd2780();
  /* 10dd21ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd21bc jne 0x10dd2239 */
  if (!C.zf) goto L_10dd2239;
  /* 10dd21be mov esi, esp */
  ESI = (ESP);
  /* 10dd21c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd21c2 push 0x10dff448 */
  push32((uint32_t)(0x10dff448u));
  /* 10dd21c7 call dword ptr [0x10e02430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02430))), 0x10dd21cdu);
  /* 10dd21cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd21d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd21d2 call 0x10dd2780 */
  push32(0x10dd21d7u); f_10dd2780();
  /* 10dd21d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd21d9 jle 0x10dd2239 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd2239;
  /* 10dd21db mov esi, esp */
  ESI = (ESP);
  /* 10dd21dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd21df push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10dd21e1 call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd21e7u);
  /* 10dd21e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd21ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd21ec call 0x10dd2780 */
  push32(0x10dd21f1u); f_10dd2780();
  /* 10dd21f1 mov esi, esp */
  ESI = (ESP);
  /* 10dd21f3 push 0x10dfa228 */
  push32((uint32_t)(0x10dfa228u));
  /* 10dd21f8 call dword ptr [0x10e02424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02424))), 0x10dd21feu);
  /* 10dd21fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2203 call 0x10dd2780 */
  push32(0x10dd2208u); f_10dd2780();
  /* 10dd2208 mov esi, esp */
  ESI = (ESP);
  /* 10dd220a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd220c push 0x10dff418 */
  push32((uint32_t)(0x10dff418u));
  /* 10dd2211 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd2213 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd2219u);
  /* 10dd2219 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd221c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd221e call 0x10dd2780 */
  push32(0x10dd2223u); f_10dd2780();
  /* 10dd2223 mov esi, esp */
  ESI = (ESP);
  /* 10dd2225 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2227 push 5 */
  push32((uint32_t)(0x5u));
  /* 10dd2229 call dword ptr [0x10e02400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02400))), 0x10dd222fu);
  /* 10dd222f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2232 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2234 call 0x10dd2780 */
  push32(0x10dd2239u); f_10dd2780();
L_10dd2239:;
  /* 10dd2239 mov esi, esp */
  ESI = (ESP);
  /* 10dd223b push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10dd223d call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd2243u);
  /* 10dd2243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2246 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2248 call 0x10dd2780 */
  push32(0x10dd224du); f_10dd2780();
  /* 10dd224d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2254 je 0x10dd22c0 */
  if (C.zf) goto L_10dd22c0;
  /* 10dd2256 mov esi, esp */
  ESI = (ESP);
  /* 10dd2258 push 0x10dff3e0 */
  push32((uint32_t)(0x10dff3e0u));
  /* 10dd225d push 0x10dff428 */
  push32((uint32_t)(0x10dff428u));
  /* 10dd2262 call dword ptr [0x10e0241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0241c))), 0x10dd2268u);
  /* 10dd2268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd226b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd226d call 0x10dd2780 */
  push32(0x10dd2272u); f_10dd2780();
  /* 10dd2272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2274 jne 0x10dd22c0 */
  if (!C.zf) goto L_10dd22c0;
  /* 10dd2276 mov esi, esp */
  ESI = (ESP);
  /* 10dd2278 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd227a push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10dd227c call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd2282u);
  /* 10dd2282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2287 call 0x10dd2780 */
  push32(0x10dd228cu); f_10dd2780();
  /* 10dd228c mov esi, esp */
  ESI = (ESP);
  /* 10dd228e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2290 push 0x10dff3f0 */
  push32((uint32_t)(0x10dff3f0u));
  /* 10dd2295 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd2297 call dword ptr [0x10e023fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023fc))), 0x10dd229du);
  /* 10dd229d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd22a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd22a2 call 0x10dd2780 */
  push32(0x10dd22a7u); f_10dd2780();
  /* 10dd22a7 mov esi, esp */
  ESI = (ESP);
  /* 10dd22a9 push 0x10dff3e0 */
  push32((uint32_t)(0x10dff3e0u));
  /* 10dd22ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd22b0 call dword ptr [0x10e02434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02434))), 0x10dd22b6u);
  /* 10dd22b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd22b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd22bb call 0x10dd2780 */
  push32(0x10dd22c0u); f_10dd2780();
L_10dd22c0:;
  /* 10dd22c0 mov esi, esp */
  ESI = (ESP);
  /* 10dd22c2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10dd22c4 call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd22cau);
  /* 10dd22ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd22cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd22cf call 0x10dd2780 */
  push32(0x10dd22d4u); f_10dd2780();
  /* 10dd22d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd22d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd22db je 0x10dd236a */
  if (C.zf) goto L_10dd236a;
  /* 10dd22e1 mov esi, esp */
  ESI = (ESP);
  /* 10dd22e3 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10dd22e5 call dword ptr [0x10e023f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f0))), 0x10dd22ebu);
  /* 10dd22eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd22ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd22f0 call 0x10dd2780 */
  push32(0x10dd22f5u); f_10dd2780();
  /* 10dd22f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd22fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd22fc je 0x10dd236a */
  if (C.zf) goto L_10dd236a;
  /* 10dd22fe mov esi, esp */
  ESI = (ESP);
  /* 10dd2300 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd2302 call dword ptr [0x10e02414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02414))), 0x10dd2308u);
  /* 10dd2308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd230b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd230d call 0x10dd2780 */
  push32(0x10dd2312u); f_10dd2780();
  /* 10dd2312 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2317 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2319 je 0x10dd236a */
  if (C.zf) goto L_10dd236a;
  /* 10dd231b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd231d push 0x10dff480 */
  push32((uint32_t)(0x10dff480u));
  /* 10dd2322 call 0x10dd100a */
  push32(0x10dd2327u); f_10dd100a();
  /* 10dd2327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd232a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd232c jne 0x10dd236a */
  if (!C.zf) goto L_10dd236a;
  /* 10dd232e mov esi, esp */
  ESI = (ESP);
  /* 10dd2330 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2332 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10dd2334 call dword ptr [0x10e023f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023f4))), 0x10dd233au);
  /* 10dd233a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd233d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd233f call 0x10dd2780 */
  push32(0x10dd2344u); f_10dd2780();
  /* 10dd2344 mov esi, esp */
  ESI = (ESP);
  /* 10dd2346 push 0x10dfa220 */
  push32((uint32_t)(0x10dfa220u));
  /* 10dd234b call dword ptr [0x10e02424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02424))), 0x10dd2351u);
  /* 10dd2351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2356 call 0x10dd2780 */
  push32(0x10dd235bu); f_10dd2780();
  /* 10dd235b mov esi, esp */
  ESI = (ESP);
  /* 10dd235d call dword ptr [0x10e02438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02438))), 0x10dd2363u);
  /* 10dd2363 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2365 call 0x10dd2780 */
  push32(0x10dd236au); f_10dd2780();
L_10dd236a:;
  /* 10dd236a pop edi */
  EDI = (pop32());
  /* 10dd236b pop esi */
  ESI = (pop32());
  /* 10dd236c pop ebx */
  EBX = (pop32());
  /* 10dd236d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2370 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2372 call 0x10dd2780 */
  push32(0x10dd2377u); f_10dd2780();
  /* 10dd2377 mov esp, ebp */
  ESP = (EBP);
  /* 10dd2379 pop ebp */
  EBP = (pop32());
  /* 10dd237a ret  */
  ESPCHK(0x10dd1750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002690 @ 0x10dd2690 (67 bytes, 28 insns) */
void f_10dd2690(void) {
  FTRACE(0x10dd2690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2690 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2691 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2693 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd2696 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd2697 push esi */
  push32((uint32_t)(ESI));
  /* 10dd2698 push edi */
  push32((uint32_t)(EDI));
  /* 10dd2699 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10dd269c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10dd26a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10dd26a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10dd26a8 mov esi, esp */
  ESI = (ESP);
  /* 10dd26aa mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10dd26ad push eax */
  push32((uint32_t)(EAX));
  /* 10dd26ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd26b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd26b2 call dword ptr [0x10e023ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e023ec))), 0x10dd26b8u);
  /* 10dd26b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd26bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd26bd call 0x10dd2780 */
  push32(0x10dd26c2u); f_10dd2780();
  /* 10dd26c2 pop edi */
  EDI = (pop32());
  /* 10dd26c3 pop esi */
  ESI = (pop32());
  /* 10dd26c4 pop ebx */
  EBX = (pop32());
  /* 10dd26c5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd26c8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd26ca call 0x10dd2780 */
  push32(0x10dd26cfu); f_10dd2780();
  /* 10dd26cf mov esp, ebp */
  ESP = (EBP);
  /* 10dd26d1 pop ebp */
  EBP = (pop32());
  /* 10dd26d2 ret  */
  ESPCHK(0x10dd2690u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10dd2780 (56 bytes, 28 insns) */
void f_10dd2780(void) {
  FTRACE(0x10dd2780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2780 jne 0x10dd2783 */
  if (!C.zf) goto L_10dd2783;
  /* 10dd2782 ret  */
  ESPCHK(0x10dd2780u, _esp0);
  ESP += 4; return;
L_10dd2783:;
  /* 10dd2783 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2784 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2786 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd2789 push eax */
  push32((uint32_t)(EAX));
  /* 10dd278a push edx */
  push32((uint32_t)(EDX));
  /* 10dd278b push ebx */
  push32((uint32_t)(EBX));
  /* 10dd278c push esi */
  push32((uint32_t)(ESI));
  /* 10dd278d push edi */
  push32((uint32_t)(EDI));
  /* 10dd278e push 0x10dfa270 */
  push32((uint32_t)(0x10dfa270u));
  /* 10dd2793 push 0x10dfa26c */
  push32((uint32_t)(0x10dfa26cu));
  /* 10dd2798 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10dd279a push 0x10dfa25c */
  push32((uint32_t)(0x10dfa25cu));
  /* 10dd279f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd27a1 call 0x10dd2b50 */
  push32(0x10dd27a6u); f_10dd2b50();
  /* 10dd27a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd27a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd27ac jne 0x10dd27af */
  if (!C.zf) goto L_10dd27af;
  /* 10dd27ae int3  */
  x86_unimpl("int3 @ 0x10dd27ae");
L_10dd27af:;
  /* 10dd27af pop edi */
  EDI = (pop32());
  /* 10dd27b0 pop esi */
  ESI = (pop32());
  /* 10dd27b1 pop ebx */
  EBX = (pop32());
  /* 10dd27b2 pop edx */
  EDX = (pop32());
  /* 10dd27b3 pop eax */
  EAX = (pop32());
  /* 10dd27b4 mov esp, ebp */
  ESP = (EBP);
  /* 10dd27b6 pop ebp */
  EBP = (pop32());
  /* 10dd27b7 ret  */
  ESPCHK(0x10dd2780u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x10dd27c0 (313 bytes, 78 insns) */
void f_10dd27c0(void) {
  FTRACE(0x10dd27c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd27c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd27c1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd27c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd27c7 jne 0x10dd2887 */
  if (!C.zf) goto L_10dd2887;
  /* 10dd27cd call dword ptr [0x10e022d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022d4))), 0x10dd27d3u);
  /* 10dd27d3 mov dword ptr [0x10dff5a0], eax */
  w32((uint32_t)(0x10dff5a0), (EAX));
  /* 10dd27d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd27da call 0x10dd6280 */
  push32(0x10dd27dfu); f_10dd6280();
  /* 10dd27df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd27e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd27e4 jne 0x10dd27ed */
  if (!C.zf) goto L_10dd27ed;
  /* 10dd27e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd27e8 jmp 0x10dd28f5 */
  goto L_10dd28f5;
L_10dd27ed:;
  /* 10dd27ed mov eax, dword ptr [0x10dff5a0] */
  EAX = (r32((uint32_t)(0x10dff5a0)));
  /* 10dd27f2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10dd27f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd27fa mov dword ptr [0x10dff5ac], eax */
  w32((uint32_t)(0x10dff5ac), (EAX));
  /* 10dd27ff mov ecx, dword ptr [0x10dff5a0] */
  ECX = (r32((uint32_t)(0x10dff5a0)));
  /* 10dd2805 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd280b mov dword ptr [0x10dff5a8], ecx */
  w32((uint32_t)(0x10dff5a8), (ECX));
  /* 10dd2811 mov edx, dword ptr [0x10dff5a8] */
  EDX = (r32((uint32_t)(0x10dff5a8)));
  /* 10dd2817 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10dd281a add edx, dword ptr [0x10dff5ac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dff5ac))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2820 mov dword ptr [0x10dff5a4], edx */
  w32((uint32_t)(0x10dff5a4), (EDX));
  /* 10dd2826 mov eax, dword ptr [0x10dff5a0] */
  EAX = (r32((uint32_t)(0x10dff5a0)));
  /* 10dd282b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10dd282e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2833 mov dword ptr [0x10dff5a0], eax */
  w32((uint32_t)(0x10dff5a0), (EAX));
  /* 10dd2838 call 0x10dd33f0 */
  push32(0x10dd283du); f_10dd33f0();
  /* 10dd283d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd283f jne 0x10dd284d */
  if (!C.zf) goto L_10dd284d;
  /* 10dd2841 call 0x10dd62d0 */
  push32(0x10dd2846u); f_10dd62d0();
  /* 10dd2846 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2848 jmp 0x10dd28f5 */
  goto L_10dd28f5;
L_10dd284d:;
  /* 10dd284d call dword ptr [0x10e022d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022d0))), 0x10dd2853u);
  /* 10dd2853 mov dword ptr [0x10e010ec], eax */
  w32((uint32_t)(0x10e010ec), (EAX));
  /* 10dd2858 call 0x10dd6060 */
  push32(0x10dd285du); f_10dd6060();
  /* 10dd285d mov dword ptr [0x10dff588], eax */
  w32((uint32_t)(0x10dff588), (EAX));
  /* 10dd2862 call 0x10dd36a0 */
  push32(0x10dd2867u); f_10dd36a0();
  /* 10dd2867 call 0x10dd5b50 */
  push32(0x10dd286cu); f_10dd5b50();
  /* 10dd286c call 0x10dd5a00 */
  push32(0x10dd2871u); f_10dd5a00();
  /* 10dd2871 call 0x10dd31f0 */
  push32(0x10dd2876u); f_10dd31f0();
  /* 10dd2876 mov ecx, dword ptr [0x10dff584] */
  ECX = (r32((uint32_t)(0x10dff584)));
  /* 10dd287c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd287f mov dword ptr [0x10dff584], ecx */
  w32((uint32_t)(0x10dff584), (ECX));
  /* 10dd2885 jmp 0x10dd28f0 */
  goto L_10dd28f0;
L_10dd2887:;
  /* 10dd2887 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd288b jne 0x10dd28e0 */
  if (!C.zf) goto L_10dd28e0;
  /* 10dd288d cmp dword ptr [0x10dff584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2894 jle 0x10dd28da */
  if ((C.zf||C.sf!=C.of)) goto L_10dd28da;
  /* 10dd2896 mov edx, dword ptr [0x10dff584] */
  EDX = (r32((uint32_t)(0x10dff584)));
  /* 10dd289c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd289f mov dword ptr [0x10dff584], edx */
  w32((uint32_t)(0x10dff584), (EDX));
  /* 10dd28a5 cmp dword ptr [0x10dff5d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd28ac jne 0x10dd28b3 */
  if (!C.zf) goto L_10dd28b3;
  /* 10dd28ae call 0x10dd3270 */
  push32(0x10dd28b3u); f_10dd3270();
L_10dd28b3:;
  /* 10dd28b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10dd28b5 call 0x10dd4fa0 */
  push32(0x10dd28bau); f_10dd4fa0();
  /* 10dd28ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd28bd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd28c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd28c2 je 0x10dd28c9 */
  if (C.zf) goto L_10dd28c9;
  /* 10dd28c4 call 0x10dd58b0 */
  push32(0x10dd28c9u); f_10dd58b0();
L_10dd28c9:;
  /* 10dd28c9 call 0x10dd39d0 */
  push32(0x10dd28ceu); f_10dd39d0();
  /* 10dd28ce call 0x10dd3480 */
  push32(0x10dd28d3u); f_10dd3480();
  /* 10dd28d3 call 0x10dd62d0 */
  push32(0x10dd28d8u); f_10dd62d0();
  /* 10dd28d8 jmp 0x10dd28de */
  goto L_10dd28de;
L_10dd28da:;
  /* 10dd28da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd28dc jmp 0x10dd28f5 */
  goto L_10dd28f5;
L_10dd28de:;
  /* 10dd28de jmp 0x10dd28f0 */
  goto L_10dd28f0;
L_10dd28e0:;
  /* 10dd28e0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd28e4 jne 0x10dd28f0 */
  if (!C.zf) goto L_10dd28f0;
  /* 10dd28e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd28e8 call 0x10dd3570 */
  push32(0x10dd28edu); f_10dd3570();
  /* 10dd28ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd28f0:;
  /* 10dd28f0 mov eax, 1 */
  EAX = (0x1u);
L_10dd28f5:;
  /* 10dd28f5 pop ebp */
  EBP = (pop32());
  /* 10dd28f6 ret 0xc */
  ESPCHK(0x10dd27c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10dd2900 (243 bytes, 86 insns) */
void f_10dd2900(void) {
  FTRACE(0x10dd2900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2900 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2901 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2903 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2904 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10dd290b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd290f jne 0x10dd2921 */
  if (!C.zf) goto L_10dd2921;
  /* 10dd2911 cmp dword ptr [0x10dff584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2918 jne 0x10dd2921 */
  if (!C.zf) goto L_10dd2921;
  /* 10dd291a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd291c jmp 0x10dd29ed */
  goto L_10dd29ed;
L_10dd2921:;
  /* 10dd2921 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2925 je 0x10dd292d */
  if (C.zf) goto L_10dd292d;
  /* 10dd2927 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd292b jne 0x10dd296f */
  if (!C.zf) goto L_10dd296f;
L_10dd292d:;
  /* 10dd292d cmp dword ptr [0x10e010fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2934 je 0x10dd294b */
  if (C.zf) goto L_10dd294b;
  /* 10dd2936 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd2939 push eax */
  push32((uint32_t)(EAX));
  /* 10dd293a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd293d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd293e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2941 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2942 call dword ptr [0x10e010fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e010fc))), 0x10dd2948u);
  /* 10dd2948 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd294b:;
  /* 10dd294b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd294f je 0x10dd2965 */
  if (C.zf) goto L_10dd2965;
  /* 10dd2951 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd2954 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2955 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd2958 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd295c push edx */
  push32((uint32_t)(EDX));
  /* 10dd295d call 0x10dd27c0 */
  push32(0x10dd2962u); f_10dd27c0();
  /* 10dd2962 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd2965:;
  /* 10dd2965 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2969 jne 0x10dd296f */
  if (!C.zf) goto L_10dd296f;
  /* 10dd296b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd296d jmp 0x10dd29ed */
  goto L_10dd29ed;
L_10dd296f:;
  /* 10dd296f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd2972 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd2976 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd297a push edx */
  push32((uint32_t)(EDX));
  /* 10dd297b call 0x10dd100f */
  push32(0x10dd2980u); f_10dd100f();
  /* 10dd2980 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd2983 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2987 jne 0x10dd299e */
  if (!C.zf) goto L_10dd299e;
  /* 10dd2989 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd298d jne 0x10dd299e */
  if (!C.zf) goto L_10dd299e;
  /* 10dd298f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd2992 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2993 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2995 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2998 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2999 call 0x10dd27c0 */
  push32(0x10dd299eu); f_10dd27c0();
L_10dd299e:;
  /* 10dd299e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd29a2 je 0x10dd29aa */
  if (C.zf) goto L_10dd29aa;
  /* 10dd29a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd29a8 jne 0x10dd29ea */
  if (!C.zf) goto L_10dd29ea;
L_10dd29aa:;
  /* 10dd29aa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd29ad push edx */
  push32((uint32_t)(EDX));
  /* 10dd29ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd29b1 push eax */
  push32((uint32_t)(EAX));
  /* 10dd29b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd29b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd29b6 call 0x10dd27c0 */
  push32(0x10dd29bbu); f_10dd27c0();
  /* 10dd29bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd29bd jne 0x10dd29c6 */
  if (!C.zf) goto L_10dd29c6;
  /* 10dd29bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10dd29c6:;
  /* 10dd29c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd29ca je 0x10dd29ea */
  if (C.zf) goto L_10dd29ea;
  /* 10dd29cc cmp dword ptr [0x10e010fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd29d3 je 0x10dd29ea */
  if (C.zf) goto L_10dd29ea;
  /* 10dd29d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd29d8 push edx */
  push32((uint32_t)(EDX));
  /* 10dd29d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd29dc push eax */
  push32((uint32_t)(EAX));
  /* 10dd29dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd29e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd29e1 call dword ptr [0x10e010fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e010fc))), 0x10dd29e7u);
  /* 10dd29e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd29ea:;
  /* 10dd29ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10dd29ed:;
  /* 10dd29ed mov esp, ebp */
  ESP = (EBP);
  /* 10dd29ef pop ebp */
  EBP = (pop32());
  /* 10dd29f0 ret 0xc */
  ESPCHK(0x10dd2900u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10dd2a00 (58 bytes, 18 insns) */
void f_10dd2a00(void) {
  FTRACE(0x10dd2a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2a01 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2a03 cmp dword ptr [0x10dff590], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff590))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2a0a je 0x10dd2a1e */
  if (C.zf) goto L_10dd2a1e;
  /* 10dd2a0c cmp dword ptr [0x10dff590], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff590))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2a13 jne 0x10dd2a23 */
  if (!C.zf) goto L_10dd2a23;
  /* 10dd2a15 cmp dword ptr [0x10dff594], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff594))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2a1c jne 0x10dd2a23 */
  if (!C.zf) goto L_10dd2a23;
L_10dd2a1e:;
  /* 10dd2a1e call 0x10dd6370 */
  push32(0x10dd2a23u); f_10dd6370();
L_10dd2a23:;
  /* 10dd2a23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2a26 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2a27 call 0x10dd63c0 */
  push32(0x10dd2a2cu); f_10dd63c0();
  /* 10dd2a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2a2f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10dd2a34 call dword ptr [0x10dfda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dfda30))), 0x10dd2a3au);
  /* 10dd2a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2a3d pop ebp */
  EBP = (pop32());
  /* 10dd2a3e ret  */
  ESPCHK(0x10dd2a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a40 @ 0x10dd2a40 (11 bytes, 5 insns) */
void f_10dd2a40(void) {
  FTRACE(0x10dd2a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2a41 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2a43 call dword ptr [0x10e022d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022d8))), 0x10dd2a49u);
  /* 10dd2a49 pop ebp */
  EBP = (pop32());
  /* 10dd2a4a ret  */
  ESPCHK(0x10dd2a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a50 @ 0x10dd2a50 (87 bytes, 30 insns) */
void f_10dd2a50(void) {
  FTRACE(0x10dd2a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2a51 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2a58 jl 0x10dd2a60 */
  if ((C.sf!=C.of)) goto L_10dd2a60;
  /* 10dd2a5a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2a5e jl 0x10dd2a65 */
  if ((C.sf!=C.of)) goto L_10dd2a65;
L_10dd2a60:;
  /* 10dd2a60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2a63 jmp 0x10dd2aa3 */
  goto L_10dd2aa3;
L_10dd2a65:;
  /* 10dd2a65 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2a69 jne 0x10dd2a77 */
  if (!C.zf) goto L_10dd2a77;
  /* 10dd2a6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2a6e mov eax, dword ptr [eax*4 + 0x10dfda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10dfda38)));
  /* 10dd2a75 jmp 0x10dd2aa3 */
  goto L_10dd2aa3;
L_10dd2a77:;
  /* 10dd2a77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd2a7a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd2a7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd2a7f je 0x10dd2a86 */
  if (C.zf) goto L_10dd2a86;
  /* 10dd2a81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2a84 jmp 0x10dd2aa3 */
  goto L_10dd2aa3;
L_10dd2a86:;
  /* 10dd2a86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2a89 mov eax, dword ptr [edx*4 + 0x10dfda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dfda38)));
  /* 10dd2a90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd2a93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2a96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd2a99 mov dword ptr [ecx*4 + 0x10dfda38], edx */
  w32((uint32_t)(ECX*4 + 0x10dfda38), (EDX));
  /* 10dd2aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10dd2aa3:;
  /* 10dd2aa3 mov esp, ebp */
  ESP = (EBP);
  /* 10dd2aa5 pop ebp */
  EBP = (pop32());
  /* 10dd2aa6 ret  */
  ESPCHK(0x10dd2a50u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10dd2ab0 (126 bytes, 38 insns) */
void f_10dd2ab0(void) {
  FTRACE(0x10dd2ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2ab4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2ab8 jl 0x10dd2ac0 */
  if ((C.sf!=C.of)) goto L_10dd2ac0;
  /* 10dd2aba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2abe jl 0x10dd2ac7 */
  if ((C.sf!=C.of)) goto L_10dd2ac7;
L_10dd2ac0:;
  /* 10dd2ac0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10dd2ac5 jmp 0x10dd2b2a */
  goto L_10dd2b2a;
L_10dd2ac7:;
  /* 10dd2ac7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2acb jne 0x10dd2ad9 */
  if (!C.zf) goto L_10dd2ad9;
  /* 10dd2acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2ad0 mov eax, dword ptr [eax*4 + 0x10dfda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10dfda44)));
  /* 10dd2ad7 jmp 0x10dd2b2a */
  goto L_10dd2b2a;
L_10dd2ad9:;
  /* 10dd2ad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2adc mov edx, dword ptr [ecx*4 + 0x10dfda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfda44)));
  /* 10dd2ae3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd2ae6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2aea jne 0x10dd2b00 */
  if (!C.zf) goto L_10dd2b00;
  /* 10dd2aec push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10dd2aee call dword ptr [0x10e022dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022dc))), 0x10dd2af4u);
  /* 10dd2af4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2af7 mov dword ptr [ecx*4 + 0x10dfda44], eax */
  w32((uint32_t)(ECX*4 + 0x10dfda44), (EAX));
  /* 10dd2afe jmp 0x10dd2b27 */
  goto L_10dd2b27;
L_10dd2b00:;
  /* 10dd2b00 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2b04 jne 0x10dd2b1a */
  if (!C.zf) goto L_10dd2b1a;
  /* 10dd2b06 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10dd2b08 call dword ptr [0x10e022dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022dc))), 0x10dd2b0eu);
  /* 10dd2b0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2b11 mov dword ptr [edx*4 + 0x10dfda44], eax */
  w32((uint32_t)(EDX*4 + 0x10dfda44), (EAX));
  /* 10dd2b18 jmp 0x10dd2b27 */
  goto L_10dd2b27;
L_10dd2b1a:;
  /* 10dd2b1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2b1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd2b20 mov dword ptr [eax*4 + 0x10dfda44], ecx */
  w32((uint32_t)(EAX*4 + 0x10dfda44), (ECX));
L_10dd2b27:;
  /* 10dd2b27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10dd2b2a:;
  /* 10dd2b2a mov esp, ebp */
  ESP = (EBP);
  /* 10dd2b2c pop ebp */
  EBP = (pop32());
  /* 10dd2b2d ret  */
  ESPCHK(0x10dd2ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b30 @ 0x10dd2b30 (28 bytes, 11 insns) */
void f_10dd2b30(void) {
  FTRACE(0x10dd2b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2b31 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2b34 mov eax, dword ptr [0x10e010e0] */
  EAX = (r32((uint32_t)(0x10e010e0)));
  /* 10dd2b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd2b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2b3f mov dword ptr [0x10e010e0], ecx */
  w32((uint32_t)(0x10e010e0), (ECX));
  /* 10dd2b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd2b48 mov esp, ebp */
  ESP = (EBP);
  /* 10dd2b4a pop ebp */
  EBP = (pop32());
  /* 10dd2b4b ret  */
  ESPCHK(0x10dd2b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x10dd2b50 (912 bytes, 248 insns) */
void f_10dd2b50(void) {
  FTRACE(0x10dd2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2b51 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2b53 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10dd2b58 call 0x10dd6c30 */
  push32(0x10dd2b5du); f_10dd6c30();
  /* 10dd2b5d push edi */
  push32((uint32_t)(EDI));
  /* 10dd2b5e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10dd2b65 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10dd2b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2b6c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10dd2b72 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10dd2b74 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10dd2b76 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10dd2b77 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10dd2b7e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10dd2b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2b85 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10dd2b8b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10dd2b8d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10dd2b8f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10dd2b90 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10dd2b97 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10dd2b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2b9e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10dd2ba4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10dd2ba6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10dd2ba8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10dd2ba9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10dd2bac mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10dd2bb2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2bb6 jl 0x10dd2bbe */
  if ((C.sf!=C.of)) goto L_10dd2bbe;
  /* 10dd2bb8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2bbc jl 0x10dd2bc6 */
  if ((C.sf!=C.of)) goto L_10dd2bc6;
L_10dd2bbe:;
  /* 10dd2bbe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2bc1 jmp 0x10dd2edb */
  goto L_10dd2edb;
L_10dd2bc6:;
  /* 10dd2bc6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2bca jne 0x10dd2c70 */
  if (!C.zf) goto L_10dd2c70;
  /* 10dd2bd0 push 0x10dfda34 */
  push32((uint32_t)(0x10dfda34u));
  /* 10dd2bd5 call dword ptr [0x10e022f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f4))), 0x10dd2bdbu);
  /* 10dd2bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2bdd jle 0x10dd2c70 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd2c70;
  /* 10dd2be3 cmp dword ptr [0x10dff598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2bea jne 0x10dd2c2e */
  if (!C.zf) goto L_10dd2c2e;
  /* 10dd2bec push 0x10dfa418 */
  push32((uint32_t)(0x10dfa418u));
  /* 10dd2bf1 call dword ptr [0x10e022f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f0))), 0x10dd2bf7u);
  /* 10dd2bf7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10dd2bfd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2c04 je 0x10dd2c26 */
  if (C.zf) goto L_10dd2c26;
  /* 10dd2c06 push 0x10dfa40c */
  push32((uint32_t)(0x10dfa40cu));
  /* 10dd2c0b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10dd2c11 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2c12 call dword ptr [0x10e022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022ec))), 0x10dd2c18u);
  /* 10dd2c18 mov dword ptr [0x10dff598], eax */
  w32((uint32_t)(0x10dff598), (EAX));
  /* 10dd2c1d cmp dword ptr [0x10dff598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2c24 jne 0x10dd2c2e */
  if (!C.zf) goto L_10dd2c2e;
L_10dd2c26:;
  /* 10dd2c26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2c29 jmp 0x10dd2edb */
  goto L_10dd2edb;
L_10dd2c2e:;
  /* 10dd2c2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd2c31 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2c32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd2c35 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2c36 push 0x10dfa3d8 */
  push32((uint32_t)(0x10dfa3d8u));
  /* 10dd2c3b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2c41 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2c42 call dword ptr [0x10dff598] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff598))), 0x10dd2c48u);
  /* 10dd2c48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2c4b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2c51 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2c52 call dword ptr [0x10e022e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e8))), 0x10dd2c58u);
  /* 10dd2c58 push 0x10dfda34 */
  push32((uint32_t)(0x10dfda34u));
  /* 10dd2c5d call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10dd2c63u);
  /* 10dd2c63 call 0x10dd2a40 */
  push32(0x10dd2c68u); f_10dd2a40();
  /* 10dd2c68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2c6b jmp 0x10dd2edb */
  goto L_10dd2edb;
L_10dd2c70:;
  /* 10dd2c70 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2c74 je 0x10dd2cad */
  if (C.zf) goto L_10dd2cad;
  /* 10dd2c76 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10dd2c7c push eax */
  push32((uint32_t)(EAX));
  /* 10dd2c7d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd2c80 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2c81 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10dd2c86 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10dd2c8c push edx */
  push32((uint32_t)(EDX));
  /* 10dd2c8d call 0x10dd6b30 */
  push32(0x10dd2c92u); f_10dd6b30();
  /* 10dd2c92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2c95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2c97 jge 0x10dd2cad */
  if ((C.sf==C.of)) goto L_10dd2cad;
  /* 10dd2c99 push 0x10dfa3ac */
  push32((uint32_t)(0x10dfa3acu));
  /* 10dd2c9e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10dd2ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2ca5 call 0x10dd6a40 */
  push32(0x10dd2caau); f_10dd6a40();
  /* 10dd2caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2cad:;
  /* 10dd2cad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2cb1 jne 0x10dd2ce5 */
  if (!C.zf) goto L_10dd2ce5;
  /* 10dd2cb3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2cb7 je 0x10dd2cc5 */
  if (C.zf) goto L_10dd2cc5;
  /* 10dd2cb9 mov dword ptr [ebp - 0x3028], 0x10dfa398 */
  w32((uint32_t)(EBP + -0x3028), (0x10dfa398u));
  /* 10dd2cc3 jmp 0x10dd2ccf */
  goto L_10dd2ccf;
L_10dd2cc5:;
  /* 10dd2cc5 mov dword ptr [ebp - 0x3028], 0x10dfa384 */
  w32((uint32_t)(EBP + -0x3028), (0x10dfa384u));
L_10dd2ccf:;
  /* 10dd2ccf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10dd2cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2cd6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10dd2cdc push edx */
  push32((uint32_t)(EDX));
  /* 10dd2cdd call 0x10dd6a40 */
  push32(0x10dd2ce2u); f_10dd6a40();
  /* 10dd2ce2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2ce5:;
  /* 10dd2ce5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10dd2ceb push eax */
  push32((uint32_t)(EAX));
  /* 10dd2cec lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10dd2cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2cf3 call 0x10dd6a50 */
  push32(0x10dd2cf8u); f_10dd6a50();
  /* 10dd2cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2cfb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2cff jne 0x10dd2d3a */
  if (!C.zf) goto L_10dd2d3a;
  /* 10dd2d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2d04 mov eax, dword ptr [edx*4 + 0x10dfda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dfda38)));
  /* 10dd2d0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2d10 je 0x10dd2d26 */
  if (C.zf) goto L_10dd2d26;
  /* 10dd2d12 push 0x10dfa380 */
  push32((uint32_t)(0x10dfa380u));
  /* 10dd2d17 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10dd2d1d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2d1e call 0x10dd6a50 */
  push32(0x10dd2d23u); f_10dd6a50();
  /* 10dd2d23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2d26:;
  /* 10dd2d26 push 0x10dfa37c */
  push32((uint32_t)(0x10dfa37cu));
  /* 10dd2d2b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10dd2d31 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2d32 call 0x10dd6a50 */
  push32(0x10dd2d37u); f_10dd6a50();
  /* 10dd2d37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2d3a:;
  /* 10dd2d3a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2d3e je 0x10dd2d82 */
  if (C.zf) goto L_10dd2d82;
  /* 10dd2d40 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10dd2d46 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2d47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd2d4a push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2d4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd2d4e push edx */
  push32((uint32_t)(EDX));
  /* 10dd2d4f push 0x10dfa370 */
  push32((uint32_t)(0x10dfa370u));
  /* 10dd2d54 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10dd2d59 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2d5f push eax */
  push32((uint32_t)(EAX));
  /* 10dd2d60 call 0x10dd6940 */
  push32(0x10dd2d65u); f_10dd6940();
  /* 10dd2d65 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2d68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2d6a jge 0x10dd2d80 */
  if ((C.sf==C.of)) goto L_10dd2d80;
  /* 10dd2d6c push 0x10dfa3ac */
  push32((uint32_t)(0x10dfa3acu));
  /* 10dd2d71 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2d77 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2d78 call 0x10dd6a40 */
  push32(0x10dd2d7du); f_10dd6a40();
  /* 10dd2d7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2d80:;
  /* 10dd2d80 jmp 0x10dd2d98 */
  goto L_10dd2d98;
L_10dd2d82:;
  /* 10dd2d82 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10dd2d88 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2d89 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2d8f push eax */
  push32((uint32_t)(EAX));
  /* 10dd2d90 call 0x10dd6a40 */
  push32(0x10dd2d95u); f_10dd6a40();
  /* 10dd2d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2d98:;
  /* 10dd2d98 cmp dword ptr [0x10e010e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2d9f je 0x10dd2ddc */
  if (C.zf) goto L_10dd2ddc;
  /* 10dd2da1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10dd2da7 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2da8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2dae push edx */
  push32((uint32_t)(EDX));
  /* 10dd2daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2db2 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2db3 call dword ptr [0x10e010e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e010e0))), 0x10dd2db9u);
  /* 10dd2db9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2dbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2dbe je 0x10dd2ddc */
  if (C.zf) goto L_10dd2ddc;
  /* 10dd2dc0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2dc4 jne 0x10dd2dd1 */
  if (!C.zf) goto L_10dd2dd1;
  /* 10dd2dc6 push 0x10dfda34 */
  push32((uint32_t)(0x10dfda34u));
  /* 10dd2dcb call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10dd2dd1u);
L_10dd2dd1:;
  /* 10dd2dd1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10dd2dd7 jmp 0x10dd2edb */
  goto L_10dd2edb;
L_10dd2ddc:;
  /* 10dd2ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2ddf mov edx, dword ptr [ecx*4 + 0x10dfda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfda38)));
  /* 10dd2de6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd2de9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd2deb je 0x10dd2e2b */
  if (C.zf) goto L_10dd2e2b;
  /* 10dd2ded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2df0 cmp dword ptr [eax*4 + 0x10dfda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10dfda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2df8 je 0x10dd2e2b */
  if (C.zf) goto L_10dd2e2b;
  /* 10dd2dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2dfc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10dd2e02 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2e03 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2e09 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2e0a call 0x10dd68c0 */
  push32(0x10dd2e0fu); f_10dd68c0();
  /* 10dd2e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2e12 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2e13 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2e19 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2e1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2e1d mov edx, dword ptr [ecx*4 + 0x10dfda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfda44)));
  /* 10dd2e24 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2e25 call dword ptr [0x10e022e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e0))), 0x10dd2e2bu);
L_10dd2e2b:;
  /* 10dd2e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2e2e mov ecx, dword ptr [eax*4 + 0x10dfda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dfda38)));
  /* 10dd2e35 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd2e38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd2e3a je 0x10dd2e49 */
  if (C.zf) goto L_10dd2e49;
  /* 10dd2e3c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10dd2e42 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2e43 call dword ptr [0x10e022e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e8))), 0x10dd2e49u);
L_10dd2e49:;
  /* 10dd2e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2e4c mov ecx, dword ptr [eax*4 + 0x10dfda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dfda38)));
  /* 10dd2e53 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd2e56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd2e58 je 0x10dd2ec8 */
  if (C.zf) goto L_10dd2ec8;
  /* 10dd2e5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2e5e je 0x10dd2e7d */
  if (C.zf) goto L_10dd2e7d;
  /* 10dd2e60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10dd2e62 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10dd2e68 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd2e6c push eax */
  push32((uint32_t)(EAX));
  /* 10dd2e6d call 0x10dd65d0 */
  push32(0x10dd2e72u); f_10dd65d0();
  /* 10dd2e72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2e75 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10dd2e7b jmp 0x10dd2e87 */
  goto L_10dd2e87;
L_10dd2e7d:;
  /* 10dd2e7d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10dd2e87:;
  /* 10dd2e87 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10dd2e8d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2e8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd2e91 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2e92 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10dd2e98 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2e99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd2e9c push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2e9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd2ea0 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2ea1 call 0x10dd2ee0 */
  push32(0x10dd2ea6u); f_10dd2ee0();
  /* 10dd2ea6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2ea9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10dd2eaf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2eb3 jne 0x10dd2ec0 */
  if (!C.zf) goto L_10dd2ec0;
  /* 10dd2eb5 push 0x10dfda34 */
  push32((uint32_t)(0x10dfda34u));
  /* 10dd2eba call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10dd2ec0u);
L_10dd2ec0:;
  /* 10dd2ec0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10dd2ec6 jmp 0x10dd2edb */
  goto L_10dd2edb;
L_10dd2ec8:;
  /* 10dd2ec8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2ecc jne 0x10dd2ed9 */
  if (!C.zf) goto L_10dd2ed9;
  /* 10dd2ece push 0x10dfda34 */
  push32((uint32_t)(0x10dfda34u));
  /* 10dd2ed3 call dword ptr [0x10e022e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e4))), 0x10dd2ed9u);
L_10dd2ed9:;
  /* 10dd2ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd2edb:;
  /* 10dd2edb pop edi */
  EDI = (pop32());
  /* 10dd2edc mov esp, ebp */
  ESP = (EBP);
  /* 10dd2ede pop ebp */
  EBP = (pop32());
  /* 10dd2edf ret  */
  ESPCHK(0x10dd2b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee0 @ 0x10dd2ee0 (780 bytes, 197 insns) */
void f_10dd2ee0(void) {
  FTRACE(0x10dd2ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd2ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd2ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd2ee3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10dd2ee8 call 0x10dd6c30 */
  push32(0x10dd2eedu); f_10dd6c30();
L_10dd2eed:;
  /* 10dd2eed cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2ef1 jne 0x10dd2f18 */
  if (!C.zf) goto L_10dd2f18;
  /* 10dd2ef3 push 0x10dfa568 */
  push32((uint32_t)(0x10dfa568u));
  /* 10dd2ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2efa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10dd2eff push 0x10dfa55c */
  push32((uint32_t)(0x10dfa55cu));
  /* 10dd2f04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd2f06 call 0x10dd2b50 */
  push32(0x10dd2f0bu); f_10dd2b50();
  /* 10dd2f0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2f0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2f11 jne 0x10dd2f18 */
  if (!C.zf) goto L_10dd2f18;
  /* 10dd2f13 call 0x10dd2a40 */
  push32(0x10dd2f18u); f_10dd2a40();
L_10dd2f18:;
  /* 10dd2f18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd2f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2f1c jne 0x10dd2eed */
  if (!C.zf) goto L_10dd2eed;
  /* 10dd2f1e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10dd2f23 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10dd2f29 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd2f2c call dword ptr [0x10e022f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f8))), 0x10dd2f32u);
  /* 10dd2f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd2f34 jne 0x10dd2f4a */
  if (!C.zf) goto L_10dd2f4a;
  /* 10dd2f36 push 0x10dfa544 */
  push32((uint32_t)(0x10dfa544u));
  /* 10dd2f3b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10dd2f41 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2f42 call 0x10dd6a40 */
  push32(0x10dd2f47u); f_10dd6a40();
  /* 10dd2f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2f4a:;
  /* 10dd2f4a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10dd2f50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd2f53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd2f56 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd2f57 call 0x10dd68c0 */
  push32(0x10dd2f5cu); f_10dd68c0();
  /* 10dd2f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2f5f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2f62 jbe 0x10dd2f8d */
  if ((C.cf||C.zf)) goto L_10dd2f8d;
  /* 10dd2f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd2f67 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2f68 call 0x10dd68c0 */
  push32(0x10dd2f6du); f_10dd68c0();
  /* 10dd2f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2f70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd2f73 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10dd2f77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd2f7a push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd2f7c push 0x10dfa540 */
  push32((uint32_t)(0x10dfa540u));
  /* 10dd2f81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd2f84 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2f85 call 0x10dd72b0 */
  push32(0x10dd2f8au); f_10dd72b0();
  /* 10dd2f8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2f8d:;
  /* 10dd2f8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd2f90 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10dd2f96 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2f9d je 0x10dd2fe8 */
  if (C.zf) goto L_10dd2fe8;
  /* 10dd2f9f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10dd2fa5 push edx */
  push32((uint32_t)(EDX));
  /* 10dd2fa6 call 0x10dd68c0 */
  push32(0x10dd2fabu); f_10dd68c0();
  /* 10dd2fab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2fae cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2fb1 jbe 0x10dd2fe8 */
  if ((C.cf||C.zf)) goto L_10dd2fe8;
  /* 10dd2fb3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10dd2fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10dd2fba call 0x10dd68c0 */
  push32(0x10dd2fbfu); f_10dd68c0();
  /* 10dd2fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd2fc2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10dd2fc8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10dd2fcc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10dd2fd2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd2fd4 push 0x10dfa540 */
  push32((uint32_t)(0x10dfa540u));
  /* 10dd2fd9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10dd2fdf push eax */
  push32((uint32_t)(EAX));
  /* 10dd2fe0 call 0x10dd72b0 */
  push32(0x10dd2fe5u); f_10dd72b0();
  /* 10dd2fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd2fe8:;
  /* 10dd2fe8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd2fec jne 0x10dd2ffa */
  if (!C.zf) goto L_10dd2ffa;
  /* 10dd2fee mov dword ptr [ebp - 0x1114], 0x10dfa4cc */
  w32((uint32_t)(EBP + -0x1114), (0x10dfa4ccu));
  /* 10dd2ff8 jmp 0x10dd3004 */
  goto L_10dd3004;
L_10dd2ffa:;
  /* 10dd2ffa mov dword ptr [ebp - 0x1114], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x1114), (0x10dfa26cu));
L_10dd3004:;
  /* 10dd3004 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd3007 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10dd300a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd300c je 0x10dd3019 */
  if (C.zf) goto L_10dd3019;
  /* 10dd300e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd3011 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10dd3017 jmp 0x10dd3023 */
  goto L_10dd3023;
L_10dd3019:;
  /* 10dd3019 mov dword ptr [ebp - 0x1118], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x1118), (0x10dfa26cu));
L_10dd3023:;
  /* 10dd3023 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd3026 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10dd3029 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd302b je 0x10dd303f */
  if (C.zf) goto L_10dd303f;
  /* 10dd302d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3031 jne 0x10dd303f */
  if (!C.zf) goto L_10dd303f;
  /* 10dd3033 mov dword ptr [ebp - 0x111c], 0x10dfa4bc */
  w32((uint32_t)(EBP + -0x111c), (0x10dfa4bcu));
  /* 10dd303d jmp 0x10dd3049 */
  goto L_10dd3049;
L_10dd303f:;
  /* 10dd303f mov dword ptr [ebp - 0x111c], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x111c), (0x10dfa26cu));
L_10dd3049:;
  /* 10dd3049 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd304c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd304f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd3051 je 0x10dd305f */
  if (C.zf) goto L_10dd305f;
  /* 10dd3053 mov dword ptr [ebp - 0x1120], 0x10dfa4b8 */
  w32((uint32_t)(EBP + -0x1120), (0x10dfa4b8u));
  /* 10dd305d jmp 0x10dd3069 */
  goto L_10dd3069;
L_10dd305f:;
  /* 10dd305f mov dword ptr [ebp - 0x1120], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x1120), (0x10dfa26cu));
L_10dd3069:;
  /* 10dd3069 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd306d je 0x10dd307a */
  if (C.zf) goto L_10dd307a;
  /* 10dd306f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3072 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10dd3078 jmp 0x10dd3084 */
  goto L_10dd3084;
L_10dd307a:;
  /* 10dd307a mov dword ptr [ebp - 0x1124], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x1124), (0x10dfa26cu));
L_10dd3084:;
  /* 10dd3084 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3088 je 0x10dd3096 */
  if (C.zf) goto L_10dd3096;
  /* 10dd308a mov dword ptr [ebp - 0x1128], 0x10dfa4b0 */
  w32((uint32_t)(EBP + -0x1128), (0x10dfa4b0u));
  /* 10dd3094 jmp 0x10dd30a0 */
  goto L_10dd30a0;
L_10dd3096:;
  /* 10dd3096 mov dword ptr [ebp - 0x1128], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x1128), (0x10dfa26cu));
L_10dd30a0:;
  /* 10dd30a0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd30a4 je 0x10dd30b1 */
  if (C.zf) goto L_10dd30b1;
  /* 10dd30a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd30a9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10dd30af jmp 0x10dd30bb */
  goto L_10dd30bb;
L_10dd30b1:;
  /* 10dd30b1 mov dword ptr [ebp - 0x112c], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x112c), (0x10dfa26cu));
L_10dd30bb:;
  /* 10dd30bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd30bf je 0x10dd30cd */
  if (C.zf) goto L_10dd30cd;
  /* 10dd30c1 mov dword ptr [ebp - 0x1130], 0x10dfa4a8 */
  w32((uint32_t)(EBP + -0x1130), (0x10dfa4a8u));
  /* 10dd30cb jmp 0x10dd30d7 */
  goto L_10dd30d7;
L_10dd30cd:;
  /* 10dd30cd mov dword ptr [ebp - 0x1130], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x1130), (0x10dfa26cu));
L_10dd30d7:;
  /* 10dd30d7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd30de je 0x10dd30ee */
  if (C.zf) goto L_10dd30ee;
  /* 10dd30e0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10dd30e6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10dd30ec jmp 0x10dd30f8 */
  goto L_10dd30f8;
L_10dd30ee:;
  /* 10dd30ee mov dword ptr [ebp - 0x1134], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x1134), (0x10dfa26cu));
L_10dd30f8:;
  /* 10dd30f8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd30ff je 0x10dd310d */
  if (C.zf) goto L_10dd310d;
  /* 10dd3101 mov dword ptr [ebp - 0x1138], 0x10dfa49c */
  w32((uint32_t)(EBP + -0x1138), (0x10dfa49cu));
  /* 10dd310b jmp 0x10dd3117 */
  goto L_10dd3117;
L_10dd310d:;
  /* 10dd310d mov dword ptr [ebp - 0x1138], 0x10dfa26c */
  w32((uint32_t)(EBP + -0x1138), (0x10dfa26cu));
L_10dd3117:;
  /* 10dd3117 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10dd311d push edx */
  push32((uint32_t)(EDX));
  /* 10dd311e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10dd3124 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3125 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10dd312b push ecx */
  push32((uint32_t)(ECX));
  /* 10dd312c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10dd3132 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3133 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10dd3139 push eax */
  push32((uint32_t)(EAX));
  /* 10dd313a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10dd3140 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3141 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10dd3147 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3148 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10dd314e push eax */
  push32((uint32_t)(EAX));
  /* 10dd314f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10dd3155 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3156 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10dd315c push edx */
  push32((uint32_t)(EDX));
  /* 10dd315d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3160 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3161 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3164 mov edx, dword ptr [ecx*4 + 0x10dfda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfda50)));
  /* 10dd316b push edx */
  push32((uint32_t)(EDX));
  /* 10dd316c push 0x10dfa448 */
  push32((uint32_t)(0x10dfa448u));
  /* 10dd3171 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10dd3176 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10dd317c push eax */
  push32((uint32_t)(EAX));
  /* 10dd317d call 0x10dd6940 */
  push32(0x10dd3182u); f_10dd6940();
  /* 10dd3182 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3187 jge 0x10dd319d */
  if ((C.sf==C.of)) goto L_10dd319d;
  /* 10dd3189 push 0x10dfa3ac */
  push32((uint32_t)(0x10dfa3acu));
  /* 10dd318e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10dd3194 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3195 call 0x10dd6a40 */
  push32(0x10dd319au); f_10dd6a40();
  /* 10dd319a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd319d:;
  /* 10dd319d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10dd31a2 push 0x10dfa424 */
  push32((uint32_t)(0x10dfa424u));
  /* 10dd31a7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10dd31ad push edx */
  push32((uint32_t)(EDX));
  /* 10dd31ae call 0x10dd71f0 */
  push32(0x10dd31b3u); f_10dd71f0();
  /* 10dd31b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd31b6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10dd31bc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd31c3 jne 0x10dd31d6 */
  if (!C.zf) goto L_10dd31d6;
  /* 10dd31c5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10dd31c7 call 0x10dd6f30 */
  push32(0x10dd31ccu); f_10dd6f30();
  /* 10dd31cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd31cf push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd31d1 call 0x10dd3250 */
  push32(0x10dd31d6u); f_10dd3250();
L_10dd31d6:;
  /* 10dd31d6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd31dd jne 0x10dd31e6 */
  if (!C.zf) goto L_10dd31e6;
  /* 10dd31df mov eax, 1 */
  EAX = (0x1u);
  /* 10dd31e4 jmp 0x10dd31e8 */
  goto L_10dd31e8;
L_10dd31e6:;
  /* 10dd31e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd31e8:;
  /* 10dd31e8 mov esp, ebp */
  ESP = (EBP);
  /* 10dd31ea pop ebp */
  EBP = (pop32());
  /* 10dd31eb ret  */
  ESPCHK(0x10dd2ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031f0 @ 0x10dd31f0 (56 bytes, 15 insns) */
void f_10dd31f0(void) {
  FTRACE(0x10dd31f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd31f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd31f1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd31f3 cmp dword ptr [0x10e010dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd31fa je 0x10dd3202 */
  if (C.zf) goto L_10dd3202;
  /* 10dd31fc call dword ptr [0x10e010dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e010dc))), 0x10dd3202u);
L_10dd3202:;
  /* 10dd3202 push 0x10dfd418 */
  push32((uint32_t)(0x10dfd418u));
  /* 10dd3207 push 0x10dfd208 */
  push32((uint32_t)(0x10dfd208u));
  /* 10dd320c call 0x10dd33c0 */
  push32(0x10dd3211u); f_10dd33c0();
  /* 10dd3211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3214 push 0x10dfd104 */
  push32((uint32_t)(0x10dfd104u));
  /* 10dd3219 push 0x10dfd000 */
  push32((uint32_t)(0x10dfd000u));
  /* 10dd321e call 0x10dd33c0 */
  push32(0x10dd3223u); f_10dd33c0();
  /* 10dd3223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3226 pop ebp */
  EBP = (pop32());
  /* 10dd3227 ret  */
  ESPCHK(0x10dd31f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10dd3230 (21 bytes, 10 insns) */
void f_10dd3230(void) {
  FTRACE(0x10dd3230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3230 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3231 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3233 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3235 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd323a push eax */
  push32((uint32_t)(EAX));
  /* 10dd323b call 0x10dd32b0 */
  push32(0x10dd3240u); f_10dd32b0();
  /* 10dd3240 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3243 pop ebp */
  EBP = (pop32());
  /* 10dd3244 ret  */
  ESPCHK(0x10dd3230u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10dd3250 (21 bytes, 10 insns) */
void f_10dd3250(void) {
  FTRACE(0x10dd3250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3250 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3251 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3253 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3255 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3257 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd325a push eax */
  push32((uint32_t)(EAX));
  /* 10dd325b call 0x10dd32b0 */
  push32(0x10dd3260u); f_10dd32b0();
  /* 10dd3260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3263 pop ebp */
  EBP = (pop32());
  /* 10dd3264 ret  */
  ESPCHK(0x10dd3250u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x10dd3270 (19 bytes, 9 insns) */
void f_10dd3270(void) {
  FTRACE(0x10dd3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3270 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3271 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3273 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3275 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3277 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3279 call 0x10dd32b0 */
  push32(0x10dd327eu); f_10dd32b0();
  /* 10dd327e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3281 pop ebp */
  EBP = (pop32());
  /* 10dd3282 ret  */
  ESPCHK(0x10dd3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10003290 @ 0x10dd3290 (19 bytes, 9 insns) */
void f_10dd3290(void) {
  FTRACE(0x10dd3290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3290 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3291 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3293 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3295 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3297 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3299 call 0x10dd32b0 */
  push32(0x10dd329eu); f_10dd32b0();
  /* 10dd329e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd32a1 pop ebp */
  EBP = (pop32());
  /* 10dd32a2 ret  */
  ESPCHK(0x10dd3290u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x10dd32b0 (227 bytes, 61 insns) */
void f_10dd32b0(void) {
  FTRACE(0x10dd32b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd32b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd32b1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd32b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd32b4 call 0x10dd33a0 */
  push32(0x10dd32b9u); f_10dd33a0();
  /* 10dd32b9 cmp dword ptr [0x10dff5dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd32c0 jne 0x10dd32d3 */
  if (!C.zf) goto L_10dd32d3;
  /* 10dd32c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd32c5 push eax */
  push32((uint32_t)(EAX));
  /* 10dd32c6 call dword ptr [0x10e02304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02304))), 0x10dd32ccu);
  /* 10dd32cc push eax */
  push32((uint32_t)(EAX));
  /* 10dd32cd call dword ptr [0x10e02300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02300))), 0x10dd32d3u);
L_10dd32d3:;
  /* 10dd32d3 mov dword ptr [0x10dff5d8], 1 */
  w32((uint32_t)(0x10dff5d8), (0x1u));
  /* 10dd32dd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10dd32e0 mov byte ptr [0x10dff5d4], cl */
  w8((uint32_t)(0x10dff5d4), (CL));
  /* 10dd32e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd32ea jne 0x10dd3333 */
  if (!C.zf) goto L_10dd3333;
  /* 10dd32ec cmp dword ptr [0x10e010d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd32f3 je 0x10dd3321 */
  if (C.zf) goto L_10dd3321;
  /* 10dd32f5 mov edx, dword ptr [0x10e010d4] */
  EDX = (r32((uint32_t)(0x10e010d4)));
  /* 10dd32fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10dd32fe:;
  /* 10dd32fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3301 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd3304 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd3307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd330a cmp ecx, dword ptr [0x10e010d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e010d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3310 jb 0x10dd3321 */
  if (C.cf) goto L_10dd3321;
  /* 10dd3312 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3315 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3318 je 0x10dd331f */
  if (C.zf) goto L_10dd331f;
  /* 10dd331a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd331d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10dd331fu);
L_10dd331f:;
  /* 10dd331f jmp 0x10dd32fe */
  goto L_10dd32fe;
L_10dd3321:;
  /* 10dd3321 push 0x10dfd724 */
  push32((uint32_t)(0x10dfd724u));
  /* 10dd3326 push 0x10dfd51c */
  push32((uint32_t)(0x10dfd51cu));
  /* 10dd332b call 0x10dd33c0 */
  push32(0x10dd3330u); f_10dd33c0();
  /* 10dd3330 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd3333:;
  /* 10dd3333 push 0x10dfd92c */
  push32((uint32_t)(0x10dfd92cu));
  /* 10dd3338 push 0x10dfd828 */
  push32((uint32_t)(0x10dfd828u));
  /* 10dd333d call 0x10dd33c0 */
  push32(0x10dd3342u); f_10dd33c0();
  /* 10dd3342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3345 cmp dword ptr [0x10dff5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd334c jne 0x10dd336e */
  if (!C.zf) goto L_10dd336e;
  /* 10dd334e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10dd3350 call 0x10dd4fa0 */
  push32(0x10dd3355u); f_10dd4fa0();
  /* 10dd3355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3358 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd335b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd335d je 0x10dd336e */
  if (C.zf) goto L_10dd336e;
  /* 10dd335f mov dword ptr [0x10dff5e0], 1 */
  w32((uint32_t)(0x10dff5e0), (0x1u));
  /* 10dd3369 call 0x10dd58b0 */
  push32(0x10dd336eu); f_10dd58b0();
L_10dd336e:;
  /* 10dd336e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3372 je 0x10dd337b */
  if (C.zf) goto L_10dd337b;
  /* 10dd3374 call 0x10dd33b0 */
  push32(0x10dd3379u); f_10dd33b0();
  /* 10dd3379 jmp 0x10dd338f */
  goto L_10dd338f;
L_10dd337b:;
  /* 10dd337b mov dword ptr [0x10dff5dc], 1 */
  w32((uint32_t)(0x10dff5dc), (0x1u));
  /* 10dd3385 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3388 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3389 call dword ptr [0x10e022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022fc))), 0x10dd338fu);
L_10dd338f:;
  /* 10dd338f mov esp, ebp */
  ESP = (EBP);
  /* 10dd3391 pop ebp */
  EBP = (pop32());
  /* 10dd3392 ret  */
  ESPCHK(0x10dd32b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033a0 @ 0x10dd33a0 (15 bytes, 7 insns) */
void f_10dd33a0(void) {
  FTRACE(0x10dd33a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd33a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd33a1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd33a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10dd33a5 call 0x10dd7490 */
  push32(0x10dd33aau); f_10dd7490();
  /* 10dd33aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd33ad pop ebp */
  EBP = (pop32());
  /* 10dd33ae ret  */
  ESPCHK(0x10dd33a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033b0 @ 0x10dd33b0 (15 bytes, 7 insns) */
void f_10dd33b0(void) {
  FTRACE(0x10dd33b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd33b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd33b1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd33b3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10dd33b5 call 0x10dd7530 */
  push32(0x10dd33bau); f_10dd7530();
  /* 10dd33ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd33bd pop ebp */
  EBP = (pop32());
  /* 10dd33be ret  */
  ESPCHK(0x10dd33b0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10dd33c0 (37 bytes, 16 insns) */
void f_10dd33c0(void) {
  FTRACE(0x10dd33c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd33c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd33c1 mov ebp, esp */
  EBP = (ESP);
L_10dd33c3:;
  /* 10dd33c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd33c6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd33c9 jae 0x10dd33e3 */
  if (!C.cf) goto L_10dd33e3;
  /* 10dd33cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd33ce cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd33d1 je 0x10dd33d8 */
  if (C.zf) goto L_10dd33d8;
  /* 10dd33d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd33d6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10dd33d8u);
L_10dd33d8:;
  /* 10dd33d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd33db add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd33de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10dd33e1 jmp 0x10dd33c3 */
  goto L_10dd33c3;
L_10dd33e3:;
  /* 10dd33e3 pop ebp */
  EBP = (pop32());
  /* 10dd33e4 ret  */
  ESPCHK(0x10dd33c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033f0 @ 0x10dd33f0 (130 bytes, 42 insns) */
void f_10dd33f0(void) {
  FTRACE(0x10dd33f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd33f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd33f1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd33f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd33f4 call 0x10dd73b0 */
  push32(0x10dd33f9u); f_10dd73b0();
  /* 10dd33f9 call dword ptr [0x10e02310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02310))), 0x10dd33ffu);
  /* 10dd33ff mov dword ptr [0x10dfda5c], eax */
  w32((uint32_t)(0x10dfda5c), (EAX));
  /* 10dd3404 cmp dword ptr [0x10dfda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd340b jne 0x10dd3411 */
  if (!C.zf) goto L_10dd3411;
  /* 10dd340d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd340f jmp 0x10dd346e */
  goto L_10dd346e;
L_10dd3411:;
  /* 10dd3411 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10dd3413 push 0x10dfa580 */
  push32((uint32_t)(0x10dfa580u));
  /* 10dd3418 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd341a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10dd341c push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd341e call 0x10dd3ea0 */
  push32(0x10dd3423u); f_10dd3ea0();
  /* 10dd3423 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd3429 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd342d je 0x10dd3444 */
  if (C.zf) goto L_10dd3444;
  /* 10dd342f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3432 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3433 mov ecx, dword ptr [0x10dfda5c] */
  ECX = (r32((uint32_t)(0x10dfda5c)));
  /* 10dd3439 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd343a call dword ptr [0x10e0230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0230c))), 0x10dd3440u);
  /* 10dd3440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3442 jne 0x10dd3448 */
  if (!C.zf) goto L_10dd3448;
L_10dd3444:;
  /* 10dd3444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3446 jmp 0x10dd346e */
  goto L_10dd346e;
L_10dd3448:;
  /* 10dd3448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd344b push edx */
  push32((uint32_t)(EDX));
  /* 10dd344c call 0x10dd34b0 */
  push32(0x10dd3451u); f_10dd34b0();
  /* 10dd3451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3454 call dword ptr [0x10e02308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02308))), 0x10dd345au);
  /* 10dd345a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd345d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dd345f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3462 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10dd3469 mov eax, 1 */
  EAX = (0x1u);
L_10dd346e:;
  /* 10dd346e mov esp, ebp */
  ESP = (EBP);
  /* 10dd3470 pop ebp */
  EBP = (pop32());
  /* 10dd3471 ret  */
  ESPCHK(0x10dd33f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003480 @ 0x10dd3480 (41 bytes, 11 insns) */
void f_10dd3480(void) {
  FTRACE(0x10dd3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3480 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3481 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3483 call 0x10dd73f0 */
  push32(0x10dd3488u); f_10dd73f0();
  /* 10dd3488 cmp dword ptr [0x10dfda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd348f je 0x10dd34a7 */
  if (C.zf) goto L_10dd34a7;
  /* 10dd3491 mov eax, dword ptr [0x10dfda5c] */
  EAX = (r32((uint32_t)(0x10dfda5c)));
  /* 10dd3496 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3497 call dword ptr [0x10e02314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02314))), 0x10dd349du);
  /* 10dd349d mov dword ptr [0x10dfda5c], 0xffffffff */
  w32((uint32_t)(0x10dfda5c), (0xffffffffu));
L_10dd34a7:;
  /* 10dd34a7 pop ebp */
  EBP = (pop32());
  /* 10dd34a8 ret  */
  ESPCHK(0x10dd3480u, _esp0);
  ESP += 4; return;
}

/* FUN_100034b0 @ 0x10dd34b0 (25 bytes, 8 insns) */
void f_10dd34b0(void) {
  FTRACE(0x10dd34b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd34b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd34b1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd34b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd34b6 mov dword ptr [eax + 0x50], 0x10dfdc00 */
  w32((uint32_t)(EAX + 0x50), (0x10dfdc00u));
  /* 10dd34bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd34c0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10dd34c7 pop ebp */
  EBP = (pop32());
  /* 10dd34c8 ret  */
  ESPCHK(0x10dd34b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034d0 @ 0x10dd34d0 (152 bytes, 48 insns) */
void f_10dd34d0(void) {
  FTRACE(0x10dd34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd34d1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd34d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd34d6 call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10dd34dcu);
  /* 10dd34dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd34df mov eax, dword ptr [0x10dfda5c] */
  EAX = (r32((uint32_t)(0x10dfda5c)));
  /* 10dd34e4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd34e5 call dword ptr [0x10e0231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0231c))), 0x10dd34ebu);
  /* 10dd34eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd34ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd34f2 jne 0x10dd3557 */
  if (!C.zf) goto L_10dd3557;
  /* 10dd34f4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10dd34f9 push 0x10dfa580 */
  push32((uint32_t)(0x10dfa580u));
  /* 10dd34fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd3500 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10dd3502 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3504 call 0x10dd3ea0 */
  push32(0x10dd3509u); f_10dd3ea0();
  /* 10dd3509 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd350c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd350f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3513 je 0x10dd354d */
  if (C.zf) goto L_10dd354d;
  /* 10dd3515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3518 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3519 mov edx, dword ptr [0x10dfda5c] */
  EDX = (r32((uint32_t)(0x10dfda5c)));
  /* 10dd351f push edx */
  push32((uint32_t)(EDX));
  /* 10dd3520 call dword ptr [0x10e0230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0230c))), 0x10dd3526u);
  /* 10dd3526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3528 je 0x10dd354d */
  if (C.zf) goto L_10dd354d;
  /* 10dd352a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd352d push eax */
  push32((uint32_t)(EAX));
  /* 10dd352e call 0x10dd34b0 */
  push32(0x10dd3533u); f_10dd34b0();
  /* 10dd3533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3536 call dword ptr [0x10e02308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02308))), 0x10dd353cu);
  /* 10dd353c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd353f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dd3541 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3544 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10dd354b jmp 0x10dd3557 */
  goto L_10dd3557;
L_10dd354d:;
  /* 10dd354d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10dd354f call 0x10dd2a00 */
  push32(0x10dd3554u); f_10dd2a00();
  /* 10dd3554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd3557:;
  /* 10dd3557 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd355a push eax */
  push32((uint32_t)(EAX));
  /* 10dd355b call dword ptr [0x10e02318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02318))), 0x10dd3561u);
  /* 10dd3561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3564 mov esp, ebp */
  ESP = (EBP);
  /* 10dd3566 pop ebp */
  EBP = (pop32());
  /* 10dd3567 ret  */
  ESPCHK(0x10dd34d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003570 @ 0x10dd3570 (263 bytes, 86 insns) */
void f_10dd3570(void) {
  FTRACE(0x10dd3570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3570 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3571 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3573 cmp dword ptr [0x10dfda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd357a je 0x10dd3675 */
  if (C.zf) goto L_10dd3675;
  /* 10dd3580 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3584 jne 0x10dd3595 */
  if (!C.zf) goto L_10dd3595;
  /* 10dd3586 mov eax, dword ptr [0x10dfda5c] */
  EAX = (r32((uint32_t)(0x10dfda5c)));
  /* 10dd358b push eax */
  push32((uint32_t)(EAX));
  /* 10dd358c call dword ptr [0x10e0231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0231c))), 0x10dd3592u);
  /* 10dd3592 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10dd3595:;
  /* 10dd3595 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3599 je 0x10dd3666 */
  if (C.zf) goto L_10dd3666;
  /* 10dd359f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd35a2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd35a6 je 0x10dd35b9 */
  if (C.zf) goto L_10dd35b9;
  /* 10dd35a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd35aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd35ad mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10dd35b0 push eax */
  push32((uint32_t)(EAX));
  /* 10dd35b1 call 0x10dd4520 */
  push32(0x10dd35b6u); f_10dd4520();
  /* 10dd35b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd35b9:;
  /* 10dd35b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd35bc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd35c0 je 0x10dd35d3 */
  if (C.zf) goto L_10dd35d3;
  /* 10dd35c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd35c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd35c7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10dd35ca push eax */
  push32((uint32_t)(EAX));
  /* 10dd35cb call 0x10dd4520 */
  push32(0x10dd35d0u); f_10dd4520();
  /* 10dd35d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd35d3:;
  /* 10dd35d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd35d6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd35da je 0x10dd35ed */
  if (C.zf) goto L_10dd35ed;
  /* 10dd35dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd35de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd35e1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10dd35e4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd35e5 call 0x10dd4520 */
  push32(0x10dd35eau); f_10dd4520();
  /* 10dd35ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd35ed:;
  /* 10dd35ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd35f0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd35f4 je 0x10dd3607 */
  if (C.zf) goto L_10dd3607;
  /* 10dd35f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd35f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd35fb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10dd35fe push eax */
  push32((uint32_t)(EAX));
  /* 10dd35ff call 0x10dd4520 */
  push32(0x10dd3604u); f_10dd4520();
  /* 10dd3604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd3607:;
  /* 10dd3607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd360a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd360e je 0x10dd3621 */
  if (C.zf) goto L_10dd3621;
  /* 10dd3610 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd3612 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3615 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10dd3618 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3619 call 0x10dd4520 */
  push32(0x10dd361eu); f_10dd4520();
  /* 10dd361e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd3621:;
  /* 10dd3621 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3624 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3628 je 0x10dd363b */
  if (C.zf) goto L_10dd363b;
  /* 10dd362a push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd362c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd362f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10dd3632 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3633 call 0x10dd4520 */
  push32(0x10dd3638u); f_10dd4520();
  /* 10dd3638 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd363b:;
  /* 10dd363b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd363e cmp dword ptr [ecx + 0x50], 0x10dfdc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10dfdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3645 je 0x10dd3658 */
  if (C.zf) goto L_10dd3658;
  /* 10dd3647 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd3649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd364c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10dd364f push eax */
  push32((uint32_t)(EAX));
  /* 10dd3650 call 0x10dd4520 */
  push32(0x10dd3655u); f_10dd4520();
  /* 10dd3655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd3658:;
  /* 10dd3658 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd365a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd365d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd365e call 0x10dd4520 */
  push32(0x10dd3663u); f_10dd4520();
  /* 10dd3663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd3666:;
  /* 10dd3666 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3668 mov edx, dword ptr [0x10dfda5c] */
  EDX = (r32((uint32_t)(0x10dfda5c)));
  /* 10dd366e push edx */
  push32((uint32_t)(EDX));
  /* 10dd366f call dword ptr [0x10e0230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0230c))), 0x10dd3675u);
L_10dd3675:;
  /* 10dd3675 pop ebp */
  EBP = (pop32());
  /* 10dd3676 ret  */
  ESPCHK(0x10dd3570u, _esp0);
  ESP += 4; return;
}

/* FUN_10003680 @ 0x10dd3680 (11 bytes, 5 insns) */
void f_10dd3680(void) {
  FTRACE(0x10dd3680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3680 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3681 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3683 call dword ptr [0x10e02308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02308))), 0x10dd3689u);
  /* 10dd3689 pop ebp */
  EBP = (pop32());
  /* 10dd368a ret  */
  ESPCHK(0x10dd3680u, _esp0);
  ESP += 4; return;
}

/* FUN_10003690 @ 0x10dd3690 (11 bytes, 5 insns) */
void f_10dd3690(void) {
  FTRACE(0x10dd3690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3690 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3691 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3693 call dword ptr [0x10e02324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02324))), 0x10dd3699u);
  /* 10dd3699 pop ebp */
  EBP = (pop32());
  /* 10dd369a ret  */
  ESPCHK(0x10dd3690u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a0 @ 0x10dd36a0 (804 bytes, 236 insns) */
void f_10dd36a0(void) {
  FTRACE(0x10dd36a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd36a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd36a1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd36a3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd36a6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10dd36ab push 0x10dfa58c */
  push32((uint32_t)(0x10dfa58cu));
  /* 10dd36b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd36b2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10dd36b7 call 0x10dd3a90 */
  push32(0x10dd36bcu); f_10dd3a90();
  /* 10dd36bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd36bf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10dd36c2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd36c6 jne 0x10dd36d2 */
  if (!C.zf) goto L_10dd36d2;
  /* 10dd36c8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10dd36ca call 0x10dd2a00 */
  push32(0x10dd36cfu); f_10dd2a00();
  /* 10dd36cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd36d2:;
  /* 10dd36d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd36d5 mov dword ptr [0x10e00f80], eax */
  w32((uint32_t)(0x10e00f80), (EAX));
  /* 10dd36da mov dword ptr [0x10e010bc], 0x20 */
  w32((uint32_t)(0x10e010bc), (0x20u));
  /* 10dd36e4 jmp 0x10dd36ef */
  goto L_10dd36ef;
L_10dd36e6:;
  /* 10dd36e6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd36e9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd36ec mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10dd36ef:;
  /* 10dd36ef mov edx, dword ptr [0x10e00f80] */
  EDX = (r32((uint32_t)(0x10e00f80)));
  /* 10dd36f5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd36fb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd36fe jae 0x10dd3723 */
  if (!C.cf) goto L_10dd3723;
  /* 10dd3700 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd3703 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10dd3707 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd370a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10dd3710 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd3713 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10dd3717 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd371a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10dd3721 jmp 0x10dd36e6 */
  goto L_10dd36e6;
L_10dd3723:;
  /* 10dd3723 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10dd3726 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3727 call dword ptr [0x10e02330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02330))), 0x10dd372du);
  /* 10dd372d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10dd3730 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd3736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd3738 je 0x10dd38c5 */
  if (C.zf) goto L_10dd38c5;
  /* 10dd373e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3742 je 0x10dd38c5 */
  if (C.zf) goto L_10dd38c5;
  /* 10dd3748 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd374b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd374d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10dd3750 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd3753 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3756 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd3759 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd375c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd375f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10dd3762 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3769 jge 0x10dd3773 */
  if ((C.sf==C.of)) goto L_10dd3773;
  /* 10dd376b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10dd376e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10dd3771 jmp 0x10dd377a */
  goto L_10dd377a;
L_10dd3773:;
  /* 10dd3773 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10dd377a:;
  /* 10dd377a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10dd377d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10dd3780 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10dd3787 jmp 0x10dd3792 */
  goto L_10dd3792;
L_10dd3789:;
  /* 10dd3789 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10dd378c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd378f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10dd3792:;
  /* 10dd3792 mov ecx, dword ptr [0x10e010bc] */
  ECX = (r32((uint32_t)(0x10e010bc)));
  /* 10dd3798 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd379b jge 0x10dd3832 */
  if ((C.sf==C.of)) goto L_10dd3832;
  /* 10dd37a1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10dd37a6 push 0x10dfa58c */
  push32((uint32_t)(0x10dfa58cu));
  /* 10dd37ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd37ad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10dd37b2 call 0x10dd3a90 */
  push32(0x10dd37b7u); f_10dd3a90();
  /* 10dd37b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd37ba mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10dd37bd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd37c1 jne 0x10dd37ce */
  if (!C.zf) goto L_10dd37ce;
  /* 10dd37c3 mov edx, dword ptr [0x10e010bc] */
  EDX = (r32((uint32_t)(0x10e010bc)));
  /* 10dd37c9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10dd37cc jmp 0x10dd3832 */
  goto L_10dd3832;
L_10dd37ce:;
  /* 10dd37ce mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10dd37d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd37d4 mov dword ptr [eax*4 + 0x10e00f80], ecx */
  w32((uint32_t)(EAX*4 + 0x10e00f80), (ECX));
  /* 10dd37db mov edx, dword ptr [0x10e010bc] */
  EDX = (r32((uint32_t)(0x10e010bc)));
  /* 10dd37e1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd37e4 mov dword ptr [0x10e010bc], edx */
  w32((uint32_t)(0x10e010bc), (EDX));
  /* 10dd37ea jmp 0x10dd37f5 */
  goto L_10dd37f5;
L_10dd37ec:;
  /* 10dd37ec mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd37ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd37f2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10dd37f5:;
  /* 10dd37f5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10dd37f8 mov edx, dword ptr [ecx*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e00f80)));
  /* 10dd37ff add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3805 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3808 jae 0x10dd382d */
  if (!C.cf) goto L_10dd382d;
  /* 10dd380a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd380d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10dd3811 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd3814 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10dd381a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd381d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10dd3821 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd3824 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10dd382b jmp 0x10dd37ec */
  goto L_10dd37ec;
L_10dd382d:;
  /* 10dd382d jmp 0x10dd3789 */
  goto L_10dd3789;
L_10dd3832:;
  /* 10dd3832 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10dd3839 jmp 0x10dd3856 */
  goto L_10dd3856;
L_10dd383b:;
  /* 10dd383b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10dd383e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3841 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10dd3844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3847 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd384a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd384d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10dd3850 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3853 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10dd3856:;
  /* 10dd3856 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10dd3859 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd385c jge 0x10dd38c5 */
  if ((C.sf==C.of)) goto L_10dd38c5;
  /* 10dd385e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10dd3861 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3864 je 0x10dd38c0 */
  if (C.zf) goto L_10dd38c0;
  /* 10dd3866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3869 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd386c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd386f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd3871 je 0x10dd38c0 */
  if (C.zf) goto L_10dd38c0;
  /* 10dd3873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3876 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10dd3879 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd387c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd387e jne 0x10dd3890 */
  if (!C.zf) goto L_10dd3890;
  /* 10dd3880 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10dd3883 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd3885 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3886 call dword ptr [0x10e02268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02268))), 0x10dd388cu);
  /* 10dd388c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd388e je 0x10dd38c0 */
  if (C.zf) goto L_10dd38c0;
L_10dd3890:;
  /* 10dd3890 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10dd3893 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10dd3896 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10dd3899 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd389c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd389f mov edx, dword ptr [eax*4 + 0x10e00f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10dd38a6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd38a8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10dd38ab mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd38ae mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10dd38b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd38b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10dd38b5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd38b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd38bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd38bd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10dd38c0:;
  /* 10dd38c0 jmp 0x10dd383b */
  goto L_10dd383b;
L_10dd38c5:;
  /* 10dd38c5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10dd38cc jmp 0x10dd38d7 */
  goto L_10dd38d7;
L_10dd38ce:;
  /* 10dd38ce mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10dd38d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd38d4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10dd38d7:;
  /* 10dd38d7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd38db jge 0x10dd39b4 */
  if ((C.sf==C.of)) goto L_10dd39b4;
  /* 10dd38e1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10dd38e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd38e7 mov edx, dword ptr [0x10e00f80] */
  EDX = (r32((uint32_t)(0x10e00f80)));
  /* 10dd38ed add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd38ef mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10dd38f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd38f5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd38f8 jne 0x10dd39a0 */
  if (!C.zf) goto L_10dd39a0;
  /* 10dd38fe mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd3901 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10dd3905 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3909 jne 0x10dd3914 */
  if (!C.zf) goto L_10dd3914;
  /* 10dd390b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10dd3912 jmp 0x10dd3924 */
  goto L_10dd3924;
L_10dd3914:;
  /* 10dd3914 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10dd3917 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd391a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10dd391c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd391e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3921 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10dd3924:;
  /* 10dd3924 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10dd3927 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3928 call dword ptr [0x10e022dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022dc))), 0x10dd392eu);
  /* 10dd392e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10dd3931 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3935 je 0x10dd398f */
  if (C.zf) goto L_10dd398f;
  /* 10dd3937 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10dd393a push ecx */
  push32((uint32_t)(ECX));
  /* 10dd393b call dword ptr [0x10e02268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02268))), 0x10dd3941u);
  /* 10dd3941 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10dd3944 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3948 je 0x10dd398f */
  if (C.zf) goto L_10dd398f;
  /* 10dd394a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd394d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10dd3950 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10dd3952 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10dd3955 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd395b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd395e jne 0x10dd3970 */
  if (!C.zf) goto L_10dd3970;
  /* 10dd3960 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd3963 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10dd3966 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10dd3968 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd396b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10dd396e jmp 0x10dd398d */
  goto L_10dd398d;
L_10dd3970:;
  /* 10dd3970 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10dd3973 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd3979 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd397c jne 0x10dd398d */
  if (!C.zf) goto L_10dd398d;
  /* 10dd397e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd3981 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd3984 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10dd3987 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd398a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10dd398d:;
  /* 10dd398d jmp 0x10dd399e */
  goto L_10dd399e;
L_10dd398f:;
  /* 10dd398f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd3992 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd3995 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10dd3998 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd399b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10dd399e:;
  /* 10dd399e jmp 0x10dd39af */
  goto L_10dd39af;
L_10dd39a0:;
  /* 10dd39a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd39a3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10dd39a6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10dd39a9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd39ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10dd39af:;
  /* 10dd39af jmp 0x10dd38ce */
  goto L_10dd38ce;
L_10dd39b4:;
  /* 10dd39b4 mov eax, dword ptr [0x10e010bc] */
  EAX = (r32((uint32_t)(0x10e010bc)));
  /* 10dd39b9 push eax */
  push32((uint32_t)(EAX));
  /* 10dd39ba call dword ptr [0x10e0226c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0226c))), 0x10dd39c0u);
  /* 10dd39c0 mov esp, ebp */
  ESP = (EBP);
  /* 10dd39c2 pop ebp */
  EBP = (pop32());
  /* 10dd39c3 ret  */
  ESPCHK(0x10dd36a0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10dd39d0 (155 bytes, 45 insns) */
void f_10dd39d0(void) {
  FTRACE(0x10dd39d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd39d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd39d1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd39d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd39d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10dd39dd jmp 0x10dd39e8 */
  goto L_10dd39e8;
L_10dd39df:;
  /* 10dd39df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd39e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd39e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10dd39e8:;
  /* 10dd39e8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd39ec jge 0x10dd3a67 */
  if ((C.sf==C.of)) goto L_10dd3a67;
  /* 10dd39ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd39f1 cmp dword ptr [ecx*4 + 0x10e00f80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10e00f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd39f9 je 0x10dd3a62 */
  if (C.zf) goto L_10dd3a62;
  /* 10dd39fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd39fe mov eax, dword ptr [edx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10dd3a05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd3a08 jmp 0x10dd3a13 */
  goto L_10dd3a13;
L_10dd3a0a:;
  /* 10dd3a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3a0d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3a10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd3a13:;
  /* 10dd3a13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd3a16 mov eax, dword ptr [edx*4 + 0x10e00f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e00f80)));
  /* 10dd3a1d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3a22 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3a25 jae 0x10dd3a3f */
  if (!C.cf) goto L_10dd3a3f;
  /* 10dd3a27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3a2a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3a2e je 0x10dd3a3d */
  if (C.zf) goto L_10dd3a3d;
  /* 10dd3a30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3a33 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3a36 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3a37 call dword ptr [0x10e02334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02334))), 0x10dd3a3du);
L_10dd3a3d:;
  /* 10dd3a3d jmp 0x10dd3a0a */
  goto L_10dd3a0a;
L_10dd3a3f:;
  /* 10dd3a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd3a41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd3a44 mov ecx, dword ptr [eax*4 + 0x10e00f80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e00f80)));
  /* 10dd3a4b push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3a4c call 0x10dd4520 */
  push32(0x10dd3a51u); f_10dd4520();
  /* 10dd3a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3a54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd3a57 mov dword ptr [edx*4 + 0x10e00f80], 0 */
  w32((uint32_t)(EDX*4 + 0x10e00f80), (0x0u));
L_10dd3a62:;
  /* 10dd3a62 jmp 0x10dd39df */
  goto L_10dd39df;
L_10dd3a67:;
  /* 10dd3a67 mov esp, ebp */
  ESP = (EBP);
  /* 10dd3a69 pop ebp */
  EBP = (pop32());
  /* 10dd3a6a ret  */
  ESPCHK(0x10dd39d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a70 @ 0x10dd3a70 (29 bytes, 13 insns) */
void f_10dd3a70(void) {
  FTRACE(0x10dd3a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3a71 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3a79 mov eax, dword ptr [0x10dff788] */
  EAX = (r32((uint32_t)(0x10dff788)));
  /* 10dd3a7e push eax */
  push32((uint32_t)(EAX));
  /* 10dd3a7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3a82 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3a83 call 0x10dd3ae0 */
  push32(0x10dd3a88u); f_10dd3ae0();
  /* 10dd3a88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3a8b pop ebp */
  EBP = (pop32());
  /* 10dd3a8c ret  */
  ESPCHK(0x10dd3a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a90 @ 0x10dd3a90 (35 bytes, 16 insns) */
void f_10dd3a90(void) {
  FTRACE(0x10dd3a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3a91 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3a93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd3a96 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3a97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3a9a push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3a9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3a9e push edx */
  push32((uint32_t)(EDX));
  /* 10dd3a9f mov eax, dword ptr [0x10dff788] */
  EAX = (r32((uint32_t)(0x10dff788)));
  /* 10dd3aa4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3aa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3aa9 call 0x10dd3ae0 */
  push32(0x10dd3aaeu); f_10dd3ae0();
  /* 10dd3aae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3ab1 pop ebp */
  EBP = (pop32());
  /* 10dd3ab2 ret  */
  ESPCHK(0x10dd3a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac0 @ 0x10dd3ac0 (27 bytes, 13 insns) */
void f_10dd3ac0(void) {
  FTRACE(0x10dd3ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3ac9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3acc push eax */
  push32((uint32_t)(EAX));
  /* 10dd3acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3ad1 call 0x10dd3ae0 */
  push32(0x10dd3ad6u); f_10dd3ae0();
  /* 10dd3ad6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3ad9 pop ebp */
  EBP = (pop32());
  /* 10dd3ada ret  */
  ESPCHK(0x10dd3ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae0 @ 0x10dd3ae0 (94 bytes, 38 insns) */
void f_10dd3ae0(void) {
  FTRACE(0x10dd3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3ae3 push ecx */
  push32((uint32_t)(ECX));
L_10dd3ae4:;
  /* 10dd3ae4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd3ae6 call 0x10dd7490 */
  push32(0x10dd3aebu); f_10dd7490();
  /* 10dd3aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3aee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd3af1 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3af2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd3af5 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3af6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3af9 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3afd push eax */
  push32((uint32_t)(EAX));
  /* 10dd3afe call 0x10dd3b60 */
  push32(0x10dd3b03u); f_10dd3b60();
  /* 10dd3b03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3b06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd3b09 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd3b0b call 0x10dd7530 */
  push32(0x10dd3b10u); f_10dd7530();
  /* 10dd3b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3b13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3b17 jne 0x10dd3b1f */
  if (!C.zf) goto L_10dd3b1f;
  /* 10dd3b19 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3b1d jne 0x10dd3b24 */
  if (!C.zf) goto L_10dd3b24;
L_10dd3b1f:;
  /* 10dd3b1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3b22 jmp 0x10dd3b3a */
  goto L_10dd3b3a;
L_10dd3b24:;
  /* 10dd3b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3b27 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3b28 call 0x10dd77d0 */
  push32(0x10dd3b2du); f_10dd77d0();
  /* 10dd3b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3b32 jne 0x10dd3b38 */
  if (!C.zf) goto L_10dd3b38;
  /* 10dd3b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3b36 jmp 0x10dd3b3a */
  goto L_10dd3b3a;
L_10dd3b38:;
  /* 10dd3b38 jmp 0x10dd3ae4 */
  goto L_10dd3ae4;
L_10dd3b3a:;
  /* 10dd3b3a mov esp, ebp */
  ESP = (EBP);
  /* 10dd3b3c pop ebp */
  EBP = (pop32());
  /* 10dd3b3d ret  */
  ESPCHK(0x10dd3ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b40 @ 0x10dd3b40 (23 bytes, 11 insns) */
void f_10dd3b40(void) {
  FTRACE(0x10dd3b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3b41 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3b4c push eax */
  push32((uint32_t)(EAX));
  /* 10dd3b4d call 0x10dd3b60 */
  push32(0x10dd3b52u); f_10dd3b60();
  /* 10dd3b52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3b55 pop ebp */
  EBP = (pop32());
  /* 10dd3b56 ret  */
  ESPCHK(0x10dd3b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b60 @ 0x10dd3b60 (787 bytes, 254 insns) */
void f_10dd3b60(void) {
  FTRACE(0x10dd3b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3b61 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3b63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd3b66 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd3b67 push esi */
  push32((uint32_t)(ESI));
  /* 10dd3b68 push edi */
  push32((uint32_t)(EDI));
  /* 10dd3b69 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10dd3b70 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd3b75 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3b7a je 0x10dd3bac */
  if (C.zf) goto L_10dd3bac;
L_10dd3b7c:;
  /* 10dd3b7c call 0x10dd4c30 */
  push32(0x10dd3b81u); f_10dd4c30();
  /* 10dd3b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3b83 jne 0x10dd3ba6 */
  if (!C.zf) goto L_10dd3ba6;
  /* 10dd3b85 push 0x10dfa680 */
  push32((uint32_t)(0x10dfa680u));
  /* 10dd3b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3b8c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10dd3b91 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd3b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd3b98 call 0x10dd2b50 */
  push32(0x10dd3b9du); f_10dd2b50();
  /* 10dd3b9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3ba0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3ba3 jne 0x10dd3ba6 */
  if (!C.zf) goto L_10dd3ba6;
  /* 10dd3ba5 int3  */
  x86_unimpl("int3 @ 0x10dd3ba5");
L_10dd3ba6:;
  /* 10dd3ba6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd3ba8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd3baa jne 0x10dd3b7c */
  if (!C.zf) goto L_10dd3b7c;
L_10dd3bac:;
  /* 10dd3bac mov edx, dword ptr [0x10dfda88] */
  EDX = (r32((uint32_t)(0x10dfda88)));
  /* 10dd3bb2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10dd3bb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd3bb8 cmp eax, dword ptr [0x10dfda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3bbe jne 0x10dd3bc1 */
  if (!C.zf) goto L_10dd3bc1;
  /* 10dd3bc0 int3  */
  x86_unimpl("int3 @ 0x10dd3bc0");
L_10dd3bc1:;
  /* 10dd3bc1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd3bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3bc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3bc8 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3bc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd3bcc push eax */
  push32((uint32_t)(EAX));
  /* 10dd3bcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3bd4 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3bd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3bd9 call dword ptr [0x10dfdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dfdc90))), 0x10dd3bdfu);
  /* 10dd3bdf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3be2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3be4 jne 0x10dd3c44 */
  if (!C.zf) goto L_10dd3c44;
  /* 10dd3be6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3bea je 0x10dd3c17 */
  if (C.zf) goto L_10dd3c17;
L_10dd3bec:;
  /* 10dd3bec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd3bef push eax */
  push32((uint32_t)(EAX));
  /* 10dd3bf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3bf4 push 0x10dfa63c */
  push32((uint32_t)(0x10dfa63cu));
  /* 10dd3bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3c01 call 0x10dd2b50 */
  push32(0x10dd3c06u); f_10dd2b50();
  /* 10dd3c06 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3c0c jne 0x10dd3c0f */
  if (!C.zf) goto L_10dd3c0f;
  /* 10dd3c0e int3  */
  x86_unimpl("int3 @ 0x10dd3c0e");
L_10dd3c0f:;
  /* 10dd3c0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd3c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd3c13 jne 0x10dd3bec */
  if (!C.zf) goto L_10dd3bec;
  /* 10dd3c15 jmp 0x10dd3c3d */
  goto L_10dd3c3d;
L_10dd3c17:;
  /* 10dd3c17 push 0x10dfa618 */
  push32((uint32_t)(0x10dfa618u));
  /* 10dd3c1c push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd3c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3c29 call 0x10dd2b50 */
  push32(0x10dd3c2eu); f_10dd2b50();
  /* 10dd3c2e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3c31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3c34 jne 0x10dd3c37 */
  if (!C.zf) goto L_10dd3c37;
  /* 10dd3c36 int3  */
  x86_unimpl("int3 @ 0x10dd3c36");
L_10dd3c37:;
  /* 10dd3c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3c3b jne 0x10dd3c17 */
  if (!C.zf) goto L_10dd3c17;
L_10dd3c3d:;
  /* 10dd3c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3c3f jmp 0x10dd3e6c */
  goto L_10dd3e6c;
L_10dd3c44:;
  /* 10dd3c44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3c47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd3c4d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3c50 je 0x10dd3c66 */
  if (C.zf) goto L_10dd3c66;
  /* 10dd3c52 mov edx, dword ptr [0x10dfda84] */
  EDX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd3c58 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd3c5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd3c5d jne 0x10dd3c66 */
  if (!C.zf) goto L_10dd3c66;
  /* 10dd3c5f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10dd3c66:;
  /* 10dd3c66 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3c6a ja 0x10dd3c77 */
  if ((!C.cf&&!C.zf)) goto L_10dd3c77;
  /* 10dd3c6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3c6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3c72 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3c75 jbe 0x10dd3ca3 */
  if ((C.cf||C.zf)) goto L_10dd3ca3;
L_10dd3c77:;
  /* 10dd3c77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3c7a push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3c7b push 0x10dfa5f0 */
  push32((uint32_t)(0x10dfa5f0u));
  /* 10dd3c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3c86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3c88 call 0x10dd2b50 */
  push32(0x10dd3c8du); f_10dd2b50();
  /* 10dd3c8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3c90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3c93 jne 0x10dd3c96 */
  if (!C.zf) goto L_10dd3c96;
  /* 10dd3c95 int3  */
  x86_unimpl("int3 @ 0x10dd3c95");
L_10dd3c96:;
  /* 10dd3c96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd3c98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd3c9a jne 0x10dd3c77 */
  if (!C.zf) goto L_10dd3c77;
  /* 10dd3c9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3c9e jmp 0x10dd3e6c */
  goto L_10dd3e6c;
L_10dd3ca3:;
  /* 10dd3ca3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3ca6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3cab cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3cae je 0x10dd3cf0 */
  if (C.zf) goto L_10dd3cf0;
  /* 10dd3cb0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3cb4 je 0x10dd3cf0 */
  if (C.zf) goto L_10dd3cf0;
  /* 10dd3cb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3cb9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd3cbf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3cc2 je 0x10dd3cf0 */
  if (C.zf) goto L_10dd3cf0;
  /* 10dd3cc4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3cc8 je 0x10dd3cf0 */
  if (C.zf) goto L_10dd3cf0;
L_10dd3cca:;
  /* 10dd3cca push 0x10dfa5bc */
  push32((uint32_t)(0x10dfa5bcu));
  /* 10dd3ccf push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd3cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3cda push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3cdc call 0x10dd2b50 */
  push32(0x10dd3ce1u); f_10dd2b50();
  /* 10dd3ce1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3ce4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3ce7 jne 0x10dd3cea */
  if (!C.zf) goto L_10dd3cea;
  /* 10dd3ce9 int3  */
  x86_unimpl("int3 @ 0x10dd3ce9");
L_10dd3cea:;
  /* 10dd3cea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd3cec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd3cee jne 0x10dd3cca */
  if (!C.zf) goto L_10dd3cca;
L_10dd3cf0:;
  /* 10dd3cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3cf3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3cf6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd3cf9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd3cfc push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3cfd call 0x10dd78e0 */
  push32(0x10dd3d02u); f_10dd78e0();
  /* 10dd3d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3d05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd3d08 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3d0c jne 0x10dd3d15 */
  if (!C.zf) goto L_10dd3d15;
  /* 10dd3d0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3d10 jmp 0x10dd3e6c */
  goto L_10dd3e6c;
L_10dd3d15:;
  /* 10dd3d15 mov edx, dword ptr [0x10dfda88] */
  EDX = (r32((uint32_t)(0x10dfda88)));
  /* 10dd3d1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3d1e mov dword ptr [0x10dfda88], edx */
  w32((uint32_t)(0x10dfda88), (EDX));
  /* 10dd3d24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3d28 je 0x10dd3d73 */
  if (C.zf) goto L_10dd3d73;
  /* 10dd3d2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3d2d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10dd3d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3d36 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10dd3d3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3d40 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10dd3d47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3d4a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10dd3d51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3d54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3d57 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10dd3d5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3d5d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10dd3d64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3d67 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10dd3d6e jmp 0x10dd3e13 */
  goto L_10dd3e13;
L_10dd3d73:;
  /* 10dd3d73 mov edx, dword ptr [0x10dff5e8] */
  EDX = (r32((uint32_t)(0x10dff5e8)));
  /* 10dd3d79 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3d7c mov dword ptr [0x10dff5e8], edx */
  w32((uint32_t)(0x10dff5e8), (EDX));
  /* 10dd3d82 mov eax, dword ptr [0x10dff5f0] */
  EAX = (r32((uint32_t)(0x10dff5f0)));
  /* 10dd3d87 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3d8a mov dword ptr [0x10dff5f0], eax */
  w32((uint32_t)(0x10dff5f0), (EAX));
  /* 10dd3d8f mov ecx, dword ptr [0x10dff5f0] */
  ECX = (r32((uint32_t)(0x10dff5f0)));
  /* 10dd3d95 cmp ecx, dword ptr [0x10dff5f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dff5f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3d9b jbe 0x10dd3da9 */
  if ((C.cf||C.zf)) goto L_10dd3da9;
  /* 10dd3d9d mov edx, dword ptr [0x10dff5f0] */
  EDX = (r32((uint32_t)(0x10dff5f0)));
  /* 10dd3da3 mov dword ptr [0x10dff5f4], edx */
  w32((uint32_t)(0x10dff5f4), (EDX));
L_10dd3da9:;
  /* 10dd3da9 cmp dword ptr [0x10dff5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3db0 je 0x10dd3dbf */
  if (C.zf) goto L_10dd3dbf;
  /* 10dd3db2 mov eax, dword ptr [0x10dff5ec] */
  EAX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd3db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3dba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10dd3dbd jmp 0x10dd3dc8 */
  goto L_10dd3dc8;
L_10dd3dbf:;
  /* 10dd3dbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3dc2 mov dword ptr [0x10dff5e4], edx */
  w32((uint32_t)(0x10dff5e4), (EDX));
L_10dd3dc8:;
  /* 10dd3dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3dcb mov ecx, dword ptr [0x10dff5ec] */
  ECX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd3dd1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10dd3dd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3dd6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10dd3ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3de0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3de3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10dd3de6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3de9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd3dec mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10dd3def mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3df2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3df5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10dd3df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3dfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3dfe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10dd3e01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3e04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd3e07 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10dd3e0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3e0d mov dword ptr [0x10dff5ec], ecx */
  w32((uint32_t)(0x10dff5ec), (ECX));
L_10dd3e13:;
  /* 10dd3e13 push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd3e15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd3e17 mov dl, byte ptr [0x10dfda90] */
  DL = (r8((uint32_t)(0x10dfda90)));
  /* 10dd3e1d push edx */
  push32((uint32_t)(EDX));
  /* 10dd3e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3e21 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3e24 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3e25 call 0x10dd7800 */
  push32(0x10dd3e2au); f_10dd7800();
  /* 10dd3e2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3e2d push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd3e2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd3e31 mov cl, byte ptr [0x10dfda90] */
  CL = (r8((uint32_t)(0x10dfda90)));
  /* 10dd3e37 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3e38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3e3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3e3e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10dd3e42 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3e43 call 0x10dd7800 */
  push32(0x10dd3e48u); f_10dd7800();
  /* 10dd3e48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3e4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3e4e push edx */
  push32((uint32_t)(EDX));
  /* 10dd3e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3e51 mov al, byte ptr [0x10dfda92] */
  AL = (r8((uint32_t)(0x10dfda92)));
  /* 10dd3e56 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3e5a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3e5d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3e5e call 0x10dd7800 */
  push32(0x10dd3e63u); f_10dd7800();
  /* 10dd3e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3e66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3e69 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10dd3e6c:;
  /* 10dd3e6c pop edi */
  EDI = (pop32());
  /* 10dd3e6d pop esi */
  ESI = (pop32());
  /* 10dd3e6e pop ebx */
  EBX = (pop32());
  /* 10dd3e6f mov esp, ebp */
  ESP = (EBP);
  /* 10dd3e71 pop ebp */
  EBP = (pop32());
  /* 10dd3e72 ret  */
  ESPCHK(0x10dd3b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e80 @ 0x10dd3e80 (27 bytes, 13 insns) */
void f_10dd3e80(void) {
  FTRACE(0x10dd3e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3e81 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3e87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3e89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3e8c push eax */
  push32((uint32_t)(EAX));
  /* 10dd3e8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3e90 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3e91 call 0x10dd3ea0 */
  push32(0x10dd3e96u); f_10dd3ea0();
  /* 10dd3e96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3e99 pop ebp */
  EBP = (pop32());
  /* 10dd3e9a ret  */
  ESPCHK(0x10dd3e80u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10dd3ea0 (96 bytes, 37 insns) */
void f_10dd3ea0(void) {
  FTRACE(0x10dd3ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3ea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd3ea6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3ea9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd3ead mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10dd3eb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd3eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3eb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd3eb7 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3eb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3ebb push eax */
  push32((uint32_t)(EAX));
  /* 10dd3ebc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3ebf push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3ec0 call 0x10dd3a90 */
  push32(0x10dd3ec5u); f_10dd3a90();
  /* 10dd3ec5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3ec8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd3ecb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3ecf je 0x10dd3ef9 */
  if (C.zf) goto L_10dd3ef9;
  /* 10dd3ed1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd3ed4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10dd3ed7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd3eda add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3edd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd3ee0:;
  /* 10dd3ee0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd3ee3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3ee6 jae 0x10dd3ef9 */
  if (!C.cf) goto L_10dd3ef9;
  /* 10dd3ee8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd3eeb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10dd3eee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd3ef1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3ef4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd3ef7 jmp 0x10dd3ee0 */
  goto L_10dd3ee0;
L_10dd3ef9:;
  /* 10dd3ef9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd3efc mov esp, ebp */
  ESP = (EBP);
  /* 10dd3efe pop ebp */
  EBP = (pop32());
  /* 10dd3eff ret  */
  ESPCHK(0x10dd3ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f00 @ 0x10dd3f00 (27 bytes, 13 insns) */
void f_10dd3f00(void) {
  FTRACE(0x10dd3f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3f01 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3f07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3f09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3f0c push eax */
  push32((uint32_t)(EAX));
  /* 10dd3f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3f10 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3f11 call 0x10dd3f20 */
  push32(0x10dd3f16u); f_10dd3f20();
  /* 10dd3f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3f19 pop ebp */
  EBP = (pop32());
  /* 10dd3f1a ret  */
  ESPCHK(0x10dd3f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f20 @ 0x10dd3f20 (64 bytes, 27 insns) */
void f_10dd3f20(void) {
  FTRACE(0x10dd3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3f21 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3f24 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd3f26 call 0x10dd7490 */
  push32(0x10dd3f2bu); f_10dd7490();
  /* 10dd3f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd3f30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd3f33 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3f34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd3f37 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3f38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3f3b push edx */
  push32((uint32_t)(EDX));
  /* 10dd3f3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3f3f push eax */
  push32((uint32_t)(EAX));
  /* 10dd3f40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3f44 call 0x10dd3f60 */
  push32(0x10dd3f49u); f_10dd3f60();
  /* 10dd3f49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3f4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd3f4f push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd3f51 call 0x10dd7530 */
  push32(0x10dd3f56u); f_10dd7530();
  /* 10dd3f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3f59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd3f5c mov esp, ebp */
  ESP = (EBP);
  /* 10dd3f5e pop ebp */
  EBP = (pop32());
  /* 10dd3f5f ret  */
  ESPCHK(0x10dd3f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f60 @ 0x10dd3f60 (1297 bytes, 431 insns) */
void f_10dd3f60(void) {
  FTRACE(0x10dd3f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd3f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd3f61 mov ebp, esp */
  EBP = (ESP);
  /* 10dd3f63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd3f66 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd3f67 push esi */
  push32((uint32_t)(ESI));
  /* 10dd3f68 push edi */
  push32((uint32_t)(EDI));
  /* 10dd3f69 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10dd3f70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3f74 jne 0x10dd3f93 */
  if (!C.zf) goto L_10dd3f93;
  /* 10dd3f76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd3f79 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3f7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd3f7d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3f7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3f81 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3f82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd3f85 push eax */
  push32((uint32_t)(EAX));
  /* 10dd3f86 call 0x10dd3a90 */
  push32(0x10dd3f8bu); f_10dd3a90();
  /* 10dd3f8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3f8e jmp 0x10dd446a */
  goto L_10dd446a;
L_10dd3f93:;
  /* 10dd3f93 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3f97 je 0x10dd3fb6 */
  if (C.zf) goto L_10dd3fb6;
  /* 10dd3f99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3f9d jne 0x10dd3fb6 */
  if (!C.zf) goto L_10dd3fb6;
  /* 10dd3f9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd3fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd3fa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd3fa6 push edx */
  push32((uint32_t)(EDX));
  /* 10dd3fa7 call 0x10dd4520 */
  push32(0x10dd3facu); f_10dd4520();
  /* 10dd3fac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3fb1 jmp 0x10dd446a */
  goto L_10dd446a;
L_10dd3fb6:;
  /* 10dd3fb6 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd3fbb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd3fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3fc0 je 0x10dd3ff2 */
  if (C.zf) goto L_10dd3ff2;
L_10dd3fc2:;
  /* 10dd3fc2 call 0x10dd4c30 */
  push32(0x10dd3fc7u); f_10dd4c30();
  /* 10dd3fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd3fc9 jne 0x10dd3fec */
  if (!C.zf) goto L_10dd3fec;
  /* 10dd3fcb push 0x10dfa680 */
  push32((uint32_t)(0x10dfa680u));
  /* 10dd3fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd3fd2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10dd3fd7 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd3fdc push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd3fde call 0x10dd2b50 */
  push32(0x10dd3fe3u); f_10dd2b50();
  /* 10dd3fe3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd3fe6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd3fe9 jne 0x10dd3fec */
  if (!C.zf) goto L_10dd3fec;
  /* 10dd3feb int3  */
  x86_unimpl("int3 @ 0x10dd3feb");
L_10dd3fec:;
  /* 10dd3fec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd3fee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd3ff0 jne 0x10dd3fc2 */
  if (!C.zf) goto L_10dd3fc2;
L_10dd3ff2:;
  /* 10dd3ff2 mov edx, dword ptr [0x10dfda88] */
  EDX = (r32((uint32_t)(0x10dfda88)));
  /* 10dd3ff8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10dd3ffb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd3ffe cmp eax, dword ptr [0x10dfda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4004 jne 0x10dd4007 */
  if (!C.zf) goto L_10dd4007;
  /* 10dd4006 int3  */
  x86_unimpl("int3 @ 0x10dd4006");
L_10dd4007:;
  /* 10dd4007 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd400a push ecx */
  push32((uint32_t)(ECX));
  /* 10dd400b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd400e push edx */
  push32((uint32_t)(EDX));
  /* 10dd400f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd4012 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4013 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd4016 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4017 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd401a push edx */
  push32((uint32_t)(EDX));
  /* 10dd401b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd401e push eax */
  push32((uint32_t)(EAX));
  /* 10dd401f push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4021 call dword ptr [0x10dfdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dfdc90))), 0x10dd4027u);
  /* 10dd4027 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd402a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd402c jne 0x10dd408c */
  if (!C.zf) goto L_10dd408c;
  /* 10dd402e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4032 je 0x10dd405f */
  if (C.zf) goto L_10dd405f;
L_10dd4034:;
  /* 10dd4034 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd4037 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4038 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd403b push edx */
  push32((uint32_t)(EDX));
  /* 10dd403c push 0x10dfa7fc */
  push32((uint32_t)(0x10dfa7fcu));
  /* 10dd4041 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4043 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4047 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4049 call 0x10dd2b50 */
  push32(0x10dd404eu); f_10dd2b50();
  /* 10dd404e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4051 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4054 jne 0x10dd4057 */
  if (!C.zf) goto L_10dd4057;
  /* 10dd4056 int3  */
  x86_unimpl("int3 @ 0x10dd4056");
L_10dd4057:;
  /* 10dd4057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd405b jne 0x10dd4034 */
  if (!C.zf) goto L_10dd4034;
  /* 10dd405d jmp 0x10dd4085 */
  goto L_10dd4085;
L_10dd405f:;
  /* 10dd405f push 0x10dfa7d8 */
  push32((uint32_t)(0x10dfa7d8u));
  /* 10dd4064 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd4069 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd406b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd406d push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd406f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4071 call 0x10dd2b50 */
  push32(0x10dd4076u); f_10dd2b50();
  /* 10dd4076 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4079 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd407c jne 0x10dd407f */
  if (!C.zf) goto L_10dd407f;
  /* 10dd407e int3  */
  x86_unimpl("int3 @ 0x10dd407e");
L_10dd407f:;
  /* 10dd407f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4081 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4083 jne 0x10dd405f */
  if (!C.zf) goto L_10dd405f;
L_10dd4085:;
  /* 10dd4085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4087 jmp 0x10dd446a */
  goto L_10dd446a;
L_10dd408c:;
  /* 10dd408c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4090 jbe 0x10dd40be */
  if ((C.cf||C.zf)) goto L_10dd40be;
L_10dd4092:;
  /* 10dd4092 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd4095 push edx */
  push32((uint32_t)(EDX));
  /* 10dd4096 push 0x10dfa7a8 */
  push32((uint32_t)(0x10dfa7a8u));
  /* 10dd409b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd409d push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd409f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd40a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd40a3 call 0x10dd2b50 */
  push32(0x10dd40a8u); f_10dd2b50();
  /* 10dd40a8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd40ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd40ae jne 0x10dd40b1 */
  if (!C.zf) goto L_10dd40b1;
  /* 10dd40b0 int3  */
  x86_unimpl("int3 @ 0x10dd40b0");
L_10dd40b1:;
  /* 10dd40b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd40b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd40b5 jne 0x10dd4092 */
  if (!C.zf) goto L_10dd4092;
  /* 10dd40b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd40b9 jmp 0x10dd446a */
  goto L_10dd446a;
L_10dd40be:;
  /* 10dd40be cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd40c2 je 0x10dd4106 */
  if (C.zf) goto L_10dd4106;
  /* 10dd40c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd40c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd40cd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd40d0 je 0x10dd4106 */
  if (C.zf) goto L_10dd4106;
  /* 10dd40d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd40d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd40db cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd40de je 0x10dd4106 */
  if (C.zf) goto L_10dd4106;
L_10dd40e0:;
  /* 10dd40e0 push 0x10dfa5bc */
  push32((uint32_t)(0x10dfa5bcu));
  /* 10dd40e5 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd40ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd40ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd40ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd40f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd40f2 call 0x10dd2b50 */
  push32(0x10dd40f7u); f_10dd2b50();
  /* 10dd40f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd40fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd40fd jne 0x10dd4100 */
  if (!C.zf) goto L_10dd4100;
  /* 10dd40ff int3  */
  x86_unimpl("int3 @ 0x10dd40ff");
L_10dd4100:;
  /* 10dd4100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4104 jne 0x10dd40e0 */
  if (!C.zf) goto L_10dd40e0;
L_10dd4106:;
  /* 10dd4106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4109 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd410a call 0x10dd5090 */
  push32(0x10dd410fu); f_10dd5090();
  /* 10dd410f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4114 jne 0x10dd4137 */
  if (!C.zf) goto L_10dd4137;
  /* 10dd4116 push 0x10dfa784 */
  push32((uint32_t)(0x10dfa784u));
  /* 10dd411b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd411d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10dd4122 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4127 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4129 call 0x10dd2b50 */
  push32(0x10dd412eu); f_10dd2b50();
  /* 10dd412e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4131 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4134 jne 0x10dd4137 */
  if (!C.zf) goto L_10dd4137;
  /* 10dd4136 int3  */
  x86_unimpl("int3 @ 0x10dd4136");
L_10dd4137:;
  /* 10dd4137 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4139 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd413b jne 0x10dd4106 */
  if (!C.zf) goto L_10dd4106;
  /* 10dd413d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4140 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd4143 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd4146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4149 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd414d jne 0x10dd4156 */
  if (!C.zf) goto L_10dd4156;
  /* 10dd414f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10dd4156:;
  /* 10dd4156 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd415a je 0x10dd419a */
  if (C.zf) goto L_10dd419a;
L_10dd415c:;
  /* 10dd415c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd415f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4166 jne 0x10dd4171 */
  if (!C.zf) goto L_10dd4171;
  /* 10dd4168 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd416b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd416f je 0x10dd4192 */
  if (C.zf) goto L_10dd4192;
L_10dd4171:;
  /* 10dd4171 push 0x10dfa73c */
  push32((uint32_t)(0x10dfa73cu));
  /* 10dd4176 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4178 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10dd417d push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4182 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4184 call 0x10dd2b50 */
  push32(0x10dd4189u); f_10dd2b50();
  /* 10dd4189 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd418c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd418f jne 0x10dd4192 */
  if (!C.zf) goto L_10dd4192;
  /* 10dd4191 int3  */
  x86_unimpl("int3 @ 0x10dd4191");
L_10dd4192:;
  /* 10dd4192 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4194 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4196 jne 0x10dd415c */
  if (!C.zf) goto L_10dd415c;
  /* 10dd4198 jmp 0x10dd41fe */
  goto L_10dd41fe;
L_10dd419a:;
  /* 10dd419a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd419d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd41a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd41a5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd41a8 jne 0x10dd41bf */
  if (!C.zf) goto L_10dd41bf;
  /* 10dd41aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd41ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd41b3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd41b6 jne 0x10dd41bf */
  if (!C.zf) goto L_10dd41bf;
  /* 10dd41b8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10dd41bf:;
  /* 10dd41bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd41c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd41c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd41ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd41cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd41d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd41d5 je 0x10dd41f8 */
  if (C.zf) goto L_10dd41f8;
  /* 10dd41d7 push 0x10dfa700 */
  push32((uint32_t)(0x10dfa700u));
  /* 10dd41dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd41de push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10dd41e3 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd41e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd41ea call 0x10dd2b50 */
  push32(0x10dd41efu); f_10dd2b50();
  /* 10dd41ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd41f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd41f5 jne 0x10dd41f8 */
  if (!C.zf) goto L_10dd41f8;
  /* 10dd41f7 int3  */
  x86_unimpl("int3 @ 0x10dd41f7");
L_10dd41f8:;
  /* 10dd41f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd41fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd41fc jne 0x10dd41bf */
  if (!C.zf) goto L_10dd41bf;
L_10dd41fe:;
  /* 10dd41fe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4202 je 0x10dd4229 */
  if (C.zf) goto L_10dd4229;
  /* 10dd4204 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd4207 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd420a push eax */
  push32((uint32_t)(EAX));
  /* 10dd420b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd420e push ecx */
  push32((uint32_t)(ECX));
  /* 10dd420f call 0x10dd7a10 */
  push32(0x10dd4214u); f_10dd7a10();
  /* 10dd4214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4217 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd421a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd421e jne 0x10dd4227 */
  if (!C.zf) goto L_10dd4227;
  /* 10dd4220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4222 jmp 0x10dd446a */
  goto L_10dd446a;
L_10dd4227:;
  /* 10dd4227 jmp 0x10dd424c */
  goto L_10dd424c;
L_10dd4229:;
  /* 10dd4229 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd422c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd422f push edx */
  push32((uint32_t)(EDX));
  /* 10dd4230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4233 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4234 call 0x10dd7960 */
  push32(0x10dd4239u); f_10dd7960();
  /* 10dd4239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd423c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd423f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4243 jne 0x10dd424c */
  if (!C.zf) goto L_10dd424c;
  /* 10dd4245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4247 jmp 0x10dd446a */
  goto L_10dd446a;
L_10dd424c:;
  /* 10dd424c mov ecx, dword ptr [0x10dfda88] */
  ECX = (r32((uint32_t)(0x10dfda88)));
  /* 10dd4252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4255 mov dword ptr [0x10dfda88], ecx */
  w32((uint32_t)(0x10dfda88), (ECX));
  /* 10dd425b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd425f jne 0x10dd42b7 */
  if (!C.zf) goto L_10dd42b7;
  /* 10dd4261 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4264 mov eax, dword ptr [0x10dff5e8] */
  EAX = (r32((uint32_t)(0x10dff5e8)));
  /* 10dd4269 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd426c mov dword ptr [0x10dff5e8], eax */
  w32((uint32_t)(0x10dff5e8), (EAX));
  /* 10dd4271 mov ecx, dword ptr [0x10dff5e8] */
  ECX = (r32((uint32_t)(0x10dff5e8)));
  /* 10dd4277 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd427a mov dword ptr [0x10dff5e8], ecx */
  w32((uint32_t)(0x10dff5e8), (ECX));
  /* 10dd4280 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4283 mov eax, dword ptr [0x10dff5f0] */
  EAX = (r32((uint32_t)(0x10dff5f0)));
  /* 10dd4288 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd428b mov dword ptr [0x10dff5f0], eax */
  w32((uint32_t)(0x10dff5f0), (EAX));
  /* 10dd4290 mov ecx, dword ptr [0x10dff5f0] */
  ECX = (r32((uint32_t)(0x10dff5f0)));
  /* 10dd4296 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4299 mov dword ptr [0x10dff5f0], ecx */
  w32((uint32_t)(0x10dff5f0), (ECX));
  /* 10dd429f mov edx, dword ptr [0x10dff5f0] */
  EDX = (r32((uint32_t)(0x10dff5f0)));
  /* 10dd42a5 cmp edx, dword ptr [0x10dff5f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dff5f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd42ab jbe 0x10dd42b7 */
  if ((C.cf||C.zf)) goto L_10dd42b7;
  /* 10dd42ad mov eax, dword ptr [0x10dff5f0] */
  EAX = (r32((uint32_t)(0x10dff5f0)));
  /* 10dd42b2 mov dword ptr [0x10dff5f4], eax */
  w32((uint32_t)(0x10dff5f4), (EAX));
L_10dd42b7:;
  /* 10dd42b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd42ba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd42bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd42c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd42c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd42c6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd42c9 jbe 0x10dd42ef */
  if ((C.cf||C.zf)) goto L_10dd42ef;
  /* 10dd42cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd42ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd42d1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd42d4 push edx */
  push32((uint32_t)(EDX));
  /* 10dd42d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd42d7 mov al, byte ptr [0x10dfda92] */
  AL = (r8((uint32_t)(0x10dfda92)));
  /* 10dd42dc push eax */
  push32((uint32_t)(EAX));
  /* 10dd42dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd42e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd42e3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd42e6 push edx */
  push32((uint32_t)(EDX));
  /* 10dd42e7 call 0x10dd7800 */
  push32(0x10dd42ecu); f_10dd7800();
  /* 10dd42ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd42ef:;
  /* 10dd42ef push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd42f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd42f3 mov al, byte ptr [0x10dfda90] */
  AL = (r8((uint32_t)(0x10dfda90)));
  /* 10dd42f8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd42f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd42fc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd42ff push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4300 call 0x10dd7800 */
  push32(0x10dd4305u); f_10dd7800();
  /* 10dd4305 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4308 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd430c jne 0x10dd4329 */
  if (!C.zf) goto L_10dd4329;
  /* 10dd430e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4311 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd4314 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dd4317 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd431a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd431d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10dd4320 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4323 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd4326 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10dd4329:;
  /* 10dd4329 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd432c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd432f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10dd4332:;
  /* 10dd4332 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4336 jne 0x10dd4367 */
  if (!C.zf) goto L_10dd4367;
  /* 10dd4338 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd433c jne 0x10dd4346 */
  if (!C.zf) goto L_10dd4346;
  /* 10dd433e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4341 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4344 je 0x10dd4367 */
  if (C.zf) goto L_10dd4367;
L_10dd4346:;
  /* 10dd4346 push 0x10dfa6cc */
  push32((uint32_t)(0x10dfa6ccu));
  /* 10dd434b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd434d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10dd4352 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4357 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4359 call 0x10dd2b50 */
  push32(0x10dd435eu); f_10dd2b50();
  /* 10dd435e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4361 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4364 jne 0x10dd4367 */
  if (!C.zf) goto L_10dd4367;
  /* 10dd4366 int3  */
  x86_unimpl("int3 @ 0x10dd4366");
L_10dd4367:;
  /* 10dd4367 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4369 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd436b jne 0x10dd4332 */
  if (!C.zf) goto L_10dd4332;
  /* 10dd436d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4370 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4373 je 0x10dd437b */
  if (C.zf) goto L_10dd437b;
  /* 10dd4375 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4379 je 0x10dd4383 */
  if (C.zf) goto L_10dd4383;
L_10dd437b:;
  /* 10dd437b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd437e jmp 0x10dd446a */
  goto L_10dd446a;
L_10dd4383:;
  /* 10dd4383 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4386 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4389 je 0x10dd439b */
  if (C.zf) goto L_10dd439b;
  /* 10dd438b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd438e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd4390 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4393 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd4396 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10dd4399 jmp 0x10dd43d7 */
  goto L_10dd43d7;
L_10dd439b:;
  /* 10dd439b mov eax, dword ptr [0x10dff5e4] */
  EAX = (r32((uint32_t)(0x10dff5e4)));
  /* 10dd43a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd43a3 je 0x10dd43c6 */
  if (C.zf) goto L_10dd43c6;
  /* 10dd43a5 push 0x10dfa6b0 */
  push32((uint32_t)(0x10dfa6b0u));
  /* 10dd43aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd43ac push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10dd43b1 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd43b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd43b8 call 0x10dd2b50 */
  push32(0x10dd43bdu); f_10dd2b50();
  /* 10dd43bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd43c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd43c3 jne 0x10dd43c6 */
  if (!C.zf) goto L_10dd43c6;
  /* 10dd43c5 int3  */
  x86_unimpl("int3 @ 0x10dd43c5");
L_10dd43c6:;
  /* 10dd43c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd43c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd43ca jne 0x10dd439b */
  if (!C.zf) goto L_10dd439b;
  /* 10dd43cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd43cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd43d2 mov dword ptr [0x10dff5e4], eax */
  w32((uint32_t)(0x10dff5e4), (EAX));
L_10dd43d7:;
  /* 10dd43d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd43da cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd43de je 0x10dd43ef */
  if (C.zf) goto L_10dd43ef;
  /* 10dd43e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd43e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd43e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd43e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd43eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10dd43ed jmp 0x10dd442a */
  goto L_10dd442a;
L_10dd43ef:;
  /* 10dd43ef mov eax, dword ptr [0x10dff5ec] */
  EAX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd43f4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd43f7 je 0x10dd441a */
  if (C.zf) goto L_10dd441a;
  /* 10dd43f9 push 0x10dfa694 */
  push32((uint32_t)(0x10dfa694u));
  /* 10dd43fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4400 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10dd4405 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd440a push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd440c call 0x10dd2b50 */
  push32(0x10dd4411u); f_10dd2b50();
  /* 10dd4411 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4414 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4417 jne 0x10dd441a */
  if (!C.zf) goto L_10dd441a;
  /* 10dd4419 int3  */
  x86_unimpl("int3 @ 0x10dd4419");
L_10dd441a:;
  /* 10dd441a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd441c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd441e jne 0x10dd43ef */
  if (!C.zf) goto L_10dd43ef;
  /* 10dd4420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4423 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd4425 mov dword ptr [0x10dff5ec], eax */
  w32((uint32_t)(0x10dff5ec), (EAX));
L_10dd442a:;
  /* 10dd442a cmp dword ptr [0x10dff5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4431 je 0x10dd4441 */
  if (C.zf) goto L_10dd4441;
  /* 10dd4433 mov ecx, dword ptr [0x10dff5ec] */
  ECX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd4439 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd443c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10dd443f jmp 0x10dd4449 */
  goto L_10dd4449;
L_10dd4441:;
  /* 10dd4441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4444 mov dword ptr [0x10dff5e4], eax */
  w32((uint32_t)(0x10dff5e4), (EAX));
L_10dd4449:;
  /* 10dd4449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd444c mov edx, dword ptr [0x10dff5ec] */
  EDX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd4452 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10dd4454 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4457 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10dd445e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4461 mov dword ptr [0x10dff5ec], ecx */
  w32((uint32_t)(0x10dff5ec), (ECX));
  /* 10dd4467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10dd446a:;
  /* 10dd446a pop edi */
  EDI = (pop32());
  /* 10dd446b pop esi */
  ESI = (pop32());
  /* 10dd446c pop ebx */
  EBX = (pop32());
  /* 10dd446d mov esp, ebp */
  ESP = (EBP);
  /* 10dd446f pop ebp */
  EBP = (pop32());
  /* 10dd4470 ret  */
  ESPCHK(0x10dd3f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004480 @ 0x10dd4480 (27 bytes, 13 insns) */
void f_10dd4480(void) {
  FTRACE(0x10dd4480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4480 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4481 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4485 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4487 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd4489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd448c push eax */
  push32((uint32_t)(EAX));
  /* 10dd448d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4490 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4491 call 0x10dd44a0 */
  push32(0x10dd4496u); f_10dd44a0();
  /* 10dd4496 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4499 pop ebp */
  EBP = (pop32());
  /* 10dd449a ret  */
  ESPCHK(0x10dd4480u, _esp0);
  ESP += 4; return;
}

/* FUN_100044a0 @ 0x10dd44a0 (64 bytes, 27 insns) */
void f_10dd44a0(void) {
  FTRACE(0x10dd44a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd44a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd44a1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd44a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd44a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd44a6 call 0x10dd7490 */
  push32(0x10dd44abu); f_10dd7490();
  /* 10dd44ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd44ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd44b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd44b3 push eax */
  push32((uint32_t)(EAX));
  /* 10dd44b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd44b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd44b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd44bb push edx */
  push32((uint32_t)(EDX));
  /* 10dd44bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd44bf push eax */
  push32((uint32_t)(EAX));
  /* 10dd44c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd44c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd44c4 call 0x10dd3f60 */
  push32(0x10dd44c9u); f_10dd3f60();
  /* 10dd44c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd44cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd44cf push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd44d1 call 0x10dd7530 */
  push32(0x10dd44d6u); f_10dd7530();
  /* 10dd44d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd44d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd44dc mov esp, ebp */
  ESP = (EBP);
  /* 10dd44de pop ebp */
  EBP = (pop32());
  /* 10dd44df ret  */
  ESPCHK(0x10dd44a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044e0 @ 0x10dd44e0 (19 bytes, 9 insns) */
void f_10dd44e0(void) {
  FTRACE(0x10dd44e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd44e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd44e1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd44e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd44e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd44e8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd44e9 call 0x10dd4520 */
  push32(0x10dd44eeu); f_10dd4520();
  /* 10dd44ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd44f1 pop ebp */
  EBP = (pop32());
  /* 10dd44f2 ret  */
  ESPCHK(0x10dd44e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x10dd4500 (19 bytes, 9 insns) */
void f_10dd4500(void) {
  FTRACE(0x10dd4500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4500 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4501 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4503 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd4505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4508 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4509 call 0x10dd4550 */
  push32(0x10dd450eu); f_10dd4550();
  /* 10dd450e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4511 pop ebp */
  EBP = (pop32());
  /* 10dd4512 ret  */
  ESPCHK(0x10dd4500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004520 @ 0x10dd4520 (41 bytes, 16 insns) */
void f_10dd4520(void) {
  FTRACE(0x10dd4520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4520 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4521 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4523 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd4525 call 0x10dd7490 */
  push32(0x10dd452au); f_10dd7490();
  /* 10dd452a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd452d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd4530 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4534 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4535 call 0x10dd4550 */
  push32(0x10dd453au); f_10dd4550();
  /* 10dd453a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd453d push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd453f call 0x10dd7530 */
  push32(0x10dd4544u); f_10dd7530();
  /* 10dd4544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4547 pop ebp */
  EBP = (pop32());
  /* 10dd4548 ret  */
  ESPCHK(0x10dd4520u, _esp0);
  ESP += 4; return;
}

/* FUN_10004550 @ 0x10dd4550 (1004 bytes, 342 insns) */
void f_10dd4550(void) {
  FTRACE(0x10dd4550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4550 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4551 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4553 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4554 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd4555 push esi */
  push32((uint32_t)(ESI));
  /* 10dd4556 push edi */
  push32((uint32_t)(EDI));
  /* 10dd4557 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd455c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd455f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4561 je 0x10dd4593 */
  if (C.zf) goto L_10dd4593;
L_10dd4563:;
  /* 10dd4563 call 0x10dd4c30 */
  push32(0x10dd4568u); f_10dd4c30();
  /* 10dd4568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd456a jne 0x10dd458d */
  if (!C.zf) goto L_10dd458d;
  /* 10dd456c push 0x10dfa680 */
  push32((uint32_t)(0x10dfa680u));
  /* 10dd4571 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4573 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10dd4578 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd457d push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd457f call 0x10dd2b50 */
  push32(0x10dd4584u); f_10dd2b50();
  /* 10dd4584 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4587 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd458a jne 0x10dd458d */
  if (!C.zf) goto L_10dd458d;
  /* 10dd458c int3  */
  x86_unimpl("int3 @ 0x10dd458c");
L_10dd458d:;
  /* 10dd458d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd458f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4591 jne 0x10dd4563 */
  if (!C.zf) goto L_10dd4563;
L_10dd4593:;
  /* 10dd4593 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4597 jne 0x10dd459e */
  if (!C.zf) goto L_10dd459e;
  /* 10dd4599 jmp 0x10dd4935 */
  goto L_10dd4935;
L_10dd459e:;
  /* 10dd459e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd45a7 push edx */
  push32((uint32_t)(EDX));
  /* 10dd45a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd45ad push eax */
  push32((uint32_t)(EAX));
  /* 10dd45ae push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd45b0 call dword ptr [0x10dfdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dfdc90))), 0x10dd45b6u);
  /* 10dd45b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd45b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd45bb jne 0x10dd45e8 */
  if (!C.zf) goto L_10dd45e8;
L_10dd45bd:;
  /* 10dd45bd push 0x10dfa944 */
  push32((uint32_t)(0x10dfa944u));
  /* 10dd45c2 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd45c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45cf call 0x10dd2b50 */
  push32(0x10dd45d4u); f_10dd2b50();
  /* 10dd45d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd45d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd45da jne 0x10dd45dd */
  if (!C.zf) goto L_10dd45dd;
  /* 10dd45dc int3  */
  x86_unimpl("int3 @ 0x10dd45dc");
L_10dd45dd:;
  /* 10dd45dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd45df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd45e1 jne 0x10dd45bd */
  if (!C.zf) goto L_10dd45bd;
  /* 10dd45e3 jmp 0x10dd4935 */
  goto L_10dd4935;
L_10dd45e8:;
  /* 10dd45e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd45eb push edx */
  push32((uint32_t)(EDX));
  /* 10dd45ec call 0x10dd5090 */
  push32(0x10dd45f1u); f_10dd5090();
  /* 10dd45f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd45f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd45f6 jne 0x10dd4619 */
  if (!C.zf) goto L_10dd4619;
  /* 10dd45f8 push 0x10dfa784 */
  push32((uint32_t)(0x10dfa784u));
  /* 10dd45fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd45ff push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10dd4604 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4609 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd460b call 0x10dd2b50 */
  push32(0x10dd4610u); f_10dd2b50();
  /* 10dd4610 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4613 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4616 jne 0x10dd4619 */
  if (!C.zf) goto L_10dd4619;
  /* 10dd4618 int3  */
  x86_unimpl("int3 @ 0x10dd4618");
L_10dd4619:;
  /* 10dd4619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd461b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd461d jne 0x10dd45e8 */
  if (!C.zf) goto L_10dd45e8;
  /* 10dd461f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4622 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd4625 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd4628:;
  /* 10dd4628 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd462b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd462e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4633 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4636 je 0x10dd467b */
  if (C.zf) goto L_10dd467b;
  /* 10dd4638 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd463b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd463f je 0x10dd467b */
  if (C.zf) goto L_10dd467b;
  /* 10dd4641 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4644 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd4647 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd464c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd464f je 0x10dd467b */
  if (C.zf) goto L_10dd467b;
  /* 10dd4651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4654 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4658 je 0x10dd467b */
  if (C.zf) goto L_10dd467b;
  /* 10dd465a push 0x10dfa91c */
  push32((uint32_t)(0x10dfa91cu));
  /* 10dd465f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4661 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10dd4666 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd466b push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd466d call 0x10dd2b50 */
  push32(0x10dd4672u); f_10dd2b50();
  /* 10dd4672 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4675 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4678 jne 0x10dd467b */
  if (!C.zf) goto L_10dd467b;
  /* 10dd467a int3  */
  x86_unimpl("int3 @ 0x10dd467a");
L_10dd467b:;
  /* 10dd467b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd467d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd467f jne 0x10dd4628 */
  if (!C.zf) goto L_10dd4628;
  /* 10dd4681 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd4686 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd468b jne 0x10dd4756 */
  if (!C.zf) goto L_10dd4756;
  /* 10dd4691 push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd4693 mov cl, byte ptr [0x10dfda90] */
  CL = (r8((uint32_t)(0x10dfda90)));
  /* 10dd4699 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd469a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd469d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd46a0 push edx */
  push32((uint32_t)(EDX));
  /* 10dd46a1 call 0x10dd4ba0 */
  push32(0x10dd46a6u); f_10dd4ba0();
  /* 10dd46a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd46a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd46ab jne 0x10dd46f0 */
  if (!C.zf) goto L_10dd46f0;
L_10dd46ad:;
  /* 10dd46ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd46b0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd46b3 push eax */
  push32((uint32_t)(EAX));
  /* 10dd46b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd46b7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10dd46ba push edx */
  push32((uint32_t)(EDX));
  /* 10dd46bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd46be mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10dd46c1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd46c7 mov edx, dword ptr [ecx*4 + 0x10dfda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfda94)));
  /* 10dd46ce push edx */
  push32((uint32_t)(EDX));
  /* 10dd46cf push 0x10dfa8f0 */
  push32((uint32_t)(0x10dfa8f0u));
  /* 10dd46d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd46d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd46d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd46da push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd46dc call 0x10dd2b50 */
  push32(0x10dd46e1u); f_10dd2b50();
  /* 10dd46e1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd46e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd46e7 jne 0x10dd46ea */
  if (!C.zf) goto L_10dd46ea;
  /* 10dd46e9 int3  */
  x86_unimpl("int3 @ 0x10dd46e9");
L_10dd46ea:;
  /* 10dd46ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd46ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd46ee jne 0x10dd46ad */
  if (!C.zf) goto L_10dd46ad;
L_10dd46f0:;
  /* 10dd46f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd46f2 mov cl, byte ptr [0x10dfda90] */
  CL = (r8((uint32_t)(0x10dfda90)));
  /* 10dd46f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd46f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd46fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd46ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4702 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10dd4706 push edx */
  push32((uint32_t)(EDX));
  /* 10dd4707 call 0x10dd4ba0 */
  push32(0x10dd470cu); f_10dd4ba0();
  /* 10dd470c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd470f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4711 jne 0x10dd4756 */
  if (!C.zf) goto L_10dd4756;
L_10dd4713:;
  /* 10dd4713 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4716 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4719 push eax */
  push32((uint32_t)(EAX));
  /* 10dd471a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd471d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10dd4720 push edx */
  push32((uint32_t)(EDX));
  /* 10dd4721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4724 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10dd4727 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd472d mov edx, dword ptr [ecx*4 + 0x10dfda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfda94)));
  /* 10dd4734 push edx */
  push32((uint32_t)(EDX));
  /* 10dd4735 push 0x10dfa8c4 */
  push32((uint32_t)(0x10dfa8c4u));
  /* 10dd473a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd473c push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd473e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4740 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd4742 call 0x10dd2b50 */
  push32(0x10dd4747u); f_10dd2b50();
  /* 10dd4747 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd474a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd474d jne 0x10dd4750 */
  if (!C.zf) goto L_10dd4750;
  /* 10dd474f int3  */
  x86_unimpl("int3 @ 0x10dd474f");
L_10dd4750:;
  /* 10dd4750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4754 jne 0x10dd4713 */
  if (!C.zf) goto L_10dd4713;
L_10dd4756:;
  /* 10dd4756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4759 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd475d jne 0x10dd47cb */
  if (!C.zf) goto L_10dd47cb;
L_10dd475f:;
  /* 10dd475f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4762 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4769 jne 0x10dd4774 */
  if (!C.zf) goto L_10dd4774;
  /* 10dd476b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd476e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4772 je 0x10dd4795 */
  if (C.zf) goto L_10dd4795;
L_10dd4774:;
  /* 10dd4774 push 0x10dfa884 */
  push32((uint32_t)(0x10dfa884u));
  /* 10dd4779 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd477b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10dd4780 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4785 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4787 call 0x10dd2b50 */
  push32(0x10dd478cu); f_10dd2b50();
  /* 10dd478c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd478f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4792 jne 0x10dd4795 */
  if (!C.zf) goto L_10dd4795;
  /* 10dd4794 int3  */
  x86_unimpl("int3 @ 0x10dd4794");
L_10dd4795:;
  /* 10dd4795 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4797 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4799 jne 0x10dd475f */
  if (!C.zf) goto L_10dd475f;
  /* 10dd479b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd479e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd47a1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd47a4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd47a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd47a7 mov cl, byte ptr [0x10dfda91] */
  CL = (r8((uint32_t)(0x10dfda91)));
  /* 10dd47ad push ecx */
  push32((uint32_t)(ECX));
  /* 10dd47ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd47b1 push edx */
  push32((uint32_t)(EDX));
  /* 10dd47b2 call 0x10dd7800 */
  push32(0x10dd47b7u); f_10dd7800();
  /* 10dd47b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd47ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd47bd push eax */
  push32((uint32_t)(EAX));
  /* 10dd47be call 0x10dd7c00 */
  push32(0x10dd47c3u); f_10dd7c00();
  /* 10dd47c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd47c6 jmp 0x10dd4935 */
  goto L_10dd4935;
L_10dd47cb:;
  /* 10dd47cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd47ce cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd47d2 jne 0x10dd47e1 */
  if (!C.zf) goto L_10dd47e1;
  /* 10dd47d4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd47d8 jne 0x10dd47e1 */
  if (!C.zf) goto L_10dd47e1;
  /* 10dd47da mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10dd47e1:;
  /* 10dd47e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd47e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd47e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd47ea je 0x10dd480d */
  if (C.zf) goto L_10dd480d;
  /* 10dd47ec push 0x10dfa864 */
  push32((uint32_t)(0x10dfa864u));
  /* 10dd47f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd47f3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10dd47f8 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd47fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd47ff call 0x10dd2b50 */
  push32(0x10dd4804u); f_10dd2b50();
  /* 10dd4804 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd480a jne 0x10dd480d */
  if (!C.zf) goto L_10dd480d;
  /* 10dd480c int3  */
  x86_unimpl("int3 @ 0x10dd480c");
L_10dd480d:;
  /* 10dd480d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd480f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4811 jne 0x10dd47e1 */
  if (!C.zf) goto L_10dd47e1;
  /* 10dd4813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4816 mov eax, dword ptr [0x10dff5f0] */
  EAX = (r32((uint32_t)(0x10dff5f0)));
  /* 10dd481b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd481e mov dword ptr [0x10dff5f0], eax */
  w32((uint32_t)(0x10dff5f0), (EAX));
  /* 10dd4823 mov ecx, dword ptr [0x10dfda84] */
  ECX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd4829 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd482c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd482e jne 0x10dd490c */
  if (!C.zf) goto L_10dd490c;
  /* 10dd4834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4837 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd483a je 0x10dd484c */
  if (C.zf) goto L_10dd484c;
  /* 10dd483c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd483f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd4841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4844 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd4847 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10dd484a jmp 0x10dd488a */
  goto L_10dd488a;
L_10dd484c:;
  /* 10dd484c mov ecx, dword ptr [0x10dff5e4] */
  ECX = (r32((uint32_t)(0x10dff5e4)));
  /* 10dd4852 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4855 je 0x10dd4878 */
  if (C.zf) goto L_10dd4878;
  /* 10dd4857 push 0x10dfa84c */
  push32((uint32_t)(0x10dfa84cu));
  /* 10dd485c push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd485e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10dd4863 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4868 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd486a call 0x10dd2b50 */
  push32(0x10dd486fu); f_10dd2b50();
  /* 10dd486f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4872 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4875 jne 0x10dd4878 */
  if (!C.zf) goto L_10dd4878;
  /* 10dd4877 int3  */
  x86_unimpl("int3 @ 0x10dd4877");
L_10dd4878:;
  /* 10dd4878 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd487a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd487c jne 0x10dd484c */
  if (!C.zf) goto L_10dd484c;
  /* 10dd487e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4881 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd4884 mov dword ptr [0x10dff5e4], ecx */
  w32((uint32_t)(0x10dff5e4), (ECX));
L_10dd488a:;
  /* 10dd488a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd488d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4891 je 0x10dd48a2 */
  if (C.zf) goto L_10dd48a2;
  /* 10dd4893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4896 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd4899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd489c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd489e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dd48a0 jmp 0x10dd48df */
  goto L_10dd48df;
L_10dd48a2:;
  /* 10dd48a2 mov ecx, dword ptr [0x10dff5ec] */
  ECX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd48a8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd48ab je 0x10dd48ce */
  if (C.zf) goto L_10dd48ce;
  /* 10dd48ad push 0x10dfa834 */
  push32((uint32_t)(0x10dfa834u));
  /* 10dd48b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd48b4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10dd48b9 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd48be push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd48c0 call 0x10dd2b50 */
  push32(0x10dd48c5u); f_10dd2b50();
  /* 10dd48c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd48c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd48cb jne 0x10dd48ce */
  if (!C.zf) goto L_10dd48ce;
  /* 10dd48cd int3  */
  x86_unimpl("int3 @ 0x10dd48cd");
L_10dd48ce:;
  /* 10dd48ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd48d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd48d2 jne 0x10dd48a2 */
  if (!C.zf) goto L_10dd48a2;
  /* 10dd48d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd48d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd48d9 mov dword ptr [0x10dff5ec], ecx */
  w32((uint32_t)(0x10dff5ec), (ECX));
L_10dd48df:;
  /* 10dd48df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd48e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd48e5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd48e8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd48e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd48eb mov cl, byte ptr [0x10dfda91] */
  CL = (r8((uint32_t)(0x10dfda91)));
  /* 10dd48f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd48f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd48f5 push edx */
  push32((uint32_t)(EDX));
  /* 10dd48f6 call 0x10dd7800 */
  push32(0x10dd48fbu); f_10dd7800();
  /* 10dd48fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd48fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4901 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4902 call 0x10dd7c00 */
  push32(0x10dd4907u); f_10dd7c00();
  /* 10dd4907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd490a jmp 0x10dd4935 */
  goto L_10dd4935;
L_10dd490c:;
  /* 10dd490c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd490f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10dd4916 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4919 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd491c push eax */
  push32((uint32_t)(EAX));
  /* 10dd491d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd491f mov cl, byte ptr [0x10dfda91] */
  CL = (r8((uint32_t)(0x10dfda91)));
  /* 10dd4925 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4929 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd492c push edx */
  push32((uint32_t)(EDX));
  /* 10dd492d call 0x10dd7800 */
  push32(0x10dd4932u); f_10dd7800();
  /* 10dd4932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd4935:;
  /* 10dd4935 pop edi */
  EDI = (pop32());
  /* 10dd4936 pop esi */
  ESI = (pop32());
  /* 10dd4937 pop ebx */
  EBX = (pop32());
  /* 10dd4938 mov esp, ebp */
  ESP = (EBP);
  /* 10dd493a pop ebp */
  EBP = (pop32());
  /* 10dd493b ret  */
  ESPCHK(0x10dd4550u, _esp0);
  ESP += 4; return;
}

/* FUN_10004940 @ 0x10dd4940 (19 bytes, 9 insns) */
void f_10dd4940(void) {
  FTRACE(0x10dd4940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4940 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4941 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4943 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd4945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4948 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4949 call 0x10dd4960 */
  push32(0x10dd494eu); f_10dd4960();
  /* 10dd494e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4951 pop ebp */
  EBP = (pop32());
  /* 10dd4952 ret  */
  ESPCHK(0x10dd4940u, _esp0);
  ESP += 4; return;
}

/* FUN_10004960 @ 0x10dd4960 (342 bytes, 119 insns) */
void f_10dd4960(void) {
  FTRACE(0x10dd4960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4960 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4961 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd4966 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd4967 push esi */
  push32((uint32_t)(ESI));
  /* 10dd4968 push edi */
  push32((uint32_t)(EDI));
  /* 10dd4969 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd496e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4973 je 0x10dd49a5 */
  if (C.zf) goto L_10dd49a5;
L_10dd4975:;
  /* 10dd4975 call 0x10dd4c30 */
  push32(0x10dd497au); f_10dd4c30();
  /* 10dd497a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd497c jne 0x10dd499f */
  if (!C.zf) goto L_10dd499f;
  /* 10dd497e push 0x10dfa680 */
  push32((uint32_t)(0x10dfa680u));
  /* 10dd4983 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4985 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10dd498a push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd498f push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4991 call 0x10dd2b50 */
  push32(0x10dd4996u); f_10dd2b50();
  /* 10dd4996 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd499c jne 0x10dd499f */
  if (!C.zf) goto L_10dd499f;
  /* 10dd499e int3  */
  x86_unimpl("int3 @ 0x10dd499e");
L_10dd499f:;
  /* 10dd499f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd49a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd49a3 jne 0x10dd4975 */
  if (!C.zf) goto L_10dd4975;
L_10dd49a5:;
  /* 10dd49a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd49a7 call 0x10dd7490 */
  push32(0x10dd49acu); f_10dd7490();
  /* 10dd49ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd49af:;
  /* 10dd49af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd49b2 push edx */
  push32((uint32_t)(EDX));
  /* 10dd49b3 call 0x10dd5090 */
  push32(0x10dd49b8u); f_10dd5090();
  /* 10dd49b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd49bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd49bd jne 0x10dd49e0 */
  if (!C.zf) goto L_10dd49e0;
  /* 10dd49bf push 0x10dfa784 */
  push32((uint32_t)(0x10dfa784u));
  /* 10dd49c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd49c6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10dd49cb push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd49d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd49d2 call 0x10dd2b50 */
  push32(0x10dd49d7u); f_10dd2b50();
  /* 10dd49d7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd49da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd49dd jne 0x10dd49e0 */
  if (!C.zf) goto L_10dd49e0;
  /* 10dd49df int3  */
  x86_unimpl("int3 @ 0x10dd49df");
L_10dd49e0:;
  /* 10dd49e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd49e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd49e4 jne 0x10dd49af */
  if (!C.zf) goto L_10dd49af;
  /* 10dd49e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd49e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd49ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10dd49ef:;
  /* 10dd49ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd49f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd49f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd49fa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd49fd je 0x10dd4a42 */
  if (C.zf) goto L_10dd4a42;
  /* 10dd49ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4a02 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a06 je 0x10dd4a42 */
  if (C.zf) goto L_10dd4a42;
  /* 10dd4a08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4a0b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd4a0e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4a13 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a16 je 0x10dd4a42 */
  if (C.zf) goto L_10dd4a42;
  /* 10dd4a18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4a1b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a1f je 0x10dd4a42 */
  if (C.zf) goto L_10dd4a42;
  /* 10dd4a21 push 0x10dfa91c */
  push32((uint32_t)(0x10dfa91cu));
  /* 10dd4a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4a28 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10dd4a2d push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4a32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4a34 call 0x10dd2b50 */
  push32(0x10dd4a39u); f_10dd2b50();
  /* 10dd4a39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4a3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a3f jne 0x10dd4a42 */
  if (!C.zf) goto L_10dd4a42;
  /* 10dd4a41 int3  */
  x86_unimpl("int3 @ 0x10dd4a41");
L_10dd4a42:;
  /* 10dd4a42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4a44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd4a46 jne 0x10dd49ef */
  if (!C.zf) goto L_10dd49ef;
  /* 10dd4a48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4a4b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a4f jne 0x10dd4a5e */
  if (!C.zf) goto L_10dd4a5e;
  /* 10dd4a51 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a55 jne 0x10dd4a5e */
  if (!C.zf) goto L_10dd4a5e;
  /* 10dd4a57 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10dd4a5e:;
  /* 10dd4a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4a61 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a65 je 0x10dd4a99 */
  if (C.zf) goto L_10dd4a99;
L_10dd4a67:;
  /* 10dd4a67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4a6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd4a6d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a70 je 0x10dd4a93 */
  if (C.zf) goto L_10dd4a93;
  /* 10dd4a72 push 0x10dfa864 */
  push32((uint32_t)(0x10dfa864u));
  /* 10dd4a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4a79 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10dd4a7e push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4a83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4a85 call 0x10dd2b50 */
  push32(0x10dd4a8au); f_10dd2b50();
  /* 10dd4a8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4a8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4a90 jne 0x10dd4a93 */
  if (!C.zf) goto L_10dd4a93;
  /* 10dd4a92 int3  */
  x86_unimpl("int3 @ 0x10dd4a92");
L_10dd4a93:;
  /* 10dd4a93 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4a97 jne 0x10dd4a67 */
  if (!C.zf) goto L_10dd4a67;
L_10dd4a99:;
  /* 10dd4a99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4a9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd4a9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd4aa2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd4aa4 call 0x10dd7530 */
  push32(0x10dd4aa9u); f_10dd7530();
  /* 10dd4aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4aaf pop edi */
  EDI = (pop32());
  /* 10dd4ab0 pop esi */
  ESI = (pop32());
  /* 10dd4ab1 pop ebx */
  EBX = (pop32());
  /* 10dd4ab2 mov esp, ebp */
  ESP = (EBP);
  /* 10dd4ab4 pop ebp */
  EBP = (pop32());
  /* 10dd4ab5 ret  */
  ESPCHK(0x10dd4960u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x10dd4ac0 (28 bytes, 11 insns) */
void f_10dd4ac0(void) {
  FTRACE(0x10dd4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4ac4 mov eax, dword ptr [0x10dfda8c] */
  EAX = (r32((uint32_t)(0x10dfda8c)));
  /* 10dd4ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd4acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4acf mov dword ptr [0x10dfda8c], ecx */
  w32((uint32_t)(0x10dfda8c), (ECX));
  /* 10dd4ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4ad8 mov esp, ebp */
  ESP = (EBP);
  /* 10dd4ada pop ebp */
  EBP = (pop32());
  /* 10dd4adb ret  */
  ESPCHK(0x10dd4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x10dd4ae0 (157 bytes, 59 insns) */
void f_10dd4ae0(void) {
  FTRACE(0x10dd4ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4ae4 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd4ae5 push esi */
  push32((uint32_t)(ESI));
  /* 10dd4ae6 push edi */
  push32((uint32_t)(EDI));
  /* 10dd4ae7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd4ae9 call 0x10dd7490 */
  push32(0x10dd4aeeu); f_10dd7490();
  /* 10dd4aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4af1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4af4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4af5 call 0x10dd5090 */
  push32(0x10dd4afau); f_10dd5090();
  /* 10dd4afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4aff je 0x10dd4b6c */
  if (C.zf) goto L_10dd4b6c;
  /* 10dd4b01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4b04 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd4b07 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd4b0a:;
  /* 10dd4b0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4b0d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd4b10 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4b15 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4b18 je 0x10dd4b5d */
  if (C.zf) goto L_10dd4b5d;
  /* 10dd4b1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4b1d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4b21 je 0x10dd4b5d */
  if (C.zf) goto L_10dd4b5d;
  /* 10dd4b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4b26 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd4b29 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4b2e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4b31 je 0x10dd4b5d */
  if (C.zf) goto L_10dd4b5d;
  /* 10dd4b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4b36 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4b3a je 0x10dd4b5d */
  if (C.zf) goto L_10dd4b5d;
  /* 10dd4b3c push 0x10dfa91c */
  push32((uint32_t)(0x10dfa91cu));
  /* 10dd4b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4b43 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10dd4b48 push 0x10dfa674 */
  push32((uint32_t)(0x10dfa674u));
  /* 10dd4b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd4b4f call 0x10dd2b50 */
  push32(0x10dd4b54u); f_10dd2b50();
  /* 10dd4b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4b5a jne 0x10dd4b5d */
  if (!C.zf) goto L_10dd4b5d;
  /* 10dd4b5c int3  */
  x86_unimpl("int3 @ 0x10dd4b5c");
L_10dd4b5d:;
  /* 10dd4b5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4b5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd4b61 jne 0x10dd4b0a */
  if (!C.zf) goto L_10dd4b0a;
  /* 10dd4b63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4b66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd4b69 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10dd4b6c:;
  /* 10dd4b6c push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd4b6e call 0x10dd7530 */
  push32(0x10dd4b73u); f_10dd7530();
  /* 10dd4b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4b76 pop edi */
  EDI = (pop32());
  /* 10dd4b77 pop esi */
  ESI = (pop32());
  /* 10dd4b78 pop ebx */
  EBX = (pop32());
  /* 10dd4b79 mov esp, ebp */
  ESP = (EBP);
  /* 10dd4b7b pop ebp */
  EBP = (pop32());
  /* 10dd4b7c ret  */
  ESPCHK(0x10dd4ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b80 @ 0x10dd4b80 (28 bytes, 11 insns) */
void f_10dd4b80(void) {
  FTRACE(0x10dd4b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4b81 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4b84 mov eax, dword ptr [0x10dfdc90] */
  EAX = (r32((uint32_t)(0x10dfdc90)));
  /* 10dd4b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd4b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4b8f mov dword ptr [0x10dfdc90], ecx */
  w32((uint32_t)(0x10dfdc90), (ECX));
  /* 10dd4b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4b98 mov esp, ebp */
  ESP = (EBP);
  /* 10dd4b9a pop ebp */
  EBP = (pop32());
  /* 10dd4b9b ret  */
  ESPCHK(0x10dd4b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x10dd4ba0 (136 bytes, 55 insns) */
void f_10dd4ba0(void) {
  FTRACE(0x10dd4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd4ba5 push esi */
  push32((uint32_t)(ESI));
  /* 10dd4ba6 push edi */
  push32((uint32_t)(EDI));
  /* 10dd4ba7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10dd4bae:;
  /* 10dd4bae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd4bb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd4bb4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd4bb7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10dd4bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4bbc je 0x10dd4c1e */
  if (C.zf) goto L_10dd4c1e;
  /* 10dd4bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4bc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4bc3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10dd4bc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd4bc8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4bd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4bd4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10dd4bd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4bd9 je 0x10dd4c1c */
  if (C.zf) goto L_10dd4c1c;
L_10dd4bdb:;
  /* 10dd4bdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd4bde and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4be3 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4be7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4be9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10dd4bec push edx */
  push32((uint32_t)(EDX));
  /* 10dd4bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4bf0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd4bf3 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4bf4 push 0x10dfa960 */
  push32((uint32_t)(0x10dfa960u));
  /* 10dd4bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4c01 call 0x10dd2b50 */
  push32(0x10dd4c06u); f_10dd2b50();
  /* 10dd4c06 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4c0c jne 0x10dd4c0f */
  if (!C.zf) goto L_10dd4c0f;
  /* 10dd4c0e int3  */
  x86_unimpl("int3 @ 0x10dd4c0e");
L_10dd4c0f:;
  /* 10dd4c0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4c11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4c13 jne 0x10dd4bdb */
  if (!C.zf) goto L_10dd4bdb;
  /* 10dd4c15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10dd4c1c:;
  /* 10dd4c1c jmp 0x10dd4bae */
  goto L_10dd4bae;
L_10dd4c1e:;
  /* 10dd4c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4c21 pop edi */
  EDI = (pop32());
  /* 10dd4c22 pop esi */
  ESI = (pop32());
  /* 10dd4c23 pop ebx */
  EBX = (pop32());
  /* 10dd4c24 mov esp, ebp */
  ESP = (EBP);
  /* 10dd4c26 pop ebp */
  EBP = (pop32());
  /* 10dd4c27 ret  */
  ESPCHK(0x10dd4ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c30 @ 0x10dd4c30 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10dd4c30(void) {
  FTRACE(0x10dd4c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4c31 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4c33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd4c36 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd4c37 push esi */
  push32((uint32_t)(ESI));
  /* 10dd4c38 push edi */
  push32((uint32_t)(EDI));
  /* 10dd4c39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10dd4c40 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd4c45 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4c48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4c4a jne 0x10dd4c56 */
  if (!C.zf) goto L_10dd4c56;
  /* 10dd4c4c mov eax, 1 */
  EAX = (0x1u);
  /* 10dd4c51 jmp 0x10dd4f88 */
  goto L_10dd4f88;
L_10dd4c56:;
  /* 10dd4c56 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd4c58 call 0x10dd7490 */
  push32(0x10dd4c5du); f_10dd7490();
  /* 10dd4c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4c60 call 0x10dd7c70 */
  push32(0x10dd4c65u); f_10dd7c70();
  /* 10dd4c65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd4c68 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4c6c je 0x10dd4d79 */
  if (C.zf) goto L_10dd4d79;
  /* 10dd4c72 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4c76 je 0x10dd4d79 */
  if (C.zf) goto L_10dd4d79;
  /* 10dd4c7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd4c7f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10dd4c82 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd4c85 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4c88 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10dd4c8b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4c8f ja 0x10dd4d42 */
  if ((!C.cf&&!C.zf)) goto L_10dd4d42;
  /* 10dd4c95 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd4c98 jmp dword ptr [eax*4 + 0x10dd4f8f] */
  switch (EAX) {
    case 0: goto L_10dd4d1a;
    case 1: goto L_10dd4cf2;
    case 2: goto L_10dd4cca;
    case 3: goto L_10dd4c9f;
    default: x86_unimpl("switch@0x10dd4c98 out of table"); return;
  }
L_10dd4c9f:;
  /* 10dd4c9f push 0x10dfaab4 */
  push32((uint32_t)(0x10dfaab4u));
  /* 10dd4ca4 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd4ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4cab push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4cad push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4caf push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4cb1 call 0x10dd2b50 */
  push32(0x10dd4cb6u); f_10dd2b50();
  /* 10dd4cb6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4cb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4cbc jne 0x10dd4cbf */
  if (!C.zf) goto L_10dd4cbf;
  /* 10dd4cbe int3  */
  x86_unimpl("int3 @ 0x10dd4cbe");
L_10dd4cbf:;
  /* 10dd4cbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4cc3 jne 0x10dd4c9f */
  if (!C.zf) goto L_10dd4c9f;
  /* 10dd4cc5 jmp 0x10dd4d68 */
  goto L_10dd4d68;
L_10dd4cca:;
  /* 10dd4cca push 0x10dfaa90 */
  push32((uint32_t)(0x10dfaa90u));
  /* 10dd4ccf push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd4cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4cdc call 0x10dd2b50 */
  push32(0x10dd4ce1u); f_10dd2b50();
  /* 10dd4ce1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4ce4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4ce7 jne 0x10dd4cea */
  if (!C.zf) goto L_10dd4cea;
  /* 10dd4ce9 int3  */
  x86_unimpl("int3 @ 0x10dd4ce9");
L_10dd4cea:;
  /* 10dd4cea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4cec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd4cee jne 0x10dd4cca */
  if (!C.zf) goto L_10dd4cca;
  /* 10dd4cf0 jmp 0x10dd4d68 */
  goto L_10dd4d68;
L_10dd4cf2:;
  /* 10dd4cf2 push 0x10dfaa6c */
  push32((uint32_t)(0x10dfaa6cu));
  /* 10dd4cf7 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd4cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d04 call 0x10dd2b50 */
  push32(0x10dd4d09u); f_10dd2b50();
  /* 10dd4d09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4d0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4d0f jne 0x10dd4d12 */
  if (!C.zf) goto L_10dd4d12;
  /* 10dd4d11 int3  */
  x86_unimpl("int3 @ 0x10dd4d11");
L_10dd4d12:;
  /* 10dd4d12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4d16 jne 0x10dd4cf2 */
  if (!C.zf) goto L_10dd4cf2;
  /* 10dd4d18 jmp 0x10dd4d68 */
  goto L_10dd4d68;
L_10dd4d1a:;
  /* 10dd4d1a push 0x10dfaa48 */
  push32((uint32_t)(0x10dfaa48u));
  /* 10dd4d1f push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd4d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d2c call 0x10dd2b50 */
  push32(0x10dd4d31u); f_10dd2b50();
  /* 10dd4d31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4d34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4d37 jne 0x10dd4d3a */
  if (!C.zf) goto L_10dd4d3a;
  /* 10dd4d39 int3  */
  x86_unimpl("int3 @ 0x10dd4d39");
L_10dd4d3a:;
  /* 10dd4d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4d3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4d3e jne 0x10dd4d1a */
  if (!C.zf) goto L_10dd4d1a;
  /* 10dd4d40 jmp 0x10dd4d68 */
  goto L_10dd4d68;
L_10dd4d42:;
  /* 10dd4d42 push 0x10dfaa1c */
  push32((uint32_t)(0x10dfaa1cu));
  /* 10dd4d47 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd4d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4d54 call 0x10dd2b50 */
  push32(0x10dd4d59u); f_10dd2b50();
  /* 10dd4d59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4d5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4d5f jne 0x10dd4d62 */
  if (!C.zf) goto L_10dd4d62;
  /* 10dd4d61 int3  */
  x86_unimpl("int3 @ 0x10dd4d61");
L_10dd4d62:;
  /* 10dd4d62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4d64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd4d66 jne 0x10dd4d42 */
  if (!C.zf) goto L_10dd4d42;
L_10dd4d68:;
  /* 10dd4d68 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd4d6a call 0x10dd7530 */
  push32(0x10dd4d6fu); f_10dd7530();
  /* 10dd4d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4d72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4d74 jmp 0x10dd4f88 */
  goto L_10dd4f88;
L_10dd4d79:;
  /* 10dd4d79 mov eax, dword ptr [0x10dff5ec] */
  EAX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd4d7e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd4d81 jmp 0x10dd4d8b */
  goto L_10dd4d8b;
L_10dd4d83:;
  /* 10dd4d83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4d86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd4d88 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10dd4d8b:;
  /* 10dd4d8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4d8f je 0x10dd4f7b */
  if (C.zf) goto L_10dd4f7b;
  /* 10dd4d95 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10dd4d9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4d9f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10dd4da2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4da8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4dab je 0x10dd4dd0 */
  if (C.zf) goto L_10dd4dd0;
  /* 10dd4dad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4db0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4db4 je 0x10dd4dd0 */
  if (C.zf) goto L_10dd4dd0;
  /* 10dd4db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4db9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10dd4dbc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4dc2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4dc5 je 0x10dd4dd0 */
  if (C.zf) goto L_10dd4dd0;
  /* 10dd4dc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4dca cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4dce jne 0x10dd4de8 */
  if (!C.zf) goto L_10dd4de8;
L_10dd4dd0:;
  /* 10dd4dd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4dd3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10dd4dd6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4ddc mov edx, dword ptr [ecx*4 + 0x10dfda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfda94)));
  /* 10dd4de3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10dd4de6 jmp 0x10dd4def */
  goto L_10dd4def;
L_10dd4de8:;
  /* 10dd4de8 mov dword ptr [ebp - 0x14], 0x10dfaa14 */
  w32((uint32_t)(EBP + -0x14), (0x10dfaa14u));
L_10dd4def:;
  /* 10dd4def push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd4df1 mov al, byte ptr [0x10dfda90] */
  AL = (r8((uint32_t)(0x10dfda90)));
  /* 10dd4df6 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4df7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4dfa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4dfe call 0x10dd4ba0 */
  push32(0x10dd4e03u); f_10dd4ba0();
  /* 10dd4e03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4e08 jne 0x10dd4e44 */
  if (!C.zf) goto L_10dd4e44;
L_10dd4e0a:;
  /* 10dd4e0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4e0d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4e10 push edx */
  push32((uint32_t)(EDX));
  /* 10dd4e11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4e14 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10dd4e17 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4e18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd4e1b push edx */
  push32((uint32_t)(EDX));
  /* 10dd4e1c push 0x10dfa8f0 */
  push32((uint32_t)(0x10dfa8f0u));
  /* 10dd4e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4e29 call 0x10dd2b50 */
  push32(0x10dd4e2eu); f_10dd2b50();
  /* 10dd4e2e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4e31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4e34 jne 0x10dd4e37 */
  if (!C.zf) goto L_10dd4e37;
  /* 10dd4e36 int3  */
  x86_unimpl("int3 @ 0x10dd4e36");
L_10dd4e37:;
  /* 10dd4e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4e3b jne 0x10dd4e0a */
  if (!C.zf) goto L_10dd4e0a;
  /* 10dd4e3d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10dd4e44:;
  /* 10dd4e44 push 4 */
  push32((uint32_t)(0x4u));
  /* 10dd4e46 mov cl, byte ptr [0x10dfda90] */
  CL = (r8((uint32_t)(0x10dfda90)));
  /* 10dd4e4c push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4e4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4e50 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd4e53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4e56 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10dd4e5a push edx */
  push32((uint32_t)(EDX));
  /* 10dd4e5b call 0x10dd4ba0 */
  push32(0x10dd4e60u); f_10dd4ba0();
  /* 10dd4e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4e63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4e65 jne 0x10dd4ea1 */
  if (!C.zf) goto L_10dd4ea1;
L_10dd4e67:;
  /* 10dd4e67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4e6a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4e6d push eax */
  push32((uint32_t)(EAX));
  /* 10dd4e6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4e71 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10dd4e74 push edx */
  push32((uint32_t)(EDX));
  /* 10dd4e75 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd4e78 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4e79 push 0x10dfa8c4 */
  push32((uint32_t)(0x10dfa8c4u));
  /* 10dd4e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4e86 call 0x10dd2b50 */
  push32(0x10dd4e8bu); f_10dd2b50();
  /* 10dd4e8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4e8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4e91 jne 0x10dd4e94 */
  if (!C.zf) goto L_10dd4e94;
  /* 10dd4e93 int3  */
  x86_unimpl("int3 @ 0x10dd4e93");
L_10dd4e94:;
  /* 10dd4e94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd4e96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd4e98 jne 0x10dd4e67 */
  if (!C.zf) goto L_10dd4e67;
  /* 10dd4e9a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10dd4ea1:;
  /* 10dd4ea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4ea4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4ea8 jne 0x10dd4efa */
  if (!C.zf) goto L_10dd4efa;
  /* 10dd4eaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4ead mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd4eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4eb1 mov dl, byte ptr [0x10dfda91] */
  DL = (r8((uint32_t)(0x10dfda91)));
  /* 10dd4eb7 push edx */
  push32((uint32_t)(EDX));
  /* 10dd4eb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4ebb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4ebe push eax */
  push32((uint32_t)(EAX));
  /* 10dd4ebf call 0x10dd4ba0 */
  push32(0x10dd4ec4u); f_10dd4ba0();
  /* 10dd4ec4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4ec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4ec9 jne 0x10dd4efa */
  if (!C.zf) goto L_10dd4efa;
L_10dd4ecb:;
  /* 10dd4ecb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4ece add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4ed2 push 0x10dfa9e8 */
  push32((uint32_t)(0x10dfa9e8u));
  /* 10dd4ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4edb push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4edd push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4edf call 0x10dd2b50 */
  push32(0x10dd4ee4u); f_10dd2b50();
  /* 10dd4ee4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4eea jne 0x10dd4eed */
  if (!C.zf) goto L_10dd4eed;
  /* 10dd4eec int3  */
  x86_unimpl("int3 @ 0x10dd4eec");
L_10dd4eed:;
  /* 10dd4eed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd4ef1 jne 0x10dd4ecb */
  if (!C.zf) goto L_10dd4ecb;
  /* 10dd4ef3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10dd4efa:;
  /* 10dd4efa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4efe jne 0x10dd4f76 */
  if (!C.zf) goto L_10dd4f76;
  /* 10dd4f00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4f03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4f07 je 0x10dd4f3c */
  if (C.zf) goto L_10dd4f3c;
L_10dd4f09:;
  /* 10dd4f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4f0c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10dd4f0f push edx */
  push32((uint32_t)(EDX));
  /* 10dd4f10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4f13 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd4f16 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4f17 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd4f1a push edx */
  push32((uint32_t)(EDX));
  /* 10dd4f1b push 0x10dfa9c8 */
  push32((uint32_t)(0x10dfa9c8u));
  /* 10dd4f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4f28 call 0x10dd2b50 */
  push32(0x10dd4f2du); f_10dd2b50();
  /* 10dd4f2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4f33 jne 0x10dd4f36 */
  if (!C.zf) goto L_10dd4f36;
  /* 10dd4f35 int3  */
  x86_unimpl("int3 @ 0x10dd4f35");
L_10dd4f36:;
  /* 10dd4f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4f3a jne 0x10dd4f09 */
  if (!C.zf) goto L_10dd4f09;
L_10dd4f3c:;
  /* 10dd4f3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4f3f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10dd4f42 push edx */
  push32((uint32_t)(EDX));
  /* 10dd4f43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd4f46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4f49 push eax */
  push32((uint32_t)(EAX));
  /* 10dd4f4a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd4f4d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4f4e push 0x10dfa99c */
  push32((uint32_t)(0x10dfa99cu));
  /* 10dd4f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd4f5b call 0x10dd2b50 */
  push32(0x10dd4f60u); f_10dd2b50();
  /* 10dd4f60 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4f63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4f66 jne 0x10dd4f69 */
  if (!C.zf) goto L_10dd4f69;
  /* 10dd4f68 int3  */
  x86_unimpl("int3 @ 0x10dd4f68");
L_10dd4f69:;
  /* 10dd4f69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd4f6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd4f6d jne 0x10dd4f3c */
  if (!C.zf) goto L_10dd4f3c;
  /* 10dd4f6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10dd4f76:;
  /* 10dd4f76 jmp 0x10dd4d83 */
  goto L_10dd4d83;
L_10dd4f7b:;
  /* 10dd4f7b push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd4f7d call 0x10dd7530 */
  push32(0x10dd4f82u); f_10dd7530();
  /* 10dd4f82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10dd4f88:;
  /* 10dd4f88 pop edi */
  EDI = (pop32());
  /* 10dd4f89 pop esi */
  ESI = (pop32());
  /* 10dd4f8a pop ebx */
  EBX = (pop32());
  /* 10dd4f8b mov esp, ebp */
  ESP = (EBP);
  /* 10dd4f8d pop ebp */
  EBP = (pop32());
  /* 10dd4f8e ret  */
  ESPCHK(0x10dd4c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fa0 @ 0x10dd4fa0 (34 bytes, 13 insns) */
void f_10dd4fa0(void) {
  FTRACE(0x10dd4fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4fa4 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd4fa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd4fac cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd4fb0 je 0x10dd4fbb */
  if (C.zf) goto L_10dd4fbb;
  /* 10dd4fb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd4fb5 mov dword ptr [0x10dfda84], ecx */
  w32((uint32_t)(0x10dfda84), (ECX));
L_10dd4fbb:;
  /* 10dd4fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4fbe mov esp, ebp */
  ESP = (EBP);
  /* 10dd4fc0 pop ebp */
  EBP = (pop32());
  /* 10dd4fc1 ret  */
  ESPCHK(0x10dd4fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd0 @ 0x10dd4fd0 (103 bytes, 38 insns) */
void f_10dd4fd0(void) {
  FTRACE(0x10dd4fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd4fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd4fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd4fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd4fd4 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd4fd9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd4fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd4fde jne 0x10dd4fe2 */
  if (!C.zf) goto L_10dd4fe2;
  /* 10dd4fe0 jmp 0x10dd5033 */
  goto L_10dd5033;
L_10dd4fe2:;
  /* 10dd4fe2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd4fe4 call 0x10dd7490 */
  push32(0x10dd4fe9u); f_10dd7490();
  /* 10dd4fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd4fec mov ecx, dword ptr [0x10dff5ec] */
  ECX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd4ff2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd4ff5 jmp 0x10dd4fff */
  goto L_10dd4fff;
L_10dd4ff7:;
  /* 10dd4ff7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd4ffa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd4ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd4fff:;
  /* 10dd4fff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5003 je 0x10dd5029 */
  if (C.zf) goto L_10dd5029;
  /* 10dd5005 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5008 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10dd500b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5011 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5014 jne 0x10dd5027 */
  if (!C.zf) goto L_10dd5027;
  /* 10dd5016 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5019 push eax */
  push32((uint32_t)(EAX));
  /* 10dd501a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd501d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5020 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5021 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10dd5024u);
  /* 10dd5024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd5027:;
  /* 10dd5027 jmp 0x10dd4ff7 */
  goto L_10dd4ff7;
L_10dd5029:;
  /* 10dd5029 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd502b call 0x10dd7530 */
  push32(0x10dd5030u); f_10dd7530();
  /* 10dd5030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd5033:;
  /* 10dd5033 mov esp, ebp */
  ESP = (EBP);
  /* 10dd5035 pop ebp */
  EBP = (pop32());
  /* 10dd5036 ret  */
  ESPCHK(0x10dd4fd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10dd5040 (75 bytes, 28 insns) */
void f_10dd5040(void) {
  FTRACE(0x10dd5040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5040 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5041 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5043 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5044 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5048 je 0x10dd507d */
  if (C.zf) goto L_10dd507d;
  /* 10dd504a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd504d push eax */
  push32((uint32_t)(EAX));
  /* 10dd504e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5051 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5052 call dword ptr [0x10e0233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0233c))), 0x10dd5058u);
  /* 10dd5058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd505a jne 0x10dd507d */
  if (!C.zf) goto L_10dd507d;
  /* 10dd505c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5060 je 0x10dd5074 */
  if (C.zf) goto L_10dd5074;
  /* 10dd5062 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5065 push edx */
  push32((uint32_t)(EDX));
  /* 10dd5066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5069 push eax */
  push32((uint32_t)(EAX));
  /* 10dd506a call dword ptr [0x10e02338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02338))), 0x10dd5070u);
  /* 10dd5070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5072 jne 0x10dd507d */
  if (!C.zf) goto L_10dd507d;
L_10dd5074:;
  /* 10dd5074 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10dd507b jmp 0x10dd5084 */
  goto L_10dd5084;
L_10dd507d:;
  /* 10dd507d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10dd5084:;
  /* 10dd5084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5087 mov esp, ebp */
  ESP = (EBP);
  /* 10dd5089 pop ebp */
  EBP = (pop32());
  /* 10dd508a ret  */
  ESPCHK(0x10dd5040u, _esp0);
  ESP += 4; return;
}

/* FUN_10005090 @ 0x10dd5090 (134 bytes, 50 insns) */
void f_10dd5090(void) {
  FTRACE(0x10dd5090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5090 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5091 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5093 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5094 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5098 jne 0x10dd509e */
  if (!C.zf) goto L_10dd509e;
  /* 10dd509a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd509c jmp 0x10dd5112 */
  goto L_10dd5112;
L_10dd509e:;
  /* 10dd509e push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd50a0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10dd50a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd50a5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd50a8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd50a9 call 0x10dd5040 */
  push32(0x10dd50aeu); f_10dd5040();
  /* 10dd50ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd50b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd50b3 jne 0x10dd50b9 */
  if (!C.zf) goto L_10dd50b9;
  /* 10dd50b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd50b7 jmp 0x10dd5112 */
  goto L_10dd5112;
L_10dd50b9:;
  /* 10dd50b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd50bc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd50bf push ecx */
  push32((uint32_t)(ECX));
  /* 10dd50c0 call 0x10dd7d90 */
  push32(0x10dd50c5u); f_10dd7d90();
  /* 10dd50c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd50c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd50cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd50cf je 0x10dd50e6 */
  if (C.zf) goto L_10dd50e6;
  /* 10dd50d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd50d4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd50d7 push edx */
  push32((uint32_t)(EDX));
  /* 10dd50d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd50db push eax */
  push32((uint32_t)(EAX));
  /* 10dd50dc call 0x10dd7df0 */
  push32(0x10dd50e1u); f_10dd7df0();
  /* 10dd50e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd50e4 jmp 0x10dd5112 */
  goto L_10dd5112;
L_10dd50e6:;
  /* 10dd50e6 mov ecx, dword ptr [0x10dff5a0] */
  ECX = (r32((uint32_t)(0x10dff5a0)));
  /* 10dd50ec and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd50f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd50f4 je 0x10dd50fd */
  if (C.zf) goto L_10dd50fd;
  /* 10dd50f6 mov eax, 1 */
  EAX = (0x1u);
  /* 10dd50fb jmp 0x10dd5112 */
  goto L_10dd5112;
L_10dd50fd:;
  /* 10dd50fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5100 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5103 push edx */
  push32((uint32_t)(EDX));
  /* 10dd5104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5106 mov eax, dword ptr [0x10e00f4c] */
  EAX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd510b push eax */
  push32((uint32_t)(EAX));
  /* 10dd510c call dword ptr [0x10e02340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02340))), 0x10dd5112u);
L_10dd5112:;
  /* 10dd5112 mov esp, ebp */
  ESP = (EBP);
  /* 10dd5114 pop ebp */
  EBP = (pop32());
  /* 10dd5115 ret  */
  ESPCHK(0x10dd5090u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x10dd5120 (227 bytes, 80 insns) */
void f_10dd5120(void) {
  FTRACE(0x10dd5120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5120 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5121 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5123 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5127 push eax */
  push32((uint32_t)(EAX));
  /* 10dd5128 call 0x10dd5090 */
  push32(0x10dd512du); f_10dd5090();
  /* 10dd512d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5132 jne 0x10dd513b */
  if (!C.zf) goto L_10dd513b;
  /* 10dd5134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5136 jmp 0x10dd51ff */
  goto L_10dd51ff;
L_10dd513b:;
  /* 10dd513b push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd513d call 0x10dd7490 */
  push32(0x10dd5142u); f_10dd7490();
  /* 10dd5142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5145 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5148 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd514b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd514e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5151 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd5154 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5159 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd515c je 0x10dd5180 */
  if (C.zf) goto L_10dd5180;
  /* 10dd515e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5161 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5165 je 0x10dd5180 */
  if (C.zf) goto L_10dd5180;
  /* 10dd5167 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd516a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd516d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5172 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5175 je 0x10dd5180 */
  if (C.zf) goto L_10dd5180;
  /* 10dd5177 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd517a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd517e jne 0x10dd51f3 */
  if (!C.zf) goto L_10dd51f3;
L_10dd5180:;
  /* 10dd5180 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd5182 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5185 push edx */
  push32((uint32_t)(EDX));
  /* 10dd5186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5189 push eax */
  push32((uint32_t)(EAX));
  /* 10dd518a call 0x10dd5040 */
  push32(0x10dd518fu); f_10dd5040();
  /* 10dd518f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5194 je 0x10dd51f3 */
  if (C.zf) goto L_10dd51f3;
  /* 10dd5196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5199 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10dd519c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd519f jne 0x10dd51f3 */
  if (!C.zf) goto L_10dd51f3;
  /* 10dd51a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd51a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10dd51a7 cmp ecx, dword ptr [0x10dfda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dfda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd51ad jg 0x10dd51f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10dd51f3;
  /* 10dd51af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd51b3 je 0x10dd51c0 */
  if (C.zf) goto L_10dd51c0;
  /* 10dd51b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd51b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd51bb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10dd51be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd51c0:;
  /* 10dd51c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd51c4 je 0x10dd51d1 */
  if (C.zf) goto L_10dd51d1;
  /* 10dd51c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd51c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd51cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd51cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd51d1:;
  /* 10dd51d1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd51d5 je 0x10dd51e2 */
  if (C.zf) goto L_10dd51e2;
  /* 10dd51d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd51da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd51dd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10dd51e0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd51e2:;
  /* 10dd51e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd51e4 call 0x10dd7530 */
  push32(0x10dd51e9u); f_10dd7530();
  /* 10dd51e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd51ec mov eax, 1 */
  EAX = (0x1u);
  /* 10dd51f1 jmp 0x10dd51ff */
  goto L_10dd51ff;
L_10dd51f3:;
  /* 10dd51f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd51f5 call 0x10dd7530 */
  push32(0x10dd51fau); f_10dd7530();
  /* 10dd51fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd51fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd51ff:;
  /* 10dd51ff mov esp, ebp */
  ESP = (EBP);
  /* 10dd5201 pop ebp */
  EBP = (pop32());
  /* 10dd5202 ret  */
  ESPCHK(0x10dd5120u, _esp0);
  ESP += 4; return;
}

/* FUN_10005210 @ 0x10dd5210 (28 bytes, 11 insns) */
void f_10dd5210(void) {
  FTRACE(0x10dd5210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5210 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5211 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5213 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5214 mov eax, dword ptr [0x10e00f58] */
  EAX = (r32((uint32_t)(0x10e00f58)));
  /* 10dd5219 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd521c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd521f mov dword ptr [0x10e00f58], ecx */
  w32((uint32_t)(0x10e00f58), (ECX));
  /* 10dd5225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5228 mov esp, ebp */
  ESP = (EBP);
  /* 10dd522a pop ebp */
  EBP = (pop32());
  /* 10dd522b ret  */
  ESPCHK(0x10dd5210u, _esp0);
  ESP += 4; return;
}

/* FUN_10005230 @ 0x10dd5230 (362 bytes, 116 insns) */
void f_10dd5230(void) {
  FTRACE(0x10dd5230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5230 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5231 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5236 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd5237 push esi */
  push32((uint32_t)(ESI));
  /* 10dd5238 push edi */
  push32((uint32_t)(EDI));
  /* 10dd5239 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd523d jne 0x10dd526a */
  if (!C.zf) goto L_10dd526a;
L_10dd523f:;
  /* 10dd523f push 0x10dfaafc */
  push32((uint32_t)(0x10dfaafcu));
  /* 10dd5244 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd5249 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd524b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd524d push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd524f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5251 call 0x10dd2b50 */
  push32(0x10dd5256u); f_10dd2b50();
  /* 10dd5256 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5259 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd525c jne 0x10dd525f */
  if (!C.zf) goto L_10dd525f;
  /* 10dd525e int3  */
  x86_unimpl("int3 @ 0x10dd525e");
L_10dd525f:;
  /* 10dd525f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5263 jne 0x10dd523f */
  if (!C.zf) goto L_10dd523f;
  /* 10dd5265 jmp 0x10dd5393 */
  goto L_10dd5393;
L_10dd526a:;
  /* 10dd526a push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd526c call 0x10dd7490 */
  push32(0x10dd5271u); f_10dd7490();
  /* 10dd5271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5274 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5277 mov edx, dword ptr [0x10dff5ec] */
  EDX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd527d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10dd527f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd5286 jmp 0x10dd5291 */
  goto L_10dd5291;
L_10dd5288:;
  /* 10dd5288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd528b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd528e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd5291:;
  /* 10dd5291 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5295 jge 0x10dd52b5 */
  if ((C.sf==C.of)) goto L_10dd52b5;
  /* 10dd5297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd529a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd529d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10dd52a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd52a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd52ab mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10dd52b3 jmp 0x10dd5288 */
  goto L_10dd5288;
L_10dd52b5:;
  /* 10dd52b5 mov edx, dword ptr [0x10dff5ec] */
  EDX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd52bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10dd52be jmp 0x10dd52c8 */
  goto L_10dd52c8;
L_10dd52c0:;
  /* 10dd52c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd52c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd52c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10dd52c8:;
  /* 10dd52c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd52cc je 0x10dd5371 */
  if (C.zf) goto L_10dd5371;
  /* 10dd52d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd52d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd52d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd52dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd52df jl 0x10dd5347 */
  if ((C.sf!=C.of)) goto L_10dd5347;
  /* 10dd52e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd52e4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10dd52e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd52ed cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd52f0 jge 0x10dd5347 */
  if ((C.sf==C.of)) goto L_10dd5347;
  /* 10dd52f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd52f5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10dd52f8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd52fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5301 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10dd5305 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5308 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd530b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10dd530e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5314 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5317 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10dd531b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd531e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd5321 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5326 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5329 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10dd532d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd5330 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5333 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd5336 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10dd5339 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd533e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5341 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10dd5345 jmp 0x10dd536c */
  goto L_10dd536c;
L_10dd5347:;
  /* 10dd5347 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd534a push edx */
  push32((uint32_t)(EDX));
  /* 10dd534b push 0x10dfaad8 */
  push32((uint32_t)(0x10dfaad8u));
  /* 10dd5350 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5352 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5354 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5356 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5358 call 0x10dd2b50 */
  push32(0x10dd535du); f_10dd2b50();
  /* 10dd535d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5360 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5363 jne 0x10dd5366 */
  if (!C.zf) goto L_10dd5366;
  /* 10dd5365 int3  */
  x86_unimpl("int3 @ 0x10dd5365");
L_10dd5366:;
  /* 10dd5366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd536a jne 0x10dd5347 */
  if (!C.zf) goto L_10dd5347;
L_10dd536c:;
  /* 10dd536c jmp 0x10dd52c0 */
  goto L_10dd52c0;
L_10dd5371:;
  /* 10dd5371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5374 mov edx, dword ptr [0x10dff5f4] */
  EDX = (r32((uint32_t)(0x10dff5f4)));
  /* 10dd537a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10dd537d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5380 mov ecx, dword ptr [0x10dff5e8] */
  ECX = (r32((uint32_t)(0x10dff5e8)));
  /* 10dd5386 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10dd5389 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd538b call 0x10dd7530 */
  push32(0x10dd5390u); f_10dd7530();
  /* 10dd5390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd5393:;
  /* 10dd5393 pop edi */
  EDI = (pop32());
  /* 10dd5394 pop esi */
  ESI = (pop32());
  /* 10dd5395 pop ebx */
  EBX = (pop32());
  /* 10dd5396 mov esp, ebp */
  ESP = (EBP);
  /* 10dd5398 pop ebp */
  EBP = (pop32());
  /* 10dd5399 ret  */
  ESPCHK(0x10dd5230u, _esp0);
  ESP += 4; return;
}

/* FUN_100053a0 @ 0x10dd53a0 (291 bytes, 95 insns) */
void f_10dd53a0(void) {
  FTRACE(0x10dd53a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd53a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd53a1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd53a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd53a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd53a7 push esi */
  push32((uint32_t)(ESI));
  /* 10dd53a8 push edi */
  push32((uint32_t)(EDI));
  /* 10dd53a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10dd53b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd53b4 je 0x10dd53c2 */
  if (C.zf) goto L_10dd53c2;
  /* 10dd53b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd53ba je 0x10dd53c2 */
  if (C.zf) goto L_10dd53c2;
  /* 10dd53bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd53c0 jne 0x10dd53f0 */
  if (!C.zf) goto L_10dd53f0;
L_10dd53c2:;
  /* 10dd53c2 push 0x10dfab24 */
  push32((uint32_t)(0x10dfab24u));
  /* 10dd53c7 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd53cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd53ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd53d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd53d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd53d4 call 0x10dd2b50 */
  push32(0x10dd53d9u); f_10dd2b50();
  /* 10dd53d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd53dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd53df jne 0x10dd53e2 */
  if (!C.zf) goto L_10dd53e2;
  /* 10dd53e1 int3  */
  x86_unimpl("int3 @ 0x10dd53e1");
L_10dd53e2:;
  /* 10dd53e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd53e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd53e6 jne 0x10dd53c2 */
  if (!C.zf) goto L_10dd53c2;
  /* 10dd53e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd53eb jmp 0x10dd54bc */
  goto L_10dd54bc;
L_10dd53f0:;
  /* 10dd53f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd53f7 jmp 0x10dd5402 */
  goto L_10dd5402;
L_10dd53f9:;
  /* 10dd53f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd53fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd53ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd5402:;
  /* 10dd5402 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5406 jge 0x10dd548c */
  if ((C.sf==C.of)) goto L_10dd548c;
  /* 10dd540c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd540f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5415 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5418 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10dd541c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5420 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5426 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10dd542a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd542d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5430 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5433 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5436 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10dd543a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd543e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5441 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5444 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10dd5448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd544b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd544e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5453 jne 0x10dd5462 */
  if (!C.zf) goto L_10dd5462;
  /* 10dd5455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd545b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5460 je 0x10dd5487 */
  if (C.zf) goto L_10dd5487;
L_10dd5462:;
  /* 10dd5462 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5466 je 0x10dd5487 */
  if (C.zf) goto L_10dd5487;
  /* 10dd5468 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd546c jne 0x10dd5480 */
  if (!C.zf) goto L_10dd5480;
  /* 10dd546e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5472 jne 0x10dd5487 */
  if (!C.zf) goto L_10dd5487;
  /* 10dd5474 mov eax, dword ptr [0x10dfda84] */
  EAX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd5479 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd547c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd547e je 0x10dd5487 */
  if (C.zf) goto L_10dd5487;
L_10dd5480:;
  /* 10dd5480 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10dd5487:;
  /* 10dd5487 jmp 0x10dd53f9 */
  goto L_10dd53f9;
L_10dd548c:;
  /* 10dd548c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd548f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5492 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10dd5495 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5498 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd549b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10dd549e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd54a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd54a4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10dd54a7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd54aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd54ad mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10dd54b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd54b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10dd54b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10dd54bc:;
  /* 10dd54bc pop edi */
  EDI = (pop32());
  /* 10dd54bd pop esi */
  ESI = (pop32());
  /* 10dd54be pop ebx */
  EBX = (pop32());
  /* 10dd54bf mov esp, ebp */
  ESP = (EBP);
  /* 10dd54c1 pop ebp */
  EBP = (pop32());
  /* 10dd54c2 ret  */
  ESPCHK(0x10dd53a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d0 @ 0x10dd54d0 (697 bytes, 253 insns) */
void f_10dd54d0(void) {
  FTRACE(0x10dd54d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd54d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd54d1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd54d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd54d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd54d7 push esi */
  push32((uint32_t)(ESI));
  /* 10dd54d8 push edi */
  push32((uint32_t)(EDI));
  /* 10dd54d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10dd54e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd54e2 call 0x10dd7490 */
  push32(0x10dd54e7u); f_10dd7490();
  /* 10dd54e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd54ea:;
  /* 10dd54ea push 0x10dfac1c */
  push32((uint32_t)(0x10dfac1cu));
  /* 10dd54ef push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd54f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd54f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd54f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd54fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd54fc call 0x10dd2b50 */
  push32(0x10dd5501u); f_10dd2b50();
  /* 10dd5501 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5504 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5507 jne 0x10dd550a */
  if (!C.zf) goto L_10dd550a;
  /* 10dd5509 int3  */
  x86_unimpl("int3 @ 0x10dd5509");
L_10dd550a:;
  /* 10dd550a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd550c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd550e jne 0x10dd54ea */
  if (!C.zf) goto L_10dd54ea;
  /* 10dd5510 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5514 je 0x10dd551e */
  if (C.zf) goto L_10dd551e;
  /* 10dd5516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5519 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd551b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10dd551e:;
  /* 10dd551e mov eax, dword ptr [0x10dff5ec] */
  EAX = (r32((uint32_t)(0x10dff5ec)));
  /* 10dd5523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd5526 jmp 0x10dd5530 */
  goto L_10dd5530;
L_10dd5528:;
  /* 10dd5528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd552b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd552d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10dd5530:;
  /* 10dd5530 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5534 je 0x10dd5752 */
  if (C.zf) goto L_10dd5752;
  /* 10dd553a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd553d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5540 je 0x10dd5752 */
  if (C.zf) goto L_10dd5752;
  /* 10dd5546 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5549 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10dd554c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5552 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5555 je 0x10dd5584 */
  if (C.zf) goto L_10dd5584;
  /* 10dd5557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd555a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10dd555d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5563 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd5565 je 0x10dd5584 */
  if (C.zf) goto L_10dd5584;
  /* 10dd5567 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd556a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd556d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5572 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5575 jne 0x10dd5589 */
  if (!C.zf) goto L_10dd5589;
  /* 10dd5577 mov ecx, dword ptr [0x10dfda84] */
  ECX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd557d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5580 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd5582 jne 0x10dd5589 */
  if (!C.zf) goto L_10dd5589;
L_10dd5584:;
  /* 10dd5584 jmp 0x10dd574d */
  goto L_10dd574d;
L_10dd5589:;
  /* 10dd5589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd558c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5590 je 0x10dd5602 */
  if (C.zf) goto L_10dd5602;
  /* 10dd5592 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5594 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd5596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5599 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10dd559c push ecx */
  push32((uint32_t)(ECX));
  /* 10dd559d call 0x10dd5040 */
  push32(0x10dd55a2u); f_10dd5040();
  /* 10dd55a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd55a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd55a7 jne 0x10dd55d3 */
  if (!C.zf) goto L_10dd55d3;
L_10dd55a9:;
  /* 10dd55a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd55ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10dd55af push eax */
  push32((uint32_t)(EAX));
  /* 10dd55b0 push 0x10dfac08 */
  push32((uint32_t)(0x10dfac08u));
  /* 10dd55b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd55b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd55b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd55bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd55bd call 0x10dd2b50 */
  push32(0x10dd55c2u); f_10dd2b50();
  /* 10dd55c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd55c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd55c8 jne 0x10dd55cb */
  if (!C.zf) goto L_10dd55cb;
  /* 10dd55ca int3  */
  x86_unimpl("int3 @ 0x10dd55ca");
L_10dd55cb:;
  /* 10dd55cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd55cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd55cf jne 0x10dd55a9 */
  if (!C.zf) goto L_10dd55a9;
  /* 10dd55d1 jmp 0x10dd5602 */
  goto L_10dd5602;
L_10dd55d3:;
  /* 10dd55d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd55d6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10dd55d9 push eax */
  push32((uint32_t)(EAX));
  /* 10dd55da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd55dd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd55e0 push edx */
  push32((uint32_t)(EDX));
  /* 10dd55e1 push 0x10dfabfc */
  push32((uint32_t)(0x10dfabfcu));
  /* 10dd55e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd55e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd55ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd55ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd55ee call 0x10dd2b50 */
  push32(0x10dd55f3u); f_10dd2b50();
  /* 10dd55f3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd55f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd55f9 jne 0x10dd55fc */
  if (!C.zf) goto L_10dd55fc;
  /* 10dd55fb int3  */
  x86_unimpl("int3 @ 0x10dd55fb");
L_10dd55fc:;
  /* 10dd55fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd55fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5600 jne 0x10dd55d3 */
  if (!C.zf) goto L_10dd55d3;
L_10dd5602:;
  /* 10dd5602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5605 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10dd5608 push edx */
  push32((uint32_t)(EDX));
  /* 10dd5609 push 0x10dfabf4 */
  push32((uint32_t)(0x10dfabf4u));
  /* 10dd560e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5614 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5616 call 0x10dd2b50 */
  push32(0x10dd561bu); f_10dd2b50();
  /* 10dd561b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd561e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5621 jne 0x10dd5624 */
  if (!C.zf) goto L_10dd5624;
  /* 10dd5623 int3  */
  x86_unimpl("int3 @ 0x10dd5623");
L_10dd5624:;
  /* 10dd5624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5628 jne 0x10dd5602 */
  if (!C.zf) goto L_10dd5602;
  /* 10dd562a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd562d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10dd5630 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5636 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5639 jne 0x10dd56ac */
  if (!C.zf) goto L_10dd56ac;
L_10dd563b:;
  /* 10dd563b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd563e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd5641 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5645 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd5648 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10dd564b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5650 push eax */
  push32((uint32_t)(EAX));
  /* 10dd5651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5654 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5657 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5658 push 0x10dfabc0 */
  push32((uint32_t)(0x10dfabc0u));
  /* 10dd565d push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd565f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5661 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5663 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5665 call 0x10dd2b50 */
  push32(0x10dd566au); f_10dd2b50();
  /* 10dd566a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd566d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5670 jne 0x10dd5673 */
  if (!C.zf) goto L_10dd5673;
  /* 10dd5672 int3  */
  x86_unimpl("int3 @ 0x10dd5672");
L_10dd5673:;
  /* 10dd5673 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5675 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd5677 jne 0x10dd563b */
  if (!C.zf) goto L_10dd563b;
  /* 10dd5679 cmp dword ptr [0x10e00f58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e00f58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5680 je 0x10dd569b */
  if (C.zf) goto L_10dd569b;
  /* 10dd5682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5685 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd5688 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5689 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd568c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd568f push edx */
  push32((uint32_t)(EDX));
  /* 10dd5690 call dword ptr [0x10e00f58] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e00f58))), 0x10dd5696u);
  /* 10dd5696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5699 jmp 0x10dd56a7 */
  goto L_10dd56a7;
L_10dd569b:;
  /* 10dd569b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd569e push eax */
  push32((uint32_t)(EAX));
  /* 10dd569f call 0x10dd5790 */
  push32(0x10dd56a4u); f_10dd5790();
  /* 10dd56a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd56a7:;
  /* 10dd56a7 jmp 0x10dd574d */
  goto L_10dd574d;
L_10dd56ac:;
  /* 10dd56ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd56af cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd56b3 jne 0x10dd56f2 */
  if (!C.zf) goto L_10dd56f2;
L_10dd56b5:;
  /* 10dd56b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd56b8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd56bb push eax */
  push32((uint32_t)(EAX));
  /* 10dd56bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd56bf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd56c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd56c3 push 0x10dfab98 */
  push32((uint32_t)(0x10dfab98u));
  /* 10dd56c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd56ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd56cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd56ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd56d0 call 0x10dd2b50 */
  push32(0x10dd56d5u); f_10dd2b50();
  /* 10dd56d5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd56d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd56db jne 0x10dd56de */
  if (!C.zf) goto L_10dd56de;
  /* 10dd56dd int3  */
  x86_unimpl("int3 @ 0x10dd56dd");
L_10dd56de:;
  /* 10dd56de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd56e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd56e2 jne 0x10dd56b5 */
  if (!C.zf) goto L_10dd56b5;
  /* 10dd56e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd56e7 push eax */
  push32((uint32_t)(EAX));
  /* 10dd56e8 call 0x10dd5790 */
  push32(0x10dd56edu); f_10dd5790();
  /* 10dd56ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd56f0 jmp 0x10dd574d */
  goto L_10dd574d;
L_10dd56f2:;
  /* 10dd56f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd56f5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10dd56f8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd56fe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5701 jne 0x10dd574d */
  if (!C.zf) goto L_10dd574d;
L_10dd5703:;
  /* 10dd5703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5706 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10dd5709 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd570a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd570d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10dd5710 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10dd5713 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5718 push eax */
  push32((uint32_t)(EAX));
  /* 10dd5719 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd571c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd571f push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5720 push 0x10dfab64 */
  push32((uint32_t)(0x10dfab64u));
  /* 10dd5725 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5727 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5729 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd572b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd572d call 0x10dd2b50 */
  push32(0x10dd5732u); f_10dd2b50();
  /* 10dd5732 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5735 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5738 jne 0x10dd573b */
  if (!C.zf) goto L_10dd573b;
  /* 10dd573a int3  */
  x86_unimpl("int3 @ 0x10dd573a");
L_10dd573b:;
  /* 10dd573b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd573d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd573f jne 0x10dd5703 */
  if (!C.zf) goto L_10dd5703;
  /* 10dd5741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5744 push eax */
  push32((uint32_t)(EAX));
  /* 10dd5745 call 0x10dd5790 */
  push32(0x10dd574au); f_10dd5790();
  /* 10dd574a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd574d:;
  /* 10dd574d jmp 0x10dd5528 */
  goto L_10dd5528;
L_10dd5752:;
  /* 10dd5752 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd5754 call 0x10dd7530 */
  push32(0x10dd5759u); f_10dd7530();
  /* 10dd5759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd575c:;
  /* 10dd575c push 0x10dfab4c */
  push32((uint32_t)(0x10dfab4cu));
  /* 10dd5761 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd5766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5768 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd576a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd576c push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd576e call 0x10dd2b50 */
  push32(0x10dd5773u); f_10dd2b50();
  /* 10dd5773 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5776 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5779 jne 0x10dd577c */
  if (!C.zf) goto L_10dd577c;
  /* 10dd577b int3  */
  x86_unimpl("int3 @ 0x10dd577b");
L_10dd577c:;
  /* 10dd577c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd577e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd5780 jne 0x10dd575c */
  if (!C.zf) goto L_10dd575c;
  /* 10dd5782 pop edi */
  EDI = (pop32());
  /* 10dd5783 pop esi */
  ESI = (pop32());
  /* 10dd5784 pop ebx */
  EBX = (pop32());
  /* 10dd5785 mov esp, ebp */
  ESP = (EBP);
  /* 10dd5787 pop ebp */
  EBP = (pop32());
  /* 10dd5788 ret  */
  ESPCHK(0x10dd54d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005790 @ 0x10dd5790 (276 bytes, 89 insns) */
void f_10dd5790(void) {
  FTRACE(0x10dd5790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5790 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5791 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5793 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5796 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd5797 push esi */
  push32((uint32_t)(ESI));
  /* 10dd5798 push edi */
  push32((uint32_t)(EDI));
  /* 10dd5799 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10dd57a0 jmp 0x10dd57ab */
  goto L_10dd57ab;
L_10dd57a2:;
  /* 10dd57a2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10dd57a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd57a8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10dd57ab:;
  /* 10dd57ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd57ae cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd57b2 jge 0x10dd57bf */
  if ((C.sf==C.of)) goto L_10dd57bf;
  /* 10dd57b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd57b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10dd57ba mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10dd57bd jmp 0x10dd57c6 */
  goto L_10dd57c6;
L_10dd57bf:;
  /* 10dd57bf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10dd57c6:;
  /* 10dd57c6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10dd57c9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd57cc jge 0x10dd586c */
  if ((C.sf==C.of)) goto L_10dd586c;
  /* 10dd57d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd57d5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd57d8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10dd57db mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10dd57de cmp dword ptr [0x10dfdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dfdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd57e5 jle 0x10dd5803 */
  if ((C.zf||C.sf!=C.of)) goto L_10dd5803;
  /* 10dd57e7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10dd57ec mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd57ef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd57f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd57f6 call 0x10dd9aa0 */
  push32(0x10dd57fbu); f_10dd9aa0();
  /* 10dd57fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd57fe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10dd5801 jmp 0x10dd5820 */
  goto L_10dd5820;
L_10dd5803:;
  /* 10dd5803 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd5806 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd580c mov eax, dword ptr [0x10dfdc98] */
  EAX = (r32((uint32_t)(0x10dfdc98)));
  /* 10dd5811 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5813 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10dd5817 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd581d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10dd5820:;
  /* 10dd5820 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5824 je 0x10dd5834 */
  if (C.zf) goto L_10dd5834;
  /* 10dd5826 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd5829 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd582f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10dd5832 jmp 0x10dd583b */
  goto L_10dd583b;
L_10dd5834:;
  /* 10dd5834 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10dd583b:;
  /* 10dd583b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10dd583e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10dd5841 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10dd5845 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10dd5848 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd584e push edx */
  push32((uint32_t)(EDX));
  /* 10dd584f push 0x10dfac40 */
  push32((uint32_t)(0x10dfac40u));
  /* 10dd5854 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10dd5857 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd585a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10dd585e push ecx */
  push32((uint32_t)(ECX));
  /* 10dd585f call 0x10dd99a0 */
  push32(0x10dd5864u); f_10dd99a0();
  /* 10dd5864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5867 jmp 0x10dd57a2 */
  goto L_10dd57a2;
L_10dd586c:;
  /* 10dd586c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10dd586f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10dd5874:;
  /* 10dd5874 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10dd5877 push eax */
  push32((uint32_t)(EAX));
  /* 10dd5878 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10dd587b push ecx */
  push32((uint32_t)(ECX));
  /* 10dd587c push 0x10dfac30 */
  push32((uint32_t)(0x10dfac30u));
  /* 10dd5881 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5883 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5885 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5887 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5889 call 0x10dd2b50 */
  push32(0x10dd588eu); f_10dd2b50();
  /* 10dd588e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5891 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5894 jne 0x10dd5897 */
  if (!C.zf) goto L_10dd5897;
  /* 10dd5896 int3  */
  x86_unimpl("int3 @ 0x10dd5896");
L_10dd5897:;
  /* 10dd5897 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd589b jne 0x10dd5874 */
  if (!C.zf) goto L_10dd5874;
  /* 10dd589d pop edi */
  EDI = (pop32());
  /* 10dd589e pop esi */
  ESI = (pop32());
  /* 10dd589f pop ebx */
  EBX = (pop32());
  /* 10dd58a0 mov esp, ebp */
  ESP = (EBP);
  /* 10dd58a2 pop ebp */
  EBP = (pop32());
  /* 10dd58a3 ret  */
  ESPCHK(0x10dd5790u, _esp0);
  ESP += 4; return;
}

/* FUN_100058b0 @ 0x10dd58b0 (116 bytes, 46 insns) */
void f_10dd58b0(void) {
  FTRACE(0x10dd58b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd58b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd58b1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd58b3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd58b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd58b7 push esi */
  push32((uint32_t)(ESI));
  /* 10dd58b8 push edi */
  push32((uint32_t)(EDI));
  /* 10dd58b9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10dd58bc push eax */
  push32((uint32_t)(EAX));
  /* 10dd58bd call 0x10dd5230 */
  push32(0x10dd58c2u); f_10dd5230();
  /* 10dd58c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd58c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd58c9 jne 0x10dd58e4 */
  if (!C.zf) goto L_10dd58e4;
  /* 10dd58cb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd58cf jne 0x10dd58e4 */
  if (!C.zf) goto L_10dd58e4;
  /* 10dd58d1 mov ecx, dword ptr [0x10dfda84] */
  ECX = (r32((uint32_t)(0x10dfda84)));
  /* 10dd58d7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd58da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd58dc je 0x10dd591b */
  if (C.zf) goto L_10dd591b;
  /* 10dd58de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd58e2 je 0x10dd591b */
  if (C.zf) goto L_10dd591b;
L_10dd58e4:;
  /* 10dd58e4 push 0x10dfac48 */
  push32((uint32_t)(0x10dfac48u));
  /* 10dd58e9 push 0x10dfa614 */
  push32((uint32_t)(0x10dfa614u));
  /* 10dd58ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd58f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd58f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd58f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd58f6 call 0x10dd2b50 */
  push32(0x10dd58fbu); f_10dd2b50();
  /* 10dd58fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd58fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5901 jne 0x10dd5904 */
  if (!C.zf) goto L_10dd5904;
  /* 10dd5903 int3  */
  x86_unimpl("int3 @ 0x10dd5903");
L_10dd5904:;
  /* 10dd5904 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5906 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd5908 jne 0x10dd58e4 */
  if (!C.zf) goto L_10dd58e4;
  /* 10dd590a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd590c call 0x10dd54d0 */
  push32(0x10dd5911u); f_10dd54d0();
  /* 10dd5911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5914 mov eax, 1 */
  EAX = (0x1u);
  /* 10dd5919 jmp 0x10dd591d */
  goto L_10dd591d;
L_10dd591b:;
  /* 10dd591b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd591d:;
  /* 10dd591d pop edi */
  EDI = (pop32());
  /* 10dd591e pop esi */
  ESI = (pop32());
  /* 10dd591f pop ebx */
  EBX = (pop32());
  /* 10dd5920 mov esp, ebp */
  ESP = (EBP);
  /* 10dd5922 pop ebp */
  EBP = (pop32());
  /* 10dd5923 ret  */
  ESPCHK(0x10dd58b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005930 @ 0x10dd5930 (197 bytes, 79 insns) */
void f_10dd5930(void) {
  FTRACE(0x10dd5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5930 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5931 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5933 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5934 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd5935 push esi */
  push32((uint32_t)(ESI));
  /* 10dd5936 push edi */
  push32((uint32_t)(EDI));
  /* 10dd5937 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd593b jne 0x10dd5942 */
  if (!C.zf) goto L_10dd5942;
  /* 10dd593d jmp 0x10dd59ee */
  goto L_10dd59ee;
L_10dd5942:;
  /* 10dd5942 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd5949 jmp 0x10dd5954 */
  goto L_10dd5954;
L_10dd594b:;
  /* 10dd594b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd594e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd5954:;
  /* 10dd5954 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5958 jge 0x10dd599e */
  if ((C.sf==C.of)) goto L_10dd599e;
L_10dd595a:;
  /* 10dd595a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd595d mov edx, dword ptr [ecx*4 + 0x10dfda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfda94)));
  /* 10dd5964 push edx */
  push32((uint32_t)(EDX));
  /* 10dd5965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd596b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10dd596f push edx */
  push32((uint32_t)(EDX));
  /* 10dd5970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5973 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5976 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10dd597a push edx */
  push32((uint32_t)(EDX));
  /* 10dd597b push 0x10dfaca4 */
  push32((uint32_t)(0x10dfaca4u));
  /* 10dd5980 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5982 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5984 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5986 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5988 call 0x10dd2b50 */
  push32(0x10dd598du); f_10dd2b50();
  /* 10dd598d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5990 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5993 jne 0x10dd5996 */
  if (!C.zf) goto L_10dd5996;
  /* 10dd5995 int3  */
  x86_unimpl("int3 @ 0x10dd5995");
L_10dd5996:;
  /* 10dd5996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd599a jne 0x10dd595a */
  if (!C.zf) goto L_10dd595a;
  /* 10dd599c jmp 0x10dd594b */
  goto L_10dd594b;
L_10dd599e:;
  /* 10dd599e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd59a1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10dd59a4 push edx */
  push32((uint32_t)(EDX));
  /* 10dd59a5 push 0x10dfac80 */
  push32((uint32_t)(0x10dfac80u));
  /* 10dd59aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd59ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd59ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd59b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd59b2 call 0x10dd2b50 */
  push32(0x10dd59b7u); f_10dd2b50();
  /* 10dd59b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd59ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd59bd jne 0x10dd59c0 */
  if (!C.zf) goto L_10dd59c0;
  /* 10dd59bf int3  */
  x86_unimpl("int3 @ 0x10dd59bf");
L_10dd59c0:;
  /* 10dd59c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd59c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd59c4 jne 0x10dd599e */
  if (!C.zf) goto L_10dd599e;
L_10dd59c6:;
  /* 10dd59c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd59c9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10dd59cc push edx */
  push32((uint32_t)(EDX));
  /* 10dd59cd push 0x10dfac60 */
  push32((uint32_t)(0x10dfac60u));
  /* 10dd59d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd59d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd59d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd59d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd59da call 0x10dd2b50 */
  push32(0x10dd59dfu); f_10dd2b50();
  /* 10dd59df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd59e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd59e5 jne 0x10dd59e8 */
  if (!C.zf) goto L_10dd59e8;
  /* 10dd59e7 int3  */
  x86_unimpl("int3 @ 0x10dd59e7");
L_10dd59e8:;
  /* 10dd59e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd59ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd59ec jne 0x10dd59c6 */
  if (!C.zf) goto L_10dd59c6;
L_10dd59ee:;
  /* 10dd59ee pop edi */
  EDI = (pop32());
  /* 10dd59ef pop esi */
  ESI = (pop32());
  /* 10dd59f0 pop ebx */
  EBX = (pop32());
  /* 10dd59f1 mov esp, ebp */
  ESP = (EBP);
  /* 10dd59f3 pop ebp */
  EBP = (pop32());
  /* 10dd59f4 ret  */
  ESPCHK(0x10dd5930u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x10dd5a00 (329 bytes, 102 insns) */
void f_10dd5a00(void) {
  FTRACE(0x10dd5a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5a01 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5a03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5a06 cmp dword ptr [0x10e010d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5a0d jne 0x10dd5a14 */
  if (!C.zf) goto L_10dd5a14;
  /* 10dd5a0f call 0x10dda340 */
  push32(0x10dd5a14u); f_10dda340();
L_10dd5a14:;
  /* 10dd5a14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10dd5a1b mov eax, dword ptr [0x10dff588] */
  EAX = (r32((uint32_t)(0x10dff588)));
  /* 10dd5a20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd5a23:;
  /* 10dd5a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5a26 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10dd5a29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd5a2b je 0x10dd5a59 */
  if (C.zf) goto L_10dd5a59;
  /* 10dd5a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5a30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5a33 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5a36 je 0x10dd5a41 */
  if (C.zf) goto L_10dd5a41;
  /* 10dd5a38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd5a3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5a3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10dd5a41:;
  /* 10dd5a41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5a44 push eax */
  push32((uint32_t)(EAX));
  /* 10dd5a45 call 0x10dd68c0 */
  push32(0x10dd5a4au); f_10dd68c0();
  /* 10dd5a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5a4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5a50 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10dd5a54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd5a57 jmp 0x10dd5a23 */
  goto L_10dd5a23;
L_10dd5a59:;
  /* 10dd5a59 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10dd5a5b push 0x10dfacc4 */
  push32((uint32_t)(0x10dfacc4u));
  /* 10dd5a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd5a62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd5a65 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10dd5a6c push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5a6d call 0x10dd3a90 */
  push32(0x10dd5a72u); f_10dd3a90();
  /* 10dd5a72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5a75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd5a78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5a7b mov dword ptr [0x10dff5bc], edx */
  w32((uint32_t)(0x10dff5bc), (EDX));
  /* 10dd5a81 cmp dword ptr [0x10dff5bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff5bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5a88 jne 0x10dd5a94 */
  if (!C.zf) goto L_10dd5a94;
  /* 10dd5a8a push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd5a8c call 0x10dd2a00 */
  push32(0x10dd5a91u); f_10dd2a00();
  /* 10dd5a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd5a94:;
  /* 10dd5a94 mov eax, dword ptr [0x10dff588] */
  EAX = (r32((uint32_t)(0x10dff588)));
  /* 10dd5a99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd5a9c jmp 0x10dd5aa7 */
  goto L_10dd5aa7;
L_10dd5a9e:;
  /* 10dd5a9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5aa1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5aa4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd5aa7:;
  /* 10dd5aa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5aaa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10dd5aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5aaf je 0x10dd5b17 */
  if (C.zf) goto L_10dd5b17;
  /* 10dd5ab1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5ab5 call 0x10dd68c0 */
  push32(0x10dd5abau); f_10dd68c0();
  /* 10dd5aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5abd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5ac0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd5ac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5ac6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10dd5ac9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5acc je 0x10dd5b15 */
  if (C.zf) goto L_10dd5b15;
  /* 10dd5ace push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10dd5ad0 push 0x10dfacc4 */
  push32((uint32_t)(0x10dfacc4u));
  /* 10dd5ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd5ad7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd5ada push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5adb call 0x10dd3a90 */
  push32(0x10dd5ae0u); f_10dd3a90();
  /* 10dd5ae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5ae3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5ae6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10dd5ae8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5aeb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5aee jne 0x10dd5afa */
  if (!C.zf) goto L_10dd5afa;
  /* 10dd5af0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd5af2 call 0x10dd2a00 */
  push32(0x10dd5af7u); f_10dd2a00();
  /* 10dd5af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd5afa:;
  /* 10dd5afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5afd push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5afe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5b01 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd5b03 push eax */
  push32((uint32_t)(EAX));
  /* 10dd5b04 call 0x10dd6a40 */
  push32(0x10dd5b09u); f_10dd6a40();
  /* 10dd5b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5b0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5b0f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5b12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10dd5b15:;
  /* 10dd5b15 jmp 0x10dd5a9e */
  goto L_10dd5a9e;
L_10dd5b17:;
  /* 10dd5b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd5b19 mov edx, dword ptr [0x10dff588] */
  EDX = (r32((uint32_t)(0x10dff588)));
  /* 10dd5b1f push edx */
  push32((uint32_t)(EDX));
  /* 10dd5b20 call 0x10dd4520 */
  push32(0x10dd5b25u); f_10dd4520();
  /* 10dd5b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5b28 mov dword ptr [0x10dff588], 0 */
  w32((uint32_t)(0x10dff588), (0x0u));
  /* 10dd5b32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5b35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10dd5b3b mov dword ptr [0x10e010c0], 1 */
  w32((uint32_t)(0x10e010c0), (0x1u));
  /* 10dd5b45 mov esp, ebp */
  ESP = (EBP);
  /* 10dd5b47 pop ebp */
  EBP = (pop32());
  /* 10dd5b48 ret  */
  ESPCHK(0x10dd5a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b50 @ 0x10dd5b50 (216 bytes, 69 insns) */
void f_10dd5b50(void) {
  FTRACE(0x10dd5b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5b51 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5b53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5b56 cmp dword ptr [0x10e010d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e010d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5b5d jne 0x10dd5b64 */
  if (!C.zf) goto L_10dd5b64;
  /* 10dd5b5f call 0x10dda340 */
  push32(0x10dd5b64u); f_10dda340();
L_10dd5b64:;
  /* 10dd5b64 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10dd5b69 push 0x10dff5f8 */
  push32((uint32_t)(0x10dff5f8u));
  /* 10dd5b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5b70 call dword ptr [0x10e022f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f8))), 0x10dd5b76u);
  /* 10dd5b76 mov dword ptr [0x10dff5cc], 0x10dff5f8 */
  w32((uint32_t)(0x10dff5cc), (0x10dff5f8u));
  /* 10dd5b80 mov eax, dword ptr [0x10e010ec] */
  EAX = (r32((uint32_t)(0x10e010ec)));
  /* 10dd5b85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5b88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd5b8a jne 0x10dd5b97 */
  if (!C.zf) goto L_10dd5b97;
  /* 10dd5b8c mov edx, dword ptr [0x10dff5cc] */
  EDX = (r32((uint32_t)(0x10dff5cc)));
  /* 10dd5b92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10dd5b95 jmp 0x10dd5b9f */
  goto L_10dd5b9f;
L_10dd5b97:;
  /* 10dd5b97 mov eax, dword ptr [0x10e010ec] */
  EAX = (r32((uint32_t)(0x10e010ec)));
  /* 10dd5b9c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10dd5b9f:;
  /* 10dd5b9f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd5ba2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10dd5ba5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10dd5ba8 push edx */
  push32((uint32_t)(EDX));
  /* 10dd5ba9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10dd5bac push eax */
  push32((uint32_t)(EAX));
  /* 10dd5bad push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5baf push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd5bb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd5bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5bb5 call 0x10dd5c30 */
  push32(0x10dd5bbau); f_10dd5c30();
  /* 10dd5bba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5bbd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10dd5bc2 push 0x10dfacd0 */
  push32((uint32_t)(0x10dfacd0u));
  /* 10dd5bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd5bc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5bcf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10dd5bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5bd3 call 0x10dd3a90 */
  push32(0x10dd5bd8u); f_10dd3a90();
  /* 10dd5bd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5bdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd5bde cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5be2 jne 0x10dd5bee */
  if (!C.zf) goto L_10dd5bee;
  /* 10dd5be4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10dd5be6 call 0x10dd2a00 */
  push32(0x10dd5bebu); f_10dd2a00();
  /* 10dd5beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd5bee:;
  /* 10dd5bee lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10dd5bf1 push edx */
  push32((uint32_t)(EDX));
  /* 10dd5bf2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10dd5bf5 push eax */
  push32((uint32_t)(EAX));
  /* 10dd5bf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5bf9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd5bfc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10dd5bff push eax */
  push32((uint32_t)(EAX));
  /* 10dd5c00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd5c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd5c04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd5c07 push edx */
  push32((uint32_t)(EDX));
  /* 10dd5c08 call 0x10dd5c30 */
  push32(0x10dd5c0du); f_10dd5c30();
  /* 10dd5c0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5c10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5c13 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5c16 mov dword ptr [0x10dff5b0], eax */
  w32((uint32_t)(0x10dff5b0), (EAX));
  /* 10dd5c1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd5c1e mov dword ptr [0x10dff5b4], ecx */
  w32((uint32_t)(0x10dff5b4), (ECX));
  /* 10dd5c24 mov esp, ebp */
  ESP = (EBP);
  /* 10dd5c26 pop ebp */
  EBP = (pop32());
  /* 10dd5c27 ret  */
  ESPCHK(0x10dd5b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x10dd5c30 (1060 bytes, 360 insns) */
void f_10dd5c30(void) {
  FTRACE(0x10dd5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd5c31 mov ebp, esp */
  EBP = (ESP);
  /* 10dd5c33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5c36 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5c39 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10dd5c3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd5c42 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10dd5c48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd5c4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd5c4e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5c52 je 0x10dd5c65 */
  if (C.zf) goto L_10dd5c65;
  /* 10dd5c54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5c57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5c5a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10dd5c5c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5c5f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5c62 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10dd5c65:;
  /* 10dd5c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5c68 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5c6b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5c6e jne 0x10dd5d3d */
  if (!C.zf) goto L_10dd5d3d;
L_10dd5c74:;
  /* 10dd5c74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5c77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5c7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd5c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5c80 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5c83 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5c86 je 0x10dd5d02 */
  if (C.zf) goto L_10dd5d02;
  /* 10dd5c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5c8b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10dd5c8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5c90 je 0x10dd5d02 */
  if (C.zf) goto L_10dd5d02;
  /* 10dd5c92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5c95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5c97 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd5c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5c9b mov al, byte ptr [edx + 0x10e00e21] */
  AL = (r8((uint32_t)(EDX + 0x10e00e21)));
  /* 10dd5ca1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5ca6 je 0x10dd5cd7 */
  if (C.zf) goto L_10dd5cd7;
  /* 10dd5ca8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5cab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd5cad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5cb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5cb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10dd5cb5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5cb9 je 0x10dd5cd7 */
  if (C.zf) goto L_10dd5cd7;
  /* 10dd5cbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5cbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5cc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10dd5cc3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10dd5cc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5cc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5ccb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10dd5cce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5cd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5cd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10dd5cd7:;
  /* 10dd5cd7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5cda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd5cdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5cdf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5ce2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10dd5ce4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5ce8 je 0x10dd5cfd */
  if (C.zf) goto L_10dd5cfd;
  /* 10dd5cea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5ced mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5cf0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd5cf2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd5cf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5cf7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5cfa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10dd5cfd:;
  /* 10dd5cfd jmp 0x10dd5c74 */
  goto L_10dd5c74;
L_10dd5d02:;
  /* 10dd5d02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5d05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd5d07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5d0a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5d0d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10dd5d0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5d13 je 0x10dd5d24 */
  if (C.zf) goto L_10dd5d24;
  /* 10dd5d15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5d18 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10dd5d1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5d1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5d21 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10dd5d24:;
  /* 10dd5d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5d27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5d2a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5d2d jne 0x10dd5d38 */
  if (!C.zf) goto L_10dd5d38;
  /* 10dd5d2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5d32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5d35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10dd5d38:;
  /* 10dd5d38 jmp 0x10dd5e0c */
  goto L_10dd5e0c;
L_10dd5d3d:;
  /* 10dd5d3d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5d40 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd5d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5d45 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5d48 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10dd5d4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5d4e je 0x10dd5d63 */
  if (C.zf) goto L_10dd5d63;
  /* 10dd5d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5d53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5d56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd5d58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd5d5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5d5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5d60 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10dd5d63:;
  /* 10dd5d63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5d66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd5d68 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10dd5d6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5d6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5d71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd5d74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5d77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5d7f mov dl, byte ptr [ecx + 0x10e00e21] */
  DL = (r8((uint32_t)(ECX + 0x10e00e21)));
  /* 10dd5d85 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5d88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd5d8a je 0x10dd5dbb */
  if (C.zf) goto L_10dd5dbb;
  /* 10dd5d8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5d8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd5d91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5d94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5d97 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10dd5d99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5d9d je 0x10dd5db2 */
  if (C.zf) goto L_10dd5db2;
  /* 10dd5d9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5da2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5da5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd5da7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd5da9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5dac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5daf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10dd5db2:;
  /* 10dd5db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5db8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd5dbb:;
  /* 10dd5dbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5dbe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5dc4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5dc7 je 0x10dd5de7 */
  if (C.zf) goto L_10dd5de7;
  /* 10dd5dc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5dcc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5dd3 je 0x10dd5de7 */
  if (C.zf) goto L_10dd5de7;
  /* 10dd5dd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5dd8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5dde cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5de1 jne 0x10dd5d3d */
  if (!C.zf) goto L_10dd5d3d;
L_10dd5de7:;
  /* 10dd5de7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd5dea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5df0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd5df2 jne 0x10dd5dff */
  if (!C.zf) goto L_10dd5dff;
  /* 10dd5df4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5df7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5dfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd5dfd jmp 0x10dd5e0c */
  goto L_10dd5e0c;
L_10dd5dff:;
  /* 10dd5dff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5e03 je 0x10dd5e0c */
  if (C.zf) goto L_10dd5e0c;
  /* 10dd5e05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5e08 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10dd5e0c:;
  /* 10dd5e0c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10dd5e13:;
  /* 10dd5e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5e16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10dd5e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5e1b je 0x10dd5e3e */
  if (C.zf) goto L_10dd5e3e;
L_10dd5e1d:;
  /* 10dd5e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5e20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10dd5e23 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5e26 je 0x10dd5e33 */
  if (C.zf) goto L_10dd5e33;
  /* 10dd5e28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5e2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5e2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5e31 jne 0x10dd5e3e */
  if (!C.zf) goto L_10dd5e3e;
L_10dd5e33:;
  /* 10dd5e33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5e36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5e39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd5e3c jmp 0x10dd5e1d */
  goto L_10dd5e1d;
L_10dd5e3e:;
  /* 10dd5e3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5e41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5e44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd5e46 jne 0x10dd5e4d */
  if (!C.zf) goto L_10dd5e4d;
  /* 10dd5e48 jmp 0x10dd602b */
  goto L_10dd602b;
L_10dd5e4d:;
  /* 10dd5e4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5e51 je 0x10dd5e64 */
  if (C.zf) goto L_10dd5e64;
  /* 10dd5e53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5e56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5e59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10dd5e5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd5e5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5e61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10dd5e64:;
  /* 10dd5e64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd5e67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd5e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5e6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd5e6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10dd5e71:;
  /* 10dd5e71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10dd5e78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10dd5e7f:;
  /* 10dd5e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5e82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10dd5e85 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5e88 jne 0x10dd5e9e */
  if (!C.zf) goto L_10dd5e9e;
  /* 10dd5e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5e8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5e90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd5e93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd5e96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5e99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10dd5e9c jmp 0x10dd5e7f */
  goto L_10dd5e7f;
L_10dd5e9e:;
  /* 10dd5e9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5ea1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5ea4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5ea7 jne 0x10dd5efa */
  if (!C.zf) goto L_10dd5efa;
  /* 10dd5ea9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd5eac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5eae mov ecx, 2 */
  ECX = (0x2u);
  /* 10dd5eb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dd5eb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd5eb7 jne 0x10dd5ef2 */
  if (!C.zf) goto L_10dd5ef2;
  /* 10dd5eb9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5ebd je 0x10dd5edf */
  if (C.zf) goto L_10dd5edf;
  /* 10dd5ebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5ec2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10dd5ec6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5ec9 jne 0x10dd5ed6 */
  if (!C.zf) goto L_10dd5ed6;
  /* 10dd5ecb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5ed1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd5ed4 jmp 0x10dd5edd */
  goto L_10dd5edd;
L_10dd5ed6:;
  /* 10dd5ed6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10dd5edd:;
  /* 10dd5edd jmp 0x10dd5ee6 */
  goto L_10dd5ee6;
L_10dd5edf:;
  /* 10dd5edf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10dd5ee6:;
  /* 10dd5ee6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd5ee8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5eec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10dd5eef mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10dd5ef2:;
  /* 10dd5ef2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd5ef5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10dd5ef7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10dd5efa:;
  /* 10dd5efa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd5efd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd5f00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd5f03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10dd5f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd5f08 je 0x10dd5f2e */
  if (C.zf) goto L_10dd5f2e;
  /* 10dd5f0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5f0e je 0x10dd5f1f */
  if (C.zf) goto L_10dd5f1f;
  /* 10dd5f10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5f13 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10dd5f16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5f1c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10dd5f1f:;
  /* 10dd5f1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5f22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd5f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5f27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5f2a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dd5f2c jmp 0x10dd5efa */
  goto L_10dd5efa;
L_10dd5f2e:;
  /* 10dd5f2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5f31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10dd5f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd5f36 je 0x10dd5f54 */
  if (C.zf) goto L_10dd5f54;
  /* 10dd5f38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5f3c jne 0x10dd5f59 */
  if (!C.zf) goto L_10dd5f59;
  /* 10dd5f3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5f41 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10dd5f44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5f47 je 0x10dd5f54 */
  if (C.zf) goto L_10dd5f54;
  /* 10dd5f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5f4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10dd5f4f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5f52 jne 0x10dd5f59 */
  if (!C.zf) goto L_10dd5f59;
L_10dd5f54:;
  /* 10dd5f54 jmp 0x10dd6004 */
  goto L_10dd6004;
L_10dd5f59:;
  /* 10dd5f59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5f5d je 0x10dd5ff6 */
  if (C.zf) goto L_10dd5ff6;
  /* 10dd5f63 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd5f67 je 0x10dd5fbd */
  if (C.zf) goto L_10dd5fbd;
  /* 10dd5f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5f6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10dd5f70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5f72 mov cl, byte ptr [eax + 0x10e00e21] */
  CL = (r8((uint32_t)(EAX + 0x10e00e21)));
  /* 10dd5f78 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5f7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd5f7d je 0x10dd5fa8 */
  if (C.zf) goto L_10dd5fa8;
  /* 10dd5f7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5f82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5f85 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10dd5f87 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10dd5f89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5f8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5f8f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10dd5f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5f95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5f98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd5f9b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5f9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd5fa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5fa3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5fa6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10dd5fa8:;
  /* 10dd5fa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5fab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5fae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10dd5fb0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10dd5fb2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd5fb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5fb8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10dd5fbb jmp 0x10dd5fe9 */
  goto L_10dd5fe9;
L_10dd5fbd:;
  /* 10dd5fbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd5fc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10dd5fc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5fc6 mov cl, byte ptr [eax + 0x10e00e21] */
  CL = (r8((uint32_t)(EAX + 0x10e00e21)));
  /* 10dd5fcc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd5fcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd5fd1 je 0x10dd5fe9 */
  if (C.zf) goto L_10dd5fe9;
  /* 10dd5fd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5fd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5fd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd5fdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5fdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd5fe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5fe4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5fe7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd5fe9:;
  /* 10dd5fe9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5fec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd5fee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5ff1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd5ff4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10dd5ff6:;
  /* 10dd5ff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd5ff9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd5ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd5fff jmp 0x10dd5e71 */
  goto L_10dd5e71;
L_10dd6004:;
  /* 10dd6004 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6008 je 0x10dd6019 */
  if (C.zf) goto L_10dd6019;
  /* 10dd600a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd600d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10dd6010 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd6013 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6016 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10dd6019:;
  /* 10dd6019 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd601c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd601e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6021 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10dd6024 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10dd6026 jmp 0x10dd5e13 */
  goto L_10dd5e13;
L_10dd602b:;
  /* 10dd602b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd602f je 0x10dd6043 */
  if (C.zf) goto L_10dd6043;
  /* 10dd6031 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6034 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10dd603a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd603d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6040 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10dd6043:;
  /* 10dd6043 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd6046 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd6048 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd604b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd604e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dd6050 mov esp, ebp */
  ESP = (EBP);
  /* 10dd6052 pop ebp */
  EBP = (pop32());
  /* 10dd6053 ret  */
  ESPCHK(0x10dd5c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x10dd6060 (537 bytes, 173 insns) */
void f_10dd6060(void) {
  FTRACE(0x10dd6060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6060 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6061 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6063 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6066 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10dd606d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10dd6074 cmp dword ptr [0x10dff6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd607b jne 0x10dd60ba */
  if (!C.zf) goto L_10dd60ba;
  /* 10dd607d call dword ptr [0x10e02354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02354))), 0x10dd6083u);
  /* 10dd6083 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10dd6086 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd608a je 0x10dd6098 */
  if (C.zf) goto L_10dd6098;
  /* 10dd608c mov dword ptr [0x10dff6fc], 1 */
  w32((uint32_t)(0x10dff6fc), (0x1u));
  /* 10dd6096 jmp 0x10dd60ba */
  goto L_10dd60ba;
L_10dd6098:;
  /* 10dd6098 call dword ptr [0x10e02350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02350))), 0x10dd609eu);
  /* 10dd609e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd60a1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd60a5 je 0x10dd60b3 */
  if (C.zf) goto L_10dd60b3;
  /* 10dd60a7 mov dword ptr [0x10dff6fc], 2 */
  w32((uint32_t)(0x10dff6fc), (0x2u));
  /* 10dd60b1 jmp 0x10dd60ba */
  goto L_10dd60ba;
L_10dd60b3:;
  /* 10dd60b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd60b5 jmp 0x10dd6275 */
  goto L_10dd6275;
L_10dd60ba:;
  /* 10dd60ba cmp dword ptr [0x10dff6fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff6fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd60c1 jne 0x10dd61be */
  if (!C.zf) goto L_10dd61be;
  /* 10dd60c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd60cb jne 0x10dd60e3 */
  if (!C.zf) goto L_10dd60e3;
  /* 10dd60cd call dword ptr [0x10e02354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02354))), 0x10dd60d3u);
  /* 10dd60d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10dd60d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd60da jne 0x10dd60e3 */
  if (!C.zf) goto L_10dd60e3;
  /* 10dd60dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd60de jmp 0x10dd6275 */
  goto L_10dd6275;
L_10dd60e3:;
  /* 10dd60e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd60e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10dd60e9:;
  /* 10dd60e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd60ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd60ee mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10dd60f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd60f3 je 0x10dd6115 */
  if (C.zf) goto L_10dd6115;
  /* 10dd60f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd60f8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd60fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd60fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6101 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd6103 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10dd6106 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd6108 jne 0x10dd6113 */
  if (!C.zf) goto L_10dd6113;
  /* 10dd610a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd610d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6110 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10dd6113:;
  /* 10dd6113 jmp 0x10dd60e9 */
  goto L_10dd60e9;
L_10dd6115:;
  /* 10dd6115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6118 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd611b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10dd611d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6120 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd6123 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6125 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6129 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd612b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd612e push edx */
  push32((uint32_t)(EDX));
  /* 10dd612f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd6132 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6135 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6137 call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10dd613du);
  /* 10dd613d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd6140 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6144 je 0x10dd6164 */
  if (C.zf) goto L_10dd6164;
  /* 10dd6146 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10dd6148 push 0x10dfacdc */
  push32((uint32_t)(0x10dfacdcu));
  /* 10dd614d push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd614f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd6152 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6153 call 0x10dd3a90 */
  push32(0x10dd6158u); f_10dd3a90();
  /* 10dd6158 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd615b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd615e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6162 jne 0x10dd6175 */
  if (!C.zf) goto L_10dd6175;
L_10dd6164:;
  /* 10dd6164 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd6167 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6168 call dword ptr [0x10e02348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02348))), 0x10dd616eu);
  /* 10dd616e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd6170 jmp 0x10dd6275 */
  goto L_10dd6275;
L_10dd6175:;
  /* 10dd6175 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6177 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6179 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd617c push eax */
  push32((uint32_t)(EAX));
  /* 10dd617d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6180 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6184 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6185 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd6188 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6189 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd618b push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd618d call dword ptr [0x10e0234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0234c))), 0x10dd6193u);
  /* 10dd6193 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd6195 jne 0x10dd61ac */
  if (!C.zf) goto L_10dd61ac;
  /* 10dd6197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd6199 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd619c push ecx */
  push32((uint32_t)(ECX));
  /* 10dd619d call 0x10dd4520 */
  push32(0x10dd61a2u); f_10dd4520();
  /* 10dd61a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd61a5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10dd61ac:;
  /* 10dd61ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd61af push edx */
  push32((uint32_t)(EDX));
  /* 10dd61b0 call dword ptr [0x10e02348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02348))), 0x10dd61b6u);
  /* 10dd61b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd61b9 jmp 0x10dd6275 */
  goto L_10dd6275;
L_10dd61be:;
  /* 10dd61be cmp dword ptr [0x10dff6fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dff6fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd61c5 jne 0x10dd6273 */
  if (!C.zf) goto L_10dd6273;
  /* 10dd61cb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd61cf jne 0x10dd61e7 */
  if (!C.zf) goto L_10dd61e7;
  /* 10dd61d1 call dword ptr [0x10e02350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02350))), 0x10dd61d7u);
  /* 10dd61d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd61da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd61de jne 0x10dd61e7 */
  if (!C.zf) goto L_10dd61e7;
  /* 10dd61e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd61e2 jmp 0x10dd6275 */
  goto L_10dd6275;
L_10dd61e7:;
  /* 10dd61e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd61ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10dd61ed:;
  /* 10dd61ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd61f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10dd61f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd61f5 je 0x10dd6215 */
  if (C.zf) goto L_10dd6215;
  /* 10dd61f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd61fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd61fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd6200 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6203 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10dd6206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd6208 jne 0x10dd6213 */
  if (!C.zf) goto L_10dd6213;
  /* 10dd620a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd620d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6210 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10dd6213:;
  /* 10dd6213 jmp 0x10dd61ed */
  goto L_10dd61ed;
L_10dd6215:;
  /* 10dd6215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6218 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd621b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd621e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10dd6221 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10dd6226 push 0x10dfacdc */
  push32((uint32_t)(0x10dfacdcu));
  /* 10dd622b push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd622d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd6230 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6231 call 0x10dd3a90 */
  push32(0x10dd6236u); f_10dd3a90();
  /* 10dd6236 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6239 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd623c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6240 jne 0x10dd6250 */
  if (!C.zf) goto L_10dd6250;
  /* 10dd6242 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6245 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6246 call dword ptr [0x10e02344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02344))), 0x10dd624cu);
  /* 10dd624c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd624e jmp 0x10dd6275 */
  goto L_10dd6275;
L_10dd6250:;
  /* 10dd6250 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd6253 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6254 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6257 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6258 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd625b push eax */
  push32((uint32_t)(EAX));
  /* 10dd625c call 0x10dda370 */
  push32(0x10dd6261u); f_10dda370();
  /* 10dd6261 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6264 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6267 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6268 call dword ptr [0x10e02344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02344))), 0x10dd626eu);
  /* 10dd626e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6271 jmp 0x10dd6275 */
  goto L_10dd6275;
L_10dd6273:;
  /* 10dd6273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd6275:;
  /* 10dd6275 mov esp, ebp */
  ESP = (EBP);
  /* 10dd6277 pop ebp */
  EBP = (pop32());
  /* 10dd6278 ret  */
  ESPCHK(0x10dd6060u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x10dd6280 (77 bytes, 25 insns) */
void f_10dd6280(void) {
  FTRACE(0x10dd6280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6280 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6281 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6283 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6285 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10dd628a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd628c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6290 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10dd6293 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6294 call dword ptr [0x10e0232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0232c))), 0x10dd629au);
  /* 10dd629a mov dword ptr [0x10e00f4c], eax */
  w32((uint32_t)(0x10e00f4c), (EAX));
  /* 10dd629f cmp dword ptr [0x10e00f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e00f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd62a6 jne 0x10dd62ac */
  if (!C.zf) goto L_10dd62ac;
  /* 10dd62a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd62aa jmp 0x10dd62cb */
  goto L_10dd62cb;
L_10dd62ac:;
  /* 10dd62ac call 0x10dd7d30 */
  push32(0x10dd62b1u); f_10dd7d30();
  /* 10dd62b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd62b3 jne 0x10dd62c6 */
  if (!C.zf) goto L_10dd62c6;
  /* 10dd62b5 mov ecx, dword ptr [0x10e00f4c] */
  ECX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd62bb push ecx */
  push32((uint32_t)(ECX));
  /* 10dd62bc call dword ptr [0x10e02358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02358))), 0x10dd62c2u);
  /* 10dd62c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd62c4 jmp 0x10dd62cb */
  goto L_10dd62cb;
L_10dd62c6:;
  /* 10dd62c6 mov eax, 1 */
  EAX = (0x1u);
L_10dd62cb:;
  /* 10dd62cb pop ebp */
  EBP = (pop32());
  /* 10dd62cc ret  */
  ESPCHK(0x10dd6280u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x10dd62d0 (156 bytes, 48 insns) */
void f_10dd62d0(void) {
  FTRACE(0x10dd62d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd62d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd62d1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd62d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd62d6 mov eax, dword ptr [0x10e00f48] */
  EAX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd62db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd62de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd62e5 jmp 0x10dd62f0 */
  goto L_10dd62f0;
L_10dd62e7:;
  /* 10dd62e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd62ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd62ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd62f0:;
  /* 10dd62f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd62f3 cmp edx, dword ptr [0x10e00f44] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e00f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd62f9 jge 0x10dd6346 */
  if ((C.sf==C.of)) goto L_10dd6346;
  /* 10dd62fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10dd6300 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10dd6305 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6308 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10dd630b push ecx */
  push32((uint32_t)(ECX));
  /* 10dd630c call dword ptr [0x10e02364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02364))), 0x10dd6312u);
  /* 10dd6312 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10dd6317 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6319 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd631c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10dd631f push eax */
  push32((uint32_t)(EAX));
  /* 10dd6320 call dword ptr [0x10e02364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02364))), 0x10dd6326u);
  /* 10dd6326 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6329 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10dd632c push edx */
  push32((uint32_t)(EDX));
  /* 10dd632d push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd632f mov eax, dword ptr [0x10e00f4c] */
  EAX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd6334 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6335 call dword ptr [0x10e02360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02360))), 0x10dd633bu);
  /* 10dd633b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd633e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6341 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dd6344 jmp 0x10dd62e7 */
  goto L_10dd62e7;
L_10dd6346:;
  /* 10dd6346 mov edx, dword ptr [0x10e00f48] */
  EDX = (r32((uint32_t)(0x10e00f48)));
  /* 10dd634c push edx */
  push32((uint32_t)(EDX));
  /* 10dd634d push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd634f mov eax, dword ptr [0x10e00f4c] */
  EAX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd6354 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6355 call dword ptr [0x10e02360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02360))), 0x10dd635bu);
  /* 10dd635b mov ecx, dword ptr [0x10e00f4c] */
  ECX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd6361 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6362 call dword ptr [0x10e02358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02358))), 0x10dd6368u);
  /* 10dd6368 mov esp, ebp */
  ESP = (EBP);
  /* 10dd636a pop ebp */
  EBP = (pop32());
  /* 10dd636b ret  */
  ESPCHK(0x10dd62d0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10dd6370 (73 bytes, 19 insns) */
void f_10dd6370(void) {
  FTRACE(0x10dd6370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6370 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6371 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6373 cmp dword ptr [0x10dff590], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff590))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd637a je 0x10dd638e */
  if (C.zf) goto L_10dd638e;
  /* 10dd637c cmp dword ptr [0x10dff590], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff590))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6383 jne 0x10dd63b7 */
  if (!C.zf) goto L_10dd63b7;
  /* 10dd6385 cmp dword ptr [0x10dff594], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff594))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd638c jne 0x10dd63b7 */
  if (!C.zf) goto L_10dd63b7;
L_10dd638e:;
  /* 10dd638e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10dd6393 call 0x10dd63c0 */
  push32(0x10dd6398u); f_10dd63c0();
  /* 10dd6398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd639b cmp dword ptr [0x10dff700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd63a2 je 0x10dd63aa */
  if (C.zf) goto L_10dd63aa;
  /* 10dd63a4 call dword ptr [0x10dff700] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff700))), 0x10dd63aau);
L_10dd63aa:;
  /* 10dd63aa push 0xff */
  push32((uint32_t)(0xffu));
  /* 10dd63af call 0x10dd63c0 */
  push32(0x10dd63b4u); f_10dd63c0();
  /* 10dd63b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd63b7:;
  /* 10dd63b7 pop ebp */
  EBP = (pop32());
  /* 10dd63b8 ret  */
  ESPCHK(0x10dd6370u, _esp0);
  ESP += 4; return;
}

/* FUN_100063c0 @ 0x10dd63c0 (447 bytes, 131 insns) */
void f_10dd63c0(void) {
  FTRACE(0x10dd63c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd63c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd63c1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd63c3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd63c9 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd63ca push esi */
  push32((uint32_t)(ESI));
  /* 10dd63cb push edi */
  push32((uint32_t)(EDI));
  /* 10dd63cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10dd63d3 jmp 0x10dd63de */
  goto L_10dd63de;
L_10dd63d5:;
  /* 10dd63d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd63d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd63db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10dd63de:;
  /* 10dd63de cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd63e2 jae 0x10dd63f7 */
  if (!C.cf) goto L_10dd63f7;
  /* 10dd63e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd63e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd63ea cmp edx, dword ptr [ecx*8 + 0x10dfdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10dfdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd63f1 jne 0x10dd63f5 */
  if (!C.zf) goto L_10dd63f5;
  /* 10dd63f3 jmp 0x10dd63f7 */
  goto L_10dd63f7;
L_10dd63f5:;
  /* 10dd63f5 jmp 0x10dd63d5 */
  goto L_10dd63d5;
L_10dd63f7:;
  /* 10dd63f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd63fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd63fd cmp ecx, dword ptr [eax*8 + 0x10dfdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10dfdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6404 jne 0x10dd6578 */
  if (!C.zf) goto L_10dd6578;
  /* 10dd640a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6411 je 0x10dd6434 */
  if (C.zf) goto L_10dd6434;
  /* 10dd6413 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6416 mov eax, dword ptr [edx*8 + 0x10dfdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10dfdab4)));
  /* 10dd641d push eax */
  push32((uint32_t)(EAX));
  /* 10dd641e push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6422 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6424 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6426 call 0x10dd2b50 */
  push32(0x10dd642bu); f_10dd2b50();
  /* 10dd642b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd642e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6431 jne 0x10dd6434 */
  if (!C.zf) goto L_10dd6434;
  /* 10dd6433 int3  */
  x86_unimpl("int3 @ 0x10dd6433");
L_10dd6434:;
  /* 10dd6434 cmp dword ptr [0x10dff590], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff590))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd643b je 0x10dd644f */
  if (C.zf) goto L_10dd644f;
  /* 10dd643d cmp dword ptr [0x10dff590], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff590))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6444 jne 0x10dd6488 */
  if (!C.zf) goto L_10dd6488;
  /* 10dd6446 cmp dword ptr [0x10dff594], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dff594))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd644d jne 0x10dd6488 */
  if (!C.zf) goto L_10dd6488;
L_10dd644f:;
  /* 10dd644f push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6451 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10dd6454 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6455 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6458 mov eax, dword ptr [edx*8 + 0x10dfdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10dfdab4)));
  /* 10dd645f push eax */
  push32((uint32_t)(EAX));
  /* 10dd6460 call 0x10dd68c0 */
  push32(0x10dd6465u); f_10dd68c0();
  /* 10dd6465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6468 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6469 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd646c mov edx, dword ptr [ecx*8 + 0x10dfdab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10dfdab4)));
  /* 10dd6473 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6474 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10dd6476 call dword ptr [0x10e022dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022dc))), 0x10dd647cu);
  /* 10dd647c push eax */
  push32((uint32_t)(EAX));
  /* 10dd647d call dword ptr [0x10e022e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022e0))), 0x10dd6483u);
  /* 10dd6483 jmp 0x10dd6578 */
  goto L_10dd6578;
L_10dd6488:;
  /* 10dd6488 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd648f je 0x10dd6578 */
  if (C.zf) goto L_10dd6578;
  /* 10dd6495 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10dd649a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10dd64a0 push eax */
  push32((uint32_t)(EAX));
  /* 10dd64a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd64a3 call dword ptr [0x10e022f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f8))), 0x10dd64a9u);
  /* 10dd64a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd64ab jne 0x10dd64c1 */
  if (!C.zf) goto L_10dd64c1;
  /* 10dd64ad push 0x10dfa544 */
  push32((uint32_t)(0x10dfa544u));
  /* 10dd64b2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10dd64b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd64b9 call 0x10dd6a40 */
  push32(0x10dd64beu); f_10dd6a40();
  /* 10dd64be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd64c1:;
  /* 10dd64c1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10dd64c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10dd64ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd64cd push eax */
  push32((uint32_t)(EAX));
  /* 10dd64ce call 0x10dd68c0 */
  push32(0x10dd64d3u); f_10dd68c0();
  /* 10dd64d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd64d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd64d9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd64dc jbe 0x10dd650a */
  if ((C.cf||C.zf)) goto L_10dd650a;
  /* 10dd64de lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10dd64e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd64e5 call 0x10dd68c0 */
  push32(0x10dd64eau); f_10dd68c0();
  /* 10dd64ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd64ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd64f0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10dd64f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd64f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd64f9 push 0x10dfa540 */
  push32((uint32_t)(0x10dfa540u));
  /* 10dd64fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6501 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6502 call 0x10dd72b0 */
  push32(0x10dd6507u); f_10dd72b0();
  /* 10dd6507 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd650a:;
  /* 10dd650a push 0x10dfaf98 */
  push32((uint32_t)(0x10dfaf98u));
  /* 10dd650f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10dd6515 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6516 call 0x10dd6a40 */
  push32(0x10dd651bu); f_10dd6a40();
  /* 10dd651b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd651e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6521 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6522 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10dd6528 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6529 call 0x10dd6a50 */
  push32(0x10dd652eu); f_10dd6a50();
  /* 10dd652e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6531 push 0x10dfa4b8 */
  push32((uint32_t)(0x10dfa4b8u));
  /* 10dd6536 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10dd653c push edx */
  push32((uint32_t)(EDX));
  /* 10dd653d call 0x10dd6a50 */
  push32(0x10dd6542u); f_10dd6a50();
  /* 10dd6542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6545 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6548 mov ecx, dword ptr [eax*8 + 0x10dfdab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10dfdab4)));
  /* 10dd654f push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6550 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10dd6556 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6557 call 0x10dd6a50 */
  push32(0x10dd655cu); f_10dd6a50();
  /* 10dd655c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd655f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10dd6564 push 0x10dfaf70 */
  push32((uint32_t)(0x10dfaf70u));
  /* 10dd6569 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10dd656f push eax */
  push32((uint32_t)(EAX));
  /* 10dd6570 call 0x10dd71f0 */
  push32(0x10dd6575u); f_10dd71f0();
  /* 10dd6575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd6578:;
  /* 10dd6578 pop edi */
  EDI = (pop32());
  /* 10dd6579 pop esi */
  ESI = (pop32());
  /* 10dd657a pop ebx */
  EBX = (pop32());
  /* 10dd657b mov esp, ebp */
  ESP = (EBP);
  /* 10dd657d pop ebp */
  EBP = (pop32());
  /* 10dd657e ret  */
  ESPCHK(0x10dd63c0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10dd6580 (80 bytes, 27 insns) */
void f_10dd6580(void) {
  FTRACE(0x10dd6580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6580 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6581 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6583 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6584 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd658b jmp 0x10dd6596 */
  goto L_10dd6596;
L_10dd658d:;
  /* 10dd658d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6590 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd6596:;
  /* 10dd6596 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd659a jae 0x10dd65af */
  if (!C.cf) goto L_10dd65af;
  /* 10dd659c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd659f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd65a2 cmp edx, dword ptr [ecx*8 + 0x10dfdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10dfdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd65a9 jne 0x10dd65ad */
  if (!C.zf) goto L_10dd65ad;
  /* 10dd65ab jmp 0x10dd65af */
  goto L_10dd65af;
L_10dd65ad:;
  /* 10dd65ad jmp 0x10dd658d */
  goto L_10dd658d;
L_10dd65af:;
  /* 10dd65af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd65b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd65b5 cmp ecx, dword ptr [eax*8 + 0x10dfdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10dfdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd65bc jne 0x10dd65ca */
  if (!C.zf) goto L_10dd65ca;
  /* 10dd65be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd65c1 mov eax, dword ptr [edx*8 + 0x10dfdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10dfdab4)));
  /* 10dd65c8 jmp 0x10dd65cc */
  goto L_10dd65cc;
L_10dd65ca:;
  /* 10dd65ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd65cc:;
  /* 10dd65cc mov esp, ebp */
  ESP = (EBP);
  /* 10dd65ce pop ebp */
  EBP = (pop32());
  /* 10dd65cf ret  */
  ESPCHK(0x10dd6580u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10dd65d0 (66 bytes, 28 insns) */
void f_10dd65d0(void) {
  FTRACE(0x10dd65d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd65d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd65d1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd65d3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd65d7 jne 0x10dd65f7 */
  if (!C.zf) goto L_10dd65f7;
  /* 10dd65d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd65dd jge 0x10dd65f7 */
  if ((C.sf==C.of)) goto L_10dd65f7;
  /* 10dd65df push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd65e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd65e4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd65e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd65e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd65e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd65ec push edx */
  push32((uint32_t)(EDX));
  /* 10dd65ed call 0x10dd6620 */
  push32(0x10dd65f2u); f_10dd6620();
  /* 10dd65f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd65f5 jmp 0x10dd660d */
  goto L_10dd660d;
L_10dd65f7:;
  /* 10dd65f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd65f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd65fc push eax */
  push32((uint32_t)(EAX));
  /* 10dd65fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6600 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6604 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6605 call 0x10dd6620 */
  push32(0x10dd660au); f_10dd6620();
  /* 10dd660a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd660d:;
  /* 10dd660d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6610 pop ebp */
  EBP = (pop32());
  /* 10dd6611 ret  */
  ESPCHK(0x10dd65d0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10dd6620 (194 bytes, 71 insns) */
void f_10dd6620(void) {
  FTRACE(0x10dd6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6620 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6621 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6623 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd662c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6630 je 0x10dd6649 */
  if (C.zf) goto L_10dd6649;
  /* 10dd6632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6635 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10dd6638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd663b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd663e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd6641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6644 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10dd6646 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10dd6649:;
  /* 10dd6649 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd664c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10dd664f:;
  /* 10dd664f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6652 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd6654 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dd6657 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10dd665a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd665d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd665f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10dd6662 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10dd6665 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6669 jbe 0x10dd6681 */
  if ((C.cf||C.zf)) goto L_10dd6681;
  /* 10dd666b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd666e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6674 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd6676 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6679 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd667c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd667f jmp 0x10dd6695 */
  goto L_10dd6695;
L_10dd6681:;
  /* 10dd6681 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6684 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd668a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd668c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd668f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6692 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd6695:;
  /* 10dd6695 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6699 ja 0x10dd664f */
  if ((!C.cf&&!C.zf)) goto L_10dd664f;
  /* 10dd669b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd669e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10dd66a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd66a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd66a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd66aa:;
  /* 10dd66aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd66ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd66af mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10dd66b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd66b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd66b8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd66ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd66bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd66bf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10dd66c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10dd66c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd66c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd66ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd66cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd66d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd66d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd66d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd66d9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd66dc jb 0x10dd66aa */
  if (C.cf) goto L_10dd66aa;
  /* 10dd66de mov esp, ebp */
  ESP = (EBP);
  /* 10dd66e0 pop ebp */
  EBP = (pop32());
  /* 10dd66e1 ret  */
  ESPCHK(0x10dd6620u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10dd66f0 (63 bytes, 24 insns) */
void f_10dd66f0(void) {
  FTRACE(0x10dd66f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd66f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd66f1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd66f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd66f4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd66f8 jne 0x10dd6709 */
  if (!C.zf) goto L_10dd6709;
  /* 10dd66fa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd66fe jge 0x10dd6709 */
  if ((C.sf==C.of)) goto L_10dd6709;
  /* 10dd6700 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10dd6707 jmp 0x10dd6710 */
  goto L_10dd6710;
L_10dd6709:;
  /* 10dd6709 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10dd6710:;
  /* 10dd6710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6713 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6714 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd6717 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6718 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd671b push edx */
  push32((uint32_t)(EDX));
  /* 10dd671c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd671f push eax */
  push32((uint32_t)(EAX));
  /* 10dd6720 call 0x10dd6620 */
  push32(0x10dd6725u); f_10dd6620();
  /* 10dd6725 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd672b mov esp, ebp */
  ESP = (EBP);
  /* 10dd672d pop ebp */
  EBP = (pop32());
  /* 10dd672e ret  */
  ESPCHK(0x10dd66f0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10dd6730 (30 bytes, 14 insns) */
void f_10dd6730(void) {
  FTRACE(0x10dd6730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6730 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6731 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6735 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd6738 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd673c push ecx */
  push32((uint32_t)(ECX));
  /* 10dd673d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6740 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6741 call 0x10dd6620 */
  push32(0x10dd6746u); f_10dd6620();
  /* 10dd6746 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6749 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd674c pop ebp */
  EBP = (pop32());
  /* 10dd674d ret  */
  ESPCHK(0x10dd6730u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10dd6750 (72 bytes, 28 insns) */
void f_10dd6750(void) {
  FTRACE(0x10dd6750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6750 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6751 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6753 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6754 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6758 jne 0x10dd6771 */
  if (!C.zf) goto L_10dd6771;
  /* 10dd675a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd675e jg 0x10dd6771 */
  if ((!C.zf&&C.sf==C.of)) goto L_10dd6771;
  /* 10dd6760 jl 0x10dd6768 */
  if ((C.sf!=C.of)) goto L_10dd6768;
  /* 10dd6762 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6766 jae 0x10dd6771 */
  if (!C.cf) goto L_10dd6771;
L_10dd6768:;
  /* 10dd6768 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10dd676f jmp 0x10dd6778 */
  goto L_10dd6778;
L_10dd6771:;
  /* 10dd6771 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10dd6778:;
  /* 10dd6778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd677b push eax */
  push32((uint32_t)(EAX));
  /* 10dd677c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd677f push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6780 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd6783 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6784 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6787 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd678b push ecx */
  push32((uint32_t)(ECX));
  /* 10dd678c call 0x10dd67a0 */
  push32(0x10dd6791u); f_10dd67a0();
  /* 10dd6791 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd6794 mov esp, ebp */
  ESP = (EBP);
  /* 10dd6796 pop ebp */
  EBP = (pop32());
  /* 10dd6797 ret  */
  ESPCHK(0x10dd6750u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10dd67a0 (242 bytes, 91 insns) */
void f_10dd67a0(void) {
  FTRACE(0x10dd67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd67a1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd67a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd67a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd67a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd67ac cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd67b0 je 0x10dd67d4 */
  if (C.zf) goto L_10dd67d4;
  /* 10dd67b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd67b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10dd67b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd67bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd67be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd67c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd67c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10dd67c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd67c9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd67cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10dd67ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10dd67d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10dd67d4:;
  /* 10dd67d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd67d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10dd67da:;
  /* 10dd67da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd67dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd67df push ecx */
  push32((uint32_t)(ECX));
  /* 10dd67e0 push eax */
  push32((uint32_t)(EAX));
  /* 10dd67e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd67e4 push edx */
  push32((uint32_t)(EDX));
  /* 10dd67e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd67e8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd67e9 call 0x10dda720 */
  push32(0x10dd67eeu); f_10dda720();
  /* 10dd67ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd67f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd67f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd67f6 push edx */
  push32((uint32_t)(EDX));
  /* 10dd67f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd67f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd67fb push eax */
  push32((uint32_t)(EAX));
  /* 10dd67fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd67ff push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6800 call 0x10dda6b0 */
  push32(0x10dd6805u); f_10dda6b0();
  /* 10dd6805 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10dd6808 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10dd680b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd680f jbe 0x10dd6827 */
  if ((C.cf||C.zf)) goto L_10dd6827;
  /* 10dd6811 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6814 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6817 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd681a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd681c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd681f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6822 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd6825 jmp 0x10dd683b */
  goto L_10dd683b;
L_10dd6827:;
  /* 10dd6827 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd682a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd682d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6830 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd6832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6838 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10dd683b:;
  /* 10dd683b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd683f ja 0x10dd67da */
  if ((!C.cf&&!C.zf)) goto L_10dd67da;
  /* 10dd6841 jb 0x10dd6849 */
  if (C.cf) goto L_10dd6849;
  /* 10dd6843 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6847 ja 0x10dd67da */
  if ((!C.cf&&!C.zf)) goto L_10dd67da;
L_10dd6849:;
  /* 10dd6849 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd684c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10dd684f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6852 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd6858:;
  /* 10dd6858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd685b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd685d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10dd6860 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6863 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6866 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd6868 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10dd686a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd686d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10dd6870 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10dd6872 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6875 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6878 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd687b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd687e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6881 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd6884 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6887 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd688a jb 0x10dd6858 */
  if (C.cf) goto L_10dd6858;
  /* 10dd688c mov esp, ebp */
  ESP = (EBP);
  /* 10dd688e pop ebp */
  EBP = (pop32());
  /* 10dd688f ret 0x14 */
  ESPCHK(0x10dd67a0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10dd68a0 (31 bytes, 15 insns) */
void f_10dd68a0(void) {
  FTRACE(0x10dd68a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd68a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd68a1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd68a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd68a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd68a8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd68a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd68ac push ecx */
  push32((uint32_t)(ECX));
  /* 10dd68ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd68b0 push edx */
  push32((uint32_t)(EDX));
  /* 10dd68b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd68b4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd68b5 call 0x10dd67a0 */
  push32(0x10dd68bau); f_10dd67a0();
  /* 10dd68ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd68bd pop ebp */
  EBP = (pop32());
  /* 10dd68be ret  */
  ESPCHK(0x10dd68a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10dd68c0 (123 bytes, 44 insns) */
void f_10dd68c0(void) {
  FTRACE(0x10dd68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd68c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10dd68c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10dd68ca je 0x10dd68e0 */
  if (C.zf) goto L_10dd68e0;
L_10dd68cc:;
  /* 10dd68cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10dd68ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10dd68cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10dd68d1 je 0x10dd6913 */
  if (C.zf) goto L_10dd6913;
  /* 10dd68d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10dd68d9 jne 0x10dd68cc */
  if (!C.zf) goto L_10dd68cc;
  /* 10dd68db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10dd68e0:;
  /* 10dd68e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10dd68e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10dd68e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd68e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd68ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd68ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd68f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10dd68f6 je 0x10dd68e0 */
  if (C.zf) goto L_10dd68e0;
  /* 10dd68f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10dd68fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10dd68fd je 0x10dd6931 */
  if (C.zf) goto L_10dd6931;
  /* 10dd68ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10dd6901 je 0x10dd6927 */
  if (C.zf) goto L_10dd6927;
  /* 10dd6903 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10dd6908 je 0x10dd691d */
  if (C.zf) goto L_10dd691d;
  /* 10dd690a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10dd690f je 0x10dd6913 */
  if (C.zf) goto L_10dd6913;
  /* 10dd6911 jmp 0x10dd68e0 */
  goto L_10dd68e0;
L_10dd6913:;
  /* 10dd6913 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10dd6916 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10dd691a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd691c ret  */
  ESPCHK(0x10dd68c0u, _esp0);
  ESP += 4; return;
L_10dd691d:;
  /* 10dd691d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10dd6920 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10dd6924 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6926 ret  */
  ESPCHK(0x10dd68c0u, _esp0);
  ESP += 4; return;
L_10dd6927:;
  /* 10dd6927 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10dd692a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10dd692e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6930 ret  */
  ESPCHK(0x10dd68c0u, _esp0);
  ESP += 4; return;
L_10dd6931:;
  /* 10dd6931 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10dd6934 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10dd6938 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd693a ret  */
  ESPCHK(0x10dd68c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006940 @ 0x10dd6940 (249 bytes, 93 insns) */
void f_10dd6940(void) {
  FTRACE(0x10dd6940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6940 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6941 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6943 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6946 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd6947 push esi */
  push32((uint32_t)(ESI));
  /* 10dd6948 push edi */
  push32((uint32_t)(EDI));
  /* 10dd6949 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10dd694c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10dd694f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10dd6952 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10dd6955:;
  /* 10dd6955 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6959 jne 0x10dd6979 */
  if (!C.zf) goto L_10dd6979;
  /* 10dd695b push 0x10dfafd0 */
  push32((uint32_t)(0x10dfafd0u));
  /* 10dd6960 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6962 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10dd6964 push 0x10dfafc4 */
  push32((uint32_t)(0x10dfafc4u));
  /* 10dd6969 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd696b call 0x10dd2b50 */
  push32(0x10dd6970u); f_10dd2b50();
  /* 10dd6970 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6973 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6976 jne 0x10dd6979 */
  if (!C.zf) goto L_10dd6979;
  /* 10dd6978 int3  */
  x86_unimpl("int3 @ 0x10dd6978");
L_10dd6979:;
  /* 10dd6979 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd697b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd697d jne 0x10dd6955 */
  if (!C.zf) goto L_10dd6955;
L_10dd697f:;
  /* 10dd697f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6983 jne 0x10dd69a3 */
  if (!C.zf) goto L_10dd69a3;
  /* 10dd6985 push 0x10dfafb4 */
  push32((uint32_t)(0x10dfafb4u));
  /* 10dd698a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd698c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10dd698e push 0x10dfafc4 */
  push32((uint32_t)(0x10dfafc4u));
  /* 10dd6993 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd6995 call 0x10dd2b50 */
  push32(0x10dd699au); f_10dd2b50();
  /* 10dd699a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd699d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd69a0 jne 0x10dd69a3 */
  if (!C.zf) goto L_10dd69a3;
  /* 10dd69a2 int3  */
  x86_unimpl("int3 @ 0x10dd69a2");
L_10dd69a3:;
  /* 10dd69a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd69a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd69a7 jne 0x10dd697f */
  if (!C.zf) goto L_10dd697f;
  /* 10dd69a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10dd69b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd69b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dd69bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd69c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10dd69c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd69ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10dd69cd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10dd69d0 push edx */
  push32((uint32_t)(EDX));
  /* 10dd69d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd69d4 push eax */
  push32((uint32_t)(EAX));
  /* 10dd69d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd69d9 call 0x10ddaa20 */
  push32(0x10dd69deu); f_10ddaa20();
  /* 10dd69de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd69e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10dd69e4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69e7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd69ea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd69ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10dd69f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69f6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd69fa jl 0x10dd6a1e */
  if ((C.sf!=C.of)) goto L_10dd6a1e;
  /* 10dd69fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd69ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd6a01 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10dd6a04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd6a06 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd6a0c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10dd6a0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6a12 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd6a14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6a17 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6a1a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10dd6a1c jmp 0x10dd6a2f */
  goto L_10dd6a2f;
L_10dd6a1e:;
  /* 10dd6a1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6a21 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6a24 call 0x10dda7a0 */
  push32(0x10dd6a29u); f_10dda7a0();
  /* 10dd6a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6a2c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10dd6a2f:;
  /* 10dd6a2f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd6a32 pop edi */
  EDI = (pop32());
  /* 10dd6a33 pop esi */
  ESI = (pop32());
  /* 10dd6a34 pop ebx */
  EBX = (pop32());
  /* 10dd6a35 mov esp, ebp */
  ESP = (EBP);
  /* 10dd6a37 pop ebp */
  EBP = (pop32());
  /* 10dd6a38 ret  */
  ESPCHK(0x10dd6940u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x10dd6a40 (7 bytes, 3 insns) */
void f_10dd6a40(void) {
  FTRACE(0x10dd6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6a40 push edi */
  push32((uint32_t)(EDI));
  /* 10dd6a41 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10dd6a45 jmp 0x10dd6ab1 */
  jmp_ind(0x10dd6ab1u); return;
}

/* FUN_10006a50 @ 0x10dd6a50 (224 bytes, 84 insns) */
void f_10dd6a50(void) {
  FTRACE(0x10dd6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6a50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10dd6a54 push edi */
  push32((uint32_t)(EDI));
  /* 10dd6a55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10dd6a5b je 0x10dd6a6c */
  if (C.zf) goto L_10dd6a6c;
L_10dd6a5d:;
  /* 10dd6a5d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10dd6a5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10dd6a60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10dd6a62 je 0x10dd6a9f */
  if (C.zf) goto L_10dd6a9f;
  /* 10dd6a64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10dd6a6a jne 0x10dd6a5d */
  if (!C.zf) goto L_10dd6a5d;
L_10dd6a6c:;
  /* 10dd6a6c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10dd6a6e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10dd6a73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6a75 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd6a78 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd6a7a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6a7d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10dd6a82 je 0x10dd6a6c */
  if (C.zf) goto L_10dd6a6c;
  /* 10dd6a84 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10dd6a87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10dd6a89 je 0x10dd6aae */
  if (C.zf) goto L_10dd6aae;
  /* 10dd6a8b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10dd6a8d je 0x10dd6aa9 */
  if (C.zf) goto L_10dd6aa9;
  /* 10dd6a8f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10dd6a94 je 0x10dd6aa4 */
  if (C.zf) goto L_10dd6aa4;
  /* 10dd6a96 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10dd6a9b je 0x10dd6a9f */
  if (C.zf) goto L_10dd6a9f;
  /* 10dd6a9d jmp 0x10dd6a6c */
  goto L_10dd6a6c;
L_10dd6a9f:;
  /* 10dd6a9f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10dd6aa2 jmp 0x10dd6ab1 */
  goto L_10dd6ab1;
L_10dd6aa4:;
  /* 10dd6aa4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10dd6aa7 jmp 0x10dd6ab1 */
  goto L_10dd6ab1;
L_10dd6aa9:;
  /* 10dd6aa9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10dd6aac jmp 0x10dd6ab1 */
  goto L_10dd6ab1;
L_10dd6aae:;
  /* 10dd6aae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10dd6ab1:;
  /* 10dd6ab1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10dd6ab5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10dd6abb je 0x10dd6ad6 */
  if (C.zf) goto L_10dd6ad6;
L_10dd6abd:;
  /* 10dd6abd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10dd6abf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10dd6ac0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10dd6ac2 je 0x10dd6b28 */
  if (C.zf) goto L_10dd6b28;
  /* 10dd6ac4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10dd6ac6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10dd6ac7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10dd6acd jne 0x10dd6abd */
  if (!C.zf) goto L_10dd6abd;
  /* 10dd6acf jmp 0x10dd6ad6 */
  goto L_10dd6ad6;
L_10dd6ad1:;
  /* 10dd6ad1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10dd6ad3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10dd6ad6:;
  /* 10dd6ad6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10dd6adb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10dd6add add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6adf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd6ae2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd6ae4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd6ae6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6ae9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10dd6aee je 0x10dd6ad1 */
  if (C.zf) goto L_10dd6ad1;
  /* 10dd6af0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10dd6af2 je 0x10dd6b28 */
  if (C.zf) goto L_10dd6b28;
  /* 10dd6af4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10dd6af6 je 0x10dd6b1f */
  if (C.zf) goto L_10dd6b1f;
  /* 10dd6af8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10dd6afe je 0x10dd6b12 */
  if (C.zf) goto L_10dd6b12;
  /* 10dd6b00 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10dd6b06 je 0x10dd6b0a */
  if (C.zf) goto L_10dd6b0a;
  /* 10dd6b08 jmp 0x10dd6ad1 */
  goto L_10dd6ad1;
L_10dd6b0a:;
  /* 10dd6b0a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10dd6b0c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10dd6b10 pop edi */
  EDI = (pop32());
  /* 10dd6b11 ret  */
  ESPCHK(0x10dd6a50u, _esp0);
  ESP += 4; return;
L_10dd6b12:;
  /* 10dd6b12 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10dd6b15 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10dd6b19 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10dd6b1d pop edi */
  EDI = (pop32());
  /* 10dd6b1e ret  */
  ESPCHK(0x10dd6a50u, _esp0);
  ESP += 4; return;
L_10dd6b1f:;
  /* 10dd6b1f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10dd6b22 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10dd6b26 pop edi */
  EDI = (pop32());
  /* 10dd6b27 ret  */
  ESPCHK(0x10dd6a50u, _esp0);
  ESP += 4; return;
L_10dd6b28:;
  /* 10dd6b28 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10dd6b2a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10dd6b2e pop edi */
  EDI = (pop32());
  /* 10dd6b2f ret  */
  ESPCHK(0x10dd6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x10dd6b30 (243 bytes, 91 insns) */
void f_10dd6b30(void) {
  FTRACE(0x10dd6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6b31 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6b33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6b36 push ebx */
  push32((uint32_t)(EBX));
  /* 10dd6b37 push esi */
  push32((uint32_t)(ESI));
  /* 10dd6b38 push edi */
  push32((uint32_t)(EDI));
  /* 10dd6b39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10dd6b3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10dd6b3f:;
  /* 10dd6b3f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6b43 jne 0x10dd6b63 */
  if (!C.zf) goto L_10dd6b63;
  /* 10dd6b45 push 0x10dfafd0 */
  push32((uint32_t)(0x10dfafd0u));
  /* 10dd6b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6b4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10dd6b4e push 0x10dfafe0 */
  push32((uint32_t)(0x10dfafe0u));
  /* 10dd6b53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd6b55 call 0x10dd2b50 */
  push32(0x10dd6b5au); f_10dd2b50();
  /* 10dd6b5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6b5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6b60 jne 0x10dd6b63 */
  if (!C.zf) goto L_10dd6b63;
  /* 10dd6b62 int3  */
  x86_unimpl("int3 @ 0x10dd6b62");
L_10dd6b63:;
  /* 10dd6b63 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd6b65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd6b67 jne 0x10dd6b3f */
  if (!C.zf) goto L_10dd6b3f;
L_10dd6b69:;
  /* 10dd6b69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6b6d jne 0x10dd6b8d */
  if (!C.zf) goto L_10dd6b8d;
  /* 10dd6b6f push 0x10dfafb4 */
  push32((uint32_t)(0x10dfafb4u));
  /* 10dd6b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6b76 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10dd6b78 push 0x10dfafe0 */
  push32((uint32_t)(0x10dfafe0u));
  /* 10dd6b7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd6b7f call 0x10dd2b50 */
  push32(0x10dd6b84u); f_10dd2b50();
  /* 10dd6b84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6b87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6b8a jne 0x10dd6b8d */
  if (!C.zf) goto L_10dd6b8d;
  /* 10dd6b8c int3  */
  x86_unimpl("int3 @ 0x10dd6b8c");
L_10dd6b8d:;
  /* 10dd6b8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd6b8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd6b91 jne 0x10dd6b69 */
  if (!C.zf) goto L_10dd6b69;
  /* 10dd6b93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6b96 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10dd6b9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6ba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6ba3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10dd6ba6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6ba9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6bac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10dd6bae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6bb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6bb4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10dd6bb7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10dd6bba push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6bbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd6bbe push edx */
  push32((uint32_t)(EDX));
  /* 10dd6bbf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6bc2 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6bc3 call 0x10ddaa20 */
  push32(0x10dd6bc8u); f_10ddaa20();
  /* 10dd6bc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6bcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10dd6bce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6bd1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd6bd4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6bd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6bda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10dd6bdd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6be0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6be4 jl 0x10dd6c08 */
  if ((C.sf!=C.of)) goto L_10dd6c08;
  /* 10dd6be6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6be9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd6beb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10dd6bee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10dd6bf0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10dd6bf6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10dd6bf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6bfc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd6bfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6c01 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6c04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10dd6c06 jmp 0x10dd6c19 */
  goto L_10dd6c19;
L_10dd6c08:;
  /* 10dd6c08 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10dd6c0b push edx */
  push32((uint32_t)(EDX));
  /* 10dd6c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd6c0e call 0x10dda7a0 */
  push32(0x10dd6c13u); f_10dda7a0();
  /* 10dd6c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6c16 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10dd6c19:;
  /* 10dd6c19 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10dd6c1c pop edi */
  EDI = (pop32());
  /* 10dd6c1d pop esi */
  ESI = (pop32());
  /* 10dd6c1e pop ebx */
  EBX = (pop32());
  /* 10dd6c1f mov esp, ebp */
  ESP = (EBP);
  /* 10dd6c21 pop ebp */
  EBP = (pop32());
  /* 10dd6c22 ret  */
  ESPCHK(0x10dd6b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c30 @ 0x10dd6c30 (47 bytes, 17 insns) */
void f_10dd6c30(void) {
  FTRACE(0x10dd6c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6c30 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6c31 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6c36 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10dd6c3a jb 0x10dd6c50 */
  if (C.cf) goto L_10dd6c50;
L_10dd6c3c:;
  /* 10dd6c3c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6c42 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6c47 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10dd6c49 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6c4e jae 0x10dd6c3c */
  if (!C.cf) goto L_10dd6c3c;
L_10dd6c50:;
  /* 10dd6c50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6c52 mov eax, esp */
  EAX = (ESP);
  /* 10dd6c54 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10dd6c56 mov esp, ecx */
  ESP = (ECX);
  /* 10dd6c58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd6c5a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd6c5d push eax */
  push32((uint32_t)(EAX));
  /* 10dd6c5e ret  */
  ESPCHK(0x10dd6c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c60 @ 0x10dd6c60 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10dd6c60(void) {
  FTRACE(0x10dd6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6c61 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6c63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6c66 push esi */
  push32((uint32_t)(ESI));
  /* 10dd6c67 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6c6b je 0x10dd6c73 */
  if (C.zf) goto L_10dd6c73;
  /* 10dd6c6d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6c71 jne 0x10dd6c78 */
  if (!C.zf) goto L_10dd6c78;
L_10dd6c73:;
  /* 10dd6c73 jmp 0x10dd6e48 */
  goto L_10dd6e48;
L_10dd6c78:;
  /* 10dd6c78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6c7c je 0x10dd6c94 */
  if (C.zf) goto L_10dd6c94;
  /* 10dd6c7e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6c82 je 0x10dd6c94 */
  if (C.zf) goto L_10dd6c94;
  /* 10dd6c84 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6c88 je 0x10dd6c94 */
  if (C.zf) goto L_10dd6c94;
  /* 10dd6c8a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6c8e jne 0x10dd6d71 */
  if (!C.zf) goto L_10dd6d71;
L_10dd6c94:;
  /* 10dd6c94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6c96 call 0x10dd7490 */
  push32(0x10dd6c9bu); f_10dd7490();
  /* 10dd6c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6c9e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6ca2 je 0x10dd6caa */
  if (C.zf) goto L_10dd6caa;
  /* 10dd6ca4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6ca8 jne 0x10dd6cef */
  if (!C.zf) goto L_10dd6cef;
L_10dd6caa:;
  /* 10dd6caa cmp dword ptr [0x10dff714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6cb1 jne 0x10dd6cef */
  if (!C.zf) goto L_10dd6cef;
  /* 10dd6cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6cb5 push 0x10dd6e90 */
  push32((uint32_t)(0x10dd6e90u));
  /* 10dd6cba call dword ptr [0x10e02368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02368))), 0x10dd6cc0u);
  /* 10dd6cc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6cc3 jne 0x10dd6cd1 */
  if (!C.zf) goto L_10dd6cd1;
  /* 10dd6cc5 mov dword ptr [0x10dff714], 1 */
  w32((uint32_t)(0x10dff714), (0x1u));
  /* 10dd6ccf jmp 0x10dd6cef */
  goto L_10dd6cef;
L_10dd6cd1:;
  /* 10dd6cd1 call dword ptr [0x10e02320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02320))), 0x10dd6cd7u);
  /* 10dd6cd7 mov esi, eax */
  ESI = (EAX);
  /* 10dd6cd9 call 0x10ddb970 */
  push32(0x10dd6cdeu); f_10ddb970();
  /* 10dd6cde mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10dd6ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6ce2 call 0x10dd7530 */
  push32(0x10dd6ce7u); f_10dd7530();
  /* 10dd6ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6cea jmp 0x10dd6e48 */
  goto L_10dd6e48;
L_10dd6cef:;
  /* 10dd6cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6cf2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd6cf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd6cf8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6cfb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10dd6cfe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6d02 ja 0x10dd6d62 */
  if ((!C.cf&&!C.zf)) goto L_10dd6d62;
  /* 10dd6d04 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd6d07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd6d09 mov dl, byte ptr [eax + 0x10dd6e6f] */
  DL = (r8((uint32_t)(EAX + 0x10dd6e6f)));
  /* 10dd6d0f jmp dword ptr [edx*4 + 0x10dd6e5b] */
  switch (EDX) {
    case 0: goto L_10dd6d16;
    case 1: goto L_10dd6d50;
    case 2: goto L_10dd6d2a;
    case 3: goto L_10dd6d3d;
    case 4: goto L_10dd6d62;
    default: x86_unimpl("switch@0x10dd6d0f out of table"); return;
  }
L_10dd6d16:;
  /* 10dd6d16 mov ecx, dword ptr [0x10dff704] */
  ECX = (r32((uint32_t)(0x10dff704)));
  /* 10dd6d1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dd6d1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6d22 mov dword ptr [0x10dff704], edx */
  w32((uint32_t)(0x10dff704), (EDX));
  /* 10dd6d28 jmp 0x10dd6d62 */
  goto L_10dd6d62;
L_10dd6d2a:;
  /* 10dd6d2a mov eax, dword ptr [0x10dff708] */
  EAX = (r32((uint32_t)(0x10dff708)));
  /* 10dd6d2f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd6d32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6d35 mov dword ptr [0x10dff708], ecx */
  w32((uint32_t)(0x10dff708), (ECX));
  /* 10dd6d3b jmp 0x10dd6d62 */
  goto L_10dd6d62;
L_10dd6d3d:;
  /* 10dd6d3d mov edx, dword ptr [0x10dff70c] */
  EDX = (r32((uint32_t)(0x10dff70c)));
  /* 10dd6d43 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10dd6d46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6d49 mov dword ptr [0x10dff70c], eax */
  w32((uint32_t)(0x10dff70c), (EAX));
  /* 10dd6d4e jmp 0x10dd6d62 */
  goto L_10dd6d62;
L_10dd6d50:;
  /* 10dd6d50 mov ecx, dword ptr [0x10dff710] */
  ECX = (r32((uint32_t)(0x10dff710)));
  /* 10dd6d56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dd6d59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6d5c mov dword ptr [0x10dff710], edx */
  w32((uint32_t)(0x10dff710), (EDX));
L_10dd6d62:;
  /* 10dd6d62 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6d64 call 0x10dd7530 */
  push32(0x10dd6d69u); f_10dd7530();
  /* 10dd6d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6d6c jmp 0x10dd6e43 */
  goto L_10dd6e43;
L_10dd6d71:;
  /* 10dd6d71 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6d75 je 0x10dd6d88 */
  if (C.zf) goto L_10dd6d88;
  /* 10dd6d77 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6d7b je 0x10dd6d88 */
  if (C.zf) goto L_10dd6d88;
  /* 10dd6d7d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6d81 je 0x10dd6d88 */
  if (C.zf) goto L_10dd6d88;
  /* 10dd6d83 jmp 0x10dd6e48 */
  goto L_10dd6e48;
L_10dd6d88:;
  /* 10dd6d88 call 0x10dd34d0 */
  push32(0x10dd6d8du); f_10dd34d0();
  /* 10dd6d8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd6d90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6d93 cmp dword ptr [eax + 0x50], 0x10dfdc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10dfdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6d9a jne 0x10dd6de5 */
  if (!C.zf) goto L_10dd6de5;
  /* 10dd6d9c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10dd6da1 push 0x10dfafec */
  push32((uint32_t)(0x10dfafecu));
  /* 10dd6da6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd6da8 mov ecx, dword ptr [0x10dfdc80] */
  ECX = (r32((uint32_t)(0x10dfdc80)));
  /* 10dd6dae push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6daf call 0x10dd3a90 */
  push32(0x10dd6db4u); f_10dd3a90();
  /* 10dd6db4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6db7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6dba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10dd6dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6dc0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6dc4 je 0x10dd6de3 */
  if (C.zf) goto L_10dd6de3;
  /* 10dd6dc6 mov ecx, dword ptr [0x10dfdc80] */
  ECX = (r32((uint32_t)(0x10dfdc80)));
  /* 10dd6dcc push ecx */
  push32((uint32_t)(ECX));
  /* 10dd6dcd push 0x10dfdc00 */
  push32((uint32_t)(0x10dfdc00u));
  /* 10dd6dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6dd5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10dd6dd8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6dd9 call 0x10dda370 */
  push32(0x10dd6ddeu); f_10dda370();
  /* 10dd6dde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6de1 jmp 0x10dd6de5 */
  goto L_10dd6de5;
L_10dd6de3:;
  /* 10dd6de3 jmp 0x10dd6e48 */
  goto L_10dd6e48;
L_10dd6de5:;
  /* 10dd6de5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6de8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10dd6deb push edx */
  push32((uint32_t)(EDX));
  /* 10dd6dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6def push eax */
  push32((uint32_t)(EAX));
  /* 10dd6df0 call 0x10dd7170 */
  push32(0x10dd6df5u); f_10dd7170();
  /* 10dd6df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6df8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd6dfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6dff jne 0x10dd6e03 */
  if (!C.zf) goto L_10dd6e03;
  /* 10dd6e01 jmp 0x10dd6e48 */
  goto L_10dd6e48;
L_10dd6e03:;
  /* 10dd6e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6e06 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10dd6e09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10dd6e0c:;
  /* 10dd6e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6e0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd6e12 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6e15 jne 0x10dd6e43 */
  if (!C.zf) goto L_10dd6e43;
  /* 10dd6e17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6e1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd6e1d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10dd6e20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6e23 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6e26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dd6e29 mov edx, dword ptr [0x10dfdc84] */
  EDX = (r32((uint32_t)(0x10dfdc84)));
  /* 10dd6e2f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd6e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6e35 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10dd6e38 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6e3a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6e3d jb 0x10dd6e41 */
  if (C.cf) goto L_10dd6e41;
  /* 10dd6e3f jmp 0x10dd6e43 */
  goto L_10dd6e43;
L_10dd6e41:;
  /* 10dd6e41 jmp 0x10dd6e0c */
  goto L_10dd6e0c;
L_10dd6e43:;
  /* 10dd6e43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6e46 jmp 0x10dd6e56 */
  goto L_10dd6e56;
L_10dd6e48:;
  /* 10dd6e48 call 0x10ddb960 */
  push32(0x10dd6e4du); f_10ddb960();
  /* 10dd6e4d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10dd6e53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10dd6e56:;
  /* 10dd6e56 pop esi */
  ESI = (pop32());
  /* 10dd6e57 mov esp, ebp */
  ESP = (EBP);
  /* 10dd6e59 pop ebp */
  EBP = (pop32());
  /* 10dd6e5a ret  */
  ESPCHK(0x10dd6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e90 @ 0x10dd6e90 (146 bytes, 45 insns) */
void f_10dd6e90(void) {
  FTRACE(0x10dd6e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6e91 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6e93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6e96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6e98 call 0x10dd7490 */
  push32(0x10dd6e9du); f_10dd7490();
  /* 10dd6e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6ea0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6ea4 jne 0x10dd6ebe */
  if (!C.zf) goto L_10dd6ebe;
  /* 10dd6ea6 mov dword ptr [ebp - 8], 0x10dff704 */
  w32((uint32_t)(EBP + -0x8), (0x10dff704u));
  /* 10dd6ead mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6eb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10dd6eb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dd6eb5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10dd6ebc jmp 0x10dd6ed4 */
  goto L_10dd6ed4;
L_10dd6ebe:;
  /* 10dd6ebe mov dword ptr [ebp - 8], 0x10dff708 */
  w32((uint32_t)(EBP + -0x8), (0x10dff708u));
  /* 10dd6ec5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6ec8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd6eca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd6ecd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10dd6ed4:;
  /* 10dd6ed4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6ed8 jne 0x10dd6ee8 */
  if (!C.zf) goto L_10dd6ee8;
  /* 10dd6eda push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6edc call 0x10dd7530 */
  push32(0x10dd6ee1u); f_10dd7530();
  /* 10dd6ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6ee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd6ee6 jmp 0x10dd6f1c */
  goto L_10dd6f1c;
L_10dd6ee8:;
  /* 10dd6ee8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6eec je 0x10dd6f0d */
  if (C.zf) goto L_10dd6f0d;
  /* 10dd6eee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd6ef1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10dd6ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6ef9 call 0x10dd7530 */
  push32(0x10dd6efeu); f_10dd7530();
  /* 10dd6efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6f04 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6f05 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10dd6f08u);
  /* 10dd6f08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6f0b jmp 0x10dd6f17 */
  goto L_10dd6f17;
L_10dd6f0d:;
  /* 10dd6f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd6f0f call 0x10dd7530 */
  push32(0x10dd6f14u); f_10dd7530();
  /* 10dd6f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd6f17:;
  /* 10dd6f17 mov eax, 1 */
  EAX = (0x1u);
L_10dd6f1c:;
  /* 10dd6f1c mov esp, ebp */
  ESP = (EBP);
  /* 10dd6f1e pop ebp */
  EBP = (pop32());
  /* 10dd6f1f ret 4 */
  ESPCHK(0x10dd6e90u, _esp0);
  ESP += 8; return;
}

/* FUN_10006f30 @ 0x10dd6f30 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10dd6f30(void) {
  FTRACE(0x10dd6f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd6f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd6f31 mov ebp, esp */
  EBP = (ESP);
  /* 10dd6f33 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6f36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10dd6f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6f40 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10dd6f43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd6f46 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd6f49 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10dd6f4c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd6f50 ja 0x10dd6ffe */
  if ((!C.cf&&!C.zf)) goto L_10dd6ffe;
  /* 10dd6f56 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10dd6f59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd6f5b mov dl, byte ptr [eax + 0x10dd7152] */
  DL = (r8((uint32_t)(EAX + 0x10dd7152)));
  /* 10dd6f61 jmp dword ptr [edx*4 + 0x10dd713a] */
  switch (EDX) {
    case 0: goto L_10dd6f68;
    case 1: goto L_10dd6fd3;
    case 2: goto L_10dd6fb9;
    case 3: goto L_10dd6f85;
    case 4: goto L_10dd6f9f;
    case 5: goto L_10dd6ffe;
    default: x86_unimpl("switch@0x10dd6f61 out of table"); return;
  }
L_10dd6f68:;
  /* 10dd6f68 mov dword ptr [ebp - 0x18], 0x10dff704 */
  w32((uint32_t)(EBP + -0x18), (0x10dff704u));
  /* 10dd6f6f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6f72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd6f74 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10dd6f77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6f7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6f7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd6f80 jmp 0x10dd7006 */
  goto L_10dd7006;
L_10dd6f85:;
  /* 10dd6f85 mov dword ptr [ebp - 0x18], 0x10dff708 */
  w32((uint32_t)(EBP + -0x18), (0x10dff708u));
  /* 10dd6f8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6f8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd6f91 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10dd6f94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6f97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6f9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd6f9d jmp 0x10dd7006 */
  goto L_10dd7006;
L_10dd6f9f:;
  /* 10dd6f9f mov dword ptr [ebp - 0x18], 0x10dff70c */
  w32((uint32_t)(EBP + -0x18), (0x10dff70cu));
  /* 10dd6fa6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6fa9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd6fab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10dd6fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6fb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6fb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd6fb7 jmp 0x10dd7006 */
  goto L_10dd7006;
L_10dd6fb9:;
  /* 10dd6fb9 mov dword ptr [ebp - 0x18], 0x10dff710 */
  w32((uint32_t)(EBP + -0x18), (0x10dff710u));
  /* 10dd6fc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6fc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd6fc5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10dd6fc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd6fcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6fce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd6fd1 jmp 0x10dd7006 */
  goto L_10dd7006;
L_10dd6fd3:;
  /* 10dd6fd3 call 0x10dd34d0 */
  push32(0x10dd6fd8u); f_10dd34d0();
  /* 10dd6fd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd6fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd6fde mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10dd6fe1 push edx */
  push32((uint32_t)(EDX));
  /* 10dd6fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd6fe5 push eax */
  push32((uint32_t)(EAX));
  /* 10dd6fe6 call 0x10dd7170 */
  push32(0x10dd6febu); f_10dd7170();
  /* 10dd6feb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6fee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd6ff1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10dd6ff4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd6ff7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd6ff9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10dd6ffc jmp 0x10dd7006 */
  goto L_10dd7006;
L_10dd6ffe:;
  /* 10dd6ffe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7001 jmp 0x10dd7136 */
  goto L_10dd7136;
L_10dd7006:;
  /* 10dd7006 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd700a je 0x10dd7016 */
  if (C.zf) goto L_10dd7016;
  /* 10dd700c push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd700e call 0x10dd7490 */
  push32(0x10dd7013u); f_10dd7490();
  /* 10dd7013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd7016:;
  /* 10dd7016 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd701a jne 0x10dd7033 */
  if (!C.zf) goto L_10dd7033;
  /* 10dd701c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7020 je 0x10dd702c */
  if (C.zf) goto L_10dd702c;
  /* 10dd7022 push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd7024 call 0x10dd7530 */
  push32(0x10dd7029u); f_10dd7530();
  /* 10dd7029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd702c:;
  /* 10dd702c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd702e jmp 0x10dd7136 */
  goto L_10dd7136;
L_10dd7033:;
  /* 10dd7033 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7037 jne 0x10dd7050 */
  if (!C.zf) goto L_10dd7050;
  /* 10dd7039 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd703d je 0x10dd7049 */
  if (C.zf) goto L_10dd7049;
  /* 10dd703f push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd7041 call 0x10dd7530 */
  push32(0x10dd7046u); f_10dd7530();
  /* 10dd7046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd7049:;
  /* 10dd7049 push 3 */
  push32((uint32_t)(0x3u));
  /* 10dd704b call 0x10dd3250 */
  push32(0x10dd7050u); f_10dd3250();
L_10dd7050:;
  /* 10dd7050 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7054 je 0x10dd7062 */
  if (C.zf) goto L_10dd7062;
  /* 10dd7056 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd705a je 0x10dd7062 */
  if (C.zf) goto L_10dd7062;
  /* 10dd705c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7060 jne 0x10dd708e */
  if (!C.zf) goto L_10dd708e;
L_10dd7062:;
  /* 10dd7062 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7065 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10dd7068 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10dd706b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd706e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10dd7075 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7079 jne 0x10dd708e */
  if (!C.zf) goto L_10dd708e;
  /* 10dd707b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd707e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10dd7081 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dd7084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7087 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10dd708e:;
  /* 10dd708e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7092 jne 0x10dd70d0 */
  if (!C.zf) goto L_10dd70d0;
  /* 10dd7094 mov eax, dword ptr [0x10dfdc78] */
  EAX = (r32((uint32_t)(0x10dfdc78)));
  /* 10dd7099 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd709c jmp 0x10dd70a7 */
  goto L_10dd70a7;
L_10dd709e:;
  /* 10dd709e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd70a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd70a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10dd70a7:;
  /* 10dd70a7 mov edx, dword ptr [0x10dfdc78] */
  EDX = (r32((uint32_t)(0x10dfdc78)));
  /* 10dd70ad add edx, dword ptr [0x10dfdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dfdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd70b3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd70b6 jge 0x10dd70ce */
  if ((C.sf==C.of)) goto L_10dd70ce;
  /* 10dd70b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd70bb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd70be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd70c1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10dd70c4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10dd70cc jmp 0x10dd709e */
  goto L_10dd709e;
L_10dd70ce:;
  /* 10dd70ce jmp 0x10dd70d9 */
  goto L_10dd70d9;
L_10dd70d0:;
  /* 10dd70d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd70d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10dd70d9:;
  /* 10dd70d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd70dd je 0x10dd70e9 */
  if (C.zf) goto L_10dd70e9;
  /* 10dd70df push 1 */
  push32((uint32_t)(0x1u));
  /* 10dd70e1 call 0x10dd7530 */
  push32(0x10dd70e6u); f_10dd7530();
  /* 10dd70e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd70e9:;
  /* 10dd70e9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd70ed jne 0x10dd7100 */
  if (!C.zf) goto L_10dd7100;
  /* 10dd70ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd70f2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10dd70f5 push edx */
  push32((uint32_t)(EDX));
  /* 10dd70f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10dd70f8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10dd70fbu);
  /* 10dd70fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd70fe jmp 0x10dd710a */
  goto L_10dd710a;
L_10dd7100:;
  /* 10dd7100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7103 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7104 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10dd7107u);
  /* 10dd7107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd710a:;
  /* 10dd710a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd710e je 0x10dd711c */
  if (C.zf) goto L_10dd711c;
  /* 10dd7110 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7114 je 0x10dd711c */
  if (C.zf) goto L_10dd711c;
  /* 10dd7116 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd711a jne 0x10dd7134 */
  if (!C.zf) goto L_10dd7134;
L_10dd711c:;
  /* 10dd711c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd711f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd7122 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10dd7125 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7129 jne 0x10dd7134 */
  if (!C.zf) goto L_10dd7134;
  /* 10dd712b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd712e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7131 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10dd7134:;
  /* 10dd7134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd7136:;
  /* 10dd7136 mov esp, ebp */
  ESP = (EBP);
  /* 10dd7138 pop ebp */
  EBP = (pop32());
  /* 10dd7139 ret  */
  ESPCHK(0x10dd6f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007170 @ 0x10dd7170 (91 bytes, 35 insns) */
void f_10dd7170(void) {
  FTRACE(0x10dd7170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7170 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7171 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7173 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7174 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7177 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd717a:;
  /* 10dd717a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd717d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10dd7180 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7183 je 0x10dd71a3 */
  if (C.zf) goto L_10dd71a3;
  /* 10dd7185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7188 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd718b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd718e mov ecx, dword ptr [0x10dfdc84] */
  ECX = (r32((uint32_t)(0x10dfdc84)));
  /* 10dd7194 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd7197 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd719a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd719c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd719f jae 0x10dd71a3 */
  if (!C.cf) goto L_10dd71a3;
  /* 10dd71a1 jmp 0x10dd717a */
  goto L_10dd717a;
L_10dd71a3:;
  /* 10dd71a3 mov eax, dword ptr [0x10dfdc84] */
  EAX = (r32((uint32_t)(0x10dfdc84)));
  /* 10dd71a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd71ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd71ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd71b0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd71b3 jae 0x10dd71c5 */
  if (!C.cf) goto L_10dd71c5;
  /* 10dd71b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd71b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10dd71bb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd71be jne 0x10dd71c5 */
  if (!C.zf) goto L_10dd71c5;
  /* 10dd71c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd71c3 jmp 0x10dd71c7 */
  goto L_10dd71c7;
L_10dd71c5:;
  /* 10dd71c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd71c7:;
  /* 10dd71c7 mov esp, ebp */
  ESP = (EBP);
  /* 10dd71c9 pop ebp */
  EBP = (pop32());
  /* 10dd71ca ret  */
  ESPCHK(0x10dd7170u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x10dd71d0 (13 bytes, 6 insns) */
void f_10dd71d0(void) {
  FTRACE(0x10dd71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd71d1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd71d3 call 0x10dd34d0 */
  push32(0x10dd71d8u); f_10dd34d0();
  /* 10dd71d8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd71db pop ebp */
  EBP = (pop32());
  /* 10dd71dc ret  */
  ESPCHK(0x10dd71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x10dd71e0 (13 bytes, 6 insns) */
void f_10dd71e0(void) {
  FTRACE(0x10dd71e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd71e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd71e1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd71e3 call 0x10dd34d0 */
  push32(0x10dd71e8u); f_10dd34d0();
  /* 10dd71e8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd71eb pop ebp */
  EBP = (pop32());
  /* 10dd71ec ret  */
  ESPCHK(0x10dd71e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x10dd71f0 (187 bytes, 54 insns) */
void f_10dd71f0(void) {
  FTRACE(0x10dd71f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd71f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd71f1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd71f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd71f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd71fd cmp dword ptr [0x10dff718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7204 jne 0x10dd7263 */
  if (!C.zf) goto L_10dd7263;
  /* 10dd7206 push 0x10dfa418 */
  push32((uint32_t)(0x10dfa418u));
  /* 10dd720b call dword ptr [0x10e022f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022f0))), 0x10dd7211u);
  /* 10dd7211 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd7214 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7218 je 0x10dd7237 */
  if (C.zf) goto L_10dd7237;
  /* 10dd721a push 0x10dfb01c */
  push32((uint32_t)(0x10dfb01cu));
  /* 10dd721f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7222 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7223 call dword ptr [0x10e022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022ec))), 0x10dd7229u);
  /* 10dd7229 mov dword ptr [0x10dff718], eax */
  w32((uint32_t)(0x10dff718), (EAX));
  /* 10dd722e cmp dword ptr [0x10dff718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7235 jne 0x10dd723b */
  if (!C.zf) goto L_10dd723b;
L_10dd7237:;
  /* 10dd7237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7239 jmp 0x10dd72a7 */
  goto L_10dd72a7;
L_10dd723b:;
  /* 10dd723b push 0x10dfb00c */
  push32((uint32_t)(0x10dfb00cu));
  /* 10dd7240 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7243 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7244 call dword ptr [0x10e022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022ec))), 0x10dd724au);
  /* 10dd724a mov dword ptr [0x10dff71c], eax */
  w32((uint32_t)(0x10dff71c), (EAX));
  /* 10dd724f push 0x10dfaff8 */
  push32((uint32_t)(0x10dfaff8u));
  /* 10dd7254 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7257 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7258 call dword ptr [0x10e022ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022ec))), 0x10dd725eu);
  /* 10dd725e mov dword ptr [0x10dff720], eax */
  w32((uint32_t)(0x10dff720), (EAX));
L_10dd7263:;
  /* 10dd7263 cmp dword ptr [0x10dff71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd726a je 0x10dd7275 */
  if (C.zf) goto L_10dd7275;
  /* 10dd726c call dword ptr [0x10dff71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff71c))), 0x10dd7272u);
  /* 10dd7272 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd7275:;
  /* 10dd7275 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7279 je 0x10dd7291 */
  if (C.zf) goto L_10dd7291;
  /* 10dd727b cmp dword ptr [0x10dff720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7282 je 0x10dd7291 */
  if (C.zf) goto L_10dd7291;
  /* 10dd7284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7287 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7288 call dword ptr [0x10dff720] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff720))), 0x10dd728eu);
  /* 10dd728e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd7291:;
  /* 10dd7291 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10dd7294 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7295 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7298 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd729c push eax */
  push32((uint32_t)(EAX));
  /* 10dd729d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd72a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd72a1 call dword ptr [0x10dff718] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dff718))), 0x10dd72a7u);
L_10dd72a7:;
  /* 10dd72a7 mov esp, ebp */
  ESP = (EBP);
  /* 10dd72a9 pop ebp */
  EBP = (pop32());
  /* 10dd72aa ret  */
  ESPCHK(0x10dd71f0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10dd72b0 (254 bytes, 109 insns) */
void f_10dd72b0(void) {
  FTRACE(0x10dd72b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd72b0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10dd72b4 push edi */
  push32((uint32_t)(EDI));
  /* 10dd72b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10dd72b7 je 0x10dd7333 */
  if (C.zf) goto L_10dd7333;
  /* 10dd72b9 push esi */
  push32((uint32_t)(ESI));
  /* 10dd72ba push ebx */
  push32((uint32_t)(EBX));
  /* 10dd72bb mov ebx, ecx */
  EBX = (ECX);
  /* 10dd72bd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10dd72c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10dd72c7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10dd72cb jne 0x10dd72d4 */
  if (!C.zf) goto L_10dd72d4;
  /* 10dd72cd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dd72d0 jne 0x10dd7341 */
  if (!C.zf) goto L_10dd7341;
  /* 10dd72d2 jmp 0x10dd72f5 */
  goto L_10dd72f5;
L_10dd72d4:;
  /* 10dd72d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10dd72d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10dd72d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dd72d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10dd72da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10dd72db je 0x10dd7302 */
  if (C.zf) goto L_10dd7302;
  /* 10dd72dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10dd72df je 0x10dd730a */
  if (C.zf) goto L_10dd730a;
  /* 10dd72e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10dd72e7 jne 0x10dd72d4 */
  if (!C.zf) goto L_10dd72d4;
  /* 10dd72e9 mov ebx, ecx */
  EBX = (ECX);
  /* 10dd72eb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dd72ee jne 0x10dd7341 */
  if (!C.zf) goto L_10dd7341;
L_10dd72f0:;
  /* 10dd72f0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10dd72f3 je 0x10dd7302 */
  if (C.zf) goto L_10dd7302;
L_10dd72f5:;
  /* 10dd72f5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10dd72f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10dd72f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dd72fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10dd72fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10dd72fd je 0x10dd732e */
  if (C.zf) goto L_10dd732e;
  /* 10dd72ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10dd7300 jne 0x10dd72f5 */
  if (!C.zf) goto L_10dd72f5;
L_10dd7302:;
  /* 10dd7302 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10dd7306 pop ebx */
  EBX = (pop32());
  /* 10dd7307 pop esi */
  ESI = (pop32());
  /* 10dd7308 pop edi */
  EDI = (pop32());
  /* 10dd7309 ret  */
  ESPCHK(0x10dd72b0u, _esp0);
  ESP += 4; return;
L_10dd730a:;
  /* 10dd730a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10dd7310 je 0x10dd7324 */
  if (C.zf) goto L_10dd7324;
L_10dd7312:;
  /* 10dd7312 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dd7314 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10dd7315 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10dd7316 je 0x10dd73a6 */
  if (C.zf) goto L_10dd73a6;
  /* 10dd731c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10dd7322 jne 0x10dd7312 */
  if (!C.zf) goto L_10dd7312;
L_10dd7324:;
  /* 10dd7324 mov ebx, ecx */
  EBX = (ECX);
  /* 10dd7326 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dd7329 jne 0x10dd7397 */
  if (!C.zf) goto L_10dd7397;
L_10dd732b:;
  /* 10dd732b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dd732d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10dd732e:;
  /* 10dd732e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10dd732f jne 0x10dd732b */
  if (!C.zf) goto L_10dd732b;
  /* 10dd7331 pop ebx */
  EBX = (pop32());
  /* 10dd7332 pop esi */
  ESI = (pop32());
L_10dd7333:;
  /* 10dd7333 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10dd7337 pop edi */
  EDI = (pop32());
  /* 10dd7338 ret  */
  ESPCHK(0x10dd72b0u, _esp0);
  ESP += 4; return;
L_10dd7339:;
  /* 10dd7339 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10dd733b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd733e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10dd733f je 0x10dd72f0 */
  if (C.zf) goto L_10dd72f0;
L_10dd7341:;
  /* 10dd7341 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10dd7346 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10dd7348 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd734a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd734d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd734f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10dd7351 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7354 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10dd7359 je 0x10dd7339 */
  if (C.zf) goto L_10dd7339;
  /* 10dd735b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10dd735d je 0x10dd738b */
  if (C.zf) goto L_10dd738b;
  /* 10dd735f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10dd7361 je 0x10dd7381 */
  if (C.zf) goto L_10dd7381;
  /* 10dd7363 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10dd7369 je 0x10dd7377 */
  if (C.zf) goto L_10dd7377;
  /* 10dd736b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10dd7371 jne 0x10dd7339 */
  if (!C.zf) goto L_10dd7339;
  /* 10dd7373 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10dd7375 jmp 0x10dd738f */
  goto L_10dd738f;
L_10dd7377:;
  /* 10dd7377 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd737d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10dd737f jmp 0x10dd738f */
  goto L_10dd738f;
L_10dd7381:;
  /* 10dd7381 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10dd7387 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10dd7389 jmp 0x10dd738f */
  goto L_10dd738f;
L_10dd738b:;
  /* 10dd738b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10dd738d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10dd738f:;
  /* 10dd738f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7394 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10dd7395 je 0x10dd73a1 */
  if (C.zf) goto L_10dd73a1;
L_10dd7397:;
  /* 10dd7397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10dd7399:;
  /* 10dd7399 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10dd739b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd739e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10dd739f jne 0x10dd7399 */
  if (!C.zf) goto L_10dd7399;
L_10dd73a1:;
  /* 10dd73a1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10dd73a4 jne 0x10dd732b */
  if (!C.zf) goto L_10dd732b;
L_10dd73a6:;
  /* 10dd73a6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10dd73aa pop ebx */
  EBX = (pop32());
  /* 10dd73ab pop esi */
  ESI = (pop32());
  /* 10dd73ac pop edi */
  EDI = (pop32());
  /* 10dd73ad ret  */
  ESPCHK(0x10dd72b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b0 @ 0x10dd73b0 (55 bytes, 16 insns) */
void f_10dd73b0(void) {
  FTRACE(0x10dd73b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd73b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd73b1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd73b3 mov eax, dword ptr [0x10dfdb84] */
  EAX = (r32((uint32_t)(0x10dfdb84)));
  /* 10dd73b8 push eax */
  push32((uint32_t)(EAX));
  /* 10dd73b9 call dword ptr [0x10e0236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0236c))), 0x10dd73bfu);
  /* 10dd73bf mov ecx, dword ptr [0x10dfdb74] */
  ECX = (r32((uint32_t)(0x10dfdb74)));
  /* 10dd73c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd73c6 call dword ptr [0x10e0236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0236c))), 0x10dd73ccu);
  /* 10dd73cc mov edx, dword ptr [0x10dfdb64] */
  EDX = (r32((uint32_t)(0x10dfdb64)));
  /* 10dd73d2 push edx */
  push32((uint32_t)(EDX));
  /* 10dd73d3 call dword ptr [0x10e0236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0236c))), 0x10dd73d9u);
  /* 10dd73d9 mov eax, dword ptr [0x10dfdb44] */
  EAX = (r32((uint32_t)(0x10dfdb44)));
  /* 10dd73de push eax */
  push32((uint32_t)(EAX));
  /* 10dd73df call dword ptr [0x10e0236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0236c))), 0x10dd73e5u);
  /* 10dd73e5 pop ebp */
  EBP = (pop32());
  /* 10dd73e6 ret  */
  ESPCHK(0x10dd73b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073f0 @ 0x10dd73f0 (159 bytes, 47 insns) */
void f_10dd73f0(void) {
  FTRACE(0x10dd73f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd73f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd73f1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd73f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd73f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd73fb jmp 0x10dd7406 */
  goto L_10dd7406;
L_10dd73fd:;
  /* 10dd73fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7400 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7403 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd7406:;
  /* 10dd7406 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd740a jge 0x10dd7459 */
  if ((C.sf==C.of)) goto L_10dd7459;
  /* 10dd740c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd740f cmp dword ptr [ecx*4 + 0x10dfdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10dfdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7417 je 0x10dd7457 */
  if (C.zf) goto L_10dd7457;
  /* 10dd7419 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd741d je 0x10dd7457 */
  if (C.zf) goto L_10dd7457;
  /* 10dd741f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7423 je 0x10dd7457 */
  if (C.zf) goto L_10dd7457;
  /* 10dd7425 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7429 je 0x10dd7457 */
  if (C.zf) goto L_10dd7457;
  /* 10dd742b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd742f je 0x10dd7457 */
  if (C.zf) goto L_10dd7457;
  /* 10dd7431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7434 mov eax, dword ptr [edx*4 + 0x10dfdb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dfdb40)));
  /* 10dd743b push eax */
  push32((uint32_t)(EAX));
  /* 10dd743c call dword ptr [0x10e02334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02334))), 0x10dd7442u);
  /* 10dd7442 push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd7444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7447 mov edx, dword ptr [ecx*4 + 0x10dfdb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dfdb40)));
  /* 10dd744e push edx */
  push32((uint32_t)(EDX));
  /* 10dd744f call 0x10dd4520 */
  push32(0x10dd7454u); f_10dd4520();
  /* 10dd7454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd7457:;
  /* 10dd7457 jmp 0x10dd73fd */
  goto L_10dd73fd;
L_10dd7459:;
  /* 10dd7459 mov eax, dword ptr [0x10dfdb64] */
  EAX = (r32((uint32_t)(0x10dfdb64)));
  /* 10dd745e push eax */
  push32((uint32_t)(EAX));
  /* 10dd745f call dword ptr [0x10e02334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02334))), 0x10dd7465u);
  /* 10dd7465 mov ecx, dword ptr [0x10dfdb74] */
  ECX = (r32((uint32_t)(0x10dfdb74)));
  /* 10dd746b push ecx */
  push32((uint32_t)(ECX));
  /* 10dd746c call dword ptr [0x10e02334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02334))), 0x10dd7472u);
  /* 10dd7472 mov edx, dword ptr [0x10dfdb84] */
  EDX = (r32((uint32_t)(0x10dfdb84)));
  /* 10dd7478 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7479 call dword ptr [0x10e02334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02334))), 0x10dd747fu);
  /* 10dd747f mov eax, dword ptr [0x10dfdb44] */
  EAX = (r32((uint32_t)(0x10dfdb44)));
  /* 10dd7484 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7485 call dword ptr [0x10e02334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02334))), 0x10dd748bu);
  /* 10dd748b mov esp, ebp */
  ESP = (EBP);
  /* 10dd748d pop ebp */
  EBP = (pop32());
  /* 10dd748e ret  */
  ESPCHK(0x10dd73f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x10dd7490 (151 bytes, 46 insns) */
void f_10dd7490(void) {
  FTRACE(0x10dd7490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7490 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7491 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7493 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7497 cmp dword ptr [eax*4 + 0x10dfdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10dfdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd749f jne 0x10dd7512 */
  if (!C.zf) goto L_10dd7512;
  /* 10dd74a1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10dd74a6 push 0x10dfb028 */
  push32((uint32_t)(0x10dfb028u));
  /* 10dd74ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd74ad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10dd74af call 0x10dd3a90 */
  push32(0x10dd74b4u); f_10dd3a90();
  /* 10dd74b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd74b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd74ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd74be jne 0x10dd74ca */
  if (!C.zf) goto L_10dd74ca;
  /* 10dd74c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10dd74c2 call 0x10dd2a00 */
  push32(0x10dd74c7u); f_10dd2a00();
  /* 10dd74c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd74ca:;
  /* 10dd74ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10dd74cc call 0x10dd7490 */
  push32(0x10dd74d1u); f_10dd7490();
  /* 10dd74d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd74d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd74d7 cmp dword ptr [ecx*4 + 0x10dfdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10dfdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd74df jne 0x10dd74fa */
  if (!C.zf) goto L_10dd74fa;
  /* 10dd74e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd74e4 push edx */
  push32((uint32_t)(EDX));
  /* 10dd74e5 call dword ptr [0x10e0236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0236c))), 0x10dd74ebu);
  /* 10dd74eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd74ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd74f1 mov dword ptr [eax*4 + 0x10dfdb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10dfdb40), (ECX));
  /* 10dd74f8 jmp 0x10dd7508 */
  goto L_10dd7508;
L_10dd74fa:;
  /* 10dd74fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10dd74fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd74ff push edx */
  push32((uint32_t)(EDX));
  /* 10dd7500 call 0x10dd4520 */
  push32(0x10dd7505u); f_10dd4520();
  /* 10dd7505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd7508:;
  /* 10dd7508 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10dd750a call 0x10dd7530 */
  push32(0x10dd750fu); f_10dd7530();
  /* 10dd750f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd7512:;
  /* 10dd7512 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7515 mov ecx, dword ptr [eax*4 + 0x10dfdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dfdb40)));
  /* 10dd751c push ecx */
  push32((uint32_t)(ECX));
  /* 10dd751d call dword ptr [0x10e02370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02370))), 0x10dd7523u);
  /* 10dd7523 mov esp, ebp */
  ESP = (EBP);
  /* 10dd7525 pop ebp */
  EBP = (pop32());
  /* 10dd7526 ret  */
  ESPCHK(0x10dd7490u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x10dd7530 (22 bytes, 8 insns) */
void f_10dd7530(void) {
  FTRACE(0x10dd7530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7530 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7531 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7536 mov ecx, dword ptr [eax*4 + 0x10dfdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dfdb40)));
  /* 10dd753d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd753e call dword ptr [0x10e0235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0235c))), 0x10dd7544u);
  /* 10dd7544 pop ebp */
  EBP = (pop32());
  /* 10dd7545 ret  */
  ESPCHK(0x10dd7530u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x10dd7550 (26 bytes, 10 insns) */
void f_10dd7550(void) {
  FTRACE(0x10dd7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7550 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7551 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7556 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7557 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd7559 call dword ptr [0x10e02374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02374))), 0x10dd755fu);
  /* 10dd755f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10dd7564 call dword ptr [0x10e022fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e022fc))), 0x10dd756au);
  /* 10dd756a pop ebp */
  EBP = (pop32());
  /* 10dd756b ret  */
  ESPCHK(0x10dd7550u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10dd7570 (446 bytes, 130 insns) */
void f_10dd7570(void) {
  FTRACE(0x10dd7570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7570 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7571 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7573 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7576 call 0x10dd34d0 */
  push32(0x10dd757bu); f_10dd34d0();
  /* 10dd757b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd757e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7581 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10dd7584 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7588 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7589 call 0x10dd7730 */
  push32(0x10dd758eu); f_10dd7730();
  /* 10dd758e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7591 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd7594 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7598 je 0x10dd75a3 */
  if (C.zf) goto L_10dd75a3;
  /* 10dd759a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd759d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd75a1 jne 0x10dd75b2 */
  if (!C.zf) goto L_10dd75b2;
L_10dd75a3:;
  /* 10dd75a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd75a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd75a7 call dword ptr [0x10e02378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02378))), 0x10dd75adu);
  /* 10dd75ad jmp 0x10dd772a */
  goto L_10dd772a;
L_10dd75b2:;
  /* 10dd75b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd75b5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd75b9 jne 0x10dd75cf */
  if (!C.zf) goto L_10dd75cf;
  /* 10dd75bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd75be mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10dd75c5 mov eax, 1 */
  EAX = (0x1u);
  /* 10dd75ca jmp 0x10dd772a */
  goto L_10dd772a;
L_10dd75cf:;
  /* 10dd75cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd75d2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd75d6 jne 0x10dd75e0 */
  if (!C.zf) goto L_10dd75e0;
  /* 10dd75d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10dd75db jmp 0x10dd772a */
  goto L_10dd772a;
L_10dd75e0:;
  /* 10dd75e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd75e3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10dd75e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd75e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd75ec mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10dd75ef mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10dd75f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd75f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd75f8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10dd75fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd75fe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7602 jne 0x10dd7707 */
  if (!C.zf) goto L_10dd7707;
  /* 10dd7608 mov eax, dword ptr [0x10dfdc78] */
  EAX = (r32((uint32_t)(0x10dfdc78)));
  /* 10dd760d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10dd7610 jmp 0x10dd761b */
  goto L_10dd761b;
L_10dd7612:;
  /* 10dd7612 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd7615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7618 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10dd761b:;
  /* 10dd761b mov edx, dword ptr [0x10dfdc78] */
  EDX = (r32((uint32_t)(0x10dfdc78)));
  /* 10dd7621 add edx, dword ptr [0x10dfdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dfdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7627 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd762a jge 0x10dd7642 */
  if ((C.sf==C.of)) goto L_10dd7642;
  /* 10dd762c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd762f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd7632 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7635 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10dd7638 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10dd7640 jmp 0x10dd7612 */
  goto L_10dd7612;
L_10dd7642:;
  /* 10dd7642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7645 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10dd7648 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10dd764b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd764e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7654 jne 0x10dd7665 */
  if (!C.zf) goto L_10dd7665;
  /* 10dd7656 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7659 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10dd7660 jmp 0x10dd76ed */
  goto L_10dd76ed;
L_10dd7665:;
  /* 10dd7665 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd7668 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd766e jne 0x10dd767c */
  if (!C.zf) goto L_10dd767c;
  /* 10dd7670 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7673 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10dd767a jmp 0x10dd76ed */
  goto L_10dd76ed;
L_10dd767c:;
  /* 10dd767c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd767f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7685 jne 0x10dd7693 */
  if (!C.zf) goto L_10dd7693;
  /* 10dd7687 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd768a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10dd7691 jmp 0x10dd76ed */
  goto L_10dd76ed;
L_10dd7693:;
  /* 10dd7693 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd7696 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd769c jne 0x10dd76aa */
  if (!C.zf) goto L_10dd76aa;
  /* 10dd769e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd76a1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10dd76a8 jmp 0x10dd76ed */
  goto L_10dd76ed;
L_10dd76aa:;
  /* 10dd76aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd76ad cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd76b3 jne 0x10dd76c1 */
  if (!C.zf) goto L_10dd76c1;
  /* 10dd76b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd76b8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10dd76bf jmp 0x10dd76ed */
  goto L_10dd76ed;
L_10dd76c1:;
  /* 10dd76c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd76c4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd76ca jne 0x10dd76d8 */
  if (!C.zf) goto L_10dd76d8;
  /* 10dd76cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd76cf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10dd76d6 jmp 0x10dd76ed */
  goto L_10dd76ed;
L_10dd76d8:;
  /* 10dd76d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd76db cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd76e1 jne 0x10dd76ed */
  if (!C.zf) goto L_10dd76ed;
  /* 10dd76e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd76e6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10dd76ed:;
  /* 10dd76ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd76f0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10dd76f3 push edx */
  push32((uint32_t)(EDX));
  /* 10dd76f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10dd76f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10dd76f9u);
  /* 10dd76f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd76fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd76ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd7702 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10dd7705 jmp 0x10dd771e */
  goto L_10dd771e;
L_10dd7707:;
  /* 10dd7707 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd770a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10dd7711 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd7714 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10dd7717 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7718 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10dd771bu);
  /* 10dd771b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd771e:;
  /* 10dd771e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7721 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10dd7724 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10dd7727 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10dd772a:;
  /* 10dd772a mov esp, ebp */
  ESP = (EBP);
  /* 10dd772c pop ebp */
  EBP = (pop32());
  /* 10dd772d ret  */
  ESPCHK(0x10dd7570u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x10dd7730 (89 bytes, 35 insns) */
void f_10dd7730(void) {
  FTRACE(0x10dd7730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7730 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7731 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7733 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7734 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7737 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10dd773a:;
  /* 10dd773a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd773d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10dd773f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7742 je 0x10dd7762 */
  if (C.zf) goto L_10dd7762;
  /* 10dd7744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7747 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd774a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd774d mov ecx, dword ptr [0x10dfdc84] */
  ECX = (r32((uint32_t)(0x10dfdc84)));
  /* 10dd7753 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd7756 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7759 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd775b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd775e jae 0x10dd7762 */
  if (!C.cf) goto L_10dd7762;
  /* 10dd7760 jmp 0x10dd773a */
  goto L_10dd773a;
L_10dd7762:;
  /* 10dd7762 mov eax, dword ptr [0x10dfdc84] */
  EAX = (r32((uint32_t)(0x10dfdc84)));
  /* 10dd7767 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10dd776a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd776d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd776f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7772 jae 0x10dd777e */
  if (!C.cf) goto L_10dd777e;
  /* 10dd7774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7777 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10dd7779 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd777c je 0x10dd7782 */
  if (C.zf) goto L_10dd7782;
L_10dd777e:;
  /* 10dd777e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7780 jmp 0x10dd7785 */
  goto L_10dd7785;
L_10dd7782:;
  /* 10dd7782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10dd7785:;
  /* 10dd7785 mov esp, ebp */
  ESP = (EBP);
  /* 10dd7787 pop ebp */
  EBP = (pop32());
  /* 10dd7788 ret  */
  ESPCHK(0x10dd7730u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10dd7790 (48 bytes, 17 insns) */
void f_10dd7790(void) {
  FTRACE(0x10dd7790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7790 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7791 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7793 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7794 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7796 call 0x10dd7490 */
  push32(0x10dd779bu); f_10dd7490();
  /* 10dd779b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd779e mov eax, dword ptr [0x10dff78c] */
  EAX = (r32((uint32_t)(0x10dff78c)));
  /* 10dd77a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd77a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd77a9 mov dword ptr [0x10dff78c], ecx */
  w32((uint32_t)(0x10dff78c), (ECX));
  /* 10dd77af push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd77b1 call 0x10dd7530 */
  push32(0x10dd77b6u); f_10dd7530();
  /* 10dd77b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd77b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd77bc mov esp, ebp */
  ESP = (EBP);
  /* 10dd77be pop ebp */
  EBP = (pop32());
  /* 10dd77bf ret  */
  ESPCHK(0x10dd7790u, _esp0);
  ESP += 4; return;
}

/* FUN_100077c0 @ 0x10dd77c0 (10 bytes, 5 insns) */
void f_10dd77c0(void) {
  FTRACE(0x10dd77c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd77c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd77c1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd77c3 mov eax, dword ptr [0x10dff78c] */
  EAX = (r32((uint32_t)(0x10dff78c)));
  /* 10dd77c8 pop ebp */
  EBP = (pop32());
  /* 10dd77c9 ret  */
  ESPCHK(0x10dd77c0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10dd77d0 (45 bytes, 19 insns) */
void f_10dd77d0(void) {
  FTRACE(0x10dd77d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd77d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd77d1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd77d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd77d4 mov eax, dword ptr [0x10dff78c] */
  EAX = (r32((uint32_t)(0x10dff78c)));
  /* 10dd77d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd77dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd77e0 je 0x10dd77f0 */
  if (C.zf) goto L_10dd77f0;
  /* 10dd77e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd77e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd77e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10dd77e9u);
  /* 10dd77e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd77ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd77ee jne 0x10dd77f4 */
  if (!C.zf) goto L_10dd77f4;
L_10dd77f0:;
  /* 10dd77f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd77f2 jmp 0x10dd77f9 */
  goto L_10dd77f9;
L_10dd77f4:;
  /* 10dd77f4 mov eax, 1 */
  EAX = (0x1u);
L_10dd77f9:;
  /* 10dd77f9 mov esp, ebp */
  ESP = (EBP);
  /* 10dd77fb pop ebp */
  EBP = (pop32());
  /* 10dd77fc ret  */
  ESPCHK(0x10dd77d0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10dd7800 (88 bytes, 40 insns) */
void f_10dd7800(void) {
  FTRACE(0x10dd7800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7800 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10dd7804 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10dd7808 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd780a je 0x10dd7853 */
  if (C.zf) goto L_10dd7853;
  /* 10dd780c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd780e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10dd7812 push edi */
  push32((uint32_t)(EDI));
  /* 10dd7813 mov edi, ecx */
  EDI = (ECX);
  /* 10dd7815 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7818 jb 0x10dd7847 */
  if (C.cf) goto L_10dd7847;
  /* 10dd781a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10dd781c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd781f je 0x10dd7829 */
  if (C.zf) goto L_10dd7829;
  /* 10dd7821 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10dd7823:;
  /* 10dd7823 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dd7825 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10dd7826 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10dd7827 jne 0x10dd7823 */
  if (!C.zf) goto L_10dd7823;
L_10dd7829:;
  /* 10dd7829 mov ecx, eax */
  ECX = (EAX);
  /* 10dd782b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10dd782e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7830 mov ecx, eax */
  ECX = (EAX);
  /* 10dd7832 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10dd7835 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7837 mov ecx, edx */
  ECX = (EDX);
  /* 10dd7839 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd783c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10dd783f je 0x10dd7847 */
  if (C.zf) goto L_10dd7847;
  /* 10dd7841 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10dd7843 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10dd7845 je 0x10dd784d */
  if (C.zf) goto L_10dd784d;
L_10dd7847:;
  /* 10dd7847 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10dd7849 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10dd784a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10dd784b jne 0x10dd7847 */
  if (!C.zf) goto L_10dd7847;
L_10dd784d:;
  /* 10dd784d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10dd7851 pop edi */
  EDI = (pop32());
  /* 10dd7852 ret  */
  ESPCHK(0x10dd7800u, _esp0);
  ESP += 4; return;
L_10dd7853:;
  /* 10dd7853 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10dd7857 ret  */
  ESPCHK(0x10dd7800u, _esp0);
  ESP += 4; return;
}

/* FUN_10007860 @ 0x10dd7860 (23 bytes, 10 insns) */
void f_10dd7860(void) {
  FTRACE(0x10dd7860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7860 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7861 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7863 mov eax, dword ptr [0x10dff788] */
  EAX = (r32((uint32_t)(0x10dff788)));
  /* 10dd7868 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd786c push ecx */
  push32((uint32_t)(ECX));
  /* 10dd786d call 0x10dd7880 */
  push32(0x10dd7872u); f_10dd7880();
  /* 10dd7872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7875 pop ebp */
  EBP = (pop32());
  /* 10dd7876 ret  */
  ESPCHK(0x10dd7860u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10dd7880 (87 bytes, 34 insns) */
void f_10dd7880(void) {
  FTRACE(0x10dd7880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7880 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7881 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7883 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7884 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7888 jbe 0x10dd788e */
  if ((C.cf||C.zf)) goto L_10dd788e;
  /* 10dd788a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd788c jmp 0x10dd78d3 */
  goto L_10dd78d3;
L_10dd788e:;
  /* 10dd788e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7892 ja 0x10dd78a5 */
  if ((!C.cf&&!C.zf)) goto L_10dd78a5;
  /* 10dd7894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7897 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7898 call 0x10dd78e0 */
  push32(0x10dd789du); f_10dd78e0();
  /* 10dd789d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd78a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd78a3 jmp 0x10dd78ac */
  goto L_10dd78ac;
L_10dd78a5:;
  /* 10dd78a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10dd78ac:;
  /* 10dd78ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd78b0 jne 0x10dd78b8 */
  if (!C.zf) goto L_10dd78b8;
  /* 10dd78b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd78b6 jne 0x10dd78bd */
  if (!C.zf) goto L_10dd78bd;
L_10dd78b8:;
  /* 10dd78b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd78bb jmp 0x10dd78d3 */
  goto L_10dd78d3;
L_10dd78bd:;
  /* 10dd78bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd78c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd78c1 call 0x10dd77d0 */
  push32(0x10dd78c6u); f_10dd77d0();
  /* 10dd78c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd78c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd78cb jne 0x10dd78d1 */
  if (!C.zf) goto L_10dd78d1;
  /* 10dd78cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd78cf jmp 0x10dd78d3 */
  goto L_10dd78d3;
L_10dd78d1:;
  /* 10dd78d1 jmp 0x10dd788e */
  goto L_10dd788e;
L_10dd78d3:;
  /* 10dd78d3 mov esp, ebp */
  ESP = (EBP);
  /* 10dd78d5 pop ebp */
  EBP = (pop32());
  /* 10dd78d6 ret  */
  ESPCHK(0x10dd7880u, _esp0);
  ESP += 4; return;
}

/* FUN_100078e0 @ 0x10dd78e0 (109 bytes, 37 insns) */
void f_10dd78e0(void) {
  FTRACE(0x10dd78e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd78e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd78e1 mov ebp, esp */
  EBP = (ESP);
  /* 10dd78e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd78e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd78e7 cmp eax, dword ptr [0x10dfdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd78ed ja 0x10dd791d */
  if ((!C.cf&&!C.zf)) goto L_10dd791d;
  /* 10dd78ef push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd78f1 call 0x10dd7490 */
  push32(0x10dd78f6u); f_10dd7490();
  /* 10dd78f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd78f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd78fc push ecx */
  push32((uint32_t)(ECX));
  /* 10dd78fd call 0x10dd8420 */
  push32(0x10dd7902u); f_10dd8420();
  /* 10dd7902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd7908 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd790a call 0x10dd7530 */
  push32(0x10dd790fu); f_10dd7530();
  /* 10dd790f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7912 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7916 je 0x10dd791d */
  if (C.zf) goto L_10dd791d;
  /* 10dd7918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd791b jmp 0x10dd7949 */
  goto L_10dd7949;
L_10dd791d:;
  /* 10dd791d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7921 jne 0x10dd792a */
  if (!C.zf) goto L_10dd792a;
  /* 10dd7923 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10dd792a:;
  /* 10dd792a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd792d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7930 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd7933 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10dd7936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7939 push eax */
  push32((uint32_t)(EAX));
  /* 10dd793a push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd793c mov ecx, dword ptr [0x10e00f4c] */
  ECX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd7942 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7943 call dword ptr [0x10e0237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0237c))), 0x10dd7949u);
L_10dd7949:;
  /* 10dd7949 mov esp, ebp */
  ESP = (EBP);
  /* 10dd794b pop ebp */
  EBP = (pop32());
  /* 10dd794c ret  */
  ESPCHK(0x10dd78e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x10dd7950 (10 bytes, 5 insns) */
void f_10dd7950(void) {
  FTRACE(0x10dd7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7950 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7951 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7953 mov eax, 1 */
  EAX = (0x1u);
  /* 10dd7958 pop ebp */
  EBP = (pop32());
  /* 10dd7959 ret  */
  ESPCHK(0x10dd7950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007960 @ 0x10dd7960 (173 bytes, 59 insns) */
void f_10dd7960(void) {
  FTRACE(0x10dd7960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7960 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7961 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7966 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd796a jbe 0x10dd7973 */
  if ((C.cf||C.zf)) goto L_10dd7973;
  /* 10dd796c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd796e jmp 0x10dd7a09 */
  goto L_10dd7a09;
L_10dd7973:;
  /* 10dd7973 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7975 call 0x10dd7490 */
  push32(0x10dd797au); f_10dd7490();
  /* 10dd797a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd797d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7980 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7981 call 0x10dd7d90 */
  push32(0x10dd7986u); f_10dd7d90();
  /* 10dd7986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7989 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd798c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7990 je 0x10dd79d1 */
  if (C.zf) goto L_10dd79d1;
  /* 10dd7992 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10dd7999 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd799c cmp ecx, dword ptr [0x10dfdc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dfdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd79a2 ja 0x10dd79c2 */
  if ((!C.cf&&!C.zf)) goto L_10dd79c2;
  /* 10dd79a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd79a7 push edx */
  push32((uint32_t)(EDX));
  /* 10dd79a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd79ab push eax */
  push32((uint32_t)(EAX));
  /* 10dd79ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd79af push ecx */
  push32((uint32_t)(ECX));
  /* 10dd79b0 call 0x10dd8c60 */
  push32(0x10dd79b5u); f_10dd8c60();
  /* 10dd79b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd79b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd79ba je 0x10dd79c2 */
  if (C.zf) goto L_10dd79c2;
  /* 10dd79bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd79bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10dd79c2:;
  /* 10dd79c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd79c4 call 0x10dd7530 */
  push32(0x10dd79c9u); f_10dd7530();
  /* 10dd79c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd79cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd79cf jmp 0x10dd7a09 */
  goto L_10dd7a09;
L_10dd79d1:;
  /* 10dd79d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd79d3 call 0x10dd7530 */
  push32(0x10dd79d8u); f_10dd7530();
  /* 10dd79d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd79db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd79df jne 0x10dd79e8 */
  if (!C.zf) goto L_10dd79e8;
  /* 10dd79e1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10dd79e8:;
  /* 10dd79e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd79eb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd79ee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10dd79f0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10dd79f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd79f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd79f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd79fa push edx */
  push32((uint32_t)(EDX));
  /* 10dd79fb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10dd79fd mov eax, dword ptr [0x10e00f4c] */
  EAX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd7a02 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7a03 call dword ptr [0x10e02380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02380))), 0x10dd7a09u);
L_10dd7a09:;
  /* 10dd7a09 mov esp, ebp */
  ESP = (EBP);
  /* 10dd7a0b pop ebp */
  EBP = (pop32());
  /* 10dd7a0c ret  */
  ESPCHK(0x10dd7960u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x10dd7a10 (490 bytes, 165 insns) */
void f_10dd7a10(void) {
  FTRACE(0x10dd7a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7a11 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7a16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7a1a jne 0x10dd7a2d */
  if (!C.zf) goto L_10dd7a2d;
  /* 10dd7a1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7a1f push eax */
  push32((uint32_t)(EAX));
  /* 10dd7a20 call 0x10dd7860 */
  push32(0x10dd7a25u); f_10dd7860();
  /* 10dd7a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7a28 jmp 0x10dd7bf6 */
  goto L_10dd7bf6;
L_10dd7a2d:;
  /* 10dd7a2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7a31 jne 0x10dd7a46 */
  if (!C.zf) goto L_10dd7a46;
  /* 10dd7a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7a36 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7a37 call 0x10dd7c00 */
  push32(0x10dd7a3cu); f_10dd7c00();
  /* 10dd7a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7a3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7a41 jmp 0x10dd7bf6 */
  goto L_10dd7bf6;
L_10dd7a46:;
  /* 10dd7a46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10dd7a4d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7a51 ja 0x10dd7bc9 */
  if ((!C.cf&&!C.zf)) goto L_10dd7bc9;
  /* 10dd7a57 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7a59 call 0x10dd7490 */
  push32(0x10dd7a5eu); f_10dd7490();
  /* 10dd7a5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7a64 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7a65 call 0x10dd7d90 */
  push32(0x10dd7a6au); f_10dd7d90();
  /* 10dd7a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7a6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10dd7a70 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7a74 je 0x10dd7b8c */
  if (C.zf) goto L_10dd7b8c;
  /* 10dd7a7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7a7d cmp eax, dword ptr [0x10dfdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dfdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7a83 ja 0x10dd7b00 */
  if ((!C.cf&&!C.zf)) goto L_10dd7b00;
  /* 10dd7a85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7a88 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7a89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7a8c push edx */
  push32((uint32_t)(EDX));
  /* 10dd7a8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd7a90 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7a91 call 0x10dd8c60 */
  push32(0x10dd7a96u); f_10dd8c60();
  /* 10dd7a96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd7a9b je 0x10dd7aa5 */
  if (C.zf) goto L_10dd7aa5;
  /* 10dd7a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7aa0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10dd7aa3 jmp 0x10dd7b00 */
  goto L_10dd7b00;
L_10dd7aa5:;
  /* 10dd7aa5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7aa8 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7aa9 call 0x10dd8420 */
  push32(0x10dd7aaeu); f_10dd8420();
  /* 10dd7aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7ab1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd7ab4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7ab8 je 0x10dd7b00 */
  if (C.zf) goto L_10dd7b00;
  /* 10dd7aba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7abd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10dd7ac0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7ac3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10dd7ac6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7ac9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7acc jae 0x10dd7ad6 */
  if (!C.cf) goto L_10dd7ad6;
  /* 10dd7ace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7ad1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10dd7ad4 jmp 0x10dd7adc */
  goto L_10dd7adc;
L_10dd7ad6:;
  /* 10dd7ad6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7ad9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10dd7adc:;
  /* 10dd7adc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10dd7adf push edx */
  push32((uint32_t)(EDX));
  /* 10dd7ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7ae3 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7ae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7ae8 call 0x10dda370 */
  push32(0x10dd7aedu); f_10dda370();
  /* 10dd7aed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7af0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7af3 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7af4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd7af7 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7af8 call 0x10dd7e50 */
  push32(0x10dd7afdu); f_10dd7e50();
  /* 10dd7afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd7b00:;
  /* 10dd7b00 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7b04 jne 0x10dd7b80 */
  if (!C.zf) goto L_10dd7b80;
  /* 10dd7b06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7b0a jne 0x10dd7b13 */
  if (!C.zf) goto L_10dd7b13;
  /* 10dd7b0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10dd7b13:;
  /* 10dd7b13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7b16 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7b19 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10dd7b1c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10dd7b1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7b22 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd7b25 mov eax, dword ptr [0x10e00f4c] */
  EAX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd7b2a push eax */
  push32((uint32_t)(EAX));
  /* 10dd7b2b call dword ptr [0x10e0237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e0237c))), 0x10dd7b31u);
  /* 10dd7b31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10dd7b34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7b38 je 0x10dd7b80 */
  if (C.zf) goto L_10dd7b80;
  /* 10dd7b3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7b3d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10dd7b40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10dd7b43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10dd7b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7b49 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7b4c jae 0x10dd7b56 */
  if (!C.cf) goto L_10dd7b56;
  /* 10dd7b4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7b51 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10dd7b54 jmp 0x10dd7b5c */
  goto L_10dd7b5c;
L_10dd7b56:;
  /* 10dd7b56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7b59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10dd7b5c:;
  /* 10dd7b5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10dd7b5f push eax */
  push32((uint32_t)(EAX));
  /* 10dd7b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7b64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7b67 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7b68 call 0x10dda370 */
  push32(0x10dd7b6du); f_10dda370();
  /* 10dd7b6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7b73 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7b74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10dd7b77 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7b78 call 0x10dd7e50 */
  push32(0x10dd7b7du); f_10dd7e50();
  /* 10dd7b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10dd7b80:;
  /* 10dd7b80 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7b82 call 0x10dd7530 */
  push32(0x10dd7b87u); f_10dd7530();
  /* 10dd7b87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7b8a jmp 0x10dd7bc9 */
  goto L_10dd7bc9;
L_10dd7b8c:;
  /* 10dd7b8c push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7b8e call 0x10dd7530 */
  push32(0x10dd7b93u); f_10dd7530();
  /* 10dd7b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7b96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7b9a jne 0x10dd7ba3 */
  if (!C.zf) goto L_10dd7ba3;
  /* 10dd7b9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10dd7ba3:;
  /* 10dd7ba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7ba6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7ba9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10dd7bac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10dd7baf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7bb2 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7bb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd7bb9 mov edx, dword ptr [0x10e00f4c] */
  EDX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd7bbf push edx */
  push32((uint32_t)(EDX));
  /* 10dd7bc0 call dword ptr [0x10e02380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02380))), 0x10dd7bc6u);
  /* 10dd7bc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10dd7bc9:;
  /* 10dd7bc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7bcd jne 0x10dd7bd8 */
  if (!C.zf) goto L_10dd7bd8;
  /* 10dd7bcf cmp dword ptr [0x10dff788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dff788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7bd6 jne 0x10dd7bdd */
  if (!C.zf) goto L_10dd7bdd;
L_10dd7bd8:;
  /* 10dd7bd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10dd7bdb jmp 0x10dd7bf6 */
  goto L_10dd7bf6;
L_10dd7bdd:;
  /* 10dd7bdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10dd7be0 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7be1 call 0x10dd77d0 */
  push32(0x10dd7be6u); f_10dd77d0();
  /* 10dd7be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10dd7beb jne 0x10dd7bf1 */
  if (!C.zf) goto L_10dd7bf1;
  /* 10dd7bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10dd7bef jmp 0x10dd7bf6 */
  goto L_10dd7bf6;
L_10dd7bf1:;
  /* 10dd7bf1 jmp 0x10dd7a46 */
  goto L_10dd7a46;
L_10dd7bf6:;
  /* 10dd7bf6 mov esp, ebp */
  ESP = (EBP);
  /* 10dd7bf8 pop ebp */
  EBP = (pop32());
  /* 10dd7bf9 ret  */
  ESPCHK(0x10dd7a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x10dd7c00 (104 bytes, 38 insns) */
void f_10dd7c00(void) {
  FTRACE(0x10dd7c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10dd7c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10dd7c01 mov ebp, esp */
  EBP = (ESP);
  /* 10dd7c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7c04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7c08 jne 0x10dd7c0c */
  if (!C.zf) goto L_10dd7c0c;
  /* 10dd7c0a jmp 0x10dd7c64 */
  goto L_10dd7c64;
L_10dd7c0c:;
  /* 10dd7c0c push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7c0e call 0x10dd7490 */
  push32(0x10dd7c13u); f_10dd7490();
  /* 10dd7c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7c19 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7c1a call 0x10dd7d90 */
  push32(0x10dd7c1fu); f_10dd7d90();
  /* 10dd7c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7c22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10dd7c25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10dd7c29 je 0x10dd7c47 */
  if (C.zf) goto L_10dd7c47;
  /* 10dd7c2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7c2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10dd7c32 push edx */
  push32((uint32_t)(EDX));
  /* 10dd7c33 call 0x10dd7e50 */
  push32(0x10dd7c38u); f_10dd7e50();
  /* 10dd7c38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7c3b push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7c3d call 0x10dd7530 */
  push32(0x10dd7c42u); f_10dd7530();
  /* 10dd7c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7c45 jmp 0x10dd7c64 */
  goto L_10dd7c64;
L_10dd7c47:;
  /* 10dd7c47 push 9 */
  push32((uint32_t)(0x9u));
  /* 10dd7c49 call 0x10dd7530 */
  push32(0x10dd7c4eu); f_10dd7530();
  /* 10dd7c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10dd7c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10dd7c54 push eax */
  push32((uint32_t)(EAX));
  /* 10dd7c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10dd7c57 mov ecx, dword ptr [0x10e00f4c] */
  ECX = (r32((uint32_t)(0x10e00f4c)));
  /* 10dd7c5d push ecx */
  push32((uint32_t)(ECX));
  /* 10dd7c5e call dword ptr [0x10e02360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e02360))), 0x10dd7c64u);
L_10dd7c64:;
  /* 10dd7c64 mov esp, ebp */
  ESP = (EBP);
  /* 10dd7c66 pop ebp */
  EBP = (pop32());
  /* 10dd7c67 ret  */
  ESPCHK(0x10dd7c00u, _esp0);
  ESP += 4; return;
}

