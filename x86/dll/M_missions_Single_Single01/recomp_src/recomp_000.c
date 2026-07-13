#include "recomp.h"

/* OnInit @ 0x10bd1005 (5 bytes, 1 insns) */
void f_10bd1005(void) {
  FTRACE(0x10bd1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1005 jmp 0x10bd1090 */
  f_10bd1090(); return;
}

/* thunk_FUN_10001030 @ 0x10bd100a (5 bytes, 1 insns) */
void f_10bd100a(void) {
  FTRACE(0x10bd100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd100a jmp 0x10bd1030 */
  f_10bd1030(); return;
}

/* ProcessScenary @ 0x10bd100f (5 bytes, 1 insns) */
void f_10bd100f(void) {
  FTRACE(0x10bd100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd100f jmp 0x10bd11a0 */
  f_10bd11a0(); return;
}

/* FUN_10001030 @ 0x10bd1030 (67 bytes, 26 insns) */
void f_10bd1030(void) {
  FTRACE(0x10bd1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1030 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1031 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd1036 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd1037 push esi */
  push32((uint32_t)(ESI));
  /* 10bd1038 push edi */
  push32((uint32_t)(EDI));
  /* 10bd1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10bd103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10bd1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10bd1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bd1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1052 je 0x10bd1056 */
  if (C.zf) goto L_10bd1056;
  /* 10bd1054 jmp 0x10bd105b */
  goto L_10bd105b;
L_10bd1056:;
  /* 10bd1056 call 0x10bd1005 */
  push32(0x10bd105bu); f_10bd1005();
L_10bd105b:;
  /* 10bd105b mov eax, 1 */
  EAX = (0x1u);
  /* 10bd1060 pop edi */
  EDI = (pop32());
  /* 10bd1061 pop esi */
  ESI = (pop32());
  /* 10bd1062 pop ebx */
  EBX = (pop32());
  /* 10bd1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1068 call 0x10bd1520 */
  push32(0x10bd106du); f_10bd1520();
  /* 10bd106d mov esp, ebp */
  ESP = (EBP);
  /* 10bd106f pop ebp */
  EBP = (pop32());
  /* 10bd1070 ret 0xc */
  ESPCHK(0x10bd1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10bd1090 (206 bytes, 65 insns) */
void f_10bd1090(void) {
  FTRACE(0x10bd1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1090 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1091 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd1096 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd1097 push esi */
  push32((uint32_t)(ESI));
  /* 10bd1098 push edi */
  push32((uint32_t)(EDI));
  /* 10bd1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10bd109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10bd10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10bd10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bd10a8 mov esi, esp */
  ESI = (ESP);
  /* 10bd10aa push 0x10bf9048 */
  push32((uint32_t)(0x10bf9048u));
  /* 10bd10af push 0x10bfe3e8 */
  push32((uint32_t)(0x10bfe3e8u));
  /* 10bd10b4 call dword ptr [0x10c003a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003a4))), 0x10bd10bau);
  /* 10bd10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd10bf call 0x10bd1520 */
  push32(0x10bd10c4u); f_10bd1520();
  /* 10bd10c4 mov esi, esp */
  ESI = (ESP);
  /* 10bd10c6 push 0x10bf902c */
  push32((uint32_t)(0x10bf902cu));
  /* 10bd10cb push 0x10bfe3e0 */
  push32((uint32_t)(0x10bfe3e0u));
  /* 10bd10d0 call dword ptr [0x10c003a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003a4))), 0x10bd10d6u);
  /* 10bd10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd10db call 0x10bd1520 */
  push32(0x10bd10e0u); f_10bd1520();
  /* 10bd10e0 mov esi, esp */
  ESI = (ESP);
  /* 10bd10e2 call dword ptr [0x10c003b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003b4))), 0x10bd10e8u);
  /* 10bd10e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd10ea call 0x10bd1520 */
  push32(0x10bd10efu); f_10bd1520();
  /* 10bd10ef mov esi, esp */
  ESI = (ESP);
  /* 10bd10f1 push 0x10bf9024 */
  push32((uint32_t)(0x10bf9024u));
  /* 10bd10f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd10f8 call dword ptr [0x10c003b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003b8))), 0x10bd10feu);
  /* 10bd10fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1101 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1103 call 0x10bd1520 */
  push32(0x10bd1108u); f_10bd1520();
  /* 10bd1108 mov esi, esp */
  ESI = (ESP);
  /* 10bd110a push 0x10bf901c */
  push32((uint32_t)(0x10bf901cu));
  /* 10bd110f push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd1111 call dword ptr [0x10c003b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003b8))), 0x10bd1117u);
  /* 10bd1117 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd111a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd111c call 0x10bd1520 */
  push32(0x10bd1121u); f_10bd1520();
  /* 10bd1121 mov esi, esp */
  ESI = (ESP);
  /* 10bd1123 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bd1125 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd1127 call dword ptr [0x10c003b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003b0))), 0x10bd112du);
  /* 10bd112d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1132 call 0x10bd1520 */
  push32(0x10bd1137u); f_10bd1520();
  /* 10bd1137 mov esi, esp */
  ESI = (ESP);
  /* 10bd1139 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bd113b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd113d call dword ptr [0x10c003b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003b0))), 0x10bd1143u);
  /* 10bd1143 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1146 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1148 call 0x10bd1520 */
  push32(0x10bd114du); f_10bd1520();
  /* 10bd114d pop edi */
  EDI = (pop32());
  /* 10bd114e pop esi */
  ESI = (pop32());
  /* 10bd114f pop ebx */
  EBX = (pop32());
  /* 10bd1150 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1153 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1155 call 0x10bd1520 */
  push32(0x10bd115au); f_10bd1520();
  /* 10bd115a mov esp, ebp */
  ESP = (EBP);
  /* 10bd115c pop ebp */
  EBP = (pop32());
  /* 10bd115d ret  */
  ESPCHK(0x10bd1090u, _esp0);
  ESP += 4; return;
}

/* FUN_100011a0 @ 0x10bd11a0 (670 bytes, 208 insns) */
void f_10bd11a0(void) {
  FTRACE(0x10bd11a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd11a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd11a1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd11a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd11a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd11a7 push esi */
  push32((uint32_t)(ESI));
  /* 10bd11a8 push edi */
  push32((uint32_t)(EDI));
  /* 10bd11a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10bd11ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10bd11b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10bd11b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bd11b8 mov esi, esp */
  ESI = (ESP);
  /* 10bd11ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd11bc call dword ptr [0x10c0039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0039c))), 0x10bd11c2u);
  /* 10bd11c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd11c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd11c7 call 0x10bd1520 */
  push32(0x10bd11ccu); f_10bd1520();
  /* 10bd11cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd11d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd11d3 je 0x10bd142d */
  if (C.zf) goto L_10bd142d;
  /* 10bd11d9 mov esi, esp */
  ESI = (ESP);
  /* 10bd11db push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd11dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd11df call dword ptr [0x10c003a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003a0))), 0x10bd11e5u);
  /* 10bd11e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd11e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd11ea call 0x10bd1520 */
  push32(0x10bd11efu); f_10bd1520();
  /* 10bd11ef mov esi, esp */
  ESI = (ESP);
  /* 10bd11f1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd11f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd11f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd11fa call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd1200u);
  /* 10bd1200 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1203 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1205 call 0x10bd1520 */
  push32(0x10bd120au); f_10bd1520();
  /* 10bd120a mov esi, esp */
  ESI = (ESP);
  /* 10bd120c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd1211 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd1213 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1215 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd121bu);
  /* 10bd121b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd121e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1220 call 0x10bd1520 */
  push32(0x10bd1225u); f_10bd1520();
  /* 10bd1225 mov esi, esp */
  ESI = (ESP);
  /* 10bd1227 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd122c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd122e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1230 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd1236u);
  /* 10bd1236 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd123b call 0x10bd1520 */
  push32(0x10bd1240u); f_10bd1520();
  /* 10bd1240 mov esi, esp */
  ESI = (ESP);
  /* 10bd1242 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd1247 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd1249 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd124b call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd1251u);
  /* 10bd1251 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1254 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1256 call 0x10bd1520 */
  push32(0x10bd125bu); f_10bd1520();
  /* 10bd125b mov esi, esp */
  ESI = (ESP);
  /* 10bd125d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd1262 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bd1264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1266 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd126cu);
  /* 10bd126c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd126f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1271 call 0x10bd1520 */
  push32(0x10bd1276u); f_10bd1520();
  /* 10bd1276 mov esi, esp */
  ESI = (ESP);
  /* 10bd1278 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd127d push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd127f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1281 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd1287u);
  /* 10bd1287 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd128a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd128c call 0x10bd1520 */
  push32(0x10bd1291u); f_10bd1520();
  /* 10bd1291 mov esi, esp */
  ESI = (ESP);
  /* 10bd1293 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd1298 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd129a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd129c call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd12a2u);
  /* 10bd12a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd12a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd12a7 call 0x10bd1520 */
  push32(0x10bd12acu); f_10bd1520();
  /* 10bd12ac mov esi, esp */
  ESI = (ESP);
  /* 10bd12ae push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd12b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd12b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd12b7 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd12bdu);
  /* 10bd12bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd12c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd12c2 call 0x10bd1520 */
  push32(0x10bd12c7u); f_10bd1520();
  /* 10bd12c7 mov esi, esp */
  ESI = (ESP);
  /* 10bd12c9 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd12ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd12d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd12d2 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd12d8u);
  /* 10bd12d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd12db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd12dd call 0x10bd1520 */
  push32(0x10bd12e2u); f_10bd1520();
  /* 10bd12e2 mov esi, esp */
  ESI = (ESP);
  /* 10bd12e4 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd12e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd12eb push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd12ed call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd12f3u);
  /* 10bd12f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd12f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd12f8 call 0x10bd1520 */
  push32(0x10bd12fdu); f_10bd1520();
  /* 10bd12fd mov esi, esp */
  ESI = (ESP);
  /* 10bd12ff push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd1304 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bd1306 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd1308 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd130eu);
  /* 10bd130e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1311 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1313 call 0x10bd1520 */
  push32(0x10bd1318u); f_10bd1520();
  /* 10bd1318 mov esi, esp */
  ESI = (ESP);
  /* 10bd131a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd131f push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd1321 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd1323 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd1329u);
  /* 10bd1329 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd132c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd132e call 0x10bd1520 */
  push32(0x10bd1333u); f_10bd1520();
  /* 10bd1333 mov esi, esp */
  ESI = (ESP);
  /* 10bd1335 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd133a push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd133c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd133e call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd1344u);
  /* 10bd1344 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1347 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1349 call 0x10bd1520 */
  push32(0x10bd134eu); f_10bd1520();
  /* 10bd134e mov esi, esp */
  ESI = (ESP);
  /* 10bd1350 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd1355 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd1357 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd1359 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd135fu);
  /* 10bd135f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1364 call 0x10bd1520 */
  push32(0x10bd1369u); f_10bd1520();
  /* 10bd1369 mov esi, esp */
  ESI = (ESP);
  /* 10bd136b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd1370 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1372 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd1374 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd137au);
  /* 10bd137a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd137d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd137f call 0x10bd1520 */
  push32(0x10bd1384u); f_10bd1520();
  /* 10bd1384 mov esi, esp */
  ESI = (ESP);
  /* 10bd1386 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd138b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd138d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd138f call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd1395u);
  /* 10bd1395 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1398 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd139a call 0x10bd1520 */
  push32(0x10bd139fu); f_10bd1520();
  /* 10bd139f mov esi, esp */
  ESI = (ESP);
  /* 10bd13a1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd13a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10bd13a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd13aa call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd13b0u);
  /* 10bd13b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd13b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd13b5 call 0x10bd1520 */
  push32(0x10bd13bau); f_10bd1520();
  /* 10bd13ba mov esi, esp */
  ESI = (ESP);
  /* 10bd13bc push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10bd13c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd13c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd13c5 call dword ptr [0x10c00398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00398))), 0x10bd13cbu);
  /* 10bd13cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd13ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd13d0 call 0x10bd1520 */
  push32(0x10bd13d5u); f_10bd1520();
  /* 10bd13d5 mov esi, esp */
  ESI = (ESP);
  /* 10bd13d7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bd13d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd13db push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd13dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd13df push 0x10bf906c */
  push32((uint32_t)(0x10bf906cu));
  /* 10bd13e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd13e6 call dword ptr [0x10c003a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003a8))), 0x10bd13ecu);
  /* 10bd13ec add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd13ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd13f1 call 0x10bd1520 */
  push32(0x10bd13f6u); f_10bd1520();
  /* 10bd13f6 mov esi, esp */
  ESI = (ESP);
  /* 10bd13f8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bd13fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd13fc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd13fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1400 push 0x10bf9060 */
  push32((uint32_t)(0x10bf9060u));
  /* 10bd1405 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd1407 call dword ptr [0x10c003a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003a8))), 0x10bd140du);
  /* 10bd140d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1412 call 0x10bd1520 */
  push32(0x10bd1417u); f_10bd1520();
  /* 10bd1417 mov esi, esp */
  ESI = (ESP);
  /* 10bd1419 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10bd141b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd141d call dword ptr [0x10c003ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c003ac))), 0x10bd1423u);
  /* 10bd1423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1426 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1428 call 0x10bd1520 */
  push32(0x10bd142du); f_10bd1520();
L_10bd142d:;
  /* 10bd142d pop edi */
  EDI = (pop32());
  /* 10bd142e pop esi */
  ESI = (pop32());
  /* 10bd142f pop ebx */
  EBX = (pop32());
  /* 10bd1430 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1433 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1435 call 0x10bd1520 */
  push32(0x10bd143au); f_10bd1520();
  /* 10bd143a mov esp, ebp */
  ESP = (EBP);
  /* 10bd143c pop ebp */
  EBP = (pop32());
  /* 10bd143d ret  */
  ESPCHK(0x10bd11a0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10bd1520 (56 bytes, 28 insns) */
void f_10bd1520(void) {
  FTRACE(0x10bd1520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1520 jne 0x10bd1523 */
  if (!C.zf) goto L_10bd1523;
  /* 10bd1522 ret  */
  ESPCHK(0x10bd1520u, _esp0);
  ESP += 4; return;
L_10bd1523:;
  /* 10bd1523 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1524 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1526 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd1529 push eax */
  push32((uint32_t)(EAX));
  /* 10bd152a push edx */
  push32((uint32_t)(EDX));
  /* 10bd152b push ebx */
  push32((uint32_t)(EBX));
  /* 10bd152c push esi */
  push32((uint32_t)(ESI));
  /* 10bd152d push edi */
  push32((uint32_t)(EDI));
  /* 10bd152e push 0x10bf908c */
  push32((uint32_t)(0x10bf908cu));
  /* 10bd1533 push 0x10bf9088 */
  push32((uint32_t)(0x10bf9088u));
  /* 10bd1538 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10bd153a push 0x10bf9078 */
  push32((uint32_t)(0x10bf9078u));
  /* 10bd153f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd1541 call 0x10bd18f0 */
  push32(0x10bd1546u); f_10bd18f0();
  /* 10bd1546 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1549 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd154c jne 0x10bd154f */
  if (!C.zf) goto L_10bd154f;
  /* 10bd154e int3  */
  x86_unimpl("int3 @ 0x10bd154e");
L_10bd154f:;
  /* 10bd154f pop edi */
  EDI = (pop32());
  /* 10bd1550 pop esi */
  ESI = (pop32());
  /* 10bd1551 pop ebx */
  EBX = (pop32());
  /* 10bd1552 pop edx */
  EDX = (pop32());
  /* 10bd1553 pop eax */
  EAX = (pop32());
  /* 10bd1554 mov esp, ebp */
  ESP = (EBP);
  /* 10bd1556 pop ebp */
  EBP = (pop32());
  /* 10bd1557 ret  */
  ESPCHK(0x10bd1520u, _esp0);
  ESP += 4; return;
}

/* FUN_10001560 @ 0x10bd1560 (313 bytes, 78 insns) */
void f_10bd1560(void) {
  FTRACE(0x10bd1560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1560 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1561 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1563 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1567 jne 0x10bd1627 */
  if (!C.zf) goto L_10bd1627;
  /* 10bd156d call dword ptr [0x10c0023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0023c))), 0x10bd1573u);
  /* 10bd1573 mov dword ptr [0x10bfe414], eax */
  w32((uint32_t)(0x10bfe414), (EAX));
  /* 10bd1578 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd157a call 0x10bd5020 */
  push32(0x10bd157fu); f_10bd5020();
  /* 10bd157f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1584 jne 0x10bd158d */
  if (!C.zf) goto L_10bd158d;
  /* 10bd1586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1588 jmp 0x10bd1695 */
  goto L_10bd1695;
L_10bd158d:;
  /* 10bd158d mov eax, dword ptr [0x10bfe414] */
  EAX = (r32((uint32_t)(0x10bfe414)));
  /* 10bd1592 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10bd1595 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd159a mov dword ptr [0x10bfe420], eax */
  w32((uint32_t)(0x10bfe420), (EAX));
  /* 10bd159f mov ecx, dword ptr [0x10bfe414] */
  ECX = (r32((uint32_t)(0x10bfe414)));
  /* 10bd15a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd15ab mov dword ptr [0x10bfe41c], ecx */
  w32((uint32_t)(0x10bfe41c), (ECX));
  /* 10bd15b1 mov edx, dword ptr [0x10bfe41c] */
  EDX = (r32((uint32_t)(0x10bfe41c)));
  /* 10bd15b7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10bd15ba add edx, dword ptr [0x10bfe420] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bfe420))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd15c0 mov dword ptr [0x10bfe418], edx */
  w32((uint32_t)(0x10bfe418), (EDX));
  /* 10bd15c6 mov eax, dword ptr [0x10bfe414] */
  EAX = (r32((uint32_t)(0x10bfe414)));
  /* 10bd15cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10bd15ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd15d3 mov dword ptr [0x10bfe414], eax */
  w32((uint32_t)(0x10bfe414), (EAX));
  /* 10bd15d8 call 0x10bd2190 */
  push32(0x10bd15ddu); f_10bd2190();
  /* 10bd15dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd15df jne 0x10bd15ed */
  if (!C.zf) goto L_10bd15ed;
  /* 10bd15e1 call 0x10bd5070 */
  push32(0x10bd15e6u); f_10bd5070();
  /* 10bd15e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd15e8 jmp 0x10bd1695 */
  goto L_10bd1695;
L_10bd15ed:;
  /* 10bd15ed call dword ptr [0x10c00238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00238))), 0x10bd15f3u);
  /* 10bd15f3 mov dword ptr [0x10bfff4c], eax */
  w32((uint32_t)(0x10bfff4c), (EAX));
  /* 10bd15f8 call 0x10bd4e00 */
  push32(0x10bd15fdu); f_10bd4e00();
  /* 10bd15fd mov dword ptr [0x10bfe3fc], eax */
  w32((uint32_t)(0x10bfe3fc), (EAX));
  /* 10bd1602 call 0x10bd2440 */
  push32(0x10bd1607u); f_10bd2440();
  /* 10bd1607 call 0x10bd48f0 */
  push32(0x10bd160cu); f_10bd48f0();
  /* 10bd160c call 0x10bd47a0 */
  push32(0x10bd1611u); f_10bd47a0();
  /* 10bd1611 call 0x10bd1f90 */
  push32(0x10bd1616u); f_10bd1f90();
  /* 10bd1616 mov ecx, dword ptr [0x10bfe3f8] */
  ECX = (r32((uint32_t)(0x10bfe3f8)));
  /* 10bd161c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd161f mov dword ptr [0x10bfe3f8], ecx */
  w32((uint32_t)(0x10bfe3f8), (ECX));
  /* 10bd1625 jmp 0x10bd1690 */
  goto L_10bd1690;
L_10bd1627:;
  /* 10bd1627 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd162b jne 0x10bd1680 */
  if (!C.zf) goto L_10bd1680;
  /* 10bd162d cmp dword ptr [0x10bfe3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1634 jle 0x10bd167a */
  if ((C.zf||C.sf!=C.of)) goto L_10bd167a;
  /* 10bd1636 mov edx, dword ptr [0x10bfe3f8] */
  EDX = (r32((uint32_t)(0x10bfe3f8)));
  /* 10bd163c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd163f mov dword ptr [0x10bfe3f8], edx */
  w32((uint32_t)(0x10bfe3f8), (EDX));
  /* 10bd1645 cmp dword ptr [0x10bfe44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd164c jne 0x10bd1653 */
  if (!C.zf) goto L_10bd1653;
  /* 10bd164e call 0x10bd2010 */
  push32(0x10bd1653u); f_10bd2010();
L_10bd1653:;
  /* 10bd1653 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bd1655 call 0x10bd3d40 */
  push32(0x10bd165au); f_10bd3d40();
  /* 10bd165a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd165d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1660 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1662 je 0x10bd1669 */
  if (C.zf) goto L_10bd1669;
  /* 10bd1664 call 0x10bd4650 */
  push32(0x10bd1669u); f_10bd4650();
L_10bd1669:;
  /* 10bd1669 call 0x10bd2770 */
  push32(0x10bd166eu); f_10bd2770();
  /* 10bd166e call 0x10bd2220 */
  push32(0x10bd1673u); f_10bd2220();
  /* 10bd1673 call 0x10bd5070 */
  push32(0x10bd1678u); f_10bd5070();
  /* 10bd1678 jmp 0x10bd167e */
  goto L_10bd167e;
L_10bd167a:;
  /* 10bd167a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd167c jmp 0x10bd1695 */
  goto L_10bd1695;
L_10bd167e:;
  /* 10bd167e jmp 0x10bd1690 */
  goto L_10bd1690;
L_10bd1680:;
  /* 10bd1680 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1684 jne 0x10bd1690 */
  if (!C.zf) goto L_10bd1690;
  /* 10bd1686 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1688 call 0x10bd2310 */
  push32(0x10bd168du); f_10bd2310();
  /* 10bd168d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1690:;
  /* 10bd1690 mov eax, 1 */
  EAX = (0x1u);
L_10bd1695:;
  /* 10bd1695 pop ebp */
  EBP = (pop32());
  /* 10bd1696 ret 0xc */
  ESPCHK(0x10bd1560u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10bd16a0 (243 bytes, 86 insns) */
void f_10bd16a0(void) {
  FTRACE(0x10bd16a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd16a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd16a1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd16a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd16a4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bd16ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd16af jne 0x10bd16c1 */
  if (!C.zf) goto L_10bd16c1;
  /* 10bd16b1 cmp dword ptr [0x10bfe3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd16b8 jne 0x10bd16c1 */
  if (!C.zf) goto L_10bd16c1;
  /* 10bd16ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd16bc jmp 0x10bd178d */
  goto L_10bd178d;
L_10bd16c1:;
  /* 10bd16c1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd16c5 je 0x10bd16cd */
  if (C.zf) goto L_10bd16cd;
  /* 10bd16c7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd16cb jne 0x10bd170f */
  if (!C.zf) goto L_10bd170f;
L_10bd16cd:;
  /* 10bd16cd cmp dword ptr [0x10bfff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd16d4 je 0x10bd16eb */
  if (C.zf) goto L_10bd16eb;
  /* 10bd16d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd16d9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd16da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd16dd push ecx */
  push32((uint32_t)(ECX));
  /* 10bd16de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd16e1 push edx */
  push32((uint32_t)(EDX));
  /* 10bd16e2 call dword ptr [0x10bfff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfff5c))), 0x10bd16e8u);
  /* 10bd16e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd16eb:;
  /* 10bd16eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd16ef je 0x10bd1705 */
  if (C.zf) goto L_10bd1705;
  /* 10bd16f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd16f4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd16f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd16f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd16f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd16fc push edx */
  push32((uint32_t)(EDX));
  /* 10bd16fd call 0x10bd1560 */
  push32(0x10bd1702u); f_10bd1560();
  /* 10bd1702 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd1705:;
  /* 10bd1705 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1709 jne 0x10bd170f */
  if (!C.zf) goto L_10bd170f;
  /* 10bd170b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd170d jmp 0x10bd178d */
  goto L_10bd178d;
L_10bd170f:;
  /* 10bd170f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd1712 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1713 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd1716 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1717 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd171a push edx */
  push32((uint32_t)(EDX));
  /* 10bd171b call 0x10bd100a */
  push32(0x10bd1720u); f_10bd100a();
  /* 10bd1720 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd1723 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1727 jne 0x10bd173e */
  if (!C.zf) goto L_10bd173e;
  /* 10bd1729 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd172d jne 0x10bd173e */
  if (!C.zf) goto L_10bd173e;
  /* 10bd172f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd1732 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1735 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1738 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1739 call 0x10bd1560 */
  push32(0x10bd173eu); f_10bd1560();
L_10bd173e:;
  /* 10bd173e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1742 je 0x10bd174a */
  if (C.zf) goto L_10bd174a;
  /* 10bd1744 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1748 jne 0x10bd178a */
  if (!C.zf) goto L_10bd178a;
L_10bd174a:;
  /* 10bd174a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd174d push edx */
  push32((uint32_t)(EDX));
  /* 10bd174e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd1751 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1752 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1755 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1756 call 0x10bd1560 */
  push32(0x10bd175bu); f_10bd1560();
  /* 10bd175b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd175d jne 0x10bd1766 */
  if (!C.zf) goto L_10bd1766;
  /* 10bd175f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bd1766:;
  /* 10bd1766 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd176a je 0x10bd178a */
  if (C.zf) goto L_10bd178a;
  /* 10bd176c cmp dword ptr [0x10bfff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1773 je 0x10bd178a */
  if (C.zf) goto L_10bd178a;
  /* 10bd1775 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd1778 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1779 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd177c push eax */
  push32((uint32_t)(EAX));
  /* 10bd177d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1780 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1781 call dword ptr [0x10bfff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfff5c))), 0x10bd1787u);
  /* 10bd1787 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd178a:;
  /* 10bd178a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bd178d:;
  /* 10bd178d mov esp, ebp */
  ESP = (EBP);
  /* 10bd178f pop ebp */
  EBP = (pop32());
  /* 10bd1790 ret 0xc */
  ESPCHK(0x10bd16a0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10bd17a0 (58 bytes, 18 insns) */
void f_10bd17a0(void) {
  FTRACE(0x10bd17a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd17a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd17a1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd17a3 cmp dword ptr [0x10bfe404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd17aa je 0x10bd17be */
  if (C.zf) goto L_10bd17be;
  /* 10bd17ac cmp dword ptr [0x10bfe404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd17b3 jne 0x10bd17c3 */
  if (!C.zf) goto L_10bd17c3;
  /* 10bd17b5 cmp dword ptr [0x10bfe408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd17bc jne 0x10bd17c3 */
  if (!C.zf) goto L_10bd17c3;
L_10bd17be:;
  /* 10bd17be call 0x10bd5110 */
  push32(0x10bd17c3u); f_10bd5110();
L_10bd17c3:;
  /* 10bd17c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd17c6 push eax */
  push32((uint32_t)(EAX));
  /* 10bd17c7 call 0x10bd5160 */
  push32(0x10bd17ccu); f_10bd5160();
  /* 10bd17cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd17cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10bd17d4 call dword ptr [0x10bfca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfca30))), 0x10bd17dau);
  /* 10bd17da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd17dd pop ebp */
  EBP = (pop32());
  /* 10bd17de ret  */
  ESPCHK(0x10bd17a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100017e0 @ 0x10bd17e0 (11 bytes, 5 insns) */
void f_10bd17e0(void) {
  FTRACE(0x10bd17e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd17e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd17e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd17e3 call dword ptr [0x10c00240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00240))), 0x10bd17e9u);
  /* 10bd17e9 pop ebp */
  EBP = (pop32());
  /* 10bd17ea ret  */
  ESPCHK(0x10bd17e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100017f0 @ 0x10bd17f0 (87 bytes, 30 insns) */
void f_10bd17f0(void) {
  FTRACE(0x10bd17f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd17f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd17f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd17f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd17f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd17f8 jl 0x10bd1800 */
  if ((C.sf!=C.of)) goto L_10bd1800;
  /* 10bd17fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd17fe jl 0x10bd1805 */
  if ((C.sf!=C.of)) goto L_10bd1805;
L_10bd1800:;
  /* 10bd1800 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1803 jmp 0x10bd1843 */
  goto L_10bd1843;
L_10bd1805:;
  /* 10bd1805 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1809 jne 0x10bd1817 */
  if (!C.zf) goto L_10bd1817;
  /* 10bd180b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd180e mov eax, dword ptr [eax*4 + 0x10bfca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10bfca38)));
  /* 10bd1815 jmp 0x10bd1843 */
  goto L_10bd1843;
L_10bd1817:;
  /* 10bd1817 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd181a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd181d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd181f je 0x10bd1826 */
  if (C.zf) goto L_10bd1826;
  /* 10bd1821 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1824 jmp 0x10bd1843 */
  goto L_10bd1843;
L_10bd1826:;
  /* 10bd1826 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1829 mov eax, dword ptr [edx*4 + 0x10bfca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bfca38)));
  /* 10bd1830 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd1833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1836 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd1839 mov dword ptr [ecx*4 + 0x10bfca38], edx */
  w32((uint32_t)(ECX*4 + 0x10bfca38), (EDX));
  /* 10bd1840 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bd1843:;
  /* 10bd1843 mov esp, ebp */
  ESP = (EBP);
  /* 10bd1845 pop ebp */
  EBP = (pop32());
  /* 10bd1846 ret  */
  ESPCHK(0x10bd17f0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10bd1850 (126 bytes, 38 insns) */
void f_10bd1850(void) {
  FTRACE(0x10bd1850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1850 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1851 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1853 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1854 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1858 jl 0x10bd1860 */
  if ((C.sf!=C.of)) goto L_10bd1860;
  /* 10bd185a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd185e jl 0x10bd1867 */
  if ((C.sf!=C.of)) goto L_10bd1867;
L_10bd1860:;
  /* 10bd1860 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10bd1865 jmp 0x10bd18ca */
  goto L_10bd18ca;
L_10bd1867:;
  /* 10bd1867 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd186b jne 0x10bd1879 */
  if (!C.zf) goto L_10bd1879;
  /* 10bd186d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1870 mov eax, dword ptr [eax*4 + 0x10bfca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10bfca44)));
  /* 10bd1877 jmp 0x10bd18ca */
  goto L_10bd18ca;
L_10bd1879:;
  /* 10bd1879 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd187c mov edx, dword ptr [ecx*4 + 0x10bfca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfca44)));
  /* 10bd1883 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd1886 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd188a jne 0x10bd18a0 */
  if (!C.zf) goto L_10bd18a0;
  /* 10bd188c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10bd188e call dword ptr [0x10c00244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00244))), 0x10bd1894u);
  /* 10bd1894 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1897 mov dword ptr [ecx*4 + 0x10bfca44], eax */
  w32((uint32_t)(ECX*4 + 0x10bfca44), (EAX));
  /* 10bd189e jmp 0x10bd18c7 */
  goto L_10bd18c7;
L_10bd18a0:;
  /* 10bd18a0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd18a4 jne 0x10bd18ba */
  if (!C.zf) goto L_10bd18ba;
  /* 10bd18a6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10bd18a8 call dword ptr [0x10c00244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00244))), 0x10bd18aeu);
  /* 10bd18ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd18b1 mov dword ptr [edx*4 + 0x10bfca44], eax */
  w32((uint32_t)(EDX*4 + 0x10bfca44), (EAX));
  /* 10bd18b8 jmp 0x10bd18c7 */
  goto L_10bd18c7;
L_10bd18ba:;
  /* 10bd18ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd18bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd18c0 mov dword ptr [eax*4 + 0x10bfca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10bfca44), (ECX));
L_10bd18c7:;
  /* 10bd18c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bd18ca:;
  /* 10bd18ca mov esp, ebp */
  ESP = (EBP);
  /* 10bd18cc pop ebp */
  EBP = (pop32());
  /* 10bd18cd ret  */
  ESPCHK(0x10bd1850u, _esp0);
  ESP += 4; return;
}

/* FUN_100018d0 @ 0x10bd18d0 (28 bytes, 11 insns) */
void f_10bd18d0(void) {
  FTRACE(0x10bd18d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd18d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd18d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd18d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd18d4 mov eax, dword ptr [0x10bfff40] */
  EAX = (r32((uint32_t)(0x10bfff40)));
  /* 10bd18d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd18dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd18df mov dword ptr [0x10bfff40], ecx */
  w32((uint32_t)(0x10bfff40), (ECX));
  /* 10bd18e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd18e8 mov esp, ebp */
  ESP = (EBP);
  /* 10bd18ea pop ebp */
  EBP = (pop32());
  /* 10bd18eb ret  */
  ESPCHK(0x10bd18d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100018f0 @ 0x10bd18f0 (912 bytes, 248 insns) */
void f_10bd18f0(void) {
  FTRACE(0x10bd18f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd18f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd18f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd18f3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10bd18f8 call 0x10bd59d0 */
  push32(0x10bd18fdu); f_10bd59d0();
  /* 10bd18fd push edi */
  push32((uint32_t)(EDI));
  /* 10bd18fe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10bd1905 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10bd190a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd190c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10bd1912 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bd1914 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10bd1916 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bd1917 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10bd191e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10bd1923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1925 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10bd192b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bd192d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10bd192f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bd1930 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10bd1937 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10bd193c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd193e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10bd1944 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bd1946 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10bd1948 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10bd1949 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10bd194c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10bd1952 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1956 jl 0x10bd195e */
  if ((C.sf!=C.of)) goto L_10bd195e;
  /* 10bd1958 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd195c jl 0x10bd1966 */
  if ((C.sf!=C.of)) goto L_10bd1966;
L_10bd195e:;
  /* 10bd195e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1961 jmp 0x10bd1c7b */
  goto L_10bd1c7b;
L_10bd1966:;
  /* 10bd1966 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd196a jne 0x10bd1a10 */
  if (!C.zf) goto L_10bd1a10;
  /* 10bd1970 push 0x10bfca34 */
  push32((uint32_t)(0x10bfca34u));
  /* 10bd1975 call dword ptr [0x10c0025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0025c))), 0x10bd197bu);
  /* 10bd197b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd197d jle 0x10bd1a10 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd1a10;
  /* 10bd1983 cmp dword ptr [0x10bfe40c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe40c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd198a jne 0x10bd19ce */
  if (!C.zf) goto L_10bd19ce;
  /* 10bd198c push 0x10bf9234 */
  push32((uint32_t)(0x10bf9234u));
  /* 10bd1991 call dword ptr [0x10c00258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00258))), 0x10bd1997u);
  /* 10bd1997 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10bd199d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd19a4 je 0x10bd19c6 */
  if (C.zf) goto L_10bd19c6;
  /* 10bd19a6 push 0x10bf9228 */
  push32((uint32_t)(0x10bf9228u));
  /* 10bd19ab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10bd19b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd19b2 call dword ptr [0x10c00254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00254))), 0x10bd19b8u);
  /* 10bd19b8 mov dword ptr [0x10bfe40c], eax */
  w32((uint32_t)(0x10bfe40c), (EAX));
  /* 10bd19bd cmp dword ptr [0x10bfe40c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe40c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd19c4 jne 0x10bd19ce */
  if (!C.zf) goto L_10bd19ce;
L_10bd19c6:;
  /* 10bd19c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd19c9 jmp 0x10bd1c7b */
  goto L_10bd1c7b;
L_10bd19ce:;
  /* 10bd19ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd19d1 push edx */
  push32((uint32_t)(EDX));
  /* 10bd19d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd19d5 push eax */
  push32((uint32_t)(EAX));
  /* 10bd19d6 push 0x10bf91f4 */
  push32((uint32_t)(0x10bf91f4u));
  /* 10bd19db lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10bd19e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd19e2 call dword ptr [0x10bfe40c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe40c))), 0x10bd19e8u);
  /* 10bd19e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd19eb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10bd19f1 push edx */
  push32((uint32_t)(EDX));
  /* 10bd19f2 call dword ptr [0x10c00250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00250))), 0x10bd19f8u);
  /* 10bd19f8 push 0x10bfca34 */
  push32((uint32_t)(0x10bfca34u));
  /* 10bd19fd call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10bd1a03u);
  /* 10bd1a03 call 0x10bd17e0 */
  push32(0x10bd1a08u); f_10bd17e0();
  /* 10bd1a08 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1a0b jmp 0x10bd1c7b */
  goto L_10bd1c7b;
L_10bd1a10:;
  /* 10bd1a10 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1a14 je 0x10bd1a4d */
  if (C.zf) goto L_10bd1a4d;
  /* 10bd1a16 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10bd1a1c push eax */
  push32((uint32_t)(EAX));
  /* 10bd1a1d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd1a20 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1a21 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10bd1a26 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10bd1a2c push edx */
  push32((uint32_t)(EDX));
  /* 10bd1a2d call 0x10bd58d0 */
  push32(0x10bd1a32u); f_10bd58d0();
  /* 10bd1a32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1a35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1a37 jge 0x10bd1a4d */
  if ((C.sf==C.of)) goto L_10bd1a4d;
  /* 10bd1a39 push 0x10bf91c8 */
  push32((uint32_t)(0x10bf91c8u));
  /* 10bd1a3e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10bd1a44 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1a45 call 0x10bd57e0 */
  push32(0x10bd1a4au); f_10bd57e0();
  /* 10bd1a4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1a4d:;
  /* 10bd1a4d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1a51 jne 0x10bd1a85 */
  if (!C.zf) goto L_10bd1a85;
  /* 10bd1a53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1a57 je 0x10bd1a65 */
  if (C.zf) goto L_10bd1a65;
  /* 10bd1a59 mov dword ptr [ebp - 0x3028], 0x10bf91b4 */
  w32((uint32_t)(EBP + -0x3028), (0x10bf91b4u));
  /* 10bd1a63 jmp 0x10bd1a6f */
  goto L_10bd1a6f;
L_10bd1a65:;
  /* 10bd1a65 mov dword ptr [ebp - 0x3028], 0x10bf91a0 */
  w32((uint32_t)(EBP + -0x3028), (0x10bf91a0u));
L_10bd1a6f:;
  /* 10bd1a6f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10bd1a75 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1a76 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10bd1a7c push edx */
  push32((uint32_t)(EDX));
  /* 10bd1a7d call 0x10bd57e0 */
  push32(0x10bd1a82u); f_10bd57e0();
  /* 10bd1a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1a85:;
  /* 10bd1a85 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10bd1a8b push eax */
  push32((uint32_t)(EAX));
  /* 10bd1a8c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10bd1a92 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1a93 call 0x10bd57f0 */
  push32(0x10bd1a98u); f_10bd57f0();
  /* 10bd1a98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1a9b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1a9f jne 0x10bd1ada */
  if (!C.zf) goto L_10bd1ada;
  /* 10bd1aa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1aa4 mov eax, dword ptr [edx*4 + 0x10bfca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bfca38)));
  /* 10bd1aab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1ab0 je 0x10bd1ac6 */
  if (C.zf) goto L_10bd1ac6;
  /* 10bd1ab2 push 0x10bf919c */
  push32((uint32_t)(0x10bf919cu));
  /* 10bd1ab7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10bd1abd push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1abe call 0x10bd57f0 */
  push32(0x10bd1ac3u); f_10bd57f0();
  /* 10bd1ac3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1ac6:;
  /* 10bd1ac6 push 0x10bf9198 */
  push32((uint32_t)(0x10bf9198u));
  /* 10bd1acb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10bd1ad1 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1ad2 call 0x10bd57f0 */
  push32(0x10bd1ad7u); f_10bd57f0();
  /* 10bd1ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1ada:;
  /* 10bd1ada cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1ade je 0x10bd1b22 */
  if (C.zf) goto L_10bd1b22;
  /* 10bd1ae0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10bd1ae6 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1ae7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd1aea push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1aeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd1aee push edx */
  push32((uint32_t)(EDX));
  /* 10bd1aef push 0x10bf918c */
  push32((uint32_t)(0x10bf918cu));
  /* 10bd1af4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bd1af9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10bd1aff push eax */
  push32((uint32_t)(EAX));
  /* 10bd1b00 call 0x10bd56e0 */
  push32(0x10bd1b05u); f_10bd56e0();
  /* 10bd1b05 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1b0a jge 0x10bd1b20 */
  if ((C.sf==C.of)) goto L_10bd1b20;
  /* 10bd1b0c push 0x10bf91c8 */
  push32((uint32_t)(0x10bf91c8u));
  /* 10bd1b11 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10bd1b17 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1b18 call 0x10bd57e0 */
  push32(0x10bd1b1du); f_10bd57e0();
  /* 10bd1b1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1b20:;
  /* 10bd1b20 jmp 0x10bd1b38 */
  goto L_10bd1b38;
L_10bd1b22:;
  /* 10bd1b22 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10bd1b28 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1b29 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10bd1b2f push eax */
  push32((uint32_t)(EAX));
  /* 10bd1b30 call 0x10bd57e0 */
  push32(0x10bd1b35u); f_10bd57e0();
  /* 10bd1b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1b38:;
  /* 10bd1b38 cmp dword ptr [0x10bfff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1b3f je 0x10bd1b7c */
  if (C.zf) goto L_10bd1b7c;
  /* 10bd1b41 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10bd1b47 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1b48 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10bd1b4e push edx */
  push32((uint32_t)(EDX));
  /* 10bd1b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1b52 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1b53 call dword ptr [0x10bfff40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfff40))), 0x10bd1b59u);
  /* 10bd1b59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1b5e je 0x10bd1b7c */
  if (C.zf) goto L_10bd1b7c;
  /* 10bd1b60 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1b64 jne 0x10bd1b71 */
  if (!C.zf) goto L_10bd1b71;
  /* 10bd1b66 push 0x10bfca34 */
  push32((uint32_t)(0x10bfca34u));
  /* 10bd1b6b call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10bd1b71u);
L_10bd1b71:;
  /* 10bd1b71 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10bd1b77 jmp 0x10bd1c7b */
  goto L_10bd1c7b;
L_10bd1b7c:;
  /* 10bd1b7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1b7f mov edx, dword ptr [ecx*4 + 0x10bfca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfca38)));
  /* 10bd1b86 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd1b89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd1b8b je 0x10bd1bcb */
  if (C.zf) goto L_10bd1bcb;
  /* 10bd1b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1b90 cmp dword ptr [eax*4 + 0x10bfca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10bfca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1b98 je 0x10bd1bcb */
  if (C.zf) goto L_10bd1bcb;
  /* 10bd1b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1b9c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10bd1ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1ba3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10bd1ba9 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1baa call 0x10bd5660 */
  push32(0x10bd1bafu); f_10bd5660();
  /* 10bd1baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1bb2 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1bb3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10bd1bb9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1bba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1bbd mov edx, dword ptr [ecx*4 + 0x10bfca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfca44)));
  /* 10bd1bc4 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1bc5 call dword ptr [0x10c00248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00248))), 0x10bd1bcbu);
L_10bd1bcb:;
  /* 10bd1bcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1bce mov ecx, dword ptr [eax*4 + 0x10bfca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10bfca38)));
  /* 10bd1bd5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd1bd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd1bda je 0x10bd1be9 */
  if (C.zf) goto L_10bd1be9;
  /* 10bd1bdc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10bd1be2 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1be3 call dword ptr [0x10c00250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00250))), 0x10bd1be9u);
L_10bd1be9:;
  /* 10bd1be9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1bec mov ecx, dword ptr [eax*4 + 0x10bfca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10bfca38)));
  /* 10bd1bf3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd1bf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd1bf8 je 0x10bd1c68 */
  if (C.zf) goto L_10bd1c68;
  /* 10bd1bfa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1bfe je 0x10bd1c1d */
  if (C.zf) goto L_10bd1c1d;
  /* 10bd1c00 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bd1c02 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10bd1c08 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1c09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd1c0c push eax */
  push32((uint32_t)(EAX));
  /* 10bd1c0d call 0x10bd5370 */
  push32(0x10bd1c12u); f_10bd5370();
  /* 10bd1c12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1c15 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10bd1c1b jmp 0x10bd1c27 */
  goto L_10bd1c27;
L_10bd1c1d:;
  /* 10bd1c1d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10bd1c27:;
  /* 10bd1c27 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10bd1c2d push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1c2e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd1c31 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1c32 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10bd1c38 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1c39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd1c3c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1c3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1c40 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1c41 call 0x10bd1c80 */
  push32(0x10bd1c46u); f_10bd1c80();
  /* 10bd1c46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1c49 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10bd1c4f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1c53 jne 0x10bd1c60 */
  if (!C.zf) goto L_10bd1c60;
  /* 10bd1c55 push 0x10bfca34 */
  push32((uint32_t)(0x10bfca34u));
  /* 10bd1c5a call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10bd1c60u);
L_10bd1c60:;
  /* 10bd1c60 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10bd1c66 jmp 0x10bd1c7b */
  goto L_10bd1c7b;
L_10bd1c68:;
  /* 10bd1c68 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1c6c jne 0x10bd1c79 */
  if (!C.zf) goto L_10bd1c79;
  /* 10bd1c6e push 0x10bfca34 */
  push32((uint32_t)(0x10bfca34u));
  /* 10bd1c73 call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10bd1c79u);
L_10bd1c79:;
  /* 10bd1c79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd1c7b:;
  /* 10bd1c7b pop edi */
  EDI = (pop32());
  /* 10bd1c7c mov esp, ebp */
  ESP = (EBP);
  /* 10bd1c7e pop ebp */
  EBP = (pop32());
  /* 10bd1c7f ret  */
  ESPCHK(0x10bd18f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c80 @ 0x10bd1c80 (780 bytes, 197 insns) */
void f_10bd1c80(void) {
  FTRACE(0x10bd1c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1c81 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1c83 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10bd1c88 call 0x10bd59d0 */
  push32(0x10bd1c8du); f_10bd59d0();
L_10bd1c8d:;
  /* 10bd1c8d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1c91 jne 0x10bd1cb8 */
  if (!C.zf) goto L_10bd1cb8;
  /* 10bd1c93 push 0x10bf9384 */
  push32((uint32_t)(0x10bf9384u));
  /* 10bd1c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1c9a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10bd1c9f push 0x10bf9378 */
  push32((uint32_t)(0x10bf9378u));
  /* 10bd1ca4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd1ca6 call 0x10bd18f0 */
  push32(0x10bd1cabu); f_10bd18f0();
  /* 10bd1cab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1cae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1cb1 jne 0x10bd1cb8 */
  if (!C.zf) goto L_10bd1cb8;
  /* 10bd1cb3 call 0x10bd17e0 */
  push32(0x10bd1cb8u); f_10bd17e0();
L_10bd1cb8:;
  /* 10bd1cb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd1cba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1cbc jne 0x10bd1c8d */
  if (!C.zf) goto L_10bd1c8d;
  /* 10bd1cbe push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10bd1cc3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10bd1cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1ccc call dword ptr [0x10c00260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00260))), 0x10bd1cd2u);
  /* 10bd1cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1cd4 jne 0x10bd1cea */
  if (!C.zf) goto L_10bd1cea;
  /* 10bd1cd6 push 0x10bf9360 */
  push32((uint32_t)(0x10bf9360u));
  /* 10bd1cdb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10bd1ce1 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1ce2 call 0x10bd57e0 */
  push32(0x10bd1ce7u); f_10bd57e0();
  /* 10bd1ce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1cea:;
  /* 10bd1cea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10bd1cf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd1cf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd1cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1cf7 call 0x10bd5660 */
  push32(0x10bd1cfcu); f_10bd5660();
  /* 10bd1cfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1cff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1d02 jbe 0x10bd1d2d */
  if ((C.cf||C.zf)) goto L_10bd1d2d;
  /* 10bd1d04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd1d07 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1d08 call 0x10bd5660 */
  push32(0x10bd1d0du); f_10bd5660();
  /* 10bd1d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1d10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd1d13 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10bd1d17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd1d1a push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd1d1c push 0x10bf935c */
  push32((uint32_t)(0x10bf935cu));
  /* 10bd1d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd1d24 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1d25 call 0x10bd6050 */
  push32(0x10bd1d2au); f_10bd6050();
  /* 10bd1d2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1d2d:;
  /* 10bd1d2d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd1d30 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10bd1d36 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1d3d je 0x10bd1d88 */
  if (C.zf) goto L_10bd1d88;
  /* 10bd1d3f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10bd1d45 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1d46 call 0x10bd5660 */
  push32(0x10bd1d4bu); f_10bd5660();
  /* 10bd1d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1d4e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1d51 jbe 0x10bd1d88 */
  if ((C.cf||C.zf)) goto L_10bd1d88;
  /* 10bd1d53 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10bd1d59 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1d5a call 0x10bd5660 */
  push32(0x10bd1d5fu); f_10bd5660();
  /* 10bd1d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1d62 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10bd1d68 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10bd1d6c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10bd1d72 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd1d74 push 0x10bf935c */
  push32((uint32_t)(0x10bf935cu));
  /* 10bd1d79 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10bd1d7f push eax */
  push32((uint32_t)(EAX));
  /* 10bd1d80 call 0x10bd6050 */
  push32(0x10bd1d85u); f_10bd6050();
  /* 10bd1d85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1d88:;
  /* 10bd1d88 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1d8c jne 0x10bd1d9a */
  if (!C.zf) goto L_10bd1d9a;
  /* 10bd1d8e mov dword ptr [ebp - 0x1114], 0x10bf92e8 */
  w32((uint32_t)(EBP + -0x1114), (0x10bf92e8u));
  /* 10bd1d98 jmp 0x10bd1da4 */
  goto L_10bd1da4;
L_10bd1d9a:;
  /* 10bd1d9a mov dword ptr [ebp - 0x1114], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x1114), (0x10bf9088u));
L_10bd1da4:;
  /* 10bd1da4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd1da7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bd1daa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd1dac je 0x10bd1db9 */
  if (C.zf) goto L_10bd1db9;
  /* 10bd1dae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd1db1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10bd1db7 jmp 0x10bd1dc3 */
  goto L_10bd1dc3;
L_10bd1db9:;
  /* 10bd1db9 mov dword ptr [ebp - 0x1118], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x1118), (0x10bf9088u));
L_10bd1dc3:;
  /* 10bd1dc3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd1dc6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bd1dc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd1dcb je 0x10bd1ddf */
  if (C.zf) goto L_10bd1ddf;
  /* 10bd1dcd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1dd1 jne 0x10bd1ddf */
  if (!C.zf) goto L_10bd1ddf;
  /* 10bd1dd3 mov dword ptr [ebp - 0x111c], 0x10bf92d8 */
  w32((uint32_t)(EBP + -0x111c), (0x10bf92d8u));
  /* 10bd1ddd jmp 0x10bd1de9 */
  goto L_10bd1de9;
L_10bd1ddf:;
  /* 10bd1ddf mov dword ptr [ebp - 0x111c], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x111c), (0x10bf9088u));
L_10bd1de9:;
  /* 10bd1de9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd1dec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd1def test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd1df1 je 0x10bd1dff */
  if (C.zf) goto L_10bd1dff;
  /* 10bd1df3 mov dword ptr [ebp - 0x1120], 0x10bf92d4 */
  w32((uint32_t)(EBP + -0x1120), (0x10bf92d4u));
  /* 10bd1dfd jmp 0x10bd1e09 */
  goto L_10bd1e09;
L_10bd1dff:;
  /* 10bd1dff mov dword ptr [ebp - 0x1120], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x1120), (0x10bf9088u));
L_10bd1e09:;
  /* 10bd1e09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1e0d je 0x10bd1e1a */
  if (C.zf) goto L_10bd1e1a;
  /* 10bd1e0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd1e12 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10bd1e18 jmp 0x10bd1e24 */
  goto L_10bd1e24;
L_10bd1e1a:;
  /* 10bd1e1a mov dword ptr [ebp - 0x1124], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x1124), (0x10bf9088u));
L_10bd1e24:;
  /* 10bd1e24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1e28 je 0x10bd1e36 */
  if (C.zf) goto L_10bd1e36;
  /* 10bd1e2a mov dword ptr [ebp - 0x1128], 0x10bf92cc */
  w32((uint32_t)(EBP + -0x1128), (0x10bf92ccu));
  /* 10bd1e34 jmp 0x10bd1e40 */
  goto L_10bd1e40;
L_10bd1e36:;
  /* 10bd1e36 mov dword ptr [ebp - 0x1128], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x1128), (0x10bf9088u));
L_10bd1e40:;
  /* 10bd1e40 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1e44 je 0x10bd1e51 */
  if (C.zf) goto L_10bd1e51;
  /* 10bd1e46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd1e49 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10bd1e4f jmp 0x10bd1e5b */
  goto L_10bd1e5b;
L_10bd1e51:;
  /* 10bd1e51 mov dword ptr [ebp - 0x112c], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x112c), (0x10bf9088u));
L_10bd1e5b:;
  /* 10bd1e5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1e5f je 0x10bd1e6d */
  if (C.zf) goto L_10bd1e6d;
  /* 10bd1e61 mov dword ptr [ebp - 0x1130], 0x10bf92c4 */
  w32((uint32_t)(EBP + -0x1130), (0x10bf92c4u));
  /* 10bd1e6b jmp 0x10bd1e77 */
  goto L_10bd1e77;
L_10bd1e6d:;
  /* 10bd1e6d mov dword ptr [ebp - 0x1130], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x1130), (0x10bf9088u));
L_10bd1e77:;
  /* 10bd1e77 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1e7e je 0x10bd1e8e */
  if (C.zf) goto L_10bd1e8e;
  /* 10bd1e80 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10bd1e86 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10bd1e8c jmp 0x10bd1e98 */
  goto L_10bd1e98;
L_10bd1e8e:;
  /* 10bd1e8e mov dword ptr [ebp - 0x1134], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x1134), (0x10bf9088u));
L_10bd1e98:;
  /* 10bd1e98 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1e9f je 0x10bd1ead */
  if (C.zf) goto L_10bd1ead;
  /* 10bd1ea1 mov dword ptr [ebp - 0x1138], 0x10bf92b8 */
  w32((uint32_t)(EBP + -0x1138), (0x10bf92b8u));
  /* 10bd1eab jmp 0x10bd1eb7 */
  goto L_10bd1eb7;
L_10bd1ead:;
  /* 10bd1ead mov dword ptr [ebp - 0x1138], 0x10bf9088 */
  w32((uint32_t)(EBP + -0x1138), (0x10bf9088u));
L_10bd1eb7:;
  /* 10bd1eb7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10bd1ebd push edx */
  push32((uint32_t)(EDX));
  /* 10bd1ebe mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10bd1ec4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1ec5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10bd1ecb push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1ecc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10bd1ed2 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1ed3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10bd1ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1eda mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10bd1ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1ee1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10bd1ee7 push edx */
  push32((uint32_t)(EDX));
  /* 10bd1ee8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10bd1eee push eax */
  push32((uint32_t)(EAX));
  /* 10bd1eef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10bd1ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1ef6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10bd1efc push edx */
  push32((uint32_t)(EDX));
  /* 10bd1efd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd1f00 push eax */
  push32((uint32_t)(EAX));
  /* 10bd1f01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1f04 mov edx, dword ptr [ecx*4 + 0x10bfca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfca50)));
  /* 10bd1f0b push edx */
  push32((uint32_t)(EDX));
  /* 10bd1f0c push 0x10bf9264 */
  push32((uint32_t)(0x10bf9264u));
  /* 10bd1f11 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bd1f16 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10bd1f1c push eax */
  push32((uint32_t)(EAX));
  /* 10bd1f1d call 0x10bd56e0 */
  push32(0x10bd1f22u); f_10bd56e0();
  /* 10bd1f22 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd1f27 jge 0x10bd1f3d */
  if ((C.sf==C.of)) goto L_10bd1f3d;
  /* 10bd1f29 push 0x10bf91c8 */
  push32((uint32_t)(0x10bf91c8u));
  /* 10bd1f2e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10bd1f34 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd1f35 call 0x10bd57e0 */
  push32(0x10bd1f3au); f_10bd57e0();
  /* 10bd1f3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd1f3d:;
  /* 10bd1f3d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10bd1f42 push 0x10bf9240 */
  push32((uint32_t)(0x10bf9240u));
  /* 10bd1f47 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10bd1f4d push edx */
  push32((uint32_t)(EDX));
  /* 10bd1f4e call 0x10bd5f90 */
  push32(0x10bd1f53u); f_10bd5f90();
  /* 10bd1f53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1f56 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10bd1f5c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1f63 jne 0x10bd1f76 */
  if (!C.zf) goto L_10bd1f76;
  /* 10bd1f65 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bd1f67 call 0x10bd5cd0 */
  push32(0x10bd1f6cu); f_10bd5cd0();
  /* 10bd1f6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1f6f push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd1f71 call 0x10bd1ff0 */
  push32(0x10bd1f76u); f_10bd1ff0();
L_10bd1f76:;
  /* 10bd1f76 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1f7d jne 0x10bd1f86 */
  if (!C.zf) goto L_10bd1f86;
  /* 10bd1f7f mov eax, 1 */
  EAX = (0x1u);
  /* 10bd1f84 jmp 0x10bd1f88 */
  goto L_10bd1f88;
L_10bd1f86:;
  /* 10bd1f86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd1f88:;
  /* 10bd1f88 mov esp, ebp */
  ESP = (EBP);
  /* 10bd1f8a pop ebp */
  EBP = (pop32());
  /* 10bd1f8b ret  */
  ESPCHK(0x10bd1c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f90 @ 0x10bd1f90 (56 bytes, 15 insns) */
void f_10bd1f90(void) {
  FTRACE(0x10bd1f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1f91 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1f93 cmp dword ptr [0x10bfff3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd1f9a je 0x10bd1fa2 */
  if (C.zf) goto L_10bd1fa2;
  /* 10bd1f9c call dword ptr [0x10bfff3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfff3c))), 0x10bd1fa2u);
L_10bd1fa2:;
  /* 10bd1fa2 push 0x10bfc418 */
  push32((uint32_t)(0x10bfc418u));
  /* 10bd1fa7 push 0x10bfc208 */
  push32((uint32_t)(0x10bfc208u));
  /* 10bd1fac call 0x10bd2160 */
  push32(0x10bd1fb1u); f_10bd2160();
  /* 10bd1fb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1fb4 push 0x10bfc104 */
  push32((uint32_t)(0x10bfc104u));
  /* 10bd1fb9 push 0x10bfc000 */
  push32((uint32_t)(0x10bfc000u));
  /* 10bd1fbe call 0x10bd2160 */
  push32(0x10bd1fc3u); f_10bd2160();
  /* 10bd1fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1fc6 pop ebp */
  EBP = (pop32());
  /* 10bd1fc7 ret  */
  ESPCHK(0x10bd1f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fd0 @ 0x10bd1fd0 (21 bytes, 10 insns) */
void f_10bd1fd0(void) {
  FTRACE(0x10bd1fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1fd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1fda push eax */
  push32((uint32_t)(EAX));
  /* 10bd1fdb call 0x10bd2050 */
  push32(0x10bd1fe0u); f_10bd2050();
  /* 10bd1fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd1fe3 pop ebp */
  EBP = (pop32());
  /* 10bd1fe4 ret  */
  ESPCHK(0x10bd1fd0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10bd1ff0 (21 bytes, 10 insns) */
void f_10bd1ff0(void) {
  FTRACE(0x10bd1ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd1ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd1ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd1ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd1ff5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd1ff7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd1ffa push eax */
  push32((uint32_t)(EAX));
  /* 10bd1ffb call 0x10bd2050 */
  push32(0x10bd2000u); f_10bd2050();
  /* 10bd2000 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2003 pop ebp */
  EBP = (pop32());
  /* 10bd2004 ret  */
  ESPCHK(0x10bd1ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002010 @ 0x10bd2010 (19 bytes, 9 insns) */
void f_10bd2010(void) {
  FTRACE(0x10bd2010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2010 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2011 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2013 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2015 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2017 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2019 call 0x10bd2050 */
  push32(0x10bd201eu); f_10bd2050();
  /* 10bd201e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2021 pop ebp */
  EBP = (pop32());
  /* 10bd2022 ret  */
  ESPCHK(0x10bd2010u, _esp0);
  ESP += 4; return;
}

/* FUN_10002030 @ 0x10bd2030 (19 bytes, 9 insns) */
void f_10bd2030(void) {
  FTRACE(0x10bd2030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2030 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2031 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2033 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2035 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2037 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2039 call 0x10bd2050 */
  push32(0x10bd203eu); f_10bd2050();
  /* 10bd203e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2041 pop ebp */
  EBP = (pop32());
  /* 10bd2042 ret  */
  ESPCHK(0x10bd2030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002050 @ 0x10bd2050 (227 bytes, 61 insns) */
void f_10bd2050(void) {
  FTRACE(0x10bd2050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2050 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2051 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2053 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2054 call 0x10bd2140 */
  push32(0x10bd2059u); f_10bd2140();
  /* 10bd2059 cmp dword ptr [0x10bfe450], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe450))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2060 jne 0x10bd2073 */
  if (!C.zf) goto L_10bd2073;
  /* 10bd2062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2065 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2066 call dword ptr [0x10c0026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0026c))), 0x10bd206cu);
  /* 10bd206c push eax */
  push32((uint32_t)(EAX));
  /* 10bd206d call dword ptr [0x10c00268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00268))), 0x10bd2073u);
L_10bd2073:;
  /* 10bd2073 mov dword ptr [0x10bfe44c], 1 */
  w32((uint32_t)(0x10bfe44c), (0x1u));
  /* 10bd207d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10bd2080 mov byte ptr [0x10bfe448], cl */
  w8((uint32_t)(0x10bfe448), (CL));
  /* 10bd2086 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd208a jne 0x10bd20d3 */
  if (!C.zf) goto L_10bd20d3;
  /* 10bd208c cmp dword ptr [0x10bfff38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2093 je 0x10bd20c1 */
  if (C.zf) goto L_10bd20c1;
  /* 10bd2095 mov edx, dword ptr [0x10bfff34] */
  EDX = (r32((uint32_t)(0x10bfff34)));
  /* 10bd209b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd209e:;
  /* 10bd209e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd20a1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd20a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd20a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd20aa cmp ecx, dword ptr [0x10bfff38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfff38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd20b0 jb 0x10bd20c1 */
  if (C.cf) goto L_10bd20c1;
  /* 10bd20b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd20b5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd20b8 je 0x10bd20bf */
  if (C.zf) goto L_10bd20bf;
  /* 10bd20ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd20bd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10bd20bfu);
L_10bd20bf:;
  /* 10bd20bf jmp 0x10bd209e */
  goto L_10bd209e;
L_10bd20c1:;
  /* 10bd20c1 push 0x10bfc724 */
  push32((uint32_t)(0x10bfc724u));
  /* 10bd20c6 push 0x10bfc51c */
  push32((uint32_t)(0x10bfc51cu));
  /* 10bd20cb call 0x10bd2160 */
  push32(0x10bd20d0u); f_10bd2160();
  /* 10bd20d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd20d3:;
  /* 10bd20d3 push 0x10bfc92c */
  push32((uint32_t)(0x10bfc92cu));
  /* 10bd20d8 push 0x10bfc828 */
  push32((uint32_t)(0x10bfc828u));
  /* 10bd20dd call 0x10bd2160 */
  push32(0x10bd20e2u); f_10bd2160();
  /* 10bd20e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd20e5 cmp dword ptr [0x10bfe454], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe454))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd20ec jne 0x10bd210e */
  if (!C.zf) goto L_10bd210e;
  /* 10bd20ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bd20f0 call 0x10bd3d40 */
  push32(0x10bd20f5u); f_10bd3d40();
  /* 10bd20f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd20f8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd20fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd20fd je 0x10bd210e */
  if (C.zf) goto L_10bd210e;
  /* 10bd20ff mov dword ptr [0x10bfe454], 1 */
  w32((uint32_t)(0x10bfe454), (0x1u));
  /* 10bd2109 call 0x10bd4650 */
  push32(0x10bd210eu); f_10bd4650();
L_10bd210e:;
  /* 10bd210e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2112 je 0x10bd211b */
  if (C.zf) goto L_10bd211b;
  /* 10bd2114 call 0x10bd2150 */
  push32(0x10bd2119u); f_10bd2150();
  /* 10bd2119 jmp 0x10bd212f */
  goto L_10bd212f;
L_10bd211b:;
  /* 10bd211b mov dword ptr [0x10bfe450], 1 */
  w32((uint32_t)(0x10bfe450), (0x1u));
  /* 10bd2125 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2128 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2129 call dword ptr [0x10c00264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00264))), 0x10bd212fu);
L_10bd212f:;
  /* 10bd212f mov esp, ebp */
  ESP = (EBP);
  /* 10bd2131 pop ebp */
  EBP = (pop32());
  /* 10bd2132 ret  */
  ESPCHK(0x10bd2050u, _esp0);
  ESP += 4; return;
}

/* FUN_10002140 @ 0x10bd2140 (15 bytes, 7 insns) */
void f_10bd2140(void) {
  FTRACE(0x10bd2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2140 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2141 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2143 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bd2145 call 0x10bd6230 */
  push32(0x10bd214au); f_10bd6230();
  /* 10bd214a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd214d pop ebp */
  EBP = (pop32());
  /* 10bd214e ret  */
  ESPCHK(0x10bd2140u, _esp0);
  ESP += 4; return;
}

/* FUN_10002150 @ 0x10bd2150 (15 bytes, 7 insns) */
void f_10bd2150(void) {
  FTRACE(0x10bd2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2150 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2151 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2153 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10bd2155 call 0x10bd62d0 */
  push32(0x10bd215au); f_10bd62d0();
  /* 10bd215a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd215d pop ebp */
  EBP = (pop32());
  /* 10bd215e ret  */
  ESPCHK(0x10bd2150u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10bd2160 (37 bytes, 16 insns) */
void f_10bd2160(void) {
  FTRACE(0x10bd2160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2160 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2161 mov ebp, esp */
  EBP = (ESP);
L_10bd2163:;
  /* 10bd2163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2166 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2169 jae 0x10bd2183 */
  if (!C.cf) goto L_10bd2183;
  /* 10bd216b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd216e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2171 je 0x10bd2178 */
  if (C.zf) goto L_10bd2178;
  /* 10bd2173 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2176 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10bd2178u);
L_10bd2178:;
  /* 10bd2178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd217b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd217e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bd2181 jmp 0x10bd2163 */
  goto L_10bd2163;
L_10bd2183:;
  /* 10bd2183 pop ebp */
  EBP = (pop32());
  /* 10bd2184 ret  */
  ESPCHK(0x10bd2160u, _esp0);
  ESP += 4; return;
}

/* FUN_10002190 @ 0x10bd2190 (130 bytes, 42 insns) */
void f_10bd2190(void) {
  FTRACE(0x10bd2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2190 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2191 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2193 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2194 call 0x10bd6150 */
  push32(0x10bd2199u); f_10bd6150();
  /* 10bd2199 call dword ptr [0x10c00278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00278))), 0x10bd219fu);
  /* 10bd219f mov dword ptr [0x10bfca5c], eax */
  w32((uint32_t)(0x10bfca5c), (EAX));
  /* 10bd21a4 cmp dword ptr [0x10bfca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd21ab jne 0x10bd21b1 */
  if (!C.zf) goto L_10bd21b1;
  /* 10bd21ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd21af jmp 0x10bd220e */
  goto L_10bd220e;
L_10bd21b1:;
  /* 10bd21b1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10bd21b3 push 0x10bf939c */
  push32((uint32_t)(0x10bf939cu));
  /* 10bd21b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd21ba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10bd21bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd21be call 0x10bd2c40 */
  push32(0x10bd21c3u); f_10bd2c40();
  /* 10bd21c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd21c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd21c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd21cd je 0x10bd21e4 */
  if (C.zf) goto L_10bd21e4;
  /* 10bd21cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd21d2 push eax */
  push32((uint32_t)(EAX));
  /* 10bd21d3 mov ecx, dword ptr [0x10bfca5c] */
  ECX = (r32((uint32_t)(0x10bfca5c)));
  /* 10bd21d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd21da call dword ptr [0x10c00274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00274))), 0x10bd21e0u);
  /* 10bd21e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd21e2 jne 0x10bd21e8 */
  if (!C.zf) goto L_10bd21e8;
L_10bd21e4:;
  /* 10bd21e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd21e6 jmp 0x10bd220e */
  goto L_10bd220e;
L_10bd21e8:;
  /* 10bd21e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd21eb push edx */
  push32((uint32_t)(EDX));
  /* 10bd21ec call 0x10bd2250 */
  push32(0x10bd21f1u); f_10bd2250();
  /* 10bd21f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd21f4 call dword ptr [0x10c00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00270))), 0x10bd21fau);
  /* 10bd21fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd21fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd21ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2202 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10bd2209 mov eax, 1 */
  EAX = (0x1u);
L_10bd220e:;
  /* 10bd220e mov esp, ebp */
  ESP = (EBP);
  /* 10bd2210 pop ebp */
  EBP = (pop32());
  /* 10bd2211 ret  */
  ESPCHK(0x10bd2190u, _esp0);
  ESP += 4; return;
}

/* FUN_10002220 @ 0x10bd2220 (41 bytes, 11 insns) */
void f_10bd2220(void) {
  FTRACE(0x10bd2220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2220 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2221 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2223 call 0x10bd6190 */
  push32(0x10bd2228u); f_10bd6190();
  /* 10bd2228 cmp dword ptr [0x10bfca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd222f je 0x10bd2247 */
  if (C.zf) goto L_10bd2247;
  /* 10bd2231 mov eax, dword ptr [0x10bfca5c] */
  EAX = (r32((uint32_t)(0x10bfca5c)));
  /* 10bd2236 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2237 call dword ptr [0x10c0027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0027c))), 0x10bd223du);
  /* 10bd223d mov dword ptr [0x10bfca5c], 0xffffffff */
  w32((uint32_t)(0x10bfca5c), (0xffffffffu));
L_10bd2247:;
  /* 10bd2247 pop ebp */
  EBP = (pop32());
  /* 10bd2248 ret  */
  ESPCHK(0x10bd2220u, _esp0);
  ESP += 4; return;
}

/* FUN_10002250 @ 0x10bd2250 (25 bytes, 8 insns) */
void f_10bd2250(void) {
  FTRACE(0x10bd2250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2250 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2251 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2256 mov dword ptr [eax + 0x50], 0x10bfcc00 */
  w32((uint32_t)(EAX + 0x50), (0x10bfcc00u));
  /* 10bd225d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2260 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10bd2267 pop ebp */
  EBP = (pop32());
  /* 10bd2268 ret  */
  ESPCHK(0x10bd2250u, _esp0);
  ESP += 4; return;
}

/* FUN_10002270 @ 0x10bd2270 (152 bytes, 48 insns) */
void f_10bd2270(void) {
  FTRACE(0x10bd2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2270 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2271 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd2276 call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bd227cu);
  /* 10bd227c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd227f mov eax, dword ptr [0x10bfca5c] */
  EAX = (r32((uint32_t)(0x10bfca5c)));
  /* 10bd2284 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2285 call dword ptr [0x10c00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00284))), 0x10bd228bu);
  /* 10bd228b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd228e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2292 jne 0x10bd22f7 */
  if (!C.zf) goto L_10bd22f7;
  /* 10bd2294 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10bd2299 push 0x10bf939c */
  push32((uint32_t)(0x10bf939cu));
  /* 10bd229e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd22a0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10bd22a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd22a4 call 0x10bd2c40 */
  push32(0x10bd22a9u); f_10bd2c40();
  /* 10bd22a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd22ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd22af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd22b3 je 0x10bd22ed */
  if (C.zf) goto L_10bd22ed;
  /* 10bd22b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd22b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd22b9 mov edx, dword ptr [0x10bfca5c] */
  EDX = (r32((uint32_t)(0x10bfca5c)));
  /* 10bd22bf push edx */
  push32((uint32_t)(EDX));
  /* 10bd22c0 call dword ptr [0x10c00274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00274))), 0x10bd22c6u);
  /* 10bd22c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd22c8 je 0x10bd22ed */
  if (C.zf) goto L_10bd22ed;
  /* 10bd22ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd22cd push eax */
  push32((uint32_t)(EAX));
  /* 10bd22ce call 0x10bd2250 */
  push32(0x10bd22d3u); f_10bd2250();
  /* 10bd22d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd22d6 call dword ptr [0x10c00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00270))), 0x10bd22dcu);
  /* 10bd22dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd22df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd22e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd22e4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10bd22eb jmp 0x10bd22f7 */
  goto L_10bd22f7;
L_10bd22ed:;
  /* 10bd22ed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bd22ef call 0x10bd17a0 */
  push32(0x10bd22f4u); f_10bd17a0();
  /* 10bd22f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd22f7:;
  /* 10bd22f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd22fa push eax */
  push32((uint32_t)(EAX));
  /* 10bd22fb call dword ptr [0x10c00280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00280))), 0x10bd2301u);
  /* 10bd2301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2304 mov esp, ebp */
  ESP = (EBP);
  /* 10bd2306 pop ebp */
  EBP = (pop32());
  /* 10bd2307 ret  */
  ESPCHK(0x10bd2270u, _esp0);
  ESP += 4; return;
}

/* FUN_10002310 @ 0x10bd2310 (263 bytes, 86 insns) */
void f_10bd2310(void) {
  FTRACE(0x10bd2310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2310 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2311 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2313 cmp dword ptr [0x10bfca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd231a je 0x10bd2415 */
  if (C.zf) goto L_10bd2415;
  /* 10bd2320 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2324 jne 0x10bd2335 */
  if (!C.zf) goto L_10bd2335;
  /* 10bd2326 mov eax, dword ptr [0x10bfca5c] */
  EAX = (r32((uint32_t)(0x10bfca5c)));
  /* 10bd232b push eax */
  push32((uint32_t)(EAX));
  /* 10bd232c call dword ptr [0x10c00284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00284))), 0x10bd2332u);
  /* 10bd2332 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10bd2335:;
  /* 10bd2335 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2339 je 0x10bd2406 */
  if (C.zf) goto L_10bd2406;
  /* 10bd233f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2342 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2346 je 0x10bd2359 */
  if (C.zf) goto L_10bd2359;
  /* 10bd2348 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd234a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd234d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10bd2350 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2351 call 0x10bd32c0 */
  push32(0x10bd2356u); f_10bd32c0();
  /* 10bd2356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd2359:;
  /* 10bd2359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd235c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2360 je 0x10bd2373 */
  if (C.zf) goto L_10bd2373;
  /* 10bd2362 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2367 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10bd236a push eax */
  push32((uint32_t)(EAX));
  /* 10bd236b call 0x10bd32c0 */
  push32(0x10bd2370u); f_10bd32c0();
  /* 10bd2370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd2373:;
  /* 10bd2373 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2376 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd237a je 0x10bd238d */
  if (C.zf) goto L_10bd238d;
  /* 10bd237c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd237e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2381 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10bd2384 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2385 call 0x10bd32c0 */
  push32(0x10bd238au); f_10bd32c0();
  /* 10bd238a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd238d:;
  /* 10bd238d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2390 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2394 je 0x10bd23a7 */
  if (C.zf) goto L_10bd23a7;
  /* 10bd2396 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2398 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd239b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10bd239e push eax */
  push32((uint32_t)(EAX));
  /* 10bd239f call 0x10bd32c0 */
  push32(0x10bd23a4u); f_10bd32c0();
  /* 10bd23a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd23a7:;
  /* 10bd23a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd23aa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd23ae je 0x10bd23c1 */
  if (C.zf) goto L_10bd23c1;
  /* 10bd23b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd23b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd23b5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10bd23b8 push eax */
  push32((uint32_t)(EAX));
  /* 10bd23b9 call 0x10bd32c0 */
  push32(0x10bd23beu); f_10bd32c0();
  /* 10bd23be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd23c1:;
  /* 10bd23c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd23c4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd23c8 je 0x10bd23db */
  if (C.zf) goto L_10bd23db;
  /* 10bd23ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd23cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd23cf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10bd23d2 push eax */
  push32((uint32_t)(EAX));
  /* 10bd23d3 call 0x10bd32c0 */
  push32(0x10bd23d8u); f_10bd32c0();
  /* 10bd23d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd23db:;
  /* 10bd23db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd23de cmp dword ptr [ecx + 0x50], 0x10bfcc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10bfcc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd23e5 je 0x10bd23f8 */
  if (C.zf) goto L_10bd23f8;
  /* 10bd23e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd23e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd23ec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10bd23ef push eax */
  push32((uint32_t)(EAX));
  /* 10bd23f0 call 0x10bd32c0 */
  push32(0x10bd23f5u); f_10bd32c0();
  /* 10bd23f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd23f8:;
  /* 10bd23f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd23fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd23fd push ecx */
  push32((uint32_t)(ECX));
  /* 10bd23fe call 0x10bd32c0 */
  push32(0x10bd2403u); f_10bd32c0();
  /* 10bd2403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd2406:;
  /* 10bd2406 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2408 mov edx, dword ptr [0x10bfca5c] */
  EDX = (r32((uint32_t)(0x10bfca5c)));
  /* 10bd240e push edx */
  push32((uint32_t)(EDX));
  /* 10bd240f call dword ptr [0x10c00274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00274))), 0x10bd2415u);
L_10bd2415:;
  /* 10bd2415 pop ebp */
  EBP = (pop32());
  /* 10bd2416 ret  */
  ESPCHK(0x10bd2310u, _esp0);
  ESP += 4; return;
}

/* FUN_10002420 @ 0x10bd2420 (11 bytes, 5 insns) */
void f_10bd2420(void) {
  FTRACE(0x10bd2420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2420 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2421 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2423 call dword ptr [0x10c00270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00270))), 0x10bd2429u);
  /* 10bd2429 pop ebp */
  EBP = (pop32());
  /* 10bd242a ret  */
  ESPCHK(0x10bd2420u, _esp0);
  ESP += 4; return;
}

/* FUN_10002430 @ 0x10bd2430 (11 bytes, 5 insns) */
void f_10bd2430(void) {
  FTRACE(0x10bd2430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2430 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2431 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2433 call dword ptr [0x10c0028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0028c))), 0x10bd2439u);
  /* 10bd2439 pop ebp */
  EBP = (pop32());
  /* 10bd243a ret  */
  ESPCHK(0x10bd2430u, _esp0);
  ESP += 4; return;
}

/* FUN_10002440 @ 0x10bd2440 (804 bytes, 236 insns) */
void f_10bd2440(void) {
  FTRACE(0x10bd2440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2440 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2441 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2443 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd2446 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10bd244b push 0x10bf93a8 */
  push32((uint32_t)(0x10bf93a8u));
  /* 10bd2450 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2452 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10bd2457 call 0x10bd2830 */
  push32(0x10bd245cu); f_10bd2830();
  /* 10bd245c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd245f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10bd2462 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2466 jne 0x10bd2472 */
  if (!C.zf) goto L_10bd2472;
  /* 10bd2468 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10bd246a call 0x10bd17a0 */
  push32(0x10bd246fu); f_10bd17a0();
  /* 10bd246f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd2472:;
  /* 10bd2472 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2475 mov dword ptr [0x10bffde0], eax */
  w32((uint32_t)(0x10bffde0), (EAX));
  /* 10bd247a mov dword ptr [0x10bfff1c], 0x20 */
  w32((uint32_t)(0x10bfff1c), (0x20u));
  /* 10bd2484 jmp 0x10bd248f */
  goto L_10bd248f;
L_10bd2486:;
  /* 10bd2486 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2489 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd248c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10bd248f:;
  /* 10bd248f mov edx, dword ptr [0x10bffde0] */
  EDX = (r32((uint32_t)(0x10bffde0)));
  /* 10bd2495 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd249b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd249e jae 0x10bd24c3 */
  if (!C.cf) goto L_10bd24c3;
  /* 10bd24a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd24a3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10bd24a7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd24aa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10bd24b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd24b3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10bd24b7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd24ba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10bd24c1 jmp 0x10bd2486 */
  goto L_10bd2486;
L_10bd24c3:;
  /* 10bd24c3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10bd24c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd24c7 call dword ptr [0x10c00298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00298))), 0x10bd24cdu);
  /* 10bd24cd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10bd24d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd24d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd24d8 je 0x10bd2665 */
  if (C.zf) goto L_10bd2665;
  /* 10bd24de cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd24e2 je 0x10bd2665 */
  if (C.zf) goto L_10bd2665;
  /* 10bd24e8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd24eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd24ed mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10bd24f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd24f3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd24f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd24f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd24fc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd24ff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10bd2502 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2509 jge 0x10bd2513 */
  if ((C.sf==C.of)) goto L_10bd2513;
  /* 10bd250b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10bd250e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10bd2511 jmp 0x10bd251a */
  goto L_10bd251a;
L_10bd2513:;
  /* 10bd2513 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10bd251a:;
  /* 10bd251a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10bd251d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10bd2520 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10bd2527 jmp 0x10bd2532 */
  goto L_10bd2532;
L_10bd2529:;
  /* 10bd2529 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10bd252c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd252f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10bd2532:;
  /* 10bd2532 mov ecx, dword ptr [0x10bfff1c] */
  ECX = (r32((uint32_t)(0x10bfff1c)));
  /* 10bd2538 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd253b jge 0x10bd25d2 */
  if ((C.sf==C.of)) goto L_10bd25d2;
  /* 10bd2541 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10bd2546 push 0x10bf93a8 */
  push32((uint32_t)(0x10bf93a8u));
  /* 10bd254b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd254d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10bd2552 call 0x10bd2830 */
  push32(0x10bd2557u); f_10bd2830();
  /* 10bd2557 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd255a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10bd255d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2561 jne 0x10bd256e */
  if (!C.zf) goto L_10bd256e;
  /* 10bd2563 mov edx, dword ptr [0x10bfff1c] */
  EDX = (r32((uint32_t)(0x10bfff1c)));
  /* 10bd2569 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10bd256c jmp 0x10bd25d2 */
  goto L_10bd25d2;
L_10bd256e:;
  /* 10bd256e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10bd2571 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2574 mov dword ptr [eax*4 + 0x10bffde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10bffde0), (ECX));
  /* 10bd257b mov edx, dword ptr [0x10bfff1c] */
  EDX = (r32((uint32_t)(0x10bfff1c)));
  /* 10bd2581 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2584 mov dword ptr [0x10bfff1c], edx */
  w32((uint32_t)(0x10bfff1c), (EDX));
  /* 10bd258a jmp 0x10bd2595 */
  goto L_10bd2595;
L_10bd258c:;
  /* 10bd258c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd258f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2592 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10bd2595:;
  /* 10bd2595 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10bd2598 mov edx, dword ptr [ecx*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bd259f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd25a5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd25a8 jae 0x10bd25cd */
  if (!C.cf) goto L_10bd25cd;
  /* 10bd25aa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd25ad mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10bd25b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd25b4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10bd25ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd25bd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10bd25c1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd25c4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10bd25cb jmp 0x10bd258c */
  goto L_10bd258c;
L_10bd25cd:;
  /* 10bd25cd jmp 0x10bd2529 */
  goto L_10bd2529;
L_10bd25d2:;
  /* 10bd25d2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10bd25d9 jmp 0x10bd25f6 */
  goto L_10bd25f6;
L_10bd25db:;
  /* 10bd25db mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10bd25de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd25e1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10bd25e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd25e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd25ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd25ed mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10bd25f0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd25f3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10bd25f6:;
  /* 10bd25f6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10bd25f9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd25fc jge 0x10bd2665 */
  if ((C.sf==C.of)) goto L_10bd2665;
  /* 10bd25fe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10bd2601 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2604 je 0x10bd2660 */
  if (C.zf) goto L_10bd2660;
  /* 10bd2606 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2609 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd260c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd260f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd2611 je 0x10bd2660 */
  if (C.zf) goto L_10bd2660;
  /* 10bd2613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2616 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bd2619 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd261c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd261e jne 0x10bd2630 */
  if (!C.zf) goto L_10bd2630;
  /* 10bd2620 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10bd2623 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd2625 push edx */
  push32((uint32_t)(EDX));
  /* 10bd2626 call dword ptr [0x10c00294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00294))), 0x10bd262cu);
  /* 10bd262c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd262e je 0x10bd2660 */
  if (C.zf) goto L_10bd2660;
L_10bd2630:;
  /* 10bd2630 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10bd2633 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bd2636 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10bd2639 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd263c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd263f mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bd2646 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2648 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10bd264b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd264e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10bd2651 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd2653 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bd2655 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2658 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd265b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd265d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10bd2660:;
  /* 10bd2660 jmp 0x10bd25db */
  goto L_10bd25db;
L_10bd2665:;
  /* 10bd2665 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10bd266c jmp 0x10bd2677 */
  goto L_10bd2677;
L_10bd266e:;
  /* 10bd266e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10bd2671 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2674 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10bd2677:;
  /* 10bd2677 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd267b jge 0x10bd2754 */
  if ((C.sf==C.of)) goto L_10bd2754;
  /* 10bd2681 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10bd2684 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd2687 mov edx, dword ptr [0x10bffde0] */
  EDX = (r32((uint32_t)(0x10bffde0)));
  /* 10bd268d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd268f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10bd2692 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2695 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2698 jne 0x10bd2740 */
  if (!C.zf) goto L_10bd2740;
  /* 10bd269e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd26a1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10bd26a5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd26a9 jne 0x10bd26b4 */
  if (!C.zf) goto L_10bd26b4;
  /* 10bd26ab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10bd26b2 jmp 0x10bd26c4 */
  goto L_10bd26c4;
L_10bd26b4:;
  /* 10bd26b4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10bd26b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd26ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd26bc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd26be add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd26c1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10bd26c4:;
  /* 10bd26c4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10bd26c7 push eax */
  push32((uint32_t)(EAX));
  /* 10bd26c8 call dword ptr [0x10c00244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00244))), 0x10bd26ceu);
  /* 10bd26ce mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10bd26d1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd26d5 je 0x10bd272f */
  if (C.zf) goto L_10bd272f;
  /* 10bd26d7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10bd26da push ecx */
  push32((uint32_t)(ECX));
  /* 10bd26db call dword ptr [0x10c00294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00294))), 0x10bd26e1u);
  /* 10bd26e1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10bd26e4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd26e8 je 0x10bd272f */
  if (C.zf) goto L_10bd272f;
  /* 10bd26ea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd26ed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10bd26f0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10bd26f2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10bd26f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd26fb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd26fe jne 0x10bd2710 */
  if (!C.zf) goto L_10bd2710;
  /* 10bd2700 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2703 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10bd2706 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10bd2708 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd270b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10bd270e jmp 0x10bd272d */
  goto L_10bd272d;
L_10bd2710:;
  /* 10bd2710 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10bd2713 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd2719 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd271c jne 0x10bd272d */
  if (!C.zf) goto L_10bd272d;
  /* 10bd271e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2721 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd2724 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10bd2727 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd272a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10bd272d:;
  /* 10bd272d jmp 0x10bd273e */
  goto L_10bd273e;
L_10bd272f:;
  /* 10bd272f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2732 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd2735 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10bd2738 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd273b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10bd273e:;
  /* 10bd273e jmp 0x10bd274f */
  goto L_10bd274f;
L_10bd2740:;
  /* 10bd2740 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd2743 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd2746 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10bd2749 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd274c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10bd274f:;
  /* 10bd274f jmp 0x10bd266e */
  goto L_10bd266e;
L_10bd2754:;
  /* 10bd2754 mov eax, dword ptr [0x10bfff1c] */
  EAX = (r32((uint32_t)(0x10bfff1c)));
  /* 10bd2759 push eax */
  push32((uint32_t)(EAX));
  /* 10bd275a call dword ptr [0x10c00290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00290))), 0x10bd2760u);
  /* 10bd2760 mov esp, ebp */
  ESP = (EBP);
  /* 10bd2762 pop ebp */
  EBP = (pop32());
  /* 10bd2763 ret  */
  ESPCHK(0x10bd2440u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10bd2770 (155 bytes, 45 insns) */
void f_10bd2770(void) {
  FTRACE(0x10bd2770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2770 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2771 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd2776 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bd277d jmp 0x10bd2788 */
  goto L_10bd2788;
L_10bd277f:;
  /* 10bd277f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2782 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2785 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bd2788:;
  /* 10bd2788 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd278c jge 0x10bd2807 */
  if ((C.sf==C.of)) goto L_10bd2807;
  /* 10bd278e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2791 cmp dword ptr [ecx*4 + 0x10bffde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10bffde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2799 je 0x10bd2802 */
  if (C.zf) goto L_10bd2802;
  /* 10bd279b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd279e mov eax, dword ptr [edx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bd27a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd27a8 jmp 0x10bd27b3 */
  goto L_10bd27b3;
L_10bd27aa:;
  /* 10bd27aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd27ad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd27b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd27b3:;
  /* 10bd27b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd27b6 mov eax, dword ptr [edx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bd27bd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd27c2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd27c5 jae 0x10bd27df */
  if (!C.cf) goto L_10bd27df;
  /* 10bd27c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd27ca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd27ce je 0x10bd27dd */
  if (C.zf) goto L_10bd27dd;
  /* 10bd27d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd27d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd27d6 push edx */
  push32((uint32_t)(EDX));
  /* 10bd27d7 call dword ptr [0x10c0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0029c))), 0x10bd27ddu);
L_10bd27dd:;
  /* 10bd27dd jmp 0x10bd27aa */
  goto L_10bd27aa;
L_10bd27df:;
  /* 10bd27df push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd27e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd27e4 mov ecx, dword ptr [eax*4 + 0x10bffde0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bd27eb push ecx */
  push32((uint32_t)(ECX));
  /* 10bd27ec call 0x10bd32c0 */
  push32(0x10bd27f1u); f_10bd32c0();
  /* 10bd27f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd27f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd27f7 mov dword ptr [edx*4 + 0x10bffde0], 0 */
  w32((uint32_t)(EDX*4 + 0x10bffde0), (0x0u));
L_10bd2802:;
  /* 10bd2802 jmp 0x10bd277f */
  goto L_10bd277f;
L_10bd2807:;
  /* 10bd2807 mov esp, ebp */
  ESP = (EBP);
  /* 10bd2809 pop ebp */
  EBP = (pop32());
  /* 10bd280a ret  */
  ESPCHK(0x10bd2770u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x10bd2810 (29 bytes, 13 insns) */
void f_10bd2810(void) {
  FTRACE(0x10bd2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2810 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2811 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2813 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2815 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2817 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2819 mov eax, dword ptr [0x10bfe5f8] */
  EAX = (r32((uint32_t)(0x10bfe5f8)));
  /* 10bd281e push eax */
  push32((uint32_t)(EAX));
  /* 10bd281f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2822 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2823 call 0x10bd2880 */
  push32(0x10bd2828u); f_10bd2880();
  /* 10bd2828 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd282b pop ebp */
  EBP = (pop32());
  /* 10bd282c ret  */
  ESPCHK(0x10bd2810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x10bd2830 (35 bytes, 16 insns) */
void f_10bd2830(void) {
  FTRACE(0x10bd2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2830 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2831 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2833 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2836 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2837 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd283a push ecx */
  push32((uint32_t)(ECX));
  /* 10bd283b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd283e push edx */
  push32((uint32_t)(EDX));
  /* 10bd283f mov eax, dword ptr [0x10bfe5f8] */
  EAX = (r32((uint32_t)(0x10bfe5f8)));
  /* 10bd2844 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2845 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2848 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2849 call 0x10bd2880 */
  push32(0x10bd284eu); f_10bd2880();
  /* 10bd284e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2851 pop ebp */
  EBP = (pop32());
  /* 10bd2852 ret  */
  ESPCHK(0x10bd2830u, _esp0);
  ESP += 4; return;
}

/* FUN_10002860 @ 0x10bd2860 (27 bytes, 13 insns) */
void f_10bd2860(void) {
  FTRACE(0x10bd2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2860 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2861 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2863 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2865 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2867 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2869 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd286c push eax */
  push32((uint32_t)(EAX));
  /* 10bd286d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2870 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2871 call 0x10bd2880 */
  push32(0x10bd2876u); f_10bd2880();
  /* 10bd2876 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2879 pop ebp */
  EBP = (pop32());
  /* 10bd287a ret  */
  ESPCHK(0x10bd2860u, _esp0);
  ESP += 4; return;
}

/* FUN_10002880 @ 0x10bd2880 (94 bytes, 38 insns) */
void f_10bd2880(void) {
  FTRACE(0x10bd2880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2880 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2881 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2883 push ecx */
  push32((uint32_t)(ECX));
L_10bd2884:;
  /* 10bd2884 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd2886 call 0x10bd6230 */
  push32(0x10bd288bu); f_10bd6230();
  /* 10bd288b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd288e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd2891 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2892 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2895 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2896 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2899 push edx */
  push32((uint32_t)(EDX));
  /* 10bd289a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd289d push eax */
  push32((uint32_t)(EAX));
  /* 10bd289e call 0x10bd2900 */
  push32(0x10bd28a3u); f_10bd2900();
  /* 10bd28a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd28a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd28a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd28ab call 0x10bd62d0 */
  push32(0x10bd28b0u); f_10bd62d0();
  /* 10bd28b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd28b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd28b7 jne 0x10bd28bf */
  if (!C.zf) goto L_10bd28bf;
  /* 10bd28b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd28bd jne 0x10bd28c4 */
  if (!C.zf) goto L_10bd28c4;
L_10bd28bf:;
  /* 10bd28bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd28c2 jmp 0x10bd28da */
  goto L_10bd28da;
L_10bd28c4:;
  /* 10bd28c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd28c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd28c8 call 0x10bd6570 */
  push32(0x10bd28cdu); f_10bd6570();
  /* 10bd28cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd28d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd28d2 jne 0x10bd28d8 */
  if (!C.zf) goto L_10bd28d8;
  /* 10bd28d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd28d6 jmp 0x10bd28da */
  goto L_10bd28da;
L_10bd28d8:;
  /* 10bd28d8 jmp 0x10bd2884 */
  goto L_10bd2884;
L_10bd28da:;
  /* 10bd28da mov esp, ebp */
  ESP = (EBP);
  /* 10bd28dc pop ebp */
  EBP = (pop32());
  /* 10bd28dd ret  */
  ESPCHK(0x10bd2880u, _esp0);
  ESP += 4; return;
}

/* FUN_100028e0 @ 0x10bd28e0 (23 bytes, 11 insns) */
void f_10bd28e0(void) {
  FTRACE(0x10bd28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd28e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd28e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd28e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd28e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd28e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd28ec push eax */
  push32((uint32_t)(EAX));
  /* 10bd28ed call 0x10bd2900 */
  push32(0x10bd28f2u); f_10bd2900();
  /* 10bd28f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd28f5 pop ebp */
  EBP = (pop32());
  /* 10bd28f6 ret  */
  ESPCHK(0x10bd28e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x10bd2900 (787 bytes, 254 insns) */
void f_10bd2900(void) {
  FTRACE(0x10bd2900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2900 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2901 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2903 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd2906 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd2907 push esi */
  push32((uint32_t)(ESI));
  /* 10bd2908 push edi */
  push32((uint32_t)(EDI));
  /* 10bd2909 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bd2910 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd2915 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2918 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd291a je 0x10bd294c */
  if (C.zf) goto L_10bd294c;
L_10bd291c:;
  /* 10bd291c call 0x10bd39d0 */
  push32(0x10bd2921u); f_10bd39d0();
  /* 10bd2921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2923 jne 0x10bd2946 */
  if (!C.zf) goto L_10bd2946;
  /* 10bd2925 push 0x10bf949c */
  push32((uint32_t)(0x10bf949cu));
  /* 10bd292a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd292c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10bd2931 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd2936 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2938 call 0x10bd18f0 */
  push32(0x10bd293du); f_10bd18f0();
  /* 10bd293d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2940 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2943 jne 0x10bd2946 */
  if (!C.zf) goto L_10bd2946;
  /* 10bd2945 int3  */
  x86_unimpl("int3 @ 0x10bd2945");
L_10bd2946:;
  /* 10bd2946 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2948 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd294a jne 0x10bd291c */
  if (!C.zf) goto L_10bd291c;
L_10bd294c:;
  /* 10bd294c mov edx, dword ptr [0x10bfca88] */
  EDX = (r32((uint32_t)(0x10bfca88)));
  /* 10bd2952 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bd2955 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2958 cmp eax, dword ptr [0x10bfca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd295e jne 0x10bd2961 */
  if (!C.zf) goto L_10bd2961;
  /* 10bd2960 int3  */
  x86_unimpl("int3 @ 0x10bd2960");
L_10bd2961:;
  /* 10bd2961 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2964 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2965 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2968 push edx */
  push32((uint32_t)(EDX));
  /* 10bd2969 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd296c push eax */
  push32((uint32_t)(EAX));
  /* 10bd296d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2970 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2974 push edx */
  push32((uint32_t)(EDX));
  /* 10bd2975 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2977 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2979 call dword ptr [0x10bfcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfcc90))), 0x10bd297fu);
  /* 10bd297f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2984 jne 0x10bd29e4 */
  if (!C.zf) goto L_10bd29e4;
  /* 10bd2986 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd298a je 0x10bd29b7 */
  if (C.zf) goto L_10bd29b7;
L_10bd298c:;
  /* 10bd298c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd298f push eax */
  push32((uint32_t)(EAX));
  /* 10bd2990 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2993 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2994 push 0x10bf9458 */
  push32((uint32_t)(0x10bf9458u));
  /* 10bd2999 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd299b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd299d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd299f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd29a1 call 0x10bd18f0 */
  push32(0x10bd29a6u); f_10bd18f0();
  /* 10bd29a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd29a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd29ac jne 0x10bd29af */
  if (!C.zf) goto L_10bd29af;
  /* 10bd29ae int3  */
  x86_unimpl("int3 @ 0x10bd29ae");
L_10bd29af:;
  /* 10bd29af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd29b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd29b3 jne 0x10bd298c */
  if (!C.zf) goto L_10bd298c;
  /* 10bd29b5 jmp 0x10bd29dd */
  goto L_10bd29dd;
L_10bd29b7:;
  /* 10bd29b7 push 0x10bf9434 */
  push32((uint32_t)(0x10bf9434u));
  /* 10bd29bc push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd29c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd29c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd29c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd29c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd29c9 call 0x10bd18f0 */
  push32(0x10bd29ceu); f_10bd18f0();
  /* 10bd29ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd29d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd29d4 jne 0x10bd29d7 */
  if (!C.zf) goto L_10bd29d7;
  /* 10bd29d6 int3  */
  x86_unimpl("int3 @ 0x10bd29d6");
L_10bd29d7:;
  /* 10bd29d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd29d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd29db jne 0x10bd29b7 */
  if (!C.zf) goto L_10bd29b7;
L_10bd29dd:;
  /* 10bd29dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd29df jmp 0x10bd2c0c */
  goto L_10bd2c0c;
L_10bd29e4:;
  /* 10bd29e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd29e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd29ed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd29f0 je 0x10bd2a06 */
  if (C.zf) goto L_10bd2a06;
  /* 10bd29f2 mov edx, dword ptr [0x10bfca84] */
  EDX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd29f8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd29fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd29fd jne 0x10bd2a06 */
  if (!C.zf) goto L_10bd2a06;
  /* 10bd29ff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10bd2a06:;
  /* 10bd2a06 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2a0a ja 0x10bd2a17 */
  if ((!C.cf&&!C.zf)) goto L_10bd2a17;
  /* 10bd2a0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2a0f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2a12 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2a15 jbe 0x10bd2a43 */
  if ((C.cf||C.zf)) goto L_10bd2a43;
L_10bd2a17:;
  /* 10bd2a17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2a1a push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2a1b push 0x10bf940c */
  push32((uint32_t)(0x10bf940cu));
  /* 10bd2a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2a26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2a28 call 0x10bd18f0 */
  push32(0x10bd2a2du); f_10bd18f0();
  /* 10bd2a2d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2a30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2a33 jne 0x10bd2a36 */
  if (!C.zf) goto L_10bd2a36;
  /* 10bd2a35 int3  */
  x86_unimpl("int3 @ 0x10bd2a35");
L_10bd2a36:;
  /* 10bd2a36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd2a38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd2a3a jne 0x10bd2a17 */
  if (!C.zf) goto L_10bd2a17;
  /* 10bd2a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2a3e jmp 0x10bd2c0c */
  goto L_10bd2c0c;
L_10bd2a43:;
  /* 10bd2a43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2a46 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2a4b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2a4e je 0x10bd2a90 */
  if (C.zf) goto L_10bd2a90;
  /* 10bd2a50 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2a54 je 0x10bd2a90 */
  if (C.zf) goto L_10bd2a90;
  /* 10bd2a56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2a59 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2a5f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2a62 je 0x10bd2a90 */
  if (C.zf) goto L_10bd2a90;
  /* 10bd2a64 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2a68 je 0x10bd2a90 */
  if (C.zf) goto L_10bd2a90;
L_10bd2a6a:;
  /* 10bd2a6a push 0x10bf93d8 */
  push32((uint32_t)(0x10bf93d8u));
  /* 10bd2a6f push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd2a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2a7c call 0x10bd18f0 */
  push32(0x10bd2a81u); f_10bd18f0();
  /* 10bd2a81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2a84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2a87 jne 0x10bd2a8a */
  if (!C.zf) goto L_10bd2a8a;
  /* 10bd2a89 int3  */
  x86_unimpl("int3 @ 0x10bd2a89");
L_10bd2a8a:;
  /* 10bd2a8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd2a8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd2a8e jne 0x10bd2a6a */
  if (!C.zf) goto L_10bd2a6a;
L_10bd2a90:;
  /* 10bd2a90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2a93 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2a96 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd2a99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd2a9c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2a9d call 0x10bd6680 */
  push32(0x10bd2aa2u); f_10bd6680();
  /* 10bd2aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2aa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd2aa8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2aac jne 0x10bd2ab5 */
  if (!C.zf) goto L_10bd2ab5;
  /* 10bd2aae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2ab0 jmp 0x10bd2c0c */
  goto L_10bd2c0c;
L_10bd2ab5:;
  /* 10bd2ab5 mov edx, dword ptr [0x10bfca88] */
  EDX = (r32((uint32_t)(0x10bfca88)));
  /* 10bd2abb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2abe mov dword ptr [0x10bfca88], edx */
  w32((uint32_t)(0x10bfca88), (EDX));
  /* 10bd2ac4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2ac8 je 0x10bd2b13 */
  if (C.zf) goto L_10bd2b13;
  /* 10bd2aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2acd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bd2ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2ad6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10bd2add mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2ae0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10bd2ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2aea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10bd2af1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2af4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2af7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10bd2afa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2afd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10bd2b04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b07 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10bd2b0e jmp 0x10bd2bb3 */
  goto L_10bd2bb3;
L_10bd2b13:;
  /* 10bd2b13 mov edx, dword ptr [0x10bfe45c] */
  EDX = (r32((uint32_t)(0x10bfe45c)));
  /* 10bd2b19 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2b1c mov dword ptr [0x10bfe45c], edx */
  w32((uint32_t)(0x10bfe45c), (EDX));
  /* 10bd2b22 mov eax, dword ptr [0x10bfe464] */
  EAX = (r32((uint32_t)(0x10bfe464)));
  /* 10bd2b27 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2b2a mov dword ptr [0x10bfe464], eax */
  w32((uint32_t)(0x10bfe464), (EAX));
  /* 10bd2b2f mov ecx, dword ptr [0x10bfe464] */
  ECX = (r32((uint32_t)(0x10bfe464)));
  /* 10bd2b35 cmp ecx, dword ptr [0x10bfe468] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfe468))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2b3b jbe 0x10bd2b49 */
  if ((C.cf||C.zf)) goto L_10bd2b49;
  /* 10bd2b3d mov edx, dword ptr [0x10bfe464] */
  EDX = (r32((uint32_t)(0x10bfe464)));
  /* 10bd2b43 mov dword ptr [0x10bfe468], edx */
  w32((uint32_t)(0x10bfe468), (EDX));
L_10bd2b49:;
  /* 10bd2b49 cmp dword ptr [0x10bfe460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2b50 je 0x10bd2b5f */
  if (C.zf) goto L_10bd2b5f;
  /* 10bd2b52 mov eax, dword ptr [0x10bfe460] */
  EAX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd2b57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10bd2b5d jmp 0x10bd2b68 */
  goto L_10bd2b68;
L_10bd2b5f:;
  /* 10bd2b5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b62 mov dword ptr [0x10bfe458], edx */
  w32((uint32_t)(0x10bfe458), (EDX));
L_10bd2b68:;
  /* 10bd2b68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b6b mov ecx, dword ptr [0x10bfe460] */
  ECX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd2b71 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bd2b73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b76 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10bd2b7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2b83 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10bd2b86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2b8c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10bd2b8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2b95 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10bd2b98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2b9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2b9e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10bd2ba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2ba4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2ba7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10bd2baa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2bad mov dword ptr [0x10bfe460], ecx */
  w32((uint32_t)(0x10bfe460), (ECX));
L_10bd2bb3:;
  /* 10bd2bb3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd2bb5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd2bb7 mov dl, byte ptr [0x10bfca90] */
  DL = (r8((uint32_t)(0x10bfca90)));
  /* 10bd2bbd push edx */
  push32((uint32_t)(EDX));
  /* 10bd2bbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2bc1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2bc4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2bc5 call 0x10bd65a0 */
  push32(0x10bd2bcau); f_10bd65a0();
  /* 10bd2bca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2bcd push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd2bcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2bd1 mov cl, byte ptr [0x10bfca90] */
  CL = (r8((uint32_t)(0x10bfca90)));
  /* 10bd2bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2bd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2bde lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10bd2be2 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2be3 call 0x10bd65a0 */
  push32(0x10bd2be8u); f_10bd65a0();
  /* 10bd2be8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2beb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2bee push edx */
  push32((uint32_t)(EDX));
  /* 10bd2bef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2bf1 mov al, byte ptr [0x10bfca92] */
  AL = (r8((uint32_t)(0x10bfca92)));
  /* 10bd2bf6 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2bfa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2bfd push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2bfe call 0x10bd65a0 */
  push32(0x10bd2c03u); f_10bd65a0();
  /* 10bd2c03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2c09 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10bd2c0c:;
  /* 10bd2c0c pop edi */
  EDI = (pop32());
  /* 10bd2c0d pop esi */
  ESI = (pop32());
  /* 10bd2c0e pop ebx */
  EBX = (pop32());
  /* 10bd2c0f mov esp, ebp */
  ESP = (EBP);
  /* 10bd2c11 pop ebp */
  EBP = (pop32());
  /* 10bd2c12 ret  */
  ESPCHK(0x10bd2900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c20 @ 0x10bd2c20 (27 bytes, 13 insns) */
void f_10bd2c20(void) {
  FTRACE(0x10bd2c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2c21 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2c29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2c2c push eax */
  push32((uint32_t)(EAX));
  /* 10bd2c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2c30 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2c31 call 0x10bd2c40 */
  push32(0x10bd2c36u); f_10bd2c40();
  /* 10bd2c36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2c39 pop ebp */
  EBP = (pop32());
  /* 10bd2c3a ret  */
  ESPCHK(0x10bd2c20u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10bd2c40 (96 bytes, 37 insns) */
void f_10bd2c40(void) {
  FTRACE(0x10bd2c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2c41 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2c43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd2c46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2c49 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd2c4d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10bd2c50 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd2c53 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2c54 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2c57 push edx */
  push32((uint32_t)(EDX));
  /* 10bd2c58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2c5b push eax */
  push32((uint32_t)(EAX));
  /* 10bd2c5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2c5f push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2c60 call 0x10bd2830 */
  push32(0x10bd2c65u); f_10bd2830();
  /* 10bd2c65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2c68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd2c6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2c6f je 0x10bd2c99 */
  if (C.zf) goto L_10bd2c99;
  /* 10bd2c71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2c74 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10bd2c77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd2c7a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2c7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd2c80:;
  /* 10bd2c80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd2c83 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2c86 jae 0x10bd2c99 */
  if (!C.cf) goto L_10bd2c99;
  /* 10bd2c88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd2c8b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10bd2c8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd2c91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2c94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd2c97 jmp 0x10bd2c80 */
  goto L_10bd2c80;
L_10bd2c99:;
  /* 10bd2c99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2c9c mov esp, ebp */
  ESP = (EBP);
  /* 10bd2c9e pop ebp */
  EBP = (pop32());
  /* 10bd2c9f ret  */
  ESPCHK(0x10bd2c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca0 @ 0x10bd2ca0 (27 bytes, 13 insns) */
void f_10bd2ca0(void) {
  FTRACE(0x10bd2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2ca7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2ca9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2cac push eax */
  push32((uint32_t)(EAX));
  /* 10bd2cad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2cb1 call 0x10bd2cc0 */
  push32(0x10bd2cb6u); f_10bd2cc0();
  /* 10bd2cb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2cb9 pop ebp */
  EBP = (pop32());
  /* 10bd2cba ret  */
  ESPCHK(0x10bd2ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cc0 @ 0x10bd2cc0 (64 bytes, 27 insns) */
void f_10bd2cc0(void) {
  FTRACE(0x10bd2cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2cc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd2cc6 call 0x10bd6230 */
  push32(0x10bd2ccbu); f_10bd6230();
  /* 10bd2ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2cce push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2cd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd2cd3 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2cd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2cd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2cdb push edx */
  push32((uint32_t)(EDX));
  /* 10bd2cdc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2cdf push eax */
  push32((uint32_t)(EAX));
  /* 10bd2ce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2ce4 call 0x10bd2d00 */
  push32(0x10bd2ce9u); f_10bd2d00();
  /* 10bd2ce9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2cec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd2cef push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd2cf1 call 0x10bd62d0 */
  push32(0x10bd2cf6u); f_10bd62d0();
  /* 10bd2cf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2cf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd2cfc mov esp, ebp */
  ESP = (EBP);
  /* 10bd2cfe pop ebp */
  EBP = (pop32());
  /* 10bd2cff ret  */
  ESPCHK(0x10bd2cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d00 @ 0x10bd2d00 (1297 bytes, 431 insns) */
void f_10bd2d00(void) {
  FTRACE(0x10bd2d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd2d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd2d01 mov ebp, esp */
  EBP = (ESP);
  /* 10bd2d03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd2d06 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd2d07 push esi */
  push32((uint32_t)(ESI));
  /* 10bd2d08 push edi */
  push32((uint32_t)(EDI));
  /* 10bd2d09 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10bd2d10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2d14 jne 0x10bd2d33 */
  if (!C.zf) goto L_10bd2d33;
  /* 10bd2d16 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd2d19 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2d1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2d1d push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2d1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2d21 push edx */
  push32((uint32_t)(EDX));
  /* 10bd2d22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2d25 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2d26 call 0x10bd2830 */
  push32(0x10bd2d2bu); f_10bd2830();
  /* 10bd2d2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2d2e jmp 0x10bd320a */
  goto L_10bd320a;
L_10bd2d33:;
  /* 10bd2d33 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2d37 je 0x10bd2d56 */
  if (C.zf) goto L_10bd2d56;
  /* 10bd2d39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2d3d jne 0x10bd2d56 */
  if (!C.zf) goto L_10bd2d56;
  /* 10bd2d3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2d42 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2d43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2d46 push edx */
  push32((uint32_t)(EDX));
  /* 10bd2d47 call 0x10bd32c0 */
  push32(0x10bd2d4cu); f_10bd32c0();
  /* 10bd2d4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2d4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2d51 jmp 0x10bd320a */
  goto L_10bd320a;
L_10bd2d56:;
  /* 10bd2d56 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd2d5b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2d60 je 0x10bd2d92 */
  if (C.zf) goto L_10bd2d92;
L_10bd2d62:;
  /* 10bd2d62 call 0x10bd39d0 */
  push32(0x10bd2d67u); f_10bd39d0();
  /* 10bd2d67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2d69 jne 0x10bd2d8c */
  if (!C.zf) goto L_10bd2d8c;
  /* 10bd2d6b push 0x10bf949c */
  push32((uint32_t)(0x10bf949cu));
  /* 10bd2d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2d72 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10bd2d77 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd2d7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2d7e call 0x10bd18f0 */
  push32(0x10bd2d83u); f_10bd18f0();
  /* 10bd2d83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2d86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2d89 jne 0x10bd2d8c */
  if (!C.zf) goto L_10bd2d8c;
  /* 10bd2d8b int3  */
  x86_unimpl("int3 @ 0x10bd2d8b");
L_10bd2d8c:;
  /* 10bd2d8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2d8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd2d90 jne 0x10bd2d62 */
  if (!C.zf) goto L_10bd2d62;
L_10bd2d92:;
  /* 10bd2d92 mov edx, dword ptr [0x10bfca88] */
  EDX = (r32((uint32_t)(0x10bfca88)));
  /* 10bd2d98 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10bd2d9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd2d9e cmp eax, dword ptr [0x10bfca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2da4 jne 0x10bd2da7 */
  if (!C.zf) goto L_10bd2da7;
  /* 10bd2da6 int3  */
  x86_unimpl("int3 @ 0x10bd2da6");
L_10bd2da7:;
  /* 10bd2da7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd2daa push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2dab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2dae push edx */
  push32((uint32_t)(EDX));
  /* 10bd2daf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd2db2 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2db3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2db6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2db7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2dba push edx */
  push32((uint32_t)(EDX));
  /* 10bd2dbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2dbe push eax */
  push32((uint32_t)(EAX));
  /* 10bd2dbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2dc1 call dword ptr [0x10bfcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfcc90))), 0x10bd2dc7u);
  /* 10bd2dc7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2dcc jne 0x10bd2e2c */
  if (!C.zf) goto L_10bd2e2c;
  /* 10bd2dce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2dd2 je 0x10bd2dff */
  if (C.zf) goto L_10bd2dff;
L_10bd2dd4:;
  /* 10bd2dd4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd2dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2dd8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd2ddb push edx */
  push32((uint32_t)(EDX));
  /* 10bd2ddc push 0x10bf9618 */
  push32((uint32_t)(0x10bf9618u));
  /* 10bd2de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2de9 call 0x10bd18f0 */
  push32(0x10bd2deeu); f_10bd18f0();
  /* 10bd2dee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2df1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2df4 jne 0x10bd2df7 */
  if (!C.zf) goto L_10bd2df7;
  /* 10bd2df6 int3  */
  x86_unimpl("int3 @ 0x10bd2df6");
L_10bd2df7:;
  /* 10bd2df7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2dfb jne 0x10bd2dd4 */
  if (!C.zf) goto L_10bd2dd4;
  /* 10bd2dfd jmp 0x10bd2e25 */
  goto L_10bd2e25;
L_10bd2dff:;
  /* 10bd2dff push 0x10bf95f4 */
  push32((uint32_t)(0x10bf95f4u));
  /* 10bd2e04 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd2e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e11 call 0x10bd18f0 */
  push32(0x10bd2e16u); f_10bd18f0();
  /* 10bd2e16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2e19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2e1c jne 0x10bd2e1f */
  if (!C.zf) goto L_10bd2e1f;
  /* 10bd2e1e int3  */
  x86_unimpl("int3 @ 0x10bd2e1e");
L_10bd2e1f:;
  /* 10bd2e1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2e21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd2e23 jne 0x10bd2dff */
  if (!C.zf) goto L_10bd2dff;
L_10bd2e25:;
  /* 10bd2e25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2e27 jmp 0x10bd320a */
  goto L_10bd320a;
L_10bd2e2c:;
  /* 10bd2e2c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2e30 jbe 0x10bd2e5e */
  if ((C.cf||C.zf)) goto L_10bd2e5e;
L_10bd2e32:;
  /* 10bd2e32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2e35 push edx */
  push32((uint32_t)(EDX));
  /* 10bd2e36 push 0x10bf95c4 */
  push32((uint32_t)(0x10bf95c4u));
  /* 10bd2e3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2e43 call 0x10bd18f0 */
  push32(0x10bd2e48u); f_10bd18f0();
  /* 10bd2e48 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2e4b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2e4e jne 0x10bd2e51 */
  if (!C.zf) goto L_10bd2e51;
  /* 10bd2e50 int3  */
  x86_unimpl("int3 @ 0x10bd2e50");
L_10bd2e51:;
  /* 10bd2e51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2e53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2e55 jne 0x10bd2e32 */
  if (!C.zf) goto L_10bd2e32;
  /* 10bd2e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2e59 jmp 0x10bd320a */
  goto L_10bd320a;
L_10bd2e5e:;
  /* 10bd2e5e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2e62 je 0x10bd2ea6 */
  if (C.zf) goto L_10bd2ea6;
  /* 10bd2e64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2e67 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2e6d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2e70 je 0x10bd2ea6 */
  if (C.zf) goto L_10bd2ea6;
  /* 10bd2e72 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2e75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd2e7b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2e7e je 0x10bd2ea6 */
  if (C.zf) goto L_10bd2ea6;
L_10bd2e80:;
  /* 10bd2e80 push 0x10bf93d8 */
  push32((uint32_t)(0x10bf93d8u));
  /* 10bd2e85 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd2e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd2e92 call 0x10bd18f0 */
  push32(0x10bd2e97u); f_10bd18f0();
  /* 10bd2e97 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2e9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2e9d jne 0x10bd2ea0 */
  if (!C.zf) goto L_10bd2ea0;
  /* 10bd2e9f int3  */
  x86_unimpl("int3 @ 0x10bd2e9f");
L_10bd2ea0:;
  /* 10bd2ea0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2ea4 jne 0x10bd2e80 */
  if (!C.zf) goto L_10bd2e80;
L_10bd2ea6:;
  /* 10bd2ea6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2eaa call 0x10bd3e30 */
  push32(0x10bd2eafu); f_10bd3e30();
  /* 10bd2eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd2eb4 jne 0x10bd2ed7 */
  if (!C.zf) goto L_10bd2ed7;
  /* 10bd2eb6 push 0x10bf95a0 */
  push32((uint32_t)(0x10bf95a0u));
  /* 10bd2ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2ebd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10bd2ec2 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd2ec7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2ec9 call 0x10bd18f0 */
  push32(0x10bd2eceu); f_10bd18f0();
  /* 10bd2ece add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2ed1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2ed4 jne 0x10bd2ed7 */
  if (!C.zf) goto L_10bd2ed7;
  /* 10bd2ed6 int3  */
  x86_unimpl("int3 @ 0x10bd2ed6");
L_10bd2ed7:;
  /* 10bd2ed7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd2ed9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd2edb jne 0x10bd2ea6 */
  if (!C.zf) goto L_10bd2ea6;
  /* 10bd2edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd2ee0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd2ee3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd2ee6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2ee9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2eed jne 0x10bd2ef6 */
  if (!C.zf) goto L_10bd2ef6;
  /* 10bd2eef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10bd2ef6:;
  /* 10bd2ef6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2efa je 0x10bd2f3a */
  if (C.zf) goto L_10bd2f3a;
L_10bd2efc:;
  /* 10bd2efc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2eff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2f06 jne 0x10bd2f11 */
  if (!C.zf) goto L_10bd2f11;
  /* 10bd2f08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2f0b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2f0f je 0x10bd2f32 */
  if (C.zf) goto L_10bd2f32;
L_10bd2f11:;
  /* 10bd2f11 push 0x10bf9558 */
  push32((uint32_t)(0x10bf9558u));
  /* 10bd2f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2f18 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10bd2f1d push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd2f22 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2f24 call 0x10bd18f0 */
  push32(0x10bd2f29u); f_10bd18f0();
  /* 10bd2f29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2f2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2f2f jne 0x10bd2f32 */
  if (!C.zf) goto L_10bd2f32;
  /* 10bd2f31 int3  */
  x86_unimpl("int3 @ 0x10bd2f31");
L_10bd2f32:;
  /* 10bd2f32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2f34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd2f36 jne 0x10bd2efc */
  if (!C.zf) goto L_10bd2efc;
  /* 10bd2f38 jmp 0x10bd2f9e */
  goto L_10bd2f9e;
L_10bd2f3a:;
  /* 10bd2f3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2f3d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd2f40 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2f45 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2f48 jne 0x10bd2f5f */
  if (!C.zf) goto L_10bd2f5f;
  /* 10bd2f4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2f4d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2f53 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2f56 jne 0x10bd2f5f */
  if (!C.zf) goto L_10bd2f5f;
  /* 10bd2f58 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10bd2f5f:;
  /* 10bd2f5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2f62 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd2f65 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2f6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd2f6d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd2f73 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2f75 je 0x10bd2f98 */
  if (C.zf) goto L_10bd2f98;
  /* 10bd2f77 push 0x10bf951c */
  push32((uint32_t)(0x10bf951cu));
  /* 10bd2f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd2f7e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10bd2f83 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd2f88 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd2f8a call 0x10bd18f0 */
  push32(0x10bd2f8fu); f_10bd18f0();
  /* 10bd2f8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2f92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2f95 jne 0x10bd2f98 */
  if (!C.zf) goto L_10bd2f98;
  /* 10bd2f97 int3  */
  x86_unimpl("int3 @ 0x10bd2f97");
L_10bd2f98:;
  /* 10bd2f98 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd2f9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd2f9c jne 0x10bd2f5f */
  if (!C.zf) goto L_10bd2f5f;
L_10bd2f9e:;
  /* 10bd2f9e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2fa2 je 0x10bd2fc9 */
  if (C.zf) goto L_10bd2fc9;
  /* 10bd2fa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2fa7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2faa push eax */
  push32((uint32_t)(EAX));
  /* 10bd2fab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2fae push ecx */
  push32((uint32_t)(ECX));
  /* 10bd2faf call 0x10bd67b0 */
  push32(0x10bd2fb4u); f_10bd67b0();
  /* 10bd2fb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2fb7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd2fba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2fbe jne 0x10bd2fc7 */
  if (!C.zf) goto L_10bd2fc7;
  /* 10bd2fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2fc2 jmp 0x10bd320a */
  goto L_10bd320a;
L_10bd2fc7:;
  /* 10bd2fc7 jmp 0x10bd2fec */
  goto L_10bd2fec;
L_10bd2fc9:;
  /* 10bd2fc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd2fcc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2fcf push edx */
  push32((uint32_t)(EDX));
  /* 10bd2fd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd2fd3 push eax */
  push32((uint32_t)(EAX));
  /* 10bd2fd4 call 0x10bd6700 */
  push32(0x10bd2fd9u); f_10bd6700();
  /* 10bd2fd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2fdc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd2fdf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2fe3 jne 0x10bd2fec */
  if (!C.zf) goto L_10bd2fec;
  /* 10bd2fe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd2fe7 jmp 0x10bd320a */
  goto L_10bd320a;
L_10bd2fec:;
  /* 10bd2fec mov ecx, dword ptr [0x10bfca88] */
  ECX = (r32((uint32_t)(0x10bfca88)));
  /* 10bd2ff2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd2ff5 mov dword ptr [0x10bfca88], ecx */
  w32((uint32_t)(0x10bfca88), (ECX));
  /* 10bd2ffb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd2fff jne 0x10bd3057 */
  if (!C.zf) goto L_10bd3057;
  /* 10bd3001 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3004 mov eax, dword ptr [0x10bfe45c] */
  EAX = (r32((uint32_t)(0x10bfe45c)));
  /* 10bd3009 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd300c mov dword ptr [0x10bfe45c], eax */
  w32((uint32_t)(0x10bfe45c), (EAX));
  /* 10bd3011 mov ecx, dword ptr [0x10bfe45c] */
  ECX = (r32((uint32_t)(0x10bfe45c)));
  /* 10bd3017 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd301a mov dword ptr [0x10bfe45c], ecx */
  w32((uint32_t)(0x10bfe45c), (ECX));
  /* 10bd3020 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3023 mov eax, dword ptr [0x10bfe464] */
  EAX = (r32((uint32_t)(0x10bfe464)));
  /* 10bd3028 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd302b mov dword ptr [0x10bfe464], eax */
  w32((uint32_t)(0x10bfe464), (EAX));
  /* 10bd3030 mov ecx, dword ptr [0x10bfe464] */
  ECX = (r32((uint32_t)(0x10bfe464)));
  /* 10bd3036 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3039 mov dword ptr [0x10bfe464], ecx */
  w32((uint32_t)(0x10bfe464), (ECX));
  /* 10bd303f mov edx, dword ptr [0x10bfe464] */
  EDX = (r32((uint32_t)(0x10bfe464)));
  /* 10bd3045 cmp edx, dword ptr [0x10bfe468] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bfe468))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd304b jbe 0x10bd3057 */
  if ((C.cf||C.zf)) goto L_10bd3057;
  /* 10bd304d mov eax, dword ptr [0x10bfe464] */
  EAX = (r32((uint32_t)(0x10bfe464)));
  /* 10bd3052 mov dword ptr [0x10bfe468], eax */
  w32((uint32_t)(0x10bfe468), (EAX));
L_10bd3057:;
  /* 10bd3057 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd305a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd305d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd3060 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3063 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3066 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3069 jbe 0x10bd308f */
  if ((C.cf||C.zf)) goto L_10bd308f;
  /* 10bd306b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd306e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3071 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3074 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3077 mov al, byte ptr [0x10bfca92] */
  AL = (r8((uint32_t)(0x10bfca92)));
  /* 10bd307c push eax */
  push32((uint32_t)(EAX));
  /* 10bd307d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3080 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3083 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3086 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3087 call 0x10bd65a0 */
  push32(0x10bd308cu); f_10bd65a0();
  /* 10bd308c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd308f:;
  /* 10bd308f push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd3091 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3093 mov al, byte ptr [0x10bfca90] */
  AL = (r8((uint32_t)(0x10bfca90)));
  /* 10bd3098 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3099 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd309c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd309f push ecx */
  push32((uint32_t)(ECX));
  /* 10bd30a0 call 0x10bd65a0 */
  push32(0x10bd30a5u); f_10bd65a0();
  /* 10bd30a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd30a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd30ac jne 0x10bd30c9 */
  if (!C.zf) goto L_10bd30c9;
  /* 10bd30ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd30b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd30b4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bd30b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd30ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd30bd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10bd30c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd30c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd30c6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10bd30c9:;
  /* 10bd30c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd30cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd30cf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10bd30d2:;
  /* 10bd30d2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd30d6 jne 0x10bd3107 */
  if (!C.zf) goto L_10bd3107;
  /* 10bd30d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd30dc jne 0x10bd30e6 */
  if (!C.zf) goto L_10bd30e6;
  /* 10bd30de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd30e1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd30e4 je 0x10bd3107 */
  if (C.zf) goto L_10bd3107;
L_10bd30e6:;
  /* 10bd30e6 push 0x10bf94e8 */
  push32((uint32_t)(0x10bf94e8u));
  /* 10bd30eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd30ed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10bd30f2 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd30f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd30f9 call 0x10bd18f0 */
  push32(0x10bd30feu); f_10bd18f0();
  /* 10bd30fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3101 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3104 jne 0x10bd3107 */
  if (!C.zf) goto L_10bd3107;
  /* 10bd3106 int3  */
  x86_unimpl("int3 @ 0x10bd3106");
L_10bd3107:;
  /* 10bd3107 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd3109 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd310b jne 0x10bd30d2 */
  if (!C.zf) goto L_10bd30d2;
  /* 10bd310d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3110 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3113 je 0x10bd311b */
  if (C.zf) goto L_10bd311b;
  /* 10bd3115 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3119 je 0x10bd3123 */
  if (C.zf) goto L_10bd3123;
L_10bd311b:;
  /* 10bd311b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd311e jmp 0x10bd320a */
  goto L_10bd320a;
L_10bd3123:;
  /* 10bd3123 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3126 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3129 je 0x10bd313b */
  if (C.zf) goto L_10bd313b;
  /* 10bd312b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd312e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd3130 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3133 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd3136 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10bd3139 jmp 0x10bd3177 */
  goto L_10bd3177;
L_10bd313b:;
  /* 10bd313b mov eax, dword ptr [0x10bfe458] */
  EAX = (r32((uint32_t)(0x10bfe458)));
  /* 10bd3140 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3143 je 0x10bd3166 */
  if (C.zf) goto L_10bd3166;
  /* 10bd3145 push 0x10bf94cc */
  push32((uint32_t)(0x10bf94ccu));
  /* 10bd314a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd314c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10bd3151 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd3156 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd3158 call 0x10bd18f0 */
  push32(0x10bd315du); f_10bd18f0();
  /* 10bd315d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3160 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3163 jne 0x10bd3166 */
  if (!C.zf) goto L_10bd3166;
  /* 10bd3165 int3  */
  x86_unimpl("int3 @ 0x10bd3165");
L_10bd3166:;
  /* 10bd3166 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3168 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd316a jne 0x10bd313b */
  if (!C.zf) goto L_10bd313b;
  /* 10bd316c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd316f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd3172 mov dword ptr [0x10bfe458], eax */
  w32((uint32_t)(0x10bfe458), (EAX));
L_10bd3177:;
  /* 10bd3177 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd317a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd317e je 0x10bd318f */
  if (C.zf) goto L_10bd318f;
  /* 10bd3180 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3183 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd3186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3189 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd318b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bd318d jmp 0x10bd31ca */
  goto L_10bd31ca;
L_10bd318f:;
  /* 10bd318f mov eax, dword ptr [0x10bfe460] */
  EAX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd3194 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3197 je 0x10bd31ba */
  if (C.zf) goto L_10bd31ba;
  /* 10bd3199 push 0x10bf94b0 */
  push32((uint32_t)(0x10bf94b0u));
  /* 10bd319e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd31a0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10bd31a5 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd31aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd31ac call 0x10bd18f0 */
  push32(0x10bd31b1u); f_10bd18f0();
  /* 10bd31b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd31b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd31b7 jne 0x10bd31ba */
  if (!C.zf) goto L_10bd31ba;
  /* 10bd31b9 int3  */
  x86_unimpl("int3 @ 0x10bd31b9");
L_10bd31ba:;
  /* 10bd31ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd31bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd31be jne 0x10bd318f */
  if (!C.zf) goto L_10bd318f;
  /* 10bd31c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd31c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd31c5 mov dword ptr [0x10bfe460], eax */
  w32((uint32_t)(0x10bfe460), (EAX));
L_10bd31ca:;
  /* 10bd31ca cmp dword ptr [0x10bfe460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd31d1 je 0x10bd31e1 */
  if (C.zf) goto L_10bd31e1;
  /* 10bd31d3 mov ecx, dword ptr [0x10bfe460] */
  ECX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd31d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd31dc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10bd31df jmp 0x10bd31e9 */
  goto L_10bd31e9;
L_10bd31e1:;
  /* 10bd31e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd31e4 mov dword ptr [0x10bfe458], eax */
  w32((uint32_t)(0x10bfe458), (EAX));
L_10bd31e9:;
  /* 10bd31e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd31ec mov edx, dword ptr [0x10bfe460] */
  EDX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd31f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10bd31f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd31f7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10bd31fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3201 mov dword ptr [0x10bfe460], ecx */
  w32((uint32_t)(0x10bfe460), (ECX));
  /* 10bd3207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bd320a:;
  /* 10bd320a pop edi */
  EDI = (pop32());
  /* 10bd320b pop esi */
  ESI = (pop32());
  /* 10bd320c pop ebx */
  EBX = (pop32());
  /* 10bd320d mov esp, ebp */
  ESP = (EBP);
  /* 10bd320f pop ebp */
  EBP = (pop32());
  /* 10bd3210 ret  */
  ESPCHK(0x10bd2d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003220 @ 0x10bd3220 (27 bytes, 13 insns) */
void f_10bd3220(void) {
  FTRACE(0x10bd3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3220 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3221 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3223 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3225 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3227 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd3229 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd322c push eax */
  push32((uint32_t)(EAX));
  /* 10bd322d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3230 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3231 call 0x10bd3240 */
  push32(0x10bd3236u); f_10bd3240();
  /* 10bd3236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3239 pop ebp */
  EBP = (pop32());
  /* 10bd323a ret  */
  ESPCHK(0x10bd3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003240 @ 0x10bd3240 (64 bytes, 27 insns) */
void f_10bd3240(void) {
  FTRACE(0x10bd3240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3240 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3241 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3243 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3244 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3246 call 0x10bd6230 */
  push32(0x10bd324bu); f_10bd6230();
  /* 10bd324b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd324e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3250 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd3253 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3254 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd3257 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3258 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd325b push edx */
  push32((uint32_t)(EDX));
  /* 10bd325c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd325f push eax */
  push32((uint32_t)(EAX));
  /* 10bd3260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3263 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3264 call 0x10bd2d00 */
  push32(0x10bd3269u); f_10bd2d00();
  /* 10bd3269 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd326c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd326f push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3271 call 0x10bd62d0 */
  push32(0x10bd3276u); f_10bd62d0();
  /* 10bd3276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd327c mov esp, ebp */
  ESP = (EBP);
  /* 10bd327e pop ebp */
  EBP = (pop32());
  /* 10bd327f ret  */
  ESPCHK(0x10bd3240u, _esp0);
  ESP += 4; return;
}

/* FUN_10003280 @ 0x10bd3280 (19 bytes, 9 insns) */
void f_10bd3280(void) {
  FTRACE(0x10bd3280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3280 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3281 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3283 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd3285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3288 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3289 call 0x10bd32c0 */
  push32(0x10bd328eu); f_10bd32c0();
  /* 10bd328e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3291 pop ebp */
  EBP = (pop32());
  /* 10bd3292 ret  */
  ESPCHK(0x10bd3280u, _esp0);
  ESP += 4; return;
}

/* FUN_100032a0 @ 0x10bd32a0 (19 bytes, 9 insns) */
void f_10bd32a0(void) {
  FTRACE(0x10bd32a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd32a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd32a1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd32a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd32a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd32a8 push eax */
  push32((uint32_t)(EAX));
  /* 10bd32a9 call 0x10bd32f0 */
  push32(0x10bd32aeu); f_10bd32f0();
  /* 10bd32ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd32b1 pop ebp */
  EBP = (pop32());
  /* 10bd32b2 ret  */
  ESPCHK(0x10bd32a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032c0 @ 0x10bd32c0 (41 bytes, 16 insns) */
void f_10bd32c0(void) {
  FTRACE(0x10bd32c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd32c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd32c1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd32c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd32c5 call 0x10bd6230 */
  push32(0x10bd32cau); f_10bd6230();
  /* 10bd32ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd32cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd32d0 push eax */
  push32((uint32_t)(EAX));
  /* 10bd32d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd32d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd32d5 call 0x10bd32f0 */
  push32(0x10bd32dau); f_10bd32f0();
  /* 10bd32da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd32dd push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd32df call 0x10bd62d0 */
  push32(0x10bd32e4u); f_10bd62d0();
  /* 10bd32e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd32e7 pop ebp */
  EBP = (pop32());
  /* 10bd32e8 ret  */
  ESPCHK(0x10bd32c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x10bd32f0 (1004 bytes, 342 insns) */
void f_10bd32f0(void) {
  FTRACE(0x10bd32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd32f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd32f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd32f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd32f4 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd32f5 push esi */
  push32((uint32_t)(ESI));
  /* 10bd32f6 push edi */
  push32((uint32_t)(EDI));
  /* 10bd32f7 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd32fc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd32ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3301 je 0x10bd3333 */
  if (C.zf) goto L_10bd3333;
L_10bd3303:;
  /* 10bd3303 call 0x10bd39d0 */
  push32(0x10bd3308u); f_10bd39d0();
  /* 10bd3308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd330a jne 0x10bd332d */
  if (!C.zf) goto L_10bd332d;
  /* 10bd330c push 0x10bf949c */
  push32((uint32_t)(0x10bf949cu));
  /* 10bd3311 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3313 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10bd3318 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd331d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd331f call 0x10bd18f0 */
  push32(0x10bd3324u); f_10bd18f0();
  /* 10bd3324 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3327 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd332a jne 0x10bd332d */
  if (!C.zf) goto L_10bd332d;
  /* 10bd332c int3  */
  x86_unimpl("int3 @ 0x10bd332c");
L_10bd332d:;
  /* 10bd332d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd332f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3331 jne 0x10bd3303 */
  if (!C.zf) goto L_10bd3303;
L_10bd3333:;
  /* 10bd3333 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3337 jne 0x10bd333e */
  if (!C.zf) goto L_10bd333e;
  /* 10bd3339 jmp 0x10bd36d5 */
  goto L_10bd36d5;
L_10bd333e:;
  /* 10bd333e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3340 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3342 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3344 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3347 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3348 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd334a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd334d push eax */
  push32((uint32_t)(EAX));
  /* 10bd334e push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd3350 call dword ptr [0x10bfcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfcc90))), 0x10bd3356u);
  /* 10bd3356 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd335b jne 0x10bd3388 */
  if (!C.zf) goto L_10bd3388;
L_10bd335d:;
  /* 10bd335d push 0x10bf9760 */
  push32((uint32_t)(0x10bf9760u));
  /* 10bd3362 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd3367 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3369 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd336b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd336d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd336f call 0x10bd18f0 */
  push32(0x10bd3374u); f_10bd18f0();
  /* 10bd3374 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3377 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd337a jne 0x10bd337d */
  if (!C.zf) goto L_10bd337d;
  /* 10bd337c int3  */
  x86_unimpl("int3 @ 0x10bd337c");
L_10bd337d:;
  /* 10bd337d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd337f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3381 jne 0x10bd335d */
  if (!C.zf) goto L_10bd335d;
  /* 10bd3383 jmp 0x10bd36d5 */
  goto L_10bd36d5;
L_10bd3388:;
  /* 10bd3388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd338b push edx */
  push32((uint32_t)(EDX));
  /* 10bd338c call 0x10bd3e30 */
  push32(0x10bd3391u); f_10bd3e30();
  /* 10bd3391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3396 jne 0x10bd33b9 */
  if (!C.zf) goto L_10bd33b9;
  /* 10bd3398 push 0x10bf95a0 */
  push32((uint32_t)(0x10bf95a0u));
  /* 10bd339d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd339f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10bd33a4 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd33a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd33ab call 0x10bd18f0 */
  push32(0x10bd33b0u); f_10bd18f0();
  /* 10bd33b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd33b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd33b6 jne 0x10bd33b9 */
  if (!C.zf) goto L_10bd33b9;
  /* 10bd33b8 int3  */
  x86_unimpl("int3 @ 0x10bd33b8");
L_10bd33b9:;
  /* 10bd33b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd33bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd33bd jne 0x10bd3388 */
  if (!C.zf) goto L_10bd3388;
  /* 10bd33bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd33c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd33c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd33c8:;
  /* 10bd33c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd33cb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd33ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd33d3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd33d6 je 0x10bd341b */
  if (C.zf) goto L_10bd341b;
  /* 10bd33d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd33db cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd33df je 0x10bd341b */
  if (C.zf) goto L_10bd341b;
  /* 10bd33e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd33e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd33e7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd33ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd33ef je 0x10bd341b */
  if (C.zf) goto L_10bd341b;
  /* 10bd33f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd33f4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd33f8 je 0x10bd341b */
  if (C.zf) goto L_10bd341b;
  /* 10bd33fa push 0x10bf9738 */
  push32((uint32_t)(0x10bf9738u));
  /* 10bd33ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3401 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10bd3406 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd340b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd340d call 0x10bd18f0 */
  push32(0x10bd3412u); f_10bd18f0();
  /* 10bd3412 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3415 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3418 jne 0x10bd341b */
  if (!C.zf) goto L_10bd341b;
  /* 10bd341a int3  */
  x86_unimpl("int3 @ 0x10bd341a");
L_10bd341b:;
  /* 10bd341b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd341d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd341f jne 0x10bd33c8 */
  if (!C.zf) goto L_10bd33c8;
  /* 10bd3421 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd3426 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd342b jne 0x10bd34f6 */
  if (!C.zf) goto L_10bd34f6;
  /* 10bd3431 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd3433 mov cl, byte ptr [0x10bfca90] */
  CL = (r8((uint32_t)(0x10bfca90)));
  /* 10bd3439 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd343a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd343d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3440 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3441 call 0x10bd3940 */
  push32(0x10bd3446u); f_10bd3940();
  /* 10bd3446 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd344b jne 0x10bd3490 */
  if (!C.zf) goto L_10bd3490;
L_10bd344d:;
  /* 10bd344d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3450 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3453 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3454 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3457 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bd345a push edx */
  push32((uint32_t)(EDX));
  /* 10bd345b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd345e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10bd3461 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3467 mov edx, dword ptr [ecx*4 + 0x10bfca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfca94)));
  /* 10bd346e push edx */
  push32((uint32_t)(EDX));
  /* 10bd346f push 0x10bf970c */
  push32((uint32_t)(0x10bf970cu));
  /* 10bd3474 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3476 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3478 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd347a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd347c call 0x10bd18f0 */
  push32(0x10bd3481u); f_10bd18f0();
  /* 10bd3481 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3487 jne 0x10bd348a */
  if (!C.zf) goto L_10bd348a;
  /* 10bd3489 int3  */
  x86_unimpl("int3 @ 0x10bd3489");
L_10bd348a:;
  /* 10bd348a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd348c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd348e jne 0x10bd344d */
  if (!C.zf) goto L_10bd344d;
L_10bd3490:;
  /* 10bd3490 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd3492 mov cl, byte ptr [0x10bfca90] */
  CL = (r8((uint32_t)(0x10bfca90)));
  /* 10bd3498 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3499 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd349c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd349f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd34a2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10bd34a6 push edx */
  push32((uint32_t)(EDX));
  /* 10bd34a7 call 0x10bd3940 */
  push32(0x10bd34acu); f_10bd3940();
  /* 10bd34ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd34af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd34b1 jne 0x10bd34f6 */
  if (!C.zf) goto L_10bd34f6;
L_10bd34b3:;
  /* 10bd34b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd34b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd34b9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd34ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd34bd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bd34c0 push edx */
  push32((uint32_t)(EDX));
  /* 10bd34c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd34c4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10bd34c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd34cd mov edx, dword ptr [ecx*4 + 0x10bfca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfca94)));
  /* 10bd34d4 push edx */
  push32((uint32_t)(EDX));
  /* 10bd34d5 push 0x10bf96e0 */
  push32((uint32_t)(0x10bf96e0u));
  /* 10bd34da push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd34dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd34de push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd34e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd34e2 call 0x10bd18f0 */
  push32(0x10bd34e7u); f_10bd18f0();
  /* 10bd34e7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd34ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd34ed jne 0x10bd34f0 */
  if (!C.zf) goto L_10bd34f0;
  /* 10bd34ef int3  */
  x86_unimpl("int3 @ 0x10bd34ef");
L_10bd34f0:;
  /* 10bd34f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd34f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd34f4 jne 0x10bd34b3 */
  if (!C.zf) goto L_10bd34b3;
L_10bd34f6:;
  /* 10bd34f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd34f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd34fd jne 0x10bd356b */
  if (!C.zf) goto L_10bd356b;
L_10bd34ff:;
  /* 10bd34ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3502 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3509 jne 0x10bd3514 */
  if (!C.zf) goto L_10bd3514;
  /* 10bd350b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd350e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3512 je 0x10bd3535 */
  if (C.zf) goto L_10bd3535;
L_10bd3514:;
  /* 10bd3514 push 0x10bf96a0 */
  push32((uint32_t)(0x10bf96a0u));
  /* 10bd3519 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd351b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10bd3520 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd3525 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd3527 call 0x10bd18f0 */
  push32(0x10bd352cu); f_10bd18f0();
  /* 10bd352c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd352f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3532 jne 0x10bd3535 */
  if (!C.zf) goto L_10bd3535;
  /* 10bd3534 int3  */
  x86_unimpl("int3 @ 0x10bd3534");
L_10bd3535:;
  /* 10bd3535 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3537 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3539 jne 0x10bd34ff */
  if (!C.zf) goto L_10bd34ff;
  /* 10bd353b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd353e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd3541 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3544 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3545 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3547 mov cl, byte ptr [0x10bfca91] */
  CL = (r8((uint32_t)(0x10bfca91)));
  /* 10bd354d push ecx */
  push32((uint32_t)(ECX));
  /* 10bd354e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3551 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3552 call 0x10bd65a0 */
  push32(0x10bd3557u); f_10bd65a0();
  /* 10bd3557 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd355a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd355d push eax */
  push32((uint32_t)(EAX));
  /* 10bd355e call 0x10bd69a0 */
  push32(0x10bd3563u); f_10bd69a0();
  /* 10bd3563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3566 jmp 0x10bd36d5 */
  goto L_10bd36d5;
L_10bd356b:;
  /* 10bd356b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd356e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3572 jne 0x10bd3581 */
  if (!C.zf) goto L_10bd3581;
  /* 10bd3574 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3578 jne 0x10bd3581 */
  if (!C.zf) goto L_10bd3581;
  /* 10bd357a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10bd3581:;
  /* 10bd3581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3584 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd3587 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd358a je 0x10bd35ad */
  if (C.zf) goto L_10bd35ad;
  /* 10bd358c push 0x10bf9680 */
  push32((uint32_t)(0x10bf9680u));
  /* 10bd3591 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3593 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10bd3598 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd359d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd359f call 0x10bd18f0 */
  push32(0x10bd35a4u); f_10bd18f0();
  /* 10bd35a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd35a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd35aa jne 0x10bd35ad */
  if (!C.zf) goto L_10bd35ad;
  /* 10bd35ac int3  */
  x86_unimpl("int3 @ 0x10bd35ac");
L_10bd35ad:;
  /* 10bd35ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd35af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd35b1 jne 0x10bd3581 */
  if (!C.zf) goto L_10bd3581;
  /* 10bd35b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd35b6 mov eax, dword ptr [0x10bfe464] */
  EAX = (r32((uint32_t)(0x10bfe464)));
  /* 10bd35bb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd35be mov dword ptr [0x10bfe464], eax */
  w32((uint32_t)(0x10bfe464), (EAX));
  /* 10bd35c3 mov ecx, dword ptr [0x10bfca84] */
  ECX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd35c9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd35cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd35ce jne 0x10bd36ac */
  if (!C.zf) goto L_10bd36ac;
  /* 10bd35d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd35d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd35da je 0x10bd35ec */
  if (C.zf) goto L_10bd35ec;
  /* 10bd35dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd35df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd35e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd35e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd35e7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10bd35ea jmp 0x10bd362a */
  goto L_10bd362a;
L_10bd35ec:;
  /* 10bd35ec mov ecx, dword ptr [0x10bfe458] */
  ECX = (r32((uint32_t)(0x10bfe458)));
  /* 10bd35f2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd35f5 je 0x10bd3618 */
  if (C.zf) goto L_10bd3618;
  /* 10bd35f7 push 0x10bf9668 */
  push32((uint32_t)(0x10bf9668u));
  /* 10bd35fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd35fe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10bd3603 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd3608 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd360a call 0x10bd18f0 */
  push32(0x10bd360fu); f_10bd18f0();
  /* 10bd360f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3612 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3615 jne 0x10bd3618 */
  if (!C.zf) goto L_10bd3618;
  /* 10bd3617 int3  */
  x86_unimpl("int3 @ 0x10bd3617");
L_10bd3618:;
  /* 10bd3618 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd361a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd361c jne 0x10bd35ec */
  if (!C.zf) goto L_10bd35ec;
  /* 10bd361e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3621 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd3624 mov dword ptr [0x10bfe458], ecx */
  w32((uint32_t)(0x10bfe458), (ECX));
L_10bd362a:;
  /* 10bd362a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd362d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3631 je 0x10bd3642 */
  if (C.zf) goto L_10bd3642;
  /* 10bd3633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3636 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd3639 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd363c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd363e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd3640 jmp 0x10bd367f */
  goto L_10bd367f;
L_10bd3642:;
  /* 10bd3642 mov ecx, dword ptr [0x10bfe460] */
  ECX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd3648 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd364b je 0x10bd366e */
  if (C.zf) goto L_10bd366e;
  /* 10bd364d push 0x10bf9650 */
  push32((uint32_t)(0x10bf9650u));
  /* 10bd3652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3654 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10bd3659 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd365e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd3660 call 0x10bd18f0 */
  push32(0x10bd3665u); f_10bd18f0();
  /* 10bd3665 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3668 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd366b jne 0x10bd366e */
  if (!C.zf) goto L_10bd366e;
  /* 10bd366d int3  */
  x86_unimpl("int3 @ 0x10bd366d");
L_10bd366e:;
  /* 10bd366e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd3670 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd3672 jne 0x10bd3642 */
  if (!C.zf) goto L_10bd3642;
  /* 10bd3674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3677 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd3679 mov dword ptr [0x10bfe460], ecx */
  w32((uint32_t)(0x10bfe460), (ECX));
L_10bd367f:;
  /* 10bd367f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3682 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd3685 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3688 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3689 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd368b mov cl, byte ptr [0x10bfca91] */
  CL = (r8((uint32_t)(0x10bfca91)));
  /* 10bd3691 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3692 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3695 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3696 call 0x10bd65a0 */
  push32(0x10bd369bu); f_10bd65a0();
  /* 10bd369b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd369e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd36a1 push eax */
  push32((uint32_t)(EAX));
  /* 10bd36a2 call 0x10bd69a0 */
  push32(0x10bd36a7u); f_10bd69a0();
  /* 10bd36a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd36aa jmp 0x10bd36d5 */
  goto L_10bd36d5;
L_10bd36ac:;
  /* 10bd36ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd36af mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10bd36b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd36b9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd36bc push eax */
  push32((uint32_t)(EAX));
  /* 10bd36bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd36bf mov cl, byte ptr [0x10bfca91] */
  CL = (r8((uint32_t)(0x10bfca91)));
  /* 10bd36c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd36c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd36c9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd36cc push edx */
  push32((uint32_t)(EDX));
  /* 10bd36cd call 0x10bd65a0 */
  push32(0x10bd36d2u); f_10bd65a0();
  /* 10bd36d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd36d5:;
  /* 10bd36d5 pop edi */
  EDI = (pop32());
  /* 10bd36d6 pop esi */
  ESI = (pop32());
  /* 10bd36d7 pop ebx */
  EBX = (pop32());
  /* 10bd36d8 mov esp, ebp */
  ESP = (EBP);
  /* 10bd36da pop ebp */
  EBP = (pop32());
  /* 10bd36db ret  */
  ESPCHK(0x10bd32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x10bd36e0 (19 bytes, 9 insns) */
void f_10bd36e0(void) {
  FTRACE(0x10bd36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd36e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd36e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd36e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd36e8 push eax */
  push32((uint32_t)(EAX));
  /* 10bd36e9 call 0x10bd3700 */
  push32(0x10bd36eeu); f_10bd3700();
  /* 10bd36ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd36f1 pop ebp */
  EBP = (pop32());
  /* 10bd36f2 ret  */
  ESPCHK(0x10bd36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003700 @ 0x10bd3700 (342 bytes, 119 insns) */
void f_10bd3700(void) {
  FTRACE(0x10bd3700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3700 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3701 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3706 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd3707 push esi */
  push32((uint32_t)(ESI));
  /* 10bd3708 push edi */
  push32((uint32_t)(EDI));
  /* 10bd3709 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd370e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3713 je 0x10bd3745 */
  if (C.zf) goto L_10bd3745;
L_10bd3715:;
  /* 10bd3715 call 0x10bd39d0 */
  push32(0x10bd371au); f_10bd39d0();
  /* 10bd371a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd371c jne 0x10bd373f */
  if (!C.zf) goto L_10bd373f;
  /* 10bd371e push 0x10bf949c */
  push32((uint32_t)(0x10bf949cu));
  /* 10bd3723 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3725 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10bd372a push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd372f push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd3731 call 0x10bd18f0 */
  push32(0x10bd3736u); f_10bd18f0();
  /* 10bd3736 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3739 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd373c jne 0x10bd373f */
  if (!C.zf) goto L_10bd373f;
  /* 10bd373e int3  */
  x86_unimpl("int3 @ 0x10bd373e");
L_10bd373f:;
  /* 10bd373f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3741 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3743 jne 0x10bd3715 */
  if (!C.zf) goto L_10bd3715;
L_10bd3745:;
  /* 10bd3745 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3747 call 0x10bd6230 */
  push32(0x10bd374cu); f_10bd6230();
  /* 10bd374c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd374f:;
  /* 10bd374f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3752 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3753 call 0x10bd3e30 */
  push32(0x10bd3758u); f_10bd3e30();
  /* 10bd3758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd375b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd375d jne 0x10bd3780 */
  if (!C.zf) goto L_10bd3780;
  /* 10bd375f push 0x10bf95a0 */
  push32((uint32_t)(0x10bf95a0u));
  /* 10bd3764 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3766 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10bd376b push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd3770 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd3772 call 0x10bd18f0 */
  push32(0x10bd3777u); f_10bd18f0();
  /* 10bd3777 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd377a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd377d jne 0x10bd3780 */
  if (!C.zf) goto L_10bd3780;
  /* 10bd377f int3  */
  x86_unimpl("int3 @ 0x10bd377f");
L_10bd3780:;
  /* 10bd3780 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3784 jne 0x10bd374f */
  if (!C.zf) goto L_10bd374f;
  /* 10bd3786 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3789 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd378c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10bd378f:;
  /* 10bd378f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3792 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd3795 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd379a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd379d je 0x10bd37e2 */
  if (C.zf) goto L_10bd37e2;
  /* 10bd379f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd37a2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd37a6 je 0x10bd37e2 */
  if (C.zf) goto L_10bd37e2;
  /* 10bd37a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd37ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd37ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd37b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd37b6 je 0x10bd37e2 */
  if (C.zf) goto L_10bd37e2;
  /* 10bd37b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd37bb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd37bf je 0x10bd37e2 */
  if (C.zf) goto L_10bd37e2;
  /* 10bd37c1 push 0x10bf9738 */
  push32((uint32_t)(0x10bf9738u));
  /* 10bd37c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd37c8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10bd37cd push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd37d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd37d4 call 0x10bd18f0 */
  push32(0x10bd37d9u); f_10bd18f0();
  /* 10bd37d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd37dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd37df jne 0x10bd37e2 */
  if (!C.zf) goto L_10bd37e2;
  /* 10bd37e1 int3  */
  x86_unimpl("int3 @ 0x10bd37e1");
L_10bd37e2:;
  /* 10bd37e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd37e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd37e6 jne 0x10bd378f */
  if (!C.zf) goto L_10bd378f;
  /* 10bd37e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd37eb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd37ef jne 0x10bd37fe */
  if (!C.zf) goto L_10bd37fe;
  /* 10bd37f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd37f5 jne 0x10bd37fe */
  if (!C.zf) goto L_10bd37fe;
  /* 10bd37f7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10bd37fe:;
  /* 10bd37fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3801 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3805 je 0x10bd3839 */
  if (C.zf) goto L_10bd3839;
L_10bd3807:;
  /* 10bd3807 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd380a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd380d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3810 je 0x10bd3833 */
  if (C.zf) goto L_10bd3833;
  /* 10bd3812 push 0x10bf9680 */
  push32((uint32_t)(0x10bf9680u));
  /* 10bd3817 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3819 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10bd381e push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd3823 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd3825 call 0x10bd18f0 */
  push32(0x10bd382au); f_10bd18f0();
  /* 10bd382a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd382d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3830 jne 0x10bd3833 */
  if (!C.zf) goto L_10bd3833;
  /* 10bd3832 int3  */
  x86_unimpl("int3 @ 0x10bd3832");
L_10bd3833:;
  /* 10bd3833 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3837 jne 0x10bd3807 */
  if (!C.zf) goto L_10bd3807;
L_10bd3839:;
  /* 10bd3839 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd383c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd383f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd3842 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3844 call 0x10bd62d0 */
  push32(0x10bd3849u); f_10bd62d0();
  /* 10bd3849 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd384c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd384f pop edi */
  EDI = (pop32());
  /* 10bd3850 pop esi */
  ESI = (pop32());
  /* 10bd3851 pop ebx */
  EBX = (pop32());
  /* 10bd3852 mov esp, ebp */
  ESP = (EBP);
  /* 10bd3854 pop ebp */
  EBP = (pop32());
  /* 10bd3855 ret  */
  ESPCHK(0x10bd3700u, _esp0);
  ESP += 4; return;
}

/* FUN_10003860 @ 0x10bd3860 (28 bytes, 11 insns) */
void f_10bd3860(void) {
  FTRACE(0x10bd3860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3860 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3861 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3863 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3864 mov eax, dword ptr [0x10bfca8c] */
  EAX = (r32((uint32_t)(0x10bfca8c)));
  /* 10bd3869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd386c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd386f mov dword ptr [0x10bfca8c], ecx */
  w32((uint32_t)(0x10bfca8c), (ECX));
  /* 10bd3875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3878 mov esp, ebp */
  ESP = (EBP);
  /* 10bd387a pop ebp */
  EBP = (pop32());
  /* 10bd387b ret  */
  ESPCHK(0x10bd3860u, _esp0);
  ESP += 4; return;
}

/* FUN_10003880 @ 0x10bd3880 (157 bytes, 59 insns) */
void f_10bd3880(void) {
  FTRACE(0x10bd3880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3880 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3881 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3883 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3884 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd3885 push esi */
  push32((uint32_t)(ESI));
  /* 10bd3886 push edi */
  push32((uint32_t)(EDI));
  /* 10bd3887 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3889 call 0x10bd6230 */
  push32(0x10bd388eu); f_10bd6230();
  /* 10bd388e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3891 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3894 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3895 call 0x10bd3e30 */
  push32(0x10bd389au); f_10bd3e30();
  /* 10bd389a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd389d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd389f je 0x10bd390c */
  if (C.zf) goto L_10bd390c;
  /* 10bd38a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd38a4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd38a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd38aa:;
  /* 10bd38aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd38ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd38b0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd38b5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd38b8 je 0x10bd38fd */
  if (C.zf) goto L_10bd38fd;
  /* 10bd38ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd38bd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd38c1 je 0x10bd38fd */
  if (C.zf) goto L_10bd38fd;
  /* 10bd38c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd38c6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd38c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd38ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd38d1 je 0x10bd38fd */
  if (C.zf) goto L_10bd38fd;
  /* 10bd38d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd38d6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd38da je 0x10bd38fd */
  if (C.zf) goto L_10bd38fd;
  /* 10bd38dc push 0x10bf9738 */
  push32((uint32_t)(0x10bf9738u));
  /* 10bd38e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd38e3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10bd38e8 push 0x10bf9490 */
  push32((uint32_t)(0x10bf9490u));
  /* 10bd38ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd38ef call 0x10bd18f0 */
  push32(0x10bd38f4u); f_10bd18f0();
  /* 10bd38f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd38f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd38fa jne 0x10bd38fd */
  if (!C.zf) goto L_10bd38fd;
  /* 10bd38fc int3  */
  x86_unimpl("int3 @ 0x10bd38fc");
L_10bd38fd:;
  /* 10bd38fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd38ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd3901 jne 0x10bd38aa */
  if (!C.zf) goto L_10bd38aa;
  /* 10bd3903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3906 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3909 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10bd390c:;
  /* 10bd390c push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd390e call 0x10bd62d0 */
  push32(0x10bd3913u); f_10bd62d0();
  /* 10bd3913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3916 pop edi */
  EDI = (pop32());
  /* 10bd3917 pop esi */
  ESI = (pop32());
  /* 10bd3918 pop ebx */
  EBX = (pop32());
  /* 10bd3919 mov esp, ebp */
  ESP = (EBP);
  /* 10bd391b pop ebp */
  EBP = (pop32());
  /* 10bd391c ret  */
  ESPCHK(0x10bd3880u, _esp0);
  ESP += 4; return;
}

/* FUN_10003920 @ 0x10bd3920 (28 bytes, 11 insns) */
void f_10bd3920(void) {
  FTRACE(0x10bd3920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3920 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3921 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3923 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3924 mov eax, dword ptr [0x10bfcc90] */
  EAX = (r32((uint32_t)(0x10bfcc90)));
  /* 10bd3929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd392c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd392f mov dword ptr [0x10bfcc90], ecx */
  w32((uint32_t)(0x10bfcc90), (ECX));
  /* 10bd3935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3938 mov esp, ebp */
  ESP = (EBP);
  /* 10bd393a pop ebp */
  EBP = (pop32());
  /* 10bd393b ret  */
  ESPCHK(0x10bd3920u, _esp0);
  ESP += 4; return;
}

/* FUN_10003940 @ 0x10bd3940 (136 bytes, 55 insns) */
void f_10bd3940(void) {
  FTRACE(0x10bd3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3940 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3941 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3943 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3944 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd3945 push esi */
  push32((uint32_t)(ESI));
  /* 10bd3946 push edi */
  push32((uint32_t)(EDI));
  /* 10bd3947 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10bd394e:;
  /* 10bd394e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd3951 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd3954 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3957 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10bd395a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd395c je 0x10bd39be */
  if (C.zf) goto L_10bd39be;
  /* 10bd395e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3961 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3963 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bd3965 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3968 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd396e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3971 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3974 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10bd3977 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3979 je 0x10bd39bc */
  if (C.zf) goto L_10bd39bc;
L_10bd397b:;
  /* 10bd397b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd397e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3983 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3984 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3987 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd3989 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10bd398c push edx */
  push32((uint32_t)(EDX));
  /* 10bd398d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3990 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3993 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3994 push 0x10bf977c */
  push32((uint32_t)(0x10bf977cu));
  /* 10bd3999 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd399b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd399d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd399f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd39a1 call 0x10bd18f0 */
  push32(0x10bd39a6u); f_10bd18f0();
  /* 10bd39a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd39a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd39ac jne 0x10bd39af */
  if (!C.zf) goto L_10bd39af;
  /* 10bd39ae int3  */
  x86_unimpl("int3 @ 0x10bd39ae");
L_10bd39af:;
  /* 10bd39af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd39b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd39b3 jne 0x10bd397b */
  if (!C.zf) goto L_10bd397b;
  /* 10bd39b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bd39bc:;
  /* 10bd39bc jmp 0x10bd394e */
  goto L_10bd394e;
L_10bd39be:;
  /* 10bd39be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd39c1 pop edi */
  EDI = (pop32());
  /* 10bd39c2 pop esi */
  ESI = (pop32());
  /* 10bd39c3 pop ebx */
  EBX = (pop32());
  /* 10bd39c4 mov esp, ebp */
  ESP = (EBP);
  /* 10bd39c6 pop ebp */
  EBP = (pop32());
  /* 10bd39c7 ret  */
  ESPCHK(0x10bd3940u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x10bd39d0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10bd39d0(void) {
  FTRACE(0x10bd39d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd39d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd39d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd39d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd39d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd39d7 push esi */
  push32((uint32_t)(ESI));
  /* 10bd39d8 push edi */
  push32((uint32_t)(EDI));
  /* 10bd39d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bd39e0 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd39e5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd39e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd39ea jne 0x10bd39f6 */
  if (!C.zf) goto L_10bd39f6;
  /* 10bd39ec mov eax, 1 */
  EAX = (0x1u);
  /* 10bd39f1 jmp 0x10bd3d28 */
  goto L_10bd3d28;
L_10bd39f6:;
  /* 10bd39f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd39f8 call 0x10bd6230 */
  push32(0x10bd39fdu); f_10bd6230();
  /* 10bd39fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3a00 call 0x10bd6a10 */
  push32(0x10bd3a05u); f_10bd6a10();
  /* 10bd3a05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd3a08 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3a0c je 0x10bd3b19 */
  if (C.zf) goto L_10bd3b19;
  /* 10bd3a12 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3a16 je 0x10bd3b19 */
  if (C.zf) goto L_10bd3b19;
  /* 10bd3a1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd3a1f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10bd3a22 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd3a25 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3a28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10bd3a2b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3a2f ja 0x10bd3ae2 */
  if ((!C.cf&&!C.zf)) goto L_10bd3ae2;
  /* 10bd3a35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd3a38 jmp dword ptr [eax*4 + 0x10bd3d2f] */
  switch (EAX) {
    case 0: goto L_10bd3aba;
    case 1: goto L_10bd3a92;
    case 2: goto L_10bd3a6a;
    case 3: goto L_10bd3a3f;
    default: x86_unimpl("switch@0x10bd3a38 out of table"); return;
  }
L_10bd3a3f:;
  /* 10bd3a3f push 0x10bf98d0 */
  push32((uint32_t)(0x10bf98d0u));
  /* 10bd3a44 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd3a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a51 call 0x10bd18f0 */
  push32(0x10bd3a56u); f_10bd18f0();
  /* 10bd3a56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3a59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3a5c jne 0x10bd3a5f */
  if (!C.zf) goto L_10bd3a5f;
  /* 10bd3a5e int3  */
  x86_unimpl("int3 @ 0x10bd3a5e");
L_10bd3a5f:;
  /* 10bd3a5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3a61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3a63 jne 0x10bd3a3f */
  if (!C.zf) goto L_10bd3a3f;
  /* 10bd3a65 jmp 0x10bd3b08 */
  goto L_10bd3b08;
L_10bd3a6a:;
  /* 10bd3a6a push 0x10bf98ac */
  push32((uint32_t)(0x10bf98acu));
  /* 10bd3a6f push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd3a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a7c call 0x10bd18f0 */
  push32(0x10bd3a81u); f_10bd18f0();
  /* 10bd3a81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3a84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3a87 jne 0x10bd3a8a */
  if (!C.zf) goto L_10bd3a8a;
  /* 10bd3a89 int3  */
  x86_unimpl("int3 @ 0x10bd3a89");
L_10bd3a8a:;
  /* 10bd3a8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd3a8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd3a8e jne 0x10bd3a6a */
  if (!C.zf) goto L_10bd3a6a;
  /* 10bd3a90 jmp 0x10bd3b08 */
  goto L_10bd3b08;
L_10bd3a92:;
  /* 10bd3a92 push 0x10bf9888 */
  push32((uint32_t)(0x10bf9888u));
  /* 10bd3a97 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd3a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3aa4 call 0x10bd18f0 */
  push32(0x10bd3aa9u); f_10bd18f0();
  /* 10bd3aa9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3aac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3aaf jne 0x10bd3ab2 */
  if (!C.zf) goto L_10bd3ab2;
  /* 10bd3ab1 int3  */
  x86_unimpl("int3 @ 0x10bd3ab1");
L_10bd3ab2:;
  /* 10bd3ab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3ab6 jne 0x10bd3a92 */
  if (!C.zf) goto L_10bd3a92;
  /* 10bd3ab8 jmp 0x10bd3b08 */
  goto L_10bd3b08;
L_10bd3aba:;
  /* 10bd3aba push 0x10bf9864 */
  push32((uint32_t)(0x10bf9864u));
  /* 10bd3abf push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd3ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3aca push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3acc call 0x10bd18f0 */
  push32(0x10bd3ad1u); f_10bd18f0();
  /* 10bd3ad1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3ad4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3ad7 jne 0x10bd3ada */
  if (!C.zf) goto L_10bd3ada;
  /* 10bd3ad9 int3  */
  x86_unimpl("int3 @ 0x10bd3ad9");
L_10bd3ada:;
  /* 10bd3ada xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3adc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3ade jne 0x10bd3aba */
  if (!C.zf) goto L_10bd3aba;
  /* 10bd3ae0 jmp 0x10bd3b08 */
  goto L_10bd3b08;
L_10bd3ae2:;
  /* 10bd3ae2 push 0x10bf9838 */
  push32((uint32_t)(0x10bf9838u));
  /* 10bd3ae7 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd3aec push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3aee push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3af4 call 0x10bd18f0 */
  push32(0x10bd3af9u); f_10bd18f0();
  /* 10bd3af9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3afc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3aff jne 0x10bd3b02 */
  if (!C.zf) goto L_10bd3b02;
  /* 10bd3b01 int3  */
  x86_unimpl("int3 @ 0x10bd3b01");
L_10bd3b02:;
  /* 10bd3b02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd3b04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd3b06 jne 0x10bd3ae2 */
  if (!C.zf) goto L_10bd3ae2;
L_10bd3b08:;
  /* 10bd3b08 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3b0a call 0x10bd62d0 */
  push32(0x10bd3b0fu); f_10bd62d0();
  /* 10bd3b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3b12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3b14 jmp 0x10bd3d28 */
  goto L_10bd3d28;
L_10bd3b19:;
  /* 10bd3b19 mov eax, dword ptr [0x10bfe460] */
  EAX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd3b1e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd3b21 jmp 0x10bd3b2b */
  goto L_10bd3b2b;
L_10bd3b23:;
  /* 10bd3b23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3b26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd3b28 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10bd3b2b:;
  /* 10bd3b2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3b2f je 0x10bd3d1b */
  if (C.zf) goto L_10bd3d1b;
  /* 10bd3b35 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10bd3b3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3b3f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10bd3b42 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3b48 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3b4b je 0x10bd3b70 */
  if (C.zf) goto L_10bd3b70;
  /* 10bd3b4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3b50 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3b54 je 0x10bd3b70 */
  if (C.zf) goto L_10bd3b70;
  /* 10bd3b56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3b59 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10bd3b5c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3b62 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3b65 je 0x10bd3b70 */
  if (C.zf) goto L_10bd3b70;
  /* 10bd3b67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3b6a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3b6e jne 0x10bd3b88 */
  if (!C.zf) goto L_10bd3b88;
L_10bd3b70:;
  /* 10bd3b70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3b73 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10bd3b76 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3b7c mov edx, dword ptr [ecx*4 + 0x10bfca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfca94)));
  /* 10bd3b83 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bd3b86 jmp 0x10bd3b8f */
  goto L_10bd3b8f;
L_10bd3b88:;
  /* 10bd3b88 mov dword ptr [ebp - 0x14], 0x10bf9830 */
  w32((uint32_t)(EBP + -0x14), (0x10bf9830u));
L_10bd3b8f:;
  /* 10bd3b8f push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd3b91 mov al, byte ptr [0x10bfca90] */
  AL = (r8((uint32_t)(0x10bfca90)));
  /* 10bd3b96 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3b9a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3b9d push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3b9e call 0x10bd3940 */
  push32(0x10bd3ba3u); f_10bd3940();
  /* 10bd3ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3ba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3ba8 jne 0x10bd3be4 */
  if (!C.zf) goto L_10bd3be4;
L_10bd3baa:;
  /* 10bd3baa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3bad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3bb0 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3bb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3bb4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10bd3bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3bb8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd3bbb push edx */
  push32((uint32_t)(EDX));
  /* 10bd3bbc push 0x10bf970c */
  push32((uint32_t)(0x10bf970cu));
  /* 10bd3bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3bc9 call 0x10bd18f0 */
  push32(0x10bd3bceu); f_10bd18f0();
  /* 10bd3bce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3bd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3bd4 jne 0x10bd3bd7 */
  if (!C.zf) goto L_10bd3bd7;
  /* 10bd3bd6 int3  */
  x86_unimpl("int3 @ 0x10bd3bd6");
L_10bd3bd7:;
  /* 10bd3bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3bdb jne 0x10bd3baa */
  if (!C.zf) goto L_10bd3baa;
  /* 10bd3bdd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10bd3be4:;
  /* 10bd3be4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd3be6 mov cl, byte ptr [0x10bfca90] */
  CL = (r8((uint32_t)(0x10bfca90)));
  /* 10bd3bec push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3bed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3bf0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd3bf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3bf6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10bd3bfa push edx */
  push32((uint32_t)(EDX));
  /* 10bd3bfb call 0x10bd3940 */
  push32(0x10bd3c00u); f_10bd3940();
  /* 10bd3c00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3c05 jne 0x10bd3c41 */
  if (!C.zf) goto L_10bd3c41;
L_10bd3c07:;
  /* 10bd3c07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3c0a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3c0d push eax */
  push32((uint32_t)(EAX));
  /* 10bd3c0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3c11 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bd3c14 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3c15 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd3c18 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3c19 push 0x10bf96e0 */
  push32((uint32_t)(0x10bf96e0u));
  /* 10bd3c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3c26 call 0x10bd18f0 */
  push32(0x10bd3c2bu); f_10bd18f0();
  /* 10bd3c2b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3c2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3c31 jne 0x10bd3c34 */
  if (!C.zf) goto L_10bd3c34;
  /* 10bd3c33 int3  */
  x86_unimpl("int3 @ 0x10bd3c33");
L_10bd3c34:;
  /* 10bd3c34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3c36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3c38 jne 0x10bd3c07 */
  if (!C.zf) goto L_10bd3c07;
  /* 10bd3c3a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10bd3c41:;
  /* 10bd3c41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3c44 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3c48 jne 0x10bd3c9a */
  if (!C.zf) goto L_10bd3c9a;
  /* 10bd3c4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3c4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd3c50 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3c51 mov dl, byte ptr [0x10bfca91] */
  DL = (r8((uint32_t)(0x10bfca91)));
  /* 10bd3c57 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3c58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3c5b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3c5e push eax */
  push32((uint32_t)(EAX));
  /* 10bd3c5f call 0x10bd3940 */
  push32(0x10bd3c64u); f_10bd3940();
  /* 10bd3c64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3c67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3c69 jne 0x10bd3c9a */
  if (!C.zf) goto L_10bd3c9a;
L_10bd3c6b:;
  /* 10bd3c6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3c6e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3c71 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3c72 push 0x10bf9804 */
  push32((uint32_t)(0x10bf9804u));
  /* 10bd3c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3c7f call 0x10bd18f0 */
  push32(0x10bd3c84u); f_10bd18f0();
  /* 10bd3c84 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3c87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3c8a jne 0x10bd3c8d */
  if (!C.zf) goto L_10bd3c8d;
  /* 10bd3c8c int3  */
  x86_unimpl("int3 @ 0x10bd3c8c");
L_10bd3c8d:;
  /* 10bd3c8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd3c8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd3c91 jne 0x10bd3c6b */
  if (!C.zf) goto L_10bd3c6b;
  /* 10bd3c93 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10bd3c9a:;
  /* 10bd3c9a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3c9e jne 0x10bd3d16 */
  if (!C.zf) goto L_10bd3d16;
  /* 10bd3ca0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3ca3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3ca7 je 0x10bd3cdc */
  if (C.zf) goto L_10bd3cdc;
L_10bd3ca9:;
  /* 10bd3ca9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3cac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd3caf push edx */
  push32((uint32_t)(EDX));
  /* 10bd3cb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3cb3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd3cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3cb7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd3cba push edx */
  push32((uint32_t)(EDX));
  /* 10bd3cbb push 0x10bf97e4 */
  push32((uint32_t)(0x10bf97e4u));
  /* 10bd3cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3cc8 call 0x10bd18f0 */
  push32(0x10bd3ccdu); f_10bd18f0();
  /* 10bd3ccd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3cd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3cd3 jne 0x10bd3cd6 */
  if (!C.zf) goto L_10bd3cd6;
  /* 10bd3cd5 int3  */
  x86_unimpl("int3 @ 0x10bd3cd5");
L_10bd3cd6:;
  /* 10bd3cd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3cda jne 0x10bd3ca9 */
  if (!C.zf) goto L_10bd3ca9;
L_10bd3cdc:;
  /* 10bd3cdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3cdf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bd3ce2 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3ce3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd3ce6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3ce9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3cea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd3ced push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3cee push 0x10bf97b8 */
  push32((uint32_t)(0x10bf97b8u));
  /* 10bd3cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3cfb call 0x10bd18f0 */
  push32(0x10bd3d00u); f_10bd18f0();
  /* 10bd3d00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3d03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3d06 jne 0x10bd3d09 */
  if (!C.zf) goto L_10bd3d09;
  /* 10bd3d08 int3  */
  x86_unimpl("int3 @ 0x10bd3d08");
L_10bd3d09:;
  /* 10bd3d09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd3d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd3d0d jne 0x10bd3cdc */
  if (!C.zf) goto L_10bd3cdc;
  /* 10bd3d0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bd3d16:;
  /* 10bd3d16 jmp 0x10bd3b23 */
  goto L_10bd3b23;
L_10bd3d1b:;
  /* 10bd3d1b push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3d1d call 0x10bd62d0 */
  push32(0x10bd3d22u); f_10bd62d0();
  /* 10bd3d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3d25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bd3d28:;
  /* 10bd3d28 pop edi */
  EDI = (pop32());
  /* 10bd3d29 pop esi */
  ESI = (pop32());
  /* 10bd3d2a pop ebx */
  EBX = (pop32());
  /* 10bd3d2b mov esp, ebp */
  ESP = (EBP);
  /* 10bd3d2d pop ebp */
  EBP = (pop32());
  /* 10bd3d2e ret  */
  ESPCHK(0x10bd39d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d40 @ 0x10bd3d40 (34 bytes, 13 insns) */
void f_10bd3d40(void) {
  FTRACE(0x10bd3d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3d41 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3d44 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd3d49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd3d4c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3d50 je 0x10bd3d5b */
  if (C.zf) goto L_10bd3d5b;
  /* 10bd3d52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3d55 mov dword ptr [0x10bfca84], ecx */
  w32((uint32_t)(0x10bfca84), (ECX));
L_10bd3d5b:;
  /* 10bd3d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3d5e mov esp, ebp */
  ESP = (EBP);
  /* 10bd3d60 pop ebp */
  EBP = (pop32());
  /* 10bd3d61 ret  */
  ESPCHK(0x10bd3d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d70 @ 0x10bd3d70 (103 bytes, 38 insns) */
void f_10bd3d70(void) {
  FTRACE(0x10bd3d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3d71 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3d74 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd3d79 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3d7e jne 0x10bd3d82 */
  if (!C.zf) goto L_10bd3d82;
  /* 10bd3d80 jmp 0x10bd3dd3 */
  goto L_10bd3dd3;
L_10bd3d82:;
  /* 10bd3d82 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3d84 call 0x10bd6230 */
  push32(0x10bd3d89u); f_10bd6230();
  /* 10bd3d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3d8c mov ecx, dword ptr [0x10bfe460] */
  ECX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd3d92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd3d95 jmp 0x10bd3d9f */
  goto L_10bd3d9f;
L_10bd3d97:;
  /* 10bd3d97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3d9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd3d9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd3d9f:;
  /* 10bd3d9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3da3 je 0x10bd3dc9 */
  if (C.zf) goto L_10bd3dc9;
  /* 10bd3da5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3da8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10bd3dab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd3db1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3db4 jne 0x10bd3dc7 */
  if (!C.zf) goto L_10bd3dc7;
  /* 10bd3db6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3db9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3dbd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3dc1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10bd3dc4u);
  /* 10bd3dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd3dc7:;
  /* 10bd3dc7 jmp 0x10bd3d97 */
  goto L_10bd3d97;
L_10bd3dc9:;
  /* 10bd3dc9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3dcb call 0x10bd62d0 */
  push32(0x10bd3dd0u); f_10bd62d0();
  /* 10bd3dd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd3dd3:;
  /* 10bd3dd3 mov esp, ebp */
  ESP = (EBP);
  /* 10bd3dd5 pop ebp */
  EBP = (pop32());
  /* 10bd3dd6 ret  */
  ESPCHK(0x10bd3d70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10bd3de0 (75 bytes, 28 insns) */
void f_10bd3de0(void) {
  FTRACE(0x10bd3de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3de1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3de4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3de8 je 0x10bd3e1d */
  if (C.zf) goto L_10bd3e1d;
  /* 10bd3dea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3ded push eax */
  push32((uint32_t)(EAX));
  /* 10bd3dee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3df1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3df2 call dword ptr [0x10c002a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002a4))), 0x10bd3df8u);
  /* 10bd3df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3dfa jne 0x10bd3e1d */
  if (!C.zf) goto L_10bd3e1d;
  /* 10bd3dfc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3e00 je 0x10bd3e14 */
  if (C.zf) goto L_10bd3e14;
  /* 10bd3e02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3e05 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3e09 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3e0a call dword ptr [0x10c002a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002a0))), 0x10bd3e10u);
  /* 10bd3e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3e12 jne 0x10bd3e1d */
  if (!C.zf) goto L_10bd3e1d;
L_10bd3e14:;
  /* 10bd3e14 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bd3e1b jmp 0x10bd3e24 */
  goto L_10bd3e24;
L_10bd3e1d:;
  /* 10bd3e1d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bd3e24:;
  /* 10bd3e24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3e27 mov esp, ebp */
  ESP = (EBP);
  /* 10bd3e29 pop ebp */
  EBP = (pop32());
  /* 10bd3e2a ret  */
  ESPCHK(0x10bd3de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e30 @ 0x10bd3e30 (134 bytes, 50 insns) */
void f_10bd3e30(void) {
  FTRACE(0x10bd3e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3e31 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3e34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3e38 jne 0x10bd3e3e */
  if (!C.zf) goto L_10bd3e3e;
  /* 10bd3e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3e3c jmp 0x10bd3eb2 */
  goto L_10bd3eb2;
L_10bd3e3e:;
  /* 10bd3e3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd3e40 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10bd3e42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3e45 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3e48 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3e49 call 0x10bd3de0 */
  push32(0x10bd3e4eu); f_10bd3de0();
  /* 10bd3e4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3e51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3e53 jne 0x10bd3e59 */
  if (!C.zf) goto L_10bd3e59;
  /* 10bd3e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3e57 jmp 0x10bd3eb2 */
  goto L_10bd3eb2;
L_10bd3e59:;
  /* 10bd3e59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3e5c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3e5f push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3e60 call 0x10bd6b30 */
  push32(0x10bd3e65u); f_10bd6b30();
  /* 10bd3e65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3e68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd3e6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3e6f je 0x10bd3e86 */
  if (C.zf) goto L_10bd3e86;
  /* 10bd3e71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3e74 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3e77 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3e7b push eax */
  push32((uint32_t)(EAX));
  /* 10bd3e7c call 0x10bd6b90 */
  push32(0x10bd3e81u); f_10bd6b90();
  /* 10bd3e81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3e84 jmp 0x10bd3eb2 */
  goto L_10bd3eb2;
L_10bd3e86:;
  /* 10bd3e86 mov ecx, dword ptr [0x10bfe414] */
  ECX = (r32((uint32_t)(0x10bfe414)));
  /* 10bd3e8c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd3e92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd3e94 je 0x10bd3e9d */
  if (C.zf) goto L_10bd3e9d;
  /* 10bd3e96 mov eax, 1 */
  EAX = (0x1u);
  /* 10bd3e9b jmp 0x10bd3eb2 */
  goto L_10bd3eb2;
L_10bd3e9d:;
  /* 10bd3e9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3ea0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3ea3 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3ea6 mov eax, dword ptr [0x10bffdac] */
  EAX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd3eab push eax */
  push32((uint32_t)(EAX));
  /* 10bd3eac call dword ptr [0x10c002a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002a8))), 0x10bd3eb2u);
L_10bd3eb2:;
  /* 10bd3eb2 mov esp, ebp */
  ESP = (EBP);
  /* 10bd3eb4 pop ebp */
  EBP = (pop32());
  /* 10bd3eb5 ret  */
  ESPCHK(0x10bd3e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ec0 @ 0x10bd3ec0 (227 bytes, 80 insns) */
void f_10bd3ec0(void) {
  FTRACE(0x10bd3ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3ec7 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3ec8 call 0x10bd3e30 */
  push32(0x10bd3ecdu); f_10bd3e30();
  /* 10bd3ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3ed2 jne 0x10bd3edb */
  if (!C.zf) goto L_10bd3edb;
  /* 10bd3ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3ed6 jmp 0x10bd3f9f */
  goto L_10bd3f9f;
L_10bd3edb:;
  /* 10bd3edb push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3edd call 0x10bd6230 */
  push32(0x10bd3ee2u); f_10bd6230();
  /* 10bd3ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3ee5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3ee8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3eeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd3eee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3ef1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd3ef4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3ef9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3efc je 0x10bd3f20 */
  if (C.zf) goto L_10bd3f20;
  /* 10bd3efe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3f01 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3f05 je 0x10bd3f20 */
  if (C.zf) goto L_10bd3f20;
  /* 10bd3f07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3f0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd3f0d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd3f12 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3f15 je 0x10bd3f20 */
  if (C.zf) goto L_10bd3f20;
  /* 10bd3f17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3f1a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3f1e jne 0x10bd3f93 */
  if (!C.zf) goto L_10bd3f93;
L_10bd3f20:;
  /* 10bd3f20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd3f22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd3f25 push edx */
  push32((uint32_t)(EDX));
  /* 10bd3f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3f29 push eax */
  push32((uint32_t)(EAX));
  /* 10bd3f2a call 0x10bd3de0 */
  push32(0x10bd3f2fu); f_10bd3de0();
  /* 10bd3f2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd3f34 je 0x10bd3f93 */
  if (C.zf) goto L_10bd3f93;
  /* 10bd3f36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3f39 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bd3f3c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3f3f jne 0x10bd3f93 */
  if (!C.zf) goto L_10bd3f93;
  /* 10bd3f41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3f44 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10bd3f47 cmp ecx, dword ptr [0x10bfca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3f4d jg 0x10bd3f93 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bd3f93;
  /* 10bd3f4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3f53 je 0x10bd3f60 */
  if (C.zf) goto L_10bd3f60;
  /* 10bd3f55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd3f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3f5b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10bd3f5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd3f60:;
  /* 10bd3f60 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3f64 je 0x10bd3f71 */
  if (C.zf) goto L_10bd3f71;
  /* 10bd3f66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd3f69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3f6c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd3f6f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd3f71:;
  /* 10bd3f71 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3f75 je 0x10bd3f82 */
  if (C.zf) goto L_10bd3f82;
  /* 10bd3f77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd3f7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3f7d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bd3f80 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd3f82:;
  /* 10bd3f82 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3f84 call 0x10bd62d0 */
  push32(0x10bd3f89u); f_10bd62d0();
  /* 10bd3f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3f8c mov eax, 1 */
  EAX = (0x1u);
  /* 10bd3f91 jmp 0x10bd3f9f */
  goto L_10bd3f9f;
L_10bd3f93:;
  /* 10bd3f93 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd3f95 call 0x10bd62d0 */
  push32(0x10bd3f9au); f_10bd62d0();
  /* 10bd3f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd3f9f:;
  /* 10bd3f9f mov esp, ebp */
  ESP = (EBP);
  /* 10bd3fa1 pop ebp */
  EBP = (pop32());
  /* 10bd3fa2 ret  */
  ESPCHK(0x10bd3ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb0 @ 0x10bd3fb0 (28 bytes, 11 insns) */
void f_10bd3fb0(void) {
  FTRACE(0x10bd3fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd3fb4 mov eax, dword ptr [0x10bffdb8] */
  EAX = (r32((uint32_t)(0x10bffdb8)));
  /* 10bd3fb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd3fbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd3fbf mov dword ptr [0x10bffdb8], ecx */
  w32((uint32_t)(0x10bffdb8), (ECX));
  /* 10bd3fc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd3fc8 mov esp, ebp */
  ESP = (EBP);
  /* 10bd3fca pop ebp */
  EBP = (pop32());
  /* 10bd3fcb ret  */
  ESPCHK(0x10bd3fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd0 @ 0x10bd3fd0 (362 bytes, 116 insns) */
void f_10bd3fd0(void) {
  FTRACE(0x10bd3fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd3fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd3fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd3fd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd3fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd3fd7 push esi */
  push32((uint32_t)(ESI));
  /* 10bd3fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10bd3fd9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3fdd jne 0x10bd400a */
  if (!C.zf) goto L_10bd400a;
L_10bd3fdf:;
  /* 10bd3fdf push 0x10bf9918 */
  push32((uint32_t)(0x10bf9918u));
  /* 10bd3fe4 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd3fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3feb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3fed push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3fef push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd3ff1 call 0x10bd18f0 */
  push32(0x10bd3ff6u); f_10bd18f0();
  /* 10bd3ff6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd3ff9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd3ffc jne 0x10bd3fff */
  if (!C.zf) goto L_10bd3fff;
  /* 10bd3ffe int3  */
  x86_unimpl("int3 @ 0x10bd3ffe");
L_10bd3fff:;
  /* 10bd3fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4003 jne 0x10bd3fdf */
  if (!C.zf) goto L_10bd3fdf;
  /* 10bd4005 jmp 0x10bd4133 */
  goto L_10bd4133;
L_10bd400a:;
  /* 10bd400a push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd400c call 0x10bd6230 */
  push32(0x10bd4011u); f_10bd6230();
  /* 10bd4011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4014 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4017 mov edx, dword ptr [0x10bfe460] */
  EDX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd401d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10bd401f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd4026 jmp 0x10bd4031 */
  goto L_10bd4031;
L_10bd4028:;
  /* 10bd4028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd402b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd402e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd4031:;
  /* 10bd4031 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4035 jge 0x10bd4055 */
  if ((C.sf==C.of)) goto L_10bd4055;
  /* 10bd4037 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd403a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd403d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10bd4045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4048 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd404b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10bd4053 jmp 0x10bd4028 */
  goto L_10bd4028;
L_10bd4055:;
  /* 10bd4055 mov edx, dword ptr [0x10bfe460] */
  EDX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd405b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bd405e jmp 0x10bd4068 */
  goto L_10bd4068;
L_10bd4060:;
  /* 10bd4060 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4063 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd4065 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10bd4068:;
  /* 10bd4068 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd406c je 0x10bd4111 */
  if (C.zf) goto L_10bd4111;
  /* 10bd4072 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4075 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd4078 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd407d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd407f jl 0x10bd40e7 */
  if ((C.sf!=C.of)) goto L_10bd40e7;
  /* 10bd4081 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4084 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10bd4087 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd408d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4090 jge 0x10bd40e7 */
  if ((C.sf==C.of)) goto L_10bd40e7;
  /* 10bd4092 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4095 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10bd4098 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd409e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd40a1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10bd40a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd40a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd40ab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10bd40ae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd40b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd40b7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10bd40bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd40be mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd40c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd40c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd40c9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10bd40cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd40d0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd40d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd40d6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10bd40d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd40de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd40e1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10bd40e5 jmp 0x10bd410c */
  goto L_10bd410c;
L_10bd40e7:;
  /* 10bd40e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd40ea push edx */
  push32((uint32_t)(EDX));
  /* 10bd40eb push 0x10bf98f4 */
  push32((uint32_t)(0x10bf98f4u));
  /* 10bd40f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd40f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd40f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd40f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd40f8 call 0x10bd18f0 */
  push32(0x10bd40fdu); f_10bd18f0();
  /* 10bd40fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4100 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4103 jne 0x10bd4106 */
  if (!C.zf) goto L_10bd4106;
  /* 10bd4105 int3  */
  x86_unimpl("int3 @ 0x10bd4105");
L_10bd4106:;
  /* 10bd4106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd410a jne 0x10bd40e7 */
  if (!C.zf) goto L_10bd40e7;
L_10bd410c:;
  /* 10bd410c jmp 0x10bd4060 */
  goto L_10bd4060;
L_10bd4111:;
  /* 10bd4111 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4114 mov edx, dword ptr [0x10bfe468] */
  EDX = (r32((uint32_t)(0x10bfe468)));
  /* 10bd411a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10bd411d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4120 mov ecx, dword ptr [0x10bfe45c] */
  ECX = (r32((uint32_t)(0x10bfe45c)));
  /* 10bd4126 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10bd4129 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd412b call 0x10bd62d0 */
  push32(0x10bd4130u); f_10bd62d0();
  /* 10bd4130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd4133:;
  /* 10bd4133 pop edi */
  EDI = (pop32());
  /* 10bd4134 pop esi */
  ESI = (pop32());
  /* 10bd4135 pop ebx */
  EBX = (pop32());
  /* 10bd4136 mov esp, ebp */
  ESP = (EBP);
  /* 10bd4138 pop ebp */
  EBP = (pop32());
  /* 10bd4139 ret  */
  ESPCHK(0x10bd3fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004140 @ 0x10bd4140 (291 bytes, 95 insns) */
void f_10bd4140(void) {
  FTRACE(0x10bd4140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd4140 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd4141 mov ebp, esp */
  EBP = (ESP);
  /* 10bd4143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4146 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd4147 push esi */
  push32((uint32_t)(ESI));
  /* 10bd4148 push edi */
  push32((uint32_t)(EDI));
  /* 10bd4149 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bd4150 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4154 je 0x10bd4162 */
  if (C.zf) goto L_10bd4162;
  /* 10bd4156 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd415a je 0x10bd4162 */
  if (C.zf) goto L_10bd4162;
  /* 10bd415c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4160 jne 0x10bd4190 */
  if (!C.zf) goto L_10bd4190;
L_10bd4162:;
  /* 10bd4162 push 0x10bf9940 */
  push32((uint32_t)(0x10bf9940u));
  /* 10bd4167 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd416c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd416e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4170 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4172 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4174 call 0x10bd18f0 */
  push32(0x10bd4179u); f_10bd18f0();
  /* 10bd4179 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd417c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd417f jne 0x10bd4182 */
  if (!C.zf) goto L_10bd4182;
  /* 10bd4181 int3  */
  x86_unimpl("int3 @ 0x10bd4181");
L_10bd4182:;
  /* 10bd4182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4186 jne 0x10bd4162 */
  if (!C.zf) goto L_10bd4162;
  /* 10bd4188 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd418b jmp 0x10bd425c */
  goto L_10bd425c;
L_10bd4190:;
  /* 10bd4190 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd4197 jmp 0x10bd41a2 */
  goto L_10bd41a2;
L_10bd4199:;
  /* 10bd4199 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd419c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd419f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd41a2:;
  /* 10bd41a2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd41a6 jge 0x10bd422c */
  if ((C.sf==C.of)) goto L_10bd422c;
  /* 10bd41ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd41af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd41b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd41b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd41b8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10bd41bc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd41c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd41c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd41c6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10bd41ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd41cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd41d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd41d3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd41d6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10bd41da sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd41de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd41e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd41e4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10bd41e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd41eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd41ee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd41f3 jne 0x10bd4202 */
  if (!C.zf) goto L_10bd4202;
  /* 10bd41f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd41f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd41fb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4200 je 0x10bd4227 */
  if (C.zf) goto L_10bd4227;
L_10bd4202:;
  /* 10bd4202 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4206 je 0x10bd4227 */
  if (C.zf) goto L_10bd4227;
  /* 10bd4208 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd420c jne 0x10bd4220 */
  if (!C.zf) goto L_10bd4220;
  /* 10bd420e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4212 jne 0x10bd4227 */
  if (!C.zf) goto L_10bd4227;
  /* 10bd4214 mov eax, dword ptr [0x10bfca84] */
  EAX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd4219 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd421c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd421e je 0x10bd4227 */
  if (C.zf) goto L_10bd4227;
L_10bd4220:;
  /* 10bd4220 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10bd4227:;
  /* 10bd4227 jmp 0x10bd4199 */
  goto L_10bd4199;
L_10bd422c:;
  /* 10bd422c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd422f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd4232 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10bd4235 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4238 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd423b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10bd423e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4241 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd4244 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10bd4247 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd424a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd424d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10bd4250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4253 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bd4259 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10bd425c:;
  /* 10bd425c pop edi */
  EDI = (pop32());
  /* 10bd425d pop esi */
  ESI = (pop32());
  /* 10bd425e pop ebx */
  EBX = (pop32());
  /* 10bd425f mov esp, ebp */
  ESP = (EBP);
  /* 10bd4261 pop ebp */
  EBP = (pop32());
  /* 10bd4262 ret  */
  ESPCHK(0x10bd4140u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x10bd4270 (697 bytes, 253 insns) */
void f_10bd4270(void) {
  FTRACE(0x10bd4270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd4270 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd4271 mov ebp, esp */
  EBP = (ESP);
  /* 10bd4273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4276 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd4277 push esi */
  push32((uint32_t)(ESI));
  /* 10bd4278 push edi */
  push32((uint32_t)(EDI));
  /* 10bd4279 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bd4280 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd4282 call 0x10bd6230 */
  push32(0x10bd4287u); f_10bd6230();
  /* 10bd4287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd428a:;
  /* 10bd428a push 0x10bf9a38 */
  push32((uint32_t)(0x10bf9a38u));
  /* 10bd428f push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd4294 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4296 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4298 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd429a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd429c call 0x10bd18f0 */
  push32(0x10bd42a1u); f_10bd18f0();
  /* 10bd42a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd42a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd42a7 jne 0x10bd42aa */
  if (!C.zf) goto L_10bd42aa;
  /* 10bd42a9 int3  */
  x86_unimpl("int3 @ 0x10bd42a9");
L_10bd42aa:;
  /* 10bd42aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd42ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd42ae jne 0x10bd428a */
  if (!C.zf) goto L_10bd428a;
  /* 10bd42b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd42b4 je 0x10bd42be */
  if (C.zf) goto L_10bd42be;
  /* 10bd42b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd42b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd42bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10bd42be:;
  /* 10bd42be mov eax, dword ptr [0x10bfe460] */
  EAX = (r32((uint32_t)(0x10bfe460)));
  /* 10bd42c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd42c6 jmp 0x10bd42d0 */
  goto L_10bd42d0;
L_10bd42c8:;
  /* 10bd42c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd42cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd42cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd42d0:;
  /* 10bd42d0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd42d4 je 0x10bd44f2 */
  if (C.zf) goto L_10bd44f2;
  /* 10bd42da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd42dd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd42e0 je 0x10bd44f2 */
  if (C.zf) goto L_10bd44f2;
  /* 10bd42e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd42e9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10bd42ec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd42f2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd42f5 je 0x10bd4324 */
  if (C.zf) goto L_10bd4324;
  /* 10bd42f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd42fa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10bd42fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4303 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd4305 je 0x10bd4324 */
  if (C.zf) goto L_10bd4324;
  /* 10bd4307 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd430a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd430d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4312 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4315 jne 0x10bd4329 */
  if (!C.zf) goto L_10bd4329;
  /* 10bd4317 mov ecx, dword ptr [0x10bfca84] */
  ECX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd431d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4320 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd4322 jne 0x10bd4329 */
  if (!C.zf) goto L_10bd4329;
L_10bd4324:;
  /* 10bd4324 jmp 0x10bd44ed */
  goto L_10bd44ed;
L_10bd4329:;
  /* 10bd4329 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd432c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4330 je 0x10bd43a2 */
  if (C.zf) goto L_10bd43a2;
  /* 10bd4332 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4334 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd4336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4339 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd433c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd433d call 0x10bd3de0 */
  push32(0x10bd4342u); f_10bd3de0();
  /* 10bd4342 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4347 jne 0x10bd4373 */
  if (!C.zf) goto L_10bd4373;
L_10bd4349:;
  /* 10bd4349 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd434c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bd434f push eax */
  push32((uint32_t)(EAX));
  /* 10bd4350 push 0x10bf9a24 */
  push32((uint32_t)(0x10bf9a24u));
  /* 10bd4355 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4359 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd435b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd435d call 0x10bd18f0 */
  push32(0x10bd4362u); f_10bd18f0();
  /* 10bd4362 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4365 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4368 jne 0x10bd436b */
  if (!C.zf) goto L_10bd436b;
  /* 10bd436a int3  */
  x86_unimpl("int3 @ 0x10bd436a");
L_10bd436b:;
  /* 10bd436b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd436d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd436f jne 0x10bd4349 */
  if (!C.zf) goto L_10bd4349;
  /* 10bd4371 jmp 0x10bd43a2 */
  goto L_10bd43a2;
L_10bd4373:;
  /* 10bd4373 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4376 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bd4379 push eax */
  push32((uint32_t)(EAX));
  /* 10bd437a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd437d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd4380 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4381 push 0x10bf9a18 */
  push32((uint32_t)(0x10bf9a18u));
  /* 10bd4386 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4388 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd438a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd438c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd438e call 0x10bd18f0 */
  push32(0x10bd4393u); f_10bd18f0();
  /* 10bd4393 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4396 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4399 jne 0x10bd439c */
  if (!C.zf) goto L_10bd439c;
  /* 10bd439b int3  */
  x86_unimpl("int3 @ 0x10bd439b");
L_10bd439c:;
  /* 10bd439c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd439e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd43a0 jne 0x10bd4373 */
  if (!C.zf) goto L_10bd4373;
L_10bd43a2:;
  /* 10bd43a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd43a5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bd43a8 push edx */
  push32((uint32_t)(EDX));
  /* 10bd43a9 push 0x10bf9a10 */
  push32((uint32_t)(0x10bf9a10u));
  /* 10bd43ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd43b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd43b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd43b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd43b6 call 0x10bd18f0 */
  push32(0x10bd43bbu); f_10bd18f0();
  /* 10bd43bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd43be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd43c1 jne 0x10bd43c4 */
  if (!C.zf) goto L_10bd43c4;
  /* 10bd43c3 int3  */
  x86_unimpl("int3 @ 0x10bd43c3");
L_10bd43c4:;
  /* 10bd43c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd43c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd43c8 jne 0x10bd43a2 */
  if (!C.zf) goto L_10bd43a2;
  /* 10bd43ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd43cd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10bd43d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd43d6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd43d9 jne 0x10bd444c */
  if (!C.zf) goto L_10bd444c;
L_10bd43db:;
  /* 10bd43db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd43de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd43e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd43e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd43e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd43e8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10bd43eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd43f0 push eax */
  push32((uint32_t)(EAX));
  /* 10bd43f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd43f4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd43f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd43f8 push 0x10bf99dc */
  push32((uint32_t)(0x10bf99dcu));
  /* 10bd43fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd43ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4401 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4403 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4405 call 0x10bd18f0 */
  push32(0x10bd440au); f_10bd18f0();
  /* 10bd440a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd440d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4410 jne 0x10bd4413 */
  if (!C.zf) goto L_10bd4413;
  /* 10bd4412 int3  */
  x86_unimpl("int3 @ 0x10bd4412");
L_10bd4413:;
  /* 10bd4413 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4415 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4417 jne 0x10bd43db */
  if (!C.zf) goto L_10bd43db;
  /* 10bd4419 cmp dword ptr [0x10bffdb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bffdb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4420 je 0x10bd443b */
  if (C.zf) goto L_10bd443b;
  /* 10bd4422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4425 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd4428 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4429 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd442c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd442f push edx */
  push32((uint32_t)(EDX));
  /* 10bd4430 call dword ptr [0x10bffdb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bffdb8))), 0x10bd4436u);
  /* 10bd4436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4439 jmp 0x10bd4447 */
  goto L_10bd4447;
L_10bd443b:;
  /* 10bd443b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd443e push eax */
  push32((uint32_t)(EAX));
  /* 10bd443f call 0x10bd4530 */
  push32(0x10bd4444u); f_10bd4530();
  /* 10bd4444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd4447:;
  /* 10bd4447 jmp 0x10bd44ed */
  goto L_10bd44ed;
L_10bd444c:;
  /* 10bd444c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd444f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4453 jne 0x10bd4492 */
  if (!C.zf) goto L_10bd4492;
L_10bd4455:;
  /* 10bd4455 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4458 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd445b push eax */
  push32((uint32_t)(EAX));
  /* 10bd445c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd445f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4462 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4463 push 0x10bf99b4 */
  push32((uint32_t)(0x10bf99b4u));
  /* 10bd4468 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd446a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd446c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd446e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4470 call 0x10bd18f0 */
  push32(0x10bd4475u); f_10bd18f0();
  /* 10bd4475 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd447b jne 0x10bd447e */
  if (!C.zf) goto L_10bd447e;
  /* 10bd447d int3  */
  x86_unimpl("int3 @ 0x10bd447d");
L_10bd447e:;
  /* 10bd447e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4480 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4482 jne 0x10bd4455 */
  if (!C.zf) goto L_10bd4455;
  /* 10bd4484 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4487 push eax */
  push32((uint32_t)(EAX));
  /* 10bd4488 call 0x10bd4530 */
  push32(0x10bd448du); f_10bd4530();
  /* 10bd448d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4490 jmp 0x10bd44ed */
  goto L_10bd44ed;
L_10bd4492:;
  /* 10bd4492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4495 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10bd4498 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd449e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd44a1 jne 0x10bd44ed */
  if (!C.zf) goto L_10bd44ed;
L_10bd44a3:;
  /* 10bd44a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd44a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd44a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd44aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd44ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bd44b0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10bd44b3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd44b8 push eax */
  push32((uint32_t)(EAX));
  /* 10bd44b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd44bc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd44bf push ecx */
  push32((uint32_t)(ECX));
  /* 10bd44c0 push 0x10bf9980 */
  push32((uint32_t)(0x10bf9980u));
  /* 10bd44c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd44c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd44c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd44cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd44cd call 0x10bd18f0 */
  push32(0x10bd44d2u); f_10bd18f0();
  /* 10bd44d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd44d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd44d8 jne 0x10bd44db */
  if (!C.zf) goto L_10bd44db;
  /* 10bd44da int3  */
  x86_unimpl("int3 @ 0x10bd44da");
L_10bd44db:;
  /* 10bd44db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd44dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd44df jne 0x10bd44a3 */
  if (!C.zf) goto L_10bd44a3;
  /* 10bd44e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd44e4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd44e5 call 0x10bd4530 */
  push32(0x10bd44eau); f_10bd4530();
  /* 10bd44ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd44ed:;
  /* 10bd44ed jmp 0x10bd42c8 */
  goto L_10bd42c8;
L_10bd44f2:;
  /* 10bd44f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd44f4 call 0x10bd62d0 */
  push32(0x10bd44f9u); f_10bd62d0();
  /* 10bd44f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd44fc:;
  /* 10bd44fc push 0x10bf9968 */
  push32((uint32_t)(0x10bf9968u));
  /* 10bd4501 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd4506 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4508 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd450a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd450c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd450e call 0x10bd18f0 */
  push32(0x10bd4513u); f_10bd18f0();
  /* 10bd4513 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4516 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4519 jne 0x10bd451c */
  if (!C.zf) goto L_10bd451c;
  /* 10bd451b int3  */
  x86_unimpl("int3 @ 0x10bd451b");
L_10bd451c:;
  /* 10bd451c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd451e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd4520 jne 0x10bd44fc */
  if (!C.zf) goto L_10bd44fc;
  /* 10bd4522 pop edi */
  EDI = (pop32());
  /* 10bd4523 pop esi */
  ESI = (pop32());
  /* 10bd4524 pop ebx */
  EBX = (pop32());
  /* 10bd4525 mov esp, ebp */
  ESP = (EBP);
  /* 10bd4527 pop ebp */
  EBP = (pop32());
  /* 10bd4528 ret  */
  ESPCHK(0x10bd4270u, _esp0);
  ESP += 4; return;
}

/* FUN_10004530 @ 0x10bd4530 (276 bytes, 89 insns) */
void f_10bd4530(void) {
  FTRACE(0x10bd4530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd4530 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd4531 mov ebp, esp */
  EBP = (ESP);
  /* 10bd4533 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4536 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd4537 push esi */
  push32((uint32_t)(ESI));
  /* 10bd4538 push edi */
  push32((uint32_t)(EDI));
  /* 10bd4539 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10bd4540 jmp 0x10bd454b */
  goto L_10bd454b;
L_10bd4542:;
  /* 10bd4542 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10bd4545 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4548 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10bd454b:;
  /* 10bd454b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd454e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4552 jge 0x10bd455f */
  if ((C.sf==C.of)) goto L_10bd455f;
  /* 10bd4554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4557 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd455a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10bd455d jmp 0x10bd4566 */
  goto L_10bd4566;
L_10bd455f:;
  /* 10bd455f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10bd4566:;
  /* 10bd4566 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10bd4569 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd456c jge 0x10bd460c */
  if ((C.sf==C.of)) goto L_10bd460c;
  /* 10bd4572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4575 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4578 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10bd457b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10bd457e cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4585 jle 0x10bd45a3 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd45a3;
  /* 10bd4587 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10bd458c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd458f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4595 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4596 call 0x10bd8840 */
  push32(0x10bd459bu); f_10bd8840();
  /* 10bd459b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd459e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10bd45a1 jmp 0x10bd45c0 */
  goto L_10bd45c0;
L_10bd45a3:;
  /* 10bd45a3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd45a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd45ac mov eax, dword ptr [0x10bfcc98] */
  EAX = (r32((uint32_t)(0x10bfcc98)));
  /* 10bd45b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd45b3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10bd45b7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd45bd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10bd45c0:;
  /* 10bd45c0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd45c4 je 0x10bd45d4 */
  if (C.zf) goto L_10bd45d4;
  /* 10bd45c6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd45c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd45cf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10bd45d2 jmp 0x10bd45db */
  goto L_10bd45db;
L_10bd45d4:;
  /* 10bd45d4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10bd45db:;
  /* 10bd45db mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10bd45de mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10bd45e1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10bd45e5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10bd45e8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd45ee push edx */
  push32((uint32_t)(EDX));
  /* 10bd45ef push 0x10bf9a5c */
  push32((uint32_t)(0x10bf9a5cu));
  /* 10bd45f4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10bd45f7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd45fa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10bd45fe push ecx */
  push32((uint32_t)(ECX));
  /* 10bd45ff call 0x10bd8740 */
  push32(0x10bd4604u); f_10bd8740();
  /* 10bd4604 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4607 jmp 0x10bd4542 */
  goto L_10bd4542;
L_10bd460c:;
  /* 10bd460c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10bd460f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10bd4614:;
  /* 10bd4614 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10bd4617 push eax */
  push32((uint32_t)(EAX));
  /* 10bd4618 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10bd461b push ecx */
  push32((uint32_t)(ECX));
  /* 10bd461c push 0x10bf9a4c */
  push32((uint32_t)(0x10bf9a4cu));
  /* 10bd4621 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4623 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4629 call 0x10bd18f0 */
  push32(0x10bd462eu); f_10bd18f0();
  /* 10bd462e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4631 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4634 jne 0x10bd4637 */
  if (!C.zf) goto L_10bd4637;
  /* 10bd4636 int3  */
  x86_unimpl("int3 @ 0x10bd4636");
L_10bd4637:;
  /* 10bd4637 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4639 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd463b jne 0x10bd4614 */
  if (!C.zf) goto L_10bd4614;
  /* 10bd463d pop edi */
  EDI = (pop32());
  /* 10bd463e pop esi */
  ESI = (pop32());
  /* 10bd463f pop ebx */
  EBX = (pop32());
  /* 10bd4640 mov esp, ebp */
  ESP = (EBP);
  /* 10bd4642 pop ebp */
  EBP = (pop32());
  /* 10bd4643 ret  */
  ESPCHK(0x10bd4530u, _esp0);
  ESP += 4; return;
}

/* FUN_10004650 @ 0x10bd4650 (116 bytes, 46 insns) */
void f_10bd4650(void) {
  FTRACE(0x10bd4650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd4650 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd4651 mov ebp, esp */
  EBP = (ESP);
  /* 10bd4653 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4656 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd4657 push esi */
  push32((uint32_t)(ESI));
  /* 10bd4658 push edi */
  push32((uint32_t)(EDI));
  /* 10bd4659 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10bd465c push eax */
  push32((uint32_t)(EAX));
  /* 10bd465d call 0x10bd3fd0 */
  push32(0x10bd4662u); f_10bd3fd0();
  /* 10bd4662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4665 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4669 jne 0x10bd4684 */
  if (!C.zf) goto L_10bd4684;
  /* 10bd466b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd466f jne 0x10bd4684 */
  if (!C.zf) goto L_10bd4684;
  /* 10bd4671 mov ecx, dword ptr [0x10bfca84] */
  ECX = (r32((uint32_t)(0x10bfca84)));
  /* 10bd4677 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd467a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd467c je 0x10bd46bb */
  if (C.zf) goto L_10bd46bb;
  /* 10bd467e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4682 je 0x10bd46bb */
  if (C.zf) goto L_10bd46bb;
L_10bd4684:;
  /* 10bd4684 push 0x10bf9a64 */
  push32((uint32_t)(0x10bf9a64u));
  /* 10bd4689 push 0x10bf9430 */
  push32((uint32_t)(0x10bf9430u));
  /* 10bd468e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4690 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4692 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4694 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4696 call 0x10bd18f0 */
  push32(0x10bd469bu); f_10bd18f0();
  /* 10bd469b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd469e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd46a1 jne 0x10bd46a4 */
  if (!C.zf) goto L_10bd46a4;
  /* 10bd46a3 int3  */
  x86_unimpl("int3 @ 0x10bd46a3");
L_10bd46a4:;
  /* 10bd46a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd46a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd46a8 jne 0x10bd4684 */
  if (!C.zf) goto L_10bd4684;
  /* 10bd46aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd46ac call 0x10bd4270 */
  push32(0x10bd46b1u); f_10bd4270();
  /* 10bd46b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd46b4 mov eax, 1 */
  EAX = (0x1u);
  /* 10bd46b9 jmp 0x10bd46bd */
  goto L_10bd46bd;
L_10bd46bb:;
  /* 10bd46bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd46bd:;
  /* 10bd46bd pop edi */
  EDI = (pop32());
  /* 10bd46be pop esi */
  ESI = (pop32());
  /* 10bd46bf pop ebx */
  EBX = (pop32());
  /* 10bd46c0 mov esp, ebp */
  ESP = (EBP);
  /* 10bd46c2 pop ebp */
  EBP = (pop32());
  /* 10bd46c3 ret  */
  ESPCHK(0x10bd4650u, _esp0);
  ESP += 4; return;
}

/* FUN_100046d0 @ 0x10bd46d0 (197 bytes, 79 insns) */
void f_10bd46d0(void) {
  FTRACE(0x10bd46d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd46d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd46d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd46d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd46d4 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd46d5 push esi */
  push32((uint32_t)(ESI));
  /* 10bd46d6 push edi */
  push32((uint32_t)(EDI));
  /* 10bd46d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd46db jne 0x10bd46e2 */
  if (!C.zf) goto L_10bd46e2;
  /* 10bd46dd jmp 0x10bd478e */
  goto L_10bd478e;
L_10bd46e2:;
  /* 10bd46e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd46e9 jmp 0x10bd46f4 */
  goto L_10bd46f4;
L_10bd46eb:;
  /* 10bd46eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd46ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd46f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd46f4:;
  /* 10bd46f4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd46f8 jge 0x10bd473e */
  if ((C.sf==C.of)) goto L_10bd473e;
L_10bd46fa:;
  /* 10bd46fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd46fd mov edx, dword ptr [ecx*4 + 0x10bfca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfca94)));
  /* 10bd4704 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd470b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10bd470f push edx */
  push32((uint32_t)(EDX));
  /* 10bd4710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4716 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10bd471a push edx */
  push32((uint32_t)(EDX));
  /* 10bd471b push 0x10bf9ac0 */
  push32((uint32_t)(0x10bf9ac0u));
  /* 10bd4720 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4722 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4724 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4726 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4728 call 0x10bd18f0 */
  push32(0x10bd472du); f_10bd18f0();
  /* 10bd472d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4730 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4733 jne 0x10bd4736 */
  if (!C.zf) goto L_10bd4736;
  /* 10bd4735 int3  */
  x86_unimpl("int3 @ 0x10bd4735");
L_10bd4736:;
  /* 10bd4736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd473a jne 0x10bd46fa */
  if (!C.zf) goto L_10bd46fa;
  /* 10bd473c jmp 0x10bd46eb */
  goto L_10bd46eb;
L_10bd473e:;
  /* 10bd473e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4741 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10bd4744 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4745 push 0x10bf9a9c */
  push32((uint32_t)(0x10bf9a9cu));
  /* 10bd474a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd474c push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd474e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4750 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4752 call 0x10bd18f0 */
  push32(0x10bd4757u); f_10bd18f0();
  /* 10bd4757 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd475a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd475d jne 0x10bd4760 */
  if (!C.zf) goto L_10bd4760;
  /* 10bd475f int3  */
  x86_unimpl("int3 @ 0x10bd475f");
L_10bd4760:;
  /* 10bd4760 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4764 jne 0x10bd473e */
  if (!C.zf) goto L_10bd473e;
L_10bd4766:;
  /* 10bd4766 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd4769 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10bd476c push edx */
  push32((uint32_t)(EDX));
  /* 10bd476d push 0x10bf9a7c */
  push32((uint32_t)(0x10bf9a7cu));
  /* 10bd4772 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4774 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4776 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4778 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd477a call 0x10bd18f0 */
  push32(0x10bd477fu); f_10bd18f0();
  /* 10bd477f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4782 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4785 jne 0x10bd4788 */
  if (!C.zf) goto L_10bd4788;
  /* 10bd4787 int3  */
  x86_unimpl("int3 @ 0x10bd4787");
L_10bd4788:;
  /* 10bd4788 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd478a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd478c jne 0x10bd4766 */
  if (!C.zf) goto L_10bd4766;
L_10bd478e:;
  /* 10bd478e pop edi */
  EDI = (pop32());
  /* 10bd478f pop esi */
  ESI = (pop32());
  /* 10bd4790 pop ebx */
  EBX = (pop32());
  /* 10bd4791 mov esp, ebp */
  ESP = (EBP);
  /* 10bd4793 pop ebp */
  EBP = (pop32());
  /* 10bd4794 ret  */
  ESPCHK(0x10bd46d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x10bd47a0 (329 bytes, 102 insns) */
void f_10bd47a0(void) {
  FTRACE(0x10bd47a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd47a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd47a1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd47a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd47a6 cmp dword ptr [0x10bfff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd47ad jne 0x10bd47b4 */
  if (!C.zf) goto L_10bd47b4;
  /* 10bd47af call 0x10bd90e0 */
  push32(0x10bd47b4u); f_10bd90e0();
L_10bd47b4:;
  /* 10bd47b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bd47bb mov eax, dword ptr [0x10bfe3fc] */
  EAX = (r32((uint32_t)(0x10bfe3fc)));
  /* 10bd47c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd47c3:;
  /* 10bd47c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd47c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bd47c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd47cb je 0x10bd47f9 */
  if (C.zf) goto L_10bd47f9;
  /* 10bd47cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd47d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd47d3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd47d6 je 0x10bd47e1 */
  if (C.zf) goto L_10bd47e1;
  /* 10bd47d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd47db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd47de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10bd47e1:;
  /* 10bd47e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd47e4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd47e5 call 0x10bd5660 */
  push32(0x10bd47eau); f_10bd5660();
  /* 10bd47ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd47ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd47f0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10bd47f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd47f7 jmp 0x10bd47c3 */
  goto L_10bd47c3;
L_10bd47f9:;
  /* 10bd47f9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10bd47fb push 0x10bf9ae0 */
  push32((uint32_t)(0x10bf9ae0u));
  /* 10bd4800 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd4802 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4805 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10bd480c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd480d call 0x10bd2830 */
  push32(0x10bd4812u); f_10bd2830();
  /* 10bd4812 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4815 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd4818 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd481b mov dword ptr [0x10bfe430], edx */
  w32((uint32_t)(0x10bfe430), (EDX));
  /* 10bd4821 cmp dword ptr [0x10bfe430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4828 jne 0x10bd4834 */
  if (!C.zf) goto L_10bd4834;
  /* 10bd482a push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd482c call 0x10bd17a0 */
  push32(0x10bd4831u); f_10bd17a0();
  /* 10bd4831 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd4834:;
  /* 10bd4834 mov eax, dword ptr [0x10bfe3fc] */
  EAX = (r32((uint32_t)(0x10bfe3fc)));
  /* 10bd4839 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd483c jmp 0x10bd4847 */
  goto L_10bd4847;
L_10bd483e:;
  /* 10bd483e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4841 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4844 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd4847:;
  /* 10bd4847 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd484a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bd484d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd484f je 0x10bd48b7 */
  if (C.zf) goto L_10bd48b7;
  /* 10bd4851 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4854 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4855 call 0x10bd5660 */
  push32(0x10bd485au); f_10bd5660();
  /* 10bd485a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd485d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4860 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd4863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4866 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bd4869 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd486c je 0x10bd48b5 */
  if (C.zf) goto L_10bd48b5;
  /* 10bd486e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10bd4870 push 0x10bf9ae0 */
  push32((uint32_t)(0x10bf9ae0u));
  /* 10bd4875 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd4877 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd487a push ecx */
  push32((uint32_t)(ECX));
  /* 10bd487b call 0x10bd2830 */
  push32(0x10bd4880u); f_10bd2830();
  /* 10bd4880 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4883 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4886 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10bd4888 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd488b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd488e jne 0x10bd489a */
  if (!C.zf) goto L_10bd489a;
  /* 10bd4890 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd4892 call 0x10bd17a0 */
  push32(0x10bd4897u); f_10bd17a0();
  /* 10bd4897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd489a:;
  /* 10bd489a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd489d push ecx */
  push32((uint32_t)(ECX));
  /* 10bd489e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd48a1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd48a3 push eax */
  push32((uint32_t)(EAX));
  /* 10bd48a4 call 0x10bd57e0 */
  push32(0x10bd48a9u); f_10bd57e0();
  /* 10bd48a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd48ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd48af add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd48b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10bd48b5:;
  /* 10bd48b5 jmp 0x10bd483e */
  goto L_10bd483e;
L_10bd48b7:;
  /* 10bd48b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd48b9 mov edx, dword ptr [0x10bfe3fc] */
  EDX = (r32((uint32_t)(0x10bfe3fc)));
  /* 10bd48bf push edx */
  push32((uint32_t)(EDX));
  /* 10bd48c0 call 0x10bd32c0 */
  push32(0x10bd48c5u); f_10bd32c0();
  /* 10bd48c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd48c8 mov dword ptr [0x10bfe3fc], 0 */
  w32((uint32_t)(0x10bfe3fc), (0x0u));
  /* 10bd48d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd48d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bd48db mov dword ptr [0x10bfff20], 1 */
  w32((uint32_t)(0x10bfff20), (0x1u));
  /* 10bd48e5 mov esp, ebp */
  ESP = (EBP);
  /* 10bd48e7 pop ebp */
  EBP = (pop32());
  /* 10bd48e8 ret  */
  ESPCHK(0x10bd47a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100048f0 @ 0x10bd48f0 (216 bytes, 69 insns) */
void f_10bd48f0(void) {
  FTRACE(0x10bd48f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd48f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd48f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd48f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd48f6 cmp dword ptr [0x10bfff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd48fd jne 0x10bd4904 */
  if (!C.zf) goto L_10bd4904;
  /* 10bd48ff call 0x10bd90e0 */
  push32(0x10bd4904u); f_10bd90e0();
L_10bd4904:;
  /* 10bd4904 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10bd4909 push 0x10bfe46c */
  push32((uint32_t)(0x10bfe46cu));
  /* 10bd490e push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4910 call dword ptr [0x10c00260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00260))), 0x10bd4916u);
  /* 10bd4916 mov dword ptr [0x10bfe440], 0x10bfe46c */
  w32((uint32_t)(0x10bfe440), (0x10bfe46cu));
  /* 10bd4920 mov eax, dword ptr [0x10bfff4c] */
  EAX = (r32((uint32_t)(0x10bfff4c)));
  /* 10bd4925 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd4928 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd492a jne 0x10bd4937 */
  if (!C.zf) goto L_10bd4937;
  /* 10bd492c mov edx, dword ptr [0x10bfe440] */
  EDX = (r32((uint32_t)(0x10bfe440)));
  /* 10bd4932 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bd4935 jmp 0x10bd493f */
  goto L_10bd493f;
L_10bd4937:;
  /* 10bd4937 mov eax, dword ptr [0x10bfff4c] */
  EAX = (r32((uint32_t)(0x10bfff4c)));
  /* 10bd493c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10bd493f:;
  /* 10bd493f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd4942 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bd4945 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10bd4948 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4949 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10bd494c push eax */
  push32((uint32_t)(EAX));
  /* 10bd494d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd494f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4951 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4954 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4955 call 0x10bd49d0 */
  push32(0x10bd495au); f_10bd49d0();
  /* 10bd495a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd495d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10bd4962 push 0x10bf9aec */
  push32((uint32_t)(0x10bf9aecu));
  /* 10bd4967 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd4969 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd496c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd496f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10bd4972 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4973 call 0x10bd2830 */
  push32(0x10bd4978u); f_10bd2830();
  /* 10bd4978 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd497b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd497e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4982 jne 0x10bd498e */
  if (!C.zf) goto L_10bd498e;
  /* 10bd4984 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bd4986 call 0x10bd17a0 */
  push32(0x10bd498bu); f_10bd17a0();
  /* 10bd498b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd498e:;
  /* 10bd498e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10bd4991 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4992 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10bd4995 push eax */
  push32((uint32_t)(EAX));
  /* 10bd4996 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4999 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd499c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10bd499f push eax */
  push32((uint32_t)(EAX));
  /* 10bd49a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd49a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd49a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd49a7 push edx */
  push32((uint32_t)(EDX));
  /* 10bd49a8 call 0x10bd49d0 */
  push32(0x10bd49adu); f_10bd49d0();
  /* 10bd49ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd49b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd49b3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd49b6 mov dword ptr [0x10bfe424], eax */
  w32((uint32_t)(0x10bfe424), (EAX));
  /* 10bd49bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd49be mov dword ptr [0x10bfe428], ecx */
  w32((uint32_t)(0x10bfe428), (ECX));
  /* 10bd49c4 mov esp, ebp */
  ESP = (EBP);
  /* 10bd49c6 pop ebp */
  EBP = (pop32());
  /* 10bd49c7 ret  */
  ESPCHK(0x10bd48f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049d0 @ 0x10bd49d0 (1060 bytes, 360 insns) */
void f_10bd49d0(void) {
  FTRACE(0x10bd49d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd49d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd49d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd49d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd49d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd49d9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bd49df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd49e2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10bd49e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd49eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd49ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd49f2 je 0x10bd4a05 */
  if (C.zf) goto L_10bd4a05;
  /* 10bd49f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd49f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd49fa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bd49fc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd49ff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4a02 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10bd4a05:;
  /* 10bd4a05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4a08 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd4a0b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4a0e jne 0x10bd4add */
  if (!C.zf) goto L_10bd4add;
L_10bd4a14:;
  /* 10bd4a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4a17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4a1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd4a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4a20 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd4a23 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4a26 je 0x10bd4aa2 */
  if (C.zf) goto L_10bd4aa2;
  /* 10bd4a28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4a2b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bd4a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4a30 je 0x10bd4aa2 */
  if (C.zf) goto L_10bd4aa2;
  /* 10bd4a32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4a35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4a37 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd4a39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4a3b mov al, byte ptr [edx + 0x10bffc81] */
  AL = (r8((uint32_t)(EDX + 0x10bffc81)));
  /* 10bd4a41 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4a46 je 0x10bd4a77 */
  if (C.zf) goto L_10bd4a77;
  /* 10bd4a48 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4a4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd4a4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4a50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4a53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bd4a55 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4a59 je 0x10bd4a77 */
  if (C.zf) goto L_10bd4a77;
  /* 10bd4a5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4a5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4a61 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bd4a63 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10bd4a65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4a68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4a6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10bd4a6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4a71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4a74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd4a77:;
  /* 10bd4a77 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4a7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd4a7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4a7f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4a82 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bd4a84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4a88 je 0x10bd4a9d */
  if (C.zf) goto L_10bd4a9d;
  /* 10bd4a8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4a8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4a90 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd4a92 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd4a94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4a97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4a9a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10bd4a9d:;
  /* 10bd4a9d jmp 0x10bd4a14 */
  goto L_10bd4a14;
L_10bd4aa2:;
  /* 10bd4aa2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4aa5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd4aa7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4aaa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4aad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bd4aaf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4ab3 je 0x10bd4ac4 */
  if (C.zf) goto L_10bd4ac4;
  /* 10bd4ab5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4ab8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10bd4abb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4abe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4ac1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10bd4ac4:;
  /* 10bd4ac4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4ac7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd4aca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4acd jne 0x10bd4ad8 */
  if (!C.zf) goto L_10bd4ad8;
  /* 10bd4acf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4ad2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4ad5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd4ad8:;
  /* 10bd4ad8 jmp 0x10bd4bac */
  goto L_10bd4bac;
L_10bd4add:;
  /* 10bd4add mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4ae0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd4ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4ae5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4ae8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bd4aea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4aee je 0x10bd4b03 */
  if (C.zf) goto L_10bd4b03;
  /* 10bd4af0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4af3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4af6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd4af8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd4afa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4afd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4b00 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10bd4b03:;
  /* 10bd4b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4b06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd4b08 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10bd4b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4b0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4b11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd4b14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4b17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4b1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4b1f mov dl, byte ptr [ecx + 0x10bffc81] */
  DL = (r8((uint32_t)(ECX + 0x10bffc81)));
  /* 10bd4b25 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4b28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4b2a je 0x10bd4b5b */
  if (C.zf) goto L_10bd4b5b;
  /* 10bd4b2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4b2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd4b31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4b34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4b37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bd4b39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4b3d je 0x10bd4b52 */
  if (C.zf) goto L_10bd4b52;
  /* 10bd4b3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4b45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd4b47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd4b49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4b4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4b4f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10bd4b52:;
  /* 10bd4b52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4b55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4b58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd4b5b:;
  /* 10bd4b5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4b5e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4b64 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4b67 je 0x10bd4b87 */
  if (C.zf) goto L_10bd4b87;
  /* 10bd4b69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4b6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4b73 je 0x10bd4b87 */
  if (C.zf) goto L_10bd4b87;
  /* 10bd4b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4b78 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4b7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4b81 jne 0x10bd4add */
  if (!C.zf) goto L_10bd4add;
L_10bd4b87:;
  /* 10bd4b87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4b8a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4b90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4b92 jne 0x10bd4b9f */
  if (!C.zf) goto L_10bd4b9f;
  /* 10bd4b94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4b97 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4b9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd4b9d jmp 0x10bd4bac */
  goto L_10bd4bac;
L_10bd4b9f:;
  /* 10bd4b9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4ba3 je 0x10bd4bac */
  if (C.zf) goto L_10bd4bac;
  /* 10bd4ba5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4ba8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10bd4bac:;
  /* 10bd4bac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10bd4bb3:;
  /* 10bd4bb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4bb6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bd4bb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4bbb je 0x10bd4bde */
  if (C.zf) goto L_10bd4bde;
L_10bd4bbd:;
  /* 10bd4bbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4bc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bd4bc3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4bc6 je 0x10bd4bd3 */
  if (C.zf) goto L_10bd4bd3;
  /* 10bd4bc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4bcb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd4bce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4bd1 jne 0x10bd4bde */
  if (!C.zf) goto L_10bd4bde;
L_10bd4bd3:;
  /* 10bd4bd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4bd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4bd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd4bdc jmp 0x10bd4bbd */
  goto L_10bd4bbd;
L_10bd4bde:;
  /* 10bd4bde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4be1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd4be4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd4be6 jne 0x10bd4bed */
  if (!C.zf) goto L_10bd4bed;
  /* 10bd4be8 jmp 0x10bd4dcb */
  goto L_10bd4dcb;
L_10bd4bed:;
  /* 10bd4bed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4bf1 je 0x10bd4c04 */
  if (C.zf) goto L_10bd4c04;
  /* 10bd4bf3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd4bf6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4bf9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10bd4bfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd4bfe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4c01 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10bd4c04:;
  /* 10bd4c04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd4c07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd4c09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4c0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd4c0f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10bd4c11:;
  /* 10bd4c11 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10bd4c18 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10bd4c1f:;
  /* 10bd4c1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4c22 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bd4c25 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4c28 jne 0x10bd4c3e */
  if (!C.zf) goto L_10bd4c3e;
  /* 10bd4c2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4c2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4c30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd4c33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4c36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4c39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10bd4c3c jmp 0x10bd4c1f */
  goto L_10bd4c1f;
L_10bd4c3e:;
  /* 10bd4c3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4c41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd4c44 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4c47 jne 0x10bd4c9a */
  if (!C.zf) goto L_10bd4c9a;
  /* 10bd4c49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4c4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4c4e mov ecx, 2 */
  ECX = (0x2u);
  /* 10bd4c53 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd4c55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4c57 jne 0x10bd4c92 */
  if (!C.zf) goto L_10bd4c92;
  /* 10bd4c59 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4c5d je 0x10bd4c7f */
  if (C.zf) goto L_10bd4c7f;
  /* 10bd4c5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4c62 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10bd4c66 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4c69 jne 0x10bd4c76 */
  if (!C.zf) goto L_10bd4c76;
  /* 10bd4c6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4c6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4c71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd4c74 jmp 0x10bd4c7d */
  goto L_10bd4c7d;
L_10bd4c76:;
  /* 10bd4c76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10bd4c7d:;
  /* 10bd4c7d jmp 0x10bd4c86 */
  goto L_10bd4c86;
L_10bd4c7f:;
  /* 10bd4c7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10bd4c86:;
  /* 10bd4c86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4c88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4c8c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10bd4c8f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10bd4c92:;
  /* 10bd4c92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4c95 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bd4c97 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10bd4c9a:;
  /* 10bd4c9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4c9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4ca0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4ca3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10bd4ca6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd4ca8 je 0x10bd4cce */
  if (C.zf) goto L_10bd4cce;
  /* 10bd4caa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4cae je 0x10bd4cbf */
  if (C.zf) goto L_10bd4cbf;
  /* 10bd4cb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4cb3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10bd4cb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4cb9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4cbc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10bd4cbf:;
  /* 10bd4cbf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4cc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd4cc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4cc7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4cca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd4ccc jmp 0x10bd4c9a */
  goto L_10bd4c9a;
L_10bd4cce:;
  /* 10bd4cce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4cd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bd4cd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4cd6 je 0x10bd4cf4 */
  if (C.zf) goto L_10bd4cf4;
  /* 10bd4cd8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4cdc jne 0x10bd4cf9 */
  if (!C.zf) goto L_10bd4cf9;
  /* 10bd4cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4ce1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bd4ce4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4ce7 je 0x10bd4cf4 */
  if (C.zf) goto L_10bd4cf4;
  /* 10bd4ce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4cec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd4cef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4cf2 jne 0x10bd4cf9 */
  if (!C.zf) goto L_10bd4cf9;
L_10bd4cf4:;
  /* 10bd4cf4 jmp 0x10bd4da4 */
  goto L_10bd4da4;
L_10bd4cf9:;
  /* 10bd4cf9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4cfd je 0x10bd4d96 */
  if (C.zf) goto L_10bd4d96;
  /* 10bd4d03 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4d07 je 0x10bd4d5d */
  if (C.zf) goto L_10bd4d5d;
  /* 10bd4d09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4d0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bd4d10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4d12 mov cl, byte ptr [eax + 0x10bffc81] */
  CL = (r8((uint32_t)(EAX + 0x10bffc81)));
  /* 10bd4d18 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4d1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd4d1d je 0x10bd4d48 */
  if (C.zf) goto L_10bd4d48;
  /* 10bd4d1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4d25 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bd4d27 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10bd4d29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4d2c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4d2f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10bd4d32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4d35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4d38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd4d3b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4d3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd4d40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4d43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4d46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10bd4d48:;
  /* 10bd4d48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4d4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4d4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bd4d50 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10bd4d52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4d55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4d58 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10bd4d5b jmp 0x10bd4d89 */
  goto L_10bd4d89;
L_10bd4d5d:;
  /* 10bd4d5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4d60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4d62 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bd4d64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4d66 mov cl, byte ptr [eax + 0x10bffc81] */
  CL = (r8((uint32_t)(EAX + 0x10bffc81)));
  /* 10bd4d6c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd4d6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd4d71 je 0x10bd4d89 */
  if (C.zf) goto L_10bd4d89;
  /* 10bd4d73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4d76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4d79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd4d7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4d7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd4d81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4d84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4d87 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd4d89:;
  /* 10bd4d89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4d8c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd4d8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4d91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4d94 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd4d96:;
  /* 10bd4d96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4d99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4d9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd4d9f jmp 0x10bd4c11 */
  goto L_10bd4c11;
L_10bd4da4:;
  /* 10bd4da4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4da8 je 0x10bd4db9 */
  if (C.zf) goto L_10bd4db9;
  /* 10bd4daa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4dad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10bd4db0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd4db3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4db6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10bd4db9:;
  /* 10bd4db9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4dbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd4dbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4dc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bd4dc4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bd4dc6 jmp 0x10bd4bb3 */
  goto L_10bd4bb3;
L_10bd4dcb:;
  /* 10bd4dcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4dcf je 0x10bd4de3 */
  if (C.zf) goto L_10bd4de3;
  /* 10bd4dd1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd4dd4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bd4dda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd4ddd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4de0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10bd4de3:;
  /* 10bd4de3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd4de6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd4de8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4deb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd4dee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd4df0 mov esp, ebp */
  ESP = (EBP);
  /* 10bd4df2 pop ebp */
  EBP = (pop32());
  /* 10bd4df3 ret  */
  ESPCHK(0x10bd49d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e00 @ 0x10bd4e00 (537 bytes, 173 insns) */
void f_10bd4e00(void) {
  FTRACE(0x10bd4e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd4e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd4e01 mov ebp, esp */
  EBP = (ESP);
  /* 10bd4e03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4e06 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10bd4e0d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10bd4e14 cmp dword ptr [0x10bfe570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4e1b jne 0x10bd4e5a */
  if (!C.zf) goto L_10bd4e5a;
  /* 10bd4e1d call dword ptr [0x10c002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002bc))), 0x10bd4e23u);
  /* 10bd4e23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bd4e26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4e2a je 0x10bd4e38 */
  if (C.zf) goto L_10bd4e38;
  /* 10bd4e2c mov dword ptr [0x10bfe570], 1 */
  w32((uint32_t)(0x10bfe570), (0x1u));
  /* 10bd4e36 jmp 0x10bd4e5a */
  goto L_10bd4e5a;
L_10bd4e38:;
  /* 10bd4e38 call dword ptr [0x10c00218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00218))), 0x10bd4e3eu);
  /* 10bd4e3e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd4e41 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4e45 je 0x10bd4e53 */
  if (C.zf) goto L_10bd4e53;
  /* 10bd4e47 mov dword ptr [0x10bfe570], 2 */
  w32((uint32_t)(0x10bfe570), (0x2u));
  /* 10bd4e51 jmp 0x10bd4e5a */
  goto L_10bd4e5a;
L_10bd4e53:;
  /* 10bd4e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4e55 jmp 0x10bd5015 */
  goto L_10bd5015;
L_10bd4e5a:;
  /* 10bd4e5a cmp dword ptr [0x10bfe570], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe570))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4e61 jne 0x10bd4f5e */
  if (!C.zf) goto L_10bd4f5e;
  /* 10bd4e67 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4e6b jne 0x10bd4e83 */
  if (!C.zf) goto L_10bd4e83;
  /* 10bd4e6d call dword ptr [0x10c002bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002bc))), 0x10bd4e73u);
  /* 10bd4e73 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bd4e76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4e7a jne 0x10bd4e83 */
  if (!C.zf) goto L_10bd4e83;
  /* 10bd4e7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4e7e jmp 0x10bd5015 */
  goto L_10bd5015;
L_10bd4e83:;
  /* 10bd4e83 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd4e86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bd4e89:;
  /* 10bd4e89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4e8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4e8e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10bd4e91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4e93 je 0x10bd4eb5 */
  if (C.zf) goto L_10bd4eb5;
  /* 10bd4e95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4e98 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4e9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd4e9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4ea1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd4ea3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10bd4ea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4ea8 jne 0x10bd4eb3 */
  if (!C.zf) goto L_10bd4eb3;
  /* 10bd4eaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4ead add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4eb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bd4eb3:;
  /* 10bd4eb3 jmp 0x10bd4e89 */
  goto L_10bd4e89;
L_10bd4eb5:;
  /* 10bd4eb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd4eb8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4ebb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10bd4ebd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4ec0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd4ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4ecb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4ece push edx */
  push32((uint32_t)(EDX));
  /* 10bd4ecf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd4ed2 push eax */
  push32((uint32_t)(EAX));
  /* 10bd4ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4ed7 call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10bd4eddu);
  /* 10bd4edd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd4ee0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4ee4 je 0x10bd4f04 */
  if (C.zf) goto L_10bd4f04;
  /* 10bd4ee6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10bd4ee8 push 0x10bf9af8 */
  push32((uint32_t)(0x10bf9af8u));
  /* 10bd4eed push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd4eef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4ef3 call 0x10bd2830 */
  push32(0x10bd4ef8u); f_10bd2830();
  /* 10bd4ef8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4efb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd4efe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4f02 jne 0x10bd4f15 */
  if (!C.zf) goto L_10bd4f15;
L_10bd4f04:;
  /* 10bd4f04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd4f07 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4f08 call dword ptr [0x10c002b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002b0))), 0x10bd4f0eu);
  /* 10bd4f0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4f10 jmp 0x10bd5015 */
  goto L_10bd5015;
L_10bd4f15:;
  /* 10bd4f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4f19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4f1c push eax */
  push32((uint32_t)(EAX));
  /* 10bd4f1d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd4f20 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4f21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd4f24 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4f25 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd4f28 push eax */
  push32((uint32_t)(EAX));
  /* 10bd4f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd4f2d call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10bd4f33u);
  /* 10bd4f33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd4f35 jne 0x10bd4f4c */
  if (!C.zf) goto L_10bd4f4c;
  /* 10bd4f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd4f39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd4f3c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4f3d call 0x10bd32c0 */
  push32(0x10bd4f42u); f_10bd32c0();
  /* 10bd4f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4f45 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10bd4f4c:;
  /* 10bd4f4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd4f4f push edx */
  push32((uint32_t)(EDX));
  /* 10bd4f50 call dword ptr [0x10c002b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002b0))), 0x10bd4f56u);
  /* 10bd4f56 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd4f59 jmp 0x10bd5015 */
  goto L_10bd5015;
L_10bd4f5e:;
  /* 10bd4f5e cmp dword ptr [0x10bfe570], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe570))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4f65 jne 0x10bd5013 */
  if (!C.zf) goto L_10bd5013;
  /* 10bd4f6b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4f6f jne 0x10bd4f87 */
  if (!C.zf) goto L_10bd4f87;
  /* 10bd4f71 call dword ptr [0x10c00218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00218))), 0x10bd4f77u);
  /* 10bd4f77 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd4f7a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4f7e jne 0x10bd4f87 */
  if (!C.zf) goto L_10bd4f87;
  /* 10bd4f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4f82 jmp 0x10bd5015 */
  goto L_10bd5015;
L_10bd4f87:;
  /* 10bd4f87 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd4f8a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bd4f8d:;
  /* 10bd4f8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4f90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bd4f93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4f95 je 0x10bd4fb5 */
  if (C.zf) goto L_10bd4fb5;
  /* 10bd4f97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4f9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4f9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd4fa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4fa3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bd4fa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd4fa8 jne 0x10bd4fb3 */
  if (!C.zf) goto L_10bd4fb3;
  /* 10bd4faa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4fad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4fb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bd4fb3:;
  /* 10bd4fb3 jmp 0x10bd4f8d */
  goto L_10bd4f8d;
L_10bd4fb5:;
  /* 10bd4fb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4fb8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd4fbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4fbe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bd4fc1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10bd4fc6 push 0x10bf9af8 */
  push32((uint32_t)(0x10bf9af8u));
  /* 10bd4fcb push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd4fcd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4fd0 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4fd1 call 0x10bd2830 */
  push32(0x10bd4fd6u); f_10bd2830();
  /* 10bd4fd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd4fd9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd4fdc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd4fe0 jne 0x10bd4ff0 */
  if (!C.zf) goto L_10bd4ff0;
  /* 10bd4fe2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd4fe5 push eax */
  push32((uint32_t)(EAX));
  /* 10bd4fe6 call dword ptr [0x10c002ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002ac))), 0x10bd4fecu);
  /* 10bd4fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd4fee jmp 0x10bd5015 */
  goto L_10bd5015;
L_10bd4ff0:;
  /* 10bd4ff0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd4ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd4ff4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd4ff7 push edx */
  push32((uint32_t)(EDX));
  /* 10bd4ff8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd4ffb push eax */
  push32((uint32_t)(EAX));
  /* 10bd4ffc call 0x10bd9110 */
  push32(0x10bd5001u); f_10bd9110();
  /* 10bd5001 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5004 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd5007 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5008 call dword ptr [0x10c002ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002ac))), 0x10bd500eu);
  /* 10bd500e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd5011 jmp 0x10bd5015 */
  goto L_10bd5015;
L_10bd5013:;
  /* 10bd5013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd5015:;
  /* 10bd5015 mov esp, ebp */
  ESP = (EBP);
  /* 10bd5017 pop ebp */
  EBP = (pop32());
  /* 10bd5018 ret  */
  ESPCHK(0x10bd4e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005020 @ 0x10bd5020 (77 bytes, 25 insns) */
void f_10bd5020(void) {
  FTRACE(0x10bd5020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5020 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5021 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd5025 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bd502a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd502c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5030 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10bd5033 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5034 call dword ptr [0x10c002c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c4))), 0x10bd503au);
  /* 10bd503a mov dword ptr [0x10bffdac], eax */
  w32((uint32_t)(0x10bffdac), (EAX));
  /* 10bd503f cmp dword ptr [0x10bffdac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bffdac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5046 jne 0x10bd504c */
  if (!C.zf) goto L_10bd504c;
  /* 10bd5048 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd504a jmp 0x10bd506b */
  goto L_10bd506b;
L_10bd504c:;
  /* 10bd504c call 0x10bd6ad0 */
  push32(0x10bd5051u); f_10bd6ad0();
  /* 10bd5051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd5053 jne 0x10bd5066 */
  if (!C.zf) goto L_10bd5066;
  /* 10bd5055 mov ecx, dword ptr [0x10bffdac] */
  ECX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd505b push ecx */
  push32((uint32_t)(ECX));
  /* 10bd505c call dword ptr [0x10c002c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c0))), 0x10bd5062u);
  /* 10bd5062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5064 jmp 0x10bd506b */
  goto L_10bd506b;
L_10bd5066:;
  /* 10bd5066 mov eax, 1 */
  EAX = (0x1u);
L_10bd506b:;
  /* 10bd506b pop ebp */
  EBP = (pop32());
  /* 10bd506c ret  */
  ESPCHK(0x10bd5020u, _esp0);
  ESP += 4; return;
}

/* FUN_10005070 @ 0x10bd5070 (156 bytes, 48 insns) */
void f_10bd5070(void) {
  FTRACE(0x10bd5070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5070 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5071 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5076 mov eax, dword ptr [0x10bffda8] */
  EAX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd507b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd507e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd5085 jmp 0x10bd5090 */
  goto L_10bd5090;
L_10bd5087:;
  /* 10bd5087 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd508a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd508d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd5090:;
  /* 10bd5090 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5093 cmp edx, dword ptr [0x10bffda4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bffda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5099 jge 0x10bd50e6 */
  if ((C.sf==C.of)) goto L_10bd50e6;
  /* 10bd509b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10bd50a0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10bd50a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd50a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bd50ab push ecx */
  push32((uint32_t)(ECX));
  /* 10bd50ac call dword ptr [0x10c002cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002cc))), 0x10bd50b2u);
  /* 10bd50b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bd50b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd50b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd50bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bd50bf push eax */
  push32((uint32_t)(EAX));
  /* 10bd50c0 call dword ptr [0x10c002cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002cc))), 0x10bd50c6u);
  /* 10bd50c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd50c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bd50cc push edx */
  push32((uint32_t)(EDX));
  /* 10bd50cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd50cf mov eax, dword ptr [0x10bffdac] */
  EAX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd50d4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd50d5 call dword ptr [0x10c002c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c8))), 0x10bd50dbu);
  /* 10bd50db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd50de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd50e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd50e4 jmp 0x10bd5087 */
  goto L_10bd5087;
L_10bd50e6:;
  /* 10bd50e6 mov edx, dword ptr [0x10bffda8] */
  EDX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd50ec push edx */
  push32((uint32_t)(EDX));
  /* 10bd50ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd50ef mov eax, dword ptr [0x10bffdac] */
  EAX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd50f4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd50f5 call dword ptr [0x10c002c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c8))), 0x10bd50fbu);
  /* 10bd50fb mov ecx, dword ptr [0x10bffdac] */
  ECX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd5101 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5102 call dword ptr [0x10c002c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c0))), 0x10bd5108u);
  /* 10bd5108 mov esp, ebp */
  ESP = (EBP);
  /* 10bd510a pop ebp */
  EBP = (pop32());
  /* 10bd510b ret  */
  ESPCHK(0x10bd5070u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10bd5110 (73 bytes, 19 insns) */
void f_10bd5110(void) {
  FTRACE(0x10bd5110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5110 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5111 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5113 cmp dword ptr [0x10bfe404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd511a je 0x10bd512e */
  if (C.zf) goto L_10bd512e;
  /* 10bd511c cmp dword ptr [0x10bfe404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5123 jne 0x10bd5157 */
  if (!C.zf) goto L_10bd5157;
  /* 10bd5125 cmp dword ptr [0x10bfe408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd512c jne 0x10bd5157 */
  if (!C.zf) goto L_10bd5157;
L_10bd512e:;
  /* 10bd512e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10bd5133 call 0x10bd5160 */
  push32(0x10bd5138u); f_10bd5160();
  /* 10bd5138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd513b cmp dword ptr [0x10bfe574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5142 je 0x10bd514a */
  if (C.zf) goto L_10bd514a;
  /* 10bd5144 call dword ptr [0x10bfe574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe574))), 0x10bd514au);
L_10bd514a:;
  /* 10bd514a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10bd514f call 0x10bd5160 */
  push32(0x10bd5154u); f_10bd5160();
  /* 10bd5154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5157:;
  /* 10bd5157 pop ebp */
  EBP = (pop32());
  /* 10bd5158 ret  */
  ESPCHK(0x10bd5110u, _esp0);
  ESP += 4; return;
}

/* FUN_10005160 @ 0x10bd5160 (447 bytes, 131 insns) */
void f_10bd5160(void) {
  FTRACE(0x10bd5160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5160 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5161 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5163 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5169 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd516a push esi */
  push32((uint32_t)(ESI));
  /* 10bd516b push edi */
  push32((uint32_t)(EDI));
  /* 10bd516c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bd5173 jmp 0x10bd517e */
  goto L_10bd517e;
L_10bd5175:;
  /* 10bd5175 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5178 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd517b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bd517e:;
  /* 10bd517e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5182 jae 0x10bd5197 */
  if (!C.cf) goto L_10bd5197;
  /* 10bd5184 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5187 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd518a cmp edx, dword ptr [ecx*8 + 0x10bfcab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10bfcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5191 jne 0x10bd5195 */
  if (!C.zf) goto L_10bd5195;
  /* 10bd5193 jmp 0x10bd5197 */
  goto L_10bd5197;
L_10bd5195:;
  /* 10bd5195 jmp 0x10bd5175 */
  goto L_10bd5175;
L_10bd5197:;
  /* 10bd5197 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd519a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd519d cmp ecx, dword ptr [eax*8 + 0x10bfcab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10bfcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd51a4 jne 0x10bd5318 */
  if (!C.zf) goto L_10bd5318;
  /* 10bd51aa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd51b1 je 0x10bd51d4 */
  if (C.zf) goto L_10bd51d4;
  /* 10bd51b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd51b6 mov eax, dword ptr [edx*8 + 0x10bfcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10bfcab4)));
  /* 10bd51bd push eax */
  push32((uint32_t)(EAX));
  /* 10bd51be push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd51c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd51c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd51c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd51c6 call 0x10bd18f0 */
  push32(0x10bd51cbu); f_10bd18f0();
  /* 10bd51cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd51ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd51d1 jne 0x10bd51d4 */
  if (!C.zf) goto L_10bd51d4;
  /* 10bd51d3 int3  */
  x86_unimpl("int3 @ 0x10bd51d3");
L_10bd51d4:;
  /* 10bd51d4 cmp dword ptr [0x10bfe404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd51db je 0x10bd51ef */
  if (C.zf) goto L_10bd51ef;
  /* 10bd51dd cmp dword ptr [0x10bfe404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd51e4 jne 0x10bd5228 */
  if (!C.zf) goto L_10bd5228;
  /* 10bd51e6 cmp dword ptr [0x10bfe408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd51ed jne 0x10bd5228 */
  if (!C.zf) goto L_10bd5228;
L_10bd51ef:;
  /* 10bd51ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd51f1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10bd51f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd51f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd51f8 mov eax, dword ptr [edx*8 + 0x10bfcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10bfcab4)));
  /* 10bd51ff push eax */
  push32((uint32_t)(EAX));
  /* 10bd5200 call 0x10bd5660 */
  push32(0x10bd5205u); f_10bd5660();
  /* 10bd5205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5208 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5209 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd520c mov edx, dword ptr [ecx*8 + 0x10bfcab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10bfcab4)));
  /* 10bd5213 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5214 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10bd5216 call dword ptr [0x10c00244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00244))), 0x10bd521cu);
  /* 10bd521c push eax */
  push32((uint32_t)(EAX));
  /* 10bd521d call dword ptr [0x10c00248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00248))), 0x10bd5223u);
  /* 10bd5223 jmp 0x10bd5318 */
  goto L_10bd5318;
L_10bd5228:;
  /* 10bd5228 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd522f je 0x10bd5318 */
  if (C.zf) goto L_10bd5318;
  /* 10bd5235 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10bd523a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10bd5240 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5241 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd5243 call dword ptr [0x10c00260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00260))), 0x10bd5249u);
  /* 10bd5249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd524b jne 0x10bd5261 */
  if (!C.zf) goto L_10bd5261;
  /* 10bd524d push 0x10bf9360 */
  push32((uint32_t)(0x10bf9360u));
  /* 10bd5252 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10bd5258 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5259 call 0x10bd57e0 */
  push32(0x10bd525eu); f_10bd57e0();
  /* 10bd525e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5261:;
  /* 10bd5261 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10bd5267 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10bd526a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd526d push eax */
  push32((uint32_t)(EAX));
  /* 10bd526e call 0x10bd5660 */
  push32(0x10bd5273u); f_10bd5660();
  /* 10bd5273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5276 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5279 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd527c jbe 0x10bd52aa */
  if ((C.cf||C.zf)) goto L_10bd52aa;
  /* 10bd527e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10bd5284 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5285 call 0x10bd5660 */
  push32(0x10bd528au); f_10bd5660();
  /* 10bd528a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd528d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd5290 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10bd5294 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd5297 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd5299 push 0x10bf935c */
  push32((uint32_t)(0x10bf935cu));
  /* 10bd529e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd52a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd52a2 call 0x10bd6050 */
  push32(0x10bd52a7u); f_10bd6050();
  /* 10bd52a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd52aa:;
  /* 10bd52aa push 0x10bf9db4 */
  push32((uint32_t)(0x10bf9db4u));
  /* 10bd52af lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10bd52b5 push edx */
  push32((uint32_t)(EDX));
  /* 10bd52b6 call 0x10bd57e0 */
  push32(0x10bd52bbu); f_10bd57e0();
  /* 10bd52bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd52be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd52c1 push eax */
  push32((uint32_t)(EAX));
  /* 10bd52c2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10bd52c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd52c9 call 0x10bd57f0 */
  push32(0x10bd52ceu); f_10bd57f0();
  /* 10bd52ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd52d1 push 0x10bf92d4 */
  push32((uint32_t)(0x10bf92d4u));
  /* 10bd52d6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10bd52dc push edx */
  push32((uint32_t)(EDX));
  /* 10bd52dd call 0x10bd57f0 */
  push32(0x10bd52e2u); f_10bd57f0();
  /* 10bd52e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd52e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd52e8 mov ecx, dword ptr [eax*8 + 0x10bfcab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10bfcab4)));
  /* 10bd52ef push ecx */
  push32((uint32_t)(ECX));
  /* 10bd52f0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10bd52f6 push edx */
  push32((uint32_t)(EDX));
  /* 10bd52f7 call 0x10bd57f0 */
  push32(0x10bd52fcu); f_10bd57f0();
  /* 10bd52fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd52ff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10bd5304 push 0x10bf9d8c */
  push32((uint32_t)(0x10bf9d8cu));
  /* 10bd5309 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10bd530f push eax */
  push32((uint32_t)(EAX));
  /* 10bd5310 call 0x10bd5f90 */
  push32(0x10bd5315u); f_10bd5f90();
  /* 10bd5315 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5318:;
  /* 10bd5318 pop edi */
  EDI = (pop32());
  /* 10bd5319 pop esi */
  ESI = (pop32());
  /* 10bd531a pop ebx */
  EBX = (pop32());
  /* 10bd531b mov esp, ebp */
  ESP = (EBP);
  /* 10bd531d pop ebp */
  EBP = (pop32());
  /* 10bd531e ret  */
  ESPCHK(0x10bd5160u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10bd5320 (80 bytes, 27 insns) */
void f_10bd5320(void) {
  FTRACE(0x10bd5320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5320 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5321 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5323 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd532b jmp 0x10bd5336 */
  goto L_10bd5336;
L_10bd532d:;
  /* 10bd532d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd5336:;
  /* 10bd5336 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd533a jae 0x10bd534f */
  if (!C.cf) goto L_10bd534f;
  /* 10bd533c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd533f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5342 cmp edx, dword ptr [ecx*8 + 0x10bfcab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10bfcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5349 jne 0x10bd534d */
  if (!C.zf) goto L_10bd534d;
  /* 10bd534b jmp 0x10bd534f */
  goto L_10bd534f;
L_10bd534d:;
  /* 10bd534d jmp 0x10bd532d */
  goto L_10bd532d;
L_10bd534f:;
  /* 10bd534f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5355 cmp ecx, dword ptr [eax*8 + 0x10bfcab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10bfcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd535c jne 0x10bd536a */
  if (!C.zf) goto L_10bd536a;
  /* 10bd535e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5361 mov eax, dword ptr [edx*8 + 0x10bfcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10bfcab4)));
  /* 10bd5368 jmp 0x10bd536c */
  goto L_10bd536c;
L_10bd536a:;
  /* 10bd536a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd536c:;
  /* 10bd536c mov esp, ebp */
  ESP = (EBP);
  /* 10bd536e pop ebp */
  EBP = (pop32());
  /* 10bd536f ret  */
  ESPCHK(0x10bd5320u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10bd5370 (66 bytes, 28 insns) */
void f_10bd5370(void) {
  FTRACE(0x10bd5370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5370 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5371 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5373 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5377 jne 0x10bd5397 */
  if (!C.zf) goto L_10bd5397;
  /* 10bd5379 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd537d jge 0x10bd5397 */
  if ((C.sf==C.of)) goto L_10bd5397;
  /* 10bd537f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5381 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd5384 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5385 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5388 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5389 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd538c push edx */
  push32((uint32_t)(EDX));
  /* 10bd538d call 0x10bd53c0 */
  push32(0x10bd5392u); f_10bd53c0();
  /* 10bd5392 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5395 jmp 0x10bd53ad */
  goto L_10bd53ad;
L_10bd5397:;
  /* 10bd5397 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd5399 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd539c push eax */
  push32((uint32_t)(EAX));
  /* 10bd539d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd53a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd53a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd53a4 push edx */
  push32((uint32_t)(EDX));
  /* 10bd53a5 call 0x10bd53c0 */
  push32(0x10bd53aau); f_10bd53c0();
  /* 10bd53aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd53ad:;
  /* 10bd53ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd53b0 pop ebp */
  EBP = (pop32());
  /* 10bd53b1 ret  */
  ESPCHK(0x10bd5370u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10bd53c0 (194 bytes, 71 insns) */
void f_10bd53c0(void) {
  FTRACE(0x10bd53c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd53c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd53c1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd53c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd53c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd53c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd53cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd53d0 je 0x10bd53e9 */
  if (C.zf) goto L_10bd53e9;
  /* 10bd53d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd53d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10bd53d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd53db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd53de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd53e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd53e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd53e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10bd53e9:;
  /* 10bd53e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd53ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10bd53ef:;
  /* 10bd53ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd53f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd53f4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd53f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10bd53fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd53fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd53ff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd5402 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bd5405 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5409 jbe 0x10bd5421 */
  if ((C.cf||C.zf)) goto L_10bd5421;
  /* 10bd540b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd540e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5414 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd5416 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5419 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd541c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd541f jmp 0x10bd5435 */
  goto L_10bd5435;
L_10bd5421:;
  /* 10bd5421 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd5424 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5427 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd542a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd542c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd542f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5432 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd5435:;
  /* 10bd5435 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5439 ja 0x10bd53ef */
  if ((!C.cf&&!C.zf)) goto L_10bd53ef;
  /* 10bd543b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd543e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10bd5441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5444 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5447 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd544a:;
  /* 10bd544a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd544d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd544f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10bd5452 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5455 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5458 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd545a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd545c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd545f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10bd5462 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10bd5464 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5467 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd546a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd546d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5470 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5473 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd5476 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5479 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd547c jb 0x10bd544a */
  if (C.cf) goto L_10bd544a;
  /* 10bd547e mov esp, ebp */
  ESP = (EBP);
  /* 10bd5480 pop ebp */
  EBP = (pop32());
  /* 10bd5481 ret  */
  ESPCHK(0x10bd53c0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10bd5490 (63 bytes, 24 insns) */
void f_10bd5490(void) {
  FTRACE(0x10bd5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5490 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5491 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5493 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5494 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5498 jne 0x10bd54a9 */
  if (!C.zf) goto L_10bd54a9;
  /* 10bd549a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd549e jge 0x10bd54a9 */
  if ((C.sf==C.of)) goto L_10bd54a9;
  /* 10bd54a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bd54a7 jmp 0x10bd54b0 */
  goto L_10bd54b0;
L_10bd54a9:;
  /* 10bd54a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bd54b0:;
  /* 10bd54b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd54b3 push eax */
  push32((uint32_t)(EAX));
  /* 10bd54b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd54b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd54b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd54bb push edx */
  push32((uint32_t)(EDX));
  /* 10bd54bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd54bf push eax */
  push32((uint32_t)(EAX));
  /* 10bd54c0 call 0x10bd53c0 */
  push32(0x10bd54c5u); f_10bd53c0();
  /* 10bd54c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd54c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd54cb mov esp, ebp */
  ESP = (EBP);
  /* 10bd54cd pop ebp */
  EBP = (pop32());
  /* 10bd54ce ret  */
  ESPCHK(0x10bd5490u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10bd54d0 (30 bytes, 14 insns) */
void f_10bd54d0(void) {
  FTRACE(0x10bd54d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd54d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd54d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd54d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd54d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd54d8 push eax */
  push32((uint32_t)(EAX));
  /* 10bd54d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd54dc push ecx */
  push32((uint32_t)(ECX));
  /* 10bd54dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd54e0 push edx */
  push32((uint32_t)(EDX));
  /* 10bd54e1 call 0x10bd53c0 */
  push32(0x10bd54e6u); f_10bd53c0();
  /* 10bd54e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd54e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd54ec pop ebp */
  EBP = (pop32());
  /* 10bd54ed ret  */
  ESPCHK(0x10bd54d0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10bd54f0 (72 bytes, 28 insns) */
void f_10bd54f0(void) {
  FTRACE(0x10bd54f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd54f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd54f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd54f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd54f4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd54f8 jne 0x10bd5511 */
  if (!C.zf) goto L_10bd5511;
  /* 10bd54fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd54fe jg 0x10bd5511 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bd5511;
  /* 10bd5500 jl 0x10bd5508 */
  if ((C.sf!=C.of)) goto L_10bd5508;
  /* 10bd5502 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5506 jae 0x10bd5511 */
  if (!C.cf) goto L_10bd5511;
L_10bd5508:;
  /* 10bd5508 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bd550f jmp 0x10bd5518 */
  goto L_10bd5518;
L_10bd5511:;
  /* 10bd5511 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bd5518:;
  /* 10bd5518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd551b push eax */
  push32((uint32_t)(EAX));
  /* 10bd551c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd551f push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5520 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd5523 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5524 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5527 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5528 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd552b push ecx */
  push32((uint32_t)(ECX));
  /* 10bd552c call 0x10bd5540 */
  push32(0x10bd5531u); f_10bd5540();
  /* 10bd5531 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd5534 mov esp, ebp */
  ESP = (EBP);
  /* 10bd5536 pop ebp */
  EBP = (pop32());
  /* 10bd5537 ret  */
  ESPCHK(0x10bd54f0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10bd5540 (242 bytes, 91 insns) */
void f_10bd5540(void) {
  FTRACE(0x10bd5540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5540 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5541 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5543 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5546 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd5549 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd554c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5550 je 0x10bd5574 */
  if (C.zf) goto L_10bd5574;
  /* 10bd5552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5555 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10bd5558 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd555b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd555e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd5561 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5564 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd5566 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5569 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd556c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd556e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bd5571 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10bd5574:;
  /* 10bd5574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5577 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10bd557a:;
  /* 10bd557a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd557d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd557f push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5580 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5581 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5584 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5585 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5588 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5589 call 0x10bd94c0 */
  push32(0x10bd558eu); f_10bd94c0();
  /* 10bd558e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd5591 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd5594 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd5596 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5597 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5598 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd559b push eax */
  push32((uint32_t)(EAX));
  /* 10bd559c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd559f push ecx */
  push32((uint32_t)(ECX));
  /* 10bd55a0 call 0x10bd9450 */
  push32(0x10bd55a5u); f_10bd9450();
  /* 10bd55a5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bd55a8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10bd55ab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd55af jbe 0x10bd55c7 */
  if ((C.cf||C.zf)) goto L_10bd55c7;
  /* 10bd55b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd55b4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd55b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd55ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd55bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd55bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd55c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd55c5 jmp 0x10bd55db */
  goto L_10bd55db;
L_10bd55c7:;
  /* 10bd55c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd55ca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd55cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd55d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd55d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd55d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd55d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd55db:;
  /* 10bd55db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd55df ja 0x10bd557a */
  if ((!C.cf&&!C.zf)) goto L_10bd557a;
  /* 10bd55e1 jb 0x10bd55e9 */
  if (C.cf) goto L_10bd55e9;
  /* 10bd55e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd55e7 ja 0x10bd557a */
  if ((!C.cf&&!C.zf)) goto L_10bd557a;
L_10bd55e9:;
  /* 10bd55e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd55ec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10bd55ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd55f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd55f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd55f8:;
  /* 10bd55f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd55fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd55fd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10bd5600 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5603 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5606 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd5608 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10bd560a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd560d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10bd5610 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10bd5612 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5615 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5618 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd561b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd561e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5621 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd5624 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5627 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd562a jb 0x10bd55f8 */
  if (C.cf) goto L_10bd55f8;
  /* 10bd562c mov esp, ebp */
  ESP = (EBP);
  /* 10bd562e pop ebp */
  EBP = (pop32());
  /* 10bd562f ret 0x14 */
  ESPCHK(0x10bd5540u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10bd5640 (31 bytes, 15 insns) */
void f_10bd5640(void) {
  FTRACE(0x10bd5640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5640 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5641 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5643 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd5645 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd5648 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5649 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd564c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd564d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5650 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5654 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5655 call 0x10bd5540 */
  push32(0x10bd565au); f_10bd5540();
  /* 10bd565a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd565d pop ebp */
  EBP = (pop32());
  /* 10bd565e ret  */
  ESPCHK(0x10bd5640u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10bd5660 (123 bytes, 44 insns) */
void f_10bd5660(void) {
  FTRACE(0x10bd5660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5660 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bd5664 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bd566a je 0x10bd5680 */
  if (C.zf) goto L_10bd5680;
L_10bd566c:;
  /* 10bd566c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10bd566e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bd566f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bd5671 je 0x10bd56b3 */
  if (C.zf) goto L_10bd56b3;
  /* 10bd5673 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bd5679 jne 0x10bd566c */
  if (!C.zf) goto L_10bd566c;
  /* 10bd567b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10bd5680:;
  /* 10bd5680 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bd5682 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bd5687 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5689 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd568c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd568e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5691 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bd5696 je 0x10bd5680 */
  if (C.zf) goto L_10bd5680;
  /* 10bd5698 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bd569b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bd569d je 0x10bd56d1 */
  if (C.zf) goto L_10bd56d1;
  /* 10bd569f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10bd56a1 je 0x10bd56c7 */
  if (C.zf) goto L_10bd56c7;
  /* 10bd56a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bd56a8 je 0x10bd56bd */
  if (C.zf) goto L_10bd56bd;
  /* 10bd56aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bd56af je 0x10bd56b3 */
  if (C.zf) goto L_10bd56b3;
  /* 10bd56b1 jmp 0x10bd5680 */
  goto L_10bd5680;
L_10bd56b3:;
  /* 10bd56b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10bd56b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bd56ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd56bc ret  */
  ESPCHK(0x10bd5660u, _esp0);
  ESP += 4; return;
L_10bd56bd:;
  /* 10bd56bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10bd56c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bd56c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd56c6 ret  */
  ESPCHK(0x10bd5660u, _esp0);
  ESP += 4; return;
L_10bd56c7:;
  /* 10bd56c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10bd56ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bd56ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd56d0 ret  */
  ESPCHK(0x10bd5660u, _esp0);
  ESP += 4; return;
L_10bd56d1:;
  /* 10bd56d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10bd56d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bd56d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd56da ret  */
  ESPCHK(0x10bd5660u, _esp0);
  ESP += 4; return;
}

/* FUN_100056e0 @ 0x10bd56e0 (249 bytes, 93 insns) */
void f_10bd56e0(void) {
  FTRACE(0x10bd56e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd56e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd56e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd56e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd56e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd56e7 push esi */
  push32((uint32_t)(ESI));
  /* 10bd56e8 push edi */
  push32((uint32_t)(EDI));
  /* 10bd56e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10bd56ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bd56ef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10bd56f2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10bd56f5:;
  /* 10bd56f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd56f9 jne 0x10bd5719 */
  if (!C.zf) goto L_10bd5719;
  /* 10bd56fb push 0x10bf9dec */
  push32((uint32_t)(0x10bf9decu));
  /* 10bd5700 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd5702 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10bd5704 push 0x10bf9de0 */
  push32((uint32_t)(0x10bf9de0u));
  /* 10bd5709 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd570b call 0x10bd18f0 */
  push32(0x10bd5710u); f_10bd18f0();
  /* 10bd5710 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5713 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5716 jne 0x10bd5719 */
  if (!C.zf) goto L_10bd5719;
  /* 10bd5718 int3  */
  x86_unimpl("int3 @ 0x10bd5718");
L_10bd5719:;
  /* 10bd5719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd571b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd571d jne 0x10bd56f5 */
  if (!C.zf) goto L_10bd56f5;
L_10bd571f:;
  /* 10bd571f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5723 jne 0x10bd5743 */
  if (!C.zf) goto L_10bd5743;
  /* 10bd5725 push 0x10bf9dd0 */
  push32((uint32_t)(0x10bf9dd0u));
  /* 10bd572a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd572c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10bd572e push 0x10bf9de0 */
  push32((uint32_t)(0x10bf9de0u));
  /* 10bd5733 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd5735 call 0x10bd18f0 */
  push32(0x10bd573au); f_10bd18f0();
  /* 10bd573a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd573d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5740 jne 0x10bd5743 */
  if (!C.zf) goto L_10bd5743;
  /* 10bd5742 int3  */
  x86_unimpl("int3 @ 0x10bd5742");
L_10bd5743:;
  /* 10bd5743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd5747 jne 0x10bd571f */
  if (!C.zf) goto L_10bd571f;
  /* 10bd5749 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd574c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10bd5753 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5759 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bd575c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd575f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5762 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10bd5764 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5767 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd576a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10bd576d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd5770 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5771 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd5774 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5775 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5778 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5779 call 0x10bd97c0 */
  push32(0x10bd577eu); f_10bd97c0();
  /* 10bd577e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5781 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bd5784 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5787 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd578a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd578d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5790 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10bd5793 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5796 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd579a jl 0x10bd57be */
  if ((C.sf!=C.of)) goto L_10bd57be;
  /* 10bd579c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd579f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd57a1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10bd57a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd57a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd57ac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10bd57af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd57b2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd57b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd57b7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd57ba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bd57bc jmp 0x10bd57cf */
  goto L_10bd57cf;
L_10bd57be:;
  /* 10bd57be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd57c1 push eax */
  push32((uint32_t)(EAX));
  /* 10bd57c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd57c4 call 0x10bd9540 */
  push32(0x10bd57c9u); f_10bd9540();
  /* 10bd57c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd57cc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10bd57cf:;
  /* 10bd57cf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd57d2 pop edi */
  EDI = (pop32());
  /* 10bd57d3 pop esi */
  ESI = (pop32());
  /* 10bd57d4 pop ebx */
  EBX = (pop32());
  /* 10bd57d5 mov esp, ebp */
  ESP = (EBP);
  /* 10bd57d7 pop ebp */
  EBP = (pop32());
  /* 10bd57d8 ret  */
  ESPCHK(0x10bd56e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057e0 @ 0x10bd57e0 (7 bytes, 3 insns) */
void f_10bd57e0(void) {
  FTRACE(0x10bd57e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd57e0 push edi */
  push32((uint32_t)(EDI));
  /* 10bd57e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10bd57e5 jmp 0x10bd5851 */
  jmp_ind(0x10bd5851u); return;
}

/* FUN_100057f0 @ 0x10bd57f0 (224 bytes, 84 insns) */
void f_10bd57f0(void) {
  FTRACE(0x10bd57f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd57f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bd57f4 push edi */
  push32((uint32_t)(EDI));
  /* 10bd57f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bd57fb je 0x10bd580c */
  if (C.zf) goto L_10bd580c;
L_10bd57fd:;
  /* 10bd57fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10bd57ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bd5800 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bd5802 je 0x10bd583f */
  if (C.zf) goto L_10bd583f;
  /* 10bd5804 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bd580a jne 0x10bd57fd */
  if (!C.zf) goto L_10bd57fd;
L_10bd580c:;
  /* 10bd580c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bd580e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bd5813 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5815 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5818 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd581a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd581d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bd5822 je 0x10bd580c */
  if (C.zf) goto L_10bd580c;
  /* 10bd5824 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bd5827 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bd5829 je 0x10bd584e */
  if (C.zf) goto L_10bd584e;
  /* 10bd582b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10bd582d je 0x10bd5849 */
  if (C.zf) goto L_10bd5849;
  /* 10bd582f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bd5834 je 0x10bd5844 */
  if (C.zf) goto L_10bd5844;
  /* 10bd5836 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bd583b je 0x10bd583f */
  if (C.zf) goto L_10bd583f;
  /* 10bd583d jmp 0x10bd580c */
  goto L_10bd580c;
L_10bd583f:;
  /* 10bd583f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10bd5842 jmp 0x10bd5851 */
  goto L_10bd5851;
L_10bd5844:;
  /* 10bd5844 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10bd5847 jmp 0x10bd5851 */
  goto L_10bd5851;
L_10bd5849:;
  /* 10bd5849 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10bd584c jmp 0x10bd5851 */
  goto L_10bd5851;
L_10bd584e:;
  /* 10bd584e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10bd5851:;
  /* 10bd5851 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bd5855 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bd585b je 0x10bd5876 */
  if (C.zf) goto L_10bd5876;
L_10bd585d:;
  /* 10bd585d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd585f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bd5860 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bd5862 je 0x10bd58c8 */
  if (C.zf) goto L_10bd58c8;
  /* 10bd5864 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10bd5866 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bd5867 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10bd586d jne 0x10bd585d */
  if (!C.zf) goto L_10bd585d;
  /* 10bd586f jmp 0x10bd5876 */
  goto L_10bd5876;
L_10bd5871:;
  /* 10bd5871 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bd5873 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bd5876:;
  /* 10bd5876 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bd587b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bd587d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd587f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5882 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5884 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd5886 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5889 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bd588e je 0x10bd5871 */
  if (C.zf) goto L_10bd5871;
  /* 10bd5890 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bd5892 je 0x10bd58c8 */
  if (C.zf) goto L_10bd58c8;
  /* 10bd5894 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10bd5896 je 0x10bd58bf */
  if (C.zf) goto L_10bd58bf;
  /* 10bd5898 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bd589e je 0x10bd58b2 */
  if (C.zf) goto L_10bd58b2;
  /* 10bd58a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bd58a6 je 0x10bd58aa */
  if (C.zf) goto L_10bd58aa;
  /* 10bd58a8 jmp 0x10bd5871 */
  goto L_10bd5871;
L_10bd58aa:;
  /* 10bd58aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bd58ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bd58b0 pop edi */
  EDI = (pop32());
  /* 10bd58b1 ret  */
  ESPCHK(0x10bd57f0u, _esp0);
  ESP += 4; return;
L_10bd58b2:;
  /* 10bd58b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10bd58b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bd58b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10bd58bd pop edi */
  EDI = (pop32());
  /* 10bd58be ret  */
  ESPCHK(0x10bd57f0u, _esp0);
  ESP += 4; return;
L_10bd58bf:;
  /* 10bd58bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10bd58c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bd58c6 pop edi */
  EDI = (pop32());
  /* 10bd58c7 ret  */
  ESPCHK(0x10bd57f0u, _esp0);
  ESP += 4; return;
L_10bd58c8:;
  /* 10bd58c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10bd58ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bd58ce pop edi */
  EDI = (pop32());
  /* 10bd58cf ret  */
  ESPCHK(0x10bd57f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058d0 @ 0x10bd58d0 (243 bytes, 91 insns) */
void f_10bd58d0(void) {
  FTRACE(0x10bd58d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd58d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd58d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd58d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd58d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd58d7 push esi */
  push32((uint32_t)(ESI));
  /* 10bd58d8 push edi */
  push32((uint32_t)(EDI));
  /* 10bd58d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10bd58dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10bd58df:;
  /* 10bd58df cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd58e3 jne 0x10bd5903 */
  if (!C.zf) goto L_10bd5903;
  /* 10bd58e5 push 0x10bf9dec */
  push32((uint32_t)(0x10bf9decu));
  /* 10bd58ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd58ec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10bd58ee push 0x10bf9dfc */
  push32((uint32_t)(0x10bf9dfcu));
  /* 10bd58f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd58f5 call 0x10bd18f0 */
  push32(0x10bd58fau); f_10bd18f0();
  /* 10bd58fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd58fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5900 jne 0x10bd5903 */
  if (!C.zf) goto L_10bd5903;
  /* 10bd5902 int3  */
  x86_unimpl("int3 @ 0x10bd5902");
L_10bd5903:;
  /* 10bd5903 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd5905 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd5907 jne 0x10bd58df */
  if (!C.zf) goto L_10bd58df;
L_10bd5909:;
  /* 10bd5909 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd590d jne 0x10bd592d */
  if (!C.zf) goto L_10bd592d;
  /* 10bd590f push 0x10bf9dd0 */
  push32((uint32_t)(0x10bf9dd0u));
  /* 10bd5914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd5916 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10bd5918 push 0x10bf9dfc */
  push32((uint32_t)(0x10bf9dfcu));
  /* 10bd591d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd591f call 0x10bd18f0 */
  push32(0x10bd5924u); f_10bd18f0();
  /* 10bd5924 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5927 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd592a jne 0x10bd592d */
  if (!C.zf) goto L_10bd592d;
  /* 10bd592c int3  */
  x86_unimpl("int3 @ 0x10bd592c");
L_10bd592d:;
  /* 10bd592d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd592f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd5931 jne 0x10bd5909 */
  if (!C.zf) goto L_10bd5909;
  /* 10bd5933 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5936 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10bd593d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5940 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5943 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bd5946 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd594c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bd594e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5951 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5954 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10bd5957 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bd595a push ecx */
  push32((uint32_t)(ECX));
  /* 10bd595b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd595e push edx */
  push32((uint32_t)(EDX));
  /* 10bd595f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5962 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5963 call 0x10bd97c0 */
  push32(0x10bd5968u); f_10bd97c0();
  /* 10bd5968 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd596b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bd596e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5971 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd5974 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5977 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd597a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10bd597d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5980 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5984 jl 0x10bd59a8 */
  if ((C.sf!=C.of)) goto L_10bd59a8;
  /* 10bd5986 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd5989 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd598b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10bd598e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd5990 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd5996 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10bd5999 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd599c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd599e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd59a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd59a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd59a6 jmp 0x10bd59b9 */
  goto L_10bd59b9;
L_10bd59a8:;
  /* 10bd59a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd59ab push edx */
  push32((uint32_t)(EDX));
  /* 10bd59ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd59ae call 0x10bd9540 */
  push32(0x10bd59b3u); f_10bd9540();
  /* 10bd59b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd59b6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10bd59b9:;
  /* 10bd59b9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd59bc pop edi */
  EDI = (pop32());
  /* 10bd59bd pop esi */
  ESI = (pop32());
  /* 10bd59be pop ebx */
  EBX = (pop32());
  /* 10bd59bf mov esp, ebp */
  ESP = (EBP);
  /* 10bd59c1 pop ebp */
  EBP = (pop32());
  /* 10bd59c2 ret  */
  ESPCHK(0x10bd58d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059d0 @ 0x10bd59d0 (47 bytes, 17 insns) */
void f_10bd59d0(void) {
  FTRACE(0x10bd59d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd59d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd59d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd59d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10bd59da jb 0x10bd59f0 */
  if (C.cf) goto L_10bd59f0;
L_10bd59dc:;
  /* 10bd59dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd59e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd59e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10bd59e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd59ee jae 0x10bd59dc */
  if (!C.cf) goto L_10bd59dc;
L_10bd59f0:;
  /* 10bd59f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd59f2 mov eax, esp */
  EAX = (ESP);
  /* 10bd59f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10bd59f6 mov esp, ecx */
  ESP = (ECX);
  /* 10bd59f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd59fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd59fd push eax */
  push32((uint32_t)(EAX));
  /* 10bd59fe ret  */
  ESPCHK(0x10bd59d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x10bd5a00 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10bd5a00(void) {
  FTRACE(0x10bd5a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5a01 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5a03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5a06 push esi */
  push32((uint32_t)(ESI));
  /* 10bd5a07 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a0b je 0x10bd5a13 */
  if (C.zf) goto L_10bd5a13;
  /* 10bd5a0d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a11 jne 0x10bd5a18 */
  if (!C.zf) goto L_10bd5a18;
L_10bd5a13:;
  /* 10bd5a13 jmp 0x10bd5be8 */
  goto L_10bd5be8;
L_10bd5a18:;
  /* 10bd5a18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a1c je 0x10bd5a34 */
  if (C.zf) goto L_10bd5a34;
  /* 10bd5a1e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a22 je 0x10bd5a34 */
  if (C.zf) goto L_10bd5a34;
  /* 10bd5a24 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a28 je 0x10bd5a34 */
  if (C.zf) goto L_10bd5a34;
  /* 10bd5a2a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a2e jne 0x10bd5b11 */
  if (!C.zf) goto L_10bd5b11;
L_10bd5a34:;
  /* 10bd5a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5a36 call 0x10bd6230 */
  push32(0x10bd5a3bu); f_10bd6230();
  /* 10bd5a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5a3e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a42 je 0x10bd5a4a */
  if (C.zf) goto L_10bd5a4a;
  /* 10bd5a44 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a48 jne 0x10bd5a8f */
  if (!C.zf) goto L_10bd5a8f;
L_10bd5a4a:;
  /* 10bd5a4a cmp dword ptr [0x10bfe588], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe588))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a51 jne 0x10bd5a8f */
  if (!C.zf) goto L_10bd5a8f;
  /* 10bd5a53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5a55 push 0x10bd5c30 */
  push32((uint32_t)(0x10bd5c30u));
  /* 10bd5a5a call dword ptr [0x10c002d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d0))), 0x10bd5a60u);
  /* 10bd5a60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5a63 jne 0x10bd5a71 */
  if (!C.zf) goto L_10bd5a71;
  /* 10bd5a65 mov dword ptr [0x10bfe588], 1 */
  w32((uint32_t)(0x10bfe588), (0x1u));
  /* 10bd5a6f jmp 0x10bd5a8f */
  goto L_10bd5a8f;
L_10bd5a71:;
  /* 10bd5a71 call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bd5a77u);
  /* 10bd5a77 mov esi, eax */
  ESI = (EAX);
  /* 10bd5a79 call 0x10bda710 */
  push32(0x10bd5a7eu); f_10bda710();
  /* 10bd5a7e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10bd5a80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5a82 call 0x10bd62d0 */
  push32(0x10bd5a87u); f_10bd62d0();
  /* 10bd5a87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5a8a jmp 0x10bd5be8 */
  goto L_10bd5be8;
L_10bd5a8f:;
  /* 10bd5a8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5a92 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd5a95 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd5a98 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5a9b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bd5a9e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5aa2 ja 0x10bd5b02 */
  if ((!C.cf&&!C.zf)) goto L_10bd5b02;
  /* 10bd5aa4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd5aa7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd5aa9 mov dl, byte ptr [eax + 0x10bd5c0f] */
  DL = (r8((uint32_t)(EAX + 0x10bd5c0f)));
  /* 10bd5aaf jmp dword ptr [edx*4 + 0x10bd5bfb] */
  switch (EDX) {
    case 0: goto L_10bd5ab6;
    case 1: goto L_10bd5af0;
    case 2: goto L_10bd5aca;
    case 3: goto L_10bd5add;
    case 4: goto L_10bd5b02;
    default: x86_unimpl("switch@0x10bd5aaf out of table"); return;
  }
L_10bd5ab6:;
  /* 10bd5ab6 mov ecx, dword ptr [0x10bfe578] */
  ECX = (r32((uint32_t)(0x10bfe578)));
  /* 10bd5abc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bd5abf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5ac2 mov dword ptr [0x10bfe578], edx */
  w32((uint32_t)(0x10bfe578), (EDX));
  /* 10bd5ac8 jmp 0x10bd5b02 */
  goto L_10bd5b02;
L_10bd5aca:;
  /* 10bd5aca mov eax, dword ptr [0x10bfe57c] */
  EAX = (r32((uint32_t)(0x10bfe57c)));
  /* 10bd5acf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd5ad2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5ad5 mov dword ptr [0x10bfe57c], ecx */
  w32((uint32_t)(0x10bfe57c), (ECX));
  /* 10bd5adb jmp 0x10bd5b02 */
  goto L_10bd5b02;
L_10bd5add:;
  /* 10bd5add mov edx, dword ptr [0x10bfe580] */
  EDX = (r32((uint32_t)(0x10bfe580)));
  /* 10bd5ae3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10bd5ae6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5ae9 mov dword ptr [0x10bfe580], eax */
  w32((uint32_t)(0x10bfe580), (EAX));
  /* 10bd5aee jmp 0x10bd5b02 */
  goto L_10bd5b02;
L_10bd5af0:;
  /* 10bd5af0 mov ecx, dword ptr [0x10bfe584] */
  ECX = (r32((uint32_t)(0x10bfe584)));
  /* 10bd5af6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bd5af9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5afc mov dword ptr [0x10bfe584], edx */
  w32((uint32_t)(0x10bfe584), (EDX));
L_10bd5b02:;
  /* 10bd5b02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5b04 call 0x10bd62d0 */
  push32(0x10bd5b09u); f_10bd62d0();
  /* 10bd5b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5b0c jmp 0x10bd5be3 */
  goto L_10bd5be3;
L_10bd5b11:;
  /* 10bd5b11 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5b15 je 0x10bd5b28 */
  if (C.zf) goto L_10bd5b28;
  /* 10bd5b17 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5b1b je 0x10bd5b28 */
  if (C.zf) goto L_10bd5b28;
  /* 10bd5b1d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5b21 je 0x10bd5b28 */
  if (C.zf) goto L_10bd5b28;
  /* 10bd5b23 jmp 0x10bd5be8 */
  goto L_10bd5be8;
L_10bd5b28:;
  /* 10bd5b28 call 0x10bd2270 */
  push32(0x10bd5b2du); f_10bd2270();
  /* 10bd5b2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd5b30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5b33 cmp dword ptr [eax + 0x50], 0x10bfcc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10bfcc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5b3a jne 0x10bd5b85 */
  if (!C.zf) goto L_10bd5b85;
  /* 10bd5b3c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10bd5b41 push 0x10bf9e08 */
  push32((uint32_t)(0x10bf9e08u));
  /* 10bd5b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd5b48 mov ecx, dword ptr [0x10bfcc80] */
  ECX = (r32((uint32_t)(0x10bfcc80)));
  /* 10bd5b4e push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5b4f call 0x10bd2830 */
  push32(0x10bd5b54u); f_10bd2830();
  /* 10bd5b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5b57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5b5a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10bd5b5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5b60 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5b64 je 0x10bd5b83 */
  if (C.zf) goto L_10bd5b83;
  /* 10bd5b66 mov ecx, dword ptr [0x10bfcc80] */
  ECX = (r32((uint32_t)(0x10bfcc80)));
  /* 10bd5b6c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5b6d push 0x10bfcc00 */
  push32((uint32_t)(0x10bfcc00u));
  /* 10bd5b72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5b75 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10bd5b78 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5b79 call 0x10bd9110 */
  push32(0x10bd5b7eu); f_10bd9110();
  /* 10bd5b7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5b81 jmp 0x10bd5b85 */
  goto L_10bd5b85;
L_10bd5b83:;
  /* 10bd5b83 jmp 0x10bd5be8 */
  goto L_10bd5be8;
L_10bd5b85:;
  /* 10bd5b85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5b88 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10bd5b8b push edx */
  push32((uint32_t)(EDX));
  /* 10bd5b8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5b8f push eax */
  push32((uint32_t)(EAX));
  /* 10bd5b90 call 0x10bd5f10 */
  push32(0x10bd5b95u); f_10bd5f10();
  /* 10bd5b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5b98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd5b9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5b9f jne 0x10bd5ba3 */
  if (!C.zf) goto L_10bd5ba3;
  /* 10bd5ba1 jmp 0x10bd5be8 */
  goto L_10bd5be8;
L_10bd5ba3:;
  /* 10bd5ba3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5ba6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd5ba9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10bd5bac:;
  /* 10bd5bac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5baf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd5bb2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5bb5 jne 0x10bd5be3 */
  if (!C.zf) goto L_10bd5be3;
  /* 10bd5bb7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5bba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5bbd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bd5bc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5bc3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5bc6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd5bc9 mov edx, dword ptr [0x10bfcc84] */
  EDX = (r32((uint32_t)(0x10bfcc84)));
  /* 10bd5bcf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd5bd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5bd5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10bd5bd8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5bda cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5bdd jb 0x10bd5be1 */
  if (C.cf) goto L_10bd5be1;
  /* 10bd5bdf jmp 0x10bd5be3 */
  goto L_10bd5be3;
L_10bd5be1:;
  /* 10bd5be1 jmp 0x10bd5bac */
  goto L_10bd5bac;
L_10bd5be3:;
  /* 10bd5be3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd5be6 jmp 0x10bd5bf6 */
  goto L_10bd5bf6;
L_10bd5be8:;
  /* 10bd5be8 call 0x10bda700 */
  push32(0x10bd5bedu); f_10bda700();
  /* 10bd5bed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10bd5bf3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10bd5bf6:;
  /* 10bd5bf6 pop esi */
  ESI = (pop32());
  /* 10bd5bf7 mov esp, ebp */
  ESP = (EBP);
  /* 10bd5bf9 pop ebp */
  EBP = (pop32());
  /* 10bd5bfa ret  */
  ESPCHK(0x10bd5a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x10bd5c30 (146 bytes, 45 insns) */
void f_10bd5c30(void) {
  FTRACE(0x10bd5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5c31 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5c33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5c36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5c38 call 0x10bd6230 */
  push32(0x10bd5c3du); f_10bd6230();
  /* 10bd5c3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5c40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5c44 jne 0x10bd5c5e */
  if (!C.zf) goto L_10bd5c5e;
  /* 10bd5c46 mov dword ptr [ebp - 8], 0x10bfe578 */
  w32((uint32_t)(EBP + -0x8), (0x10bfe578u));
  /* 10bd5c4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5c50 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd5c52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bd5c55 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10bd5c5c jmp 0x10bd5c74 */
  goto L_10bd5c74;
L_10bd5c5e:;
  /* 10bd5c5e mov dword ptr [ebp - 8], 0x10bfe57c */
  w32((uint32_t)(EBP + -0x8), (0x10bfe57cu));
  /* 10bd5c65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5c68 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd5c6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd5c6d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10bd5c74:;
  /* 10bd5c74 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5c78 jne 0x10bd5c88 */
  if (!C.zf) goto L_10bd5c88;
  /* 10bd5c7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5c7c call 0x10bd62d0 */
  push32(0x10bd5c81u); f_10bd62d0();
  /* 10bd5c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5c86 jmp 0x10bd5cbc */
  goto L_10bd5cbc;
L_10bd5c88:;
  /* 10bd5c88 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5c8c je 0x10bd5cad */
  if (C.zf) goto L_10bd5cad;
  /* 10bd5c8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5c91 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10bd5c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5c99 call 0x10bd62d0 */
  push32(0x10bd5c9eu); f_10bd62d0();
  /* 10bd5c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5ca1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5ca4 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5ca5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10bd5ca8u);
  /* 10bd5ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5cab jmp 0x10bd5cb7 */
  goto L_10bd5cb7;
L_10bd5cad:;
  /* 10bd5cad push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5caf call 0x10bd62d0 */
  push32(0x10bd5cb4u); f_10bd62d0();
  /* 10bd5cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5cb7:;
  /* 10bd5cb7 mov eax, 1 */
  EAX = (0x1u);
L_10bd5cbc:;
  /* 10bd5cbc mov esp, ebp */
  ESP = (EBP);
  /* 10bd5cbe pop ebp */
  EBP = (pop32());
  /* 10bd5cbf ret 4 */
  ESPCHK(0x10bd5c30u, _esp0);
  ESP += 8; return;
}

/* FUN_10005cd0 @ 0x10bd5cd0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10bd5cd0(void) {
  FTRACE(0x10bd5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5cd3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5cd6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bd5cdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5ce0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bd5ce3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd5ce6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5ce9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10bd5cec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5cf0 ja 0x10bd5d9e */
  if ((!C.cf&&!C.zf)) goto L_10bd5d9e;
  /* 10bd5cf6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd5cf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd5cfb mov dl, byte ptr [eax + 0x10bd5ef2] */
  DL = (r8((uint32_t)(EAX + 0x10bd5ef2)));
  /* 10bd5d01 jmp dword ptr [edx*4 + 0x10bd5eda] */
  switch (EDX) {
    case 0: goto L_10bd5d08;
    case 1: goto L_10bd5d73;
    case 2: goto L_10bd5d59;
    case 3: goto L_10bd5d25;
    case 4: goto L_10bd5d3f;
    case 5: goto L_10bd5d9e;
    default: x86_unimpl("switch@0x10bd5d01 out of table"); return;
  }
L_10bd5d08:;
  /* 10bd5d08 mov dword ptr [ebp - 0x18], 0x10bfe578 */
  w32((uint32_t)(EBP + -0x18), (0x10bfe578u));
  /* 10bd5d0f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd5d12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd5d14 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10bd5d17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd5d1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5d1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd5d20 jmp 0x10bd5da6 */
  goto L_10bd5da6;
L_10bd5d25:;
  /* 10bd5d25 mov dword ptr [ebp - 0x18], 0x10bfe57c */
  w32((uint32_t)(EBP + -0x18), (0x10bfe57cu));
  /* 10bd5d2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd5d2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd5d31 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10bd5d34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd5d37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5d3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd5d3d jmp 0x10bd5da6 */
  goto L_10bd5da6;
L_10bd5d3f:;
  /* 10bd5d3f mov dword ptr [ebp - 0x18], 0x10bfe580 */
  w32((uint32_t)(EBP + -0x18), (0x10bfe580u));
  /* 10bd5d46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd5d49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd5d4b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10bd5d4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd5d51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5d54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd5d57 jmp 0x10bd5da6 */
  goto L_10bd5da6;
L_10bd5d59:;
  /* 10bd5d59 mov dword ptr [ebp - 0x18], 0x10bfe584 */
  w32((uint32_t)(EBP + -0x18), (0x10bfe584u));
  /* 10bd5d60 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd5d63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd5d65 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10bd5d68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd5d6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5d6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd5d71 jmp 0x10bd5da6 */
  goto L_10bd5da6;
L_10bd5d73:;
  /* 10bd5d73 call 0x10bd2270 */
  push32(0x10bd5d78u); f_10bd2270();
  /* 10bd5d78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd5d7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5d7e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10bd5d81 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5d82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5d85 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5d86 call 0x10bd5f10 */
  push32(0x10bd5d8bu); f_10bd5f10();
  /* 10bd5d8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5d8e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5d91 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd5d94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd5d97 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd5d99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10bd5d9c jmp 0x10bd5da6 */
  goto L_10bd5da6;
L_10bd5d9e:;
  /* 10bd5d9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5da1 jmp 0x10bd5ed6 */
  goto L_10bd5ed6;
L_10bd5da6:;
  /* 10bd5da6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5daa je 0x10bd5db6 */
  if (C.zf) goto L_10bd5db6;
  /* 10bd5dac push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5dae call 0x10bd6230 */
  push32(0x10bd5db3u); f_10bd6230();
  /* 10bd5db3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5db6:;
  /* 10bd5db6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5dba jne 0x10bd5dd3 */
  if (!C.zf) goto L_10bd5dd3;
  /* 10bd5dbc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5dc0 je 0x10bd5dcc */
  if (C.zf) goto L_10bd5dcc;
  /* 10bd5dc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5dc4 call 0x10bd62d0 */
  push32(0x10bd5dc9u); f_10bd62d0();
  /* 10bd5dc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5dcc:;
  /* 10bd5dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5dce jmp 0x10bd5ed6 */
  goto L_10bd5ed6;
L_10bd5dd3:;
  /* 10bd5dd3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5dd7 jne 0x10bd5df0 */
  if (!C.zf) goto L_10bd5df0;
  /* 10bd5dd9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5ddd je 0x10bd5de9 */
  if (C.zf) goto L_10bd5de9;
  /* 10bd5ddf push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5de1 call 0x10bd62d0 */
  push32(0x10bd5de6u); f_10bd62d0();
  /* 10bd5de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5de9:;
  /* 10bd5de9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10bd5deb call 0x10bd1ff0 */
  push32(0x10bd5df0u); f_10bd1ff0();
L_10bd5df0:;
  /* 10bd5df0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5df4 je 0x10bd5e02 */
  if (C.zf) goto L_10bd5e02;
  /* 10bd5df6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5dfa je 0x10bd5e02 */
  if (C.zf) goto L_10bd5e02;
  /* 10bd5dfc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5e00 jne 0x10bd5e2e */
  if (!C.zf) goto L_10bd5e2e;
L_10bd5e02:;
  /* 10bd5e02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5e05 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10bd5e08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bd5e0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5e0e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10bd5e15 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5e19 jne 0x10bd5e2e */
  if (!C.zf) goto L_10bd5e2e;
  /* 10bd5e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5e1e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10bd5e21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd5e24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5e27 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10bd5e2e:;
  /* 10bd5e2e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5e32 jne 0x10bd5e70 */
  if (!C.zf) goto L_10bd5e70;
  /* 10bd5e34 mov eax, dword ptr [0x10bfcc78] */
  EAX = (r32((uint32_t)(0x10bfcc78)));
  /* 10bd5e39 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd5e3c jmp 0x10bd5e47 */
  goto L_10bd5e47;
L_10bd5e3e:;
  /* 10bd5e3e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd5e41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5e44 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10bd5e47:;
  /* 10bd5e47 mov edx, dword ptr [0x10bfcc78] */
  EDX = (r32((uint32_t)(0x10bfcc78)));
  /* 10bd5e4d add edx, dword ptr [0x10bfcc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bfcc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5e53 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5e56 jge 0x10bd5e6e */
  if ((C.sf==C.of)) goto L_10bd5e6e;
  /* 10bd5e58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd5e5b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd5e5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5e61 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10bd5e64 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10bd5e6c jmp 0x10bd5e3e */
  goto L_10bd5e3e;
L_10bd5e6e:;
  /* 10bd5e6e jmp 0x10bd5e79 */
  goto L_10bd5e79;
L_10bd5e70:;
  /* 10bd5e70 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd5e73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10bd5e79:;
  /* 10bd5e79 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5e7d je 0x10bd5e89 */
  if (C.zf) goto L_10bd5e89;
  /* 10bd5e7f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd5e81 call 0x10bd62d0 */
  push32(0x10bd5e86u); f_10bd62d0();
  /* 10bd5e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5e89:;
  /* 10bd5e89 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5e8d jne 0x10bd5ea0 */
  if (!C.zf) goto L_10bd5ea0;
  /* 10bd5e8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5e92 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10bd5e95 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5e96 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bd5e98 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10bd5e9bu);
  /* 10bd5e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5e9e jmp 0x10bd5eaa */
  goto L_10bd5eaa;
L_10bd5ea0:;
  /* 10bd5ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd5ea3 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5ea4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10bd5ea7u);
  /* 10bd5ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd5eaa:;
  /* 10bd5eaa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5eae je 0x10bd5ebc */
  if (C.zf) goto L_10bd5ebc;
  /* 10bd5eb0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5eb4 je 0x10bd5ebc */
  if (C.zf) goto L_10bd5ebc;
  /* 10bd5eb6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5eba jne 0x10bd5ed4 */
  if (!C.zf) goto L_10bd5ed4;
L_10bd5ebc:;
  /* 10bd5ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5ebf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd5ec2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10bd5ec5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5ec9 jne 0x10bd5ed4 */
  if (!C.zf) goto L_10bd5ed4;
  /* 10bd5ecb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5ece mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5ed1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10bd5ed4:;
  /* 10bd5ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd5ed6:;
  /* 10bd5ed6 mov esp, ebp */
  ESP = (EBP);
  /* 10bd5ed8 pop ebp */
  EBP = (pop32());
  /* 10bd5ed9 ret  */
  ESPCHK(0x10bd5cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x10bd5f10 (91 bytes, 35 insns) */
void f_10bd5f10(void) {
  FTRACE(0x10bd5f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5f11 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5f14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5f17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd5f1a:;
  /* 10bd5f1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5f1d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd5f20 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5f23 je 0x10bd5f43 */
  if (C.zf) goto L_10bd5f43;
  /* 10bd5f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5f28 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5f2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd5f2e mov ecx, dword ptr [0x10bfcc84] */
  ECX = (r32((uint32_t)(0x10bfcc84)));
  /* 10bd5f34 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd5f37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5f3a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5f3c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5f3f jae 0x10bd5f43 */
  if (!C.cf) goto L_10bd5f43;
  /* 10bd5f41 jmp 0x10bd5f1a */
  goto L_10bd5f1a;
L_10bd5f43:;
  /* 10bd5f43 mov eax, dword ptr [0x10bfcc84] */
  EAX = (r32((uint32_t)(0x10bfcc84)));
  /* 10bd5f48 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd5f4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd5f4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5f50 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5f53 jae 0x10bd5f65 */
  if (!C.cf) goto L_10bd5f65;
  /* 10bd5f55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5f58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd5f5b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5f5e jne 0x10bd5f65 */
  if (!C.zf) goto L_10bd5f65;
  /* 10bd5f60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd5f63 jmp 0x10bd5f67 */
  goto L_10bd5f67;
L_10bd5f65:;
  /* 10bd5f65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd5f67:;
  /* 10bd5f67 mov esp, ebp */
  ESP = (EBP);
  /* 10bd5f69 pop ebp */
  EBP = (pop32());
  /* 10bd5f6a ret  */
  ESPCHK(0x10bd5f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f70 @ 0x10bd5f70 (13 bytes, 6 insns) */
void f_10bd5f70(void) {
  FTRACE(0x10bd5f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5f71 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5f73 call 0x10bd2270 */
  push32(0x10bd5f78u); f_10bd2270();
  /* 10bd5f78 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5f7b pop ebp */
  EBP = (pop32());
  /* 10bd5f7c ret  */
  ESPCHK(0x10bd5f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f80 @ 0x10bd5f80 (13 bytes, 6 insns) */
void f_10bd5f80(void) {
  FTRACE(0x10bd5f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5f81 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5f83 call 0x10bd2270 */
  push32(0x10bd5f88u); f_10bd2270();
  /* 10bd5f88 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd5f8b pop ebp */
  EBP = (pop32());
  /* 10bd5f8c ret  */
  ESPCHK(0x10bd5f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f90 @ 0x10bd5f90 (187 bytes, 54 insns) */
void f_10bd5f90(void) {
  FTRACE(0x10bd5f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd5f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd5f91 mov ebp, esp */
  EBP = (ESP);
  /* 10bd5f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd5f96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd5f9d cmp dword ptr [0x10bfe58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5fa4 jne 0x10bd6003 */
  if (!C.zf) goto L_10bd6003;
  /* 10bd5fa6 push 0x10bf9234 */
  push32((uint32_t)(0x10bf9234u));
  /* 10bd5fab call dword ptr [0x10c00258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00258))), 0x10bd5fb1u);
  /* 10bd5fb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd5fb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5fb8 je 0x10bd5fd7 */
  if (C.zf) goto L_10bd5fd7;
  /* 10bd5fba push 0x10bf9e38 */
  push32((uint32_t)(0x10bf9e38u));
  /* 10bd5fbf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5fc2 push eax */
  push32((uint32_t)(EAX));
  /* 10bd5fc3 call dword ptr [0x10c00254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00254))), 0x10bd5fc9u);
  /* 10bd5fc9 mov dword ptr [0x10bfe58c], eax */
  w32((uint32_t)(0x10bfe58c), (EAX));
  /* 10bd5fce cmp dword ptr [0x10bfe58c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe58c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd5fd5 jne 0x10bd5fdb */
  if (!C.zf) goto L_10bd5fdb;
L_10bd5fd7:;
  /* 10bd5fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd5fd9 jmp 0x10bd6047 */
  goto L_10bd6047;
L_10bd5fdb:;
  /* 10bd5fdb push 0x10bf9e28 */
  push32((uint32_t)(0x10bf9e28u));
  /* 10bd5fe0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd5fe4 call dword ptr [0x10c00254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00254))), 0x10bd5feau);
  /* 10bd5fea mov dword ptr [0x10bfe590], eax */
  w32((uint32_t)(0x10bfe590), (EAX));
  /* 10bd5fef push 0x10bf9e14 */
  push32((uint32_t)(0x10bf9e14u));
  /* 10bd5ff4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd5ff7 push edx */
  push32((uint32_t)(EDX));
  /* 10bd5ff8 call dword ptr [0x10c00254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00254))), 0x10bd5ffeu);
  /* 10bd5ffe mov dword ptr [0x10bfe594], eax */
  w32((uint32_t)(0x10bfe594), (EAX));
L_10bd6003:;
  /* 10bd6003 cmp dword ptr [0x10bfe590], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe590))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd600a je 0x10bd6015 */
  if (C.zf) goto L_10bd6015;
  /* 10bd600c call dword ptr [0x10bfe590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe590))), 0x10bd6012u);
  /* 10bd6012 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd6015:;
  /* 10bd6015 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6019 je 0x10bd6031 */
  if (C.zf) goto L_10bd6031;
  /* 10bd601b cmp dword ptr [0x10bfe594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6022 je 0x10bd6031 */
  if (C.zf) goto L_10bd6031;
  /* 10bd6024 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6027 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6028 call dword ptr [0x10bfe594] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe594))), 0x10bd602eu);
  /* 10bd602e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd6031:;
  /* 10bd6031 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd6034 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6035 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6038 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6039 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd603c push eax */
  push32((uint32_t)(EAX));
  /* 10bd603d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6040 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6041 call dword ptr [0x10bfe58c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe58c))), 0x10bd6047u);
L_10bd6047:;
  /* 10bd6047 mov esp, ebp */
  ESP = (EBP);
  /* 10bd6049 pop ebp */
  EBP = (pop32());
  /* 10bd604a ret  */
  ESPCHK(0x10bd5f90u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10bd6050 (254 bytes, 109 insns) */
void f_10bd6050(void) {
  FTRACE(0x10bd6050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6050 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bd6054 push edi */
  push32((uint32_t)(EDI));
  /* 10bd6055 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd6057 je 0x10bd60d3 */
  if (C.zf) goto L_10bd60d3;
  /* 10bd6059 push esi */
  push32((uint32_t)(ESI));
  /* 10bd605a push ebx */
  push32((uint32_t)(EBX));
  /* 10bd605b mov ebx, ecx */
  EBX = (ECX);
  /* 10bd605d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10bd6061 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10bd6067 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10bd606b jne 0x10bd6074 */
  if (!C.zf) goto L_10bd6074;
  /* 10bd606d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd6070 jne 0x10bd60e1 */
  if (!C.zf) goto L_10bd60e1;
  /* 10bd6072 jmp 0x10bd6095 */
  goto L_10bd6095;
L_10bd6074:;
  /* 10bd6074 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bd6076 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bd6077 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd6079 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bd607a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bd607b je 0x10bd60a2 */
  if (C.zf) goto L_10bd60a2;
  /* 10bd607d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bd607f je 0x10bd60aa */
  if (C.zf) goto L_10bd60aa;
  /* 10bd6081 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10bd6087 jne 0x10bd6074 */
  if (!C.zf) goto L_10bd6074;
  /* 10bd6089 mov ebx, ecx */
  EBX = (ECX);
  /* 10bd608b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd608e jne 0x10bd60e1 */
  if (!C.zf) goto L_10bd60e1;
L_10bd6090:;
  /* 10bd6090 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10bd6093 je 0x10bd60a2 */
  if (C.zf) goto L_10bd60a2;
L_10bd6095:;
  /* 10bd6095 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bd6097 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bd6098 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd609a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bd609b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10bd609d je 0x10bd60ce */
  if (C.zf) goto L_10bd60ce;
  /* 10bd609f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bd60a0 jne 0x10bd6095 */
  if (!C.zf) goto L_10bd6095;
L_10bd60a2:;
  /* 10bd60a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bd60a6 pop ebx */
  EBX = (pop32());
  /* 10bd60a7 pop esi */
  ESI = (pop32());
  /* 10bd60a8 pop edi */
  EDI = (pop32());
  /* 10bd60a9 ret  */
  ESPCHK(0x10bd6050u, _esp0);
  ESP += 4; return;
L_10bd60aa:;
  /* 10bd60aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bd60b0 je 0x10bd60c4 */
  if (C.zf) goto L_10bd60c4;
L_10bd60b2:;
  /* 10bd60b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd60b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bd60b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bd60b6 je 0x10bd6146 */
  if (C.zf) goto L_10bd6146;
  /* 10bd60bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bd60c2 jne 0x10bd60b2 */
  if (!C.zf) goto L_10bd60b2;
L_10bd60c4:;
  /* 10bd60c4 mov ebx, ecx */
  EBX = (ECX);
  /* 10bd60c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd60c9 jne 0x10bd6137 */
  if (!C.zf) goto L_10bd6137;
L_10bd60cb:;
  /* 10bd60cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd60cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10bd60ce:;
  /* 10bd60ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10bd60cf jne 0x10bd60cb */
  if (!C.zf) goto L_10bd60cb;
  /* 10bd60d1 pop ebx */
  EBX = (pop32());
  /* 10bd60d2 pop esi */
  ESI = (pop32());
L_10bd60d3:;
  /* 10bd60d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bd60d7 pop edi */
  EDI = (pop32());
  /* 10bd60d8 ret  */
  ESPCHK(0x10bd6050u, _esp0);
  ESP += 4; return;
L_10bd60d9:;
  /* 10bd60d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bd60db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd60de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bd60df je 0x10bd6090 */
  if (C.zf) goto L_10bd6090;
L_10bd60e1:;
  /* 10bd60e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10bd60e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10bd60e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd60ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd60ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd60ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10bd60f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd60f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10bd60f9 je 0x10bd60d9 */
  if (C.zf) goto L_10bd60d9;
  /* 10bd60fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10bd60fd je 0x10bd612b */
  if (C.zf) goto L_10bd612b;
  /* 10bd60ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10bd6101 je 0x10bd6121 */
  if (C.zf) goto L_10bd6121;
  /* 10bd6103 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10bd6109 je 0x10bd6117 */
  if (C.zf) goto L_10bd6117;
  /* 10bd610b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10bd6111 jne 0x10bd60d9 */
  if (!C.zf) goto L_10bd60d9;
  /* 10bd6113 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bd6115 jmp 0x10bd612f */
  goto L_10bd612f;
L_10bd6117:;
  /* 10bd6117 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd611d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bd611f jmp 0x10bd612f */
  goto L_10bd612f;
L_10bd6121:;
  /* 10bd6121 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd6127 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10bd6129 jmp 0x10bd612f */
  goto L_10bd612f;
L_10bd612b:;
  /* 10bd612b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd612d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10bd612f:;
  /* 10bd612f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6132 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd6134 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bd6135 je 0x10bd6141 */
  if (C.zf) goto L_10bd6141;
L_10bd6137:;
  /* 10bd6137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd6139:;
  /* 10bd6139 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10bd613b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd613e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bd613f jne 0x10bd6139 */
  if (!C.zf) goto L_10bd6139;
L_10bd6141:;
  /* 10bd6141 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10bd6144 jne 0x10bd60cb */
  if (!C.zf) goto L_10bd60cb;
L_10bd6146:;
  /* 10bd6146 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bd614a pop ebx */
  EBX = (pop32());
  /* 10bd614b pop esi */
  ESI = (pop32());
  /* 10bd614c pop edi */
  EDI = (pop32());
  /* 10bd614d ret  */
  ESPCHK(0x10bd6050u, _esp0);
  ESP += 4; return;
}

/* FUN_10006150 @ 0x10bd6150 (55 bytes, 16 insns) */
void f_10bd6150(void) {
  FTRACE(0x10bd6150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6150 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6151 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6153 mov eax, dword ptr [0x10bfcb84] */
  EAX = (r32((uint32_t)(0x10bfcb84)));
  /* 10bd6158 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6159 call dword ptr [0x10c002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d4))), 0x10bd615fu);
  /* 10bd615f mov ecx, dword ptr [0x10bfcb74] */
  ECX = (r32((uint32_t)(0x10bfcb74)));
  /* 10bd6165 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6166 call dword ptr [0x10c002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d4))), 0x10bd616cu);
  /* 10bd616c mov edx, dword ptr [0x10bfcb64] */
  EDX = (r32((uint32_t)(0x10bfcb64)));
  /* 10bd6172 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6173 call dword ptr [0x10c002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d4))), 0x10bd6179u);
  /* 10bd6179 mov eax, dword ptr [0x10bfcb44] */
  EAX = (r32((uint32_t)(0x10bfcb44)));
  /* 10bd617e push eax */
  push32((uint32_t)(EAX));
  /* 10bd617f call dword ptr [0x10c002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d4))), 0x10bd6185u);
  /* 10bd6185 pop ebp */
  EBP = (pop32());
  /* 10bd6186 ret  */
  ESPCHK(0x10bd6150u, _esp0);
  ESP += 4; return;
}

/* FUN_10006190 @ 0x10bd6190 (159 bytes, 47 insns) */
void f_10bd6190(void) {
  FTRACE(0x10bd6190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6190 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6191 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6193 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6194 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd619b jmp 0x10bd61a6 */
  goto L_10bd61a6;
L_10bd619d:;
  /* 10bd619d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd61a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd61a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd61a6:;
  /* 10bd61a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd61aa jge 0x10bd61f9 */
  if ((C.sf==C.of)) goto L_10bd61f9;
  /* 10bd61ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd61af cmp dword ptr [ecx*4 + 0x10bfcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10bfcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd61b7 je 0x10bd61f7 */
  if (C.zf) goto L_10bd61f7;
  /* 10bd61b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd61bd je 0x10bd61f7 */
  if (C.zf) goto L_10bd61f7;
  /* 10bd61bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd61c3 je 0x10bd61f7 */
  if (C.zf) goto L_10bd61f7;
  /* 10bd61c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd61c9 je 0x10bd61f7 */
  if (C.zf) goto L_10bd61f7;
  /* 10bd61cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd61cf je 0x10bd61f7 */
  if (C.zf) goto L_10bd61f7;
  /* 10bd61d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd61d4 mov eax, dword ptr [edx*4 + 0x10bfcb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bfcb40)));
  /* 10bd61db push eax */
  push32((uint32_t)(EAX));
  /* 10bd61dc call dword ptr [0x10c0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0029c))), 0x10bd61e2u);
  /* 10bd61e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd61e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd61e7 mov edx, dword ptr [ecx*4 + 0x10bfcb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bfcb40)));
  /* 10bd61ee push edx */
  push32((uint32_t)(EDX));
  /* 10bd61ef call 0x10bd32c0 */
  push32(0x10bd61f4u); f_10bd32c0();
  /* 10bd61f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd61f7:;
  /* 10bd61f7 jmp 0x10bd619d */
  goto L_10bd619d;
L_10bd61f9:;
  /* 10bd61f9 mov eax, dword ptr [0x10bfcb64] */
  EAX = (r32((uint32_t)(0x10bfcb64)));
  /* 10bd61fe push eax */
  push32((uint32_t)(EAX));
  /* 10bd61ff call dword ptr [0x10c0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0029c))), 0x10bd6205u);
  /* 10bd6205 mov ecx, dword ptr [0x10bfcb74] */
  ECX = (r32((uint32_t)(0x10bfcb74)));
  /* 10bd620b push ecx */
  push32((uint32_t)(ECX));
  /* 10bd620c call dword ptr [0x10c0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0029c))), 0x10bd6212u);
  /* 10bd6212 mov edx, dword ptr [0x10bfcb84] */
  EDX = (r32((uint32_t)(0x10bfcb84)));
  /* 10bd6218 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6219 call dword ptr [0x10c0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0029c))), 0x10bd621fu);
  /* 10bd621f mov eax, dword ptr [0x10bfcb44] */
  EAX = (r32((uint32_t)(0x10bfcb44)));
  /* 10bd6224 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6225 call dword ptr [0x10c0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0029c))), 0x10bd622bu);
  /* 10bd622b mov esp, ebp */
  ESP = (EBP);
  /* 10bd622d pop ebp */
  EBP = (pop32());
  /* 10bd622e ret  */
  ESPCHK(0x10bd6190u, _esp0);
  ESP += 4; return;
}

/* FUN_10006230 @ 0x10bd6230 (151 bytes, 46 insns) */
void f_10bd6230(void) {
  FTRACE(0x10bd6230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6230 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6231 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6233 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6237 cmp dword ptr [eax*4 + 0x10bfcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10bfcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd623f jne 0x10bd62b2 */
  if (!C.zf) goto L_10bd62b2;
  /* 10bd6241 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10bd6246 push 0x10bf9e44 */
  push32((uint32_t)(0x10bf9e44u));
  /* 10bd624b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd624d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bd624f call 0x10bd2830 */
  push32(0x10bd6254u); f_10bd2830();
  /* 10bd6254 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6257 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd625a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd625e jne 0x10bd626a */
  if (!C.zf) goto L_10bd626a;
  /* 10bd6260 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bd6262 call 0x10bd17a0 */
  push32(0x10bd6267u); f_10bd17a0();
  /* 10bd6267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd626a:;
  /* 10bd626a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bd626c call 0x10bd6230 */
  push32(0x10bd6271u); f_10bd6230();
  /* 10bd6271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6274 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6277 cmp dword ptr [ecx*4 + 0x10bfcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10bfcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd627f jne 0x10bd629a */
  if (!C.zf) goto L_10bd629a;
  /* 10bd6281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6284 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6285 call dword ptr [0x10c002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d4))), 0x10bd628bu);
  /* 10bd628b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd628e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6291 mov dword ptr [eax*4 + 0x10bfcb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10bfcb40), (ECX));
  /* 10bd6298 jmp 0x10bd62a8 */
  goto L_10bd62a8;
L_10bd629a:;
  /* 10bd629a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd629c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd629f push edx */
  push32((uint32_t)(EDX));
  /* 10bd62a0 call 0x10bd32c0 */
  push32(0x10bd62a5u); f_10bd32c0();
  /* 10bd62a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd62a8:;
  /* 10bd62a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bd62aa call 0x10bd62d0 */
  push32(0x10bd62afu); f_10bd62d0();
  /* 10bd62af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd62b2:;
  /* 10bd62b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd62b5 mov ecx, dword ptr [eax*4 + 0x10bfcb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10bfcb40)));
  /* 10bd62bc push ecx */
  push32((uint32_t)(ECX));
  /* 10bd62bd call dword ptr [0x10c002d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d8))), 0x10bd62c3u);
  /* 10bd62c3 mov esp, ebp */
  ESP = (EBP);
  /* 10bd62c5 pop ebp */
  EBP = (pop32());
  /* 10bd62c6 ret  */
  ESPCHK(0x10bd6230u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x10bd62d0 (22 bytes, 8 insns) */
void f_10bd62d0(void) {
  FTRACE(0x10bd62d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd62d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd62d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd62d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd62d6 mov ecx, dword ptr [eax*4 + 0x10bfcb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10bfcb40)));
  /* 10bd62dd push ecx */
  push32((uint32_t)(ECX));
  /* 10bd62de call dword ptr [0x10c002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002dc))), 0x10bd62e4u);
  /* 10bd62e4 pop ebp */
  EBP = (pop32());
  /* 10bd62e5 ret  */
  ESPCHK(0x10bd62d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x10bd62f0 (26 bytes, 10 insns) */
void f_10bd62f0(void) {
  FTRACE(0x10bd62f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd62f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd62f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd62f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd62f6 push eax */
  push32((uint32_t)(EAX));
  /* 10bd62f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd62f9 call dword ptr [0x10c002e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002e0))), 0x10bd62ffu);
  /* 10bd62ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 10bd6304 call dword ptr [0x10c00264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00264))), 0x10bd630au);
  /* 10bd630a pop ebp */
  EBP = (pop32());
  /* 10bd630b ret  */
  ESPCHK(0x10bd62f0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10bd6310 (446 bytes, 130 insns) */
void f_10bd6310(void) {
  FTRACE(0x10bd6310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6310 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6311 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6313 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6316 call 0x10bd2270 */
  push32(0x10bd631bu); f_10bd2270();
  /* 10bd631b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd631e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6321 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10bd6324 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6328 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6329 call 0x10bd64d0 */
  push32(0x10bd632eu); f_10bd64d0();
  /* 10bd632e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6331 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd6334 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6338 je 0x10bd6343 */
  if (C.zf) goto L_10bd6343;
  /* 10bd633a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd633d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6341 jne 0x10bd6352 */
  if (!C.zf) goto L_10bd6352;
L_10bd6343:;
  /* 10bd6343 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6346 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6347 call dword ptr [0x10c002e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002e4))), 0x10bd634du);
  /* 10bd634d jmp 0x10bd64ca */
  goto L_10bd64ca;
L_10bd6352:;
  /* 10bd6352 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd6355 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6359 jne 0x10bd636f */
  if (!C.zf) goto L_10bd636f;
  /* 10bd635b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd635e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10bd6365 mov eax, 1 */
  EAX = (0x1u);
  /* 10bd636a jmp 0x10bd64ca */
  goto L_10bd64ca;
L_10bd636f:;
  /* 10bd636f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd6372 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6376 jne 0x10bd6380 */
  if (!C.zf) goto L_10bd6380;
  /* 10bd6378 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd637b jmp 0x10bd64ca */
  goto L_10bd64ca;
L_10bd6380:;
  /* 10bd6380 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd6383 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bd6386 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd6389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd638c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10bd638f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10bd6392 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6395 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6398 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10bd639b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd639e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd63a2 jne 0x10bd64a7 */
  if (!C.zf) goto L_10bd64a7;
  /* 10bd63a8 mov eax, dword ptr [0x10bfcc78] */
  EAX = (r32((uint32_t)(0x10bfcc78)));
  /* 10bd63ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bd63b0 jmp 0x10bd63bb */
  goto L_10bd63bb;
L_10bd63b2:;
  /* 10bd63b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd63b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd63b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10bd63bb:;
  /* 10bd63bb mov edx, dword ptr [0x10bfcc78] */
  EDX = (r32((uint32_t)(0x10bfcc78)));
  /* 10bd63c1 add edx, dword ptr [0x10bfcc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bfcc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd63c7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd63ca jge 0x10bd63e2 */
  if ((C.sf==C.of)) goto L_10bd63e2;
  /* 10bd63cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd63cf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd63d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd63d5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10bd63d8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10bd63e0 jmp 0x10bd63b2 */
  goto L_10bd63b2;
L_10bd63e2:;
  /* 10bd63e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd63e5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10bd63e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bd63eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd63ee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd63f4 jne 0x10bd6405 */
  if (!C.zf) goto L_10bd6405;
  /* 10bd63f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd63f9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10bd6400 jmp 0x10bd648d */
  goto L_10bd648d;
L_10bd6405:;
  /* 10bd6405 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd6408 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd640e jne 0x10bd641c */
  if (!C.zf) goto L_10bd641c;
  /* 10bd6410 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6413 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10bd641a jmp 0x10bd648d */
  goto L_10bd648d;
L_10bd641c:;
  /* 10bd641c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd641f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6425 jne 0x10bd6433 */
  if (!C.zf) goto L_10bd6433;
  /* 10bd6427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd642a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10bd6431 jmp 0x10bd648d */
  goto L_10bd648d;
L_10bd6433:;
  /* 10bd6433 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd6436 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd643c jne 0x10bd644a */
  if (!C.zf) goto L_10bd644a;
  /* 10bd643e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6441 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10bd6448 jmp 0x10bd648d */
  goto L_10bd648d;
L_10bd644a:;
  /* 10bd644a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd644d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6453 jne 0x10bd6461 */
  if (!C.zf) goto L_10bd6461;
  /* 10bd6455 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6458 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10bd645f jmp 0x10bd648d */
  goto L_10bd648d;
L_10bd6461:;
  /* 10bd6461 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd6464 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd646a jne 0x10bd6478 */
  if (!C.zf) goto L_10bd6478;
  /* 10bd646c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd646f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10bd6476 jmp 0x10bd648d */
  goto L_10bd648d;
L_10bd6478:;
  /* 10bd6478 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd647b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6481 jne 0x10bd648d */
  if (!C.zf) goto L_10bd648d;
  /* 10bd6483 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6486 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10bd648d:;
  /* 10bd648d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6490 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10bd6493 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6494 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bd6496 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10bd6499u);
  /* 10bd6499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd649c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd649f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd64a2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10bd64a5 jmp 0x10bd64be */
  goto L_10bd64be;
L_10bd64a7:;
  /* 10bd64a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd64aa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10bd64b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd64b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd64b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd64b8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10bd64bbu);
  /* 10bd64bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd64be:;
  /* 10bd64be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd64c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd64c4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10bd64c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10bd64ca:;
  /* 10bd64ca mov esp, ebp */
  ESP = (EBP);
  /* 10bd64cc pop ebp */
  EBP = (pop32());
  /* 10bd64cd ret  */
  ESPCHK(0x10bd6310u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x10bd64d0 (89 bytes, 35 insns) */
void f_10bd64d0(void) {
  FTRACE(0x10bd64d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd64d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd64d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd64d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd64d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd64d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd64da:;
  /* 10bd64da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd64dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd64df cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd64e2 je 0x10bd6502 */
  if (C.zf) goto L_10bd6502;
  /* 10bd64e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd64e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd64ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd64ed mov ecx, dword ptr [0x10bfcc84] */
  ECX = (r32((uint32_t)(0x10bfcc84)));
  /* 10bd64f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd64f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd64f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd64fb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd64fe jae 0x10bd6502 */
  if (!C.cf) goto L_10bd6502;
  /* 10bd6500 jmp 0x10bd64da */
  goto L_10bd64da;
L_10bd6502:;
  /* 10bd6502 mov eax, dword ptr [0x10bfcc84] */
  EAX = (r32((uint32_t)(0x10bfcc84)));
  /* 10bd6507 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd650a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd650d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd650f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6512 jae 0x10bd651e */
  if (!C.cf) goto L_10bd651e;
  /* 10bd6514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6517 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd6519 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd651c je 0x10bd6522 */
  if (C.zf) goto L_10bd6522;
L_10bd651e:;
  /* 10bd651e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd6520 jmp 0x10bd6525 */
  goto L_10bd6525;
L_10bd6522:;
  /* 10bd6522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bd6525:;
  /* 10bd6525 mov esp, ebp */
  ESP = (EBP);
  /* 10bd6527 pop ebp */
  EBP = (pop32());
  /* 10bd6528 ret  */
  ESPCHK(0x10bd64d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10bd6530 (48 bytes, 17 insns) */
void f_10bd6530(void) {
  FTRACE(0x10bd6530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6530 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6531 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6533 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6534 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6536 call 0x10bd6230 */
  push32(0x10bd653bu); f_10bd6230();
  /* 10bd653b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd653e mov eax, dword ptr [0x10bfe5fc] */
  EAX = (r32((uint32_t)(0x10bfe5fc)));
  /* 10bd6543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd6546 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6549 mov dword ptr [0x10bfe5fc], ecx */
  w32((uint32_t)(0x10bfe5fc), (ECX));
  /* 10bd654f push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6551 call 0x10bd62d0 */
  push32(0x10bd6556u); f_10bd62d0();
  /* 10bd6556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd655c mov esp, ebp */
  ESP = (EBP);
  /* 10bd655e pop ebp */
  EBP = (pop32());
  /* 10bd655f ret  */
  ESPCHK(0x10bd6530u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x10bd6560 (10 bytes, 5 insns) */
void f_10bd6560(void) {
  FTRACE(0x10bd6560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6560 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6561 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6563 mov eax, dword ptr [0x10bfe5fc] */
  EAX = (r32((uint32_t)(0x10bfe5fc)));
  /* 10bd6568 pop ebp */
  EBP = (pop32());
  /* 10bd6569 ret  */
  ESPCHK(0x10bd6560u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10bd6570 (45 bytes, 19 insns) */
void f_10bd6570(void) {
  FTRACE(0x10bd6570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6570 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6571 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6573 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6574 mov eax, dword ptr [0x10bfe5fc] */
  EAX = (r32((uint32_t)(0x10bfe5fc)));
  /* 10bd6579 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd657c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6580 je 0x10bd6590 */
  if (C.zf) goto L_10bd6590;
  /* 10bd6582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6585 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6586 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10bd6589u);
  /* 10bd6589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd658c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd658e jne 0x10bd6594 */
  if (!C.zf) goto L_10bd6594;
L_10bd6590:;
  /* 10bd6590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd6592 jmp 0x10bd6599 */
  goto L_10bd6599;
L_10bd6594:;
  /* 10bd6594 mov eax, 1 */
  EAX = (0x1u);
L_10bd6599:;
  /* 10bd6599 mov esp, ebp */
  ESP = (EBP);
  /* 10bd659b pop ebp */
  EBP = (pop32());
  /* 10bd659c ret  */
  ESPCHK(0x10bd6570u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10bd65a0 (88 bytes, 40 insns) */
void f_10bd65a0(void) {
  FTRACE(0x10bd65a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd65a0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bd65a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bd65a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd65aa je 0x10bd65f3 */
  if (C.zf) goto L_10bd65f3;
  /* 10bd65ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd65ae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10bd65b2 push edi */
  push32((uint32_t)(EDI));
  /* 10bd65b3 mov edi, ecx */
  EDI = (ECX);
  /* 10bd65b5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd65b8 jb 0x10bd65e7 */
  if (C.cf) goto L_10bd65e7;
  /* 10bd65ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd65bc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd65bf je 0x10bd65c9 */
  if (C.zf) goto L_10bd65c9;
  /* 10bd65c1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10bd65c3:;
  /* 10bd65c3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd65c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bd65c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bd65c7 jne 0x10bd65c3 */
  if (!C.zf) goto L_10bd65c3;
L_10bd65c9:;
  /* 10bd65c9 mov ecx, eax */
  ECX = (EAX);
  /* 10bd65cb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10bd65ce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd65d0 mov ecx, eax */
  ECX = (EAX);
  /* 10bd65d2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10bd65d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd65d7 mov ecx, edx */
  ECX = (EDX);
  /* 10bd65d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd65dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd65df je 0x10bd65e7 */
  if (C.zf) goto L_10bd65e7;
  /* 10bd65e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10bd65e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd65e5 je 0x10bd65ed */
  if (C.zf) goto L_10bd65ed;
L_10bd65e7:;
  /* 10bd65e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd65e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bd65ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10bd65eb jne 0x10bd65e7 */
  if (!C.zf) goto L_10bd65e7;
L_10bd65ed:;
  /* 10bd65ed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bd65f1 pop edi */
  EDI = (pop32());
  /* 10bd65f2 ret  */
  ESPCHK(0x10bd65a0u, _esp0);
  ESP += 4; return;
L_10bd65f3:;
  /* 10bd65f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bd65f7 ret  */
  ESPCHK(0x10bd65a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x10bd6600 (23 bytes, 10 insns) */
void f_10bd6600(void) {
  FTRACE(0x10bd6600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6600 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6601 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6603 mov eax, dword ptr [0x10bfe5f8] */
  EAX = (r32((uint32_t)(0x10bfe5f8)));
  /* 10bd6608 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6609 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd660c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd660d call 0x10bd6620 */
  push32(0x10bd6612u); f_10bd6620();
  /* 10bd6612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6615 pop ebp */
  EBP = (pop32());
  /* 10bd6616 ret  */
  ESPCHK(0x10bd6600u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10bd6620 (87 bytes, 34 insns) */
void f_10bd6620(void) {
  FTRACE(0x10bd6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6620 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6621 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6623 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6624 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6628 jbe 0x10bd662e */
  if ((C.cf||C.zf)) goto L_10bd662e;
  /* 10bd662a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd662c jmp 0x10bd6673 */
  goto L_10bd6673;
L_10bd662e:;
  /* 10bd662e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6632 ja 0x10bd6645 */
  if ((!C.cf&&!C.zf)) goto L_10bd6645;
  /* 10bd6634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6637 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6638 call 0x10bd6680 */
  push32(0x10bd663du); f_10bd6680();
  /* 10bd663d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6640 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd6643 jmp 0x10bd664c */
  goto L_10bd664c;
L_10bd6645:;
  /* 10bd6645 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bd664c:;
  /* 10bd664c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6650 jne 0x10bd6658 */
  if (!C.zf) goto L_10bd6658;
  /* 10bd6652 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6656 jne 0x10bd665d */
  if (!C.zf) goto L_10bd665d;
L_10bd6658:;
  /* 10bd6658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd665b jmp 0x10bd6673 */
  goto L_10bd6673;
L_10bd665d:;
  /* 10bd665d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6660 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6661 call 0x10bd6570 */
  push32(0x10bd6666u); f_10bd6570();
  /* 10bd6666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd666b jne 0x10bd6671 */
  if (!C.zf) goto L_10bd6671;
  /* 10bd666d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd666f jmp 0x10bd6673 */
  goto L_10bd6673;
L_10bd6671:;
  /* 10bd6671 jmp 0x10bd662e */
  goto L_10bd662e;
L_10bd6673:;
  /* 10bd6673 mov esp, ebp */
  ESP = (EBP);
  /* 10bd6675 pop ebp */
  EBP = (pop32());
  /* 10bd6676 ret  */
  ESPCHK(0x10bd6620u, _esp0);
  ESP += 4; return;
}

/* FUN_10006680 @ 0x10bd6680 (109 bytes, 37 insns) */
void f_10bd6680(void) {
  FTRACE(0x10bd6680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6680 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6681 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6683 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6687 cmp eax, dword ptr [0x10bfcc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd668d ja 0x10bd66bd */
  if ((!C.cf&&!C.zf)) goto L_10bd66bd;
  /* 10bd668f push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6691 call 0x10bd6230 */
  push32(0x10bd6696u); f_10bd6230();
  /* 10bd6696 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd669c push ecx */
  push32((uint32_t)(ECX));
  /* 10bd669d call 0x10bd71c0 */
  push32(0x10bd66a2u); f_10bd71c0();
  /* 10bd66a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd66a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd66a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd66aa call 0x10bd62d0 */
  push32(0x10bd66afu); f_10bd62d0();
  /* 10bd66af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd66b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd66b6 je 0x10bd66bd */
  if (C.zf) goto L_10bd66bd;
  /* 10bd66b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd66bb jmp 0x10bd66e9 */
  goto L_10bd66e9;
L_10bd66bd:;
  /* 10bd66bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd66c1 jne 0x10bd66ca */
  if (!C.zf) goto L_10bd66ca;
  /* 10bd66c3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10bd66ca:;
  /* 10bd66ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd66cd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd66d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd66d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10bd66d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd66d9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd66da push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd66dc mov ecx, dword ptr [0x10bffdac] */
  ECX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd66e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd66e3 call dword ptr [0x10c002e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002e8))), 0x10bd66e9u);
L_10bd66e9:;
  /* 10bd66e9 mov esp, ebp */
  ESP = (EBP);
  /* 10bd66eb pop ebp */
  EBP = (pop32());
  /* 10bd66ec ret  */
  ESPCHK(0x10bd6680u, _esp0);
  ESP += 4; return;
}

/* FUN_100066f0 @ 0x10bd66f0 (10 bytes, 5 insns) */
void f_10bd66f0(void) {
  FTRACE(0x10bd66f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd66f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd66f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd66f3 mov eax, 1 */
  EAX = (0x1u);
  /* 10bd66f8 pop ebp */
  EBP = (pop32());
  /* 10bd66f9 ret  */
  ESPCHK(0x10bd66f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x10bd6700 (173 bytes, 59 insns) */
void f_10bd6700(void) {
  FTRACE(0x10bd6700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6700 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6701 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6706 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd670a jbe 0x10bd6713 */
  if ((C.cf||C.zf)) goto L_10bd6713;
  /* 10bd670c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd670e jmp 0x10bd67a9 */
  goto L_10bd67a9;
L_10bd6713:;
  /* 10bd6713 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6715 call 0x10bd6230 */
  push32(0x10bd671au); f_10bd6230();
  /* 10bd671a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd671d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6720 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6721 call 0x10bd6b30 */
  push32(0x10bd6726u); f_10bd6b30();
  /* 10bd6726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6729 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd672c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6730 je 0x10bd6771 */
  if (C.zf) goto L_10bd6771;
  /* 10bd6732 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd6739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd673c cmp ecx, dword ptr [0x10bfcc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bfcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6742 ja 0x10bd6762 */
  if ((!C.cf&&!C.zf)) goto L_10bd6762;
  /* 10bd6744 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6747 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd674b push eax */
  push32((uint32_t)(EAX));
  /* 10bd674c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd674f push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6750 call 0x10bd7a00 */
  push32(0x10bd6755u); f_10bd7a00();
  /* 10bd6755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd675a je 0x10bd6762 */
  if (C.zf) goto L_10bd6762;
  /* 10bd675c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd675f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd6762:;
  /* 10bd6762 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6764 call 0x10bd62d0 */
  push32(0x10bd6769u); f_10bd62d0();
  /* 10bd6769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd676c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd676f jmp 0x10bd67a9 */
  goto L_10bd67a9;
L_10bd6771:;
  /* 10bd6771 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6773 call 0x10bd62d0 */
  push32(0x10bd6778u); f_10bd62d0();
  /* 10bd6778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd677b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd677f jne 0x10bd6788 */
  if (!C.zf) goto L_10bd6788;
  /* 10bd6781 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10bd6788:;
  /* 10bd6788 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd678b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd678e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10bd6790 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10bd6793 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6796 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6797 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd679a push edx */
  push32((uint32_t)(EDX));
  /* 10bd679b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bd679d mov eax, dword ptr [0x10bffdac] */
  EAX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd67a2 push eax */
  push32((uint32_t)(EAX));
  /* 10bd67a3 call dword ptr [0x10c002ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002ec))), 0x10bd67a9u);
L_10bd67a9:;
  /* 10bd67a9 mov esp, ebp */
  ESP = (EBP);
  /* 10bd67ab pop ebp */
  EBP = (pop32());
  /* 10bd67ac ret  */
  ESPCHK(0x10bd6700u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b0 @ 0x10bd67b0 (490 bytes, 165 insns) */
void f_10bd67b0(void) {
  FTRACE(0x10bd67b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd67b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd67b1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd67b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd67b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd67ba jne 0x10bd67cd */
  if (!C.zf) goto L_10bd67cd;
  /* 10bd67bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd67bf push eax */
  push32((uint32_t)(EAX));
  /* 10bd67c0 call 0x10bd6600 */
  push32(0x10bd67c5u); f_10bd6600();
  /* 10bd67c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd67c8 jmp 0x10bd6996 */
  goto L_10bd6996;
L_10bd67cd:;
  /* 10bd67cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd67d1 jne 0x10bd67e6 */
  if (!C.zf) goto L_10bd67e6;
  /* 10bd67d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd67d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd67d7 call 0x10bd69a0 */
  push32(0x10bd67dcu); f_10bd69a0();
  /* 10bd67dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd67df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd67e1 jmp 0x10bd6996 */
  goto L_10bd6996;
L_10bd67e6:;
  /* 10bd67e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bd67ed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd67f1 ja 0x10bd6969 */
  if ((!C.cf&&!C.zf)) goto L_10bd6969;
  /* 10bd67f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd67f9 call 0x10bd6230 */
  push32(0x10bd67feu); f_10bd6230();
  /* 10bd67fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6801 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6804 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6805 call 0x10bd6b30 */
  push32(0x10bd680au); f_10bd6b30();
  /* 10bd680a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd680d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd6810 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6814 je 0x10bd692c */
  if (C.zf) goto L_10bd692c;
  /* 10bd681a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd681d cmp eax, dword ptr [0x10bfcc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6823 ja 0x10bd68a0 */
  if ((!C.cf&&!C.zf)) goto L_10bd68a0;
  /* 10bd6825 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6828 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6829 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd682c push edx */
  push32((uint32_t)(EDX));
  /* 10bd682d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd6830 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6831 call 0x10bd7a00 */
  push32(0x10bd6836u); f_10bd7a00();
  /* 10bd6836 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd683b je 0x10bd6845 */
  if (C.zf) goto L_10bd6845;
  /* 10bd683d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6840 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd6843 jmp 0x10bd68a0 */
  goto L_10bd68a0;
L_10bd6845:;
  /* 10bd6845 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6848 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6849 call 0x10bd71c0 */
  push32(0x10bd684eu); f_10bd71c0();
  /* 10bd684e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6851 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd6854 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6858 je 0x10bd68a0 */
  if (C.zf) goto L_10bd68a0;
  /* 10bd685a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd685d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10bd6860 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6863 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd6866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6869 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd686c jae 0x10bd6876 */
  if (!C.cf) goto L_10bd6876;
  /* 10bd686e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6871 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd6874 jmp 0x10bd687c */
  goto L_10bd687c;
L_10bd6876:;
  /* 10bd6876 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6879 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10bd687c:;
  /* 10bd687c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd687f push edx */
  push32((uint32_t)(EDX));
  /* 10bd6880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6883 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6884 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6887 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6888 call 0x10bd9110 */
  push32(0x10bd688du); f_10bd9110();
  /* 10bd688d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6890 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6893 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6894 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd6897 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6898 call 0x10bd6bf0 */
  push32(0x10bd689du); f_10bd6bf0();
  /* 10bd689d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd68a0:;
  /* 10bd68a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd68a4 jne 0x10bd6920 */
  if (!C.zf) goto L_10bd6920;
  /* 10bd68a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd68aa jne 0x10bd68b3 */
  if (!C.zf) goto L_10bd68b3;
  /* 10bd68ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10bd68b3:;
  /* 10bd68b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd68b6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd68b9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd68bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bd68bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd68c2 push edx */
  push32((uint32_t)(EDX));
  /* 10bd68c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd68c5 mov eax, dword ptr [0x10bffdac] */
  EAX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd68ca push eax */
  push32((uint32_t)(EAX));
  /* 10bd68cb call dword ptr [0x10c002e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002e8))), 0x10bd68d1u);
  /* 10bd68d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd68d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd68d8 je 0x10bd6920 */
  if (C.zf) goto L_10bd6920;
  /* 10bd68da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd68dd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bd68e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd68e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd68e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd68e9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd68ec jae 0x10bd68f6 */
  if (!C.cf) goto L_10bd68f6;
  /* 10bd68ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd68f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bd68f4 jmp 0x10bd68fc */
  goto L_10bd68fc;
L_10bd68f6:;
  /* 10bd68f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd68f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10bd68fc:;
  /* 10bd68fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd68ff push eax */
  push32((uint32_t)(EAX));
  /* 10bd6900 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6903 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6904 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6907 push edx */
  push32((uint32_t)(EDX));
  /* 10bd6908 call 0x10bd9110 */
  push32(0x10bd690du); f_10bd9110();
  /* 10bd690d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6913 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6914 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd6917 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6918 call 0x10bd6bf0 */
  push32(0x10bd691du); f_10bd6bf0();
  /* 10bd691d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd6920:;
  /* 10bd6920 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6922 call 0x10bd62d0 */
  push32(0x10bd6927u); f_10bd62d0();
  /* 10bd6927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd692a jmp 0x10bd6969 */
  goto L_10bd6969;
L_10bd692c:;
  /* 10bd692c push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd692e call 0x10bd62d0 */
  push32(0x10bd6933u); f_10bd62d0();
  /* 10bd6933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6936 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd693a jne 0x10bd6943 */
  if (!C.zf) goto L_10bd6943;
  /* 10bd693c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10bd6943:;
  /* 10bd6943 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6946 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6949 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd694c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10bd694f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6952 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6953 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6956 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6957 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd6959 mov edx, dword ptr [0x10bffdac] */
  EDX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd695f push edx */
  push32((uint32_t)(EDX));
  /* 10bd6960 call dword ptr [0x10c002ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002ec))), 0x10bd6966u);
  /* 10bd6966 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bd6969:;
  /* 10bd6969 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd696d jne 0x10bd6978 */
  if (!C.zf) goto L_10bd6978;
  /* 10bd696f cmp dword ptr [0x10bfe5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6976 jne 0x10bd697d */
  if (!C.zf) goto L_10bd697d;
L_10bd6978:;
  /* 10bd6978 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd697b jmp 0x10bd6996 */
  goto L_10bd6996;
L_10bd697d:;
  /* 10bd697d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6980 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6981 call 0x10bd6570 */
  push32(0x10bd6986u); f_10bd6570();
  /* 10bd6986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd698b jne 0x10bd6991 */
  if (!C.zf) goto L_10bd6991;
  /* 10bd698d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd698f jmp 0x10bd6996 */
  goto L_10bd6996;
L_10bd6991:;
  /* 10bd6991 jmp 0x10bd67e6 */
  goto L_10bd67e6;
L_10bd6996:;
  /* 10bd6996 mov esp, ebp */
  ESP = (EBP);
  /* 10bd6998 pop ebp */
  EBP = (pop32());
  /* 10bd6999 ret  */
  ESPCHK(0x10bd67b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x10bd69a0 (104 bytes, 38 insns) */
void f_10bd69a0(void) {
  FTRACE(0x10bd69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd69a1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd69a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd69a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd69a8 jne 0x10bd69ac */
  if (!C.zf) goto L_10bd69ac;
  /* 10bd69aa jmp 0x10bd6a04 */
  goto L_10bd6a04;
L_10bd69ac:;
  /* 10bd69ac push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd69ae call 0x10bd6230 */
  push32(0x10bd69b3u); f_10bd6230();
  /* 10bd69b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd69b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd69b9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd69ba call 0x10bd6b30 */
  push32(0x10bd69bfu); f_10bd6b30();
  /* 10bd69bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd69c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd69c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd69c9 je 0x10bd69e7 */
  if (C.zf) goto L_10bd69e7;
  /* 10bd69cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd69ce push ecx */
  push32((uint32_t)(ECX));
  /* 10bd69cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd69d2 push edx */
  push32((uint32_t)(EDX));
  /* 10bd69d3 call 0x10bd6bf0 */
  push32(0x10bd69d8u); f_10bd6bf0();
  /* 10bd69d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd69db push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd69dd call 0x10bd62d0 */
  push32(0x10bd69e2u); f_10bd62d0();
  /* 10bd69e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd69e5 jmp 0x10bd6a04 */
  goto L_10bd6a04;
L_10bd69e7:;
  /* 10bd69e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd69e9 call 0x10bd62d0 */
  push32(0x10bd69eeu); f_10bd62d0();
  /* 10bd69ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd69f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd69f4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd69f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd69f7 mov ecx, dword ptr [0x10bffdac] */
  ECX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd69fd push ecx */
  push32((uint32_t)(ECX));
  /* 10bd69fe call dword ptr [0x10c002c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c8))), 0x10bd6a04u);
L_10bd6a04:;
  /* 10bd6a04 mov esp, ebp */
  ESP = (EBP);
  /* 10bd6a06 pop ebp */
  EBP = (pop32());
  /* 10bd6a07 ret  */
  ESPCHK(0x10bd69a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a10 @ 0x10bd6a10 (116 bytes, 34 insns) */
void f_10bd6a10(void) {
  FTRACE(0x10bd6a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6a11 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd6a14 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10bd6a1b push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6a1d call 0x10bd6230 */
  push32(0x10bd6a22u); f_10bd6230();
  /* 10bd6a22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6a25 call 0x10bd8120 */
  push32(0x10bd6a2au); f_10bd8120();
  /* 10bd6a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd6a2c jge 0x10bd6a35 */
  if ((C.sf==C.of)) goto L_10bd6a35;
  /* 10bd6a2e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10bd6a35:;
  /* 10bd6a35 push 9 */
  push32((uint32_t)(0x9u));
  /* 10bd6a37 call 0x10bd62d0 */
  push32(0x10bd6a3cu); f_10bd62d0();
  /* 10bd6a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd6a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd6a43 mov eax, dword ptr [0x10bffdac] */
  EAX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd6a48 push eax */
  push32((uint32_t)(EAX));
  /* 10bd6a49 call dword ptr [0x10c002a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002a8))), 0x10bd6a4fu);
  /* 10bd6a4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd6a51 jne 0x10bd6a7d */
  if (!C.zf) goto L_10bd6a7d;
  /* 10bd6a53 call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bd6a59u);
  /* 10bd6a59 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6a5c jne 0x10bd6a76 */
  if (!C.zf) goto L_10bd6a76;
  /* 10bd6a5e call 0x10bda710 */
  push32(0x10bd6a63u); f_10bda710();
  /* 10bd6a63 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10bd6a69 call 0x10bda700 */
  push32(0x10bd6a6eu); f_10bda700();
  /* 10bd6a6e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10bd6a74 jmp 0x10bd6a7d */
  goto L_10bd6a7d;
L_10bd6a76:;
  /* 10bd6a76 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10bd6a7d:;
  /* 10bd6a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6a80 mov esp, ebp */
  ESP = (EBP);
  /* 10bd6a82 pop ebp */
  EBP = (pop32());
  /* 10bd6a83 ret  */
  ESPCHK(0x10bd6a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a90 @ 0x10bd6a90 (10 bytes, 5 insns) */
void f_10bd6a90(void) {
  FTRACE(0x10bd6a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6a91 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6a93 call 0x10bd6a10 */
  push32(0x10bd6a98u); f_10bd6a10();
  /* 10bd6a98 pop ebp */
  EBP = (pop32());
  /* 10bd6a99 ret  */
  ESPCHK(0x10bd6a90u, _esp0);
  ESP += 4; return;
}

