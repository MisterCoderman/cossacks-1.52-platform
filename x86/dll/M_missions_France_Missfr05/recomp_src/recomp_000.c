#include "recomp.h"

/* thunk_FUN_10001f10 @ 0x106a1005 (5 bytes, 1 insns) */
void f_106a1005(void) {
  FTRACE(0x106a1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a1005 jmp 0x106a1f10 */
  f_106a1f10(); return;
}

/* OnInit @ 0x106a100a (5 bytes, 1 insns) */
void f_106a100a(void) {
  FTRACE(0x106a100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a100a jmp 0x106a1090 */
  f_106a1090(); return;
}

/* thunk_FUN_10001030 @ 0x106a100f (5 bytes, 1 insns) */
void f_106a100f(void) {
  FTRACE(0x106a100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a100f jmp 0x106a1030 */
  f_106a1030(); return;
}

/* ProcessScenary @ 0x106a1014 (5 bytes, 1 insns) */
void f_106a1014(void) {
  FTRACE(0x106a1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a1014 jmp 0x106a1330 */
  f_106a1330(); return;
}

/* FUN_10001030 @ 0x106a1030 (67 bytes, 26 insns) */
void f_106a1030(void) {
  FTRACE(0x106a1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a1030 push ebp */
  push32((uint32_t)(EBP));
  /* 106a1031 mov ebp, esp */
  EBP = (ESP);
  /* 106a1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a1036 push ebx */
  push32((uint32_t)(EBX));
  /* 106a1037 push esi */
  push32((uint32_t)(ESI));
  /* 106a1038 push edi */
  push32((uint32_t)(EDI));
  /* 106a1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 106a103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 106a1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106a1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106a1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1052 je 0x106a1056 */
  if (C.zf) goto L_106a1056;
  /* 106a1054 jmp 0x106a105b */
  goto L_106a105b;
L_106a1056:;
  /* 106a1056 call 0x106a100a */
  push32(0x106a105bu); f_106a100a();
L_106a105b:;
  /* 106a105b mov eax, 1 */
  EAX = (0x1u);
  /* 106a1060 pop edi */
  EDI = (pop32());
  /* 106a1061 pop esi */
  ESI = (pop32());
  /* 106a1062 pop ebx */
  EBX = (pop32());
  /* 106a1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1068 call 0x106a1ff0 */
  push32(0x106a106du); f_106a1ff0();
  /* 106a106d mov esp, ebp */
  ESP = (EBP);
  /* 106a106f pop ebp */
  EBP = (pop32());
  /* 106a1070 ret 0xc */
  ESPCHK(0x106a1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x106a1090 (536 bytes, 145 insns) */
void f_106a1090(void) {
  FTRACE(0x106a1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a1090 push ebp */
  push32((uint32_t)(EBP));
  /* 106a1091 mov ebp, esp */
  EBP = (ESP);
  /* 106a1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a1096 push ebx */
  push32((uint32_t)(EBX));
  /* 106a1097 push esi */
  push32((uint32_t)(ESI));
  /* 106a1098 push edi */
  push32((uint32_t)(EDI));
  /* 106a1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106a109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106a10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106a10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106a10a8 mov esi, esp */
  ESI = (ESP);
  /* 106a10aa push 0x106ca0b0 */
  push32((uint32_t)(0x106ca0b0u));
  /* 106a10af push 0x106cf418 */
  push32((uint32_t)(0x106cf418u));
  /* 106a10b4 call dword ptr [0x106d1420] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1420))), 0x106a10bau);
  /* 106a10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a10bf call 0x106a1ff0 */
  push32(0x106a10c4u); f_106a1ff0();
  /* 106a10c4 mov esi, esp */
  ESI = (ESP);
  /* 106a10c6 push 0x106ca0a8 */
  push32((uint32_t)(0x106ca0a8u));
  /* 106a10cb push 0x106cf420 */
  push32((uint32_t)(0x106cf420u));
  /* 106a10d0 call dword ptr [0x106d1420] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1420))), 0x106a10d6u);
  /* 106a10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a10db call 0x106a1ff0 */
  push32(0x106a10e0u); f_106a1ff0();
  /* 106a10e0 mov esi, esp */
  ESI = (ESP);
  /* 106a10e2 push 0x106ca0a0 */
  push32((uint32_t)(0x106ca0a0u));
  /* 106a10e7 push 0x106cf428 */
  push32((uint32_t)(0x106cf428u));
  /* 106a10ec call dword ptr [0x106d1420] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1420))), 0x106a10f2u);
  /* 106a10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a10f7 call 0x106a1ff0 */
  push32(0x106a10fcu); f_106a1ff0();
  /* 106a10fc mov esi, esp */
  ESI = (ESP);
  /* 106a10fe push 0x106ca098 */
  push32((uint32_t)(0x106ca098u));
  /* 106a1103 push 0x106cf430 */
  push32((uint32_t)(0x106cf430u));
  /* 106a1108 call dword ptr [0x106d1420] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1420))), 0x106a110eu);
  /* 106a110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1113 call 0x106a1ff0 */
  push32(0x106a1118u); f_106a1ff0();
  /* 106a1118 mov esi, esp */
  ESI = (ESP);
  /* 106a111a push 0x106ca090 */
  push32((uint32_t)(0x106ca090u));
  /* 106a111f push 0x106cf3e0 */
  push32((uint32_t)(0x106cf3e0u));
  /* 106a1124 call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a112au);
  /* 106a112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a112f call 0x106a1ff0 */
  push32(0x106a1134u); f_106a1ff0();
  /* 106a1134 mov esi, esp */
  ESI = (ESP);
  /* 106a1136 push 0x106ca088 */
  push32((uint32_t)(0x106ca088u));
  /* 106a113b push 0x106cf3f0 */
  push32((uint32_t)(0x106cf3f0u));
  /* 106a1140 call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a1146u);
  /* 106a1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a114b call 0x106a1ff0 */
  push32(0x106a1150u); f_106a1ff0();
  /* 106a1150 mov esi, esp */
  ESI = (ESP);
  /* 106a1152 push 0x106ca080 */
  push32((uint32_t)(0x106ca080u));
  /* 106a1157 push 0x106cf3e8 */
  push32((uint32_t)(0x106cf3e8u));
  /* 106a115c call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a1162u);
  /* 106a1162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1167 call 0x106a1ff0 */
  push32(0x106a116cu); f_106a1ff0();
  /* 106a116c mov esi, esp */
  ESI = (ESP);
  /* 106a116e push 0x106ca078 */
  push32((uint32_t)(0x106ca078u));
  /* 106a1173 push 0x106cf400 */
  push32((uint32_t)(0x106cf400u));
  /* 106a1178 call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a117eu);
  /* 106a117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1183 call 0x106a1ff0 */
  push32(0x106a1188u); f_106a1ff0();
  /* 106a1188 mov esi, esp */
  ESI = (ESP);
  /* 106a118a push 0x106ca070 */
  push32((uint32_t)(0x106ca070u));
  /* 106a118f push 0x106cf3f8 */
  push32((uint32_t)(0x106cf3f8u));
  /* 106a1194 call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a119au);
  /* 106a119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a119f call 0x106a1ff0 */
  push32(0x106a11a4u); f_106a1ff0();
  /* 106a11a4 mov esi, esp */
  ESI = (ESP);
  /* 106a11a6 push 0x106ca068 */
  push32((uint32_t)(0x106ca068u));
  /* 106a11ab push 0x106cf410 */
  push32((uint32_t)(0x106cf410u));
  /* 106a11b0 call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a11b6u);
  /* 106a11b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a11bb call 0x106a1ff0 */
  push32(0x106a11c0u); f_106a1ff0();
  /* 106a11c0 mov esi, esp */
  ESI = (ESP);
  /* 106a11c2 push 0x106ca060 */
  push32((uint32_t)(0x106ca060u));
  /* 106a11c7 push 0x106cf408 */
  push32((uint32_t)(0x106cf408u));
  /* 106a11cc call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a11d2u);
  /* 106a11d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a11d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a11d7 call 0x106a1ff0 */
  push32(0x106a11dcu); f_106a1ff0();
  /* 106a11dc mov esi, esp */
  ESI = (ESP);
  /* 106a11de push 0x106ca054 */
  push32((uint32_t)(0x106ca054u));
  /* 106a11e3 push 0x106cf438 */
  push32((uint32_t)(0x106cf438u));
  /* 106a11e8 call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a11eeu);
  /* 106a11ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a11f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a11f3 call 0x106a1ff0 */
  push32(0x106a11f8u); f_106a1ff0();
  /* 106a11f8 mov esi, esp */
  ESI = (ESP);
  /* 106a11fa push 0x106ca048 */
  push32((uint32_t)(0x106ca048u));
  /* 106a11ff push 0x106cf448 */
  push32((uint32_t)(0x106cf448u));
  /* 106a1204 call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a120au);
  /* 106a120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a120f call 0x106a1ff0 */
  push32(0x106a1214u); f_106a1ff0();
  /* 106a1214 mov esi, esp */
  ESI = (ESP);
  /* 106a1216 push 0x106ca03c */
  push32((uint32_t)(0x106ca03cu));
  /* 106a121b push 0x106cf440 */
  push32((uint32_t)(0x106cf440u));
  /* 106a1220 call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a1226u);
  /* 106a1226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a122b call 0x106a1ff0 */
  push32(0x106a1230u); f_106a1ff0();
  /* 106a1230 mov esi, esp */
  ESI = (ESP);
  /* 106a1232 push 0x106ca030 */
  push32((uint32_t)(0x106ca030u));
  /* 106a1237 push 0x106cf450 */
  push32((uint32_t)(0x106cf450u));
  /* 106a123c call dword ptr [0x106d1430] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1430))), 0x106a1242u);
  /* 106a1242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1247 call 0x106a1ff0 */
  push32(0x106a124cu); f_106a1ff0();
  /* 106a124c mov esi, esp */
  ESI = (ESP);
  /* 106a124e push 0x81 */
  push32((uint32_t)(0x81u));
  /* 106a1253 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1255 call dword ptr [0x106d1434] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1434))), 0x106a125bu);
  /* 106a125b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a125e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1260 call 0x106a1ff0 */
  push32(0x106a1265u); f_106a1ff0();
  /* 106a1265 mov esi, esp */
  ESI = (ESP);
  /* 106a1267 push 0x106ca028 */
  push32((uint32_t)(0x106ca028u));
  /* 106a126c push 1 */
  push32((uint32_t)(0x1u));
  /* 106a126e call dword ptr [0x106d142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d142c))), 0x106a1274u);
  /* 106a1274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1277 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1279 call 0x106a1ff0 */
  push32(0x106a127eu); f_106a1ff0();
  /* 106a127e mov esi, esp */
  ESI = (ESP);
  /* 106a1280 push 0x106ca01c */
  push32((uint32_t)(0x106ca01cu));
  /* 106a1285 push 5 */
  push32((uint32_t)(0x5u));
  /* 106a1287 call dword ptr [0x106d142c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d142c))), 0x106a128du);
  /* 106a128d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1292 call 0x106a1ff0 */
  push32(0x106a1297u); f_106a1ff0();
  /* 106a1297 pop edi */
  EDI = (pop32());
  /* 106a1298 pop esi */
  ESI = (pop32());
  /* 106a1299 pop ebx */
  EBX = (pop32());
  /* 106a129a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a129d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a129f call 0x106a1ff0 */
  push32(0x106a12a4u); f_106a1ff0();
  /* 106a12a4 mov esp, ebp */
  ESP = (EBP);
  /* 106a12a6 pop ebp */
  EBP = (pop32());
  /* 106a12a7 ret  */
  ESPCHK(0x106a1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001330 @ 0x106a1330 (2429 bytes, 723 insns) */
void f_106a1330(void) {
  FTRACE(0x106a1330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a1330 push ebp */
  push32((uint32_t)(EBP));
  /* 106a1331 mov ebp, esp */
  EBP = (ESP);
  /* 106a1333 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a1336 push ebx */
  push32((uint32_t)(EBX));
  /* 106a1337 push esi */
  push32((uint32_t)(ESI));
  /* 106a1338 push edi */
  push32((uint32_t)(EDI));
  /* 106a1339 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106a133c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106a1341 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106a1346 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106a1348 mov esi, esp */
  ESI = (ESP);
  /* 106a134a push 1 */
  push32((uint32_t)(0x1u));
  /* 106a134c call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a1352u);
  /* 106a1352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1355 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1357 call 0x106a1ff0 */
  push32(0x106a135cu); f_106a1ff0();
  /* 106a135c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a1361 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1363 je 0x106a1465 */
  if (C.zf) goto L_106a1465;
  /* 106a1369 mov esi, esp */
  ESI = (ESP);
  /* 106a136b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a136d push 1 */
  push32((uint32_t)(0x1u));
  /* 106a136f call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a1375u);
  /* 106a1375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1378 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a137a call 0x106a1ff0 */
  push32(0x106a137fu); f_106a1ff0();
  /* 106a137f mov esi, esp */
  ESI = (ESP);
  /* 106a1381 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 106a1386 push 3 */
  push32((uint32_t)(0x3u));
  /* 106a1388 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a138a call dword ptr [0x106d13ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13ec))), 0x106a1390u);
  /* 106a1390 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1395 call 0x106a1ff0 */
  push32(0x106a139au); f_106a1ff0();
  /* 106a139a mov esi, esp */
  ESI = (ESP);
  /* 106a139c push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 106a13a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a13a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a13a5 call dword ptr [0x106d13ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13ec))), 0x106a13abu);
  /* 106a13ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a13ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a13b0 call 0x106a1ff0 */
  push32(0x106a13b5u); f_106a1ff0();
  /* 106a13b5 mov esi, esp */
  ESI = (ESP);
  /* 106a13b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a13b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a13bb push 0 */
  push32((uint32_t)(0x0u));
  /* 106a13bd call dword ptr [0x106d13ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13ec))), 0x106a13c3u);
  /* 106a13c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a13c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a13c8 call 0x106a1ff0 */
  push32(0x106a13cdu); f_106a1ff0();
  /* 106a13cd mov esi, esp */
  ESI = (ESP);
  /* 106a13cf push 0 */
  push32((uint32_t)(0x0u));
  /* 106a13d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a13d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a13d5 call dword ptr [0x106d13ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13ec))), 0x106a13dbu);
  /* 106a13db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a13de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a13e0 call 0x106a1ff0 */
  push32(0x106a13e5u); f_106a1ff0();
  /* 106a13e5 mov esi, esp */
  ESI = (ESP);
  /* 106a13e7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 106a13ec push 5 */
  push32((uint32_t)(0x5u));
  /* 106a13ee push 0 */
  push32((uint32_t)(0x0u));
  /* 106a13f0 call dword ptr [0x106d13ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13ec))), 0x106a13f6u);
  /* 106a13f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a13fb call 0x106a1ff0 */
  push32(0x106a1400u); f_106a1ff0();
  /* 106a1400 mov esi, esp */
  ESI = (ESP);
  /* 106a1402 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 106a1407 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a1409 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a140b call dword ptr [0x106d13ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13ec))), 0x106a1411u);
  /* 106a1411 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1414 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1416 call 0x106a1ff0 */
  push32(0x106a141bu); f_106a1ff0();
  /* 106a141b mov esi, esp */
  ESI = (ESP);
  /* 106a141d push 0x106ca0f4 */
  push32((uint32_t)(0x106ca0f4u));
  /* 106a1422 call dword ptr [0x106d13e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e4))), 0x106a1428u);
  /* 106a1428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a142b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a142d call 0x106a1ff0 */
  push32(0x106a1432u); f_106a1ff0();
  /* 106a1432 mov esi, esp */
  ESI = (ESP);
  /* 106a1434 push 0x106ca0e8 */
  push32((uint32_t)(0x106ca0e8u));
  /* 106a1439 call dword ptr [0x106d13e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e4))), 0x106a143fu);
  /* 106a143f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1444 call 0x106a1ff0 */
  push32(0x106a1449u); f_106a1ff0();
  /* 106a1449 mov esi, esp */
  ESI = (ESP);
  /* 106a144b push 0x106ca0dc */
  push32((uint32_t)(0x106ca0dcu));
  /* 106a1450 push 0x106ca090 */
  push32((uint32_t)(0x106ca090u));
  /* 106a1455 call dword ptr [0x106d13f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13f4))), 0x106a145bu);
  /* 106a145b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a145e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1460 call 0x106a1ff0 */
  push32(0x106a1465u); f_106a1ff0();
L_106a1465:;
  /* 106a1465 mov esi, esp */
  ESI = (ESP);
  /* 106a1467 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a1469 call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a146fu);
  /* 106a146f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1474 call 0x106a1ff0 */
  push32(0x106a1479u); f_106a1ff0();
  /* 106a1479 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a147e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1480 je 0x106a1506 */
  if (C.zf) goto L_106a1506;
  /* 106a1486 push 0x106cf3e0 */
  push32((uint32_t)(0x106cf3e0u));
  /* 106a148b call 0x106a1005 */
  push32(0x106a1490u); f_106a1005();
  /* 106a1490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1495 jne 0x106a1506 */
  if (!C.zf) goto L_106a1506;
  /* 106a1497 mov esi, esp */
  ESI = (ESP);
  /* 106a1499 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a149b push 2 */
  push32((uint32_t)(0x2u));
  /* 106a149d call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a14a3u);
  /* 106a14a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a14a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a14a8 call 0x106a1ff0 */
  push32(0x106a14adu); f_106a1ff0();
  /* 106a14ad mov esi, esp */
  ESI = (ESP);
  /* 106a14af push 3 */
  push32((uint32_t)(0x3u));
  /* 106a14b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a14b3 call dword ptr [0x106d13f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13f8))), 0x106a14b9u);
  /* 106a14b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a14bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a14be call 0x106a1ff0 */
  push32(0x106a14c3u); f_106a1ff0();
  /* 106a14c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a14c5 jle 0x106a14e0 */
  if ((C.zf||C.sf!=C.of)) goto L_106a14e0;
  /* 106a14c7 mov esi, esp */
  ESI = (ESP);
  /* 106a14c9 push 0x106ca0d4 */
  push32((uint32_t)(0x106ca0d4u));
  /* 106a14ce call dword ptr [0x106d13e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e4))), 0x106a14d4u);
  /* 106a14d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a14d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a14d9 call 0x106a1ff0 */
  push32(0x106a14deu); f_106a1ff0();
  /* 106a14de jmp 0x106a14f7 */
  goto L_106a14f7;
L_106a14e0:;
  /* 106a14e0 mov esi, esp */
  ESI = (ESP);
  /* 106a14e2 push 0x106ca0c8 */
  push32((uint32_t)(0x106ca0c8u));
  /* 106a14e7 call dword ptr [0x106d13e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e4))), 0x106a14edu);
  /* 106a14ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a14f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a14f2 call 0x106a1ff0 */
  push32(0x106a14f7u); f_106a1ff0();
L_106a14f7:;
  /* 106a14f7 mov esi, esp */
  ESI = (ESP);
  /* 106a14f9 call dword ptr [0x106d13f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13f0))), 0x106a14ffu);
  /* 106a14ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1501 call 0x106a1ff0 */
  push32(0x106a1506u); f_106a1ff0();
L_106a1506:;
  /* 106a1506 mov esi, esp */
  ESI = (ESP);
  /* 106a1508 push 3 */
  push32((uint32_t)(0x3u));
  /* 106a150a call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a1510u);
  /* 106a1510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1515 call 0x106a1ff0 */
  push32(0x106a151au); f_106a1ff0();
  /* 106a151a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a151f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1521 je 0x106a157c */
  if (C.zf) goto L_106a157c;
  /* 106a1523 mov esi, esp */
  ESI = (ESP);
  /* 106a1525 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1527 push 0x106cf3f0 */
  push32((uint32_t)(0x106cf3f0u));
  /* 106a152c call dword ptr [0x106d1400] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1400))), 0x106a1532u);
  /* 106a1532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1537 call 0x106a1ff0 */
  push32(0x106a153cu); f_106a1ff0();
  /* 106a153c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a153e jne 0x106a157c */
  if (!C.zf) goto L_106a157c;
  /* 106a1540 mov esi, esp */
  ESI = (ESP);
  /* 106a1542 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1544 push 3 */
  push32((uint32_t)(0x3u));
  /* 106a1546 call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a154cu);
  /* 106a154c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a154f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1551 call 0x106a1ff0 */
  push32(0x106a1556u); f_106a1ff0();
  /* 106a1556 mov esi, esp */
  ESI = (ESP);
  /* 106a1558 push 0x106ca0c0 */
  push32((uint32_t)(0x106ca0c0u));
  /* 106a155d call dword ptr [0x106d13e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e4))), 0x106a1563u);
  /* 106a1563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1566 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1568 call 0x106a1ff0 */
  push32(0x106a156du); f_106a1ff0();
  /* 106a156d mov esi, esp */
  ESI = (ESP);
  /* 106a156f call dword ptr [0x106d1404] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1404))), 0x106a1575u);
  /* 106a1575 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1577 call 0x106a1ff0 */
  push32(0x106a157cu); f_106a1ff0();
L_106a157c:;
  /* 106a157c mov esi, esp */
  ESI = (ESP);
  /* 106a157e push 4 */
  push32((uint32_t)(0x4u));
  /* 106a1580 call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a1586u);
  /* 106a1586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1589 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a158b call 0x106a1ff0 */
  push32(0x106a1590u); f_106a1ff0();
  /* 106a1590 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a1595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1597 je 0x106a1636 */
  if (C.zf) goto L_106a1636;
  /* 106a159d mov esi, esp */
  ESI = (ESP);
  /* 106a159f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a15a1 push 0x106cf418 */
  push32((uint32_t)(0x106cf418u));
  /* 106a15a6 call dword ptr [0x106d13fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13fc))), 0x106a15acu);
  /* 106a15ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a15af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a15b1 call 0x106a1ff0 */
  push32(0x106a15b6u); f_106a1ff0();
  /* 106a15b6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a15b9 jle 0x106a1636 */
  if ((C.zf||C.sf!=C.of)) goto L_106a1636;
  /* 106a15bb push 0x106cf400 */
  push32((uint32_t)(0x106cf400u));
  /* 106a15c0 call 0x106a1005 */
  push32(0x106a15c5u); f_106a1005();
  /* 106a15c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a15c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a15ca jle 0x106a1636 */
  if ((C.zf||C.sf!=C.of)) goto L_106a1636;
  /* 106a15cc push 0x106cf438 */
  push32((uint32_t)(0x106cf438u));
  /* 106a15d1 call 0x106a1005 */
  push32(0x106a15d6u); f_106a1005();
  /* 106a15d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a15d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a15db jle 0x106a1636 */
  if ((C.zf||C.sf!=C.of)) goto L_106a1636;
  /* 106a15dd mov esi, esp */
  ESI = (ESP);
  /* 106a15df push 0 */
  push32((uint32_t)(0x0u));
  /* 106a15e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a15e3 call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a15e9u);
  /* 106a15e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a15ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a15ee call 0x106a1ff0 */
  push32(0x106a15f3u); f_106a1ff0();
  /* 106a15f3 mov esi, esp */
  ESI = (ESP);
  /* 106a15f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a15f7 push 0x106cf438 */
  push32((uint32_t)(0x106cf438u));
  /* 106a15fc call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a1602u);
  /* 106a1602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1605 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1607 call 0x106a1ff0 */
  push32(0x106a160cu); f_106a1ff0();
  /* 106a160c mov esi, esp */
  ESI = (ESP);
  /* 106a160e push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1610 call dword ptr [0x106d1410] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1410))), 0x106a1616u);
  /* 106a1616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a161b call 0x106a1ff0 */
  push32(0x106a1620u); f_106a1ff0();
  /* 106a1620 mov esi, esp */
  ESI = (ESP);
  /* 106a1622 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 106a1624 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a1626 call dword ptr [0x106d1408] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1408))), 0x106a162cu);
  /* 106a162c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a162f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1631 call 0x106a1ff0 */
  push32(0x106a1636u); f_106a1ff0();
L_106a1636:;
  /* 106a1636 mov esi, esp */
  ESI = (ESP);
  /* 106a1638 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a163a call dword ptr [0x106d1418] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1418))), 0x106a1640u);
  /* 106a1640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1645 call 0x106a1ff0 */
  push32(0x106a164au); f_106a1ff0();
  /* 106a164a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a164f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1651 je 0x106a1689 */
  if (C.zf) goto L_106a1689;
  /* 106a1653 mov esi, esp */
  ESI = (ESP);
  /* 106a1655 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1657 push 0x106cf400 */
  push32((uint32_t)(0x106cf400u));
  /* 106a165c call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a1662u);
  /* 106a1662 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1667 call 0x106a1ff0 */
  push32(0x106a166cu); f_106a1ff0();
  /* 106a166c mov esi, esp */
  ESI = (ESP);
  /* 106a166e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1670 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1672 push 0x106cf418 */
  push32((uint32_t)(0x106cf418u));
  /* 106a1677 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1679 call dword ptr [0x106d141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d141c))), 0x106a167fu);
  /* 106a167f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1682 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1684 call 0x106a1ff0 */
  push32(0x106a1689u); f_106a1ff0();
L_106a1689:;
  /* 106a1689 mov esi, esp */
  ESI = (ESP);
  /* 106a168b push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 106a168d call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a1693u);
  /* 106a1693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1696 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1698 call 0x106a1ff0 */
  push32(0x106a169du); f_106a1ff0();
  /* 106a169d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a16a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a16a4 je 0x106a1718 */
  if (C.zf) goto L_106a1718;
  /* 106a16a6 mov esi, esp */
  ESI = (ESP);
  /* 106a16a8 push 0x106cf400 */
  push32((uint32_t)(0x106cf400u));
  /* 106a16ad push 0x106cf418 */
  push32((uint32_t)(0x106cf418u));
  /* 106a16b2 call dword ptr [0x106d1414] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1414))), 0x106a16b8u);
  /* 106a16b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a16bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a16bd call 0x106a1ff0 */
  push32(0x106a16c2u); f_106a1ff0();
  /* 106a16c2 mov esi, eax */
  ESI = (EAX);
  /* 106a16c4 push 0x106cf400 */
  push32((uint32_t)(0x106cf400u));
  /* 106a16c9 call 0x106a1005 */
  push32(0x106a16ceu); f_106a1005();
  /* 106a16ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a16d1 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a16d3 jne 0x106a1718 */
  if (!C.zf) goto L_106a1718;
  /* 106a16d5 mov esi, esp */
  ESI = (ESP);
  /* 106a16d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a16d9 push 0x106cf438 */
  push32((uint32_t)(0x106cf438u));
  /* 106a16de call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a16e4u);
  /* 106a16e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a16e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a16e9 call 0x106a1ff0 */
  push32(0x106a16eeu); f_106a1ff0();
  /* 106a16ee mov esi, esp */
  ESI = (ESP);
  /* 106a16f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a16f2 call dword ptr [0x106d1424] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1424))), 0x106a16f8u);
  /* 106a16f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a16fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a16fd call 0x106a1ff0 */
  push32(0x106a1702u); f_106a1ff0();
  /* 106a1702 mov esi, esp */
  ESI = (ESP);
  /* 106a1704 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1706 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 106a1708 call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a170eu);
  /* 106a170e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1713 call 0x106a1ff0 */
  push32(0x106a1718u); f_106a1ff0();
L_106a1718:;
  /* 106a1718 mov esi, esp */
  ESI = (ESP);
  /* 106a171a push 5 */
  push32((uint32_t)(0x5u));
  /* 106a171c call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a1722u);
  /* 106a1722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1727 call 0x106a1ff0 */
  push32(0x106a172cu); f_106a1ff0();
  /* 106a172c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a1731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1733 je 0x106a17d2 */
  if (C.zf) goto L_106a17d2;
  /* 106a1739 mov esi, esp */
  ESI = (ESP);
  /* 106a173b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a173d push 0x106cf420 */
  push32((uint32_t)(0x106cf420u));
  /* 106a1742 call dword ptr [0x106d13fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13fc))), 0x106a1748u);
  /* 106a1748 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a174b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a174d call 0x106a1ff0 */
  push32(0x106a1752u); f_106a1ff0();
  /* 106a1752 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1755 jle 0x106a17d2 */
  if ((C.zf||C.sf!=C.of)) goto L_106a17d2;
  /* 106a1757 push 0x106cf3f8 */
  push32((uint32_t)(0x106cf3f8u));
  /* 106a175c call 0x106a1005 */
  push32(0x106a1761u); f_106a1005();
  /* 106a1761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1766 jle 0x106a17d2 */
  if ((C.zf||C.sf!=C.of)) goto L_106a17d2;
  /* 106a1768 push 0x106cf448 */
  push32((uint32_t)(0x106cf448u));
  /* 106a176d call 0x106a1005 */
  push32(0x106a1772u); f_106a1005();
  /* 106a1772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1777 jle 0x106a17d2 */
  if ((C.zf||C.sf!=C.of)) goto L_106a17d2;
  /* 106a1779 mov esi, esp */
  ESI = (ESP);
  /* 106a177b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a177d push 5 */
  push32((uint32_t)(0x5u));
  /* 106a177f call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a1785u);
  /* 106a1785 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1788 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a178a call 0x106a1ff0 */
  push32(0x106a178fu); f_106a1ff0();
  /* 106a178f mov esi, esp */
  ESI = (ESP);
  /* 106a1791 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1793 push 0x106cf448 */
  push32((uint32_t)(0x106cf448u));
  /* 106a1798 call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a179eu);
  /* 106a179e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a17a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a17a3 call 0x106a1ff0 */
  push32(0x106a17a8u); f_106a1ff0();
  /* 106a17a8 mov esi, esp */
  ESI = (ESP);
  /* 106a17aa push 1 */
  push32((uint32_t)(0x1u));
  /* 106a17ac call dword ptr [0x106d1410] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1410))), 0x106a17b2u);
  /* 106a17b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a17b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a17b7 call 0x106a1ff0 */
  push32(0x106a17bcu); f_106a1ff0();
  /* 106a17bc mov esi, esp */
  ESI = (ESP);
  /* 106a17be push 0x32 */
  push32((uint32_t)(0x32u));
  /* 106a17c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 106a17c2 call dword ptr [0x106d1408] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1408))), 0x106a17c8u);
  /* 106a17c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a17cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a17cd call 0x106a1ff0 */
  push32(0x106a17d2u); f_106a1ff0();
L_106a17d2:;
  /* 106a17d2 mov esi, esp */
  ESI = (ESP);
  /* 106a17d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 106a17d6 call dword ptr [0x106d1418] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1418))), 0x106a17dcu);
  /* 106a17dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a17df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a17e1 call 0x106a1ff0 */
  push32(0x106a17e6u); f_106a1ff0();
  /* 106a17e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a17eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a17ed je 0x106a1825 */
  if (C.zf) goto L_106a1825;
  /* 106a17ef mov esi, esp */
  ESI = (ESP);
  /* 106a17f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a17f3 push 0x106cf3f8 */
  push32((uint32_t)(0x106cf3f8u));
  /* 106a17f8 call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a17feu);
  /* 106a17fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1801 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1803 call 0x106a1ff0 */
  push32(0x106a1808u); f_106a1ff0();
  /* 106a1808 mov esi, esp */
  ESI = (ESP);
  /* 106a180a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a180c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a180e push 0x106cf420 */
  push32((uint32_t)(0x106cf420u));
  /* 106a1813 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1815 call dword ptr [0x106d141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d141c))), 0x106a181bu);
  /* 106a181b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a181e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1820 call 0x106a1ff0 */
  push32(0x106a1825u); f_106a1ff0();
L_106a1825:;
  /* 106a1825 mov esi, esp */
  ESI = (ESP);
  /* 106a1827 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 106a1829 call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a182fu);
  /* 106a182f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1834 call 0x106a1ff0 */
  push32(0x106a1839u); f_106a1ff0();
  /* 106a1839 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a183e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1840 je 0x106a18b4 */
  if (C.zf) goto L_106a18b4;
  /* 106a1842 mov esi, esp */
  ESI = (ESP);
  /* 106a1844 push 0x106cf3f8 */
  push32((uint32_t)(0x106cf3f8u));
  /* 106a1849 push 0x106cf420 */
  push32((uint32_t)(0x106cf420u));
  /* 106a184e call dword ptr [0x106d1414] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1414))), 0x106a1854u);
  /* 106a1854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1857 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1859 call 0x106a1ff0 */
  push32(0x106a185eu); f_106a1ff0();
  /* 106a185e mov esi, eax */
  ESI = (EAX);
  /* 106a1860 push 0x106cf3f8 */
  push32((uint32_t)(0x106cf3f8u));
  /* 106a1865 call 0x106a1005 */
  push32(0x106a186au); f_106a1005();
  /* 106a186a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a186d cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a186f jne 0x106a18b4 */
  if (!C.zf) goto L_106a18b4;
  /* 106a1871 mov esi, esp */
  ESI = (ESP);
  /* 106a1873 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1875 push 0x106cf448 */
  push32((uint32_t)(0x106cf448u));
  /* 106a187a call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a1880u);
  /* 106a1880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1885 call 0x106a1ff0 */
  push32(0x106a188au); f_106a1ff0();
  /* 106a188a mov esi, esp */
  ESI = (ESP);
  /* 106a188c push 1 */
  push32((uint32_t)(0x1u));
  /* 106a188e call dword ptr [0x106d1424] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1424))), 0x106a1894u);
  /* 106a1894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1899 call 0x106a1ff0 */
  push32(0x106a189eu); f_106a1ff0();
  /* 106a189e mov esi, esp */
  ESI = (ESP);
  /* 106a18a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a18a2 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 106a18a4 call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a18aau);
  /* 106a18aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a18ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a18af call 0x106a1ff0 */
  push32(0x106a18b4u); f_106a1ff0();
L_106a18b4:;
  /* 106a18b4 mov esi, esp */
  ESI = (ESP);
  /* 106a18b6 push 6 */
  push32((uint32_t)(0x6u));
  /* 106a18b8 call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a18beu);
  /* 106a18be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a18c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a18c3 call 0x106a1ff0 */
  push32(0x106a18c8u); f_106a1ff0();
  /* 106a18c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a18cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a18cf je 0x106a196e */
  if (C.zf) goto L_106a196e;
  /* 106a18d5 mov esi, esp */
  ESI = (ESP);
  /* 106a18d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a18d9 push 0x106cf428 */
  push32((uint32_t)(0x106cf428u));
  /* 106a18de call dword ptr [0x106d13fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13fc))), 0x106a18e4u);
  /* 106a18e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a18e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a18e9 call 0x106a1ff0 */
  push32(0x106a18eeu); f_106a1ff0();
  /* 106a18ee cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a18f1 jle 0x106a196e */
  if ((C.zf||C.sf!=C.of)) goto L_106a196e;
  /* 106a18f3 push 0x106cf410 */
  push32((uint32_t)(0x106cf410u));
  /* 106a18f8 call 0x106a1005 */
  push32(0x106a18fdu); f_106a1005();
  /* 106a18fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1902 jle 0x106a196e */
  if ((C.zf||C.sf!=C.of)) goto L_106a196e;
  /* 106a1904 push 0x106cf440 */
  push32((uint32_t)(0x106cf440u));
  /* 106a1909 call 0x106a1005 */
  push32(0x106a190eu); f_106a1005();
  /* 106a190e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1913 jle 0x106a196e */
  if ((C.zf||C.sf!=C.of)) goto L_106a196e;
  /* 106a1915 mov esi, esp */
  ESI = (ESP);
  /* 106a1917 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1919 push 6 */
  push32((uint32_t)(0x6u));
  /* 106a191b call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a1921u);
  /* 106a1921 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1924 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1926 call 0x106a1ff0 */
  push32(0x106a192bu); f_106a1ff0();
  /* 106a192b mov esi, esp */
  ESI = (ESP);
  /* 106a192d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a192f push 0x106cf440 */
  push32((uint32_t)(0x106cf440u));
  /* 106a1934 call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a193au);
  /* 106a193a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a193d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a193f call 0x106a1ff0 */
  push32(0x106a1944u); f_106a1ff0();
  /* 106a1944 mov esi, esp */
  ESI = (ESP);
  /* 106a1946 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1948 call dword ptr [0x106d1410] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1410))), 0x106a194eu);
  /* 106a194e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1953 call 0x106a1ff0 */
  push32(0x106a1958u); f_106a1ff0();
  /* 106a1958 mov esi, esp */
  ESI = (ESP);
  /* 106a195a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 106a195c push 6 */
  push32((uint32_t)(0x6u));
  /* 106a195e call dword ptr [0x106d1408] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1408))), 0x106a1964u);
  /* 106a1964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1969 call 0x106a1ff0 */
  push32(0x106a196eu); f_106a1ff0();
L_106a196e:;
  /* 106a196e mov esi, esp */
  ESI = (ESP);
  /* 106a1970 push 6 */
  push32((uint32_t)(0x6u));
  /* 106a1972 call dword ptr [0x106d1418] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1418))), 0x106a1978u);
  /* 106a1978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a197b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a197d call 0x106a1ff0 */
  push32(0x106a1982u); f_106a1ff0();
  /* 106a1982 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a1987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1989 je 0x106a19c1 */
  if (C.zf) goto L_106a19c1;
  /* 106a198b mov esi, esp */
  ESI = (ESP);
  /* 106a198d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a198f push 0x106cf410 */
  push32((uint32_t)(0x106cf410u));
  /* 106a1994 call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a199au);
  /* 106a199a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a199d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a199f call 0x106a1ff0 */
  push32(0x106a19a4u); f_106a1ff0();
  /* 106a19a4 mov esi, esp */
  ESI = (ESP);
  /* 106a19a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a19a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a19aa push 0x106cf428 */
  push32((uint32_t)(0x106cf428u));
  /* 106a19af push 1 */
  push32((uint32_t)(0x1u));
  /* 106a19b1 call dword ptr [0x106d141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d141c))), 0x106a19b7u);
  /* 106a19b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a19ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a19bc call 0x106a1ff0 */
  push32(0x106a19c1u); f_106a1ff0();
L_106a19c1:;
  /* 106a19c1 mov esi, esp */
  ESI = (ESP);
  /* 106a19c3 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 106a19c5 call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a19cbu);
  /* 106a19cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a19ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a19d0 call 0x106a1ff0 */
  push32(0x106a19d5u); f_106a1ff0();
  /* 106a19d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a19da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a19dc je 0x106a1a50 */
  if (C.zf) goto L_106a1a50;
  /* 106a19de mov esi, esp */
  ESI = (ESP);
  /* 106a19e0 push 0x106cf410 */
  push32((uint32_t)(0x106cf410u));
  /* 106a19e5 push 0x106cf428 */
  push32((uint32_t)(0x106cf428u));
  /* 106a19ea call dword ptr [0x106d1414] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1414))), 0x106a19f0u);
  /* 106a19f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a19f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a19f5 call 0x106a1ff0 */
  push32(0x106a19fau); f_106a1ff0();
  /* 106a19fa mov esi, eax */
  ESI = (EAX);
  /* 106a19fc push 0x106cf410 */
  push32((uint32_t)(0x106cf410u));
  /* 106a1a01 call 0x106a1005 */
  push32(0x106a1a06u); f_106a1005();
  /* 106a1a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1a09 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1a0b jne 0x106a1a50 */
  if (!C.zf) goto L_106a1a50;
  /* 106a1a0d mov esi, esp */
  ESI = (ESP);
  /* 106a1a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1a11 push 0x106cf440 */
  push32((uint32_t)(0x106cf440u));
  /* 106a1a16 call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a1a1cu);
  /* 106a1a1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1a1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1a21 call 0x106a1ff0 */
  push32(0x106a1a26u); f_106a1ff0();
  /* 106a1a26 mov esi, esp */
  ESI = (ESP);
  /* 106a1a28 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1a2a call dword ptr [0x106d1424] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1424))), 0x106a1a30u);
  /* 106a1a30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1a33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1a35 call 0x106a1ff0 */
  push32(0x106a1a3au); f_106a1ff0();
  /* 106a1a3a mov esi, esp */
  ESI = (ESP);
  /* 106a1a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1a3e push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 106a1a40 call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a1a46u);
  /* 106a1a46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1a49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1a4b call 0x106a1ff0 */
  push32(0x106a1a50u); f_106a1ff0();
L_106a1a50:;
  /* 106a1a50 mov esi, esp */
  ESI = (ESP);
  /* 106a1a52 push 7 */
  push32((uint32_t)(0x7u));
  /* 106a1a54 call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a1a5au);
  /* 106a1a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1a5f call 0x106a1ff0 */
  push32(0x106a1a64u); f_106a1ff0();
  /* 106a1a64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a1a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1a6b je 0x106a1b0a */
  if (C.zf) goto L_106a1b0a;
  /* 106a1a71 mov esi, esp */
  ESI = (ESP);
  /* 106a1a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1a75 push 0x106cf430 */
  push32((uint32_t)(0x106cf430u));
  /* 106a1a7a call dword ptr [0x106d13fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13fc))), 0x106a1a80u);
  /* 106a1a80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1a83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1a85 call 0x106a1ff0 */
  push32(0x106a1a8au); f_106a1ff0();
  /* 106a1a8a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1a8d jle 0x106a1b0a */
  if ((C.zf||C.sf!=C.of)) goto L_106a1b0a;
  /* 106a1a8f push 0x106cf408 */
  push32((uint32_t)(0x106cf408u));
  /* 106a1a94 call 0x106a1005 */
  push32(0x106a1a99u); f_106a1005();
  /* 106a1a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1a9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1a9e jle 0x106a1b0a */
  if ((C.zf||C.sf!=C.of)) goto L_106a1b0a;
  /* 106a1aa0 push 0x106cf450 */
  push32((uint32_t)(0x106cf450u));
  /* 106a1aa5 call 0x106a1005 */
  push32(0x106a1aaau); f_106a1005();
  /* 106a1aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1aaf jle 0x106a1b0a */
  if ((C.zf||C.sf!=C.of)) goto L_106a1b0a;
  /* 106a1ab1 mov esi, esp */
  ESI = (ESP);
  /* 106a1ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1ab5 push 7 */
  push32((uint32_t)(0x7u));
  /* 106a1ab7 call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a1abdu);
  /* 106a1abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1ac0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1ac2 call 0x106a1ff0 */
  push32(0x106a1ac7u); f_106a1ff0();
  /* 106a1ac7 mov esi, esp */
  ESI = (ESP);
  /* 106a1ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1acb push 0x106cf450 */
  push32((uint32_t)(0x106cf450u));
  /* 106a1ad0 call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a1ad6u);
  /* 106a1ad6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1ad9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1adb call 0x106a1ff0 */
  push32(0x106a1ae0u); f_106a1ff0();
  /* 106a1ae0 mov esi, esp */
  ESI = (ESP);
  /* 106a1ae2 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1ae4 call dword ptr [0x106d1410] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1410))), 0x106a1aeau);
  /* 106a1aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1aef call 0x106a1ff0 */
  push32(0x106a1af4u); f_106a1ff0();
  /* 106a1af4 mov esi, esp */
  ESI = (ESP);
  /* 106a1af6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 106a1af8 push 7 */
  push32((uint32_t)(0x7u));
  /* 106a1afa call dword ptr [0x106d1408] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1408))), 0x106a1b00u);
  /* 106a1b00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1b03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1b05 call 0x106a1ff0 */
  push32(0x106a1b0au); f_106a1ff0();
L_106a1b0a:;
  /* 106a1b0a mov esi, esp */
  ESI = (ESP);
  /* 106a1b0c push 7 */
  push32((uint32_t)(0x7u));
  /* 106a1b0e call dword ptr [0x106d1418] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1418))), 0x106a1b14u);
  /* 106a1b14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1b17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1b19 call 0x106a1ff0 */
  push32(0x106a1b1eu); f_106a1ff0();
  /* 106a1b1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a1b23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1b25 je 0x106a1b5d */
  if (C.zf) goto L_106a1b5d;
  /* 106a1b27 mov esi, esp */
  ESI = (ESP);
  /* 106a1b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1b2b push 0x106cf408 */
  push32((uint32_t)(0x106cf408u));
  /* 106a1b30 call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a1b36u);
  /* 106a1b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1b39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1b3b call 0x106a1ff0 */
  push32(0x106a1b40u); f_106a1ff0();
  /* 106a1b40 mov esi, esp */
  ESI = (ESP);
  /* 106a1b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1b46 push 0x106cf430 */
  push32((uint32_t)(0x106cf430u));
  /* 106a1b4b push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1b4d call dword ptr [0x106d141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d141c))), 0x106a1b53u);
  /* 106a1b53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1b56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1b58 call 0x106a1ff0 */
  push32(0x106a1b5du); f_106a1ff0();
L_106a1b5d:;
  /* 106a1b5d mov esi, esp */
  ESI = (ESP);
  /* 106a1b5f push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 106a1b61 call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a1b67u);
  /* 106a1b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1b6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1b6c call 0x106a1ff0 */
  push32(0x106a1b71u); f_106a1ff0();
  /* 106a1b71 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a1b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1b78 je 0x106a1bec */
  if (C.zf) goto L_106a1bec;
  /* 106a1b7a mov esi, esp */
  ESI = (ESP);
  /* 106a1b7c push 0x106cf408 */
  push32((uint32_t)(0x106cf408u));
  /* 106a1b81 push 0x106cf430 */
  push32((uint32_t)(0x106cf430u));
  /* 106a1b86 call dword ptr [0x106d1414] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1414))), 0x106a1b8cu);
  /* 106a1b8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1b8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1b91 call 0x106a1ff0 */
  push32(0x106a1b96u); f_106a1ff0();
  /* 106a1b96 mov esi, eax */
  ESI = (EAX);
  /* 106a1b98 push 0x106cf408 */
  push32((uint32_t)(0x106cf408u));
  /* 106a1b9d call 0x106a1005 */
  push32(0x106a1ba2u); f_106a1005();
  /* 106a1ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1ba5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1ba7 jne 0x106a1bec */
  if (!C.zf) goto L_106a1bec;
  /* 106a1ba9 mov esi, esp */
  ESI = (ESP);
  /* 106a1bab push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1bad push 0x106cf450 */
  push32((uint32_t)(0x106cf450u));
  /* 106a1bb2 call dword ptr [0x106d140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d140c))), 0x106a1bb8u);
  /* 106a1bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1bbd call 0x106a1ff0 */
  push32(0x106a1bc2u); f_106a1ff0();
  /* 106a1bc2 mov esi, esp */
  ESI = (ESP);
  /* 106a1bc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1bc6 call dword ptr [0x106d1424] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1424))), 0x106a1bccu);
  /* 106a1bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1bcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1bd1 call 0x106a1ff0 */
  push32(0x106a1bd6u); f_106a1ff0();
  /* 106a1bd6 mov esi, esp */
  ESI = (ESP);
  /* 106a1bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1bda push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 106a1bdc call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a1be2u);
  /* 106a1be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1be7 call 0x106a1ff0 */
  push32(0x106a1becu); f_106a1ff0();
L_106a1bec:;
  /* 106a1bec mov esi, esp */
  ESI = (ESP);
  /* 106a1bee push 8 */
  push32((uint32_t)(0x8u));
  /* 106a1bf0 call dword ptr [0x106d13dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13dc))), 0x106a1bf6u);
  /* 106a1bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1bf9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1bfb call 0x106a1ff0 */
  push32(0x106a1c00u); f_106a1ff0();
  /* 106a1c00 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a1c05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1c07 je 0x106a1c9c */
  if (C.zf) goto L_106a1c9c;
  /* 106a1c0d push 0x106cf3e8 */
  push32((uint32_t)(0x106cf3e8u));
  /* 106a1c12 call 0x106a1005 */
  push32(0x106a1c17u); f_106a1005();
  /* 106a1c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a1c1c jne 0x106a1c9c */
  if (!C.zf) goto L_106a1c9c;
  /* 106a1c1e mov esi, esp */
  ESI = (ESP);
  /* 106a1c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1c22 push 8 */
  push32((uint32_t)(0x8u));
  /* 106a1c24 call dword ptr [0x106d13e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e8))), 0x106a1c2au);
  /* 106a1c2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1c2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1c2f call 0x106a1ff0 */
  push32(0x106a1c34u); f_106a1ff0();
  /* 106a1c34 mov esi, esp */
  ESI = (ESP);
  /* 106a1c36 push 0x106ca0b8 */
  push32((uint32_t)(0x106ca0b8u));
  /* 106a1c3b call dword ptr [0x106d13e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e4))), 0x106a1c41u);
  /* 106a1c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1c46 call 0x106a1ff0 */
  push32(0x106a1c4bu); f_106a1ff0();
  /* 106a1c4b mov esi, esp */
  ESI = (ESP);
  /* 106a1c4d push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 106a1c52 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a1c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1c56 call dword ptr [0x106d1428] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1428))), 0x106a1c5cu);
  /* 106a1c5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1c61 call 0x106a1ff0 */
  push32(0x106a1c66u); f_106a1ff0();
  /* 106a1c66 mov esi, esp */
  ESI = (ESP);
  /* 106a1c68 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 106a1c6d push 5 */
  push32((uint32_t)(0x5u));
  /* 106a1c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1c71 call dword ptr [0x106d1428] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1428))), 0x106a1c77u);
  /* 106a1c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1c7c call 0x106a1ff0 */
  push32(0x106a1c81u); f_106a1ff0();
  /* 106a1c81 mov esi, esp */
  ESI = (ESP);
  /* 106a1c83 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 106a1c88 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a1c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a1c8c call dword ptr [0x106d1428] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1428))), 0x106a1c92u);
  /* 106a1c92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1c95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1c97 call 0x106a1ff0 */
  push32(0x106a1c9cu); f_106a1ff0();
L_106a1c9c:;
  /* 106a1c9c pop edi */
  EDI = (pop32());
  /* 106a1c9d pop esi */
  ESI = (pop32());
  /* 106a1c9e pop ebx */
  EBX = (pop32());
  /* 106a1c9f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1ca2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1ca4 call 0x106a1ff0 */
  push32(0x106a1ca9u); f_106a1ff0();
  /* 106a1ca9 mov esp, ebp */
  ESP = (EBP);
  /* 106a1cab pop ebp */
  EBP = (pop32());
  /* 106a1cac ret  */
  ESPCHK(0x106a1330u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f10 @ 0x106a1f10 (63 bytes, 26 insns) */
void f_106a1f10(void) {
  FTRACE(0x106a1f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a1f10 push ebp */
  push32((uint32_t)(EBP));
  /* 106a1f11 mov ebp, esp */
  EBP = (ESP);
  /* 106a1f13 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a1f16 push ebx */
  push32((uint32_t)(EBX));
  /* 106a1f17 push esi */
  push32((uint32_t)(ESI));
  /* 106a1f18 push edi */
  push32((uint32_t)(EDI));
  /* 106a1f19 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106a1f1c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106a1f21 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106a1f26 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106a1f28 mov esi, esp */
  ESI = (ESP);
  /* 106a1f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a1f2d push eax */
  push32((uint32_t)(EAX));
  /* 106a1f2e call dword ptr [0x106d13e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d13e0))), 0x106a1f34u);
  /* 106a1f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1f39 call 0x106a1ff0 */
  push32(0x106a1f3eu); f_106a1ff0();
  /* 106a1f3e pop edi */
  EDI = (pop32());
  /* 106a1f3f pop esi */
  ESI = (pop32());
  /* 106a1f40 pop ebx */
  EBX = (pop32());
  /* 106a1f41 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a1f44 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a1f46 call 0x106a1ff0 */
  push32(0x106a1f4bu); f_106a1ff0();
  /* 106a1f4b mov esp, ebp */
  ESP = (EBP);
  /* 106a1f4d pop ebp */
  EBP = (pop32());
  /* 106a1f4e ret  */
  ESPCHK(0x106a1f10u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x106a1ff0 (56 bytes, 28 insns) */
void f_106a1ff0(void) {
  FTRACE(0x106a1ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a1ff0 jne 0x106a1ff3 */
  if (!C.zf) goto L_106a1ff3;
  /* 106a1ff2 ret  */
  ESPCHK(0x106a1ff0u, _esp0);
  ESP += 4; return;
L_106a1ff3:;
  /* 106a1ff3 push ebp */
  push32((uint32_t)(EBP));
  /* 106a1ff4 mov ebp, esp */
  EBP = (ESP);
  /* 106a1ff6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a1ff9 push eax */
  push32((uint32_t)(EAX));
  /* 106a1ffa push edx */
  push32((uint32_t)(EDX));
  /* 106a1ffb push ebx */
  push32((uint32_t)(EBX));
  /* 106a1ffc push esi */
  push32((uint32_t)(ESI));
  /* 106a1ffd push edi */
  push32((uint32_t)(EDI));
  /* 106a1ffe push 0x106ca110 */
  push32((uint32_t)(0x106ca110u));
  /* 106a2003 push 0x106ca10c */
  push32((uint32_t)(0x106ca10cu));
  /* 106a2008 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 106a200a push 0x106ca0fc */
  push32((uint32_t)(0x106ca0fcu));
  /* 106a200f push 1 */
  push32((uint32_t)(0x1u));
  /* 106a2011 call 0x106a23c0 */
  push32(0x106a2016u); f_106a23c0();
  /* 106a2016 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2019 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a201c jne 0x106a201f */
  if (!C.zf) goto L_106a201f;
  /* 106a201e int3  */
  x86_unimpl("int3 @ 0x106a201e");
L_106a201f:;
  /* 106a201f pop edi */
  EDI = (pop32());
  /* 106a2020 pop esi */
  ESI = (pop32());
  /* 106a2021 pop ebx */
  EBX = (pop32());
  /* 106a2022 pop edx */
  EDX = (pop32());
  /* 106a2023 pop eax */
  EAX = (pop32());
  /* 106a2024 mov esp, ebp */
  ESP = (EBP);
  /* 106a2026 pop ebp */
  EBP = (pop32());
  /* 106a2027 ret  */
  ESPCHK(0x106a1ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002030 @ 0x106a2030 (313 bytes, 78 insns) */
void f_106a2030(void) {
  FTRACE(0x106a2030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2030 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2031 mov ebp, esp */
  EBP = (ESP);
  /* 106a2033 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2037 jne 0x106a20f7 */
  if (!C.zf) goto L_106a20f7;
  /* 106a203d call dword ptr [0x106d12b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b8))), 0x106a2043u);
  /* 106a2043 mov dword ptr [0x106cf490], eax */
  w32((uint32_t)(0x106cf490), (EAX));
  /* 106a2048 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a204a call 0x106a5af0 */
  push32(0x106a204fu); f_106a5af0();
  /* 106a204f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a2054 jne 0x106a205d */
  if (!C.zf) goto L_106a205d;
  /* 106a2056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a2058 jmp 0x106a2165 */
  goto L_106a2165;
L_106a205d:;
  /* 106a205d mov eax, dword ptr [0x106cf490] */
  EAX = (r32((uint32_t)(0x106cf490)));
  /* 106a2062 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 106a2065 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a206a mov dword ptr [0x106cf49c], eax */
  w32((uint32_t)(0x106cf49c), (EAX));
  /* 106a206f mov ecx, dword ptr [0x106cf490] */
  ECX = (r32((uint32_t)(0x106cf490)));
  /* 106a2075 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a207b mov dword ptr [0x106cf498], ecx */
  w32((uint32_t)(0x106cf498), (ECX));
  /* 106a2081 mov edx, dword ptr [0x106cf498] */
  EDX = (r32((uint32_t)(0x106cf498)));
  /* 106a2087 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106a208a add edx, dword ptr [0x106cf49c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106cf49c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2090 mov dword ptr [0x106cf494], edx */
  w32((uint32_t)(0x106cf494), (EDX));
  /* 106a2096 mov eax, dword ptr [0x106cf490] */
  EAX = (r32((uint32_t)(0x106cf490)));
  /* 106a209b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106a209e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a20a3 mov dword ptr [0x106cf490], eax */
  w32((uint32_t)(0x106cf490), (EAX));
  /* 106a20a8 call 0x106a2c60 */
  push32(0x106a20adu); f_106a2c60();
  /* 106a20ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a20af jne 0x106a20bd */
  if (!C.zf) goto L_106a20bd;
  /* 106a20b1 call 0x106a5b40 */
  push32(0x106a20b6u); f_106a5b40();
  /* 106a20b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a20b8 jmp 0x106a2165 */
  goto L_106a2165;
L_106a20bd:;
  /* 106a20bd call dword ptr [0x106d12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12b4))), 0x106a20c3u);
  /* 106a20c3 mov dword ptr [0x106d0fcc], eax */
  w32((uint32_t)(0x106d0fcc), (EAX));
  /* 106a20c8 call 0x106a58d0 */
  push32(0x106a20cdu); f_106a58d0();
  /* 106a20cd mov dword ptr [0x106cf478], eax */
  w32((uint32_t)(0x106cf478), (EAX));
  /* 106a20d2 call 0x106a2f10 */
  push32(0x106a20d7u); f_106a2f10();
  /* 106a20d7 call 0x106a53c0 */
  push32(0x106a20dcu); f_106a53c0();
  /* 106a20dc call 0x106a5270 */
  push32(0x106a20e1u); f_106a5270();
  /* 106a20e1 call 0x106a2a60 */
  push32(0x106a20e6u); f_106a2a60();
  /* 106a20e6 mov ecx, dword ptr [0x106cf474] */
  ECX = (r32((uint32_t)(0x106cf474)));
  /* 106a20ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a20ef mov dword ptr [0x106cf474], ecx */
  w32((uint32_t)(0x106cf474), (ECX));
  /* 106a20f5 jmp 0x106a2160 */
  goto L_106a2160;
L_106a20f7:;
  /* 106a20f7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a20fb jne 0x106a2150 */
  if (!C.zf) goto L_106a2150;
  /* 106a20fd cmp dword ptr [0x106cf474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2104 jle 0x106a214a */
  if ((C.zf||C.sf!=C.of)) goto L_106a214a;
  /* 106a2106 mov edx, dword ptr [0x106cf474] */
  EDX = (r32((uint32_t)(0x106cf474)));
  /* 106a210c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a210f mov dword ptr [0x106cf474], edx */
  w32((uint32_t)(0x106cf474), (EDX));
  /* 106a2115 cmp dword ptr [0x106cf4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a211c jne 0x106a2123 */
  if (!C.zf) goto L_106a2123;
  /* 106a211e call 0x106a2ae0 */
  push32(0x106a2123u); f_106a2ae0();
L_106a2123:;
  /* 106a2123 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106a2125 call 0x106a4810 */
  push32(0x106a212au); f_106a4810();
  /* 106a212a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a212d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106a2130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a2132 je 0x106a2139 */
  if (C.zf) goto L_106a2139;
  /* 106a2134 call 0x106a5120 */
  push32(0x106a2139u); f_106a5120();
L_106a2139:;
  /* 106a2139 call 0x106a3240 */
  push32(0x106a213eu); f_106a3240();
  /* 106a213e call 0x106a2cf0 */
  push32(0x106a2143u); f_106a2cf0();
  /* 106a2143 call 0x106a5b40 */
  push32(0x106a2148u); f_106a5b40();
  /* 106a2148 jmp 0x106a214e */
  goto L_106a214e;
L_106a214a:;
  /* 106a214a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a214c jmp 0x106a2165 */
  goto L_106a2165;
L_106a214e:;
  /* 106a214e jmp 0x106a2160 */
  goto L_106a2160;
L_106a2150:;
  /* 106a2150 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2154 jne 0x106a2160 */
  if (!C.zf) goto L_106a2160;
  /* 106a2156 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2158 call 0x106a2de0 */
  push32(0x106a215du); f_106a2de0();
  /* 106a215d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2160:;
  /* 106a2160 mov eax, 1 */
  EAX = (0x1u);
L_106a2165:;
  /* 106a2165 pop ebp */
  EBP = (pop32());
  /* 106a2166 ret 0xc */
  ESPCHK(0x106a2030u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x106a2170 (243 bytes, 86 insns) */
void f_106a2170(void) {
  FTRACE(0x106a2170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2170 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2171 mov ebp, esp */
  EBP = (ESP);
  /* 106a2173 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2174 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106a217b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a217f jne 0x106a2191 */
  if (!C.zf) goto L_106a2191;
  /* 106a2181 cmp dword ptr [0x106cf474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2188 jne 0x106a2191 */
  if (!C.zf) goto L_106a2191;
  /* 106a218a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a218c jmp 0x106a225d */
  goto L_106a225d;
L_106a2191:;
  /* 106a2191 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2195 je 0x106a219d */
  if (C.zf) goto L_106a219d;
  /* 106a2197 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a219b jne 0x106a21df */
  if (!C.zf) goto L_106a21df;
L_106a219d:;
  /* 106a219d cmp dword ptr [0x106d0fdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a21a4 je 0x106a21bb */
  if (C.zf) goto L_106a21bb;
  /* 106a21a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a21a9 push eax */
  push32((uint32_t)(EAX));
  /* 106a21aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a21ad push ecx */
  push32((uint32_t)(ECX));
  /* 106a21ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a21b1 push edx */
  push32((uint32_t)(EDX));
  /* 106a21b2 call dword ptr [0x106d0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d0fdc))), 0x106a21b8u);
  /* 106a21b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a21bb:;
  /* 106a21bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a21bf je 0x106a21d5 */
  if (C.zf) goto L_106a21d5;
  /* 106a21c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a21c4 push eax */
  push32((uint32_t)(EAX));
  /* 106a21c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a21c8 push ecx */
  push32((uint32_t)(ECX));
  /* 106a21c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a21cc push edx */
  push32((uint32_t)(EDX));
  /* 106a21cd call 0x106a2030 */
  push32(0x106a21d2u); f_106a2030();
  /* 106a21d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a21d5:;
  /* 106a21d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a21d9 jne 0x106a21df */
  if (!C.zf) goto L_106a21df;
  /* 106a21db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a21dd jmp 0x106a225d */
  goto L_106a225d;
L_106a21df:;
  /* 106a21df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a21e2 push eax */
  push32((uint32_t)(EAX));
  /* 106a21e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a21e6 push ecx */
  push32((uint32_t)(ECX));
  /* 106a21e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a21ea push edx */
  push32((uint32_t)(EDX));
  /* 106a21eb call 0x106a100f */
  push32(0x106a21f0u); f_106a100f();
  /* 106a21f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a21f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a21f7 jne 0x106a220e */
  if (!C.zf) goto L_106a220e;
  /* 106a21f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a21fd jne 0x106a220e */
  if (!C.zf) goto L_106a220e;
  /* 106a21ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a2202 push eax */
  push32((uint32_t)(EAX));
  /* 106a2203 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2208 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2209 call 0x106a2030 */
  push32(0x106a220eu); f_106a2030();
L_106a220e:;
  /* 106a220e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2212 je 0x106a221a */
  if (C.zf) goto L_106a221a;
  /* 106a2214 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2218 jne 0x106a225a */
  if (!C.zf) goto L_106a225a;
L_106a221a:;
  /* 106a221a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a221d push edx */
  push32((uint32_t)(EDX));
  /* 106a221e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a2221 push eax */
  push32((uint32_t)(EAX));
  /* 106a2222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2225 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2226 call 0x106a2030 */
  push32(0x106a222bu); f_106a2030();
  /* 106a222b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a222d jne 0x106a2236 */
  if (!C.zf) goto L_106a2236;
  /* 106a222f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106a2236:;
  /* 106a2236 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a223a je 0x106a225a */
  if (C.zf) goto L_106a225a;
  /* 106a223c cmp dword ptr [0x106d0fdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2243 je 0x106a225a */
  if (C.zf) goto L_106a225a;
  /* 106a2245 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a2248 push edx */
  push32((uint32_t)(EDX));
  /* 106a2249 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a224c push eax */
  push32((uint32_t)(EAX));
  /* 106a224d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2250 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2251 call dword ptr [0x106d0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d0fdc))), 0x106a2257u);
  /* 106a2257 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a225a:;
  /* 106a225a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106a225d:;
  /* 106a225d mov esp, ebp */
  ESP = (EBP);
  /* 106a225f pop ebp */
  EBP = (pop32());
  /* 106a2260 ret 0xc */
  ESPCHK(0x106a2170u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x106a2270 (58 bytes, 18 insns) */
void f_106a2270(void) {
  FTRACE(0x106a2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2270 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2271 mov ebp, esp */
  EBP = (ESP);
  /* 106a2273 cmp dword ptr [0x106cf480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a227a je 0x106a228e */
  if (C.zf) goto L_106a228e;
  /* 106a227c cmp dword ptr [0x106cf480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2283 jne 0x106a2293 */
  if (!C.zf) goto L_106a2293;
  /* 106a2285 cmp dword ptr [0x106cf484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a228c jne 0x106a2293 */
  if (!C.zf) goto L_106a2293;
L_106a228e:;
  /* 106a228e call 0x106a5be0 */
  push32(0x106a2293u); f_106a5be0();
L_106a2293:;
  /* 106a2293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2296 push eax */
  push32((uint32_t)(EAX));
  /* 106a2297 call 0x106a5c30 */
  push32(0x106a229cu); f_106a5c30();
  /* 106a229c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a229f push 0xff */
  push32((uint32_t)(0xffu));
  /* 106a22a4 call dword ptr [0x106cda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cda30))), 0x106a22aau);
  /* 106a22aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a22ad pop ebp */
  EBP = (pop32());
  /* 106a22ae ret  */
  ESPCHK(0x106a2270u, _esp0);
  ESP += 4; return;
}

/* FUN_100022b0 @ 0x106a22b0 (11 bytes, 5 insns) */
void f_106a22b0(void) {
  FTRACE(0x106a22b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a22b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a22b1 mov ebp, esp */
  EBP = (ESP);
  /* 106a22b3 call dword ptr [0x106d12bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12bc))), 0x106a22b9u);
  /* 106a22b9 pop ebp */
  EBP = (pop32());
  /* 106a22ba ret  */
  ESPCHK(0x106a22b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022c0 @ 0x106a22c0 (87 bytes, 30 insns) */
void f_106a22c0(void) {
  FTRACE(0x106a22c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a22c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a22c1 mov ebp, esp */
  EBP = (ESP);
  /* 106a22c3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a22c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a22c8 jl 0x106a22d0 */
  if ((C.sf!=C.of)) goto L_106a22d0;
  /* 106a22ca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a22ce jl 0x106a22d5 */
  if ((C.sf!=C.of)) goto L_106a22d5;
L_106a22d0:;
  /* 106a22d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a22d3 jmp 0x106a2313 */
  goto L_106a2313;
L_106a22d5:;
  /* 106a22d5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a22d9 jne 0x106a22e7 */
  if (!C.zf) goto L_106a22e7;
  /* 106a22db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a22de mov eax, dword ptr [eax*4 + 0x106cda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x106cda38)));
  /* 106a22e5 jmp 0x106a2313 */
  goto L_106a2313;
L_106a22e7:;
  /* 106a22e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a22ea and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 106a22ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a22ef je 0x106a22f6 */
  if (C.zf) goto L_106a22f6;
  /* 106a22f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a22f4 jmp 0x106a2313 */
  goto L_106a2313;
L_106a22f6:;
  /* 106a22f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a22f9 mov eax, dword ptr [edx*4 + 0x106cda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106cda38)));
  /* 106a2300 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a2303 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2306 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a2309 mov dword ptr [ecx*4 + 0x106cda38], edx */
  w32((uint32_t)(ECX*4 + 0x106cda38), (EDX));
  /* 106a2310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106a2313:;
  /* 106a2313 mov esp, ebp */
  ESP = (EBP);
  /* 106a2315 pop ebp */
  EBP = (pop32());
  /* 106a2316 ret  */
  ESPCHK(0x106a22c0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x106a2320 (126 bytes, 38 insns) */
void f_106a2320(void) {
  FTRACE(0x106a2320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2320 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2321 mov ebp, esp */
  EBP = (ESP);
  /* 106a2323 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2324 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2328 jl 0x106a2330 */
  if ((C.sf!=C.of)) goto L_106a2330;
  /* 106a232a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a232e jl 0x106a2337 */
  if ((C.sf!=C.of)) goto L_106a2337;
L_106a2330:;
  /* 106a2330 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 106a2335 jmp 0x106a239a */
  goto L_106a239a;
L_106a2337:;
  /* 106a2337 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a233b jne 0x106a2349 */
  if (!C.zf) goto L_106a2349;
  /* 106a233d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2340 mov eax, dword ptr [eax*4 + 0x106cda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x106cda44)));
  /* 106a2347 jmp 0x106a239a */
  goto L_106a239a;
L_106a2349:;
  /* 106a2349 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a234c mov edx, dword ptr [ecx*4 + 0x106cda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cda44)));
  /* 106a2353 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a2356 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a235a jne 0x106a2370 */
  if (!C.zf) goto L_106a2370;
  /* 106a235c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 106a235e call dword ptr [0x106d12c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c0))), 0x106a2364u);
  /* 106a2364 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2367 mov dword ptr [ecx*4 + 0x106cda44], eax */
  w32((uint32_t)(ECX*4 + 0x106cda44), (EAX));
  /* 106a236e jmp 0x106a2397 */
  goto L_106a2397;
L_106a2370:;
  /* 106a2370 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2374 jne 0x106a238a */
  if (!C.zf) goto L_106a238a;
  /* 106a2376 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106a2378 call dword ptr [0x106d12c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c0))), 0x106a237eu);
  /* 106a237e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2381 mov dword ptr [edx*4 + 0x106cda44], eax */
  w32((uint32_t)(EDX*4 + 0x106cda44), (EAX));
  /* 106a2388 jmp 0x106a2397 */
  goto L_106a2397;
L_106a238a:;
  /* 106a238a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a238d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a2390 mov dword ptr [eax*4 + 0x106cda44], ecx */
  w32((uint32_t)(EAX*4 + 0x106cda44), (ECX));
L_106a2397:;
  /* 106a2397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106a239a:;
  /* 106a239a mov esp, ebp */
  ESP = (EBP);
  /* 106a239c pop ebp */
  EBP = (pop32());
  /* 106a239d ret  */
  ESPCHK(0x106a2320u, _esp0);
  ESP += 4; return;
}

/* FUN_100023a0 @ 0x106a23a0 (28 bytes, 11 insns) */
void f_106a23a0(void) {
  FTRACE(0x106a23a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a23a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a23a1 mov ebp, esp */
  EBP = (ESP);
  /* 106a23a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a23a4 mov eax, dword ptr [0x106d0fc0] */
  EAX = (r32((uint32_t)(0x106d0fc0)));
  /* 106a23a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a23ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a23af mov dword ptr [0x106d0fc0], ecx */
  w32((uint32_t)(0x106d0fc0), (ECX));
  /* 106a23b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a23b8 mov esp, ebp */
  ESP = (EBP);
  /* 106a23ba pop ebp */
  EBP = (pop32());
  /* 106a23bb ret  */
  ESPCHK(0x106a23a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023c0 @ 0x106a23c0 (912 bytes, 248 insns) */
void f_106a23c0(void) {
  FTRACE(0x106a23c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a23c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a23c1 mov ebp, esp */
  EBP = (ESP);
  /* 106a23c3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 106a23c8 call 0x106a64a0 */
  push32(0x106a23cdu); f_106a64a0();
  /* 106a23cd push edi */
  push32((uint32_t)(EDI));
  /* 106a23ce mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 106a23d5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106a23da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a23dc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 106a23e2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106a23e4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106a23e6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106a23e7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 106a23ee mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106a23f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a23f5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 106a23fb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106a23fd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106a23ff stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106a2400 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 106a2407 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106a240c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a240e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 106a2414 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106a2416 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106a2418 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106a2419 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 106a241c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 106a2422 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2426 jl 0x106a242e */
  if ((C.sf!=C.of)) goto L_106a242e;
  /* 106a2428 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a242c jl 0x106a2436 */
  if ((C.sf!=C.of)) goto L_106a2436;
L_106a242e:;
  /* 106a242e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a2431 jmp 0x106a274b */
  goto L_106a274b;
L_106a2436:;
  /* 106a2436 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a243a jne 0x106a24e0 */
  if (!C.zf) goto L_106a24e0;
  /* 106a2440 push 0x106cda34 */
  push32((uint32_t)(0x106cda34u));
  /* 106a2445 call dword ptr [0x106d12d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d8))), 0x106a244bu);
  /* 106a244b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a244d jle 0x106a24e0 */
  if ((C.zf||C.sf!=C.of)) goto L_106a24e0;
  /* 106a2453 cmp dword ptr [0x106cf488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a245a jne 0x106a249e */
  if (!C.zf) goto L_106a249e;
  /* 106a245c push 0x106ca2b8 */
  push32((uint32_t)(0x106ca2b8u));
  /* 106a2461 call dword ptr [0x106d12d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d4))), 0x106a2467u);
  /* 106a2467 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 106a246d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2474 je 0x106a2496 */
  if (C.zf) goto L_106a2496;
  /* 106a2476 push 0x106ca2ac */
  push32((uint32_t)(0x106ca2acu));
  /* 106a247b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 106a2481 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2482 call dword ptr [0x106d12d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d0))), 0x106a2488u);
  /* 106a2488 mov dword ptr [0x106cf488], eax */
  w32((uint32_t)(0x106cf488), (EAX));
  /* 106a248d cmp dword ptr [0x106cf488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2494 jne 0x106a249e */
  if (!C.zf) goto L_106a249e;
L_106a2496:;
  /* 106a2496 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a2499 jmp 0x106a274b */
  goto L_106a274b;
L_106a249e:;
  /* 106a249e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a24a1 push edx */
  push32((uint32_t)(EDX));
  /* 106a24a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a24a5 push eax */
  push32((uint32_t)(EAX));
  /* 106a24a6 push 0x106ca278 */
  push32((uint32_t)(0x106ca278u));
  /* 106a24ab lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 106a24b1 push ecx */
  push32((uint32_t)(ECX));
  /* 106a24b2 call dword ptr [0x106cf488] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf488))), 0x106a24b8u);
  /* 106a24b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a24bb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106a24c1 push edx */
  push32((uint32_t)(EDX));
  /* 106a24c2 call dword ptr [0x106d12cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12cc))), 0x106a24c8u);
  /* 106a24c8 push 0x106cda34 */
  push32((uint32_t)(0x106cda34u));
  /* 106a24cd call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106a24d3u);
  /* 106a24d3 call 0x106a22b0 */
  push32(0x106a24d8u); f_106a22b0();
  /* 106a24d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a24db jmp 0x106a274b */
  goto L_106a274b;
L_106a24e0:;
  /* 106a24e0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a24e4 je 0x106a251d */
  if (C.zf) goto L_106a251d;
  /* 106a24e6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 106a24ec push eax */
  push32((uint32_t)(EAX));
  /* 106a24ed mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a24f0 push ecx */
  push32((uint32_t)(ECX));
  /* 106a24f1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 106a24f6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 106a24fc push edx */
  push32((uint32_t)(EDX));
  /* 106a24fd call 0x106a63a0 */
  push32(0x106a2502u); f_106a63a0();
  /* 106a2502 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a2507 jge 0x106a251d */
  if ((C.sf==C.of)) goto L_106a251d;
  /* 106a2509 push 0x106ca24c */
  push32((uint32_t)(0x106ca24cu));
  /* 106a250e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 106a2514 push eax */
  push32((uint32_t)(EAX));
  /* 106a2515 call 0x106a62b0 */
  push32(0x106a251au); f_106a62b0();
  /* 106a251a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a251d:;
  /* 106a251d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2521 jne 0x106a2555 */
  if (!C.zf) goto L_106a2555;
  /* 106a2523 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2527 je 0x106a2535 */
  if (C.zf) goto L_106a2535;
  /* 106a2529 mov dword ptr [ebp - 0x3028], 0x106ca238 */
  w32((uint32_t)(EBP + -0x3028), (0x106ca238u));
  /* 106a2533 jmp 0x106a253f */
  goto L_106a253f;
L_106a2535:;
  /* 106a2535 mov dword ptr [ebp - 0x3028], 0x106ca224 */
  w32((uint32_t)(EBP + -0x3028), (0x106ca224u));
L_106a253f:;
  /* 106a253f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 106a2545 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2546 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 106a254c push edx */
  push32((uint32_t)(EDX));
  /* 106a254d call 0x106a62b0 */
  push32(0x106a2552u); f_106a62b0();
  /* 106a2552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2555:;
  /* 106a2555 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 106a255b push eax */
  push32((uint32_t)(EAX));
  /* 106a255c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 106a2562 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2563 call 0x106a62c0 */
  push32(0x106a2568u); f_106a62c0();
  /* 106a2568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a256b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a256f jne 0x106a25aa */
  if (!C.zf) goto L_106a25aa;
  /* 106a2571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2574 mov eax, dword ptr [edx*4 + 0x106cda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106cda38)));
  /* 106a257b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106a257e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a2580 je 0x106a2596 */
  if (C.zf) goto L_106a2596;
  /* 106a2582 push 0x106ca220 */
  push32((uint32_t)(0x106ca220u));
  /* 106a2587 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 106a258d push ecx */
  push32((uint32_t)(ECX));
  /* 106a258e call 0x106a62c0 */
  push32(0x106a2593u); f_106a62c0();
  /* 106a2593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2596:;
  /* 106a2596 push 0x106ca21c */
  push32((uint32_t)(0x106ca21cu));
  /* 106a259b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 106a25a1 push edx */
  push32((uint32_t)(EDX));
  /* 106a25a2 call 0x106a62c0 */
  push32(0x106a25a7u); f_106a62c0();
  /* 106a25a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a25aa:;
  /* 106a25aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a25ae je 0x106a25f2 */
  if (C.zf) goto L_106a25f2;
  /* 106a25b0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 106a25b6 push eax */
  push32((uint32_t)(EAX));
  /* 106a25b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a25ba push ecx */
  push32((uint32_t)(ECX));
  /* 106a25bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a25be push edx */
  push32((uint32_t)(EDX));
  /* 106a25bf push 0x106ca210 */
  push32((uint32_t)(0x106ca210u));
  /* 106a25c4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106a25c9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 106a25cf push eax */
  push32((uint32_t)(EAX));
  /* 106a25d0 call 0x106a61b0 */
  push32(0x106a25d5u); f_106a61b0();
  /* 106a25d5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a25d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a25da jge 0x106a25f0 */
  if ((C.sf==C.of)) goto L_106a25f0;
  /* 106a25dc push 0x106ca24c */
  push32((uint32_t)(0x106ca24cu));
  /* 106a25e1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 106a25e7 push ecx */
  push32((uint32_t)(ECX));
  /* 106a25e8 call 0x106a62b0 */
  push32(0x106a25edu); f_106a62b0();
  /* 106a25ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a25f0:;
  /* 106a25f0 jmp 0x106a2608 */
  goto L_106a2608;
L_106a25f2:;
  /* 106a25f2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 106a25f8 push edx */
  push32((uint32_t)(EDX));
  /* 106a25f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 106a25ff push eax */
  push32((uint32_t)(EAX));
  /* 106a2600 call 0x106a62b0 */
  push32(0x106a2605u); f_106a62b0();
  /* 106a2605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2608:;
  /* 106a2608 cmp dword ptr [0x106d0fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a260f je 0x106a264c */
  if (C.zf) goto L_106a264c;
  /* 106a2611 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 106a2617 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2618 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106a261e push edx */
  push32((uint32_t)(EDX));
  /* 106a261f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2622 push eax */
  push32((uint32_t)(EAX));
  /* 106a2623 call dword ptr [0x106d0fc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d0fc0))), 0x106a2629u);
  /* 106a2629 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a262c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a262e je 0x106a264c */
  if (C.zf) goto L_106a264c;
  /* 106a2630 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2634 jne 0x106a2641 */
  if (!C.zf) goto L_106a2641;
  /* 106a2636 push 0x106cda34 */
  push32((uint32_t)(0x106cda34u));
  /* 106a263b call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106a2641u);
L_106a2641:;
  /* 106a2641 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 106a2647 jmp 0x106a274b */
  goto L_106a274b;
L_106a264c:;
  /* 106a264c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a264f mov edx, dword ptr [ecx*4 + 0x106cda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cda38)));
  /* 106a2656 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106a2659 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a265b je 0x106a269b */
  if (C.zf) goto L_106a269b;
  /* 106a265d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2660 cmp dword ptr [eax*4 + 0x106cda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x106cda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2668 je 0x106a269b */
  if (C.zf) goto L_106a269b;
  /* 106a266a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a266c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 106a2672 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2673 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106a2679 push edx */
  push32((uint32_t)(EDX));
  /* 106a267a call 0x106a6130 */
  push32(0x106a267fu); f_106a6130();
  /* 106a267f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2682 push eax */
  push32((uint32_t)(EAX));
  /* 106a2683 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 106a2689 push eax */
  push32((uint32_t)(EAX));
  /* 106a268a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a268d mov edx, dword ptr [ecx*4 + 0x106cda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cda44)));
  /* 106a2694 push edx */
  push32((uint32_t)(EDX));
  /* 106a2695 call dword ptr [0x106d12c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c4))), 0x106a269bu);
L_106a269b:;
  /* 106a269b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a269e mov ecx, dword ptr [eax*4 + 0x106cda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x106cda38)));
  /* 106a26a5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 106a26a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a26aa je 0x106a26b9 */
  if (C.zf) goto L_106a26b9;
  /* 106a26ac lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106a26b2 push edx */
  push32((uint32_t)(EDX));
  /* 106a26b3 call dword ptr [0x106d12cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12cc))), 0x106a26b9u);
L_106a26b9:;
  /* 106a26b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a26bc mov ecx, dword ptr [eax*4 + 0x106cda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x106cda38)));
  /* 106a26c3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106a26c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a26c8 je 0x106a2738 */
  if (C.zf) goto L_106a2738;
  /* 106a26ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a26ce je 0x106a26ed */
  if (C.zf) goto L_106a26ed;
  /* 106a26d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 106a26d2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 106a26d8 push edx */
  push32((uint32_t)(EDX));
  /* 106a26d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a26dc push eax */
  push32((uint32_t)(EAX));
  /* 106a26dd call 0x106a5e40 */
  push32(0x106a26e2u); f_106a5e40();
  /* 106a26e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a26e5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 106a26eb jmp 0x106a26f7 */
  goto L_106a26f7;
L_106a26ed:;
  /* 106a26ed mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_106a26f7:;
  /* 106a26f7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 106a26fd push ecx */
  push32((uint32_t)(ECX));
  /* 106a26fe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a2701 push edx */
  push32((uint32_t)(EDX));
  /* 106a2702 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 106a2708 push eax */
  push32((uint32_t)(EAX));
  /* 106a2709 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a270c push ecx */
  push32((uint32_t)(ECX));
  /* 106a270d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2710 push edx */
  push32((uint32_t)(EDX));
  /* 106a2711 call 0x106a2750 */
  push32(0x106a2716u); f_106a2750();
  /* 106a2716 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2719 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 106a271f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2723 jne 0x106a2730 */
  if (!C.zf) goto L_106a2730;
  /* 106a2725 push 0x106cda34 */
  push32((uint32_t)(0x106cda34u));
  /* 106a272a call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106a2730u);
L_106a2730:;
  /* 106a2730 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 106a2736 jmp 0x106a274b */
  goto L_106a274b;
L_106a2738:;
  /* 106a2738 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a273c jne 0x106a2749 */
  if (!C.zf) goto L_106a2749;
  /* 106a273e push 0x106cda34 */
  push32((uint32_t)(0x106cda34u));
  /* 106a2743 call dword ptr [0x106d12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c8))), 0x106a2749u);
L_106a2749:;
  /* 106a2749 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a274b:;
  /* 106a274b pop edi */
  EDI = (pop32());
  /* 106a274c mov esp, ebp */
  ESP = (EBP);
  /* 106a274e pop ebp */
  EBP = (pop32());
  /* 106a274f ret  */
  ESPCHK(0x106a23c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x106a2750 (780 bytes, 197 insns) */
void f_106a2750(void) {
  FTRACE(0x106a2750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2750 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2751 mov ebp, esp */
  EBP = (ESP);
  /* 106a2753 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 106a2758 call 0x106a64a0 */
  push32(0x106a275du); f_106a64a0();
L_106a275d:;
  /* 106a275d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2761 jne 0x106a2788 */
  if (!C.zf) goto L_106a2788;
  /* 106a2763 push 0x106ca408 */
  push32((uint32_t)(0x106ca408u));
  /* 106a2768 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a276a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 106a276f push 0x106ca3fc */
  push32((uint32_t)(0x106ca3fcu));
  /* 106a2774 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2776 call 0x106a23c0 */
  push32(0x106a277bu); f_106a23c0();
  /* 106a277b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a277e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2781 jne 0x106a2788 */
  if (!C.zf) goto L_106a2788;
  /* 106a2783 call 0x106a22b0 */
  push32(0x106a2788u); f_106a22b0();
L_106a2788:;
  /* 106a2788 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a278a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a278c jne 0x106a275d */
  if (!C.zf) goto L_106a275d;
  /* 106a278e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 106a2793 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 106a2799 push ecx */
  push32((uint32_t)(ECX));
  /* 106a279a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a279c call dword ptr [0x106d12dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12dc))), 0x106a27a2u);
  /* 106a27a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a27a4 jne 0x106a27ba */
  if (!C.zf) goto L_106a27ba;
  /* 106a27a6 push 0x106ca3e4 */
  push32((uint32_t)(0x106ca3e4u));
  /* 106a27ab lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 106a27b1 push edx */
  push32((uint32_t)(EDX));
  /* 106a27b2 call 0x106a62b0 */
  push32(0x106a27b7u); f_106a62b0();
  /* 106a27b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a27ba:;
  /* 106a27ba lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 106a27c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a27c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a27c6 push ecx */
  push32((uint32_t)(ECX));
  /* 106a27c7 call 0x106a6130 */
  push32(0x106a27ccu); f_106a6130();
  /* 106a27cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a27cf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a27d2 jbe 0x106a27fd */
  if ((C.cf||C.zf)) goto L_106a27fd;
  /* 106a27d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a27d7 push edx */
  push32((uint32_t)(EDX));
  /* 106a27d8 call 0x106a6130 */
  push32(0x106a27ddu); f_106a6130();
  /* 106a27dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a27e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a27e3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 106a27e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a27ea push 3 */
  push32((uint32_t)(0x3u));
  /* 106a27ec push 0x106ca3e0 */
  push32((uint32_t)(0x106ca3e0u));
  /* 106a27f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a27f4 push eax */
  push32((uint32_t)(EAX));
  /* 106a27f5 call 0x106a6b20 */
  push32(0x106a27fau); f_106a6b20();
  /* 106a27fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a27fd:;
  /* 106a27fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a2800 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 106a2806 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a280d je 0x106a2858 */
  if (C.zf) goto L_106a2858;
  /* 106a280f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106a2815 push edx */
  push32((uint32_t)(EDX));
  /* 106a2816 call 0x106a6130 */
  push32(0x106a281bu); f_106a6130();
  /* 106a281b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a281e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2821 jbe 0x106a2858 */
  if ((C.cf||C.zf)) goto L_106a2858;
  /* 106a2823 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106a2829 push eax */
  push32((uint32_t)(EAX));
  /* 106a282a call 0x106a6130 */
  push32(0x106a282fu); f_106a6130();
  /* 106a282f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2832 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106a2838 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 106a283c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 106a2842 push 3 */
  push32((uint32_t)(0x3u));
  /* 106a2844 push 0x106ca3e0 */
  push32((uint32_t)(0x106ca3e0u));
  /* 106a2849 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106a284f push eax */
  push32((uint32_t)(EAX));
  /* 106a2850 call 0x106a6b20 */
  push32(0x106a2855u); f_106a6b20();
  /* 106a2855 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2858:;
  /* 106a2858 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a285c jne 0x106a286a */
  if (!C.zf) goto L_106a286a;
  /* 106a285e mov dword ptr [ebp - 0x1114], 0x106ca36c */
  w32((uint32_t)(EBP + -0x1114), (0x106ca36cu));
  /* 106a2868 jmp 0x106a2874 */
  goto L_106a2874;
L_106a286a:;
  /* 106a286a mov dword ptr [ebp - 0x1114], 0x106ca10c */
  w32((uint32_t)(EBP + -0x1114), (0x106ca10cu));
L_106a2874:;
  /* 106a2874 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a2877 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106a287a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a287c je 0x106a2889 */
  if (C.zf) goto L_106a2889;
  /* 106a287e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a2881 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 106a2887 jmp 0x106a2893 */
  goto L_106a2893;
L_106a2889:;
  /* 106a2889 mov dword ptr [ebp - 0x1118], 0x106ca10c */
  w32((uint32_t)(EBP + -0x1118), (0x106ca10cu));
L_106a2893:;
  /* 106a2893 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a2896 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106a2899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a289b je 0x106a28af */
  if (C.zf) goto L_106a28af;
  /* 106a289d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a28a1 jne 0x106a28af */
  if (!C.zf) goto L_106a28af;
  /* 106a28a3 mov dword ptr [ebp - 0x111c], 0x106ca35c */
  w32((uint32_t)(EBP + -0x111c), (0x106ca35cu));
  /* 106a28ad jmp 0x106a28b9 */
  goto L_106a28b9;
L_106a28af:;
  /* 106a28af mov dword ptr [ebp - 0x111c], 0x106ca10c */
  w32((uint32_t)(EBP + -0x111c), (0x106ca10cu));
L_106a28b9:;
  /* 106a28b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a28bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a28bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a28c1 je 0x106a28cf */
  if (C.zf) goto L_106a28cf;
  /* 106a28c3 mov dword ptr [ebp - 0x1120], 0x106ca358 */
  w32((uint32_t)(EBP + -0x1120), (0x106ca358u));
  /* 106a28cd jmp 0x106a28d9 */
  goto L_106a28d9;
L_106a28cf:;
  /* 106a28cf mov dword ptr [ebp - 0x1120], 0x106ca10c */
  w32((uint32_t)(EBP + -0x1120), (0x106ca10cu));
L_106a28d9:;
  /* 106a28d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a28dd je 0x106a28ea */
  if (C.zf) goto L_106a28ea;
  /* 106a28df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a28e2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 106a28e8 jmp 0x106a28f4 */
  goto L_106a28f4;
L_106a28ea:;
  /* 106a28ea mov dword ptr [ebp - 0x1124], 0x106ca10c */
  w32((uint32_t)(EBP + -0x1124), (0x106ca10cu));
L_106a28f4:;
  /* 106a28f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a28f8 je 0x106a2906 */
  if (C.zf) goto L_106a2906;
  /* 106a28fa mov dword ptr [ebp - 0x1128], 0x106ca350 */
  w32((uint32_t)(EBP + -0x1128), (0x106ca350u));
  /* 106a2904 jmp 0x106a2910 */
  goto L_106a2910;
L_106a2906:;
  /* 106a2906 mov dword ptr [ebp - 0x1128], 0x106ca10c */
  w32((uint32_t)(EBP + -0x1128), (0x106ca10cu));
L_106a2910:;
  /* 106a2910 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2914 je 0x106a2921 */
  if (C.zf) goto L_106a2921;
  /* 106a2916 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a2919 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 106a291f jmp 0x106a292b */
  goto L_106a292b;
L_106a2921:;
  /* 106a2921 mov dword ptr [ebp - 0x112c], 0x106ca10c */
  w32((uint32_t)(EBP + -0x112c), (0x106ca10cu));
L_106a292b:;
  /* 106a292b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a292f je 0x106a293d */
  if (C.zf) goto L_106a293d;
  /* 106a2931 mov dword ptr [ebp - 0x1130], 0x106ca348 */
  w32((uint32_t)(EBP + -0x1130), (0x106ca348u));
  /* 106a293b jmp 0x106a2947 */
  goto L_106a2947;
L_106a293d:;
  /* 106a293d mov dword ptr [ebp - 0x1130], 0x106ca10c */
  w32((uint32_t)(EBP + -0x1130), (0x106ca10cu));
L_106a2947:;
  /* 106a2947 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a294e je 0x106a295e */
  if (C.zf) goto L_106a295e;
  /* 106a2950 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106a2956 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 106a295c jmp 0x106a2968 */
  goto L_106a2968;
L_106a295e:;
  /* 106a295e mov dword ptr [ebp - 0x1134], 0x106ca10c */
  w32((uint32_t)(EBP + -0x1134), (0x106ca10cu));
L_106a2968:;
  /* 106a2968 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a296f je 0x106a297d */
  if (C.zf) goto L_106a297d;
  /* 106a2971 mov dword ptr [ebp - 0x1138], 0x106ca33c */
  w32((uint32_t)(EBP + -0x1138), (0x106ca33cu));
  /* 106a297b jmp 0x106a2987 */
  goto L_106a2987;
L_106a297d:;
  /* 106a297d mov dword ptr [ebp - 0x1138], 0x106ca10c */
  w32((uint32_t)(EBP + -0x1138), (0x106ca10cu));
L_106a2987:;
  /* 106a2987 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 106a298d push edx */
  push32((uint32_t)(EDX));
  /* 106a298e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 106a2994 push eax */
  push32((uint32_t)(EAX));
  /* 106a2995 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 106a299b push ecx */
  push32((uint32_t)(ECX));
  /* 106a299c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 106a29a2 push edx */
  push32((uint32_t)(EDX));
  /* 106a29a3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 106a29a9 push eax */
  push32((uint32_t)(EAX));
  /* 106a29aa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 106a29b0 push ecx */
  push32((uint32_t)(ECX));
  /* 106a29b1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 106a29b7 push edx */
  push32((uint32_t)(EDX));
  /* 106a29b8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 106a29be push eax */
  push32((uint32_t)(EAX));
  /* 106a29bf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 106a29c5 push ecx */
  push32((uint32_t)(ECX));
  /* 106a29c6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 106a29cc push edx */
  push32((uint32_t)(EDX));
  /* 106a29cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a29d0 push eax */
  push32((uint32_t)(EAX));
  /* 106a29d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a29d4 mov edx, dword ptr [ecx*4 + 0x106cda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cda50)));
  /* 106a29db push edx */
  push32((uint32_t)(EDX));
  /* 106a29dc push 0x106ca2e8 */
  push32((uint32_t)(0x106ca2e8u));
  /* 106a29e1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106a29e6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 106a29ec push eax */
  push32((uint32_t)(EAX));
  /* 106a29ed call 0x106a61b0 */
  push32(0x106a29f2u); f_106a61b0();
  /* 106a29f2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a29f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a29f7 jge 0x106a2a0d */
  if ((C.sf==C.of)) goto L_106a2a0d;
  /* 106a29f9 push 0x106ca24c */
  push32((uint32_t)(0x106ca24cu));
  /* 106a29fe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 106a2a04 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2a05 call 0x106a62b0 */
  push32(0x106a2a0au); f_106a62b0();
  /* 106a2a0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2a0d:;
  /* 106a2a0d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 106a2a12 push 0x106ca2c4 */
  push32((uint32_t)(0x106ca2c4u));
  /* 106a2a17 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 106a2a1d push edx */
  push32((uint32_t)(EDX));
  /* 106a2a1e call 0x106a6a60 */
  push32(0x106a2a23u); f_106a6a60();
  /* 106a2a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2a26 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 106a2a2c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2a33 jne 0x106a2a46 */
  if (!C.zf) goto L_106a2a46;
  /* 106a2a35 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 106a2a37 call 0x106a67a0 */
  push32(0x106a2a3cu); f_106a67a0();
  /* 106a2a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2a3f push 3 */
  push32((uint32_t)(0x3u));
  /* 106a2a41 call 0x106a2ac0 */
  push32(0x106a2a46u); f_106a2ac0();
L_106a2a46:;
  /* 106a2a46 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2a4d jne 0x106a2a56 */
  if (!C.zf) goto L_106a2a56;
  /* 106a2a4f mov eax, 1 */
  EAX = (0x1u);
  /* 106a2a54 jmp 0x106a2a58 */
  goto L_106a2a58;
L_106a2a56:;
  /* 106a2a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a2a58:;
  /* 106a2a58 mov esp, ebp */
  ESP = (EBP);
  /* 106a2a5a pop ebp */
  EBP = (pop32());
  /* 106a2a5b ret  */
  ESPCHK(0x106a2750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a60 @ 0x106a2a60 (56 bytes, 15 insns) */
void f_106a2a60(void) {
  FTRACE(0x106a2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2a61 mov ebp, esp */
  EBP = (ESP);
  /* 106a2a63 cmp dword ptr [0x106d0fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2a6a je 0x106a2a72 */
  if (C.zf) goto L_106a2a72;
  /* 106a2a6c call dword ptr [0x106d0fbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d0fbc))), 0x106a2a72u);
L_106a2a72:;
  /* 106a2a72 push 0x106cd418 */
  push32((uint32_t)(0x106cd418u));
  /* 106a2a77 push 0x106cd208 */
  push32((uint32_t)(0x106cd208u));
  /* 106a2a7c call 0x106a2c30 */
  push32(0x106a2a81u); f_106a2c30();
  /* 106a2a81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2a84 push 0x106cd104 */
  push32((uint32_t)(0x106cd104u));
  /* 106a2a89 push 0x106cd000 */
  push32((uint32_t)(0x106cd000u));
  /* 106a2a8e call 0x106a2c30 */
  push32(0x106a2a93u); f_106a2c30();
  /* 106a2a93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2a96 pop ebp */
  EBP = (pop32());
  /* 106a2a97 ret  */
  ESPCHK(0x106a2a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002aa0 @ 0x106a2aa0 (21 bytes, 10 insns) */
void f_106a2aa0(void) {
  FTRACE(0x106a2aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2aa1 mov ebp, esp */
  EBP = (ESP);
  /* 106a2aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2aa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2aaa push eax */
  push32((uint32_t)(EAX));
  /* 106a2aab call 0x106a2b20 */
  push32(0x106a2ab0u); f_106a2b20();
  /* 106a2ab0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2ab3 pop ebp */
  EBP = (pop32());
  /* 106a2ab4 ret  */
  ESPCHK(0x106a2aa0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x106a2ac0 (21 bytes, 10 insns) */
void f_106a2ac0(void) {
  FTRACE(0x106a2ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2ac1 mov ebp, esp */
  EBP = (ESP);
  /* 106a2ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2ac5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a2ac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2aca push eax */
  push32((uint32_t)(EAX));
  /* 106a2acb call 0x106a2b20 */
  push32(0x106a2ad0u); f_106a2b20();
  /* 106a2ad0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2ad3 pop ebp */
  EBP = (pop32());
  /* 106a2ad4 ret  */
  ESPCHK(0x106a2ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ae0 @ 0x106a2ae0 (19 bytes, 9 insns) */
void f_106a2ae0(void) {
  FTRACE(0x106a2ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2ae1 mov ebp, esp */
  EBP = (ESP);
  /* 106a2ae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a2ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2ae9 call 0x106a2b20 */
  push32(0x106a2aeeu); f_106a2b20();
  /* 106a2aee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2af1 pop ebp */
  EBP = (pop32());
  /* 106a2af2 ret  */
  ESPCHK(0x106a2ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b00 @ 0x106a2b00 (19 bytes, 9 insns) */
void f_106a2b00(void) {
  FTRACE(0x106a2b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2b00 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2b01 mov ebp, esp */
  EBP = (ESP);
  /* 106a2b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a2b05 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a2b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2b09 call 0x106a2b20 */
  push32(0x106a2b0eu); f_106a2b20();
  /* 106a2b0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2b11 pop ebp */
  EBP = (pop32());
  /* 106a2b12 ret  */
  ESPCHK(0x106a2b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x106a2b20 (227 bytes, 61 insns) */
void f_106a2b20(void) {
  FTRACE(0x106a2b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2b20 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2b21 mov ebp, esp */
  EBP = (ESP);
  /* 106a2b23 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2b24 call 0x106a2c10 */
  push32(0x106a2b29u); f_106a2c10();
  /* 106a2b29 cmp dword ptr [0x106cf4cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2b30 jne 0x106a2b43 */
  if (!C.zf) goto L_106a2b43;
  /* 106a2b32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2b35 push eax */
  push32((uint32_t)(EAX));
  /* 106a2b36 call dword ptr [0x106d12e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12e8))), 0x106a2b3cu);
  /* 106a2b3c push eax */
  push32((uint32_t)(EAX));
  /* 106a2b3d call dword ptr [0x106d12e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12e4))), 0x106a2b43u);
L_106a2b43:;
  /* 106a2b43 mov dword ptr [0x106cf4c8], 1 */
  w32((uint32_t)(0x106cf4c8), (0x1u));
  /* 106a2b4d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 106a2b50 mov byte ptr [0x106cf4c4], cl */
  w8((uint32_t)(0x106cf4c4), (CL));
  /* 106a2b56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2b5a jne 0x106a2ba3 */
  if (!C.zf) goto L_106a2ba3;
  /* 106a2b5c cmp dword ptr [0x106d0fb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2b63 je 0x106a2b91 */
  if (C.zf) goto L_106a2b91;
  /* 106a2b65 mov edx, dword ptr [0x106d0fb4] */
  EDX = (r32((uint32_t)(0x106d0fb4)));
  /* 106a2b6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106a2b6e:;
  /* 106a2b6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2b71 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a2b74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a2b77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2b7a cmp ecx, dword ptr [0x106d0fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106d0fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2b80 jb 0x106a2b91 */
  if (C.cf) goto L_106a2b91;
  /* 106a2b82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2b85 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2b88 je 0x106a2b8f */
  if (C.zf) goto L_106a2b8f;
  /* 106a2b8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2b8d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x106a2b8fu);
L_106a2b8f:;
  /* 106a2b8f jmp 0x106a2b6e */
  goto L_106a2b6e;
L_106a2b91:;
  /* 106a2b91 push 0x106cd724 */
  push32((uint32_t)(0x106cd724u));
  /* 106a2b96 push 0x106cd51c */
  push32((uint32_t)(0x106cd51cu));
  /* 106a2b9b call 0x106a2c30 */
  push32(0x106a2ba0u); f_106a2c30();
  /* 106a2ba0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2ba3:;
  /* 106a2ba3 push 0x106cd92c */
  push32((uint32_t)(0x106cd92cu));
  /* 106a2ba8 push 0x106cd828 */
  push32((uint32_t)(0x106cd828u));
  /* 106a2bad call 0x106a2c30 */
  push32(0x106a2bb2u); f_106a2c30();
  /* 106a2bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2bb5 cmp dword ptr [0x106cf4d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2bbc jne 0x106a2bde */
  if (!C.zf) goto L_106a2bde;
  /* 106a2bbe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106a2bc0 call 0x106a4810 */
  push32(0x106a2bc5u); f_106a4810();
  /* 106a2bc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2bc8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106a2bcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a2bcd je 0x106a2bde */
  if (C.zf) goto L_106a2bde;
  /* 106a2bcf mov dword ptr [0x106cf4d0], 1 */
  w32((uint32_t)(0x106cf4d0), (0x1u));
  /* 106a2bd9 call 0x106a5120 */
  push32(0x106a2bdeu); f_106a5120();
L_106a2bde:;
  /* 106a2bde cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2be2 je 0x106a2beb */
  if (C.zf) goto L_106a2beb;
  /* 106a2be4 call 0x106a2c20 */
  push32(0x106a2be9u); f_106a2c20();
  /* 106a2be9 jmp 0x106a2bff */
  goto L_106a2bff;
L_106a2beb:;
  /* 106a2beb mov dword ptr [0x106cf4cc], 1 */
  w32((uint32_t)(0x106cf4cc), (0x1u));
  /* 106a2bf5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2bf9 call dword ptr [0x106d12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12e0))), 0x106a2bffu);
L_106a2bff:;
  /* 106a2bff mov esp, ebp */
  ESP = (EBP);
  /* 106a2c01 pop ebp */
  EBP = (pop32());
  /* 106a2c02 ret  */
  ESPCHK(0x106a2b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c10 @ 0x106a2c10 (15 bytes, 7 insns) */
void f_106a2c10(void) {
  FTRACE(0x106a2c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2c10 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2c11 mov ebp, esp */
  EBP = (ESP);
  /* 106a2c13 push 0xd */
  push32((uint32_t)(0xdu));
  /* 106a2c15 call 0x106a6d00 */
  push32(0x106a2c1au); f_106a6d00();
  /* 106a2c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2c1d pop ebp */
  EBP = (pop32());
  /* 106a2c1e ret  */
  ESPCHK(0x106a2c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c20 @ 0x106a2c20 (15 bytes, 7 insns) */
void f_106a2c20(void) {
  FTRACE(0x106a2c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2c20 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2c21 mov ebp, esp */
  EBP = (ESP);
  /* 106a2c23 push 0xd */
  push32((uint32_t)(0xdu));
  /* 106a2c25 call 0x106a6da0 */
  push32(0x106a2c2au); f_106a6da0();
  /* 106a2c2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2c2d pop ebp */
  EBP = (pop32());
  /* 106a2c2e ret  */
  ESPCHK(0x106a2c20u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x106a2c30 (37 bytes, 16 insns) */
void f_106a2c30(void) {
  FTRACE(0x106a2c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2c30 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2c31 mov ebp, esp */
  EBP = (ESP);
L_106a2c33:;
  /* 106a2c33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2c36 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2c39 jae 0x106a2c53 */
  if (!C.cf) goto L_106a2c53;
  /* 106a2c3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2c3e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2c41 je 0x106a2c48 */
  if (C.zf) goto L_106a2c48;
  /* 106a2c43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2c46 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x106a2c48u);
L_106a2c48:;
  /* 106a2c48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2c4b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2c4e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106a2c51 jmp 0x106a2c33 */
  goto L_106a2c33;
L_106a2c53:;
  /* 106a2c53 pop ebp */
  EBP = (pop32());
  /* 106a2c54 ret  */
  ESPCHK(0x106a2c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c60 @ 0x106a2c60 (130 bytes, 42 insns) */
void f_106a2c60(void) {
  FTRACE(0x106a2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2c60 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2c61 mov ebp, esp */
  EBP = (ESP);
  /* 106a2c63 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2c64 call 0x106a6c20 */
  push32(0x106a2c69u); f_106a6c20();
  /* 106a2c69 call dword ptr [0x106d12f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12f4))), 0x106a2c6fu);
  /* 106a2c6f mov dword ptr [0x106cda5c], eax */
  w32((uint32_t)(0x106cda5c), (EAX));
  /* 106a2c74 cmp dword ptr [0x106cda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x106cda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2c7b jne 0x106a2c81 */
  if (!C.zf) goto L_106a2c81;
  /* 106a2c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a2c7f jmp 0x106a2cde */
  goto L_106a2cde;
L_106a2c81:;
  /* 106a2c81 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 106a2c83 push 0x106ca420 */
  push32((uint32_t)(0x106ca420u));
  /* 106a2c88 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2c8a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 106a2c8c push 1 */
  push32((uint32_t)(0x1u));
  /* 106a2c8e call 0x106a3710 */
  push32(0x106a2c93u); f_106a3710();
  /* 106a2c93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2c96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a2c99 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2c9d je 0x106a2cb4 */
  if (C.zf) goto L_106a2cb4;
  /* 106a2c9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2ca2 push eax */
  push32((uint32_t)(EAX));
  /* 106a2ca3 mov ecx, dword ptr [0x106cda5c] */
  ECX = (r32((uint32_t)(0x106cda5c)));
  /* 106a2ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2caa call dword ptr [0x106d12f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12f0))), 0x106a2cb0u);
  /* 106a2cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a2cb2 jne 0x106a2cb8 */
  if (!C.zf) goto L_106a2cb8;
L_106a2cb4:;
  /* 106a2cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a2cb6 jmp 0x106a2cde */
  goto L_106a2cde;
L_106a2cb8:;
  /* 106a2cb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2cbb push edx */
  push32((uint32_t)(EDX));
  /* 106a2cbc call 0x106a2d20 */
  push32(0x106a2cc1u); f_106a2d20();
  /* 106a2cc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2cc4 call dword ptr [0x106d12ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12ec))), 0x106a2ccau);
  /* 106a2cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2ccd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106a2ccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2cd2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 106a2cd9 mov eax, 1 */
  EAX = (0x1u);
L_106a2cde:;
  /* 106a2cde mov esp, ebp */
  ESP = (EBP);
  /* 106a2ce0 pop ebp */
  EBP = (pop32());
  /* 106a2ce1 ret  */
  ESPCHK(0x106a2c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf0 @ 0x106a2cf0 (41 bytes, 11 insns) */
void f_106a2cf0(void) {
  FTRACE(0x106a2cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2cf1 mov ebp, esp */
  EBP = (ESP);
  /* 106a2cf3 call 0x106a6c60 */
  push32(0x106a2cf8u); f_106a6c60();
  /* 106a2cf8 cmp dword ptr [0x106cda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x106cda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2cff je 0x106a2d17 */
  if (C.zf) goto L_106a2d17;
  /* 106a2d01 mov eax, dword ptr [0x106cda5c] */
  EAX = (r32((uint32_t)(0x106cda5c)));
  /* 106a2d06 push eax */
  push32((uint32_t)(EAX));
  /* 106a2d07 call dword ptr [0x106d12f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12f8))), 0x106a2d0du);
  /* 106a2d0d mov dword ptr [0x106cda5c], 0xffffffff */
  w32((uint32_t)(0x106cda5c), (0xffffffffu));
L_106a2d17:;
  /* 106a2d17 pop ebp */
  EBP = (pop32());
  /* 106a2d18 ret  */
  ESPCHK(0x106a2cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d20 @ 0x106a2d20 (25 bytes, 8 insns) */
void f_106a2d20(void) {
  FTRACE(0x106a2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2d20 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2d21 mov ebp, esp */
  EBP = (ESP);
  /* 106a2d23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2d26 mov dword ptr [eax + 0x50], 0x106cdc00 */
  w32((uint32_t)(EAX + 0x50), (0x106cdc00u));
  /* 106a2d2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2d30 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 106a2d37 pop ebp */
  EBP = (pop32());
  /* 106a2d38 ret  */
  ESPCHK(0x106a2d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d40 @ 0x106a2d40 (152 bytes, 48 insns) */
void f_106a2d40(void) {
  FTRACE(0x106a2d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2d40 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2d41 mov ebp, esp */
  EBP = (ESP);
  /* 106a2d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a2d46 call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106a2d4cu);
  /* 106a2d4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a2d4f mov eax, dword ptr [0x106cda5c] */
  EAX = (r32((uint32_t)(0x106cda5c)));
  /* 106a2d54 push eax */
  push32((uint32_t)(EAX));
  /* 106a2d55 call dword ptr [0x106d1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1300))), 0x106a2d5bu);
  /* 106a2d5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a2d5e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2d62 jne 0x106a2dc7 */
  if (!C.zf) goto L_106a2dc7;
  /* 106a2d64 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 106a2d69 push 0x106ca420 */
  push32((uint32_t)(0x106ca420u));
  /* 106a2d6e push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2d70 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 106a2d72 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a2d74 call 0x106a3710 */
  push32(0x106a2d79u); f_106a3710();
  /* 106a2d79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2d7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a2d7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2d83 je 0x106a2dbd */
  if (C.zf) goto L_106a2dbd;
  /* 106a2d85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2d88 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2d89 mov edx, dword ptr [0x106cda5c] */
  EDX = (r32((uint32_t)(0x106cda5c)));
  /* 106a2d8f push edx */
  push32((uint32_t)(EDX));
  /* 106a2d90 call dword ptr [0x106d12f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12f0))), 0x106a2d96u);
  /* 106a2d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a2d98 je 0x106a2dbd */
  if (C.zf) goto L_106a2dbd;
  /* 106a2d9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2d9d push eax */
  push32((uint32_t)(EAX));
  /* 106a2d9e call 0x106a2d20 */
  push32(0x106a2da3u); f_106a2d20();
  /* 106a2da3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2da6 call dword ptr [0x106d12ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12ec))), 0x106a2dacu);
  /* 106a2dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2daf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106a2db1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2db4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 106a2dbb jmp 0x106a2dc7 */
  goto L_106a2dc7;
L_106a2dbd:;
  /* 106a2dbd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106a2dbf call 0x106a2270 */
  push32(0x106a2dc4u); f_106a2270();
  /* 106a2dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2dc7:;
  /* 106a2dc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a2dca push eax */
  push32((uint32_t)(EAX));
  /* 106a2dcb call dword ptr [0x106d12fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12fc))), 0x106a2dd1u);
  /* 106a2dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2dd4 mov esp, ebp */
  ESP = (EBP);
  /* 106a2dd6 pop ebp */
  EBP = (pop32());
  /* 106a2dd7 ret  */
  ESPCHK(0x106a2d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002de0 @ 0x106a2de0 (263 bytes, 86 insns) */
void f_106a2de0(void) {
  FTRACE(0x106a2de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2de0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2de1 mov ebp, esp */
  EBP = (ESP);
  /* 106a2de3 cmp dword ptr [0x106cda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x106cda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2dea je 0x106a2ee5 */
  if (C.zf) goto L_106a2ee5;
  /* 106a2df0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2df4 jne 0x106a2e05 */
  if (!C.zf) goto L_106a2e05;
  /* 106a2df6 mov eax, dword ptr [0x106cda5c] */
  EAX = (r32((uint32_t)(0x106cda5c)));
  /* 106a2dfb push eax */
  push32((uint32_t)(EAX));
  /* 106a2dfc call dword ptr [0x106d1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1300))), 0x106a2e02u);
  /* 106a2e02 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106a2e05:;
  /* 106a2e05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2e09 je 0x106a2ed6 */
  if (C.zf) goto L_106a2ed6;
  /* 106a2e0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e12 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2e16 je 0x106a2e29 */
  if (C.zf) goto L_106a2e29;
  /* 106a2e18 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2e1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e1d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 106a2e20 push eax */
  push32((uint32_t)(EAX));
  /* 106a2e21 call 0x106a3d90 */
  push32(0x106a2e26u); f_106a3d90();
  /* 106a2e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2e29:;
  /* 106a2e29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e2c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2e30 je 0x106a2e43 */
  if (C.zf) goto L_106a2e43;
  /* 106a2e32 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2e34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e37 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 106a2e3a push eax */
  push32((uint32_t)(EAX));
  /* 106a2e3b call 0x106a3d90 */
  push32(0x106a2e40u); f_106a3d90();
  /* 106a2e40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2e43:;
  /* 106a2e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e46 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2e4a je 0x106a2e5d */
  if (C.zf) goto L_106a2e5d;
  /* 106a2e4c push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2e4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e51 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 106a2e54 push eax */
  push32((uint32_t)(EAX));
  /* 106a2e55 call 0x106a3d90 */
  push32(0x106a2e5au); f_106a3d90();
  /* 106a2e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2e5d:;
  /* 106a2e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e60 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2e64 je 0x106a2e77 */
  if (C.zf) goto L_106a2e77;
  /* 106a2e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2e68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e6b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 106a2e6e push eax */
  push32((uint32_t)(EAX));
  /* 106a2e6f call 0x106a3d90 */
  push32(0x106a2e74u); f_106a3d90();
  /* 106a2e74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2e77:;
  /* 106a2e77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e7a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2e7e je 0x106a2e91 */
  if (C.zf) goto L_106a2e91;
  /* 106a2e80 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2e82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e85 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 106a2e88 push eax */
  push32((uint32_t)(EAX));
  /* 106a2e89 call 0x106a3d90 */
  push32(0x106a2e8eu); f_106a3d90();
  /* 106a2e8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2e91:;
  /* 106a2e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e94 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2e98 je 0x106a2eab */
  if (C.zf) goto L_106a2eab;
  /* 106a2e9a push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2e9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2e9f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 106a2ea2 push eax */
  push32((uint32_t)(EAX));
  /* 106a2ea3 call 0x106a3d90 */
  push32(0x106a2ea8u); f_106a3d90();
  /* 106a2ea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2eab:;
  /* 106a2eab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2eae cmp dword ptr [ecx + 0x50], 0x106cdc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x106cdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2eb5 je 0x106a2ec8 */
  if (C.zf) goto L_106a2ec8;
  /* 106a2eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2eb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2ebc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 106a2ebf push eax */
  push32((uint32_t)(EAX));
  /* 106a2ec0 call 0x106a3d90 */
  push32(0x106a2ec5u); f_106a3d90();
  /* 106a2ec5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2ec8:;
  /* 106a2ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a2ecd push ecx */
  push32((uint32_t)(ECX));
  /* 106a2ece call 0x106a3d90 */
  push32(0x106a2ed3u); f_106a3d90();
  /* 106a2ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2ed6:;
  /* 106a2ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a2ed8 mov edx, dword ptr [0x106cda5c] */
  EDX = (r32((uint32_t)(0x106cda5c)));
  /* 106a2ede push edx */
  push32((uint32_t)(EDX));
  /* 106a2edf call dword ptr [0x106d12f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12f0))), 0x106a2ee5u);
L_106a2ee5:;
  /* 106a2ee5 pop ebp */
  EBP = (pop32());
  /* 106a2ee6 ret  */
  ESPCHK(0x106a2de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ef0 @ 0x106a2ef0 (11 bytes, 5 insns) */
void f_106a2ef0(void) {
  FTRACE(0x106a2ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2ef1 mov ebp, esp */
  EBP = (ESP);
  /* 106a2ef3 call dword ptr [0x106d12ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12ec))), 0x106a2ef9u);
  /* 106a2ef9 pop ebp */
  EBP = (pop32());
  /* 106a2efa ret  */
  ESPCHK(0x106a2ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f00 @ 0x106a2f00 (11 bytes, 5 insns) */
void f_106a2f00(void) {
  FTRACE(0x106a2f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2f00 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2f01 mov ebp, esp */
  EBP = (ESP);
  /* 106a2f03 call dword ptr [0x106d1308] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1308))), 0x106a2f09u);
  /* 106a2f09 pop ebp */
  EBP = (pop32());
  /* 106a2f0a ret  */
  ESPCHK(0x106a2f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f10 @ 0x106a2f10 (804 bytes, 236 insns) */
void f_106a2f10(void) {
  FTRACE(0x106a2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a2f10 push ebp */
  push32((uint32_t)(EBP));
  /* 106a2f11 mov ebp, esp */
  EBP = (ESP);
  /* 106a2f13 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a2f16 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 106a2f1b push 0x106ca42c */
  push32((uint32_t)(0x106ca42cu));
  /* 106a2f20 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a2f22 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 106a2f27 call 0x106a3300 */
  push32(0x106a2f2cu); f_106a3300();
  /* 106a2f2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2f2f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 106a2f32 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2f36 jne 0x106a2f42 */
  if (!C.zf) goto L_106a2f42;
  /* 106a2f38 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 106a2f3a call 0x106a2270 */
  push32(0x106a2f3fu); f_106a2270();
  /* 106a2f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a2f42:;
  /* 106a2f42 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a2f45 mov dword ptr [0x106d0e60], eax */
  w32((uint32_t)(0x106d0e60), (EAX));
  /* 106a2f4a mov dword ptr [0x106d0f9c], 0x20 */
  w32((uint32_t)(0x106d0f9c), (0x20u));
  /* 106a2f54 jmp 0x106a2f5f */
  goto L_106a2f5f;
L_106a2f56:;
  /* 106a2f56 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a2f59 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2f5c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_106a2f5f:;
  /* 106a2f5f mov edx, dword ptr [0x106d0e60] */
  EDX = (r32((uint32_t)(0x106d0e60)));
  /* 106a2f65 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2f6b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2f6e jae 0x106a2f93 */
  if (!C.cf) goto L_106a2f93;
  /* 106a2f70 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a2f73 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 106a2f77 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a2f7a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106a2f80 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a2f83 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 106a2f87 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a2f8a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 106a2f91 jmp 0x106a2f56 */
  goto L_106a2f56;
L_106a2f93:;
  /* 106a2f93 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 106a2f96 push ecx */
  push32((uint32_t)(ECX));
  /* 106a2f97 call dword ptr [0x106d1258] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1258))), 0x106a2f9du);
  /* 106a2f9d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 106a2fa0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a2fa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a2fa8 je 0x106a3135 */
  if (C.zf) goto L_106a3135;
  /* 106a2fae cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2fb2 je 0x106a3135 */
  if (C.zf) goto L_106a3135;
  /* 106a2fb8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a2fbb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a2fbd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 106a2fc0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a2fc3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2fc6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a2fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a2fcc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2fcf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 106a2fd2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a2fd9 jge 0x106a2fe3 */
  if ((C.sf==C.of)) goto L_106a2fe3;
  /* 106a2fdb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 106a2fde mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 106a2fe1 jmp 0x106a2fea */
  goto L_106a2fea;
L_106a2fe3:;
  /* 106a2fe3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_106a2fea:;
  /* 106a2fea mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 106a2fed mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 106a2ff0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 106a2ff7 jmp 0x106a3002 */
  goto L_106a3002;
L_106a2ff9:;
  /* 106a2ff9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 106a2ffc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a2fff mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_106a3002:;
  /* 106a3002 mov ecx, dword ptr [0x106d0f9c] */
  ECX = (r32((uint32_t)(0x106d0f9c)));
  /* 106a3008 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a300b jge 0x106a30a2 */
  if ((C.sf==C.of)) goto L_106a30a2;
  /* 106a3011 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 106a3016 push 0x106ca42c */
  push32((uint32_t)(0x106ca42cu));
  /* 106a301b push 2 */
  push32((uint32_t)(0x2u));
  /* 106a301d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 106a3022 call 0x106a3300 */
  push32(0x106a3027u); f_106a3300();
  /* 106a3027 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a302a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 106a302d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3031 jne 0x106a303e */
  if (!C.zf) goto L_106a303e;
  /* 106a3033 mov edx, dword ptr [0x106d0f9c] */
  EDX = (r32((uint32_t)(0x106d0f9c)));
  /* 106a3039 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 106a303c jmp 0x106a30a2 */
  goto L_106a30a2;
L_106a303e:;
  /* 106a303e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 106a3041 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a3044 mov dword ptr [eax*4 + 0x106d0e60], ecx */
  w32((uint32_t)(EAX*4 + 0x106d0e60), (ECX));
  /* 106a304b mov edx, dword ptr [0x106d0f9c] */
  EDX = (r32((uint32_t)(0x106d0f9c)));
  /* 106a3051 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3054 mov dword ptr [0x106d0f9c], edx */
  w32((uint32_t)(0x106d0f9c), (EDX));
  /* 106a305a jmp 0x106a3065 */
  goto L_106a3065;
L_106a305c:;
  /* 106a305c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a305f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3062 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_106a3065:;
  /* 106a3065 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 106a3068 mov edx, dword ptr [ecx*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106d0e60)));
  /* 106a306f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3075 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3078 jae 0x106a309d */
  if (!C.cf) goto L_106a309d;
  /* 106a307a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a307d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 106a3081 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a3084 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106a308a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a308d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 106a3091 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a3094 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 106a309b jmp 0x106a305c */
  goto L_106a305c;
L_106a309d:;
  /* 106a309d jmp 0x106a2ff9 */
  goto L_106a2ff9;
L_106a30a2:;
  /* 106a30a2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 106a30a9 jmp 0x106a30c6 */
  goto L_106a30c6;
L_106a30ab:;
  /* 106a30ab mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106a30ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a30b1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 106a30b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a30b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a30ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a30bd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 106a30c0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a30c3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_106a30c6:;
  /* 106a30c6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106a30c9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a30cc jge 0x106a3135 */
  if ((C.sf==C.of)) goto L_106a3135;
  /* 106a30ce mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 106a30d1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a30d4 je 0x106a3130 */
  if (C.zf) goto L_106a3130;
  /* 106a30d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a30d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a30dc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106a30df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a30e1 je 0x106a3130 */
  if (C.zf) goto L_106a3130;
  /* 106a30e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a30e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106a30e9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 106a30ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a30ee jne 0x106a3100 */
  if (!C.zf) goto L_106a3100;
  /* 106a30f0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 106a30f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a30f5 push edx */
  push32((uint32_t)(EDX));
  /* 106a30f6 call dword ptr [0x106d1310] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1310))), 0x106a30fcu);
  /* 106a30fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a30fe je 0x106a3130 */
  if (C.zf) goto L_106a3130;
L_106a3100:;
  /* 106a3100 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 106a3103 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106a3106 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106a3109 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106a310c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a310f mov edx, dword ptr [eax*4 + 0x106d0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106a3116 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3118 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 106a311b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a311e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 106a3121 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a3123 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106a3125 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a3128 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a312b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a312d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_106a3130:;
  /* 106a3130 jmp 0x106a30ab */
  goto L_106a30ab;
L_106a3135:;
  /* 106a3135 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 106a313c jmp 0x106a3147 */
  goto L_106a3147;
L_106a313e:;
  /* 106a313e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 106a3141 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3144 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_106a3147:;
  /* 106a3147 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a314b jge 0x106a3224 */
  if ((C.sf==C.of)) goto L_106a3224;
  /* 106a3151 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106a3154 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a3157 mov edx, dword ptr [0x106d0e60] */
  EDX = (r32((uint32_t)(0x106d0e60)));
  /* 106a315d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a315f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 106a3162 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a3165 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3168 jne 0x106a3210 */
  if (!C.zf) goto L_106a3210;
  /* 106a316e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a3171 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 106a3175 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3179 jne 0x106a3184 */
  if (!C.zf) goto L_106a3184;
  /* 106a317b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 106a3182 jmp 0x106a3194 */
  goto L_106a3194;
L_106a3184:;
  /* 106a3184 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 106a3187 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a318a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106a318c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a318e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3191 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_106a3194:;
  /* 106a3194 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 106a3197 push eax */
  push32((uint32_t)(EAX));
  /* 106a3198 call dword ptr [0x106d12c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c0))), 0x106a319eu);
  /* 106a319e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 106a31a1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a31a5 je 0x106a31ff */
  if (C.zf) goto L_106a31ff;
  /* 106a31a7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106a31aa push ecx */
  push32((uint32_t)(ECX));
  /* 106a31ab call dword ptr [0x106d1310] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1310))), 0x106a31b1u);
  /* 106a31b1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 106a31b4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a31b8 je 0x106a31ff */
  if (C.zf) goto L_106a31ff;
  /* 106a31ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a31bd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106a31c0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106a31c2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 106a31c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a31cb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a31ce jne 0x106a31e0 */
  if (!C.zf) goto L_106a31e0;
  /* 106a31d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a31d3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106a31d6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 106a31d8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a31db mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 106a31de jmp 0x106a31fd */
  goto L_106a31fd;
L_106a31e0:;
  /* 106a31e0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 106a31e3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a31e9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a31ec jne 0x106a31fd */
  if (!C.zf) goto L_106a31fd;
  /* 106a31ee mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a31f1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a31f4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 106a31f7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a31fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106a31fd:;
  /* 106a31fd jmp 0x106a320e */
  goto L_106a320e;
L_106a31ff:;
  /* 106a31ff mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a3202 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a3205 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 106a3208 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a320b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106a320e:;
  /* 106a320e jmp 0x106a321f */
  goto L_106a321f;
L_106a3210:;
  /* 106a3210 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a3213 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106a3216 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 106a3219 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a321c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106a321f:;
  /* 106a321f jmp 0x106a313e */
  goto L_106a313e;
L_106a3224:;
  /* 106a3224 mov eax, dword ptr [0x106d0f9c] */
  EAX = (r32((uint32_t)(0x106d0f9c)));
  /* 106a3229 push eax */
  push32((uint32_t)(EAX));
  /* 106a322a call dword ptr [0x106d130c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d130c))), 0x106a3230u);
  /* 106a3230 mov esp, ebp */
  ESP = (EBP);
  /* 106a3232 pop ebp */
  EBP = (pop32());
  /* 106a3233 ret  */
  ESPCHK(0x106a2f10u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x106a3240 (155 bytes, 45 insns) */
void f_106a3240(void) {
  FTRACE(0x106a3240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3240 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3241 mov ebp, esp */
  EBP = (ESP);
  /* 106a3243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a3246 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106a324d jmp 0x106a3258 */
  goto L_106a3258;
L_106a324f:;
  /* 106a324f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3252 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3255 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106a3258:;
  /* 106a3258 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a325c jge 0x106a32d7 */
  if ((C.sf==C.of)) goto L_106a32d7;
  /* 106a325e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3261 cmp dword ptr [ecx*4 + 0x106d0e60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x106d0e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3269 je 0x106a32d2 */
  if (C.zf) goto L_106a32d2;
  /* 106a326b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a326e mov eax, dword ptr [edx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106a3275 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a3278 jmp 0x106a3283 */
  goto L_106a3283;
L_106a327a:;
  /* 106a327a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a327d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3280 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a3283:;
  /* 106a3283 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3286 mov eax, dword ptr [edx*4 + 0x106d0e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106d0e60)));
  /* 106a328d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3292 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3295 jae 0x106a32af */
  if (!C.cf) goto L_106a32af;
  /* 106a3297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a329a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a329e je 0x106a32ad */
  if (C.zf) goto L_106a32ad;
  /* 106a32a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a32a3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a32a6 push edx */
  push32((uint32_t)(EDX));
  /* 106a32a7 call dword ptr [0x106d125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d125c))), 0x106a32adu);
L_106a32ad:;
  /* 106a32ad jmp 0x106a327a */
  goto L_106a327a;
L_106a32af:;
  /* 106a32af push 2 */
  push32((uint32_t)(0x2u));
  /* 106a32b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a32b4 mov ecx, dword ptr [eax*4 + 0x106d0e60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x106d0e60)));
  /* 106a32bb push ecx */
  push32((uint32_t)(ECX));
  /* 106a32bc call 0x106a3d90 */
  push32(0x106a32c1u); f_106a3d90();
  /* 106a32c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a32c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a32c7 mov dword ptr [edx*4 + 0x106d0e60], 0 */
  w32((uint32_t)(EDX*4 + 0x106d0e60), (0x0u));
L_106a32d2:;
  /* 106a32d2 jmp 0x106a324f */
  goto L_106a324f;
L_106a32d7:;
  /* 106a32d7 mov esp, ebp */
  ESP = (EBP);
  /* 106a32d9 pop ebp */
  EBP = (pop32());
  /* 106a32da ret  */
  ESPCHK(0x106a3240u, _esp0);
  ESP += 4; return;
}

/* FUN_100032e0 @ 0x106a32e0 (29 bytes, 13 insns) */
void f_106a32e0(void) {
  FTRACE(0x106a32e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a32e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a32e1 mov ebp, esp */
  EBP = (ESP);
  /* 106a32e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a32e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a32e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a32e9 mov eax, dword ptr [0x106cf678] */
  EAX = (r32((uint32_t)(0x106cf678)));
  /* 106a32ee push eax */
  push32((uint32_t)(EAX));
  /* 106a32ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a32f2 push ecx */
  push32((uint32_t)(ECX));
  /* 106a32f3 call 0x106a3350 */
  push32(0x106a32f8u); f_106a3350();
  /* 106a32f8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a32fb pop ebp */
  EBP = (pop32());
  /* 106a32fc ret  */
  ESPCHK(0x106a32e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x106a3300 (35 bytes, 16 insns) */
void f_106a3300(void) {
  FTRACE(0x106a3300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3300 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3301 mov ebp, esp */
  EBP = (ESP);
  /* 106a3303 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a3306 push eax */
  push32((uint32_t)(EAX));
  /* 106a3307 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a330a push ecx */
  push32((uint32_t)(ECX));
  /* 106a330b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a330e push edx */
  push32((uint32_t)(EDX));
  /* 106a330f mov eax, dword ptr [0x106cf678] */
  EAX = (r32((uint32_t)(0x106cf678)));
  /* 106a3314 push eax */
  push32((uint32_t)(EAX));
  /* 106a3315 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3318 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3319 call 0x106a3350 */
  push32(0x106a331eu); f_106a3350();
  /* 106a331e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3321 pop ebp */
  EBP = (pop32());
  /* 106a3322 ret  */
  ESPCHK(0x106a3300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x106a3330 (27 bytes, 13 insns) */
void f_106a3330(void) {
  FTRACE(0x106a3330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3330 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3331 mov ebp, esp */
  EBP = (ESP);
  /* 106a3333 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3335 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3337 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3339 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a333c push eax */
  push32((uint32_t)(EAX));
  /* 106a333d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3340 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3341 call 0x106a3350 */
  push32(0x106a3346u); f_106a3350();
  /* 106a3346 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3349 pop ebp */
  EBP = (pop32());
  /* 106a334a ret  */
  ESPCHK(0x106a3330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003350 @ 0x106a3350 (94 bytes, 38 insns) */
void f_106a3350(void) {
  FTRACE(0x106a3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3350 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3351 mov ebp, esp */
  EBP = (ESP);
  /* 106a3353 push ecx */
  push32((uint32_t)(ECX));
L_106a3354:;
  /* 106a3354 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a3356 call 0x106a6d00 */
  push32(0x106a335bu); f_106a6d00();
  /* 106a335b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a335e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a3361 push eax */
  push32((uint32_t)(EAX));
  /* 106a3362 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a3365 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3366 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3369 push edx */
  push32((uint32_t)(EDX));
  /* 106a336a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a336d push eax */
  push32((uint32_t)(EAX));
  /* 106a336e call 0x106a33d0 */
  push32(0x106a3373u); f_106a33d0();
  /* 106a3373 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3376 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a3379 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a337b call 0x106a6da0 */
  push32(0x106a3380u); f_106a6da0();
  /* 106a3380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3383 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3387 jne 0x106a338f */
  if (!C.zf) goto L_106a338f;
  /* 106a3389 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a338d jne 0x106a3394 */
  if (!C.zf) goto L_106a3394;
L_106a338f:;
  /* 106a338f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3392 jmp 0x106a33aa */
  goto L_106a33aa;
L_106a3394:;
  /* 106a3394 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3397 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3398 call 0x106a7040 */
  push32(0x106a339du); f_106a7040();
  /* 106a339d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a33a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a33a2 jne 0x106a33a8 */
  if (!C.zf) goto L_106a33a8;
  /* 106a33a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a33a6 jmp 0x106a33aa */
  goto L_106a33aa;
L_106a33a8:;
  /* 106a33a8 jmp 0x106a3354 */
  goto L_106a3354;
L_106a33aa:;
  /* 106a33aa mov esp, ebp */
  ESP = (EBP);
  /* 106a33ac pop ebp */
  EBP = (pop32());
  /* 106a33ad ret  */
  ESPCHK(0x106a3350u, _esp0);
  ESP += 4; return;
}

/* FUN_100033b0 @ 0x106a33b0 (23 bytes, 11 insns) */
void f_106a33b0(void) {
  FTRACE(0x106a33b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a33b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a33b1 mov ebp, esp */
  EBP = (ESP);
  /* 106a33b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a33b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a33b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a33b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a33bc push eax */
  push32((uint32_t)(EAX));
  /* 106a33bd call 0x106a33d0 */
  push32(0x106a33c2u); f_106a33d0();
  /* 106a33c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a33c5 pop ebp */
  EBP = (pop32());
  /* 106a33c6 ret  */
  ESPCHK(0x106a33b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033d0 @ 0x106a33d0 (787 bytes, 254 insns) */
void f_106a33d0(void) {
  FTRACE(0x106a33d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a33d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a33d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a33d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a33d6 push ebx */
  push32((uint32_t)(EBX));
  /* 106a33d7 push esi */
  push32((uint32_t)(ESI));
  /* 106a33d8 push edi */
  push32((uint32_t)(EDI));
  /* 106a33d9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106a33e0 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a33e5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106a33e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a33ea je 0x106a341c */
  if (C.zf) goto L_106a341c;
L_106a33ec:;
  /* 106a33ec call 0x106a44a0 */
  push32(0x106a33f1u); f_106a44a0();
  /* 106a33f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a33f3 jne 0x106a3416 */
  if (!C.zf) goto L_106a3416;
  /* 106a33f5 push 0x106ca520 */
  push32((uint32_t)(0x106ca520u));
  /* 106a33fa push 0 */
  push32((uint32_t)(0x0u));
  /* 106a33fc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 106a3401 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3406 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3408 call 0x106a23c0 */
  push32(0x106a340du); f_106a23c0();
  /* 106a340d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3410 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3413 jne 0x106a3416 */
  if (!C.zf) goto L_106a3416;
  /* 106a3415 int3  */
  x86_unimpl("int3 @ 0x106a3415");
L_106a3416:;
  /* 106a3416 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a3418 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a341a jne 0x106a33ec */
  if (!C.zf) goto L_106a33ec;
L_106a341c:;
  /* 106a341c mov edx, dword ptr [0x106cda88] */
  EDX = (r32((uint32_t)(0x106cda88)));
  /* 106a3422 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106a3425 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3428 cmp eax, dword ptr [0x106cda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a342e jne 0x106a3431 */
  if (!C.zf) goto L_106a3431;
  /* 106a3430 int3  */
  x86_unimpl("int3 @ 0x106a3430");
L_106a3431:;
  /* 106a3431 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a3434 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3435 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3438 push edx */
  push32((uint32_t)(EDX));
  /* 106a3439 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a343c push eax */
  push32((uint32_t)(EAX));
  /* 106a343d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3440 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3444 push edx */
  push32((uint32_t)(EDX));
  /* 106a3445 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3447 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3449 call dword ptr [0x106cdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cdc90))), 0x106a344fu);
  /* 106a344f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3454 jne 0x106a34b4 */
  if (!C.zf) goto L_106a34b4;
  /* 106a3456 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a345a je 0x106a3487 */
  if (C.zf) goto L_106a3487;
L_106a345c:;
  /* 106a345c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a345f push eax */
  push32((uint32_t)(EAX));
  /* 106a3460 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3463 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3464 push 0x106ca4dc */
  push32((uint32_t)(0x106ca4dcu));
  /* 106a3469 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a346b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a346d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a346f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3471 call 0x106a23c0 */
  push32(0x106a3476u); f_106a23c0();
  /* 106a3476 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3479 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a347c jne 0x106a347f */
  if (!C.zf) goto L_106a347f;
  /* 106a347e int3  */
  x86_unimpl("int3 @ 0x106a347e");
L_106a347f:;
  /* 106a347f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a3481 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a3483 jne 0x106a345c */
  if (!C.zf) goto L_106a345c;
  /* 106a3485 jmp 0x106a34ad */
  goto L_106a34ad;
L_106a3487:;
  /* 106a3487 push 0x106ca4b8 */
  push32((uint32_t)(0x106ca4b8u));
  /* 106a348c push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a3491 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3493 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3495 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3497 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3499 call 0x106a23c0 */
  push32(0x106a349eu); f_106a23c0();
  /* 106a349e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a34a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a34a4 jne 0x106a34a7 */
  if (!C.zf) goto L_106a34a7;
  /* 106a34a6 int3  */
  x86_unimpl("int3 @ 0x106a34a6");
L_106a34a7:;
  /* 106a34a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a34a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a34ab jne 0x106a3487 */
  if (!C.zf) goto L_106a3487;
L_106a34ad:;
  /* 106a34ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a34af jmp 0x106a36dc */
  goto L_106a36dc;
L_106a34b4:;
  /* 106a34b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a34b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a34bd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a34c0 je 0x106a34d6 */
  if (C.zf) goto L_106a34d6;
  /* 106a34c2 mov edx, dword ptr [0x106cda84] */
  EDX = (r32((uint32_t)(0x106cda84)));
  /* 106a34c8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106a34cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a34cd jne 0x106a34d6 */
  if (!C.zf) goto L_106a34d6;
  /* 106a34cf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_106a34d6:;
  /* 106a34d6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a34da ja 0x106a34e7 */
  if ((!C.cf&&!C.zf)) goto L_106a34e7;
  /* 106a34dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a34df add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a34e2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a34e5 jbe 0x106a3513 */
  if ((C.cf||C.zf)) goto L_106a3513;
L_106a34e7:;
  /* 106a34e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a34ea push ecx */
  push32((uint32_t)(ECX));
  /* 106a34eb push 0x106ca490 */
  push32((uint32_t)(0x106ca490u));
  /* 106a34f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a34f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a34f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a34f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a34f8 call 0x106a23c0 */
  push32(0x106a34fdu); f_106a23c0();
  /* 106a34fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3500 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3503 jne 0x106a3506 */
  if (!C.zf) goto L_106a3506;
  /* 106a3505 int3  */
  x86_unimpl("int3 @ 0x106a3505");
L_106a3506:;
  /* 106a3506 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a3508 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a350a jne 0x106a34e7 */
  if (!C.zf) goto L_106a34e7;
  /* 106a350c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a350e jmp 0x106a36dc */
  goto L_106a36dc;
L_106a3513:;
  /* 106a3513 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3516 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a351b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a351e je 0x106a3560 */
  if (C.zf) goto L_106a3560;
  /* 106a3520 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3524 je 0x106a3560 */
  if (C.zf) goto L_106a3560;
  /* 106a3526 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3529 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a352f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3532 je 0x106a3560 */
  if (C.zf) goto L_106a3560;
  /* 106a3534 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3538 je 0x106a3560 */
  if (C.zf) goto L_106a3560;
L_106a353a:;
  /* 106a353a push 0x106ca45c */
  push32((uint32_t)(0x106ca45cu));
  /* 106a353f push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a3544 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3546 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3548 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a354a push 1 */
  push32((uint32_t)(0x1u));
  /* 106a354c call 0x106a23c0 */
  push32(0x106a3551u); f_106a23c0();
  /* 106a3551 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3554 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3557 jne 0x106a355a */
  if (!C.zf) goto L_106a355a;
  /* 106a3559 int3  */
  x86_unimpl("int3 @ 0x106a3559");
L_106a355a:;
  /* 106a355a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a355c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a355e jne 0x106a353a */
  if (!C.zf) goto L_106a353a;
L_106a3560:;
  /* 106a3560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3563 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3566 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a3569 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a356c push ecx */
  push32((uint32_t)(ECX));
  /* 106a356d call 0x106a7150 */
  push32(0x106a3572u); f_106a7150();
  /* 106a3572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3575 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a3578 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a357c jne 0x106a3585 */
  if (!C.zf) goto L_106a3585;
  /* 106a357e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3580 jmp 0x106a36dc */
  goto L_106a36dc;
L_106a3585:;
  /* 106a3585 mov edx, dword ptr [0x106cda88] */
  EDX = (r32((uint32_t)(0x106cda88)));
  /* 106a358b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a358e mov dword ptr [0x106cda88], edx */
  w32((uint32_t)(0x106cda88), (EDX));
  /* 106a3594 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3598 je 0x106a35e3 */
  if (C.zf) goto L_106a35e3;
  /* 106a359a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a359d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106a35a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a35a6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106a35ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a35b0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 106a35b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a35ba mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 106a35c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a35c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a35c7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 106a35ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a35cd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 106a35d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a35d7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 106a35de jmp 0x106a3683 */
  goto L_106a3683;
L_106a35e3:;
  /* 106a35e3 mov edx, dword ptr [0x106cf4d8] */
  EDX = (r32((uint32_t)(0x106cf4d8)));
  /* 106a35e9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a35ec mov dword ptr [0x106cf4d8], edx */
  w32((uint32_t)(0x106cf4d8), (EDX));
  /* 106a35f2 mov eax, dword ptr [0x106cf4e0] */
  EAX = (r32((uint32_t)(0x106cf4e0)));
  /* 106a35f7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a35fa mov dword ptr [0x106cf4e0], eax */
  w32((uint32_t)(0x106cf4e0), (EAX));
  /* 106a35ff mov ecx, dword ptr [0x106cf4e0] */
  ECX = (r32((uint32_t)(0x106cf4e0)));
  /* 106a3605 cmp ecx, dword ptr [0x106cf4e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cf4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a360b jbe 0x106a3619 */
  if ((C.cf||C.zf)) goto L_106a3619;
  /* 106a360d mov edx, dword ptr [0x106cf4e0] */
  EDX = (r32((uint32_t)(0x106cf4e0)));
  /* 106a3613 mov dword ptr [0x106cf4e4], edx */
  w32((uint32_t)(0x106cf4e4), (EDX));
L_106a3619:;
  /* 106a3619 cmp dword ptr [0x106cf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3620 je 0x106a362f */
  if (C.zf) goto L_106a362f;
  /* 106a3622 mov eax, dword ptr [0x106cf4dc] */
  EAX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a3627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a362a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106a362d jmp 0x106a3638 */
  goto L_106a3638;
L_106a362f:;
  /* 106a362f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3632 mov dword ptr [0x106cf4d4], edx */
  w32((uint32_t)(0x106cf4d4), (EDX));
L_106a3638:;
  /* 106a3638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a363b mov ecx, dword ptr [0x106cf4dc] */
  ECX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a3641 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106a3643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3646 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 106a364d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3650 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3653 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 106a3656 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3659 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a365c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 106a365f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3665 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 106a3668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a366b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a366e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 106a3671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3674 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3677 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 106a367a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a367d mov dword ptr [0x106cf4dc], ecx */
  w32((uint32_t)(0x106cf4dc), (ECX));
L_106a3683:;
  /* 106a3683 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a3685 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a3687 mov dl, byte ptr [0x106cda90] */
  DL = (r8((uint32_t)(0x106cda90)));
  /* 106a368d push edx */
  push32((uint32_t)(EDX));
  /* 106a368e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3691 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3694 push eax */
  push32((uint32_t)(EAX));
  /* 106a3695 call 0x106a7070 */
  push32(0x106a369au); f_106a7070();
  /* 106a369a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a369d push 4 */
  push32((uint32_t)(0x4u));
  /* 106a369f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a36a1 mov cl, byte ptr [0x106cda90] */
  CL = (r8((uint32_t)(0x106cda90)));
  /* 106a36a7 push ecx */
  push32((uint32_t)(ECX));
  /* 106a36a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a36ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a36ae lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 106a36b2 push ecx */
  push32((uint32_t)(ECX));
  /* 106a36b3 call 0x106a7070 */
  push32(0x106a36b8u); f_106a7070();
  /* 106a36b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a36bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a36be push edx */
  push32((uint32_t)(EDX));
  /* 106a36bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a36c1 mov al, byte ptr [0x106cda92] */
  AL = (r8((uint32_t)(0x106cda92)));
  /* 106a36c6 push eax */
  push32((uint32_t)(EAX));
  /* 106a36c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a36ca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a36cd push ecx */
  push32((uint32_t)(ECX));
  /* 106a36ce call 0x106a7070 */
  push32(0x106a36d3u); f_106a7070();
  /* 106a36d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a36d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a36d9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_106a36dc:;
  /* 106a36dc pop edi */
  EDI = (pop32());
  /* 106a36dd pop esi */
  ESI = (pop32());
  /* 106a36de pop ebx */
  EBX = (pop32());
  /* 106a36df mov esp, ebp */
  ESP = (EBP);
  /* 106a36e1 pop ebp */
  EBP = (pop32());
  /* 106a36e2 ret  */
  ESPCHK(0x106a33d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036f0 @ 0x106a36f0 (27 bytes, 13 insns) */
void f_106a36f0(void) {
  FTRACE(0x106a36f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a36f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a36f1 mov ebp, esp */
  EBP = (ESP);
  /* 106a36f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a36f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a36f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a36f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a36fc push eax */
  push32((uint32_t)(EAX));
  /* 106a36fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3700 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3701 call 0x106a3710 */
  push32(0x106a3706u); f_106a3710();
  /* 106a3706 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3709 pop ebp */
  EBP = (pop32());
  /* 106a370a ret  */
  ESPCHK(0x106a36f0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x106a3710 (96 bytes, 37 insns) */
void f_106a3710(void) {
  FTRACE(0x106a3710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3710 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3711 mov ebp, esp */
  EBP = (ESP);
  /* 106a3713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a3716 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3719 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a371d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106a3720 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a3723 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3724 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a3727 push edx */
  push32((uint32_t)(EDX));
  /* 106a3728 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a372b push eax */
  push32((uint32_t)(EAX));
  /* 106a372c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a372f push ecx */
  push32((uint32_t)(ECX));
  /* 106a3730 call 0x106a3300 */
  push32(0x106a3735u); f_106a3300();
  /* 106a3735 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3738 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a373b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a373f je 0x106a3769 */
  if (C.zf) goto L_106a3769;
  /* 106a3741 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3744 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106a3747 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a374a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a374d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a3750:;
  /* 106a3750 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3753 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3756 jae 0x106a3769 */
  if (!C.cf) goto L_106a3769;
  /* 106a3758 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a375b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106a375e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3761 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3764 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a3767 jmp 0x106a3750 */
  goto L_106a3750;
L_106a3769:;
  /* 106a3769 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a376c mov esp, ebp */
  ESP = (EBP);
  /* 106a376e pop ebp */
  EBP = (pop32());
  /* 106a376f ret  */
  ESPCHK(0x106a3710u, _esp0);
  ESP += 4; return;
}

/* FUN_10003770 @ 0x106a3770 (27 bytes, 13 insns) */
void f_106a3770(void) {
  FTRACE(0x106a3770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3770 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3771 mov ebp, esp */
  EBP = (ESP);
  /* 106a3773 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3775 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3777 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3779 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a377c push eax */
  push32((uint32_t)(EAX));
  /* 106a377d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3780 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3781 call 0x106a3790 */
  push32(0x106a3786u); f_106a3790();
  /* 106a3786 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3789 pop ebp */
  EBP = (pop32());
  /* 106a378a ret  */
  ESPCHK(0x106a3770u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x106a3790 (64 bytes, 27 insns) */
void f_106a3790(void) {
  FTRACE(0x106a3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3790 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3791 mov ebp, esp */
  EBP = (ESP);
  /* 106a3793 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3794 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a3796 call 0x106a6d00 */
  push32(0x106a379bu); f_106a6d00();
  /* 106a379b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a379e push 1 */
  push32((uint32_t)(0x1u));
  /* 106a37a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a37a3 push eax */
  push32((uint32_t)(EAX));
  /* 106a37a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a37a7 push ecx */
  push32((uint32_t)(ECX));
  /* 106a37a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a37ab push edx */
  push32((uint32_t)(EDX));
  /* 106a37ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a37af push eax */
  push32((uint32_t)(EAX));
  /* 106a37b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a37b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a37b4 call 0x106a37d0 */
  push32(0x106a37b9u); f_106a37d0();
  /* 106a37b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a37bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a37bf push 9 */
  push32((uint32_t)(0x9u));
  /* 106a37c1 call 0x106a6da0 */
  push32(0x106a37c6u); f_106a6da0();
  /* 106a37c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a37c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a37cc mov esp, ebp */
  ESP = (EBP);
  /* 106a37ce pop ebp */
  EBP = (pop32());
  /* 106a37cf ret  */
  ESPCHK(0x106a3790u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x106a37d0 (1297 bytes, 431 insns) */
void f_106a37d0(void) {
  FTRACE(0x106a37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a37d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a37d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a37d6 push ebx */
  push32((uint32_t)(EBX));
  /* 106a37d7 push esi */
  push32((uint32_t)(ESI));
  /* 106a37d8 push edi */
  push32((uint32_t)(EDI));
  /* 106a37d9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 106a37e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a37e4 jne 0x106a3803 */
  if (!C.zf) goto L_106a3803;
  /* 106a37e6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a37e9 push eax */
  push32((uint32_t)(EAX));
  /* 106a37ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a37ed push ecx */
  push32((uint32_t)(ECX));
  /* 106a37ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a37f1 push edx */
  push32((uint32_t)(EDX));
  /* 106a37f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a37f5 push eax */
  push32((uint32_t)(EAX));
  /* 106a37f6 call 0x106a3300 */
  push32(0x106a37fbu); f_106a3300();
  /* 106a37fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a37fe jmp 0x106a3cda */
  goto L_106a3cda;
L_106a3803:;
  /* 106a3803 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3807 je 0x106a3826 */
  if (C.zf) goto L_106a3826;
  /* 106a3809 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a380d jne 0x106a3826 */
  if (!C.zf) goto L_106a3826;
  /* 106a380f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3812 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3813 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3816 push edx */
  push32((uint32_t)(EDX));
  /* 106a3817 call 0x106a3d90 */
  push32(0x106a381cu); f_106a3d90();
  /* 106a381c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a381f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3821 jmp 0x106a3cda */
  goto L_106a3cda;
L_106a3826:;
  /* 106a3826 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a382b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106a382e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3830 je 0x106a3862 */
  if (C.zf) goto L_106a3862;
L_106a3832:;
  /* 106a3832 call 0x106a44a0 */
  push32(0x106a3837u); f_106a44a0();
  /* 106a3837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3839 jne 0x106a385c */
  if (!C.zf) goto L_106a385c;
  /* 106a383b push 0x106ca520 */
  push32((uint32_t)(0x106ca520u));
  /* 106a3840 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3842 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 106a3847 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a384c push 2 */
  push32((uint32_t)(0x2u));
  /* 106a384e call 0x106a23c0 */
  push32(0x106a3853u); f_106a23c0();
  /* 106a3853 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3856 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3859 jne 0x106a385c */
  if (!C.zf) goto L_106a385c;
  /* 106a385b int3  */
  x86_unimpl("int3 @ 0x106a385b");
L_106a385c:;
  /* 106a385c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a385e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a3860 jne 0x106a3832 */
  if (!C.zf) goto L_106a3832;
L_106a3862:;
  /* 106a3862 mov edx, dword ptr [0x106cda88] */
  EDX = (r32((uint32_t)(0x106cda88)));
  /* 106a3868 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106a386b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a386e cmp eax, dword ptr [0x106cda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3874 jne 0x106a3877 */
  if (!C.zf) goto L_106a3877;
  /* 106a3876 int3  */
  x86_unimpl("int3 @ 0x106a3876");
L_106a3877:;
  /* 106a3877 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a387a push ecx */
  push32((uint32_t)(ECX));
  /* 106a387b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a387e push edx */
  push32((uint32_t)(EDX));
  /* 106a387f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a3882 push eax */
  push32((uint32_t)(EAX));
  /* 106a3883 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3886 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3887 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a388a push edx */
  push32((uint32_t)(EDX));
  /* 106a388b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a388e push eax */
  push32((uint32_t)(EAX));
  /* 106a388f push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3891 call dword ptr [0x106cdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cdc90))), 0x106a3897u);
  /* 106a3897 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a389a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a389c jne 0x106a38fc */
  if (!C.zf) goto L_106a38fc;
  /* 106a389e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a38a2 je 0x106a38cf */
  if (C.zf) goto L_106a38cf;
L_106a38a4:;
  /* 106a38a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a38a7 push ecx */
  push32((uint32_t)(ECX));
  /* 106a38a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a38ab push edx */
  push32((uint32_t)(EDX));
  /* 106a38ac push 0x106ca69c */
  push32((uint32_t)(0x106ca69cu));
  /* 106a38b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a38b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a38b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a38b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a38b9 call 0x106a23c0 */
  push32(0x106a38beu); f_106a23c0();
  /* 106a38be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a38c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a38c4 jne 0x106a38c7 */
  if (!C.zf) goto L_106a38c7;
  /* 106a38c6 int3  */
  x86_unimpl("int3 @ 0x106a38c6");
L_106a38c7:;
  /* 106a38c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a38c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a38cb jne 0x106a38a4 */
  if (!C.zf) goto L_106a38a4;
  /* 106a38cd jmp 0x106a38f5 */
  goto L_106a38f5;
L_106a38cf:;
  /* 106a38cf push 0x106ca678 */
  push32((uint32_t)(0x106ca678u));
  /* 106a38d4 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a38d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a38db push 0 */
  push32((uint32_t)(0x0u));
  /* 106a38dd push 0 */
  push32((uint32_t)(0x0u));
  /* 106a38df push 0 */
  push32((uint32_t)(0x0u));
  /* 106a38e1 call 0x106a23c0 */
  push32(0x106a38e6u); f_106a23c0();
  /* 106a38e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a38e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a38ec jne 0x106a38ef */
  if (!C.zf) goto L_106a38ef;
  /* 106a38ee int3  */
  x86_unimpl("int3 @ 0x106a38ee");
L_106a38ef:;
  /* 106a38ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a38f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a38f3 jne 0x106a38cf */
  if (!C.zf) goto L_106a38cf;
L_106a38f5:;
  /* 106a38f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a38f7 jmp 0x106a3cda */
  goto L_106a3cda;
L_106a38fc:;
  /* 106a38fc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3900 jbe 0x106a392e */
  if ((C.cf||C.zf)) goto L_106a392e;
L_106a3902:;
  /* 106a3902 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3905 push edx */
  push32((uint32_t)(EDX));
  /* 106a3906 push 0x106ca648 */
  push32((uint32_t)(0x106ca648u));
  /* 106a390b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a390d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a390f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3911 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3913 call 0x106a23c0 */
  push32(0x106a3918u); f_106a23c0();
  /* 106a3918 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a391b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a391e jne 0x106a3921 */
  if (!C.zf) goto L_106a3921;
  /* 106a3920 int3  */
  x86_unimpl("int3 @ 0x106a3920");
L_106a3921:;
  /* 106a3921 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3925 jne 0x106a3902 */
  if (!C.zf) goto L_106a3902;
  /* 106a3927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3929 jmp 0x106a3cda */
  goto L_106a3cda;
L_106a392e:;
  /* 106a392e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3932 je 0x106a3976 */
  if (C.zf) goto L_106a3976;
  /* 106a3934 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3937 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a393d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3940 je 0x106a3976 */
  if (C.zf) goto L_106a3976;
  /* 106a3942 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3945 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a394b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a394e je 0x106a3976 */
  if (C.zf) goto L_106a3976;
L_106a3950:;
  /* 106a3950 push 0x106ca45c */
  push32((uint32_t)(0x106ca45cu));
  /* 106a3955 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a395a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a395c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a395e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3960 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3962 call 0x106a23c0 */
  push32(0x106a3967u); f_106a23c0();
  /* 106a3967 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a396a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a396d jne 0x106a3970 */
  if (!C.zf) goto L_106a3970;
  /* 106a396f int3  */
  x86_unimpl("int3 @ 0x106a396f");
L_106a3970:;
  /* 106a3970 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3974 jne 0x106a3950 */
  if (!C.zf) goto L_106a3950;
L_106a3976:;
  /* 106a3976 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3979 push ecx */
  push32((uint32_t)(ECX));
  /* 106a397a call 0x106a4900 */
  push32(0x106a397fu); f_106a4900();
  /* 106a397f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3984 jne 0x106a39a7 */
  if (!C.zf) goto L_106a39a7;
  /* 106a3986 push 0x106ca624 */
  push32((uint32_t)(0x106ca624u));
  /* 106a398b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a398d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 106a3992 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3997 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3999 call 0x106a23c0 */
  push32(0x106a399eu); f_106a23c0();
  /* 106a399e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a39a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a39a4 jne 0x106a39a7 */
  if (!C.zf) goto L_106a39a7;
  /* 106a39a6 int3  */
  x86_unimpl("int3 @ 0x106a39a6");
L_106a39a7:;
  /* 106a39a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a39a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a39ab jne 0x106a3976 */
  if (!C.zf) goto L_106a3976;
  /* 106a39ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a39b0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a39b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a39b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a39b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a39bd jne 0x106a39c6 */
  if (!C.zf) goto L_106a39c6;
  /* 106a39bf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_106a39c6:;
  /* 106a39c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a39ca je 0x106a3a0a */
  if (C.zf) goto L_106a3a0a;
L_106a39cc:;
  /* 106a39cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a39cf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a39d6 jne 0x106a39e1 */
  if (!C.zf) goto L_106a39e1;
  /* 106a39d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a39db cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a39df je 0x106a3a02 */
  if (C.zf) goto L_106a3a02;
L_106a39e1:;
  /* 106a39e1 push 0x106ca5dc */
  push32((uint32_t)(0x106ca5dcu));
  /* 106a39e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a39e8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 106a39ed push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a39f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a39f4 call 0x106a23c0 */
  push32(0x106a39f9u); f_106a23c0();
  /* 106a39f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a39fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a39ff jne 0x106a3a02 */
  if (!C.zf) goto L_106a3a02;
  /* 106a3a01 int3  */
  x86_unimpl("int3 @ 0x106a3a01");
L_106a3a02:;
  /* 106a3a02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a3a04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a3a06 jne 0x106a39cc */
  if (!C.zf) goto L_106a39cc;
  /* 106a3a08 jmp 0x106a3a6e */
  goto L_106a3a6e;
L_106a3a0a:;
  /* 106a3a0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3a0d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a3a10 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a3a15 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3a18 jne 0x106a3a2f */
  if (!C.zf) goto L_106a3a2f;
  /* 106a3a1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3a1d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a3a23 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3a26 jne 0x106a3a2f */
  if (!C.zf) goto L_106a3a2f;
  /* 106a3a28 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_106a3a2f:;
  /* 106a3a2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3a32 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a3a35 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a3a3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3a3d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a3a43 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3a45 je 0x106a3a68 */
  if (C.zf) goto L_106a3a68;
  /* 106a3a47 push 0x106ca5a0 */
  push32((uint32_t)(0x106ca5a0u));
  /* 106a3a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3a4e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 106a3a53 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3a58 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3a5a call 0x106a23c0 */
  push32(0x106a3a5fu); f_106a23c0();
  /* 106a3a5f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3a62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3a65 jne 0x106a3a68 */
  if (!C.zf) goto L_106a3a68;
  /* 106a3a67 int3  */
  x86_unimpl("int3 @ 0x106a3a67");
L_106a3a68:;
  /* 106a3a68 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a3a6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a3a6c jne 0x106a3a2f */
  if (!C.zf) goto L_106a3a2f;
L_106a3a6e:;
  /* 106a3a6e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3a72 je 0x106a3a99 */
  if (C.zf) goto L_106a3a99;
  /* 106a3a74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3a77 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3a7a push eax */
  push32((uint32_t)(EAX));
  /* 106a3a7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3a7e push ecx */
  push32((uint32_t)(ECX));
  /* 106a3a7f call 0x106a7280 */
  push32(0x106a3a84u); f_106a7280();
  /* 106a3a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3a87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a3a8a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3a8e jne 0x106a3a97 */
  if (!C.zf) goto L_106a3a97;
  /* 106a3a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3a92 jmp 0x106a3cda */
  goto L_106a3cda;
L_106a3a97:;
  /* 106a3a97 jmp 0x106a3abc */
  goto L_106a3abc;
L_106a3a99:;
  /* 106a3a99 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3a9c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3a9f push edx */
  push32((uint32_t)(EDX));
  /* 106a3aa0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a3aa3 push eax */
  push32((uint32_t)(EAX));
  /* 106a3aa4 call 0x106a71d0 */
  push32(0x106a3aa9u); f_106a71d0();
  /* 106a3aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3aac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a3aaf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3ab3 jne 0x106a3abc */
  if (!C.zf) goto L_106a3abc;
  /* 106a3ab5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3ab7 jmp 0x106a3cda */
  goto L_106a3cda;
L_106a3abc:;
  /* 106a3abc mov ecx, dword ptr [0x106cda88] */
  ECX = (r32((uint32_t)(0x106cda88)));
  /* 106a3ac2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3ac5 mov dword ptr [0x106cda88], ecx */
  w32((uint32_t)(0x106cda88), (ECX));
  /* 106a3acb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3acf jne 0x106a3b27 */
  if (!C.zf) goto L_106a3b27;
  /* 106a3ad1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3ad4 mov eax, dword ptr [0x106cf4d8] */
  EAX = (r32((uint32_t)(0x106cf4d8)));
  /* 106a3ad9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a3adc mov dword ptr [0x106cf4d8], eax */
  w32((uint32_t)(0x106cf4d8), (EAX));
  /* 106a3ae1 mov ecx, dword ptr [0x106cf4d8] */
  ECX = (r32((uint32_t)(0x106cf4d8)));
  /* 106a3ae7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3aea mov dword ptr [0x106cf4d8], ecx */
  w32((uint32_t)(0x106cf4d8), (ECX));
  /* 106a3af0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3af3 mov eax, dword ptr [0x106cf4e0] */
  EAX = (r32((uint32_t)(0x106cf4e0)));
  /* 106a3af8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a3afb mov dword ptr [0x106cf4e0], eax */
  w32((uint32_t)(0x106cf4e0), (EAX));
  /* 106a3b00 mov ecx, dword ptr [0x106cf4e0] */
  ECX = (r32((uint32_t)(0x106cf4e0)));
  /* 106a3b06 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3b09 mov dword ptr [0x106cf4e0], ecx */
  w32((uint32_t)(0x106cf4e0), (ECX));
  /* 106a3b0f mov edx, dword ptr [0x106cf4e0] */
  EDX = (r32((uint32_t)(0x106cf4e0)));
  /* 106a3b15 cmp edx, dword ptr [0x106cf4e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106cf4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3b1b jbe 0x106a3b27 */
  if ((C.cf||C.zf)) goto L_106a3b27;
  /* 106a3b1d mov eax, dword ptr [0x106cf4e0] */
  EAX = (r32((uint32_t)(0x106cf4e0)));
  /* 106a3b22 mov dword ptr [0x106cf4e4], eax */
  w32((uint32_t)(0x106cf4e4), (EAX));
L_106a3b27:;
  /* 106a3b27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3b2a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3b2d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a3b30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3b33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3b36 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3b39 jbe 0x106a3b5f */
  if ((C.cf||C.zf)) goto L_106a3b5f;
  /* 106a3b3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3b3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3b41 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a3b44 push edx */
  push32((uint32_t)(EDX));
  /* 106a3b45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3b47 mov al, byte ptr [0x106cda92] */
  AL = (r8((uint32_t)(0x106cda92)));
  /* 106a3b4c push eax */
  push32((uint32_t)(EAX));
  /* 106a3b4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3b50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3b53 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3b56 push edx */
  push32((uint32_t)(EDX));
  /* 106a3b57 call 0x106a7070 */
  push32(0x106a3b5cu); f_106a7070();
  /* 106a3b5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a3b5f:;
  /* 106a3b5f push 4 */
  push32((uint32_t)(0x4u));
  /* 106a3b61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3b63 mov al, byte ptr [0x106cda90] */
  AL = (r8((uint32_t)(0x106cda90)));
  /* 106a3b68 push eax */
  push32((uint32_t)(EAX));
  /* 106a3b69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3b6c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3b6f push ecx */
  push32((uint32_t)(ECX));
  /* 106a3b70 call 0x106a7070 */
  push32(0x106a3b75u); f_106a7070();
  /* 106a3b75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3b78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3b7c jne 0x106a3b99 */
  if (!C.zf) goto L_106a3b99;
  /* 106a3b7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3b81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a3b84 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106a3b87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3b8a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a3b8d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 106a3b90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3b93 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a3b96 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_106a3b99:;
  /* 106a3b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3b9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3b9f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_106a3ba2:;
  /* 106a3ba2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3ba6 jne 0x106a3bd7 */
  if (!C.zf) goto L_106a3bd7;
  /* 106a3ba8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3bac jne 0x106a3bb6 */
  if (!C.zf) goto L_106a3bb6;
  /* 106a3bae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3bb1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3bb4 je 0x106a3bd7 */
  if (C.zf) goto L_106a3bd7;
L_106a3bb6:;
  /* 106a3bb6 push 0x106ca56c */
  push32((uint32_t)(0x106ca56cu));
  /* 106a3bbb push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3bbd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 106a3bc2 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3bc9 call 0x106a23c0 */
  push32(0x106a3bceu); f_106a23c0();
  /* 106a3bce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3bd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3bd4 jne 0x106a3bd7 */
  if (!C.zf) goto L_106a3bd7;
  /* 106a3bd6 int3  */
  x86_unimpl("int3 @ 0x106a3bd6");
L_106a3bd7:;
  /* 106a3bd7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a3bd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a3bdb jne 0x106a3ba2 */
  if (!C.zf) goto L_106a3ba2;
  /* 106a3bdd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3be0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3be3 je 0x106a3beb */
  if (C.zf) goto L_106a3beb;
  /* 106a3be5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3be9 je 0x106a3bf3 */
  if (C.zf) goto L_106a3bf3;
L_106a3beb:;
  /* 106a3beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3bee jmp 0x106a3cda */
  goto L_106a3cda;
L_106a3bf3:;
  /* 106a3bf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3bf6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3bf9 je 0x106a3c0b */
  if (C.zf) goto L_106a3c0b;
  /* 106a3bfb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3bfe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a3c00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3c03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a3c06 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106a3c09 jmp 0x106a3c47 */
  goto L_106a3c47;
L_106a3c0b:;
  /* 106a3c0b mov eax, dword ptr [0x106cf4d4] */
  EAX = (r32((uint32_t)(0x106cf4d4)));
  /* 106a3c10 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3c13 je 0x106a3c36 */
  if (C.zf) goto L_106a3c36;
  /* 106a3c15 push 0x106ca550 */
  push32((uint32_t)(0x106ca550u));
  /* 106a3c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3c1c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 106a3c21 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3c26 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3c28 call 0x106a23c0 */
  push32(0x106a3c2du); f_106a23c0();
  /* 106a3c2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3c30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3c33 jne 0x106a3c36 */
  if (!C.zf) goto L_106a3c36;
  /* 106a3c35 int3  */
  x86_unimpl("int3 @ 0x106a3c35");
L_106a3c36:;
  /* 106a3c36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a3c38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a3c3a jne 0x106a3c0b */
  if (!C.zf) goto L_106a3c0b;
  /* 106a3c3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3c3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a3c42 mov dword ptr [0x106cf4d4], eax */
  w32((uint32_t)(0x106cf4d4), (EAX));
L_106a3c47:;
  /* 106a3c47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3c4a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3c4e je 0x106a3c5f */
  if (C.zf) goto L_106a3c5f;
  /* 106a3c50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3c53 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a3c56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3c59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a3c5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106a3c5d jmp 0x106a3c9a */
  goto L_106a3c9a;
L_106a3c5f:;
  /* 106a3c5f mov eax, dword ptr [0x106cf4dc] */
  EAX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a3c64 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3c67 je 0x106a3c8a */
  if (C.zf) goto L_106a3c8a;
  /* 106a3c69 push 0x106ca534 */
  push32((uint32_t)(0x106ca534u));
  /* 106a3c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3c70 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 106a3c75 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3c7a push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3c7c call 0x106a23c0 */
  push32(0x106a3c81u); f_106a23c0();
  /* 106a3c81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3c84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3c87 jne 0x106a3c8a */
  if (!C.zf) goto L_106a3c8a;
  /* 106a3c89 int3  */
  x86_unimpl("int3 @ 0x106a3c89");
L_106a3c8a:;
  /* 106a3c8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a3c8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a3c8e jne 0x106a3c5f */
  if (!C.zf) goto L_106a3c5f;
  /* 106a3c90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3c93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a3c95 mov dword ptr [0x106cf4dc], eax */
  w32((uint32_t)(0x106cf4dc), (EAX));
L_106a3c9a:;
  /* 106a3c9a cmp dword ptr [0x106cf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3ca1 je 0x106a3cb1 */
  if (C.zf) goto L_106a3cb1;
  /* 106a3ca3 mov ecx, dword ptr [0x106cf4dc] */
  ECX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a3ca9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3cac mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106a3caf jmp 0x106a3cb9 */
  goto L_106a3cb9;
L_106a3cb1:;
  /* 106a3cb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3cb4 mov dword ptr [0x106cf4d4], eax */
  w32((uint32_t)(0x106cf4d4), (EAX));
L_106a3cb9:;
  /* 106a3cb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3cbc mov edx, dword ptr [0x106cf4dc] */
  EDX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a3cc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106a3cc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3cc7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 106a3cce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a3cd1 mov dword ptr [0x106cf4dc], ecx */
  w32((uint32_t)(0x106cf4dc), (ECX));
  /* 106a3cd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106a3cda:;
  /* 106a3cda pop edi */
  EDI = (pop32());
  /* 106a3cdb pop esi */
  ESI = (pop32());
  /* 106a3cdc pop ebx */
  EBX = (pop32());
  /* 106a3cdd mov esp, ebp */
  ESP = (EBP);
  /* 106a3cdf pop ebp */
  EBP = (pop32());
  /* 106a3ce0 ret  */
  ESPCHK(0x106a37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x106a3cf0 (27 bytes, 13 insns) */
void f_106a3cf0(void) {
  FTRACE(0x106a3cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3cf1 mov ebp, esp */
  EBP = (ESP);
  /* 106a3cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3cf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3cf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3cfc push eax */
  push32((uint32_t)(EAX));
  /* 106a3cfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3d00 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3d01 call 0x106a3d10 */
  push32(0x106a3d06u); f_106a3d10();
  /* 106a3d06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3d09 pop ebp */
  EBP = (pop32());
  /* 106a3d0a ret  */
  ESPCHK(0x106a3cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d10 @ 0x106a3d10 (64 bytes, 27 insns) */
void f_106a3d10(void) {
  FTRACE(0x106a3d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3d10 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3d11 mov ebp, esp */
  EBP = (ESP);
  /* 106a3d13 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3d14 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a3d16 call 0x106a6d00 */
  push32(0x106a3d1bu); f_106a6d00();
  /* 106a3d1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3d20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a3d23 push eax */
  push32((uint32_t)(EAX));
  /* 106a3d24 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a3d27 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3d28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a3d2b push edx */
  push32((uint32_t)(EDX));
  /* 106a3d2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3d2f push eax */
  push32((uint32_t)(EAX));
  /* 106a3d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3d33 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3d34 call 0x106a37d0 */
  push32(0x106a3d39u); f_106a37d0();
  /* 106a3d39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3d3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a3d3f push 9 */
  push32((uint32_t)(0x9u));
  /* 106a3d41 call 0x106a6da0 */
  push32(0x106a3d46u); f_106a6da0();
  /* 106a3d46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3d49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3d4c mov esp, ebp */
  ESP = (EBP);
  /* 106a3d4e pop ebp */
  EBP = (pop32());
  /* 106a3d4f ret  */
  ESPCHK(0x106a3d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d50 @ 0x106a3d50 (19 bytes, 9 insns) */
void f_106a3d50(void) {
  FTRACE(0x106a3d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3d50 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3d51 mov ebp, esp */
  EBP = (ESP);
  /* 106a3d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3d55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3d58 push eax */
  push32((uint32_t)(EAX));
  /* 106a3d59 call 0x106a3d90 */
  push32(0x106a3d5eu); f_106a3d90();
  /* 106a3d5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3d61 pop ebp */
  EBP = (pop32());
  /* 106a3d62 ret  */
  ESPCHK(0x106a3d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d70 @ 0x106a3d70 (19 bytes, 9 insns) */
void f_106a3d70(void) {
  FTRACE(0x106a3d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3d70 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3d71 mov ebp, esp */
  EBP = (ESP);
  /* 106a3d73 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3d75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3d78 push eax */
  push32((uint32_t)(EAX));
  /* 106a3d79 call 0x106a3dc0 */
  push32(0x106a3d7eu); f_106a3dc0();
  /* 106a3d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3d81 pop ebp */
  EBP = (pop32());
  /* 106a3d82 ret  */
  ESPCHK(0x106a3d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d90 @ 0x106a3d90 (41 bytes, 16 insns) */
void f_106a3d90(void) {
  FTRACE(0x106a3d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3d90 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3d91 mov ebp, esp */
  EBP = (ESP);
  /* 106a3d93 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a3d95 call 0x106a6d00 */
  push32(0x106a3d9au); f_106a6d00();
  /* 106a3d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3d9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3da0 push eax */
  push32((uint32_t)(EAX));
  /* 106a3da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3da4 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3da5 call 0x106a3dc0 */
  push32(0x106a3daau); f_106a3dc0();
  /* 106a3daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3dad push 9 */
  push32((uint32_t)(0x9u));
  /* 106a3daf call 0x106a6da0 */
  push32(0x106a3db4u); f_106a6da0();
  /* 106a3db4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3db7 pop ebp */
  EBP = (pop32());
  /* 106a3db8 ret  */
  ESPCHK(0x106a3d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x106a3dc0 (1004 bytes, 342 insns) */
void f_106a3dc0(void) {
  FTRACE(0x106a3dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a3dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a3dc1 mov ebp, esp */
  EBP = (ESP);
  /* 106a3dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3dc4 push ebx */
  push32((uint32_t)(EBX));
  /* 106a3dc5 push esi */
  push32((uint32_t)(ESI));
  /* 106a3dc6 push edi */
  push32((uint32_t)(EDI));
  /* 106a3dc7 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a3dcc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106a3dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3dd1 je 0x106a3e03 */
  if (C.zf) goto L_106a3e03;
L_106a3dd3:;
  /* 106a3dd3 call 0x106a44a0 */
  push32(0x106a3dd8u); f_106a44a0();
  /* 106a3dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3dda jne 0x106a3dfd */
  if (!C.zf) goto L_106a3dfd;
  /* 106a3ddc push 0x106ca520 */
  push32((uint32_t)(0x106ca520u));
  /* 106a3de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3de3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 106a3de8 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3ded push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3def call 0x106a23c0 */
  push32(0x106a3df4u); f_106a23c0();
  /* 106a3df4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3df7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3dfa jne 0x106a3dfd */
  if (!C.zf) goto L_106a3dfd;
  /* 106a3dfc int3  */
  x86_unimpl("int3 @ 0x106a3dfc");
L_106a3dfd:;
  /* 106a3dfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a3dff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a3e01 jne 0x106a3dd3 */
  if (!C.zf) goto L_106a3dd3;
L_106a3e03:;
  /* 106a3e03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3e07 jne 0x106a3e0e */
  if (!C.zf) goto L_106a3e0e;
  /* 106a3e09 jmp 0x106a41a5 */
  goto L_106a41a5;
L_106a3e0e:;
  /* 106a3e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a3e17 push edx */
  push32((uint32_t)(EDX));
  /* 106a3e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3e1d push eax */
  push32((uint32_t)(EAX));
  /* 106a3e1e push 3 */
  push32((uint32_t)(0x3u));
  /* 106a3e20 call dword ptr [0x106cdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cdc90))), 0x106a3e26u);
  /* 106a3e26 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3e2b jne 0x106a3e58 */
  if (!C.zf) goto L_106a3e58;
L_106a3e2d:;
  /* 106a3e2d push 0x106ca7e4 */
  push32((uint32_t)(0x106ca7e4u));
  /* 106a3e32 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a3e37 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e3f call 0x106a23c0 */
  push32(0x106a3e44u); f_106a23c0();
  /* 106a3e44 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3e47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3e4a jne 0x106a3e4d */
  if (!C.zf) goto L_106a3e4d;
  /* 106a3e4c int3  */
  x86_unimpl("int3 @ 0x106a3e4c");
L_106a3e4d:;
  /* 106a3e4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a3e4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a3e51 jne 0x106a3e2d */
  if (!C.zf) goto L_106a3e2d;
  /* 106a3e53 jmp 0x106a41a5 */
  goto L_106a41a5;
L_106a3e58:;
  /* 106a3e58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3e5b push edx */
  push32((uint32_t)(EDX));
  /* 106a3e5c call 0x106a4900 */
  push32(0x106a3e61u); f_106a4900();
  /* 106a3e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3e66 jne 0x106a3e89 */
  if (!C.zf) goto L_106a3e89;
  /* 106a3e68 push 0x106ca624 */
  push32((uint32_t)(0x106ca624u));
  /* 106a3e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3e6f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 106a3e74 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3e79 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3e7b call 0x106a23c0 */
  push32(0x106a3e80u); f_106a23c0();
  /* 106a3e80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3e83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3e86 jne 0x106a3e89 */
  if (!C.zf) goto L_106a3e89;
  /* 106a3e88 int3  */
  x86_unimpl("int3 @ 0x106a3e88");
L_106a3e89:;
  /* 106a3e89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3e8d jne 0x106a3e58 */
  if (!C.zf) goto L_106a3e58;
  /* 106a3e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a3e92 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a3e95 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a3e98:;
  /* 106a3e98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3e9b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a3e9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a3ea3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3ea6 je 0x106a3eeb */
  if (C.zf) goto L_106a3eeb;
  /* 106a3ea8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3eab cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3eaf je 0x106a3eeb */
  if (C.zf) goto L_106a3eeb;
  /* 106a3eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3eb4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a3eb7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a3ebc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3ebf je 0x106a3eeb */
  if (C.zf) goto L_106a3eeb;
  /* 106a3ec1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3ec4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3ec8 je 0x106a3eeb */
  if (C.zf) goto L_106a3eeb;
  /* 106a3eca push 0x106ca7bc */
  push32((uint32_t)(0x106ca7bcu));
  /* 106a3ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3ed1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 106a3ed6 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3edb push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3edd call 0x106a23c0 */
  push32(0x106a3ee2u); f_106a23c0();
  /* 106a3ee2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3ee5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3ee8 jne 0x106a3eeb */
  if (!C.zf) goto L_106a3eeb;
  /* 106a3eea int3  */
  x86_unimpl("int3 @ 0x106a3eea");
L_106a3eeb:;
  /* 106a3eeb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a3eed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a3eef jne 0x106a3e98 */
  if (!C.zf) goto L_106a3e98;
  /* 106a3ef1 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a3ef6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106a3ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3efb jne 0x106a3fc6 */
  if (!C.zf) goto L_106a3fc6;
  /* 106a3f01 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a3f03 mov cl, byte ptr [0x106cda90] */
  CL = (r8((uint32_t)(0x106cda90)));
  /* 106a3f09 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3f0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f0d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3f10 push edx */
  push32((uint32_t)(EDX));
  /* 106a3f11 call 0x106a4410 */
  push32(0x106a3f16u); f_106a4410();
  /* 106a3f16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3f1b jne 0x106a3f60 */
  if (!C.zf) goto L_106a3f60;
L_106a3f1d:;
  /* 106a3f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f20 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3f23 push eax */
  push32((uint32_t)(EAX));
  /* 106a3f24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f27 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106a3f2a push edx */
  push32((uint32_t)(EDX));
  /* 106a3f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f2e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106a3f31 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a3f37 mov edx, dword ptr [ecx*4 + 0x106cda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cda94)));
  /* 106a3f3e push edx */
  push32((uint32_t)(EDX));
  /* 106a3f3f push 0x106ca790 */
  push32((uint32_t)(0x106ca790u));
  /* 106a3f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3f4a push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3f4c call 0x106a23c0 */
  push32(0x106a3f51u); f_106a23c0();
  /* 106a3f51 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3f54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3f57 jne 0x106a3f5a */
  if (!C.zf) goto L_106a3f5a;
  /* 106a3f59 int3  */
  x86_unimpl("int3 @ 0x106a3f59");
L_106a3f5a:;
  /* 106a3f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3f5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3f5e jne 0x106a3f1d */
  if (!C.zf) goto L_106a3f1d;
L_106a3f60:;
  /* 106a3f60 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a3f62 mov cl, byte ptr [0x106cda90] */
  CL = (r8((uint32_t)(0x106cda90)));
  /* 106a3f68 push ecx */
  push32((uint32_t)(ECX));
  /* 106a3f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a3f6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f72 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 106a3f76 push edx */
  push32((uint32_t)(EDX));
  /* 106a3f77 call 0x106a4410 */
  push32(0x106a3f7cu); f_106a4410();
  /* 106a3f7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3f81 jne 0x106a3fc6 */
  if (!C.zf) goto L_106a3fc6;
L_106a3f83:;
  /* 106a3f83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3f89 push eax */
  push32((uint32_t)(EAX));
  /* 106a3f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f8d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106a3f90 push edx */
  push32((uint32_t)(EDX));
  /* 106a3f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3f94 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106a3f97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a3f9d mov edx, dword ptr [ecx*4 + 0x106cda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cda94)));
  /* 106a3fa4 push edx */
  push32((uint32_t)(EDX));
  /* 106a3fa5 push 0x106ca764 */
  push32((uint32_t)(0x106ca764u));
  /* 106a3faa push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3fac push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3fae push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3fb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a3fb2 call 0x106a23c0 */
  push32(0x106a3fb7u); f_106a23c0();
  /* 106a3fb7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3fba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3fbd jne 0x106a3fc0 */
  if (!C.zf) goto L_106a3fc0;
  /* 106a3fbf int3  */
  x86_unimpl("int3 @ 0x106a3fbf");
L_106a3fc0:;
  /* 106a3fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a3fc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a3fc4 jne 0x106a3f83 */
  if (!C.zf) goto L_106a3f83;
L_106a3fc6:;
  /* 106a3fc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3fc9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3fcd jne 0x106a403b */
  if (!C.zf) goto L_106a403b;
L_106a3fcf:;
  /* 106a3fcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3fd2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3fd9 jne 0x106a3fe4 */
  if (!C.zf) goto L_106a3fe4;
  /* 106a3fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a3fde cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a3fe2 je 0x106a4005 */
  if (C.zf) goto L_106a4005;
L_106a3fe4:;
  /* 106a3fe4 push 0x106ca724 */
  push32((uint32_t)(0x106ca724u));
  /* 106a3fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a3feb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 106a3ff0 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a3ff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a3ff7 call 0x106a23c0 */
  push32(0x106a3ffcu); f_106a23c0();
  /* 106a3ffc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a3fff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4002 jne 0x106a4005 */
  if (!C.zf) goto L_106a4005;
  /* 106a4004 int3  */
  x86_unimpl("int3 @ 0x106a4004");
L_106a4005:;
  /* 106a4005 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4007 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4009 jne 0x106a3fcf */
  if (!C.zf) goto L_106a3fcf;
  /* 106a400b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a400e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a4011 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4014 push eax */
  push32((uint32_t)(EAX));
  /* 106a4015 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4017 mov cl, byte ptr [0x106cda91] */
  CL = (r8((uint32_t)(0x106cda91)));
  /* 106a401d push ecx */
  push32((uint32_t)(ECX));
  /* 106a401e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4021 push edx */
  push32((uint32_t)(EDX));
  /* 106a4022 call 0x106a7070 */
  push32(0x106a4027u); f_106a7070();
  /* 106a4027 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a402a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a402d push eax */
  push32((uint32_t)(EAX));
  /* 106a402e call 0x106a7470 */
  push32(0x106a4033u); f_106a7470();
  /* 106a4033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4036 jmp 0x106a41a5 */
  goto L_106a41a5;
L_106a403b:;
  /* 106a403b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a403e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4042 jne 0x106a4051 */
  if (!C.zf) goto L_106a4051;
  /* 106a4044 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4048 jne 0x106a4051 */
  if (!C.zf) goto L_106a4051;
  /* 106a404a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_106a4051:;
  /* 106a4051 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4054 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4057 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a405a je 0x106a407d */
  if (C.zf) goto L_106a407d;
  /* 106a405c push 0x106ca704 */
  push32((uint32_t)(0x106ca704u));
  /* 106a4061 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4063 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 106a4068 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a406d push 2 */
  push32((uint32_t)(0x2u));
  /* 106a406f call 0x106a23c0 */
  push32(0x106a4074u); f_106a23c0();
  /* 106a4074 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4077 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a407a jne 0x106a407d */
  if (!C.zf) goto L_106a407d;
  /* 106a407c int3  */
  x86_unimpl("int3 @ 0x106a407c");
L_106a407d:;
  /* 106a407d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a407f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4081 jne 0x106a4051 */
  if (!C.zf) goto L_106a4051;
  /* 106a4083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4086 mov eax, dword ptr [0x106cf4e0] */
  EAX = (r32((uint32_t)(0x106cf4e0)));
  /* 106a408b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a408e mov dword ptr [0x106cf4e0], eax */
  w32((uint32_t)(0x106cf4e0), (EAX));
  /* 106a4093 mov ecx, dword ptr [0x106cda84] */
  ECX = (r32((uint32_t)(0x106cda84)));
  /* 106a4099 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 106a409c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a409e jne 0x106a417c */
  if (!C.zf) goto L_106a417c;
  /* 106a40a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a40a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a40aa je 0x106a40bc */
  if (C.zf) goto L_106a40bc;
  /* 106a40ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a40af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a40b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a40b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a40b7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106a40ba jmp 0x106a40fa */
  goto L_106a40fa;
L_106a40bc:;
  /* 106a40bc mov ecx, dword ptr [0x106cf4d4] */
  ECX = (r32((uint32_t)(0x106cf4d4)));
  /* 106a40c2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a40c5 je 0x106a40e8 */
  if (C.zf) goto L_106a40e8;
  /* 106a40c7 push 0x106ca6ec */
  push32((uint32_t)(0x106ca6ecu));
  /* 106a40cc push 0 */
  push32((uint32_t)(0x0u));
  /* 106a40ce push 0x42a */
  push32((uint32_t)(0x42au));
  /* 106a40d3 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a40d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a40da call 0x106a23c0 */
  push32(0x106a40dfu); f_106a23c0();
  /* 106a40df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a40e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a40e5 jne 0x106a40e8 */
  if (!C.zf) goto L_106a40e8;
  /* 106a40e7 int3  */
  x86_unimpl("int3 @ 0x106a40e7");
L_106a40e8:;
  /* 106a40e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a40ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a40ec jne 0x106a40bc */
  if (!C.zf) goto L_106a40bc;
  /* 106a40ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a40f1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a40f4 mov dword ptr [0x106cf4d4], ecx */
  w32((uint32_t)(0x106cf4d4), (ECX));
L_106a40fa:;
  /* 106a40fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a40fd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4101 je 0x106a4112 */
  if (C.zf) goto L_106a4112;
  /* 106a4103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4106 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a4109 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a410c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a410e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106a4110 jmp 0x106a414f */
  goto L_106a414f;
L_106a4112:;
  /* 106a4112 mov ecx, dword ptr [0x106cf4dc] */
  ECX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a4118 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a411b je 0x106a413e */
  if (C.zf) goto L_106a413e;
  /* 106a411d push 0x106ca6d4 */
  push32((uint32_t)(0x106ca6d4u));
  /* 106a4122 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4124 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 106a4129 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a412e push 2 */
  push32((uint32_t)(0x2u));
  /* 106a4130 call 0x106a23c0 */
  push32(0x106a4135u); f_106a23c0();
  /* 106a4135 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4138 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a413b jne 0x106a413e */
  if (!C.zf) goto L_106a413e;
  /* 106a413d int3  */
  x86_unimpl("int3 @ 0x106a413d");
L_106a413e:;
  /* 106a413e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a4140 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a4142 jne 0x106a4112 */
  if (!C.zf) goto L_106a4112;
  /* 106a4144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4147 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a4149 mov dword ptr [0x106cf4dc], ecx */
  w32((uint32_t)(0x106cf4dc), (ECX));
L_106a414f:;
  /* 106a414f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4152 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a4155 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4158 push eax */
  push32((uint32_t)(EAX));
  /* 106a4159 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a415b mov cl, byte ptr [0x106cda91] */
  CL = (r8((uint32_t)(0x106cda91)));
  /* 106a4161 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4165 push edx */
  push32((uint32_t)(EDX));
  /* 106a4166 call 0x106a7070 */
  push32(0x106a416bu); f_106a7070();
  /* 106a416b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a416e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4171 push eax */
  push32((uint32_t)(EAX));
  /* 106a4172 call 0x106a7470 */
  push32(0x106a4177u); f_106a7470();
  /* 106a4177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a417a jmp 0x106a41a5 */
  goto L_106a41a5;
L_106a417c:;
  /* 106a417c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a417f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 106a4186 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4189 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a418c push eax */
  push32((uint32_t)(EAX));
  /* 106a418d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a418f mov cl, byte ptr [0x106cda91] */
  CL = (r8((uint32_t)(0x106cda91)));
  /* 106a4195 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4196 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4199 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a419c push edx */
  push32((uint32_t)(EDX));
  /* 106a419d call 0x106a7070 */
  push32(0x106a41a2u); f_106a7070();
  /* 106a41a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a41a5:;
  /* 106a41a5 pop edi */
  EDI = (pop32());
  /* 106a41a6 pop esi */
  ESI = (pop32());
  /* 106a41a7 pop ebx */
  EBX = (pop32());
  /* 106a41a8 mov esp, ebp */
  ESP = (EBP);
  /* 106a41aa pop ebp */
  EBP = (pop32());
  /* 106a41ab ret  */
  ESPCHK(0x106a3dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041b0 @ 0x106a41b0 (19 bytes, 9 insns) */
void f_106a41b0(void) {
  FTRACE(0x106a41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a41b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a41b1 mov ebp, esp */
  EBP = (ESP);
  /* 106a41b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a41b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a41b8 push eax */
  push32((uint32_t)(EAX));
  /* 106a41b9 call 0x106a41d0 */
  push32(0x106a41beu); f_106a41d0();
  /* 106a41be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a41c1 pop ebp */
  EBP = (pop32());
  /* 106a41c2 ret  */
  ESPCHK(0x106a41b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041d0 @ 0x106a41d0 (342 bytes, 119 insns) */
void f_106a41d0(void) {
  FTRACE(0x106a41d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a41d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a41d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a41d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a41d6 push ebx */
  push32((uint32_t)(EBX));
  /* 106a41d7 push esi */
  push32((uint32_t)(ESI));
  /* 106a41d8 push edi */
  push32((uint32_t)(EDI));
  /* 106a41d9 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a41de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106a41e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a41e3 je 0x106a4215 */
  if (C.zf) goto L_106a4215;
L_106a41e5:;
  /* 106a41e5 call 0x106a44a0 */
  push32(0x106a41eau); f_106a44a0();
  /* 106a41ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a41ec jne 0x106a420f */
  if (!C.zf) goto L_106a420f;
  /* 106a41ee push 0x106ca520 */
  push32((uint32_t)(0x106ca520u));
  /* 106a41f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a41f5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 106a41fa push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a41ff push 2 */
  push32((uint32_t)(0x2u));
  /* 106a4201 call 0x106a23c0 */
  push32(0x106a4206u); f_106a23c0();
  /* 106a4206 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4209 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a420c jne 0x106a420f */
  if (!C.zf) goto L_106a420f;
  /* 106a420e int3  */
  x86_unimpl("int3 @ 0x106a420e");
L_106a420f:;
  /* 106a420f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4211 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4213 jne 0x106a41e5 */
  if (!C.zf) goto L_106a41e5;
L_106a4215:;
  /* 106a4215 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4217 call 0x106a6d00 */
  push32(0x106a421cu); f_106a6d00();
  /* 106a421c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a421f:;
  /* 106a421f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4222 push edx */
  push32((uint32_t)(EDX));
  /* 106a4223 call 0x106a4900 */
  push32(0x106a4228u); f_106a4900();
  /* 106a4228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a422b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a422d jne 0x106a4250 */
  if (!C.zf) goto L_106a4250;
  /* 106a422f push 0x106ca624 */
  push32((uint32_t)(0x106ca624u));
  /* 106a4234 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4236 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 106a423b push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a4240 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a4242 call 0x106a23c0 */
  push32(0x106a4247u); f_106a23c0();
  /* 106a4247 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a424a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a424d jne 0x106a4250 */
  if (!C.zf) goto L_106a4250;
  /* 106a424f int3  */
  x86_unimpl("int3 @ 0x106a424f");
L_106a4250:;
  /* 106a4250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4254 jne 0x106a421f */
  if (!C.zf) goto L_106a421f;
  /* 106a4256 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4259 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a425c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106a425f:;
  /* 106a425f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4262 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4265 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a426a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a426d je 0x106a42b2 */
  if (C.zf) goto L_106a42b2;
  /* 106a426f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4272 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4276 je 0x106a42b2 */
  if (C.zf) goto L_106a42b2;
  /* 106a4278 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a427b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a427e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4283 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4286 je 0x106a42b2 */
  if (C.zf) goto L_106a42b2;
  /* 106a4288 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a428b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a428f je 0x106a42b2 */
  if (C.zf) goto L_106a42b2;
  /* 106a4291 push 0x106ca7bc */
  push32((uint32_t)(0x106ca7bcu));
  /* 106a4296 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4298 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 106a429d push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a42a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a42a4 call 0x106a23c0 */
  push32(0x106a42a9u); f_106a23c0();
  /* 106a42a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a42ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a42af jne 0x106a42b2 */
  if (!C.zf) goto L_106a42b2;
  /* 106a42b1 int3  */
  x86_unimpl("int3 @ 0x106a42b1");
L_106a42b2:;
  /* 106a42b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a42b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a42b6 jne 0x106a425f */
  if (!C.zf) goto L_106a425f;
  /* 106a42b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a42bb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a42bf jne 0x106a42ce */
  if (!C.zf) goto L_106a42ce;
  /* 106a42c1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a42c5 jne 0x106a42ce */
  if (!C.zf) goto L_106a42ce;
  /* 106a42c7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_106a42ce:;
  /* 106a42ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a42d1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a42d5 je 0x106a4309 */
  if (C.zf) goto L_106a4309;
L_106a42d7:;
  /* 106a42d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a42da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a42dd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a42e0 je 0x106a4303 */
  if (C.zf) goto L_106a4303;
  /* 106a42e2 push 0x106ca704 */
  push32((uint32_t)(0x106ca704u));
  /* 106a42e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a42e9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 106a42ee push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a42f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a42f5 call 0x106a23c0 */
  push32(0x106a42fau); f_106a23c0();
  /* 106a42fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a42fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4300 jne 0x106a4303 */
  if (!C.zf) goto L_106a4303;
  /* 106a4302 int3  */
  x86_unimpl("int3 @ 0x106a4302");
L_106a4303:;
  /* 106a4303 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4305 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4307 jne 0x106a42d7 */
  if (!C.zf) goto L_106a42d7;
L_106a4309:;
  /* 106a4309 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a430c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a430f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a4312 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4314 call 0x106a6da0 */
  push32(0x106a4319u); f_106a6da0();
  /* 106a4319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a431c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a431f pop edi */
  EDI = (pop32());
  /* 106a4320 pop esi */
  ESI = (pop32());
  /* 106a4321 pop ebx */
  EBX = (pop32());
  /* 106a4322 mov esp, ebp */
  ESP = (EBP);
  /* 106a4324 pop ebp */
  EBP = (pop32());
  /* 106a4325 ret  */
  ESPCHK(0x106a41d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x106a4330 (28 bytes, 11 insns) */
void f_106a4330(void) {
  FTRACE(0x106a4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4330 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4331 mov ebp, esp */
  EBP = (ESP);
  /* 106a4333 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4334 mov eax, dword ptr [0x106cda8c] */
  EAX = (r32((uint32_t)(0x106cda8c)));
  /* 106a4339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a433c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a433f mov dword ptr [0x106cda8c], ecx */
  w32((uint32_t)(0x106cda8c), (ECX));
  /* 106a4345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4348 mov esp, ebp */
  ESP = (EBP);
  /* 106a434a pop ebp */
  EBP = (pop32());
  /* 106a434b ret  */
  ESPCHK(0x106a4330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004350 @ 0x106a4350 (157 bytes, 59 insns) */
void f_106a4350(void) {
  FTRACE(0x106a4350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4350 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4351 mov ebp, esp */
  EBP = (ESP);
  /* 106a4353 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4354 push ebx */
  push32((uint32_t)(EBX));
  /* 106a4355 push esi */
  push32((uint32_t)(ESI));
  /* 106a4356 push edi */
  push32((uint32_t)(EDI));
  /* 106a4357 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4359 call 0x106a6d00 */
  push32(0x106a435eu); f_106a6d00();
  /* 106a435e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4364 push eax */
  push32((uint32_t)(EAX));
  /* 106a4365 call 0x106a4900 */
  push32(0x106a436au); f_106a4900();
  /* 106a436a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a436d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a436f je 0x106a43dc */
  if (C.zf) goto L_106a43dc;
  /* 106a4371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4374 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4377 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a437a:;
  /* 106a437a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a437d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4380 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4385 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4388 je 0x106a43cd */
  if (C.zf) goto L_106a43cd;
  /* 106a438a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a438d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4391 je 0x106a43cd */
  if (C.zf) goto L_106a43cd;
  /* 106a4393 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4396 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4399 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a439e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a43a1 je 0x106a43cd */
  if (C.zf) goto L_106a43cd;
  /* 106a43a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a43a6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a43aa je 0x106a43cd */
  if (C.zf) goto L_106a43cd;
  /* 106a43ac push 0x106ca7bc */
  push32((uint32_t)(0x106ca7bcu));
  /* 106a43b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a43b3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 106a43b8 push 0x106ca514 */
  push32((uint32_t)(0x106ca514u));
  /* 106a43bd push 2 */
  push32((uint32_t)(0x2u));
  /* 106a43bf call 0x106a23c0 */
  push32(0x106a43c4u); f_106a23c0();
  /* 106a43c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a43c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a43ca jne 0x106a43cd */
  if (!C.zf) goto L_106a43cd;
  /* 106a43cc int3  */
  x86_unimpl("int3 @ 0x106a43cc");
L_106a43cd:;
  /* 106a43cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a43cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a43d1 jne 0x106a437a */
  if (!C.zf) goto L_106a437a;
  /* 106a43d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a43d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a43d9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_106a43dc:;
  /* 106a43dc push 9 */
  push32((uint32_t)(0x9u));
  /* 106a43de call 0x106a6da0 */
  push32(0x106a43e3u); f_106a6da0();
  /* 106a43e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a43e6 pop edi */
  EDI = (pop32());
  /* 106a43e7 pop esi */
  ESI = (pop32());
  /* 106a43e8 pop ebx */
  EBX = (pop32());
  /* 106a43e9 mov esp, ebp */
  ESP = (EBP);
  /* 106a43eb pop ebp */
  EBP = (pop32());
  /* 106a43ec ret  */
  ESPCHK(0x106a4350u, _esp0);
  ESP += 4; return;
}

/* FUN_100043f0 @ 0x106a43f0 (28 bytes, 11 insns) */
void f_106a43f0(void) {
  FTRACE(0x106a43f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a43f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a43f1 mov ebp, esp */
  EBP = (ESP);
  /* 106a43f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a43f4 mov eax, dword ptr [0x106cdc90] */
  EAX = (r32((uint32_t)(0x106cdc90)));
  /* 106a43f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a43fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a43ff mov dword ptr [0x106cdc90], ecx */
  w32((uint32_t)(0x106cdc90), (ECX));
  /* 106a4405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4408 mov esp, ebp */
  ESP = (EBP);
  /* 106a440a pop ebp */
  EBP = (pop32());
  /* 106a440b ret  */
  ESPCHK(0x106a43f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004410 @ 0x106a4410 (136 bytes, 55 insns) */
void f_106a4410(void) {
  FTRACE(0x106a4410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4410 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4411 mov ebp, esp */
  EBP = (ESP);
  /* 106a4413 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4414 push ebx */
  push32((uint32_t)(EBX));
  /* 106a4415 push esi */
  push32((uint32_t)(ESI));
  /* 106a4416 push edi */
  push32((uint32_t)(EDI));
  /* 106a4417 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_106a441e:;
  /* 106a441e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a4421 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a4424 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4427 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106a442a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a442c je 0x106a448e */
  if (C.zf) goto L_106a448e;
  /* 106a442e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4431 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4433 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106a4435 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a4438 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a443e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4441 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4444 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106a4447 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4449 je 0x106a448c */
  if (C.zf) goto L_106a448c;
L_106a444b:;
  /* 106a444b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a444e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4453 push eax */
  push32((uint32_t)(EAX));
  /* 106a4454 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4457 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a4459 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 106a445c push edx */
  push32((uint32_t)(EDX));
  /* 106a445d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4460 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4463 push eax */
  push32((uint32_t)(EAX));
  /* 106a4464 push 0x106ca800 */
  push32((uint32_t)(0x106ca800u));
  /* 106a4469 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a446b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a446d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a446f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4471 call 0x106a23c0 */
  push32(0x106a4476u); f_106a23c0();
  /* 106a4476 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4479 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a447c jne 0x106a447f */
  if (!C.zf) goto L_106a447f;
  /* 106a447e int3  */
  x86_unimpl("int3 @ 0x106a447e");
L_106a447f:;
  /* 106a447f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4481 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4483 jne 0x106a444b */
  if (!C.zf) goto L_106a444b;
  /* 106a4485 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106a448c:;
  /* 106a448c jmp 0x106a441e */
  goto L_106a441e;
L_106a448e:;
  /* 106a448e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4491 pop edi */
  EDI = (pop32());
  /* 106a4492 pop esi */
  ESI = (pop32());
  /* 106a4493 pop ebx */
  EBX = (pop32());
  /* 106a4494 mov esp, ebp */
  ESP = (EBP);
  /* 106a4496 pop ebp */
  EBP = (pop32());
  /* 106a4497 ret  */
  ESPCHK(0x106a4410u, _esp0);
  ESP += 4; return;
}

/* FUN_100044a0 @ 0x106a44a0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_106a44a0(void) {
  FTRACE(0x106a44a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a44a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a44a1 mov ebp, esp */
  EBP = (ESP);
  /* 106a44a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a44a6 push ebx */
  push32((uint32_t)(EBX));
  /* 106a44a7 push esi */
  push32((uint32_t)(ESI));
  /* 106a44a8 push edi */
  push32((uint32_t)(EDI));
  /* 106a44a9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106a44b0 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a44b5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106a44b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a44ba jne 0x106a44c6 */
  if (!C.zf) goto L_106a44c6;
  /* 106a44bc mov eax, 1 */
  EAX = (0x1u);
  /* 106a44c1 jmp 0x106a47f8 */
  goto L_106a47f8;
L_106a44c6:;
  /* 106a44c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a44c8 call 0x106a6d00 */
  push32(0x106a44cdu); f_106a6d00();
  /* 106a44cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a44d0 call 0x106a74e0 */
  push32(0x106a44d5u); f_106a74e0();
  /* 106a44d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a44d8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a44dc je 0x106a45e9 */
  if (C.zf) goto L_106a45e9;
  /* 106a44e2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a44e6 je 0x106a45e9 */
  if (C.zf) goto L_106a45e9;
  /* 106a44ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a44ef mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106a44f2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a44f5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a44f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106a44fb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a44ff ja 0x106a45b2 */
  if ((!C.cf&&!C.zf)) goto L_106a45b2;
  /* 106a4505 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a4508 jmp dword ptr [eax*4 + 0x106a47ff] */
  switch (EAX) {
    case 0: goto L_106a458a;
    case 1: goto L_106a4562;
    case 2: goto L_106a453a;
    case 3: goto L_106a450f;
    default: x86_unimpl("switch@0x106a4508 out of table"); return;
  }
L_106a450f:;
  /* 106a450f push 0x106ca954 */
  push32((uint32_t)(0x106ca954u));
  /* 106a4514 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a4519 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a451b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a451d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a451f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4521 call 0x106a23c0 */
  push32(0x106a4526u); f_106a23c0();
  /* 106a4526 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4529 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a452c jne 0x106a452f */
  if (!C.zf) goto L_106a452f;
  /* 106a452e int3  */
  x86_unimpl("int3 @ 0x106a452e");
L_106a452f:;
  /* 106a452f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4531 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4533 jne 0x106a450f */
  if (!C.zf) goto L_106a450f;
  /* 106a4535 jmp 0x106a45d8 */
  goto L_106a45d8;
L_106a453a:;
  /* 106a453a push 0x106ca930 */
  push32((uint32_t)(0x106ca930u));
  /* 106a453f push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a4544 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4546 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4548 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a454a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a454c call 0x106a23c0 */
  push32(0x106a4551u); f_106a23c0();
  /* 106a4551 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4554 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4557 jne 0x106a455a */
  if (!C.zf) goto L_106a455a;
  /* 106a4559 int3  */
  x86_unimpl("int3 @ 0x106a4559");
L_106a455a:;
  /* 106a455a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a455c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a455e jne 0x106a453a */
  if (!C.zf) goto L_106a453a;
  /* 106a4560 jmp 0x106a45d8 */
  goto L_106a45d8;
L_106a4562:;
  /* 106a4562 push 0x106ca90c */
  push32((uint32_t)(0x106ca90cu));
  /* 106a4567 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a456c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a456e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4570 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4572 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4574 call 0x106a23c0 */
  push32(0x106a4579u); f_106a23c0();
  /* 106a4579 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a457c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a457f jne 0x106a4582 */
  if (!C.zf) goto L_106a4582;
  /* 106a4581 int3  */
  x86_unimpl("int3 @ 0x106a4581");
L_106a4582:;
  /* 106a4582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4586 jne 0x106a4562 */
  if (!C.zf) goto L_106a4562;
  /* 106a4588 jmp 0x106a45d8 */
  goto L_106a45d8;
L_106a458a:;
  /* 106a458a push 0x106ca8e8 */
  push32((uint32_t)(0x106ca8e8u));
  /* 106a458f push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a4594 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4596 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4598 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a459a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a459c call 0x106a23c0 */
  push32(0x106a45a1u); f_106a23c0();
  /* 106a45a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a45a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a45a7 jne 0x106a45aa */
  if (!C.zf) goto L_106a45aa;
  /* 106a45a9 int3  */
  x86_unimpl("int3 @ 0x106a45a9");
L_106a45aa:;
  /* 106a45aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a45ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a45ae jne 0x106a458a */
  if (!C.zf) goto L_106a458a;
  /* 106a45b0 jmp 0x106a45d8 */
  goto L_106a45d8;
L_106a45b2:;
  /* 106a45b2 push 0x106ca8bc */
  push32((uint32_t)(0x106ca8bcu));
  /* 106a45b7 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a45bc push 0 */
  push32((uint32_t)(0x0u));
  /* 106a45be push 0 */
  push32((uint32_t)(0x0u));
  /* 106a45c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a45c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a45c4 call 0x106a23c0 */
  push32(0x106a45c9u); f_106a23c0();
  /* 106a45c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a45cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a45cf jne 0x106a45d2 */
  if (!C.zf) goto L_106a45d2;
  /* 106a45d1 int3  */
  x86_unimpl("int3 @ 0x106a45d1");
L_106a45d2:;
  /* 106a45d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a45d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a45d6 jne 0x106a45b2 */
  if (!C.zf) goto L_106a45b2;
L_106a45d8:;
  /* 106a45d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a45da call 0x106a6da0 */
  push32(0x106a45dfu); f_106a6da0();
  /* 106a45df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a45e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a45e4 jmp 0x106a47f8 */
  goto L_106a47f8;
L_106a45e9:;
  /* 106a45e9 mov eax, dword ptr [0x106cf4dc] */
  EAX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a45ee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a45f1 jmp 0x106a45fb */
  goto L_106a45fb;
L_106a45f3:;
  /* 106a45f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a45f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a45f8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106a45fb:;
  /* 106a45fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a45ff je 0x106a47eb */
  if (C.zf) goto L_106a47eb;
  /* 106a4605 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106a460c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a460f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106a4612 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a4618 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a461b je 0x106a4640 */
  if (C.zf) goto L_106a4640;
  /* 106a461d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4620 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4624 je 0x106a4640 */
  if (C.zf) goto L_106a4640;
  /* 106a4626 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4629 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106a462c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a4632 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4635 je 0x106a4640 */
  if (C.zf) goto L_106a4640;
  /* 106a4637 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a463a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a463e jne 0x106a4658 */
  if (!C.zf) goto L_106a4658;
L_106a4640:;
  /* 106a4640 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4643 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106a4646 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a464c mov edx, dword ptr [ecx*4 + 0x106cda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cda94)));
  /* 106a4653 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106a4656 jmp 0x106a465f */
  goto L_106a465f;
L_106a4658:;
  /* 106a4658 mov dword ptr [ebp - 0x14], 0x106ca8b4 */
  w32((uint32_t)(EBP + -0x14), (0x106ca8b4u));
L_106a465f:;
  /* 106a465f push 4 */
  push32((uint32_t)(0x4u));
  /* 106a4661 mov al, byte ptr [0x106cda90] */
  AL = (r8((uint32_t)(0x106cda90)));
  /* 106a4666 push eax */
  push32((uint32_t)(EAX));
  /* 106a4667 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a466a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a466d push ecx */
  push32((uint32_t)(ECX));
  /* 106a466e call 0x106a4410 */
  push32(0x106a4673u); f_106a4410();
  /* 106a4673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4678 jne 0x106a46b4 */
  if (!C.zf) goto L_106a46b4;
L_106a467a:;
  /* 106a467a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a467d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4680 push edx */
  push32((uint32_t)(EDX));
  /* 106a4681 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4684 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106a4687 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4688 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a468b push edx */
  push32((uint32_t)(EDX));
  /* 106a468c push 0x106ca790 */
  push32((uint32_t)(0x106ca790u));
  /* 106a4691 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4693 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4695 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4697 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4699 call 0x106a23c0 */
  push32(0x106a469eu); f_106a23c0();
  /* 106a469e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a46a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a46a4 jne 0x106a46a7 */
  if (!C.zf) goto L_106a46a7;
  /* 106a46a6 int3  */
  x86_unimpl("int3 @ 0x106a46a6");
L_106a46a7:;
  /* 106a46a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a46a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a46ab jne 0x106a467a */
  if (!C.zf) goto L_106a467a;
  /* 106a46ad mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106a46b4:;
  /* 106a46b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 106a46b6 mov cl, byte ptr [0x106cda90] */
  CL = (r8((uint32_t)(0x106cda90)));
  /* 106a46bc push ecx */
  push32((uint32_t)(ECX));
  /* 106a46bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a46c0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a46c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a46c6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 106a46ca push edx */
  push32((uint32_t)(EDX));
  /* 106a46cb call 0x106a4410 */
  push32(0x106a46d0u); f_106a4410();
  /* 106a46d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a46d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a46d5 jne 0x106a4711 */
  if (!C.zf) goto L_106a4711;
L_106a46d7:;
  /* 106a46d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a46da add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a46dd push eax */
  push32((uint32_t)(EAX));
  /* 106a46de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a46e1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106a46e4 push edx */
  push32((uint32_t)(EDX));
  /* 106a46e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a46e8 push eax */
  push32((uint32_t)(EAX));
  /* 106a46e9 push 0x106ca764 */
  push32((uint32_t)(0x106ca764u));
  /* 106a46ee push 0 */
  push32((uint32_t)(0x0u));
  /* 106a46f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a46f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a46f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a46f6 call 0x106a23c0 */
  push32(0x106a46fbu); f_106a23c0();
  /* 106a46fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a46fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4701 jne 0x106a4704 */
  if (!C.zf) goto L_106a4704;
  /* 106a4703 int3  */
  x86_unimpl("int3 @ 0x106a4703");
L_106a4704:;
  /* 106a4704 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4706 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4708 jne 0x106a46d7 */
  if (!C.zf) goto L_106a46d7;
  /* 106a470a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106a4711:;
  /* 106a4711 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4714 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4718 jne 0x106a476a */
  if (!C.zf) goto L_106a476a;
  /* 106a471a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a471d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a4720 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4721 mov dl, byte ptr [0x106cda91] */
  DL = (r8((uint32_t)(0x106cda91)));
  /* 106a4727 push edx */
  push32((uint32_t)(EDX));
  /* 106a4728 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a472b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a472e push eax */
  push32((uint32_t)(EAX));
  /* 106a472f call 0x106a4410 */
  push32(0x106a4734u); f_106a4410();
  /* 106a4734 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4739 jne 0x106a476a */
  if (!C.zf) goto L_106a476a;
L_106a473b:;
  /* 106a473b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a473e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4741 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4742 push 0x106ca888 */
  push32((uint32_t)(0x106ca888u));
  /* 106a4747 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4749 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a474b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a474d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a474f call 0x106a23c0 */
  push32(0x106a4754u); f_106a23c0();
  /* 106a4754 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4757 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a475a jne 0x106a475d */
  if (!C.zf) goto L_106a475d;
  /* 106a475c int3  */
  x86_unimpl("int3 @ 0x106a475c");
L_106a475d:;
  /* 106a475d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a475f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a4761 jne 0x106a473b */
  if (!C.zf) goto L_106a473b;
  /* 106a4763 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106a476a:;
  /* 106a476a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a476e jne 0x106a47e6 */
  if (!C.zf) goto L_106a47e6;
  /* 106a4770 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4773 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4777 je 0x106a47ac */
  if (C.zf) goto L_106a47ac;
L_106a4779:;
  /* 106a4779 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a477c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106a477f push edx */
  push32((uint32_t)(EDX));
  /* 106a4780 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4783 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a4786 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4787 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a478a push edx */
  push32((uint32_t)(EDX));
  /* 106a478b push 0x106ca868 */
  push32((uint32_t)(0x106ca868u));
  /* 106a4790 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4792 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4794 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4796 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4798 call 0x106a23c0 */
  push32(0x106a479du); f_106a23c0();
  /* 106a479d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a47a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a47a3 jne 0x106a47a6 */
  if (!C.zf) goto L_106a47a6;
  /* 106a47a5 int3  */
  x86_unimpl("int3 @ 0x106a47a5");
L_106a47a6:;
  /* 106a47a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a47a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a47aa jne 0x106a4779 */
  if (!C.zf) goto L_106a4779;
L_106a47ac:;
  /* 106a47ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a47af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106a47b2 push edx */
  push32((uint32_t)(EDX));
  /* 106a47b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a47b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a47b9 push eax */
  push32((uint32_t)(EAX));
  /* 106a47ba mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a47bd push ecx */
  push32((uint32_t)(ECX));
  /* 106a47be push 0x106ca83c */
  push32((uint32_t)(0x106ca83cu));
  /* 106a47c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a47c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a47c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a47c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a47cb call 0x106a23c0 */
  push32(0x106a47d0u); f_106a23c0();
  /* 106a47d0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a47d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a47d6 jne 0x106a47d9 */
  if (!C.zf) goto L_106a47d9;
  /* 106a47d8 int3  */
  x86_unimpl("int3 @ 0x106a47d8");
L_106a47d9:;
  /* 106a47d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a47db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a47dd jne 0x106a47ac */
  if (!C.zf) goto L_106a47ac;
  /* 106a47df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106a47e6:;
  /* 106a47e6 jmp 0x106a45f3 */
  goto L_106a45f3;
L_106a47eb:;
  /* 106a47eb push 9 */
  push32((uint32_t)(0x9u));
  /* 106a47ed call 0x106a6da0 */
  push32(0x106a47f2u); f_106a6da0();
  /* 106a47f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a47f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106a47f8:;
  /* 106a47f8 pop edi */
  EDI = (pop32());
  /* 106a47f9 pop esi */
  ESI = (pop32());
  /* 106a47fa pop ebx */
  EBX = (pop32());
  /* 106a47fb mov esp, ebp */
  ESP = (EBP);
  /* 106a47fd pop ebp */
  EBP = (pop32());
  /* 106a47fe ret  */
  ESPCHK(0x106a44a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004810 @ 0x106a4810 (34 bytes, 13 insns) */
void f_106a4810(void) {
  FTRACE(0x106a4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4810 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4811 mov ebp, esp */
  EBP = (ESP);
  /* 106a4813 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4814 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a4819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a481c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4820 je 0x106a482b */
  if (C.zf) goto L_106a482b;
  /* 106a4822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4825 mov dword ptr [0x106cda84], ecx */
  w32((uint32_t)(0x106cda84), (ECX));
L_106a482b:;
  /* 106a482b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a482e mov esp, ebp */
  ESP = (EBP);
  /* 106a4830 pop ebp */
  EBP = (pop32());
  /* 106a4831 ret  */
  ESPCHK(0x106a4810u, _esp0);
  ESP += 4; return;
}

/* FUN_10004840 @ 0x106a4840 (103 bytes, 38 insns) */
void f_106a4840(void) {
  FTRACE(0x106a4840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4840 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4841 mov ebp, esp */
  EBP = (ESP);
  /* 106a4843 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4844 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a4849 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106a484c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a484e jne 0x106a4852 */
  if (!C.zf) goto L_106a4852;
  /* 106a4850 jmp 0x106a48a3 */
  goto L_106a48a3;
L_106a4852:;
  /* 106a4852 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4854 call 0x106a6d00 */
  push32(0x106a4859u); f_106a6d00();
  /* 106a4859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a485c mov ecx, dword ptr [0x106cf4dc] */
  ECX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a4862 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a4865 jmp 0x106a486f */
  goto L_106a486f;
L_106a4867:;
  /* 106a4867 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a486a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a486c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a486f:;
  /* 106a486f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4873 je 0x106a4899 */
  if (C.zf) goto L_106a4899;
  /* 106a4875 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4878 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106a487b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a4881 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4884 jne 0x106a4897 */
  if (!C.zf) goto L_106a4897;
  /* 106a4886 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a4889 push eax */
  push32((uint32_t)(EAX));
  /* 106a488a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a488d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4890 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4891 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x106a4894u);
  /* 106a4894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a4897:;
  /* 106a4897 jmp 0x106a4867 */
  goto L_106a4867;
L_106a4899:;
  /* 106a4899 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a489b call 0x106a6da0 */
  push32(0x106a48a0u); f_106a6da0();
  /* 106a48a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a48a3:;
  /* 106a48a3 mov esp, ebp */
  ESP = (EBP);
  /* 106a48a5 pop ebp */
  EBP = (pop32());
  /* 106a48a6 ret  */
  ESPCHK(0x106a4840u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x106a48b0 (75 bytes, 28 insns) */
void f_106a48b0(void) {
  FTRACE(0x106a48b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a48b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a48b1 mov ebp, esp */
  EBP = (ESP);
  /* 106a48b3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a48b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a48b8 je 0x106a48ed */
  if (C.zf) goto L_106a48ed;
  /* 106a48ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a48bd push eax */
  push32((uint32_t)(EAX));
  /* 106a48be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a48c1 push ecx */
  push32((uint32_t)(ECX));
  /* 106a48c2 call dword ptr [0x106d1320] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1320))), 0x106a48c8u);
  /* 106a48c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a48ca jne 0x106a48ed */
  if (!C.zf) goto L_106a48ed;
  /* 106a48cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a48d0 je 0x106a48e4 */
  if (C.zf) goto L_106a48e4;
  /* 106a48d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a48d5 push edx */
  push32((uint32_t)(EDX));
  /* 106a48d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a48d9 push eax */
  push32((uint32_t)(EAX));
  /* 106a48da call dword ptr [0x106d131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d131c))), 0x106a48e0u);
  /* 106a48e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a48e2 jne 0x106a48ed */
  if (!C.zf) goto L_106a48ed;
L_106a48e4:;
  /* 106a48e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106a48eb jmp 0x106a48f4 */
  goto L_106a48f4;
L_106a48ed:;
  /* 106a48ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106a48f4:;
  /* 106a48f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a48f7 mov esp, ebp */
  ESP = (EBP);
  /* 106a48f9 pop ebp */
  EBP = (pop32());
  /* 106a48fa ret  */
  ESPCHK(0x106a48b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004900 @ 0x106a4900 (134 bytes, 50 insns) */
void f_106a4900(void) {
  FTRACE(0x106a4900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4900 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4901 mov ebp, esp */
  EBP = (ESP);
  /* 106a4903 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4904 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4908 jne 0x106a490e */
  if (!C.zf) goto L_106a490e;
  /* 106a490a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a490c jmp 0x106a4982 */
  goto L_106a4982;
L_106a490e:;
  /* 106a490e push 1 */
  push32((uint32_t)(0x1u));
  /* 106a4910 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106a4912 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4915 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4918 push eax */
  push32((uint32_t)(EAX));
  /* 106a4919 call 0x106a48b0 */
  push32(0x106a491eu); f_106a48b0();
  /* 106a491e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4923 jne 0x106a4929 */
  if (!C.zf) goto L_106a4929;
  /* 106a4925 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4927 jmp 0x106a4982 */
  goto L_106a4982;
L_106a4929:;
  /* 106a4929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a492c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a492f push ecx */
  push32((uint32_t)(ECX));
  /* 106a4930 call 0x106a7600 */
  push32(0x106a4935u); f_106a7600();
  /* 106a4935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4938 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a493b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a493f je 0x106a4956 */
  if (C.zf) goto L_106a4956;
  /* 106a4941 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4944 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4947 push edx */
  push32((uint32_t)(EDX));
  /* 106a4948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a494b push eax */
  push32((uint32_t)(EAX));
  /* 106a494c call 0x106a7660 */
  push32(0x106a4951u); f_106a7660();
  /* 106a4951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4954 jmp 0x106a4982 */
  goto L_106a4982;
L_106a4956:;
  /* 106a4956 mov ecx, dword ptr [0x106cf490] */
  ECX = (r32((uint32_t)(0x106cf490)));
  /* 106a495c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 106a4962 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4964 je 0x106a496d */
  if (C.zf) goto L_106a496d;
  /* 106a4966 mov eax, 1 */
  EAX = (0x1u);
  /* 106a496b jmp 0x106a4982 */
  goto L_106a4982;
L_106a496d:;
  /* 106a496d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4970 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4973 push edx */
  push32((uint32_t)(EDX));
  /* 106a4974 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4976 mov eax, dword ptr [0x106d0e2c] */
  EAX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a497b push eax */
  push32((uint32_t)(EAX));
  /* 106a497c call dword ptr [0x106d1324] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1324))), 0x106a4982u);
L_106a4982:;
  /* 106a4982 mov esp, ebp */
  ESP = (EBP);
  /* 106a4984 pop ebp */
  EBP = (pop32());
  /* 106a4985 ret  */
  ESPCHK(0x106a4900u, _esp0);
  ESP += 4; return;
}

/* FUN_10004990 @ 0x106a4990 (227 bytes, 80 insns) */
void f_106a4990(void) {
  FTRACE(0x106a4990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4990 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4991 mov ebp, esp */
  EBP = (ESP);
  /* 106a4993 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4997 push eax */
  push32((uint32_t)(EAX));
  /* 106a4998 call 0x106a4900 */
  push32(0x106a499du); f_106a4900();
  /* 106a499d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a49a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a49a2 jne 0x106a49ab */
  if (!C.zf) goto L_106a49ab;
  /* 106a49a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a49a6 jmp 0x106a4a6f */
  goto L_106a4a6f;
L_106a49ab:;
  /* 106a49ab push 9 */
  push32((uint32_t)(0x9u));
  /* 106a49ad call 0x106a6d00 */
  push32(0x106a49b2u); f_106a6d00();
  /* 106a49b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a49b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a49b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a49bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a49be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a49c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a49c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a49c9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a49cc je 0x106a49f0 */
  if (C.zf) goto L_106a49f0;
  /* 106a49ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a49d1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a49d5 je 0x106a49f0 */
  if (C.zf) goto L_106a49f0;
  /* 106a49d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a49da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a49dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a49e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a49e5 je 0x106a49f0 */
  if (C.zf) goto L_106a49f0;
  /* 106a49e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a49ea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a49ee jne 0x106a4a63 */
  if (!C.zf) goto L_106a4a63;
L_106a49f0:;
  /* 106a49f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a49f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a49f5 push edx */
  push32((uint32_t)(EDX));
  /* 106a49f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a49f9 push eax */
  push32((uint32_t)(EAX));
  /* 106a49fa call 0x106a48b0 */
  push32(0x106a49ffu); f_106a48b0();
  /* 106a49ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4a04 je 0x106a4a63 */
  if (C.zf) goto L_106a4a63;
  /* 106a4a06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4a09 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106a4a0c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4a0f jne 0x106a4a63 */
  if (!C.zf) goto L_106a4a63;
  /* 106a4a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4a14 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106a4a17 cmp ecx, dword ptr [0x106cda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4a1d jg 0x106a4a63 */
  if ((!C.zf&&C.sf==C.of)) goto L_106a4a63;
  /* 106a4a1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4a23 je 0x106a4a30 */
  if (C.zf) goto L_106a4a30;
  /* 106a4a25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a4a28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4a2b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106a4a2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a4a30:;
  /* 106a4a30 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4a34 je 0x106a4a41 */
  if (C.zf) goto L_106a4a41;
  /* 106a4a36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a4a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4a3c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a4a3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a4a41:;
  /* 106a4a41 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4a45 je 0x106a4a52 */
  if (C.zf) goto L_106a4a52;
  /* 106a4a47 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a4a4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4a4d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106a4a50 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a4a52:;
  /* 106a4a52 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4a54 call 0x106a6da0 */
  push32(0x106a4a59u); f_106a6da0();
  /* 106a4a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4a5c mov eax, 1 */
  EAX = (0x1u);
  /* 106a4a61 jmp 0x106a4a6f */
  goto L_106a4a6f;
L_106a4a63:;
  /* 106a4a63 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4a65 call 0x106a6da0 */
  push32(0x106a4a6au); f_106a6da0();
  /* 106a4a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a4a6f:;
  /* 106a4a6f mov esp, ebp */
  ESP = (EBP);
  /* 106a4a71 pop ebp */
  EBP = (pop32());
  /* 106a4a72 ret  */
  ESPCHK(0x106a4990u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x106a4a80 (28 bytes, 11 insns) */
void f_106a4a80(void) {
  FTRACE(0x106a4a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4a80 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4a81 mov ebp, esp */
  EBP = (ESP);
  /* 106a4a83 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4a84 mov eax, dword ptr [0x106d0e38] */
  EAX = (r32((uint32_t)(0x106d0e38)));
  /* 106a4a89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a4a8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4a8f mov dword ptr [0x106d0e38], ecx */
  w32((uint32_t)(0x106d0e38), (ECX));
  /* 106a4a95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4a98 mov esp, ebp */
  ESP = (EBP);
  /* 106a4a9a pop ebp */
  EBP = (pop32());
  /* 106a4a9b ret  */
  ESPCHK(0x106a4a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa0 @ 0x106a4aa0 (362 bytes, 116 insns) */
void f_106a4aa0(void) {
  FTRACE(0x106a4aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4aa1 mov ebp, esp */
  EBP = (ESP);
  /* 106a4aa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 106a4aa7 push esi */
  push32((uint32_t)(ESI));
  /* 106a4aa8 push edi */
  push32((uint32_t)(EDI));
  /* 106a4aa9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4aad jne 0x106a4ada */
  if (!C.zf) goto L_106a4ada;
L_106a4aaf:;
  /* 106a4aaf push 0x106ca99c */
  push32((uint32_t)(0x106ca99cu));
  /* 106a4ab4 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a4ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4abb push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4abd push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4abf push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4ac1 call 0x106a23c0 */
  push32(0x106a4ac6u); f_106a23c0();
  /* 106a4ac6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4ac9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4acc jne 0x106a4acf */
  if (!C.zf) goto L_106a4acf;
  /* 106a4ace int3  */
  x86_unimpl("int3 @ 0x106a4ace");
L_106a4acf:;
  /* 106a4acf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4ad1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4ad3 jne 0x106a4aaf */
  if (!C.zf) goto L_106a4aaf;
  /* 106a4ad5 jmp 0x106a4c03 */
  goto L_106a4c03;
L_106a4ada:;
  /* 106a4ada push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4adc call 0x106a6d00 */
  push32(0x106a4ae1u); f_106a6d00();
  /* 106a4ae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4ae4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4ae7 mov edx, dword ptr [0x106cf4dc] */
  EDX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a4aed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106a4aef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a4af6 jmp 0x106a4b01 */
  goto L_106a4b01;
L_106a4af8:;
  /* 106a4af8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4afb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4afe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a4b01:;
  /* 106a4b01 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4b05 jge 0x106a4b25 */
  if ((C.sf==C.of)) goto L_106a4b25;
  /* 106a4b07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4b0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4b0d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 106a4b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4b1b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 106a4b23 jmp 0x106a4af8 */
  goto L_106a4af8;
L_106a4b25:;
  /* 106a4b25 mov edx, dword ptr [0x106cf4dc] */
  EDX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a4b2b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106a4b2e jmp 0x106a4b38 */
  goto L_106a4b38;
L_106a4b30:;
  /* 106a4b30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4b33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a4b35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106a4b38:;
  /* 106a4b38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4b3c je 0x106a4be1 */
  if (C.zf) goto L_106a4be1;
  /* 106a4b42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4b45 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4b48 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4b4f jl 0x106a4bb7 */
  if ((C.sf!=C.of)) goto L_106a4bb7;
  /* 106a4b51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4b54 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106a4b57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a4b5d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4b60 jge 0x106a4bb7 */
  if ((C.sf==C.of)) goto L_106a4bb7;
  /* 106a4b62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4b65 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106a4b68 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a4b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4b71 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 106a4b75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4b78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4b7b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106a4b7e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a4b84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4b87 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 106a4b8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4b8e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4b91 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4b96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4b99 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 106a4b9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4ba0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4ba3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4ba6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 106a4ba9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4bae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4bb1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 106a4bb5 jmp 0x106a4bdc */
  goto L_106a4bdc;
L_106a4bb7:;
  /* 106a4bb7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4bba push edx */
  push32((uint32_t)(EDX));
  /* 106a4bbb push 0x106ca978 */
  push32((uint32_t)(0x106ca978u));
  /* 106a4bc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4bc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4bc8 call 0x106a23c0 */
  push32(0x106a4bcdu); f_106a23c0();
  /* 106a4bcd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4bd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4bd3 jne 0x106a4bd6 */
  if (!C.zf) goto L_106a4bd6;
  /* 106a4bd5 int3  */
  x86_unimpl("int3 @ 0x106a4bd5");
L_106a4bd6:;
  /* 106a4bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4bda jne 0x106a4bb7 */
  if (!C.zf) goto L_106a4bb7;
L_106a4bdc:;
  /* 106a4bdc jmp 0x106a4b30 */
  goto L_106a4b30;
L_106a4be1:;
  /* 106a4be1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4be4 mov edx, dword ptr [0x106cf4e4] */
  EDX = (r32((uint32_t)(0x106cf4e4)));
  /* 106a4bea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 106a4bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4bf0 mov ecx, dword ptr [0x106cf4d8] */
  ECX = (r32((uint32_t)(0x106cf4d8)));
  /* 106a4bf6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 106a4bf9 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4bfb call 0x106a6da0 */
  push32(0x106a4c00u); f_106a6da0();
  /* 106a4c00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a4c03:;
  /* 106a4c03 pop edi */
  EDI = (pop32());
  /* 106a4c04 pop esi */
  ESI = (pop32());
  /* 106a4c05 pop ebx */
  EBX = (pop32());
  /* 106a4c06 mov esp, ebp */
  ESP = (EBP);
  /* 106a4c08 pop ebp */
  EBP = (pop32());
  /* 106a4c09 ret  */
  ESPCHK(0x106a4aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x106a4c10 (291 bytes, 95 insns) */
void f_106a4c10(void) {
  FTRACE(0x106a4c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4c10 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4c11 mov ebp, esp */
  EBP = (ESP);
  /* 106a4c13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4c16 push ebx */
  push32((uint32_t)(EBX));
  /* 106a4c17 push esi */
  push32((uint32_t)(ESI));
  /* 106a4c18 push edi */
  push32((uint32_t)(EDI));
  /* 106a4c19 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106a4c20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4c24 je 0x106a4c32 */
  if (C.zf) goto L_106a4c32;
  /* 106a4c26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4c2a je 0x106a4c32 */
  if (C.zf) goto L_106a4c32;
  /* 106a4c2c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4c30 jne 0x106a4c60 */
  if (!C.zf) goto L_106a4c60;
L_106a4c32:;
  /* 106a4c32 push 0x106ca9c4 */
  push32((uint32_t)(0x106ca9c4u));
  /* 106a4c37 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a4c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4c44 call 0x106a23c0 */
  push32(0x106a4c49u); f_106a23c0();
  /* 106a4c49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4c4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4c4f jne 0x106a4c52 */
  if (!C.zf) goto L_106a4c52;
  /* 106a4c51 int3  */
  x86_unimpl("int3 @ 0x106a4c51");
L_106a4c52:;
  /* 106a4c52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4c56 jne 0x106a4c32 */
  if (!C.zf) goto L_106a4c32;
  /* 106a4c58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a4c5b jmp 0x106a4d2c */
  goto L_106a4d2c;
L_106a4c60:;
  /* 106a4c60 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a4c67 jmp 0x106a4c72 */
  goto L_106a4c72;
L_106a4c69:;
  /* 106a4c69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4c6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4c6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a4c72:;
  /* 106a4c72 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4c76 jge 0x106a4cfc */
  if ((C.sf==C.of)) goto L_106a4cfc;
  /* 106a4c7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4c7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a4c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4c85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106a4c88 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 106a4c8c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4c90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4c93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4c96 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 106a4c9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4c9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a4ca0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4ca3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106a4ca6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 106a4caa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4cae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4cb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4cb4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 106a4cb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4cbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4cbe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4cc3 jne 0x106a4cd2 */
  if (!C.zf) goto L_106a4cd2;
  /* 106a4cc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4cc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4ccb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4cd0 je 0x106a4cf7 */
  if (C.zf) goto L_106a4cf7;
L_106a4cd2:;
  /* 106a4cd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4cd6 je 0x106a4cf7 */
  if (C.zf) goto L_106a4cf7;
  /* 106a4cd8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4cdc jne 0x106a4cf0 */
  if (!C.zf) goto L_106a4cf0;
  /* 106a4cde cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4ce2 jne 0x106a4cf7 */
  if (!C.zf) goto L_106a4cf7;
  /* 106a4ce4 mov eax, dword ptr [0x106cda84] */
  EAX = (r32((uint32_t)(0x106cda84)));
  /* 106a4ce9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 106a4cec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4cee je 0x106a4cf7 */
  if (C.zf) goto L_106a4cf7;
L_106a4cf0:;
  /* 106a4cf0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_106a4cf7:;
  /* 106a4cf7 jmp 0x106a4c69 */
  goto L_106a4c69;
L_106a4cfc:;
  /* 106a4cfc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a4cff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a4d02 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 106a4d05 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4d08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4d0b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 106a4d0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a4d11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a4d14 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 106a4d17 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4d1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4d1d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 106a4d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4d23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106a4d29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106a4d2c:;
  /* 106a4d2c pop edi */
  EDI = (pop32());
  /* 106a4d2d pop esi */
  ESI = (pop32());
  /* 106a4d2e pop ebx */
  EBX = (pop32());
  /* 106a4d2f mov esp, ebp */
  ESP = (EBP);
  /* 106a4d31 pop ebp */
  EBP = (pop32());
  /* 106a4d32 ret  */
  ESPCHK(0x106a4c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d40 @ 0x106a4d40 (697 bytes, 253 insns) */
void f_106a4d40(void) {
  FTRACE(0x106a4d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a4d40 push ebp */
  push32((uint32_t)(EBP));
  /* 106a4d41 mov ebp, esp */
  EBP = (ESP);
  /* 106a4d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a4d46 push ebx */
  push32((uint32_t)(EBX));
  /* 106a4d47 push esi */
  push32((uint32_t)(ESI));
  /* 106a4d48 push edi */
  push32((uint32_t)(EDI));
  /* 106a4d49 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106a4d50 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4d52 call 0x106a6d00 */
  push32(0x106a4d57u); f_106a6d00();
  /* 106a4d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a4d5a:;
  /* 106a4d5a push 0x106caabc */
  push32((uint32_t)(0x106caabcu));
  /* 106a4d5f push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a4d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4d6c call 0x106a23c0 */
  push32(0x106a4d71u); f_106a23c0();
  /* 106a4d71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4d74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4d77 jne 0x106a4d7a */
  if (!C.zf) goto L_106a4d7a;
  /* 106a4d79 int3  */
  x86_unimpl("int3 @ 0x106a4d79");
L_106a4d7a:;
  /* 106a4d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4d7e jne 0x106a4d5a */
  if (!C.zf) goto L_106a4d5a;
  /* 106a4d80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4d84 je 0x106a4d8e */
  if (C.zf) goto L_106a4d8e;
  /* 106a4d86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a4d89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a4d8b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106a4d8e:;
  /* 106a4d8e mov eax, dword ptr [0x106cf4dc] */
  EAX = (r32((uint32_t)(0x106cf4dc)));
  /* 106a4d93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a4d96 jmp 0x106a4da0 */
  goto L_106a4da0;
L_106a4d98:;
  /* 106a4d98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4d9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a4d9d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106a4da0:;
  /* 106a4da0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4da4 je 0x106a4fc2 */
  if (C.zf) goto L_106a4fc2;
  /* 106a4daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4dad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4db0 je 0x106a4fc2 */
  if (C.zf) goto L_106a4fc2;
  /* 106a4db6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4db9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106a4dbc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a4dc2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4dc5 je 0x106a4df4 */
  if (C.zf) goto L_106a4df4;
  /* 106a4dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4dca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106a4dcd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a4dd3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4dd5 je 0x106a4df4 */
  if (C.zf) goto L_106a4df4;
  /* 106a4dd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4dda mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4ddd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4de2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4de5 jne 0x106a4df9 */
  if (!C.zf) goto L_106a4df9;
  /* 106a4de7 mov ecx, dword ptr [0x106cda84] */
  ECX = (r32((uint32_t)(0x106cda84)));
  /* 106a4ded and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 106a4df0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4df2 jne 0x106a4df9 */
  if (!C.zf) goto L_106a4df9;
L_106a4df4:;
  /* 106a4df4 jmp 0x106a4fbd */
  goto L_106a4fbd;
L_106a4df9:;
  /* 106a4df9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4dfc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4e00 je 0x106a4e72 */
  if (C.zf) goto L_106a4e72;
  /* 106a4e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a4e06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4e09 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106a4e0c push ecx */
  push32((uint32_t)(ECX));
  /* 106a4e0d call 0x106a48b0 */
  push32(0x106a4e12u); f_106a48b0();
  /* 106a4e12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4e17 jne 0x106a4e43 */
  if (!C.zf) goto L_106a4e43;
L_106a4e19:;
  /* 106a4e19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4e1c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106a4e1f push eax */
  push32((uint32_t)(EAX));
  /* 106a4e20 push 0x106caaa8 */
  push32((uint32_t)(0x106caaa8u));
  /* 106a4e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e2d call 0x106a23c0 */
  push32(0x106a4e32u); f_106a23c0();
  /* 106a4e32 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4e35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4e38 jne 0x106a4e3b */
  if (!C.zf) goto L_106a4e3b;
  /* 106a4e3a int3  */
  x86_unimpl("int3 @ 0x106a4e3a");
L_106a4e3b:;
  /* 106a4e3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4e3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4e3f jne 0x106a4e19 */
  if (!C.zf) goto L_106a4e19;
  /* 106a4e41 jmp 0x106a4e72 */
  goto L_106a4e72;
L_106a4e43:;
  /* 106a4e43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4e46 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106a4e49 push eax */
  push32((uint32_t)(EAX));
  /* 106a4e4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4e4d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a4e50 push edx */
  push32((uint32_t)(EDX));
  /* 106a4e51 push 0x106caa9c */
  push32((uint32_t)(0x106caa9cu));
  /* 106a4e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e5e call 0x106a23c0 */
  push32(0x106a4e63u); f_106a23c0();
  /* 106a4e63 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4e66 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4e69 jne 0x106a4e6c */
  if (!C.zf) goto L_106a4e6c;
  /* 106a4e6b int3  */
  x86_unimpl("int3 @ 0x106a4e6b");
L_106a4e6c:;
  /* 106a4e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4e70 jne 0x106a4e43 */
  if (!C.zf) goto L_106a4e43;
L_106a4e72:;
  /* 106a4e72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4e75 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106a4e78 push edx */
  push32((uint32_t)(EDX));
  /* 106a4e79 push 0x106caa94 */
  push32((uint32_t)(0x106caa94u));
  /* 106a4e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4e86 call 0x106a23c0 */
  push32(0x106a4e8bu); f_106a23c0();
  /* 106a4e8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4e8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4e91 jne 0x106a4e94 */
  if (!C.zf) goto L_106a4e94;
  /* 106a4e93 int3  */
  x86_unimpl("int3 @ 0x106a4e93");
L_106a4e94:;
  /* 106a4e94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a4e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a4e98 jne 0x106a4e72 */
  if (!C.zf) goto L_106a4e72;
  /* 106a4e9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4e9d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106a4ea0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a4ea6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4ea9 jne 0x106a4f1c */
  if (!C.zf) goto L_106a4f1c;
L_106a4eab:;
  /* 106a4eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4eae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a4eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4eb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4eb5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4eb8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106a4ebb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4ec0 push eax */
  push32((uint32_t)(EAX));
  /* 106a4ec1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4ec4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4ec8 push 0x106caa60 */
  push32((uint32_t)(0x106caa60u));
  /* 106a4ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4ed5 call 0x106a23c0 */
  push32(0x106a4edau); f_106a23c0();
  /* 106a4eda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4edd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4ee0 jne 0x106a4ee3 */
  if (!C.zf) goto L_106a4ee3;
  /* 106a4ee2 int3  */
  x86_unimpl("int3 @ 0x106a4ee2");
L_106a4ee3:;
  /* 106a4ee3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a4ee5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a4ee7 jne 0x106a4eab */
  if (!C.zf) goto L_106a4eab;
  /* 106a4ee9 cmp dword ptr [0x106d0e38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0e38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4ef0 je 0x106a4f0b */
  if (C.zf) goto L_106a4f0b;
  /* 106a4ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4ef5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a4ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4ef9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4efc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4eff push edx */
  push32((uint32_t)(EDX));
  /* 106a4f00 call dword ptr [0x106d0e38] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d0e38))), 0x106a4f06u);
  /* 106a4f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4f09 jmp 0x106a4f17 */
  goto L_106a4f17;
L_106a4f0b:;
  /* 106a4f0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f0e push eax */
  push32((uint32_t)(EAX));
  /* 106a4f0f call 0x106a5000 */
  push32(0x106a4f14u); f_106a5000();
  /* 106a4f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a4f17:;
  /* 106a4f17 jmp 0x106a4fbd */
  goto L_106a4fbd;
L_106a4f1c:;
  /* 106a4f1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f1f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4f23 jne 0x106a4f62 */
  if (!C.zf) goto L_106a4f62;
L_106a4f25:;
  /* 106a4f25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f28 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a4f2b push eax */
  push32((uint32_t)(EAX));
  /* 106a4f2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f2f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4f32 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4f33 push 0x106caa38 */
  push32((uint32_t)(0x106caa38u));
  /* 106a4f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4f40 call 0x106a23c0 */
  push32(0x106a4f45u); f_106a23c0();
  /* 106a4f45 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4f48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4f4b jne 0x106a4f4e */
  if (!C.zf) goto L_106a4f4e;
  /* 106a4f4d int3  */
  x86_unimpl("int3 @ 0x106a4f4d");
L_106a4f4e:;
  /* 106a4f4e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a4f50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a4f52 jne 0x106a4f25 */
  if (!C.zf) goto L_106a4f25;
  /* 106a4f54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f57 push eax */
  push32((uint32_t)(EAX));
  /* 106a4f58 call 0x106a5000 */
  push32(0x106a4f5du); f_106a5000();
  /* 106a4f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4f60 jmp 0x106a4fbd */
  goto L_106a4fbd;
L_106a4f62:;
  /* 106a4f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f65 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106a4f68 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a4f6e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4f71 jne 0x106a4fbd */
  if (!C.zf) goto L_106a4fbd;
L_106a4f73:;
  /* 106a4f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106a4f79 push ecx */
  push32((uint32_t)(ECX));
  /* 106a4f7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106a4f80 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106a4f83 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a4f88 push eax */
  push32((uint32_t)(EAX));
  /* 106a4f89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4f8c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4f8f push ecx */
  push32((uint32_t)(ECX));
  /* 106a4f90 push 0x106caa04 */
  push32((uint32_t)(0x106caa04u));
  /* 106a4f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4f9d call 0x106a23c0 */
  push32(0x106a4fa2u); f_106a23c0();
  /* 106a4fa2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4fa5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4fa8 jne 0x106a4fab */
  if (!C.zf) goto L_106a4fab;
  /* 106a4faa int3  */
  x86_unimpl("int3 @ 0x106a4faa");
L_106a4fab:;
  /* 106a4fab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a4fad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a4faf jne 0x106a4f73 */
  if (!C.zf) goto L_106a4f73;
  /* 106a4fb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a4fb4 push eax */
  push32((uint32_t)(EAX));
  /* 106a4fb5 call 0x106a5000 */
  push32(0x106a4fbau); f_106a5000();
  /* 106a4fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a4fbd:;
  /* 106a4fbd jmp 0x106a4d98 */
  goto L_106a4d98;
L_106a4fc2:;
  /* 106a4fc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a4fc4 call 0x106a6da0 */
  push32(0x106a4fc9u); f_106a6da0();
  /* 106a4fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a4fcc:;
  /* 106a4fcc push 0x106ca9ec */
  push32((uint32_t)(0x106ca9ecu));
  /* 106a4fd1 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a4fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4fda push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 106a4fde call 0x106a23c0 */
  push32(0x106a4fe3u); f_106a23c0();
  /* 106a4fe3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a4fe6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a4fe9 jne 0x106a4fec */
  if (!C.zf) goto L_106a4fec;
  /* 106a4feb int3  */
  x86_unimpl("int3 @ 0x106a4feb");
L_106a4fec:;
  /* 106a4fec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a4fee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a4ff0 jne 0x106a4fcc */
  if (!C.zf) goto L_106a4fcc;
  /* 106a4ff2 pop edi */
  EDI = (pop32());
  /* 106a4ff3 pop esi */
  ESI = (pop32());
  /* 106a4ff4 pop ebx */
  EBX = (pop32());
  /* 106a4ff5 mov esp, ebp */
  ESP = (EBP);
  /* 106a4ff7 pop ebp */
  EBP = (pop32());
  /* 106a4ff8 ret  */
  ESPCHK(0x106a4d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005000 @ 0x106a5000 (276 bytes, 89 insns) */
void f_106a5000(void) {
  FTRACE(0x106a5000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5000 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5001 mov ebp, esp */
  EBP = (ESP);
  /* 106a5003 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5006 push ebx */
  push32((uint32_t)(EBX));
  /* 106a5007 push esi */
  push32((uint32_t)(ESI));
  /* 106a5008 push edi */
  push32((uint32_t)(EDI));
  /* 106a5009 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 106a5010 jmp 0x106a501b */
  goto L_106a501b;
L_106a5012:;
  /* 106a5012 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106a5015 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5018 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_106a501b:;
  /* 106a501b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a501e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5022 jge 0x106a502f */
  if ((C.sf==C.of)) goto L_106a502f;
  /* 106a5024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5027 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106a502a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 106a502d jmp 0x106a5036 */
  goto L_106a5036;
L_106a502f:;
  /* 106a502f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_106a5036:;
  /* 106a5036 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106a5039 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a503c jge 0x106a50dc */
  if ((C.sf==C.of)) goto L_106a50dc;
  /* 106a5042 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5045 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5048 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 106a504b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 106a504e cmp dword ptr [0x106cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5055 jle 0x106a5073 */
  if ((C.zf||C.sf!=C.of)) goto L_106a5073;
  /* 106a5057 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 106a505c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a505f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a5065 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5066 call 0x106a9310 */
  push32(0x106a506bu); f_106a9310();
  /* 106a506b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a506e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 106a5071 jmp 0x106a5090 */
  goto L_106a5090;
L_106a5073:;
  /* 106a5073 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a5076 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a507c mov eax, dword ptr [0x106cdc98] */
  EAX = (r32((uint32_t)(0x106cdc98)));
  /* 106a5081 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a5083 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106a5087 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 106a508d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_106a5090:;
  /* 106a5090 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5094 je 0x106a50a4 */
  if (C.zf) goto L_106a50a4;
  /* 106a5096 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a5099 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a509f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 106a50a2 jmp 0x106a50ab */
  goto L_106a50ab;
L_106a50a4:;
  /* 106a50a4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_106a50ab:;
  /* 106a50ab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106a50ae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 106a50b1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 106a50b5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106a50b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a50be push edx */
  push32((uint32_t)(EDX));
  /* 106a50bf push 0x106caae0 */
  push32((uint32_t)(0x106caae0u));
  /* 106a50c4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106a50c7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a50ca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 106a50ce push ecx */
  push32((uint32_t)(ECX));
  /* 106a50cf call 0x106a9210 */
  push32(0x106a50d4u); f_106a9210();
  /* 106a50d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a50d7 jmp 0x106a5012 */
  goto L_106a5012;
L_106a50dc:;
  /* 106a50dc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106a50df mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_106a50e4:;
  /* 106a50e4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 106a50e7 push eax */
  push32((uint32_t)(EAX));
  /* 106a50e8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 106a50eb push ecx */
  push32((uint32_t)(ECX));
  /* 106a50ec push 0x106caad0 */
  push32((uint32_t)(0x106caad0u));
  /* 106a50f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a50f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a50f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a50f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a50f9 call 0x106a23c0 */
  push32(0x106a50feu); f_106a23c0();
  /* 106a50fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5101 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5104 jne 0x106a5107 */
  if (!C.zf) goto L_106a5107;
  /* 106a5106 int3  */
  x86_unimpl("int3 @ 0x106a5106");
L_106a5107:;
  /* 106a5107 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a5109 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a510b jne 0x106a50e4 */
  if (!C.zf) goto L_106a50e4;
  /* 106a510d pop edi */
  EDI = (pop32());
  /* 106a510e pop esi */
  ESI = (pop32());
  /* 106a510f pop ebx */
  EBX = (pop32());
  /* 106a5110 mov esp, ebp */
  ESP = (EBP);
  /* 106a5112 pop ebp */
  EBP = (pop32());
  /* 106a5113 ret  */
  ESPCHK(0x106a5000u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x106a5120 (116 bytes, 46 insns) */
void f_106a5120(void) {
  FTRACE(0x106a5120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5120 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5121 mov ebp, esp */
  EBP = (ESP);
  /* 106a5123 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5126 push ebx */
  push32((uint32_t)(EBX));
  /* 106a5127 push esi */
  push32((uint32_t)(ESI));
  /* 106a5128 push edi */
  push32((uint32_t)(EDI));
  /* 106a5129 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 106a512c push eax */
  push32((uint32_t)(EAX));
  /* 106a512d call 0x106a4aa0 */
  push32(0x106a5132u); f_106a4aa0();
  /* 106a5132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5135 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5139 jne 0x106a5154 */
  if (!C.zf) goto L_106a5154;
  /* 106a513b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a513f jne 0x106a5154 */
  if (!C.zf) goto L_106a5154;
  /* 106a5141 mov ecx, dword ptr [0x106cda84] */
  ECX = (r32((uint32_t)(0x106cda84)));
  /* 106a5147 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 106a514a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a514c je 0x106a518b */
  if (C.zf) goto L_106a518b;
  /* 106a514e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5152 je 0x106a518b */
  if (C.zf) goto L_106a518b;
L_106a5154:;
  /* 106a5154 push 0x106caae8 */
  push32((uint32_t)(0x106caae8u));
  /* 106a5159 push 0x106ca4b4 */
  push32((uint32_t)(0x106ca4b4u));
  /* 106a515e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5160 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5162 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5164 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5166 call 0x106a23c0 */
  push32(0x106a516bu); f_106a23c0();
  /* 106a516b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a516e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5171 jne 0x106a5174 */
  if (!C.zf) goto L_106a5174;
  /* 106a5173 int3  */
  x86_unimpl("int3 @ 0x106a5173");
L_106a5174:;
  /* 106a5174 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a5176 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a5178 jne 0x106a5154 */
  if (!C.zf) goto L_106a5154;
  /* 106a517a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a517c call 0x106a4d40 */
  push32(0x106a5181u); f_106a4d40();
  /* 106a5181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5184 mov eax, 1 */
  EAX = (0x1u);
  /* 106a5189 jmp 0x106a518d */
  goto L_106a518d;
L_106a518b:;
  /* 106a518b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a518d:;
  /* 106a518d pop edi */
  EDI = (pop32());
  /* 106a518e pop esi */
  ESI = (pop32());
  /* 106a518f pop ebx */
  EBX = (pop32());
  /* 106a5190 mov esp, ebp */
  ESP = (EBP);
  /* 106a5192 pop ebp */
  EBP = (pop32());
  /* 106a5193 ret  */
  ESPCHK(0x106a5120u, _esp0);
  ESP += 4; return;
}

/* FUN_100051a0 @ 0x106a51a0 (197 bytes, 79 insns) */
void f_106a51a0(void) {
  FTRACE(0x106a51a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a51a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a51a1 mov ebp, esp */
  EBP = (ESP);
  /* 106a51a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a51a4 push ebx */
  push32((uint32_t)(EBX));
  /* 106a51a5 push esi */
  push32((uint32_t)(ESI));
  /* 106a51a6 push edi */
  push32((uint32_t)(EDI));
  /* 106a51a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a51ab jne 0x106a51b2 */
  if (!C.zf) goto L_106a51b2;
  /* 106a51ad jmp 0x106a525e */
  goto L_106a525e;
L_106a51b2:;
  /* 106a51b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a51b9 jmp 0x106a51c4 */
  goto L_106a51c4;
L_106a51bb:;
  /* 106a51bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a51be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a51c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a51c4:;
  /* 106a51c4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a51c8 jge 0x106a520e */
  if ((C.sf==C.of)) goto L_106a520e;
L_106a51ca:;
  /* 106a51ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a51cd mov edx, dword ptr [ecx*4 + 0x106cda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cda94)));
  /* 106a51d4 push edx */
  push32((uint32_t)(EDX));
  /* 106a51d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a51d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a51db mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 106a51df push edx */
  push32((uint32_t)(EDX));
  /* 106a51e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a51e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a51e6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 106a51ea push edx */
  push32((uint32_t)(EDX));
  /* 106a51eb push 0x106cab44 */
  push32((uint32_t)(0x106cab44u));
  /* 106a51f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a51f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a51f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a51f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a51f8 call 0x106a23c0 */
  push32(0x106a51fdu); f_106a23c0();
  /* 106a51fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5200 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5203 jne 0x106a5206 */
  if (!C.zf) goto L_106a5206;
  /* 106a5205 int3  */
  x86_unimpl("int3 @ 0x106a5205");
L_106a5206:;
  /* 106a5206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5208 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a520a jne 0x106a51ca */
  if (!C.zf) goto L_106a51ca;
  /* 106a520c jmp 0x106a51bb */
  goto L_106a51bb;
L_106a520e:;
  /* 106a520e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5211 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 106a5214 push edx */
  push32((uint32_t)(EDX));
  /* 106a5215 push 0x106cab20 */
  push32((uint32_t)(0x106cab20u));
  /* 106a521a push 0 */
  push32((uint32_t)(0x0u));
  /* 106a521c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a521e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5220 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5222 call 0x106a23c0 */
  push32(0x106a5227u); f_106a23c0();
  /* 106a5227 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a522a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a522d jne 0x106a5230 */
  if (!C.zf) goto L_106a5230;
  /* 106a522f int3  */
  x86_unimpl("int3 @ 0x106a522f");
L_106a5230:;
  /* 106a5230 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5232 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a5234 jne 0x106a520e */
  if (!C.zf) goto L_106a520e;
L_106a5236:;
  /* 106a5236 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5239 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 106a523c push edx */
  push32((uint32_t)(EDX));
  /* 106a523d push 0x106cab00 */
  push32((uint32_t)(0x106cab00u));
  /* 106a5242 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5244 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5246 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5248 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a524a call 0x106a23c0 */
  push32(0x106a524fu); f_106a23c0();
  /* 106a524f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5252 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5255 jne 0x106a5258 */
  if (!C.zf) goto L_106a5258;
  /* 106a5257 int3  */
  x86_unimpl("int3 @ 0x106a5257");
L_106a5258:;
  /* 106a5258 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a525a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a525c jne 0x106a5236 */
  if (!C.zf) goto L_106a5236;
L_106a525e:;
  /* 106a525e pop edi */
  EDI = (pop32());
  /* 106a525f pop esi */
  ESI = (pop32());
  /* 106a5260 pop ebx */
  EBX = (pop32());
  /* 106a5261 mov esp, ebp */
  ESP = (EBP);
  /* 106a5263 pop ebp */
  EBP = (pop32());
  /* 106a5264 ret  */
  ESPCHK(0x106a51a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x106a5270 (329 bytes, 102 insns) */
void f_106a5270(void) {
  FTRACE(0x106a5270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5270 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5271 mov ebp, esp */
  EBP = (ESP);
  /* 106a5273 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5276 cmp dword ptr [0x106d0fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a527d jne 0x106a5284 */
  if (!C.zf) goto L_106a5284;
  /* 106a527f call 0x106a9bb0 */
  push32(0x106a5284u); f_106a9bb0();
L_106a5284:;
  /* 106a5284 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106a528b mov eax, dword ptr [0x106cf478] */
  EAX = (r32((uint32_t)(0x106cf478)));
  /* 106a5290 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a5293:;
  /* 106a5293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5296 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106a5299 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a529b je 0x106a52c9 */
  if (C.zf) goto L_106a52c9;
  /* 106a529d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a52a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a52a3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a52a6 je 0x106a52b1 */
  if (C.zf) goto L_106a52b1;
  /* 106a52a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a52ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a52ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106a52b1:;
  /* 106a52b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a52b4 push eax */
  push32((uint32_t)(EAX));
  /* 106a52b5 call 0x106a6130 */
  push32(0x106a52bau); f_106a6130();
  /* 106a52ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a52bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a52c0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106a52c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a52c7 jmp 0x106a5293 */
  goto L_106a5293;
L_106a52c9:;
  /* 106a52c9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 106a52cb push 0x106cab64 */
  push32((uint32_t)(0x106cab64u));
  /* 106a52d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a52d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a52d5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 106a52dc push ecx */
  push32((uint32_t)(ECX));
  /* 106a52dd call 0x106a3300 */
  push32(0x106a52e2u); f_106a3300();
  /* 106a52e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a52e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a52e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a52eb mov dword ptr [0x106cf4ac], edx */
  w32((uint32_t)(0x106cf4ac), (EDX));
  /* 106a52f1 cmp dword ptr [0x106cf4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a52f8 jne 0x106a5304 */
  if (!C.zf) goto L_106a5304;
  /* 106a52fa push 9 */
  push32((uint32_t)(0x9u));
  /* 106a52fc call 0x106a2270 */
  push32(0x106a5301u); f_106a2270();
  /* 106a5301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a5304:;
  /* 106a5304 mov eax, dword ptr [0x106cf478] */
  EAX = (r32((uint32_t)(0x106cf478)));
  /* 106a5309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a530c jmp 0x106a5317 */
  goto L_106a5317;
L_106a530e:;
  /* 106a530e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5311 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5314 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a5317:;
  /* 106a5317 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a531a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106a531d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a531f je 0x106a5387 */
  if (C.zf) goto L_106a5387;
  /* 106a5321 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5324 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5325 call 0x106a6130 */
  push32(0x106a532au); f_106a6130();
  /* 106a532a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a532d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5330 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a5333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5336 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106a5339 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a533c je 0x106a5385 */
  if (C.zf) goto L_106a5385;
  /* 106a533e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 106a5340 push 0x106cab64 */
  push32((uint32_t)(0x106cab64u));
  /* 106a5345 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a5347 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a534a push ecx */
  push32((uint32_t)(ECX));
  /* 106a534b call 0x106a3300 */
  push32(0x106a5350u); f_106a3300();
  /* 106a5350 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5353 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5356 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106a5358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a535b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a535e jne 0x106a536a */
  if (!C.zf) goto L_106a536a;
  /* 106a5360 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a5362 call 0x106a2270 */
  push32(0x106a5367u); f_106a2270();
  /* 106a5367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a536a:;
  /* 106a536a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a536d push ecx */
  push32((uint32_t)(ECX));
  /* 106a536e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5371 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a5373 push eax */
  push32((uint32_t)(EAX));
  /* 106a5374 call 0x106a62b0 */
  push32(0x106a5379u); f_106a62b0();
  /* 106a5379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a537c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a537f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5382 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106a5385:;
  /* 106a5385 jmp 0x106a530e */
  goto L_106a530e;
L_106a5387:;
  /* 106a5387 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a5389 mov edx, dword ptr [0x106cf478] */
  EDX = (r32((uint32_t)(0x106cf478)));
  /* 106a538f push edx */
  push32((uint32_t)(EDX));
  /* 106a5390 call 0x106a3d90 */
  push32(0x106a5395u); f_106a3d90();
  /* 106a5395 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5398 mov dword ptr [0x106cf478], 0 */
  w32((uint32_t)(0x106cf478), (0x0u));
  /* 106a53a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a53a5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106a53ab mov dword ptr [0x106d0fa0], 1 */
  w32((uint32_t)(0x106d0fa0), (0x1u));
  /* 106a53b5 mov esp, ebp */
  ESP = (EBP);
  /* 106a53b7 pop ebp */
  EBP = (pop32());
  /* 106a53b8 ret  */
  ESPCHK(0x106a5270u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x106a53c0 (216 bytes, 69 insns) */
void f_106a53c0(void) {
  FTRACE(0x106a53c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a53c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a53c1 mov ebp, esp */
  EBP = (ESP);
  /* 106a53c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a53c6 cmp dword ptr [0x106d0fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a53cd jne 0x106a53d4 */
  if (!C.zf) goto L_106a53d4;
  /* 106a53cf call 0x106a9bb0 */
  push32(0x106a53d4u); f_106a9bb0();
L_106a53d4:;
  /* 106a53d4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 106a53d9 push 0x106cf4e8 */
  push32((uint32_t)(0x106cf4e8u));
  /* 106a53de push 0 */
  push32((uint32_t)(0x0u));
  /* 106a53e0 call dword ptr [0x106d12dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12dc))), 0x106a53e6u);
  /* 106a53e6 mov dword ptr [0x106cf4bc], 0x106cf4e8 */
  w32((uint32_t)(0x106cf4bc), (0x106cf4e8u));
  /* 106a53f0 mov eax, dword ptr [0x106d0fcc] */
  EAX = (r32((uint32_t)(0x106d0fcc)));
  /* 106a53f5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a53f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a53fa jne 0x106a5407 */
  if (!C.zf) goto L_106a5407;
  /* 106a53fc mov edx, dword ptr [0x106cf4bc] */
  EDX = (r32((uint32_t)(0x106cf4bc)));
  /* 106a5402 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106a5405 jmp 0x106a540f */
  goto L_106a540f;
L_106a5407:;
  /* 106a5407 mov eax, dword ptr [0x106d0fcc] */
  EAX = (r32((uint32_t)(0x106d0fcc)));
  /* 106a540c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_106a540f:;
  /* 106a540f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a5412 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106a5415 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 106a5418 push edx */
  push32((uint32_t)(EDX));
  /* 106a5419 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 106a541c push eax */
  push32((uint32_t)(EAX));
  /* 106a541d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a541f push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5421 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a5424 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5425 call 0x106a54a0 */
  push32(0x106a542au); f_106a54a0();
  /* 106a542a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a542d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 106a5432 push 0x106cab70 */
  push32((uint32_t)(0x106cab70u));
  /* 106a5437 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a5439 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a543c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a543f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 106a5442 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5443 call 0x106a3300 */
  push32(0x106a5448u); f_106a3300();
  /* 106a5448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a544b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a544e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5452 jne 0x106a545e */
  if (!C.zf) goto L_106a545e;
  /* 106a5454 push 8 */
  push32((uint32_t)(0x8u));
  /* 106a5456 call 0x106a2270 */
  push32(0x106a545bu); f_106a2270();
  /* 106a545b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a545e:;
  /* 106a545e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 106a5461 push edx */
  push32((uint32_t)(EDX));
  /* 106a5462 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 106a5465 push eax */
  push32((uint32_t)(EAX));
  /* 106a5466 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5469 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a546c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 106a546f push eax */
  push32((uint32_t)(EAX));
  /* 106a5470 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5473 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5474 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a5477 push edx */
  push32((uint32_t)(EDX));
  /* 106a5478 call 0x106a54a0 */
  push32(0x106a547du); f_106a54a0();
  /* 106a547d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5480 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5483 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5486 mov dword ptr [0x106cf4a0], eax */
  w32((uint32_t)(0x106cf4a0), (EAX));
  /* 106a548b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a548e mov dword ptr [0x106cf4a4], ecx */
  w32((uint32_t)(0x106cf4a4), (ECX));
  /* 106a5494 mov esp, ebp */
  ESP = (EBP);
  /* 106a5496 pop ebp */
  EBP = (pop32());
  /* 106a5497 ret  */
  ESPCHK(0x106a53c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a0 @ 0x106a54a0 (1060 bytes, 360 insns) */
void f_106a54a0(void) {
  FTRACE(0x106a54a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a54a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a54a1 mov ebp, esp */
  EBP = (ESP);
  /* 106a54a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a54a6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a54a9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106a54af mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a54b2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 106a54b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a54bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a54be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a54c2 je 0x106a54d5 */
  if (C.zf) goto L_106a54d5;
  /* 106a54c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a54c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a54ca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106a54cc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a54cf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a54d2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_106a54d5:;
  /* 106a54d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a54d8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a54db cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a54de jne 0x106a55ad */
  if (!C.zf) goto L_106a55ad;
L_106a54e4:;
  /* 106a54e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a54e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a54ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a54ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a54f0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a54f3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a54f6 je 0x106a5572 */
  if (C.zf) goto L_106a5572;
  /* 106a54f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a54fb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106a54fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a5500 je 0x106a5572 */
  if (C.zf) goto L_106a5572;
  /* 106a5502 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5505 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a5507 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a5509 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a550b mov al, byte ptr [edx + 0x106d0d01] */
  AL = (r8((uint32_t)(EDX + 0x106d0d01)));
  /* 106a5511 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106a5514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a5516 je 0x106a5547 */
  if (C.zf) goto L_106a5547;
  /* 106a5518 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a551b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a551d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5520 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5523 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106a5525 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5529 je 0x106a5547 */
  if (C.zf) goto L_106a5547;
  /* 106a552b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a552e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5531 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106a5533 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106a5535 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5538 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a553b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106a553e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5541 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5544 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106a5547:;
  /* 106a5547 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a554a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a554c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a554f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5552 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106a5554 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5558 je 0x106a556d */
  if (C.zf) goto L_106a556d;
  /* 106a555a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a555d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5560 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a5562 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a5564 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5567 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a556a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106a556d:;
  /* 106a556d jmp 0x106a54e4 */
  goto L_106a54e4;
L_106a5572:;
  /* 106a5572 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5575 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a5577 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a557a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a557d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106a557f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5583 je 0x106a5594 */
  if (C.zf) goto L_106a5594;
  /* 106a5585 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5588 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 106a558b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a558e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5591 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_106a5594:;
  /* 106a5594 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5597 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a559a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a559d jne 0x106a55a8 */
  if (!C.zf) goto L_106a55a8;
  /* 106a559f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a55a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a55a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106a55a8:;
  /* 106a55a8 jmp 0x106a567c */
  goto L_106a567c;
L_106a55ad:;
  /* 106a55ad mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a55b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a55b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a55b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a55b8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106a55ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a55be je 0x106a55d3 */
  if (C.zf) goto L_106a55d3;
  /* 106a55c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a55c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a55c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a55c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a55ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a55cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a55d0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106a55d3:;
  /* 106a55d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a55d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a55d8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 106a55db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a55de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a55e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a55e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a55e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a55ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a55ef mov dl, byte ptr [ecx + 0x106d0d01] */
  DL = (r8((uint32_t)(ECX + 0x106d0d01)));
  /* 106a55f5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106a55f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a55fa je 0x106a562b */
  if (C.zf) goto L_106a562b;
  /* 106a55fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a55ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a5601 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5604 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5607 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106a5609 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a560d je 0x106a5622 */
  if (C.zf) goto L_106a5622;
  /* 106a560f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5615 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a5617 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a5619 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a561c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a561f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106a5622:;
  /* 106a5622 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5625 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5628 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a562b:;
  /* 106a562b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a562e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a5634 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5637 je 0x106a5657 */
  if (C.zf) goto L_106a5657;
  /* 106a5639 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a563c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a5641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a5643 je 0x106a5657 */
  if (C.zf) goto L_106a5657;
  /* 106a5645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5648 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a564e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5651 jne 0x106a55ad */
  if (!C.zf) goto L_106a55ad;
L_106a5657:;
  /* 106a5657 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a565a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a5660 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a5662 jne 0x106a566f */
  if (!C.zf) goto L_106a566f;
  /* 106a5664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5667 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a566a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a566d jmp 0x106a567c */
  goto L_106a567c;
L_106a566f:;
  /* 106a566f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5673 je 0x106a567c */
  if (C.zf) goto L_106a567c;
  /* 106a5675 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5678 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_106a567c:;
  /* 106a567c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_106a5683:;
  /* 106a5683 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5686 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106a5689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a568b je 0x106a56ae */
  if (C.zf) goto L_106a56ae;
L_106a568d:;
  /* 106a568d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5690 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106a5693 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5696 je 0x106a56a3 */
  if (C.zf) goto L_106a56a3;
  /* 106a5698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a569b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a569e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a56a1 jne 0x106a56ae */
  if (!C.zf) goto L_106a56ae;
L_106a56a3:;
  /* 106a56a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a56a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a56a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a56ac jmp 0x106a568d */
  goto L_106a568d;
L_106a56ae:;
  /* 106a56ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a56b1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a56b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a56b6 jne 0x106a56bd */
  if (!C.zf) goto L_106a56bd;
  /* 106a56b8 jmp 0x106a589b */
  goto L_106a589b;
L_106a56bd:;
  /* 106a56bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a56c1 je 0x106a56d4 */
  if (C.zf) goto L_106a56d4;
  /* 106a56c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a56c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a56c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106a56cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a56ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a56d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106a56d4:;
  /* 106a56d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a56d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a56d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a56dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a56df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_106a56e1:;
  /* 106a56e1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106a56e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106a56ef:;
  /* 106a56ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a56f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106a56f5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a56f8 jne 0x106a570e */
  if (!C.zf) goto L_106a570e;
  /* 106a56fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a56fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5700 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a5703 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a5706 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5709 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106a570c jmp 0x106a56ef */
  goto L_106a56ef;
L_106a570e:;
  /* 106a570e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5711 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a5714 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5717 jne 0x106a576a */
  if (!C.zf) goto L_106a576a;
  /* 106a5719 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a571c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a571e mov ecx, 2 */
  ECX = (0x2u);
  /* 106a5723 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a5725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a5727 jne 0x106a5762 */
  if (!C.zf) goto L_106a5762;
  /* 106a5729 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a572d je 0x106a574f */
  if (C.zf) goto L_106a574f;
  /* 106a572f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5732 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106a5736 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5739 jne 0x106a5746 */
  if (!C.zf) goto L_106a5746;
  /* 106a573b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a573e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5741 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a5744 jmp 0x106a574d */
  goto L_106a574d;
L_106a5746:;
  /* 106a5746 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106a574d:;
  /* 106a574d jmp 0x106a5756 */
  goto L_106a5756;
L_106a574f:;
  /* 106a574f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106a5756:;
  /* 106a5756 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a5758 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a575c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 106a575f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106a5762:;
  /* 106a5762 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a5765 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106a5767 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106a576a:;
  /* 106a576a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a576d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a5770 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5773 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106a5776 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a5778 je 0x106a579e */
  if (C.zf) goto L_106a579e;
  /* 106a577a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a577e je 0x106a578f */
  if (C.zf) goto L_106a578f;
  /* 106a5780 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5783 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 106a5786 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5789 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a578c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_106a578f:;
  /* 106a578f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5792 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a5794 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5797 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a579a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106a579c jmp 0x106a576a */
  goto L_106a576a;
L_106a579e:;
  /* 106a579e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a57a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106a57a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a57a6 je 0x106a57c4 */
  if (C.zf) goto L_106a57c4;
  /* 106a57a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a57ac jne 0x106a57c9 */
  if (!C.zf) goto L_106a57c9;
  /* 106a57ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a57b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106a57b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a57b7 je 0x106a57c4 */
  if (C.zf) goto L_106a57c4;
  /* 106a57b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a57bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106a57bf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a57c2 jne 0x106a57c9 */
  if (!C.zf) goto L_106a57c9;
L_106a57c4:;
  /* 106a57c4 jmp 0x106a5874 */
  goto L_106a5874;
L_106a57c9:;
  /* 106a57c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a57cd je 0x106a5866 */
  if (C.zf) goto L_106a5866;
  /* 106a57d3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a57d7 je 0x106a582d */
  if (C.zf) goto L_106a582d;
  /* 106a57d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a57dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a57de mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106a57e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a57e2 mov cl, byte ptr [eax + 0x106d0d01] */
  CL = (r8((uint32_t)(EAX + 0x106d0d01)));
  /* 106a57e8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106a57eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a57ed je 0x106a5818 */
  if (C.zf) goto L_106a5818;
  /* 106a57ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a57f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a57f5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106a57f7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106a57f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a57fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a57ff mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 106a5802 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5805 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5808 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a580b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a580e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a5810 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5813 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5816 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106a5818:;
  /* 106a5818 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a581b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a581e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106a5820 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106a5822 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5825 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5828 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106a582b jmp 0x106a5859 */
  goto L_106a5859;
L_106a582d:;
  /* 106a582d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5830 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5832 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106a5834 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a5836 mov cl, byte ptr [eax + 0x106d0d01] */
  CL = (r8((uint32_t)(EAX + 0x106d0d01)));
  /* 106a583c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106a583f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a5841 je 0x106a5859 */
  if (C.zf) goto L_106a5859;
  /* 106a5843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5846 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5849 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a584c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a584f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a5851 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5854 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5857 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a5859:;
  /* 106a5859 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a585c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a585e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5861 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5864 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106a5866:;
  /* 106a5866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5869 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a586c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a586f jmp 0x106a56e1 */
  goto L_106a56e1;
L_106a5874:;
  /* 106a5874 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5878 je 0x106a5889 */
  if (C.zf) goto L_106a5889;
  /* 106a587a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a587d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 106a5880 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5883 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5886 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_106a5889:;
  /* 106a5889 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a588c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a588e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5891 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106a5894 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106a5896 jmp 0x106a5683 */
  goto L_106a5683;
L_106a589b:;
  /* 106a589b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a589f je 0x106a58b3 */
  if (C.zf) goto L_106a58b3;
  /* 106a58a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a58a4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106a58aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a58ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a58b0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106a58b3:;
  /* 106a58b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a58b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a58b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a58bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a58be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106a58c0 mov esp, ebp */
  ESP = (EBP);
  /* 106a58c2 pop ebp */
  EBP = (pop32());
  /* 106a58c3 ret  */
  ESPCHK(0x106a54a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058d0 @ 0x106a58d0 (537 bytes, 173 insns) */
void f_106a58d0(void) {
  FTRACE(0x106a58d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a58d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a58d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a58d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a58d6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 106a58dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 106a58e4 cmp dword ptr [0x106cf5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a58eb jne 0x106a592a */
  if (!C.zf) goto L_106a592a;
  /* 106a58ed call dword ptr [0x106d1338] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1338))), 0x106a58f3u);
  /* 106a58f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106a58f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a58fa je 0x106a5908 */
  if (C.zf) goto L_106a5908;
  /* 106a58fc mov dword ptr [0x106cf5ec], 1 */
  w32((uint32_t)(0x106cf5ec), (0x1u));
  /* 106a5906 jmp 0x106a592a */
  goto L_106a592a;
L_106a5908:;
  /* 106a5908 call dword ptr [0x106d1334] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1334))), 0x106a590eu);
  /* 106a590e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a5911 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5915 je 0x106a5923 */
  if (C.zf) goto L_106a5923;
  /* 106a5917 mov dword ptr [0x106cf5ec], 2 */
  w32((uint32_t)(0x106cf5ec), (0x2u));
  /* 106a5921 jmp 0x106a592a */
  goto L_106a592a;
L_106a5923:;
  /* 106a5923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5925 jmp 0x106a5ae5 */
  goto L_106a5ae5;
L_106a592a:;
  /* 106a592a cmp dword ptr [0x106cf5ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf5ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5931 jne 0x106a5a2e */
  if (!C.zf) goto L_106a5a2e;
  /* 106a5937 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a593b jne 0x106a5953 */
  if (!C.zf) goto L_106a5953;
  /* 106a593d call dword ptr [0x106d1338] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1338))), 0x106a5943u);
  /* 106a5943 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106a5946 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a594a jne 0x106a5953 */
  if (!C.zf) goto L_106a5953;
  /* 106a594c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a594e jmp 0x106a5ae5 */
  goto L_106a5ae5;
L_106a5953:;
  /* 106a5953 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a5956 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106a5959:;
  /* 106a5959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a595c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a595e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 106a5961 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a5963 je 0x106a5985 */
  if (C.zf) goto L_106a5985;
  /* 106a5965 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5968 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a596b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a596e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5971 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a5973 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 106a5976 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a5978 jne 0x106a5983 */
  if (!C.zf) goto L_106a5983;
  /* 106a597a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a597d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5980 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106a5983:;
  /* 106a5983 jmp 0x106a5959 */
  goto L_106a5959;
L_106a5985:;
  /* 106a5985 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5988 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a598b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106a598d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5990 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a5993 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5995 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5997 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5999 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a599b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a599e push edx */
  push32((uint32_t)(EDX));
  /* 106a599f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a59a2 push eax */
  push32((uint32_t)(EAX));
  /* 106a59a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a59a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a59a7 call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106a59adu);
  /* 106a59ad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a59b0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a59b4 je 0x106a59d4 */
  if (C.zf) goto L_106a59d4;
  /* 106a59b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 106a59b8 push 0x106cab7c */
  push32((uint32_t)(0x106cab7cu));
  /* 106a59bd push 2 */
  push32((uint32_t)(0x2u));
  /* 106a59bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a59c2 push ecx */
  push32((uint32_t)(ECX));
  /* 106a59c3 call 0x106a3300 */
  push32(0x106a59c8u); f_106a3300();
  /* 106a59c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a59cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a59ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a59d2 jne 0x106a59e5 */
  if (!C.zf) goto L_106a59e5;
L_106a59d4:;
  /* 106a59d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a59d7 push edx */
  push32((uint32_t)(EDX));
  /* 106a59d8 call dword ptr [0x106d132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d132c))), 0x106a59deu);
  /* 106a59de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a59e0 jmp 0x106a5ae5 */
  goto L_106a5ae5;
L_106a59e5:;
  /* 106a59e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a59e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a59e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a59ec push eax */
  push32((uint32_t)(EAX));
  /* 106a59ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a59f0 push ecx */
  push32((uint32_t)(ECX));
  /* 106a59f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a59f4 push edx */
  push32((uint32_t)(EDX));
  /* 106a59f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a59f8 push eax */
  push32((uint32_t)(EAX));
  /* 106a59f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a59fb push 0 */
  push32((uint32_t)(0x0u));
  /* 106a59fd call dword ptr [0x106d1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1330))), 0x106a5a03u);
  /* 106a5a03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a5a05 jne 0x106a5a1c */
  if (!C.zf) goto L_106a5a1c;
  /* 106a5a07 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a5a09 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a5a0c push ecx */
  push32((uint32_t)(ECX));
  /* 106a5a0d call 0x106a3d90 */
  push32(0x106a5a12u); f_106a3d90();
  /* 106a5a12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5a15 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_106a5a1c:;
  /* 106a5a1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a5a1f push edx */
  push32((uint32_t)(EDX));
  /* 106a5a20 call dword ptr [0x106d132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d132c))), 0x106a5a26u);
  /* 106a5a26 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a5a29 jmp 0x106a5ae5 */
  goto L_106a5ae5;
L_106a5a2e:;
  /* 106a5a2e cmp dword ptr [0x106cf5ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106cf5ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5a35 jne 0x106a5ae3 */
  if (!C.zf) goto L_106a5ae3;
  /* 106a5a3b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5a3f jne 0x106a5a57 */
  if (!C.zf) goto L_106a5a57;
  /* 106a5a41 call dword ptr [0x106d1334] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1334))), 0x106a5a47u);
  /* 106a5a47 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a5a4a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5a4e jne 0x106a5a57 */
  if (!C.zf) goto L_106a5a57;
  /* 106a5a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5a52 jmp 0x106a5ae5 */
  goto L_106a5ae5;
L_106a5a57:;
  /* 106a5a57 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a5a5a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106a5a5d:;
  /* 106a5a5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5a60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106a5a63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a5a65 je 0x106a5a85 */
  if (C.zf) goto L_106a5a85;
  /* 106a5a67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5a6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5a6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a5a70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5a73 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106a5a76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a5a78 jne 0x106a5a83 */
  if (!C.zf) goto L_106a5a83;
  /* 106a5a7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5a7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5a80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106a5a83:;
  /* 106a5a83 jmp 0x106a5a5d */
  goto L_106a5a5d;
L_106a5a85:;
  /* 106a5a85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5a88 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5a8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5a8e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106a5a91 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 106a5a96 push 0x106cab7c */
  push32((uint32_t)(0x106cab7cu));
  /* 106a5a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 106a5a9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a5aa0 push edx */
  push32((uint32_t)(EDX));
  /* 106a5aa1 call 0x106a3300 */
  push32(0x106a5aa6u); f_106a3300();
  /* 106a5aa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5aa9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a5aac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5ab0 jne 0x106a5ac0 */
  if (!C.zf) goto L_106a5ac0;
  /* 106a5ab2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a5ab5 push eax */
  push32((uint32_t)(EAX));
  /* 106a5ab6 call dword ptr [0x106d1328] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1328))), 0x106a5abcu);
  /* 106a5abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5abe jmp 0x106a5ae5 */
  goto L_106a5ae5;
L_106a5ac0:;
  /* 106a5ac0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a5ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5ac4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a5ac7 push edx */
  push32((uint32_t)(EDX));
  /* 106a5ac8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5acb push eax */
  push32((uint32_t)(EAX));
  /* 106a5acc call 0x106a9be0 */
  push32(0x106a5ad1u); f_106a9be0();
  /* 106a5ad1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5ad4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a5ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5ad8 call dword ptr [0x106d1328] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1328))), 0x106a5adeu);
  /* 106a5ade mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5ae1 jmp 0x106a5ae5 */
  goto L_106a5ae5;
L_106a5ae3:;
  /* 106a5ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a5ae5:;
  /* 106a5ae5 mov esp, ebp */
  ESP = (EBP);
  /* 106a5ae7 pop ebp */
  EBP = (pop32());
  /* 106a5ae8 ret  */
  ESPCHK(0x106a58d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005af0 @ 0x106a5af0 (77 bytes, 25 insns) */
void f_106a5af0(void) {
  FTRACE(0x106a5af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5af0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5af1 mov ebp, esp */
  EBP = (ESP);
  /* 106a5af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5af5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106a5afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5afc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5b00 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 106a5b03 push eax */
  push32((uint32_t)(EAX));
  /* 106a5b04 call dword ptr [0x106d1340] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1340))), 0x106a5b0au);
  /* 106a5b0a mov dword ptr [0x106d0e2c], eax */
  w32((uint32_t)(0x106d0e2c), (EAX));
  /* 106a5b0f cmp dword ptr [0x106d0e2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106d0e2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5b16 jne 0x106a5b1c */
  if (!C.zf) goto L_106a5b1c;
  /* 106a5b18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5b1a jmp 0x106a5b3b */
  goto L_106a5b3b;
L_106a5b1c:;
  /* 106a5b1c call 0x106a75a0 */
  push32(0x106a5b21u); f_106a75a0();
  /* 106a5b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a5b23 jne 0x106a5b36 */
  if (!C.zf) goto L_106a5b36;
  /* 106a5b25 mov ecx, dword ptr [0x106d0e2c] */
  ECX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a5b2b push ecx */
  push32((uint32_t)(ECX));
  /* 106a5b2c call dword ptr [0x106d133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d133c))), 0x106a5b32u);
  /* 106a5b32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a5b34 jmp 0x106a5b3b */
  goto L_106a5b3b;
L_106a5b36:;
  /* 106a5b36 mov eax, 1 */
  EAX = (0x1u);
L_106a5b3b:;
  /* 106a5b3b pop ebp */
  EBP = (pop32());
  /* 106a5b3c ret  */
  ESPCHK(0x106a5af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b40 @ 0x106a5b40 (156 bytes, 48 insns) */
void f_106a5b40(void) {
  FTRACE(0x106a5b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5b40 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5b41 mov ebp, esp */
  EBP = (ESP);
  /* 106a5b43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5b46 mov eax, dword ptr [0x106d0e28] */
  EAX = (r32((uint32_t)(0x106d0e28)));
  /* 106a5b4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a5b4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a5b55 jmp 0x106a5b60 */
  goto L_106a5b60;
L_106a5b57:;
  /* 106a5b57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5b5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5b5d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a5b60:;
  /* 106a5b60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5b63 cmp edx, dword ptr [0x106d0e24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106d0e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5b69 jge 0x106a5bb6 */
  if ((C.sf==C.of)) goto L_106a5bb6;
  /* 106a5b6b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 106a5b70 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 106a5b75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5b78 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106a5b7b push ecx */
  push32((uint32_t)(ECX));
  /* 106a5b7c call dword ptr [0x106d1348] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1348))), 0x106a5b82u);
  /* 106a5b82 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106a5b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5b89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5b8c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106a5b8f push eax */
  push32((uint32_t)(EAX));
  /* 106a5b90 call dword ptr [0x106d1348] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1348))), 0x106a5b96u);
  /* 106a5b96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5b99 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106a5b9c push edx */
  push32((uint32_t)(EDX));
  /* 106a5b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5b9f mov eax, dword ptr [0x106d0e2c] */
  EAX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a5ba4 push eax */
  push32((uint32_t)(EAX));
  /* 106a5ba5 call dword ptr [0x106d1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1344))), 0x106a5babu);
  /* 106a5bab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5bae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5bb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106a5bb4 jmp 0x106a5b57 */
  goto L_106a5b57;
L_106a5bb6:;
  /* 106a5bb6 mov edx, dword ptr [0x106d0e28] */
  EDX = (r32((uint32_t)(0x106d0e28)));
  /* 106a5bbc push edx */
  push32((uint32_t)(EDX));
  /* 106a5bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5bbf mov eax, dword ptr [0x106d0e2c] */
  EAX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a5bc4 push eax */
  push32((uint32_t)(EAX));
  /* 106a5bc5 call dword ptr [0x106d1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1344))), 0x106a5bcbu);
  /* 106a5bcb mov ecx, dword ptr [0x106d0e2c] */
  ECX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a5bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5bd2 call dword ptr [0x106d133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d133c))), 0x106a5bd8u);
  /* 106a5bd8 mov esp, ebp */
  ESP = (EBP);
  /* 106a5bda pop ebp */
  EBP = (pop32());
  /* 106a5bdb ret  */
  ESPCHK(0x106a5b40u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x106a5be0 (73 bytes, 19 insns) */
void f_106a5be0(void) {
  FTRACE(0x106a5be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5be0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5be1 mov ebp, esp */
  EBP = (ESP);
  /* 106a5be3 cmp dword ptr [0x106cf480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5bea je 0x106a5bfe */
  if (C.zf) goto L_106a5bfe;
  /* 106a5bec cmp dword ptr [0x106cf480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5bf3 jne 0x106a5c27 */
  if (!C.zf) goto L_106a5c27;
  /* 106a5bf5 cmp dword ptr [0x106cf484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5bfc jne 0x106a5c27 */
  if (!C.zf) goto L_106a5c27;
L_106a5bfe:;
  /* 106a5bfe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 106a5c03 call 0x106a5c30 */
  push32(0x106a5c08u); f_106a5c30();
  /* 106a5c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5c0b cmp dword ptr [0x106cf5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5c12 je 0x106a5c1a */
  if (C.zf) goto L_106a5c1a;
  /* 106a5c14 call dword ptr [0x106cf5f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf5f0))), 0x106a5c1au);
L_106a5c1a:;
  /* 106a5c1a push 0xff */
  push32((uint32_t)(0xffu));
  /* 106a5c1f call 0x106a5c30 */
  push32(0x106a5c24u); f_106a5c30();
  /* 106a5c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a5c27:;
  /* 106a5c27 pop ebp */
  EBP = (pop32());
  /* 106a5c28 ret  */
  ESPCHK(0x106a5be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x106a5c30 (447 bytes, 131 insns) */
void f_106a5c30(void) {
  FTRACE(0x106a5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5c31 mov ebp, esp */
  EBP = (ESP);
  /* 106a5c33 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5c39 push ebx */
  push32((uint32_t)(EBX));
  /* 106a5c3a push esi */
  push32((uint32_t)(ESI));
  /* 106a5c3b push edi */
  push32((uint32_t)(EDI));
  /* 106a5c3c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106a5c43 jmp 0x106a5c4e */
  goto L_106a5c4e;
L_106a5c45:;
  /* 106a5c45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5c48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5c4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106a5c4e:;
  /* 106a5c4e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5c52 jae 0x106a5c67 */
  if (!C.cf) goto L_106a5c67;
  /* 106a5c54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5c5a cmp edx, dword ptr [ecx*8 + 0x106cdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x106cdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5c61 jne 0x106a5c65 */
  if (!C.zf) goto L_106a5c65;
  /* 106a5c63 jmp 0x106a5c67 */
  goto L_106a5c67;
L_106a5c65:;
  /* 106a5c65 jmp 0x106a5c45 */
  goto L_106a5c45;
L_106a5c67:;
  /* 106a5c67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5c6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5c6d cmp ecx, dword ptr [eax*8 + 0x106cdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x106cdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5c74 jne 0x106a5de8 */
  if (!C.zf) goto L_106a5de8;
  /* 106a5c7a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5c81 je 0x106a5ca4 */
  if (C.zf) goto L_106a5ca4;
  /* 106a5c83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5c86 mov eax, dword ptr [edx*8 + 0x106cdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x106cdab4)));
  /* 106a5c8d push eax */
  push32((uint32_t)(EAX));
  /* 106a5c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5c94 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a5c96 call 0x106a23c0 */
  push32(0x106a5c9bu); f_106a23c0();
  /* 106a5c9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5c9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5ca1 jne 0x106a5ca4 */
  if (!C.zf) goto L_106a5ca4;
  /* 106a5ca3 int3  */
  x86_unimpl("int3 @ 0x106a5ca3");
L_106a5ca4:;
  /* 106a5ca4 cmp dword ptr [0x106cf480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5cab je 0x106a5cbf */
  if (C.zf) goto L_106a5cbf;
  /* 106a5cad cmp dword ptr [0x106cf480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5cb4 jne 0x106a5cf8 */
  if (!C.zf) goto L_106a5cf8;
  /* 106a5cb6 cmp dword ptr [0x106cf484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106cf484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5cbd jne 0x106a5cf8 */
  if (!C.zf) goto L_106a5cf8;
L_106a5cbf:;
  /* 106a5cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5cc1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 106a5cc4 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5cc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5cc8 mov eax, dword ptr [edx*8 + 0x106cdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x106cdab4)));
  /* 106a5ccf push eax */
  push32((uint32_t)(EAX));
  /* 106a5cd0 call 0x106a6130 */
  push32(0x106a5cd5u); f_106a6130();
  /* 106a5cd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5cd8 push eax */
  push32((uint32_t)(EAX));
  /* 106a5cd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5cdc mov edx, dword ptr [ecx*8 + 0x106cdab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x106cdab4)));
  /* 106a5ce3 push edx */
  push32((uint32_t)(EDX));
  /* 106a5ce4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106a5ce6 call dword ptr [0x106d12c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c0))), 0x106a5cecu);
  /* 106a5cec push eax */
  push32((uint32_t)(EAX));
  /* 106a5ced call dword ptr [0x106d12c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12c4))), 0x106a5cf3u);
  /* 106a5cf3 jmp 0x106a5de8 */
  goto L_106a5de8;
L_106a5cf8:;
  /* 106a5cf8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5cff je 0x106a5de8 */
  if (C.zf) goto L_106a5de8;
  /* 106a5d05 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 106a5d0a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 106a5d10 push eax */
  push32((uint32_t)(EAX));
  /* 106a5d11 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5d13 call dword ptr [0x106d12dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12dc))), 0x106a5d19u);
  /* 106a5d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a5d1b jne 0x106a5d31 */
  if (!C.zf) goto L_106a5d31;
  /* 106a5d1d push 0x106ca3e4 */
  push32((uint32_t)(0x106ca3e4u));
  /* 106a5d22 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 106a5d28 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5d29 call 0x106a62b0 */
  push32(0x106a5d2eu); f_106a62b0();
  /* 106a5d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a5d31:;
  /* 106a5d31 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 106a5d37 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106a5d3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5d3d push eax */
  push32((uint32_t)(EAX));
  /* 106a5d3e call 0x106a6130 */
  push32(0x106a5d43u); f_106a6130();
  /* 106a5d43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5d46 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5d49 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5d4c jbe 0x106a5d7a */
  if ((C.cf||C.zf)) goto L_106a5d7a;
  /* 106a5d4e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 106a5d54 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5d55 call 0x106a6130 */
  push32(0x106a5d5au); f_106a6130();
  /* 106a5d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5d5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5d60 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 106a5d64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a5d67 push 3 */
  push32((uint32_t)(0x3u));
  /* 106a5d69 push 0x106ca3e0 */
  push32((uint32_t)(0x106ca3e0u));
  /* 106a5d6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5d71 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5d72 call 0x106a6b20 */
  push32(0x106a5d77u); f_106a6b20();
  /* 106a5d77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a5d7a:;
  /* 106a5d7a push 0x106cae38 */
  push32((uint32_t)(0x106cae38u));
  /* 106a5d7f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 106a5d85 push edx */
  push32((uint32_t)(EDX));
  /* 106a5d86 call 0x106a62b0 */
  push32(0x106a5d8bu); f_106a62b0();
  /* 106a5d8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5d8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5d91 push eax */
  push32((uint32_t)(EAX));
  /* 106a5d92 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 106a5d98 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5d99 call 0x106a62c0 */
  push32(0x106a5d9eu); f_106a62c0();
  /* 106a5d9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5da1 push 0x106ca358 */
  push32((uint32_t)(0x106ca358u));
  /* 106a5da6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 106a5dac push edx */
  push32((uint32_t)(EDX));
  /* 106a5dad call 0x106a62c0 */
  push32(0x106a5db2u); f_106a62c0();
  /* 106a5db2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5db5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5db8 mov ecx, dword ptr [eax*8 + 0x106cdab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x106cdab4)));
  /* 106a5dbf push ecx */
  push32((uint32_t)(ECX));
  /* 106a5dc0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 106a5dc6 push edx */
  push32((uint32_t)(EDX));
  /* 106a5dc7 call 0x106a62c0 */
  push32(0x106a5dccu); f_106a62c0();
  /* 106a5dcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5dcf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 106a5dd4 push 0x106cae10 */
  push32((uint32_t)(0x106cae10u));
  /* 106a5dd9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 106a5ddf push eax */
  push32((uint32_t)(EAX));
  /* 106a5de0 call 0x106a6a60 */
  push32(0x106a5de5u); f_106a6a60();
  /* 106a5de5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a5de8:;
  /* 106a5de8 pop edi */
  EDI = (pop32());
  /* 106a5de9 pop esi */
  ESI = (pop32());
  /* 106a5dea pop ebx */
  EBX = (pop32());
  /* 106a5deb mov esp, ebp */
  ESP = (EBP);
  /* 106a5ded pop ebp */
  EBP = (pop32());
  /* 106a5dee ret  */
  ESPCHK(0x106a5c30u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x106a5df0 (80 bytes, 27 insns) */
void f_106a5df0(void) {
  FTRACE(0x106a5df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5df0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5df1 mov ebp, esp */
  EBP = (ESP);
  /* 106a5df3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5df4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a5dfb jmp 0x106a5e06 */
  goto L_106a5e06;
L_106a5dfd:;
  /* 106a5dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5e00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5e03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a5e06:;
  /* 106a5e06 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5e0a jae 0x106a5e1f */
  if (!C.cf) goto L_106a5e1f;
  /* 106a5e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5e12 cmp edx, dword ptr [ecx*8 + 0x106cdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x106cdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5e19 jne 0x106a5e1d */
  if (!C.zf) goto L_106a5e1d;
  /* 106a5e1b jmp 0x106a5e1f */
  goto L_106a5e1f;
L_106a5e1d:;
  /* 106a5e1d jmp 0x106a5dfd */
  goto L_106a5dfd;
L_106a5e1f:;
  /* 106a5e1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5e22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5e25 cmp ecx, dword ptr [eax*8 + 0x106cdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x106cdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5e2c jne 0x106a5e3a */
  if (!C.zf) goto L_106a5e3a;
  /* 106a5e2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5e31 mov eax, dword ptr [edx*8 + 0x106cdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x106cdab4)));
  /* 106a5e38 jmp 0x106a5e3c */
  goto L_106a5e3c;
L_106a5e3a:;
  /* 106a5e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a5e3c:;
  /* 106a5e3c mov esp, ebp */
  ESP = (EBP);
  /* 106a5e3e pop ebp */
  EBP = (pop32());
  /* 106a5e3f ret  */
  ESPCHK(0x106a5df0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x106a5e40 (66 bytes, 28 insns) */
void f_106a5e40(void) {
  FTRACE(0x106a5e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5e40 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5e41 mov ebp, esp */
  EBP = (ESP);
  /* 106a5e43 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5e47 jne 0x106a5e67 */
  if (!C.zf) goto L_106a5e67;
  /* 106a5e49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5e4d jge 0x106a5e67 */
  if ((C.sf==C.of)) goto L_106a5e67;
  /* 106a5e4f push 1 */
  push32((uint32_t)(0x1u));
  /* 106a5e51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5e54 push eax */
  push32((uint32_t)(EAX));
  /* 106a5e55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5e58 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5e59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5e5c push edx */
  push32((uint32_t)(EDX));
  /* 106a5e5d call 0x106a5e90 */
  push32(0x106a5e62u); f_106a5e90();
  /* 106a5e62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5e65 jmp 0x106a5e7d */
  goto L_106a5e7d;
L_106a5e67:;
  /* 106a5e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5e6c push eax */
  push32((uint32_t)(EAX));
  /* 106a5e6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5e70 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5e71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5e74 push edx */
  push32((uint32_t)(EDX));
  /* 106a5e75 call 0x106a5e90 */
  push32(0x106a5e7au); f_106a5e90();
  /* 106a5e7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a5e7d:;
  /* 106a5e7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5e80 pop ebp */
  EBP = (pop32());
  /* 106a5e81 ret  */
  ESPCHK(0x106a5e40u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x106a5e90 (194 bytes, 71 insns) */
void f_106a5e90(void) {
  FTRACE(0x106a5e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5e90 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5e91 mov ebp, esp */
  EBP = (ESP);
  /* 106a5e93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5e96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a5e9c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5ea0 je 0x106a5eb9 */
  if (C.zf) goto L_106a5eb9;
  /* 106a5ea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5ea5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 106a5ea8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5eab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5eae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a5eb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5eb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106a5eb6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106a5eb9:;
  /* 106a5eb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5ebc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106a5ebf:;
  /* 106a5ebf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5ec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a5ec4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a5ec7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106a5eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5ecd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a5ecf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106a5ed2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106a5ed5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5ed9 jbe 0x106a5ef1 */
  if ((C.cf||C.zf)) goto L_106a5ef1;
  /* 106a5edb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5ede add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5ee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5ee4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a5ee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5ee9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5eec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a5eef jmp 0x106a5f05 */
  goto L_106a5f05;
L_106a5ef1:;
  /* 106a5ef1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a5ef4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5efa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a5efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5eff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5f02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a5f05:;
  /* 106a5f05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5f09 ja 0x106a5ebf */
  if ((!C.cf&&!C.zf)) goto L_106a5ebf;
  /* 106a5f0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5f0e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106a5f11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5f14 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5f17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a5f1a:;
  /* 106a5f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5f1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a5f1f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 106a5f22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5f25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5f28 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a5f2a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a5f2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5f2f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 106a5f32 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106a5f34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5f37 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a5f3a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a5f3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5f40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5f43 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a5f46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a5f49 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5f4c jb 0x106a5f1a */
  if (C.cf) goto L_106a5f1a;
  /* 106a5f4e mov esp, ebp */
  ESP = (EBP);
  /* 106a5f50 pop ebp */
  EBP = (pop32());
  /* 106a5f51 ret  */
  ESPCHK(0x106a5e90u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x106a5f60 (63 bytes, 24 insns) */
void f_106a5f60(void) {
  FTRACE(0x106a5f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5f60 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5f61 mov ebp, esp */
  EBP = (ESP);
  /* 106a5f63 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5f64 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5f68 jne 0x106a5f79 */
  if (!C.zf) goto L_106a5f79;
  /* 106a5f6a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5f6e jge 0x106a5f79 */
  if ((C.sf==C.of)) goto L_106a5f79;
  /* 106a5f70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106a5f77 jmp 0x106a5f80 */
  goto L_106a5f80;
L_106a5f79:;
  /* 106a5f79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106a5f80:;
  /* 106a5f80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5f83 push eax */
  push32((uint32_t)(EAX));
  /* 106a5f84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5f87 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5f88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5f8b push edx */
  push32((uint32_t)(EDX));
  /* 106a5f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5f8f push eax */
  push32((uint32_t)(EAX));
  /* 106a5f90 call 0x106a5e90 */
  push32(0x106a5f95u); f_106a5e90();
  /* 106a5f95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5f98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5f9b mov esp, ebp */
  ESP = (EBP);
  /* 106a5f9d pop ebp */
  EBP = (pop32());
  /* 106a5f9e ret  */
  ESPCHK(0x106a5f60u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x106a5fa0 (30 bytes, 14 insns) */
void f_106a5fa0(void) {
  FTRACE(0x106a5fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5fa1 mov ebp, esp */
  EBP = (ESP);
  /* 106a5fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a5fa5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5fa8 push eax */
  push32((uint32_t)(EAX));
  /* 106a5fa9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5fac push ecx */
  push32((uint32_t)(ECX));
  /* 106a5fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5fb0 push edx */
  push32((uint32_t)(EDX));
  /* 106a5fb1 call 0x106a5e90 */
  push32(0x106a5fb6u); f_106a5e90();
  /* 106a5fb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a5fb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5fbc pop ebp */
  EBP = (pop32());
  /* 106a5fbd ret  */
  ESPCHK(0x106a5fa0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x106a5fc0 (72 bytes, 28 insns) */
void f_106a5fc0(void) {
  FTRACE(0x106a5fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a5fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a5fc1 mov ebp, esp */
  EBP = (ESP);
  /* 106a5fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a5fc4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5fc8 jne 0x106a5fe1 */
  if (!C.zf) goto L_106a5fe1;
  /* 106a5fca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5fce jg 0x106a5fe1 */
  if ((!C.zf&&C.sf==C.of)) goto L_106a5fe1;
  /* 106a5fd0 jl 0x106a5fd8 */
  if ((C.sf!=C.of)) goto L_106a5fd8;
  /* 106a5fd2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a5fd6 jae 0x106a5fe1 */
  if (!C.cf) goto L_106a5fe1;
L_106a5fd8:;
  /* 106a5fd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106a5fdf jmp 0x106a5fe8 */
  goto L_106a5fe8;
L_106a5fe1:;
  /* 106a5fe1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106a5fe8:;
  /* 106a5fe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a5feb push eax */
  push32((uint32_t)(EAX));
  /* 106a5fec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a5fef push ecx */
  push32((uint32_t)(ECX));
  /* 106a5ff0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a5ff3 push edx */
  push32((uint32_t)(EDX));
  /* 106a5ff4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a5ff7 push eax */
  push32((uint32_t)(EAX));
  /* 106a5ff8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a5ffb push ecx */
  push32((uint32_t)(ECX));
  /* 106a5ffc call 0x106a6010 */
  push32(0x106a6001u); f_106a6010();
  /* 106a6001 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a6004 mov esp, ebp */
  ESP = (EBP);
  /* 106a6006 pop ebp */
  EBP = (pop32());
  /* 106a6007 ret  */
  ESPCHK(0x106a5fc0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x106a6010 (242 bytes, 91 insns) */
void f_106a6010(void) {
  FTRACE(0x106a6010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6010 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6011 mov ebp, esp */
  EBP = (ESP);
  /* 106a6013 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a6016 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a6019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a601c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6020 je 0x106a6044 */
  if (C.zf) goto L_106a6044;
  /* 106a6022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6025 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 106a6028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a602b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a602e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a6031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6034 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106a6036 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6039 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a603c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106a603e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106a6041 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106a6044:;
  /* 106a6044 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6047 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106a604a:;
  /* 106a604a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a604d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a604f push ecx */
  push32((uint32_t)(ECX));
  /* 106a6050 push eax */
  push32((uint32_t)(EAX));
  /* 106a6051 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6054 push edx */
  push32((uint32_t)(EDX));
  /* 106a6055 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6058 push eax */
  push32((uint32_t)(EAX));
  /* 106a6059 call 0x106a9f90 */
  push32(0x106a605eu); f_106a9f90();
  /* 106a605e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a6061 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a6064 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a6066 push edx */
  push32((uint32_t)(EDX));
  /* 106a6067 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a606b push eax */
  push32((uint32_t)(EAX));
  /* 106a606c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a606f push ecx */
  push32((uint32_t)(ECX));
  /* 106a6070 call 0x106a9f20 */
  push32(0x106a6075u); f_106a9f20();
  /* 106a6075 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106a6078 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 106a607b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a607f jbe 0x106a6097 */
  if ((C.cf||C.zf)) goto L_106a6097;
  /* 106a6081 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a6084 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a608a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a608c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a608f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6092 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a6095 jmp 0x106a60ab */
  goto L_106a60ab;
L_106a6097:;
  /* 106a6097 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a609a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a609d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a60a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a60a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a60a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a60a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106a60ab:;
  /* 106a60ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a60af ja 0x106a604a */
  if ((!C.cf&&!C.zf)) goto L_106a604a;
  /* 106a60b1 jb 0x106a60b9 */
  if (C.cf) goto L_106a60b9;
  /* 106a60b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a60b7 ja 0x106a604a */
  if ((!C.cf&&!C.zf)) goto L_106a604a;
L_106a60b9:;
  /* 106a60b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a60bc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106a60bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a60c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a60c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a60c8:;
  /* 106a60c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a60cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a60cd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 106a60d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a60d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a60d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a60d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106a60da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a60dd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 106a60e0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106a60e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a60e5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a60e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a60eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a60ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a60f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a60f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a60f7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a60fa jb 0x106a60c8 */
  if (C.cf) goto L_106a60c8;
  /* 106a60fc mov esp, ebp */
  ESP = (EBP);
  /* 106a60fe pop ebp */
  EBP = (pop32());
  /* 106a60ff ret 0x14 */
  ESPCHK(0x106a6010u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x106a6110 (31 bytes, 15 insns) */
void f_106a6110(void) {
  FTRACE(0x106a6110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6110 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6111 mov ebp, esp */
  EBP = (ESP);
  /* 106a6113 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a6115 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a6118 push eax */
  push32((uint32_t)(EAX));
  /* 106a6119 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a611c push ecx */
  push32((uint32_t)(ECX));
  /* 106a611d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6120 push edx */
  push32((uint32_t)(EDX));
  /* 106a6121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6124 push eax */
  push32((uint32_t)(EAX));
  /* 106a6125 call 0x106a6010 */
  push32(0x106a612au); f_106a6010();
  /* 106a612a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a612d pop ebp */
  EBP = (pop32());
  /* 106a612e ret  */
  ESPCHK(0x106a6110u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x106a6130 (123 bytes, 44 insns) */
void f_106a6130(void) {
  FTRACE(0x106a6130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6130 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106a6134 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106a613a je 0x106a6150 */
  if (C.zf) goto L_106a6150;
L_106a613c:;
  /* 106a613c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 106a613e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106a613f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106a6141 je 0x106a6183 */
  if (C.zf) goto L_106a6183;
  /* 106a6143 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106a6149 jne 0x106a613c */
  if (!C.zf) goto L_106a613c;
  /* 106a614b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_106a6150:;
  /* 106a6150 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106a6152 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106a6157 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6159 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a615c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a615e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6161 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106a6166 je 0x106a6150 */
  if (C.zf) goto L_106a6150;
  /* 106a6168 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 106a616b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106a616d je 0x106a61a1 */
  if (C.zf) goto L_106a61a1;
  /* 106a616f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106a6171 je 0x106a6197 */
  if (C.zf) goto L_106a6197;
  /* 106a6173 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 106a6178 je 0x106a618d */
  if (C.zf) goto L_106a618d;
  /* 106a617a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 106a617f je 0x106a6183 */
  if (C.zf) goto L_106a6183;
  /* 106a6181 jmp 0x106a6150 */
  goto L_106a6150;
L_106a6183:;
  /* 106a6183 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 106a6186 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106a618a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a618c ret  */
  ESPCHK(0x106a6130u, _esp0);
  ESP += 4; return;
L_106a618d:;
  /* 106a618d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 106a6190 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106a6194 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a6196 ret  */
  ESPCHK(0x106a6130u, _esp0);
  ESP += 4; return;
L_106a6197:;
  /* 106a6197 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 106a619a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106a619e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a61a0 ret  */
  ESPCHK(0x106a6130u, _esp0);
  ESP += 4; return;
L_106a61a1:;
  /* 106a61a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 106a61a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106a61a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a61aa ret  */
  ESPCHK(0x106a6130u, _esp0);
  ESP += 4; return;
}

/* FUN_100061b0 @ 0x106a61b0 (249 bytes, 93 insns) */
void f_106a61b0(void) {
  FTRACE(0x106a61b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a61b0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a61b1 mov ebp, esp */
  EBP = (ESP);
  /* 106a61b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a61b6 push ebx */
  push32((uint32_t)(EBX));
  /* 106a61b7 push esi */
  push32((uint32_t)(ESI));
  /* 106a61b8 push edi */
  push32((uint32_t)(EDI));
  /* 106a61b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 106a61bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106a61bf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 106a61c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_106a61c5:;
  /* 106a61c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a61c9 jne 0x106a61e9 */
  if (!C.zf) goto L_106a61e9;
  /* 106a61cb push 0x106cae70 */
  push32((uint32_t)(0x106cae70u));
  /* 106a61d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a61d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 106a61d4 push 0x106cae64 */
  push32((uint32_t)(0x106cae64u));
  /* 106a61d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a61db call 0x106a23c0 */
  push32(0x106a61e0u); f_106a23c0();
  /* 106a61e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a61e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a61e6 jne 0x106a61e9 */
  if (!C.zf) goto L_106a61e9;
  /* 106a61e8 int3  */
  x86_unimpl("int3 @ 0x106a61e8");
L_106a61e9:;
  /* 106a61e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a61eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a61ed jne 0x106a61c5 */
  if (!C.zf) goto L_106a61c5;
L_106a61ef:;
  /* 106a61ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a61f3 jne 0x106a6213 */
  if (!C.zf) goto L_106a6213;
  /* 106a61f5 push 0x106cae54 */
  push32((uint32_t)(0x106cae54u));
  /* 106a61fa push 0 */
  push32((uint32_t)(0x0u));
  /* 106a61fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 106a61fe push 0x106cae64 */
  push32((uint32_t)(0x106cae64u));
  /* 106a6203 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a6205 call 0x106a23c0 */
  push32(0x106a620au); f_106a23c0();
  /* 106a620a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a620d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6210 jne 0x106a6213 */
  if (!C.zf) goto L_106a6213;
  /* 106a6212 int3  */
  x86_unimpl("int3 @ 0x106a6212");
L_106a6213:;
  /* 106a6213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a6215 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a6217 jne 0x106a61ef */
  if (!C.zf) goto L_106a61ef;
  /* 106a6219 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a621c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 106a6223 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6229 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106a622c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a622f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6232 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106a6234 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6237 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a623a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106a623d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106a6240 push edx */
  push32((uint32_t)(EDX));
  /* 106a6241 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a6244 push eax */
  push32((uint32_t)(EAX));
  /* 106a6245 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6248 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6249 call 0x106aa290 */
  push32(0x106a624eu); f_106aa290();
  /* 106a624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6251 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106a6254 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6257 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a625a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a625d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6260 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106a6263 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6266 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a626a jl 0x106a628e */
  if ((C.sf!=C.of)) goto L_106a628e;
  /* 106a626c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a626f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a6271 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 106a6274 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a6276 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a627c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 106a627f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6282 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a6284 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6287 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a628a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106a628c jmp 0x106a629f */
  goto L_106a629f;
L_106a628e:;
  /* 106a628e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6291 push eax */
  push32((uint32_t)(EAX));
  /* 106a6292 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a6294 call 0x106aa010 */
  push32(0x106a6299u); f_106aa010();
  /* 106a6299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a629c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_106a629f:;
  /* 106a629f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a62a2 pop edi */
  EDI = (pop32());
  /* 106a62a3 pop esi */
  ESI = (pop32());
  /* 106a62a4 pop ebx */
  EBX = (pop32());
  /* 106a62a5 mov esp, ebp */
  ESP = (EBP);
  /* 106a62a7 pop ebp */
  EBP = (pop32());
  /* 106a62a8 ret  */
  ESPCHK(0x106a61b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b0 @ 0x106a62b0 (7 bytes, 3 insns) */
void f_106a62b0(void) {
  FTRACE(0x106a62b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a62b0 push edi */
  push32((uint32_t)(EDI));
  /* 106a62b1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 106a62b5 jmp 0x106a6321 */
  jmp_ind(0x106a6321u); return;
}

/* FUN_100062c0 @ 0x106a62c0 (224 bytes, 84 insns) */
void f_106a62c0(void) {
  FTRACE(0x106a62c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a62c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106a62c4 push edi */
  push32((uint32_t)(EDI));
  /* 106a62c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106a62cb je 0x106a62dc */
  if (C.zf) goto L_106a62dc;
L_106a62cd:;
  /* 106a62cd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 106a62cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106a62d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106a62d2 je 0x106a630f */
  if (C.zf) goto L_106a630f;
  /* 106a62d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106a62da jne 0x106a62cd */
  if (!C.zf) goto L_106a62cd;
L_106a62dc:;
  /* 106a62dc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106a62de mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106a62e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a62e5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a62e8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a62ea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a62ed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106a62f2 je 0x106a62dc */
  if (C.zf) goto L_106a62dc;
  /* 106a62f4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 106a62f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106a62f9 je 0x106a631e */
  if (C.zf) goto L_106a631e;
  /* 106a62fb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106a62fd je 0x106a6319 */
  if (C.zf) goto L_106a6319;
  /* 106a62ff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 106a6304 je 0x106a6314 */
  if (C.zf) goto L_106a6314;
  /* 106a6306 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 106a630b je 0x106a630f */
  if (C.zf) goto L_106a630f;
  /* 106a630d jmp 0x106a62dc */
  goto L_106a62dc;
L_106a630f:;
  /* 106a630f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 106a6312 jmp 0x106a6321 */
  goto L_106a6321;
L_106a6314:;
  /* 106a6314 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 106a6317 jmp 0x106a6321 */
  goto L_106a6321;
L_106a6319:;
  /* 106a6319 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 106a631c jmp 0x106a6321 */
  goto L_106a6321;
L_106a631e:;
  /* 106a631e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_106a6321:;
  /* 106a6321 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 106a6325 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106a632b je 0x106a6346 */
  if (C.zf) goto L_106a6346;
L_106a632d:;
  /* 106a632d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106a632f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106a6330 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 106a6332 je 0x106a6398 */
  if (C.zf) goto L_106a6398;
  /* 106a6334 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 106a6336 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106a6337 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106a633d jne 0x106a632d */
  if (!C.zf) goto L_106a632d;
  /* 106a633f jmp 0x106a6346 */
  goto L_106a6346;
L_106a6341:;
  /* 106a6341 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106a6343 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106a6346:;
  /* 106a6346 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106a634b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106a634d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a634f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a6352 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a6354 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a6356 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6359 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106a635e je 0x106a6341 */
  if (C.zf) goto L_106a6341;
  /* 106a6360 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 106a6362 je 0x106a6398 */
  if (C.zf) goto L_106a6398;
  /* 106a6364 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 106a6366 je 0x106a638f */
  if (C.zf) goto L_106a638f;
  /* 106a6368 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 106a636e je 0x106a6382 */
  if (C.zf) goto L_106a6382;
  /* 106a6370 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 106a6376 je 0x106a637a */
  if (C.zf) goto L_106a637a;
  /* 106a6378 jmp 0x106a6341 */
  goto L_106a6341;
L_106a637a:;
  /* 106a637a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106a637c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106a6380 pop edi */
  EDI = (pop32());
  /* 106a6381 ret  */
  ESPCHK(0x106a62c0u, _esp0);
  ESP += 4; return;
L_106a6382:;
  /* 106a6382 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 106a6385 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106a6389 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 106a638d pop edi */
  EDI = (pop32());
  /* 106a638e ret  */
  ESPCHK(0x106a62c0u, _esp0);
  ESP += 4; return;
L_106a638f:;
  /* 106a638f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 106a6392 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106a6396 pop edi */
  EDI = (pop32());
  /* 106a6397 ret  */
  ESPCHK(0x106a62c0u, _esp0);
  ESP += 4; return;
L_106a6398:;
  /* 106a6398 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 106a639a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106a639e pop edi */
  EDI = (pop32());
  /* 106a639f ret  */
  ESPCHK(0x106a62c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x106a63a0 (243 bytes, 91 insns) */
void f_106a63a0(void) {
  FTRACE(0x106a63a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a63a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a63a1 mov ebp, esp */
  EBP = (ESP);
  /* 106a63a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a63a6 push ebx */
  push32((uint32_t)(EBX));
  /* 106a63a7 push esi */
  push32((uint32_t)(ESI));
  /* 106a63a8 push edi */
  push32((uint32_t)(EDI));
  /* 106a63a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 106a63ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106a63af:;
  /* 106a63af cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a63b3 jne 0x106a63d3 */
  if (!C.zf) goto L_106a63d3;
  /* 106a63b5 push 0x106cae70 */
  push32((uint32_t)(0x106cae70u));
  /* 106a63ba push 0 */
  push32((uint32_t)(0x0u));
  /* 106a63bc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 106a63be push 0x106cae80 */
  push32((uint32_t)(0x106cae80u));
  /* 106a63c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a63c5 call 0x106a23c0 */
  push32(0x106a63cau); f_106a23c0();
  /* 106a63ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a63cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a63d0 jne 0x106a63d3 */
  if (!C.zf) goto L_106a63d3;
  /* 106a63d2 int3  */
  x86_unimpl("int3 @ 0x106a63d2");
L_106a63d3:;
  /* 106a63d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a63d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a63d7 jne 0x106a63af */
  if (!C.zf) goto L_106a63af;
L_106a63d9:;
  /* 106a63d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a63dd jne 0x106a63fd */
  if (!C.zf) goto L_106a63fd;
  /* 106a63df push 0x106cae54 */
  push32((uint32_t)(0x106cae54u));
  /* 106a63e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a63e6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 106a63e8 push 0x106cae80 */
  push32((uint32_t)(0x106cae80u));
  /* 106a63ed push 2 */
  push32((uint32_t)(0x2u));
  /* 106a63ef call 0x106a23c0 */
  push32(0x106a63f4u); f_106a23c0();
  /* 106a63f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a63f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a63fa jne 0x106a63fd */
  if (!C.zf) goto L_106a63fd;
  /* 106a63fc int3  */
  x86_unimpl("int3 @ 0x106a63fc");
L_106a63fd:;
  /* 106a63fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a63ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a6401 jne 0x106a63d9 */
  if (!C.zf) goto L_106a63d9;
  /* 106a6403 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6406 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 106a640d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6410 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6413 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106a6416 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6419 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a641c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106a641e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6421 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6424 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106a6427 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106a642a push ecx */
  push32((uint32_t)(ECX));
  /* 106a642b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a642e push edx */
  push32((uint32_t)(EDX));
  /* 106a642f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6432 push eax */
  push32((uint32_t)(EAX));
  /* 106a6433 call 0x106aa290 */
  push32(0x106a6438u); f_106aa290();
  /* 106a6438 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a643b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106a643e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6441 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a6444 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a6447 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a644a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106a644d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6450 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6454 jl 0x106a6478 */
  if ((C.sf!=C.of)) goto L_106a6478;
  /* 106a6456 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6459 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a645b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106a645e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106a6460 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106a6466 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106a6469 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a646c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a646e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6471 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a6474 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106a6476 jmp 0x106a6489 */
  goto L_106a6489;
L_106a6478:;
  /* 106a6478 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106a647b push edx */
  push32((uint32_t)(EDX));
  /* 106a647c push 0 */
  push32((uint32_t)(0x0u));
  /* 106a647e call 0x106aa010 */
  push32(0x106a6483u); f_106aa010();
  /* 106a6483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6486 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_106a6489:;
  /* 106a6489 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106a648c pop edi */
  EDI = (pop32());
  /* 106a648d pop esi */
  ESI = (pop32());
  /* 106a648e pop ebx */
  EBX = (pop32());
  /* 106a648f mov esp, ebp */
  ESP = (EBP);
  /* 106a6491 pop ebp */
  EBP = (pop32());
  /* 106a6492 ret  */
  ESPCHK(0x106a63a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x106a64a0 (47 bytes, 17 insns) */
void f_106a64a0(void) {
  FTRACE(0x106a64a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a64a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106a64a1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a64a6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 106a64aa jb 0x106a64c0 */
  if (C.cf) goto L_106a64c0;
L_106a64ac:;
  /* 106a64ac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a64b2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a64b7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 106a64b9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a64be jae 0x106a64ac */
  if (!C.cf) goto L_106a64ac;
L_106a64c0:;
  /* 106a64c0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a64c2 mov eax, esp */
  EAX = (ESP);
  /* 106a64c4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 106a64c6 mov esp, ecx */
  ESP = (ECX);
  /* 106a64c8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a64ca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a64cd push eax */
  push32((uint32_t)(EAX));
  /* 106a64ce ret  */
  ESPCHK(0x106a64a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x106a64d0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_106a64d0(void) {
  FTRACE(0x106a64d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a64d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a64d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a64d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a64d6 push esi */
  push32((uint32_t)(ESI));
  /* 106a64d7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a64db je 0x106a64e3 */
  if (C.zf) goto L_106a64e3;
  /* 106a64dd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a64e1 jne 0x106a64e8 */
  if (!C.zf) goto L_106a64e8;
L_106a64e3:;
  /* 106a64e3 jmp 0x106a66b8 */
  goto L_106a66b8;
L_106a64e8:;
  /* 106a64e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a64ec je 0x106a6504 */
  if (C.zf) goto L_106a6504;
  /* 106a64ee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a64f2 je 0x106a6504 */
  if (C.zf) goto L_106a6504;
  /* 106a64f4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a64f8 je 0x106a6504 */
  if (C.zf) goto L_106a6504;
  /* 106a64fa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a64fe jne 0x106a65e1 */
  if (!C.zf) goto L_106a65e1;
L_106a6504:;
  /* 106a6504 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a6506 call 0x106a6d00 */
  push32(0x106a650bu); f_106a6d00();
  /* 106a650b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a650e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6512 je 0x106a651a */
  if (C.zf) goto L_106a651a;
  /* 106a6514 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6518 jne 0x106a655f */
  if (!C.zf) goto L_106a655f;
L_106a651a:;
  /* 106a651a cmp dword ptr [0x106cf604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6521 jne 0x106a655f */
  if (!C.zf) goto L_106a655f;
  /* 106a6523 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a6525 push 0x106a6700 */
  push32((uint32_t)(0x106a6700u));
  /* 106a652a call dword ptr [0x106d134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d134c))), 0x106a6530u);
  /* 106a6530 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6533 jne 0x106a6541 */
  if (!C.zf) goto L_106a6541;
  /* 106a6535 mov dword ptr [0x106cf604], 1 */
  w32((uint32_t)(0x106cf604), (0x1u));
  /* 106a653f jmp 0x106a655f */
  goto L_106a655f;
L_106a6541:;
  /* 106a6541 call dword ptr [0x106d1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1304))), 0x106a6547u);
  /* 106a6547 mov esi, eax */
  ESI = (EAX);
  /* 106a6549 call 0x106ab1e0 */
  push32(0x106a654eu); f_106ab1e0();
  /* 106a654e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 106a6550 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a6552 call 0x106a6da0 */
  push32(0x106a6557u); f_106a6da0();
  /* 106a6557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a655a jmp 0x106a66b8 */
  goto L_106a66b8;
L_106a655f:;
  /* 106a655f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6562 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a6565 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6568 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a656b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106a656e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6572 ja 0x106a65d2 */
  if ((!C.cf&&!C.zf)) goto L_106a65d2;
  /* 106a6574 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6577 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a6579 mov dl, byte ptr [eax + 0x106a66df] */
  DL = (r8((uint32_t)(EAX + 0x106a66df)));
  /* 106a657f jmp dword ptr [edx*4 + 0x106a66cb] */
  switch (EDX) {
    case 0: goto L_106a6586;
    case 1: goto L_106a65c0;
    case 2: goto L_106a659a;
    case 3: goto L_106a65ad;
    case 4: goto L_106a65d2;
    default: x86_unimpl("switch@0x106a657f out of table"); return;
  }
L_106a6586:;
  /* 106a6586 mov ecx, dword ptr [0x106cf5f4] */
  ECX = (r32((uint32_t)(0x106cf5f4)));
  /* 106a658c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106a658f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6592 mov dword ptr [0x106cf5f4], edx */
  w32((uint32_t)(0x106cf5f4), (EDX));
  /* 106a6598 jmp 0x106a65d2 */
  goto L_106a65d2;
L_106a659a:;
  /* 106a659a mov eax, dword ptr [0x106cf5f8] */
  EAX = (r32((uint32_t)(0x106cf5f8)));
  /* 106a659f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a65a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a65a5 mov dword ptr [0x106cf5f8], ecx */
  w32((uint32_t)(0x106cf5f8), (ECX));
  /* 106a65ab jmp 0x106a65d2 */
  goto L_106a65d2;
L_106a65ad:;
  /* 106a65ad mov edx, dword ptr [0x106cf5fc] */
  EDX = (r32((uint32_t)(0x106cf5fc)));
  /* 106a65b3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106a65b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a65b9 mov dword ptr [0x106cf5fc], eax */
  w32((uint32_t)(0x106cf5fc), (EAX));
  /* 106a65be jmp 0x106a65d2 */
  goto L_106a65d2;
L_106a65c0:;
  /* 106a65c0 mov ecx, dword ptr [0x106cf600] */
  ECX = (r32((uint32_t)(0x106cf600)));
  /* 106a65c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106a65c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a65cc mov dword ptr [0x106cf600], edx */
  w32((uint32_t)(0x106cf600), (EDX));
L_106a65d2:;
  /* 106a65d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a65d4 call 0x106a6da0 */
  push32(0x106a65d9u); f_106a6da0();
  /* 106a65d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a65dc jmp 0x106a66b3 */
  goto L_106a66b3;
L_106a65e1:;
  /* 106a65e1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a65e5 je 0x106a65f8 */
  if (C.zf) goto L_106a65f8;
  /* 106a65e7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a65eb je 0x106a65f8 */
  if (C.zf) goto L_106a65f8;
  /* 106a65ed cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a65f1 je 0x106a65f8 */
  if (C.zf) goto L_106a65f8;
  /* 106a65f3 jmp 0x106a66b8 */
  goto L_106a66b8;
L_106a65f8:;
  /* 106a65f8 call 0x106a2d40 */
  push32(0x106a65fdu); f_106a2d40();
  /* 106a65fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a6600 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6603 cmp dword ptr [eax + 0x50], 0x106cdc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x106cdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a660a jne 0x106a6655 */
  if (!C.zf) goto L_106a6655;
  /* 106a660c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 106a6611 push 0x106cae8c */
  push32((uint32_t)(0x106cae8cu));
  /* 106a6616 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a6618 mov ecx, dword ptr [0x106cdc80] */
  ECX = (r32((uint32_t)(0x106cdc80)));
  /* 106a661e push ecx */
  push32((uint32_t)(ECX));
  /* 106a661f call 0x106a3300 */
  push32(0x106a6624u); f_106a3300();
  /* 106a6624 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a662a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 106a662d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6630 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6634 je 0x106a6653 */
  if (C.zf) goto L_106a6653;
  /* 106a6636 mov ecx, dword ptr [0x106cdc80] */
  ECX = (r32((uint32_t)(0x106cdc80)));
  /* 106a663c push ecx */
  push32((uint32_t)(ECX));
  /* 106a663d push 0x106cdc00 */
  push32((uint32_t)(0x106cdc00u));
  /* 106a6642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6645 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 106a6648 push eax */
  push32((uint32_t)(EAX));
  /* 106a6649 call 0x106a9be0 */
  push32(0x106a664eu); f_106a9be0();
  /* 106a664e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6651 jmp 0x106a6655 */
  goto L_106a6655;
L_106a6653:;
  /* 106a6653 jmp 0x106a66b8 */
  goto L_106a66b8;
L_106a6655:;
  /* 106a6655 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6658 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106a665b push edx */
  push32((uint32_t)(EDX));
  /* 106a665c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a665f push eax */
  push32((uint32_t)(EAX));
  /* 106a6660 call 0x106a69e0 */
  push32(0x106a6665u); f_106a69e0();
  /* 106a6665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6668 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a666b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a666f jne 0x106a6673 */
  if (!C.zf) goto L_106a6673;
  /* 106a6671 jmp 0x106a66b8 */
  goto L_106a66b8;
L_106a6673:;
  /* 106a6673 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6676 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106a6679 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106a667c:;
  /* 106a667c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a667f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a6682 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6685 jne 0x106a66b3 */
  if (!C.zf) goto L_106a66b3;
  /* 106a6687 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a668a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a668d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106a6690 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6693 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6696 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106a6699 mov edx, dword ptr [0x106cdc84] */
  EDX = (r32((uint32_t)(0x106cdc84)));
  /* 106a669f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a66a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a66a5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 106a66a8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a66aa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a66ad jb 0x106a66b1 */
  if (C.cf) goto L_106a66b1;
  /* 106a66af jmp 0x106a66b3 */
  goto L_106a66b3;
L_106a66b1:;
  /* 106a66b1 jmp 0x106a667c */
  goto L_106a667c;
L_106a66b3:;
  /* 106a66b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a66b6 jmp 0x106a66c6 */
  goto L_106a66c6;
L_106a66b8:;
  /* 106a66b8 call 0x106ab1d0 */
  push32(0x106a66bdu); f_106ab1d0();
  /* 106a66bd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 106a66c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106a66c6:;
  /* 106a66c6 pop esi */
  ESI = (pop32());
  /* 106a66c7 mov esp, ebp */
  ESP = (EBP);
  /* 106a66c9 pop ebp */
  EBP = (pop32());
  /* 106a66ca ret  */
  ESPCHK(0x106a64d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x106a6700 (146 bytes, 45 insns) */
void f_106a6700(void) {
  FTRACE(0x106a6700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6700 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6701 mov ebp, esp */
  EBP = (ESP);
  /* 106a6703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a6706 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a6708 call 0x106a6d00 */
  push32(0x106a670du); f_106a6d00();
  /* 106a670d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6710 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6714 jne 0x106a672e */
  if (!C.zf) goto L_106a672e;
  /* 106a6716 mov dword ptr [ebp - 8], 0x106cf5f4 */
  w32((uint32_t)(EBP + -0x8), (0x106cf5f4u));
  /* 106a671d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6720 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106a6722 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106a6725 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106a672c jmp 0x106a6744 */
  goto L_106a6744;
L_106a672e:;
  /* 106a672e mov dword ptr [ebp - 8], 0x106cf5f8 */
  w32((uint32_t)(EBP + -0x8), (0x106cf5f8u));
  /* 106a6735 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6738 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a673a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a673d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_106a6744:;
  /* 106a6744 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6748 jne 0x106a6758 */
  if (!C.zf) goto L_106a6758;
  /* 106a674a push 1 */
  push32((uint32_t)(0x1u));
  /* 106a674c call 0x106a6da0 */
  push32(0x106a6751u); f_106a6da0();
  /* 106a6751 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a6756 jmp 0x106a678c */
  goto L_106a678c;
L_106a6758:;
  /* 106a6758 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a675c je 0x106a677d */
  if (C.zf) goto L_106a677d;
  /* 106a675e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6761 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 106a6767 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a6769 call 0x106a6da0 */
  push32(0x106a676eu); f_106a6da0();
  /* 106a676e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6771 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6774 push edx */
  push32((uint32_t)(EDX));
  /* 106a6775 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x106a6778u);
  /* 106a6778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a677b jmp 0x106a6787 */
  goto L_106a6787;
L_106a677d:;
  /* 106a677d push 1 */
  push32((uint32_t)(0x1u));
  /* 106a677f call 0x106a6da0 */
  push32(0x106a6784u); f_106a6da0();
  /* 106a6784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a6787:;
  /* 106a6787 mov eax, 1 */
  EAX = (0x1u);
L_106a678c:;
  /* 106a678c mov esp, ebp */
  ESP = (EBP);
  /* 106a678e pop ebp */
  EBP = (pop32());
  /* 106a678f ret 4 */
  ESPCHK(0x106a6700u, _esp0);
  ESP += 8; return;
}

/* FUN_100067a0 @ 0x106a67a0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_106a67a0(void) {
  FTRACE(0x106a67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a67a1 mov ebp, esp */
  EBP = (ESP);
  /* 106a67a3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a67a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106a67ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a67b0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106a67b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a67b6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a67b9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106a67bc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a67c0 ja 0x106a686e */
  if ((!C.cf&&!C.zf)) goto L_106a686e;
  /* 106a67c6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106a67c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a67cb mov dl, byte ptr [eax + 0x106a69c2] */
  DL = (r8((uint32_t)(EAX + 0x106a69c2)));
  /* 106a67d1 jmp dword ptr [edx*4 + 0x106a69aa] */
  switch (EDX) {
    case 0: goto L_106a67d8;
    case 1: goto L_106a6843;
    case 2: goto L_106a6829;
    case 3: goto L_106a67f5;
    case 4: goto L_106a680f;
    case 5: goto L_106a686e;
    default: x86_unimpl("switch@0x106a67d1 out of table"); return;
  }
L_106a67d8:;
  /* 106a67d8 mov dword ptr [ebp - 0x18], 0x106cf5f4 */
  w32((uint32_t)(EBP + -0x18), (0x106cf5f4u));
  /* 106a67df mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a67e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a67e4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106a67e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a67ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a67ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a67f0 jmp 0x106a6876 */
  goto L_106a6876;
L_106a67f5:;
  /* 106a67f5 mov dword ptr [ebp - 0x18], 0x106cf5f8 */
  w32((uint32_t)(EBP + -0x18), (0x106cf5f8u));
  /* 106a67fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a67ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a6801 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106a6804 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a6807 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a680a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a680d jmp 0x106a6876 */
  goto L_106a6876;
L_106a680f:;
  /* 106a680f mov dword ptr [ebp - 0x18], 0x106cf5fc */
  w32((uint32_t)(EBP + -0x18), (0x106cf5fcu));
  /* 106a6816 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a6819 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a681b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106a681e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a6821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6824 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a6827 jmp 0x106a6876 */
  goto L_106a6876;
L_106a6829:;
  /* 106a6829 mov dword ptr [ebp - 0x18], 0x106cf600 */
  w32((uint32_t)(EBP + -0x18), (0x106cf600u));
  /* 106a6830 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a6833 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a6835 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106a6838 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a683b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a683e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a6841 jmp 0x106a6876 */
  goto L_106a6876;
L_106a6843:;
  /* 106a6843 call 0x106a2d40 */
  push32(0x106a6848u); f_106a2d40();
  /* 106a6848 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a684b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a684e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106a6851 push edx */
  push32((uint32_t)(EDX));
  /* 106a6852 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6855 push eax */
  push32((uint32_t)(EAX));
  /* 106a6856 call 0x106a69e0 */
  push32(0x106a685bu); f_106a69e0();
  /* 106a685b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a685e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6861 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106a6864 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a6867 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a6869 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106a686c jmp 0x106a6876 */
  goto L_106a6876;
L_106a686e:;
  /* 106a686e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a6871 jmp 0x106a69a6 */
  goto L_106a69a6;
L_106a6876:;
  /* 106a6876 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a687a je 0x106a6886 */
  if (C.zf) goto L_106a6886;
  /* 106a687c push 1 */
  push32((uint32_t)(0x1u));
  /* 106a687e call 0x106a6d00 */
  push32(0x106a6883u); f_106a6d00();
  /* 106a6883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a6886:;
  /* 106a6886 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a688a jne 0x106a68a3 */
  if (!C.zf) goto L_106a68a3;
  /* 106a688c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6890 je 0x106a689c */
  if (C.zf) goto L_106a689c;
  /* 106a6892 push 1 */
  push32((uint32_t)(0x1u));
  /* 106a6894 call 0x106a6da0 */
  push32(0x106a6899u); f_106a6da0();
  /* 106a6899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a689c:;
  /* 106a689c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a689e jmp 0x106a69a6 */
  goto L_106a69a6;
L_106a68a3:;
  /* 106a68a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a68a7 jne 0x106a68c0 */
  if (!C.zf) goto L_106a68c0;
  /* 106a68a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a68ad je 0x106a68b9 */
  if (C.zf) goto L_106a68b9;
  /* 106a68af push 1 */
  push32((uint32_t)(0x1u));
  /* 106a68b1 call 0x106a6da0 */
  push32(0x106a68b6u); f_106a6da0();
  /* 106a68b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a68b9:;
  /* 106a68b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 106a68bb call 0x106a2ac0 */
  push32(0x106a68c0u); f_106a2ac0();
L_106a68c0:;
  /* 106a68c0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a68c4 je 0x106a68d2 */
  if (C.zf) goto L_106a68d2;
  /* 106a68c6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a68ca je 0x106a68d2 */
  if (C.zf) goto L_106a68d2;
  /* 106a68cc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a68d0 jne 0x106a68fe */
  if (!C.zf) goto L_106a68fe;
L_106a68d2:;
  /* 106a68d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a68d5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 106a68d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106a68db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a68de mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 106a68e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a68e9 jne 0x106a68fe */
  if (!C.zf) goto L_106a68fe;
  /* 106a68eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a68ee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 106a68f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106a68f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a68f7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_106a68fe:;
  /* 106a68fe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6902 jne 0x106a6940 */
  if (!C.zf) goto L_106a6940;
  /* 106a6904 mov eax, dword ptr [0x106cdc78] */
  EAX = (r32((uint32_t)(0x106cdc78)));
  /* 106a6909 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a690c jmp 0x106a6917 */
  goto L_106a6917;
L_106a690e:;
  /* 106a690e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6911 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6914 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106a6917:;
  /* 106a6917 mov edx, dword ptr [0x106cdc78] */
  EDX = (r32((uint32_t)(0x106cdc78)));
  /* 106a691d add edx, dword ptr [0x106cdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106cdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6923 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6926 jge 0x106a693e */
  if ((C.sf==C.of)) goto L_106a693e;
  /* 106a6928 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a692b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a692e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6931 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106a6934 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 106a693c jmp 0x106a690e */
  goto L_106a690e;
L_106a693e:;
  /* 106a693e jmp 0x106a6949 */
  goto L_106a6949;
L_106a6940:;
  /* 106a6940 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a6943 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106a6949:;
  /* 106a6949 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a694d je 0x106a6959 */
  if (C.zf) goto L_106a6959;
  /* 106a694f push 1 */
  push32((uint32_t)(0x1u));
  /* 106a6951 call 0x106a6da0 */
  push32(0x106a6956u); f_106a6da0();
  /* 106a6956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a6959:;
  /* 106a6959 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a695d jne 0x106a6970 */
  if (!C.zf) goto L_106a6970;
  /* 106a695f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6962 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 106a6965 push edx */
  push32((uint32_t)(EDX));
  /* 106a6966 push 8 */
  push32((uint32_t)(0x8u));
  /* 106a6968 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x106a696bu);
  /* 106a696b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a696e jmp 0x106a697a */
  goto L_106a697a;
L_106a6970:;
  /* 106a6970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6973 push eax */
  push32((uint32_t)(EAX));
  /* 106a6974 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x106a6977u);
  /* 106a6977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a697a:;
  /* 106a697a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a697e je 0x106a698c */
  if (C.zf) goto L_106a698c;
  /* 106a6980 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6984 je 0x106a698c */
  if (C.zf) goto L_106a698c;
  /* 106a6986 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a698a jne 0x106a69a4 */
  if (!C.zf) goto L_106a69a4;
L_106a698c:;
  /* 106a698c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a698f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a6992 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 106a6995 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6999 jne 0x106a69a4 */
  if (!C.zf) goto L_106a69a4;
  /* 106a699b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a699e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a69a1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_106a69a4:;
  /* 106a69a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a69a6:;
  /* 106a69a6 mov esp, ebp */
  ESP = (EBP);
  /* 106a69a8 pop ebp */
  EBP = (pop32());
  /* 106a69a9 ret  */
  ESPCHK(0x106a67a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069e0 @ 0x106a69e0 (91 bytes, 35 insns) */
void f_106a69e0(void) {
  FTRACE(0x106a69e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a69e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a69e1 mov ebp, esp */
  EBP = (ESP);
  /* 106a69e3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a69e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a69e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a69ea:;
  /* 106a69ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a69ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106a69f0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a69f3 je 0x106a6a13 */
  if (C.zf) goto L_106a6a13;
  /* 106a69f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a69f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a69fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a69fe mov ecx, dword ptr [0x106cdc84] */
  ECX = (r32((uint32_t)(0x106cdc84)));
  /* 106a6a04 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a6a07 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6a0a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6a0c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6a0f jae 0x106a6a13 */
  if (!C.cf) goto L_106a6a13;
  /* 106a6a11 jmp 0x106a69ea */
  goto L_106a69ea;
L_106a6a13:;
  /* 106a6a13 mov eax, dword ptr [0x106cdc84] */
  EAX = (r32((uint32_t)(0x106cdc84)));
  /* 106a6a18 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a6a1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6a1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6a20 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6a23 jae 0x106a6a35 */
  if (!C.cf) goto L_106a6a35;
  /* 106a6a25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6a28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106a6a2b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6a2e jne 0x106a6a35 */
  if (!C.zf) goto L_106a6a35;
  /* 106a6a30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6a33 jmp 0x106a6a37 */
  goto L_106a6a37;
L_106a6a35:;
  /* 106a6a35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a6a37:;
  /* 106a6a37 mov esp, ebp */
  ESP = (EBP);
  /* 106a6a39 pop ebp */
  EBP = (pop32());
  /* 106a6a3a ret  */
  ESPCHK(0x106a69e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x106a6a40 (13 bytes, 6 insns) */
void f_106a6a40(void) {
  FTRACE(0x106a6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6a41 mov ebp, esp */
  EBP = (ESP);
  /* 106a6a43 call 0x106a2d40 */
  push32(0x106a6a48u); f_106a2d40();
  /* 106a6a48 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6a4b pop ebp */
  EBP = (pop32());
  /* 106a6a4c ret  */
  ESPCHK(0x106a6a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x106a6a50 (13 bytes, 6 insns) */
void f_106a6a50(void) {
  FTRACE(0x106a6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6a51 mov ebp, esp */
  EBP = (ESP);
  /* 106a6a53 call 0x106a2d40 */
  push32(0x106a6a58u); f_106a2d40();
  /* 106a6a58 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6a5b pop ebp */
  EBP = (pop32());
  /* 106a6a5c ret  */
  ESPCHK(0x106a6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a60 @ 0x106a6a60 (187 bytes, 54 insns) */
void f_106a6a60(void) {
  FTRACE(0x106a6a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6a60 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6a61 mov ebp, esp */
  EBP = (ESP);
  /* 106a6a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a6a66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a6a6d cmp dword ptr [0x106cf608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6a74 jne 0x106a6ad3 */
  if (!C.zf) goto L_106a6ad3;
  /* 106a6a76 push 0x106ca2b8 */
  push32((uint32_t)(0x106ca2b8u));
  /* 106a6a7b call dword ptr [0x106d12d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d4))), 0x106a6a81u);
  /* 106a6a81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a6a84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6a88 je 0x106a6aa7 */
  if (C.zf) goto L_106a6aa7;
  /* 106a6a8a push 0x106caebc */
  push32((uint32_t)(0x106caebcu));
  /* 106a6a8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6a92 push eax */
  push32((uint32_t)(EAX));
  /* 106a6a93 call dword ptr [0x106d12d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d0))), 0x106a6a99u);
  /* 106a6a99 mov dword ptr [0x106cf608], eax */
  w32((uint32_t)(0x106cf608), (EAX));
  /* 106a6a9e cmp dword ptr [0x106cf608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6aa5 jne 0x106a6aab */
  if (!C.zf) goto L_106a6aab;
L_106a6aa7:;
  /* 106a6aa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a6aa9 jmp 0x106a6b17 */
  goto L_106a6b17;
L_106a6aab:;
  /* 106a6aab push 0x106caeac */
  push32((uint32_t)(0x106caeacu));
  /* 106a6ab0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6ab4 call dword ptr [0x106d12d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d0))), 0x106a6abau);
  /* 106a6aba mov dword ptr [0x106cf60c], eax */
  w32((uint32_t)(0x106cf60c), (EAX));
  /* 106a6abf push 0x106cae98 */
  push32((uint32_t)(0x106cae98u));
  /* 106a6ac4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6ac7 push edx */
  push32((uint32_t)(EDX));
  /* 106a6ac8 call dword ptr [0x106d12d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12d0))), 0x106a6aceu);
  /* 106a6ace mov dword ptr [0x106cf610], eax */
  w32((uint32_t)(0x106cf610), (EAX));
L_106a6ad3:;
  /* 106a6ad3 cmp dword ptr [0x106cf60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6ada je 0x106a6ae5 */
  if (C.zf) goto L_106a6ae5;
  /* 106a6adc call dword ptr [0x106cf60c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf60c))), 0x106a6ae2u);
  /* 106a6ae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a6ae5:;
  /* 106a6ae5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6ae9 je 0x106a6b01 */
  if (C.zf) goto L_106a6b01;
  /* 106a6aeb cmp dword ptr [0x106cf610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6af2 je 0x106a6b01 */
  if (C.zf) goto L_106a6b01;
  /* 106a6af4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6af7 push eax */
  push32((uint32_t)(EAX));
  /* 106a6af8 call dword ptr [0x106cf610] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf610))), 0x106a6afeu);
  /* 106a6afe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a6b01:;
  /* 106a6b01 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106a6b04 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6b05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6b08 push edx */
  push32((uint32_t)(EDX));
  /* 106a6b09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6b0c push eax */
  push32((uint32_t)(EAX));
  /* 106a6b0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6b10 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6b11 call dword ptr [0x106cf608] */
  call_ind((uint32_t)(r32((uint32_t)(0x106cf608))), 0x106a6b17u);
L_106a6b17:;
  /* 106a6b17 mov esp, ebp */
  ESP = (EBP);
  /* 106a6b19 pop ebp */
  EBP = (pop32());
  /* 106a6b1a ret  */
  ESPCHK(0x106a6a60u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x106a6b20 (254 bytes, 109 insns) */
void f_106a6b20(void) {
  FTRACE(0x106a6b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6b20 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 106a6b24 push edi */
  push32((uint32_t)(EDI));
  /* 106a6b25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106a6b27 je 0x106a6ba3 */
  if (C.zf) goto L_106a6ba3;
  /* 106a6b29 push esi */
  push32((uint32_t)(ESI));
  /* 106a6b2a push ebx */
  push32((uint32_t)(EBX));
  /* 106a6b2b mov ebx, ecx */
  EBX = (ECX);
  /* 106a6b2d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 106a6b31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 106a6b37 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 106a6b3b jne 0x106a6b44 */
  if (!C.zf) goto L_106a6b44;
  /* 106a6b3d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a6b40 jne 0x106a6bb1 */
  if (!C.zf) goto L_106a6bb1;
  /* 106a6b42 jmp 0x106a6b65 */
  goto L_106a6b65;
L_106a6b44:;
  /* 106a6b44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106a6b46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106a6b47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a6b49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106a6b4a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106a6b4b je 0x106a6b72 */
  if (C.zf) goto L_106a6b72;
  /* 106a6b4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106a6b4f je 0x106a6b7a */
  if (C.zf) goto L_106a6b7a;
  /* 106a6b51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 106a6b57 jne 0x106a6b44 */
  if (!C.zf) goto L_106a6b44;
  /* 106a6b59 mov ebx, ecx */
  EBX = (ECX);
  /* 106a6b5b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a6b5e jne 0x106a6bb1 */
  if (!C.zf) goto L_106a6bb1;
L_106a6b60:;
  /* 106a6b60 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 106a6b63 je 0x106a6b72 */
  if (C.zf) goto L_106a6b72;
L_106a6b65:;
  /* 106a6b65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106a6b67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106a6b68 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a6b6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106a6b6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106a6b6d je 0x106a6b9e */
  if (C.zf) goto L_106a6b9e;
  /* 106a6b6f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 106a6b70 jne 0x106a6b65 */
  if (!C.zf) goto L_106a6b65;
L_106a6b72:;
  /* 106a6b72 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106a6b76 pop ebx */
  EBX = (pop32());
  /* 106a6b77 pop esi */
  ESI = (pop32());
  /* 106a6b78 pop edi */
  EDI = (pop32());
  /* 106a6b79 ret  */
  ESPCHK(0x106a6b20u, _esp0);
  ESP += 4; return;
L_106a6b7a:;
  /* 106a6b7a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106a6b80 je 0x106a6b94 */
  if (C.zf) goto L_106a6b94;
L_106a6b82:;
  /* 106a6b82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a6b84 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106a6b85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106a6b86 je 0x106a6c16 */
  if (C.zf) goto L_106a6c16;
  /* 106a6b8c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106a6b92 jne 0x106a6b82 */
  if (!C.zf) goto L_106a6b82;
L_106a6b94:;
  /* 106a6b94 mov ebx, ecx */
  EBX = (ECX);
  /* 106a6b96 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a6b99 jne 0x106a6c07 */
  if (!C.zf) goto L_106a6c07;
L_106a6b9b:;
  /* 106a6b9b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a6b9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_106a6b9e:;
  /* 106a6b9e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 106a6b9f jne 0x106a6b9b */
  if (!C.zf) goto L_106a6b9b;
  /* 106a6ba1 pop ebx */
  EBX = (pop32());
  /* 106a6ba2 pop esi */
  ESI = (pop32());
L_106a6ba3:;
  /* 106a6ba3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106a6ba7 pop edi */
  EDI = (pop32());
  /* 106a6ba8 ret  */
  ESPCHK(0x106a6b20u, _esp0);
  ESP += 4; return;
L_106a6ba9:;
  /* 106a6ba9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106a6bab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6bae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106a6baf je 0x106a6b60 */
  if (C.zf) goto L_106a6b60;
L_106a6bb1:;
  /* 106a6bb1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106a6bb6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 106a6bb8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6bba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a6bbd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106a6bbf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 106a6bc1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6bc4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106a6bc9 je 0x106a6ba9 */
  if (C.zf) goto L_106a6ba9;
  /* 106a6bcb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 106a6bcd je 0x106a6bfb */
  if (C.zf) goto L_106a6bfb;
  /* 106a6bcf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 106a6bd1 je 0x106a6bf1 */
  if (C.zf) goto L_106a6bf1;
  /* 106a6bd3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 106a6bd9 je 0x106a6be7 */
  if (C.zf) goto L_106a6be7;
  /* 106a6bdb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 106a6be1 jne 0x106a6ba9 */
  if (!C.zf) goto L_106a6ba9;
  /* 106a6be3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106a6be5 jmp 0x106a6bff */
  goto L_106a6bff;
L_106a6be7:;
  /* 106a6be7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a6bed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106a6bef jmp 0x106a6bff */
  goto L_106a6bff;
L_106a6bf1:;
  /* 106a6bf1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106a6bf7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106a6bf9 jmp 0x106a6bff */
  goto L_106a6bff;
L_106a6bfb:;
  /* 106a6bfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106a6bfd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_106a6bff:;
  /* 106a6bff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6c02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a6c04 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106a6c05 je 0x106a6c11 */
  if (C.zf) goto L_106a6c11;
L_106a6c07:;
  /* 106a6c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106a6c09:;
  /* 106a6c09 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 106a6c0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6c0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106a6c0f jne 0x106a6c09 */
  if (!C.zf) goto L_106a6c09;
L_106a6c11:;
  /* 106a6c11 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 106a6c14 jne 0x106a6b9b */
  if (!C.zf) goto L_106a6b9b;
L_106a6c16:;
  /* 106a6c16 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106a6c1a pop ebx */
  EBX = (pop32());
  /* 106a6c1b pop esi */
  ESI = (pop32());
  /* 106a6c1c pop edi */
  EDI = (pop32());
  /* 106a6c1d ret  */
  ESPCHK(0x106a6b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x106a6c20 (55 bytes, 16 insns) */
void f_106a6c20(void) {
  FTRACE(0x106a6c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6c20 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6c21 mov ebp, esp */
  EBP = (ESP);
  /* 106a6c23 mov eax, dword ptr [0x106cdb84] */
  EAX = (r32((uint32_t)(0x106cdb84)));
  /* 106a6c28 push eax */
  push32((uint32_t)(EAX));
  /* 106a6c29 call dword ptr [0x106d1350] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1350))), 0x106a6c2fu);
  /* 106a6c2f mov ecx, dword ptr [0x106cdb74] */
  ECX = (r32((uint32_t)(0x106cdb74)));
  /* 106a6c35 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6c36 call dword ptr [0x106d1350] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1350))), 0x106a6c3cu);
  /* 106a6c3c mov edx, dword ptr [0x106cdb64] */
  EDX = (r32((uint32_t)(0x106cdb64)));
  /* 106a6c42 push edx */
  push32((uint32_t)(EDX));
  /* 106a6c43 call dword ptr [0x106d1350] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1350))), 0x106a6c49u);
  /* 106a6c49 mov eax, dword ptr [0x106cdb44] */
  EAX = (r32((uint32_t)(0x106cdb44)));
  /* 106a6c4e push eax */
  push32((uint32_t)(EAX));
  /* 106a6c4f call dword ptr [0x106d1350] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1350))), 0x106a6c55u);
  /* 106a6c55 pop ebp */
  EBP = (pop32());
  /* 106a6c56 ret  */
  ESPCHK(0x106a6c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c60 @ 0x106a6c60 (159 bytes, 47 insns) */
void f_106a6c60(void) {
  FTRACE(0x106a6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6c60 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6c61 mov ebp, esp */
  EBP = (ESP);
  /* 106a6c63 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6c64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a6c6b jmp 0x106a6c76 */
  goto L_106a6c76;
L_106a6c6d:;
  /* 106a6c6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6c70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6c73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a6c76:;
  /* 106a6c76 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6c7a jge 0x106a6cc9 */
  if ((C.sf==C.of)) goto L_106a6cc9;
  /* 106a6c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6c7f cmp dword ptr [ecx*4 + 0x106cdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x106cdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6c87 je 0x106a6cc7 */
  if (C.zf) goto L_106a6cc7;
  /* 106a6c89 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6c8d je 0x106a6cc7 */
  if (C.zf) goto L_106a6cc7;
  /* 106a6c8f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6c93 je 0x106a6cc7 */
  if (C.zf) goto L_106a6cc7;
  /* 106a6c95 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6c99 je 0x106a6cc7 */
  if (C.zf) goto L_106a6cc7;
  /* 106a6c9b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6c9f je 0x106a6cc7 */
  if (C.zf) goto L_106a6cc7;
  /* 106a6ca1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6ca4 mov eax, dword ptr [edx*4 + 0x106cdb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x106cdb40)));
  /* 106a6cab push eax */
  push32((uint32_t)(EAX));
  /* 106a6cac call dword ptr [0x106d125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d125c))), 0x106a6cb2u);
  /* 106a6cb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106a6cb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6cb7 mov edx, dword ptr [ecx*4 + 0x106cdb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x106cdb40)));
  /* 106a6cbe push edx */
  push32((uint32_t)(EDX));
  /* 106a6cbf call 0x106a3d90 */
  push32(0x106a6cc4u); f_106a3d90();
  /* 106a6cc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a6cc7:;
  /* 106a6cc7 jmp 0x106a6c6d */
  goto L_106a6c6d;
L_106a6cc9:;
  /* 106a6cc9 mov eax, dword ptr [0x106cdb64] */
  EAX = (r32((uint32_t)(0x106cdb64)));
  /* 106a6cce push eax */
  push32((uint32_t)(EAX));
  /* 106a6ccf call dword ptr [0x106d125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d125c))), 0x106a6cd5u);
  /* 106a6cd5 mov ecx, dword ptr [0x106cdb74] */
  ECX = (r32((uint32_t)(0x106cdb74)));
  /* 106a6cdb push ecx */
  push32((uint32_t)(ECX));
  /* 106a6cdc call dword ptr [0x106d125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d125c))), 0x106a6ce2u);
  /* 106a6ce2 mov edx, dword ptr [0x106cdb84] */
  EDX = (r32((uint32_t)(0x106cdb84)));
  /* 106a6ce8 push edx */
  push32((uint32_t)(EDX));
  /* 106a6ce9 call dword ptr [0x106d125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d125c))), 0x106a6cefu);
  /* 106a6cef mov eax, dword ptr [0x106cdb44] */
  EAX = (r32((uint32_t)(0x106cdb44)));
  /* 106a6cf4 push eax */
  push32((uint32_t)(EAX));
  /* 106a6cf5 call dword ptr [0x106d125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d125c))), 0x106a6cfbu);
  /* 106a6cfb mov esp, ebp */
  ESP = (EBP);
  /* 106a6cfd pop ebp */
  EBP = (pop32());
  /* 106a6cfe ret  */
  ESPCHK(0x106a6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d00 @ 0x106a6d00 (151 bytes, 46 insns) */
void f_106a6d00(void) {
  FTRACE(0x106a6d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6d00 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6d01 mov ebp, esp */
  EBP = (ESP);
  /* 106a6d03 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6d07 cmp dword ptr [eax*4 + 0x106cdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x106cdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6d0f jne 0x106a6d82 */
  if (!C.zf) goto L_106a6d82;
  /* 106a6d11 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 106a6d16 push 0x106caec8 */
  push32((uint32_t)(0x106caec8u));
  /* 106a6d1b push 2 */
  push32((uint32_t)(0x2u));
  /* 106a6d1d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 106a6d1f call 0x106a3300 */
  push32(0x106a6d24u); f_106a3300();
  /* 106a6d24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6d27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a6d2a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6d2e jne 0x106a6d3a */
  if (!C.zf) goto L_106a6d3a;
  /* 106a6d30 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106a6d32 call 0x106a2270 */
  push32(0x106a6d37u); f_106a2270();
  /* 106a6d37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a6d3a:;
  /* 106a6d3a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106a6d3c call 0x106a6d00 */
  push32(0x106a6d41u); f_106a6d00();
  /* 106a6d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6d44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6d47 cmp dword ptr [ecx*4 + 0x106cdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x106cdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6d4f jne 0x106a6d6a */
  if (!C.zf) goto L_106a6d6a;
  /* 106a6d51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6d54 push edx */
  push32((uint32_t)(EDX));
  /* 106a6d55 call dword ptr [0x106d1350] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1350))), 0x106a6d5bu);
  /* 106a6d5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6d5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6d61 mov dword ptr [eax*4 + 0x106cdb40], ecx */
  w32((uint32_t)(EAX*4 + 0x106cdb40), (ECX));
  /* 106a6d68 jmp 0x106a6d78 */
  goto L_106a6d78;
L_106a6d6a:;
  /* 106a6d6a push 2 */
  push32((uint32_t)(0x2u));
  /* 106a6d6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6d6f push edx */
  push32((uint32_t)(EDX));
  /* 106a6d70 call 0x106a3d90 */
  push32(0x106a6d75u); f_106a3d90();
  /* 106a6d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a6d78:;
  /* 106a6d78 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106a6d7a call 0x106a6da0 */
  push32(0x106a6d7fu); f_106a6da0();
  /* 106a6d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a6d82:;
  /* 106a6d82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6d85 mov ecx, dword ptr [eax*4 + 0x106cdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x106cdb40)));
  /* 106a6d8c push ecx */
  push32((uint32_t)(ECX));
  /* 106a6d8d call dword ptr [0x106d1354] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1354))), 0x106a6d93u);
  /* 106a6d93 mov esp, ebp */
  ESP = (EBP);
  /* 106a6d95 pop ebp */
  EBP = (pop32());
  /* 106a6d96 ret  */
  ESPCHK(0x106a6d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x106a6da0 (22 bytes, 8 insns) */
void f_106a6da0(void) {
  FTRACE(0x106a6da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6da0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6da1 mov ebp, esp */
  EBP = (ESP);
  /* 106a6da3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6da6 mov ecx, dword ptr [eax*4 + 0x106cdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x106cdb40)));
  /* 106a6dad push ecx */
  push32((uint32_t)(ECX));
  /* 106a6dae call dword ptr [0x106d1358] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1358))), 0x106a6db4u);
  /* 106a6db4 pop ebp */
  EBP = (pop32());
  /* 106a6db5 ret  */
  ESPCHK(0x106a6da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x106a6dc0 (26 bytes, 10 insns) */
void f_106a6dc0(void) {
  FTRACE(0x106a6dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6dc1 mov ebp, esp */
  EBP = (ESP);
  /* 106a6dc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6dc6 push eax */
  push32((uint32_t)(EAX));
  /* 106a6dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a6dc9 call dword ptr [0x106d135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d135c))), 0x106a6dcfu);
  /* 106a6dcf push 0xff */
  push32((uint32_t)(0xffu));
  /* 106a6dd4 call dword ptr [0x106d12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d12e0))), 0x106a6ddau);
  /* 106a6dda pop ebp */
  EBP = (pop32());
  /* 106a6ddb ret  */
  ESPCHK(0x106a6dc0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x106a6de0 (446 bytes, 130 insns) */
void f_106a6de0(void) {
  FTRACE(0x106a6de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6de0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6de1 mov ebp, esp */
  EBP = (ESP);
  /* 106a6de3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a6de6 call 0x106a2d40 */
  push32(0x106a6debu); f_106a2d40();
  /* 106a6deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a6dee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6df1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 106a6df4 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6df5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a6df8 push edx */
  push32((uint32_t)(EDX));
  /* 106a6df9 call 0x106a6fa0 */
  push32(0x106a6dfeu); f_106a6fa0();
  /* 106a6dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6e01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a6e04 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6e08 je 0x106a6e13 */
  if (C.zf) goto L_106a6e13;
  /* 106a6e0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6e0d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6e11 jne 0x106a6e22 */
  if (!C.zf) goto L_106a6e22;
L_106a6e13:;
  /* 106a6e13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6e16 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6e17 call dword ptr [0x106d1360] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1360))), 0x106a6e1du);
  /* 106a6e1d jmp 0x106a6f9a */
  goto L_106a6f9a;
L_106a6e22:;
  /* 106a6e22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6e25 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6e29 jne 0x106a6e3f */
  if (!C.zf) goto L_106a6e3f;
  /* 106a6e2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6e2e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 106a6e35 mov eax, 1 */
  EAX = (0x1u);
  /* 106a6e3a jmp 0x106a6f9a */
  goto L_106a6f9a;
L_106a6e3f:;
  /* 106a6e3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6e42 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6e46 jne 0x106a6e50 */
  if (!C.zf) goto L_106a6e50;
  /* 106a6e48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106a6e4b jmp 0x106a6f9a */
  goto L_106a6f9a;
L_106a6e50:;
  /* 106a6e50 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6e53 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106a6e56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a6e59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6e5c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 106a6e5f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106a6e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6e65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6e68 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 106a6e6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6e6e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6e72 jne 0x106a6f77 */
  if (!C.zf) goto L_106a6f77;
  /* 106a6e78 mov eax, dword ptr [0x106cdc78] */
  EAX = (r32((uint32_t)(0x106cdc78)));
  /* 106a6e7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106a6e80 jmp 0x106a6e8b */
  goto L_106a6e8b;
L_106a6e82:;
  /* 106a6e82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a6e85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6e88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106a6e8b:;
  /* 106a6e8b mov edx, dword ptr [0x106cdc78] */
  EDX = (r32((uint32_t)(0x106cdc78)));
  /* 106a6e91 add edx, dword ptr [0x106cdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x106cdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6e97 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6e9a jge 0x106a6eb2 */
  if ((C.sf==C.of)) goto L_106a6eb2;
  /* 106a6e9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a6e9f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a6ea2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6ea5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106a6ea8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 106a6eb0 jmp 0x106a6e82 */
  goto L_106a6e82;
L_106a6eb2:;
  /* 106a6eb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6eb5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 106a6eb8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106a6ebb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6ebe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6ec4 jne 0x106a6ed5 */
  if (!C.zf) goto L_106a6ed5;
  /* 106a6ec6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6ec9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 106a6ed0 jmp 0x106a6f5d */
  goto L_106a6f5d;
L_106a6ed5:;
  /* 106a6ed5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6ed8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6ede jne 0x106a6eec */
  if (!C.zf) goto L_106a6eec;
  /* 106a6ee0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6ee3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 106a6eea jmp 0x106a6f5d */
  goto L_106a6f5d;
L_106a6eec:;
  /* 106a6eec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6eef cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6ef5 jne 0x106a6f03 */
  if (!C.zf) goto L_106a6f03;
  /* 106a6ef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6efa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 106a6f01 jmp 0x106a6f5d */
  goto L_106a6f5d;
L_106a6f03:;
  /* 106a6f03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6f06 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6f0c jne 0x106a6f1a */
  if (!C.zf) goto L_106a6f1a;
  /* 106a6f0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6f11 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 106a6f18 jmp 0x106a6f5d */
  goto L_106a6f5d;
L_106a6f1a:;
  /* 106a6f1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6f1d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6f23 jne 0x106a6f31 */
  if (!C.zf) goto L_106a6f31;
  /* 106a6f25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6f28 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 106a6f2f jmp 0x106a6f5d */
  goto L_106a6f5d;
L_106a6f31:;
  /* 106a6f31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6f34 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6f3a jne 0x106a6f48 */
  if (!C.zf) goto L_106a6f48;
  /* 106a6f3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6f3f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 106a6f46 jmp 0x106a6f5d */
  goto L_106a6f5d;
L_106a6f48:;
  /* 106a6f48 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6f4b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6f51 jne 0x106a6f5d */
  if (!C.zf) goto L_106a6f5d;
  /* 106a6f53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6f56 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_106a6f5d:;
  /* 106a6f5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6f60 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 106a6f63 push edx */
  push32((uint32_t)(EDX));
  /* 106a6f64 push 8 */
  push32((uint32_t)(0x8u));
  /* 106a6f66 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x106a6f69u);
  /* 106a6f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6f6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6f6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a6f72 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 106a6f75 jmp 0x106a6f8e */
  goto L_106a6f8e;
L_106a6f77:;
  /* 106a6f77 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6f7a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 106a6f81 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a6f84 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106a6f87 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6f88 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x106a6f8bu);
  /* 106a6f8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a6f8e:;
  /* 106a6f8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a6f91 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106a6f94 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 106a6f97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106a6f9a:;
  /* 106a6f9a mov esp, ebp */
  ESP = (EBP);
  /* 106a6f9c pop ebp */
  EBP = (pop32());
  /* 106a6f9d ret  */
  ESPCHK(0x106a6de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fa0 @ 0x106a6fa0 (89 bytes, 35 insns) */
void f_106a6fa0(void) {
  FTRACE(0x106a6fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a6fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a6fa1 mov ebp, esp */
  EBP = (ESP);
  /* 106a6fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a6fa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6fa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106a6faa:;
  /* 106a6faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6fad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106a6faf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6fb2 je 0x106a6fd2 */
  if (C.zf) goto L_106a6fd2;
  /* 106a6fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6fb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6fba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a6fbd mov ecx, dword ptr [0x106cdc84] */
  ECX = (r32((uint32_t)(0x106cdc84)));
  /* 106a6fc3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a6fc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6fc9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6fcb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6fce jae 0x106a6fd2 */
  if (!C.cf) goto L_106a6fd2;
  /* 106a6fd0 jmp 0x106a6faa */
  goto L_106a6faa;
L_106a6fd2:;
  /* 106a6fd2 mov eax, dword ptr [0x106cdc84] */
  EAX = (r32((uint32_t)(0x106cdc84)));
  /* 106a6fd7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106a6fda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a6fdd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a6fdf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6fe2 jae 0x106a6fee */
  if (!C.cf) goto L_106a6fee;
  /* 106a6fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a6fe7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106a6fe9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a6fec je 0x106a6ff2 */
  if (C.zf) goto L_106a6ff2;
L_106a6fee:;
  /* 106a6fee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a6ff0 jmp 0x106a6ff5 */
  goto L_106a6ff5;
L_106a6ff2:;
  /* 106a6ff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106a6ff5:;
  /* 106a6ff5 mov esp, ebp */
  ESP = (EBP);
  /* 106a6ff7 pop ebp */
  EBP = (pop32());
  /* 106a6ff8 ret  */
  ESPCHK(0x106a6fa0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x106a7000 (48 bytes, 17 insns) */
void f_106a7000(void) {
  FTRACE(0x106a7000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7000 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7001 mov ebp, esp */
  EBP = (ESP);
  /* 106a7003 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7004 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a7006 call 0x106a6d00 */
  push32(0x106a700bu); f_106a6d00();
  /* 106a700b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a700e mov eax, dword ptr [0x106cf67c] */
  EAX = (r32((uint32_t)(0x106cf67c)));
  /* 106a7013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a7016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7019 mov dword ptr [0x106cf67c], ecx */
  w32((uint32_t)(0x106cf67c), (ECX));
  /* 106a701f push 9 */
  push32((uint32_t)(0x9u));
  /* 106a7021 call 0x106a6da0 */
  push32(0x106a7026u); f_106a6da0();
  /* 106a7026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a702c mov esp, ebp */
  ESP = (EBP);
  /* 106a702e pop ebp */
  EBP = (pop32());
  /* 106a702f ret  */
  ESPCHK(0x106a7000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007030 @ 0x106a7030 (10 bytes, 5 insns) */
void f_106a7030(void) {
  FTRACE(0x106a7030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7030 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7031 mov ebp, esp */
  EBP = (ESP);
  /* 106a7033 mov eax, dword ptr [0x106cf67c] */
  EAX = (r32((uint32_t)(0x106cf67c)));
  /* 106a7038 pop ebp */
  EBP = (pop32());
  /* 106a7039 ret  */
  ESPCHK(0x106a7030u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x106a7040 (45 bytes, 19 insns) */
void f_106a7040(void) {
  FTRACE(0x106a7040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7040 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7041 mov ebp, esp */
  EBP = (ESP);
  /* 106a7043 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7044 mov eax, dword ptr [0x106cf67c] */
  EAX = (r32((uint32_t)(0x106cf67c)));
  /* 106a7049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a704c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7050 je 0x106a7060 */
  if (C.zf) goto L_106a7060;
  /* 106a7052 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7055 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7056 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x106a7059u);
  /* 106a7059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a705c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a705e jne 0x106a7064 */
  if (!C.zf) goto L_106a7064;
L_106a7060:;
  /* 106a7060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a7062 jmp 0x106a7069 */
  goto L_106a7069;
L_106a7064:;
  /* 106a7064 mov eax, 1 */
  EAX = (0x1u);
L_106a7069:;
  /* 106a7069 mov esp, ebp */
  ESP = (EBP);
  /* 106a706b pop ebp */
  EBP = (pop32());
  /* 106a706c ret  */
  ESPCHK(0x106a7040u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x106a7070 (88 bytes, 40 insns) */
void f_106a7070(void) {
  FTRACE(0x106a7070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7070 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 106a7074 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106a7078 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a707a je 0x106a70c3 */
  if (C.zf) goto L_106a70c3;
  /* 106a707c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a707e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 106a7082 push edi */
  push32((uint32_t)(EDI));
  /* 106a7083 mov edi, ecx */
  EDI = (ECX);
  /* 106a7085 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7088 jb 0x106a70b7 */
  if (C.cf) goto L_106a70b7;
  /* 106a708a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106a708c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 106a708f je 0x106a7099 */
  if (C.zf) goto L_106a7099;
  /* 106a7091 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_106a7093:;
  /* 106a7093 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a7095 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106a7096 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106a7097 jne 0x106a7093 */
  if (!C.zf) goto L_106a7093;
L_106a7099:;
  /* 106a7099 mov ecx, eax */
  ECX = (EAX);
  /* 106a709b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 106a709e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a70a0 mov ecx, eax */
  ECX = (EAX);
  /* 106a70a2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106a70a5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a70a7 mov ecx, edx */
  ECX = (EDX);
  /* 106a70a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106a70ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106a70af je 0x106a70b7 */
  if (C.zf) goto L_106a70b7;
  /* 106a70b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106a70b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106a70b5 je 0x106a70bd */
  if (C.zf) goto L_106a70bd;
L_106a70b7:;
  /* 106a70b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106a70b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106a70ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 106a70bb jne 0x106a70b7 */
  if (!C.zf) goto L_106a70b7;
L_106a70bd:;
  /* 106a70bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106a70c1 pop edi */
  EDI = (pop32());
  /* 106a70c2 ret  */
  ESPCHK(0x106a7070u, _esp0);
  ESP += 4; return;
L_106a70c3:;
  /* 106a70c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 106a70c7 ret  */
  ESPCHK(0x106a7070u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x106a70d0 (23 bytes, 10 insns) */
void f_106a70d0(void) {
  FTRACE(0x106a70d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a70d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a70d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a70d3 mov eax, dword ptr [0x106cf678] */
  EAX = (r32((uint32_t)(0x106cf678)));
  /* 106a70d8 push eax */
  push32((uint32_t)(EAX));
  /* 106a70d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a70dc push ecx */
  push32((uint32_t)(ECX));
  /* 106a70dd call 0x106a70f0 */
  push32(0x106a70e2u); f_106a70f0();
  /* 106a70e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a70e5 pop ebp */
  EBP = (pop32());
  /* 106a70e6 ret  */
  ESPCHK(0x106a70d0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x106a70f0 (87 bytes, 34 insns) */
void f_106a70f0(void) {
  FTRACE(0x106a70f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a70f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a70f1 mov ebp, esp */
  EBP = (ESP);
  /* 106a70f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a70f4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a70f8 jbe 0x106a70fe */
  if ((C.cf||C.zf)) goto L_106a70fe;
  /* 106a70fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a70fc jmp 0x106a7143 */
  goto L_106a7143;
L_106a70fe:;
  /* 106a70fe cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7102 ja 0x106a7115 */
  if ((!C.cf&&!C.zf)) goto L_106a7115;
  /* 106a7104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7107 push eax */
  push32((uint32_t)(EAX));
  /* 106a7108 call 0x106a7150 */
  push32(0x106a710du); f_106a7150();
  /* 106a710d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a7113 jmp 0x106a711c */
  goto L_106a711c;
L_106a7115:;
  /* 106a7115 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106a711c:;
  /* 106a711c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7120 jne 0x106a7128 */
  if (!C.zf) goto L_106a7128;
  /* 106a7122 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7126 jne 0x106a712d */
  if (!C.zf) goto L_106a712d;
L_106a7128:;
  /* 106a7128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a712b jmp 0x106a7143 */
  goto L_106a7143;
L_106a712d:;
  /* 106a712d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7130 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7131 call 0x106a7040 */
  push32(0x106a7136u); f_106a7040();
  /* 106a7136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a713b jne 0x106a7141 */
  if (!C.zf) goto L_106a7141;
  /* 106a713d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a713f jmp 0x106a7143 */
  goto L_106a7143;
L_106a7141:;
  /* 106a7141 jmp 0x106a70fe */
  goto L_106a70fe;
L_106a7143:;
  /* 106a7143 mov esp, ebp */
  ESP = (EBP);
  /* 106a7145 pop ebp */
  EBP = (pop32());
  /* 106a7146 ret  */
  ESPCHK(0x106a70f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007150 @ 0x106a7150 (109 bytes, 37 insns) */
void f_106a7150(void) {
  FTRACE(0x106a7150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7150 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7151 mov ebp, esp */
  EBP = (ESP);
  /* 106a7153 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7157 cmp eax, dword ptr [0x106cdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a715d ja 0x106a718d */
  if ((!C.cf&&!C.zf)) goto L_106a718d;
  /* 106a715f push 9 */
  push32((uint32_t)(0x9u));
  /* 106a7161 call 0x106a6d00 */
  push32(0x106a7166u); f_106a6d00();
  /* 106a7166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a716c push ecx */
  push32((uint32_t)(ECX));
  /* 106a716d call 0x106a7c90 */
  push32(0x106a7172u); f_106a7c90();
  /* 106a7172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a7178 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a717a call 0x106a6da0 */
  push32(0x106a717fu); f_106a6da0();
  /* 106a717f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7182 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7186 je 0x106a718d */
  if (C.zf) goto L_106a718d;
  /* 106a7188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a718b jmp 0x106a71b9 */
  goto L_106a71b9;
L_106a718d:;
  /* 106a718d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7191 jne 0x106a719a */
  if (!C.zf) goto L_106a719a;
  /* 106a7193 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_106a719a:;
  /* 106a719a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a719d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a71a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 106a71a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106a71a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a71a9 push eax */
  push32((uint32_t)(EAX));
  /* 106a71aa push 0 */
  push32((uint32_t)(0x0u));
  /* 106a71ac mov ecx, dword ptr [0x106d0e2c] */
  ECX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a71b2 push ecx */
  push32((uint32_t)(ECX));
  /* 106a71b3 call dword ptr [0x106d1364] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1364))), 0x106a71b9u);
L_106a71b9:;
  /* 106a71b9 mov esp, ebp */
  ESP = (EBP);
  /* 106a71bb pop ebp */
  EBP = (pop32());
  /* 106a71bc ret  */
  ESPCHK(0x106a7150u, _esp0);
  ESP += 4; return;
}

/* FUN_100071c0 @ 0x106a71c0 (10 bytes, 5 insns) */
void f_106a71c0(void) {
  FTRACE(0x106a71c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a71c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a71c1 mov ebp, esp */
  EBP = (ESP);
  /* 106a71c3 mov eax, 1 */
  EAX = (0x1u);
  /* 106a71c8 pop ebp */
  EBP = (pop32());
  /* 106a71c9 ret  */
  ESPCHK(0x106a71c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x106a71d0 (173 bytes, 59 insns) */
void f_106a71d0(void) {
  FTRACE(0x106a71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106a71d1 mov ebp, esp */
  EBP = (ESP);
  /* 106a71d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a71d6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a71da jbe 0x106a71e3 */
  if ((C.cf||C.zf)) goto L_106a71e3;
  /* 106a71dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a71de jmp 0x106a7279 */
  goto L_106a7279;
L_106a71e3:;
  /* 106a71e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a71e5 call 0x106a6d00 */
  push32(0x106a71eau); f_106a6d00();
  /* 106a71ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a71ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a71f0 push eax */
  push32((uint32_t)(EAX));
  /* 106a71f1 call 0x106a7600 */
  push32(0x106a71f6u); f_106a7600();
  /* 106a71f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a71f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a71fc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7200 je 0x106a7241 */
  if (C.zf) goto L_106a7241;
  /* 106a7202 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106a7209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a720c cmp ecx, dword ptr [0x106cdc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106cdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7212 ja 0x106a7232 */
  if ((!C.cf&&!C.zf)) goto L_106a7232;
  /* 106a7214 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7217 push edx */
  push32((uint32_t)(EDX));
  /* 106a7218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a721b push eax */
  push32((uint32_t)(EAX));
  /* 106a721c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a721f push ecx */
  push32((uint32_t)(ECX));
  /* 106a7220 call 0x106a84d0 */
  push32(0x106a7225u); f_106a84d0();
  /* 106a7225 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a722a je 0x106a7232 */
  if (C.zf) goto L_106a7232;
  /* 106a722c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a722f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106a7232:;
  /* 106a7232 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a7234 call 0x106a6da0 */
  push32(0x106a7239u); f_106a6da0();
  /* 106a7239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a723c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a723f jmp 0x106a7279 */
  goto L_106a7279;
L_106a7241:;
  /* 106a7241 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a7243 call 0x106a6da0 */
  push32(0x106a7248u); f_106a6da0();
  /* 106a7248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a724b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a724f jne 0x106a7258 */
  if (!C.zf) goto L_106a7258;
  /* 106a7251 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106a7258:;
  /* 106a7258 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a725b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a725e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 106a7260 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106a7263 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7266 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a726a push edx */
  push32((uint32_t)(EDX));
  /* 106a726b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106a726d mov eax, dword ptr [0x106d0e2c] */
  EAX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a7272 push eax */
  push32((uint32_t)(EAX));
  /* 106a7273 call dword ptr [0x106d1368] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1368))), 0x106a7279u);
L_106a7279:;
  /* 106a7279 mov esp, ebp */
  ESP = (EBP);
  /* 106a727b pop ebp */
  EBP = (pop32());
  /* 106a727c ret  */
  ESPCHK(0x106a71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007280 @ 0x106a7280 (490 bytes, 165 insns) */
void f_106a7280(void) {
  FTRACE(0x106a7280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7280 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7281 mov ebp, esp */
  EBP = (ESP);
  /* 106a7283 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7286 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a728a jne 0x106a729d */
  if (!C.zf) goto L_106a729d;
  /* 106a728c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a728f push eax */
  push32((uint32_t)(EAX));
  /* 106a7290 call 0x106a70d0 */
  push32(0x106a7295u); f_106a70d0();
  /* 106a7295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7298 jmp 0x106a7466 */
  goto L_106a7466;
L_106a729d:;
  /* 106a729d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a72a1 jne 0x106a72b6 */
  if (!C.zf) goto L_106a72b6;
  /* 106a72a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a72a6 push ecx */
  push32((uint32_t)(ECX));
  /* 106a72a7 call 0x106a7470 */
  push32(0x106a72acu); f_106a7470();
  /* 106a72ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a72af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a72b1 jmp 0x106a7466 */
  goto L_106a7466;
L_106a72b6:;
  /* 106a72b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106a72bd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a72c1 ja 0x106a7439 */
  if ((!C.cf&&!C.zf)) goto L_106a7439;
  /* 106a72c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a72c9 call 0x106a6d00 */
  push32(0x106a72ceu); f_106a6d00();
  /* 106a72ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a72d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a72d4 push edx */
  push32((uint32_t)(EDX));
  /* 106a72d5 call 0x106a7600 */
  push32(0x106a72dau); f_106a7600();
  /* 106a72da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a72dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106a72e0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a72e4 je 0x106a73fc */
  if (C.zf) goto L_106a73fc;
  /* 106a72ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a72ed cmp eax, dword ptr [0x106cdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106cdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a72f3 ja 0x106a7370 */
  if ((!C.cf&&!C.zf)) goto L_106a7370;
  /* 106a72f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a72f8 push ecx */
  push32((uint32_t)(ECX));
  /* 106a72f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a72fc push edx */
  push32((uint32_t)(EDX));
  /* 106a72fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a7300 push eax */
  push32((uint32_t)(EAX));
  /* 106a7301 call 0x106a84d0 */
  push32(0x106a7306u); f_106a84d0();
  /* 106a7306 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a730b je 0x106a7315 */
  if (C.zf) goto L_106a7315;
  /* 106a730d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7310 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106a7313 jmp 0x106a7370 */
  goto L_106a7370;
L_106a7315:;
  /* 106a7315 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7318 push edx */
  push32((uint32_t)(EDX));
  /* 106a7319 call 0x106a7c90 */
  push32(0x106a731eu); f_106a7c90();
  /* 106a731e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7321 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a7324 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7328 je 0x106a7370 */
  if (C.zf) goto L_106a7370;
  /* 106a732a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a732d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 106a7330 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a7333 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106a7336 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7339 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a733c jae 0x106a7346 */
  if (!C.cf) goto L_106a7346;
  /* 106a733e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a7341 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106a7344 jmp 0x106a734c */
  goto L_106a734c;
L_106a7346:;
  /* 106a7346 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7349 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106a734c:;
  /* 106a734c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106a734f push edx */
  push32((uint32_t)(EDX));
  /* 106a7350 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7353 push eax */
  push32((uint32_t)(EAX));
  /* 106a7354 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a7357 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7358 call 0x106a9be0 */
  push32(0x106a735du); f_106a9be0();
  /* 106a735d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7360 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7363 push edx */
  push32((uint32_t)(EDX));
  /* 106a7364 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a7367 push eax */
  push32((uint32_t)(EAX));
  /* 106a7368 call 0x106a76c0 */
  push32(0x106a736du); f_106a76c0();
  /* 106a736d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a7370:;
  /* 106a7370 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7374 jne 0x106a73f0 */
  if (!C.zf) goto L_106a73f0;
  /* 106a7376 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a737a jne 0x106a7383 */
  if (!C.zf) goto L_106a7383;
  /* 106a737c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106a7383:;
  /* 106a7383 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7386 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7389 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 106a738c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 106a738f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7392 push edx */
  push32((uint32_t)(EDX));
  /* 106a7393 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a7395 mov eax, dword ptr [0x106d0e2c] */
  EAX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a739a push eax */
  push32((uint32_t)(EAX));
  /* 106a739b call dword ptr [0x106d1364] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1364))), 0x106a73a1u);
  /* 106a73a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106a73a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a73a8 je 0x106a73f0 */
  if (C.zf) goto L_106a73f0;
  /* 106a73aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a73ad mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 106a73b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106a73b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106a73b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a73b9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a73bc jae 0x106a73c6 */
  if (!C.cf) goto L_106a73c6;
  /* 106a73be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a73c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106a73c4 jmp 0x106a73cc */
  goto L_106a73cc;
L_106a73c6:;
  /* 106a73c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a73c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106a73cc:;
  /* 106a73cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106a73cf push eax */
  push32((uint32_t)(EAX));
  /* 106a73d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a73d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106a73d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a73d7 push edx */
  push32((uint32_t)(EDX));
  /* 106a73d8 call 0x106a9be0 */
  push32(0x106a73ddu); f_106a9be0();
  /* 106a73dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a73e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a73e3 push eax */
  push32((uint32_t)(EAX));
  /* 106a73e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106a73e7 push ecx */
  push32((uint32_t)(ECX));
  /* 106a73e8 call 0x106a76c0 */
  push32(0x106a73edu); f_106a76c0();
  /* 106a73ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106a73f0:;
  /* 106a73f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a73f2 call 0x106a6da0 */
  push32(0x106a73f7u); f_106a6da0();
  /* 106a73f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a73fa jmp 0x106a7439 */
  goto L_106a7439;
L_106a73fc:;
  /* 106a73fc push 9 */
  push32((uint32_t)(0x9u));
  /* 106a73fe call 0x106a6da0 */
  push32(0x106a7403u); f_106a6da0();
  /* 106a7403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7406 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a740a jne 0x106a7413 */
  if (!C.zf) goto L_106a7413;
  /* 106a740c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106a7413:;
  /* 106a7413 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7416 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7419 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 106a741c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 106a741f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7422 push eax */
  push32((uint32_t)(EAX));
  /* 106a7423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7426 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7427 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a7429 mov edx, dword ptr [0x106d0e2c] */
  EDX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a742f push edx */
  push32((uint32_t)(EDX));
  /* 106a7430 call dword ptr [0x106d1368] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1368))), 0x106a7436u);
  /* 106a7436 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106a7439:;
  /* 106a7439 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a743d jne 0x106a7448 */
  if (!C.zf) goto L_106a7448;
  /* 106a743f cmp dword ptr [0x106cf678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106cf678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7446 jne 0x106a744d */
  if (!C.zf) goto L_106a744d;
L_106a7448:;
  /* 106a7448 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106a744b jmp 0x106a7466 */
  goto L_106a7466;
L_106a744d:;
  /* 106a744d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106a7450 push eax */
  push32((uint32_t)(EAX));
  /* 106a7451 call 0x106a7040 */
  push32(0x106a7456u); f_106a7040();
  /* 106a7456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106a745b jne 0x106a7461 */
  if (!C.zf) goto L_106a7461;
  /* 106a745d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106a745f jmp 0x106a7466 */
  goto L_106a7466;
L_106a7461:;
  /* 106a7461 jmp 0x106a72b6 */
  goto L_106a72b6;
L_106a7466:;
  /* 106a7466 mov esp, ebp */
  ESP = (EBP);
  /* 106a7468 pop ebp */
  EBP = (pop32());
  /* 106a7469 ret  */
  ESPCHK(0x106a7280u, _esp0);
  ESP += 4; return;
}

/* FUN_10007470 @ 0x106a7470 (104 bytes, 38 insns) */
void f_106a7470(void) {
  FTRACE(0x106a7470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106a7470 push ebp */
  push32((uint32_t)(EBP));
  /* 106a7471 mov ebp, esp */
  EBP = (ESP);
  /* 106a7473 push ecx */
  push32((uint32_t)(ECX));
  /* 106a7474 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7478 jne 0x106a747c */
  if (!C.zf) goto L_106a747c;
  /* 106a747a jmp 0x106a74d4 */
  goto L_106a74d4;
L_106a747c:;
  /* 106a747c push 9 */
  push32((uint32_t)(0x9u));
  /* 106a747e call 0x106a6d00 */
  push32(0x106a7483u); f_106a6d00();
  /* 106a7483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a7489 push eax */
  push32((uint32_t)(EAX));
  /* 106a748a call 0x106a7600 */
  push32(0x106a748fu); f_106a7600();
  /* 106a748f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a7492 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106a7495 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106a7499 je 0x106a74b7 */
  if (C.zf) goto L_106a74b7;
  /* 106a749b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a749e push ecx */
  push32((uint32_t)(ECX));
  /* 106a749f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106a74a2 push edx */
  push32((uint32_t)(EDX));
  /* 106a74a3 call 0x106a76c0 */
  push32(0x106a74a8u); f_106a76c0();
  /* 106a74a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a74ab push 9 */
  push32((uint32_t)(0x9u));
  /* 106a74ad call 0x106a6da0 */
  push32(0x106a74b2u); f_106a6da0();
  /* 106a74b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a74b5 jmp 0x106a74d4 */
  goto L_106a74d4;
L_106a74b7:;
  /* 106a74b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 106a74b9 call 0x106a6da0 */
  push32(0x106a74beu); f_106a6da0();
  /* 106a74be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106a74c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106a74c4 push eax */
  push32((uint32_t)(EAX));
  /* 106a74c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106a74c7 mov ecx, dword ptr [0x106d0e2c] */
  ECX = (r32((uint32_t)(0x106d0e2c)));
  /* 106a74cd push ecx */
  push32((uint32_t)(ECX));
  /* 106a74ce call dword ptr [0x106d1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x106d1344))), 0x106a74d4u);
L_106a74d4:;
  /* 106a74d4 mov esp, ebp */
  ESP = (EBP);
  /* 106a74d6 pop ebp */
  EBP = (pop32());
  /* 106a74d7 ret  */
  ESPCHK(0x106a7470u, _esp0);
  ESP += 4; return;
}

