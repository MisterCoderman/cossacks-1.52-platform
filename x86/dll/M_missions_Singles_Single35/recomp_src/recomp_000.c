#include "recomp.h"

/* OnInit @ 0x115a1005 (5 bytes, 1 insns) */
void f_115a1005(void) {
  FTRACE(0x115a1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a1005 jmp 0x115a1030 */
  f_115a1030(); return;
}

/* thunk_FUN_10001b60 @ 0x115a100a (5 bytes, 1 insns) */
void f_115a100a(void) {
  FTRACE(0x115a100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a100a jmp 0x115a1b60 */
  f_115a1b60(); return;
}

/* ProcessScenary @ 0x115a100f (5 bytes, 1 insns) */
void f_115a100f(void) {
  FTRACE(0x115a100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a100f jmp 0x115a1bc0 */
  f_115a1bc0(); return;
}

/* FUN_10001030 @ 0x115a1030 (2290 bytes, 613 insns) */
void f_115a1030(void) {
  FTRACE(0x115a1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a1030 push ebp */
  push32((uint32_t)(EBP));
  /* 115a1031 mov ebp, esp */
  EBP = (ESP);
  /* 115a1033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a1036 push ebx */
  push32((uint32_t)(EBX));
  /* 115a1037 push esi */
  push32((uint32_t)(ESI));
  /* 115a1038 push edi */
  push32((uint32_t)(EDI));
  /* 115a1039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 115a103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 115a1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 115a1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115a1048 mov esi, esp */
  ESI = (ESP);
  /* 115a104a push 0x115cc288 */
  push32((uint32_t)(0x115cc288u));
  /* 115a104f push 0x115d1448 */
  push32((uint32_t)(0x115d1448u));
  /* 115a1054 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a105au);
  /* 115a105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a105f call 0x115a3f50 */
  push32(0x115a1064u); f_115a3f50();
  /* 115a1064 mov esi, esp */
  ESI = (ESP);
  /* 115a1066 push 0x115cc280 */
  push32((uint32_t)(0x115cc280u));
  /* 115a106b push 0x115d1488 */
  push32((uint32_t)(0x115d1488u));
  /* 115a1070 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a1076u);
  /* 115a1076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a107b call 0x115a3f50 */
  push32(0x115a1080u); f_115a3f50();
  /* 115a1080 mov esi, esp */
  ESI = (ESP);
  /* 115a1082 push 0x115cc278 */
  push32((uint32_t)(0x115cc278u));
  /* 115a1087 push 0x115d1480 */
  push32((uint32_t)(0x115d1480u));
  /* 115a108c call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a1092u);
  /* 115a1092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1097 call 0x115a3f50 */
  push32(0x115a109cu); f_115a3f50();
  /* 115a109c mov esi, esp */
  ESI = (ESP);
  /* 115a109e push 0x115cc270 */
  push32((uint32_t)(0x115cc270u));
  /* 115a10a3 push 0x115d15a0 */
  push32((uint32_t)(0x115d15a0u));
  /* 115a10a8 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a10aeu);
  /* 115a10ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a10b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a10b3 call 0x115a3f50 */
  push32(0x115a10b8u); f_115a3f50();
  /* 115a10b8 mov esi, esp */
  ESI = (ESP);
  /* 115a10ba push 0x115cc268 */
  push32((uint32_t)(0x115cc268u));
  /* 115a10bf push 0x115d1518 */
  push32((uint32_t)(0x115d1518u));
  /* 115a10c4 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a10cau);
  /* 115a10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a10cf call 0x115a3f50 */
  push32(0x115a10d4u); f_115a3f50();
  /* 115a10d4 mov esi, esp */
  ESI = (ESP);
  /* 115a10d6 push 0x115cc260 */
  push32((uint32_t)(0x115cc260u));
  /* 115a10db push 0x115d1520 */
  push32((uint32_t)(0x115d1520u));
  /* 115a10e0 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a10e6u);
  /* 115a10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a10eb call 0x115a3f50 */
  push32(0x115a10f0u); f_115a3f50();
  /* 115a10f0 mov esi, esp */
  ESI = (ESP);
  /* 115a10f2 push 0x115cc258 */
  push32((uint32_t)(0x115cc258u));
  /* 115a10f7 push 0x115d1528 */
  push32((uint32_t)(0x115d1528u));
  /* 115a10fc call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a1102u);
  /* 115a1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1107 call 0x115a3f50 */
  push32(0x115a110cu); f_115a3f50();
  /* 115a110c mov esi, esp */
  ESI = (ESP);
  /* 115a110e push 0x115cc250 */
  push32((uint32_t)(0x115cc250u));
  /* 115a1113 push 0x115d1530 */
  push32((uint32_t)(0x115d1530u));
  /* 115a1118 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a111eu);
  /* 115a111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1123 call 0x115a3f50 */
  push32(0x115a1128u); f_115a3f50();
  /* 115a1128 mov esi, esp */
  ESI = (ESP);
  /* 115a112a push 0x115cc248 */
  push32((uint32_t)(0x115cc248u));
  /* 115a112f push 0x115d1538 */
  push32((uint32_t)(0x115d1538u));
  /* 115a1134 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a113au);
  /* 115a113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a113f call 0x115a3f50 */
  push32(0x115a1144u); f_115a3f50();
  /* 115a1144 mov esi, esp */
  ESI = (ESP);
  /* 115a1146 push 0x115cc240 */
  push32((uint32_t)(0x115cc240u));
  /* 115a114b push 0x115d1510 */
  push32((uint32_t)(0x115d1510u));
  /* 115a1150 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a1156u);
  /* 115a1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a115b call 0x115a3f50 */
  push32(0x115a1160u); f_115a3f50();
  /* 115a1160 mov esi, esp */
  ESI = (ESP);
  /* 115a1162 push 0x115cc238 */
  push32((uint32_t)(0x115cc238u));
  /* 115a1167 push 0x115d14d0 */
  push32((uint32_t)(0x115d14d0u));
  /* 115a116c call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a1172u);
  /* 115a1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1177 call 0x115a3f50 */
  push32(0x115a117cu); f_115a3f50();
  /* 115a117c mov esi, esp */
  ESI = (ESP);
  /* 115a117e push 0x115cc22c */
  push32((uint32_t)(0x115cc22cu));
  /* 115a1183 push 0x115d1490 */
  push32((uint32_t)(0x115d1490u));
  /* 115a1188 call dword ptr [0x115d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ec))), 0x115a118eu);
  /* 115a118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1193 call 0x115a3f50 */
  push32(0x115a1198u); f_115a3f50();
  /* 115a1198 mov esi, esp */
  ESI = (ESP);
  /* 115a119a push 0x115cc224 */
  push32((uint32_t)(0x115cc224u));
  /* 115a119f push 0x115d1540 */
  push32((uint32_t)(0x115d1540u));
  /* 115a11a4 call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a11aau);
  /* 115a11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a11af call 0x115a3f50 */
  push32(0x115a11b4u); f_115a3f50();
  /* 115a11b4 mov esi, esp */
  ESI = (ESP);
  /* 115a11b6 push 0x115cc218 */
  push32((uint32_t)(0x115cc218u));
  /* 115a11bb push 0x115d1580 */
  push32((uint32_t)(0x115d1580u));
  /* 115a11c0 call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a11c6u);
  /* 115a11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a11cb call 0x115a3f50 */
  push32(0x115a11d0u); f_115a3f50();
  /* 115a11d0 mov esi, esp */
  ESI = (ESP);
  /* 115a11d2 push 0x115cc20c */
  push32((uint32_t)(0x115cc20cu));
  /* 115a11d7 push 0x115d1588 */
  push32((uint32_t)(0x115d1588u));
  /* 115a11dc call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a11e2u);
  /* 115a11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a11e7 call 0x115a3f50 */
  push32(0x115a11ecu); f_115a3f50();
  /* 115a11ec mov esi, esp */
  ESI = (ESP);
  /* 115a11ee push 0x115cc204 */
  push32((uint32_t)(0x115cc204u));
  /* 115a11f3 push 0x115d1548 */
  push32((uint32_t)(0x115d1548u));
  /* 115a11f8 call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a11feu);
  /* 115a11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1203 call 0x115a3f50 */
  push32(0x115a1208u); f_115a3f50();
  /* 115a1208 mov esi, esp */
  ESI = (ESP);
  /* 115a120a push 0x115cc1f8 */
  push32((uint32_t)(0x115cc1f8u));
  /* 115a120f push 0x115d1590 */
  push32((uint32_t)(0x115d1590u));
  /* 115a1214 call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a121au);
  /* 115a121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a121f call 0x115a3f50 */
  push32(0x115a1224u); f_115a3f50();
  /* 115a1224 mov esi, esp */
  ESI = (ESP);
  /* 115a1226 push 0x115cc1ec */
  push32((uint32_t)(0x115cc1ecu));
  /* 115a122b push 0x115d1598 */
  push32((uint32_t)(0x115d1598u));
  /* 115a1230 call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a1236u);
  /* 115a1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a123b call 0x115a3f50 */
  push32(0x115a1240u); f_115a3f50();
  /* 115a1240 mov esi, esp */
  ESI = (ESP);
  /* 115a1242 push 0x115cc1e4 */
  push32((uint32_t)(0x115cc1e4u));
  /* 115a1247 push 0x115d14e8 */
  push32((uint32_t)(0x115d14e8u));
  /* 115a124c call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a1252u);
  /* 115a1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1257 call 0x115a3f50 */
  push32(0x115a125cu); f_115a3f50();
  /* 115a125c mov esi, esp */
  ESI = (ESP);
  /* 115a125e push 0x115cc1dc */
  push32((uint32_t)(0x115cc1dcu));
  /* 115a1263 push 0x115d14f0 */
  push32((uint32_t)(0x115d14f0u));
  /* 115a1268 call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a126eu);
  /* 115a126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1273 call 0x115a3f50 */
  push32(0x115a1278u); f_115a3f50();
  /* 115a1278 mov esi, esp */
  ESI = (ESP);
  /* 115a127a push 0x115cc1d4 */
  push32((uint32_t)(0x115cc1d4u));
  /* 115a127f push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a1284 call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a128au);
  /* 115a128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a128f call 0x115a3f50 */
  push32(0x115a1294u); f_115a3f50();
  /* 115a1294 mov esi, esp */
  ESI = (ESP);
  /* 115a1296 push 0x115cc1cc */
  push32((uint32_t)(0x115cc1ccu));
  /* 115a129b push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a12a0 call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a12a6u);
  /* 115a12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a12ab call 0x115a3f50 */
  push32(0x115a12b0u); f_115a3f50();
  /* 115a12b0 mov esi, esp */
  ESI = (ESP);
  /* 115a12b2 push 0x115cc1c0 */
  push32((uint32_t)(0x115cc1c0u));
  /* 115a12b7 push 0x115d1550 */
  push32((uint32_t)(0x115d1550u));
  /* 115a12bc call dword ptr [0x115d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f0))), 0x115a12c2u);
  /* 115a12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a12c7 call 0x115a3f50 */
  push32(0x115a12ccu); f_115a3f50();
  /* 115a12cc mov esi, esp */
  ESI = (ESP);
  /* 115a12ce push 0x115cc1ac */
  push32((uint32_t)(0x115cc1acu));
  /* 115a12d3 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a12d8 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a12deu);
  /* 115a12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a12e3 call 0x115a3f50 */
  push32(0x115a12e8u); f_115a3f50();
  /* 115a12e8 mov esi, esp */
  ESI = (ESP);
  /* 115a12ea push 0x115cc194 */
  push32((uint32_t)(0x115cc194u));
  /* 115a12ef push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a12f4 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a12fau);
  /* 115a12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a12ff call 0x115a3f50 */
  push32(0x115a1304u); f_115a3f50();
  /* 115a1304 mov esi, esp */
  ESI = (ESP);
  /* 115a1306 push 0x115cc178 */
  push32((uint32_t)(0x115cc178u));
  /* 115a130b push 0x115d1458 */
  push32((uint32_t)(0x115d1458u));
  /* 115a1310 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a1316u);
  /* 115a1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a131b call 0x115a3f50 */
  push32(0x115a1320u); f_115a3f50();
  /* 115a1320 mov esi, esp */
  ESI = (ESP);
  /* 115a1322 push 0x115cc160 */
  push32((uint32_t)(0x115cc160u));
  /* 115a1327 push 0x115d1430 */
  push32((uint32_t)(0x115d1430u));
  /* 115a132c call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a1332u);
  /* 115a1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1337 call 0x115a3f50 */
  push32(0x115a133cu); f_115a3f50();
  /* 115a133c mov esi, esp */
  ESI = (ESP);
  /* 115a133e push 0x115cc148 */
  push32((uint32_t)(0x115cc148u));
  /* 115a1343 push 0x115d1440 */
  push32((uint32_t)(0x115d1440u));
  /* 115a1348 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a134eu);
  /* 115a134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1353 call 0x115a3f50 */
  push32(0x115a1358u); f_115a3f50();
  /* 115a1358 mov esi, esp */
  ESI = (ESP);
  /* 115a135a push 0x115cc138 */
  push32((uint32_t)(0x115cc138u));
  /* 115a135f push 0x115d1468 */
  push32((uint32_t)(0x115d1468u));
  /* 115a1364 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a136au);
  /* 115a136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a136f call 0x115a3f50 */
  push32(0x115a1374u); f_115a3f50();
  /* 115a1374 mov esi, esp */
  ESI = (ESP);
  /* 115a1376 push 0x115cc128 */
  push32((uint32_t)(0x115cc128u));
  /* 115a137b push 0x115d14f8 */
  push32((uint32_t)(0x115d14f8u));
  /* 115a1380 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a1386u);
  /* 115a1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a138b call 0x115a3f50 */
  push32(0x115a1390u); f_115a3f50();
  /* 115a1390 mov esi, esp */
  ESI = (ESP);
  /* 115a1392 push 0x115cc118 */
  push32((uint32_t)(0x115cc118u));
  /* 115a1397 push 0x115d1470 */
  push32((uint32_t)(0x115d1470u));
  /* 115a139c call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a13a2u);
  /* 115a13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a13a7 call 0x115a3f50 */
  push32(0x115a13acu); f_115a3f50();
  /* 115a13ac mov esi, esp */
  ESI = (ESP);
  /* 115a13ae push 0x115cc108 */
  push32((uint32_t)(0x115cc108u));
  /* 115a13b3 push 0x115d1500 */
  push32((uint32_t)(0x115d1500u));
  /* 115a13b8 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a13beu);
  /* 115a13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a13c3 call 0x115a3f50 */
  push32(0x115a13c8u); f_115a3f50();
  /* 115a13c8 mov esi, esp */
  ESI = (ESP);
  /* 115a13ca push 0x115cc0f8 */
  push32((uint32_t)(0x115cc0f8u));
  /* 115a13cf push 0x115d1478 */
  push32((uint32_t)(0x115d1478u));
  /* 115a13d4 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a13dau);
  /* 115a13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a13df call 0x115a3f50 */
  push32(0x115a13e4u); f_115a3f50();
  /* 115a13e4 mov esi, esp */
  ESI = (ESP);
  /* 115a13e6 push 0x115cc0e8 */
  push32((uint32_t)(0x115cc0e8u));
  /* 115a13eb push 0x115d1508 */
  push32((uint32_t)(0x115d1508u));
  /* 115a13f0 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a13f6u);
  /* 115a13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a13fb call 0x115a3f50 */
  push32(0x115a1400u); f_115a3f50();
  /* 115a1400 mov esi, esp */
  ESI = (ESP);
  /* 115a1402 push 0x115cc0d0 */
  push32((uint32_t)(0x115cc0d0u));
  /* 115a1407 push 0x115d1498 */
  push32((uint32_t)(0x115d1498u));
  /* 115a140c call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a1412u);
  /* 115a1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1417 call 0x115a3f50 */
  push32(0x115a141cu); f_115a3f50();
  /* 115a141c mov esi, esp */
  ESI = (ESP);
  /* 115a141e push 0x115cc0c4 */
  push32((uint32_t)(0x115cc0c4u));
  /* 115a1423 push 0x115d14a0 */
  push32((uint32_t)(0x115d14a0u));
  /* 115a1428 call dword ptr [0x115d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e8))), 0x115a142eu);
  /* 115a142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1433 call 0x115a3f50 */
  push32(0x115a1438u); f_115a3f50();
  /* 115a1438 mov esi, esp */
  ESI = (ESP);
  /* 115a143a push 8 */
  push32((uint32_t)(0x8u));
  /* 115a143c push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a1441 call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a1447u);
  /* 115a1447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a144a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a144c call 0x115a3f50 */
  push32(0x115a1451u); f_115a3f50();
  /* 115a1451 mov esi, esp */
  ESI = (ESP);
  /* 115a1453 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a1455 push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a145a call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a1460u);
  /* 115a1460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1463 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1465 call 0x115a3f50 */
  push32(0x115a146au); f_115a3f50();
  /* 115a146a mov esi, esp */
  ESI = (ESP);
  /* 115a146c push 8 */
  push32((uint32_t)(0x8u));
  /* 115a146e push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a1473 call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a1479u);
  /* 115a1479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a147c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a147e call 0x115a3f50 */
  push32(0x115a1483u); f_115a3f50();
  /* 115a1483 mov esi, esp */
  ESI = (ESP);
  /* 115a1485 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a1487 push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a148c call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a1492u);
  /* 115a1492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1495 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1497 call 0x115a3f50 */
  push32(0x115a149cu); f_115a3f50();
  /* 115a149c mov esi, esp */
  ESI = (ESP);
  /* 115a149e push 8 */
  push32((uint32_t)(0x8u));
  /* 115a14a0 push 0x115d13f8 */
  push32((uint32_t)(0x115d13f8u));
  /* 115a14a5 call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a14abu);
  /* 115a14ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a14ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a14b0 call 0x115a3f50 */
  push32(0x115a14b5u); f_115a3f50();
  /* 115a14b5 mov esi, esp */
  ESI = (ESP);
  /* 115a14b7 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a14b9 push 0x115d13f0 */
  push32((uint32_t)(0x115d13f0u));
  /* 115a14be call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a14c4u);
  /* 115a14c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a14c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a14c9 call 0x115a3f50 */
  push32(0x115a14ceu); f_115a3f50();
  /* 115a14ce mov esi, esp */
  ESI = (ESP);
  /* 115a14d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a14d2 push 0x115d1408 */
  push32((uint32_t)(0x115d1408u));
  /* 115a14d7 call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a14ddu);
  /* 115a14dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a14e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a14e2 call 0x115a3f50 */
  push32(0x115a14e7u); f_115a3f50();
  /* 115a14e7 mov esi, esp */
  ESI = (ESP);
  /* 115a14e9 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a14eb push 0x115d1400 */
  push32((uint32_t)(0x115d1400u));
  /* 115a14f0 call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a14f6u);
  /* 115a14f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a14f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a14fb call 0x115a3f50 */
  push32(0x115a1500u); f_115a3f50();
  /* 115a1500 mov esi, esp */
  ESI = (ESP);
  /* 115a1502 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a1504 push 0x115d1410 */
  push32((uint32_t)(0x115d1410u));
  /* 115a1509 call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a150fu);
  /* 115a150f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1514 call 0x115a3f50 */
  push32(0x115a1519u); f_115a3f50();
  /* 115a1519 mov esi, esp */
  ESI = (ESP);
  /* 115a151b push 8 */
  push32((uint32_t)(0x8u));
  /* 115a151d push 0x115d14a8 */
  push32((uint32_t)(0x115d14a8u));
  /* 115a1522 call dword ptr [0x115d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f8))), 0x115a1528u);
  /* 115a1528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a152b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a152d call 0x115a3f50 */
  push32(0x115a1532u); f_115a3f50();
  /* 115a1532 mov esi, esp */
  ESI = (ESP);
  /* 115a1534 push 0x115cc0bc */
  push32((uint32_t)(0x115cc0bcu));
  /* 115a1539 push 0x115d1578 */
  push32((uint32_t)(0x115d1578u));
  /* 115a153e call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a1544u);
  /* 115a1544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1547 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1549 call 0x115a3f50 */
  push32(0x115a154eu); f_115a3f50();
  /* 115a154e mov esi, esp */
  ESI = (ESP);
  /* 115a1550 push 0x115cc0ac */
  push32((uint32_t)(0x115cc0acu));
  /* 115a1555 push 0x115d14c0 */
  push32((uint32_t)(0x115d14c0u));
  /* 115a155a call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a1560u);
  /* 115a1560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1563 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1565 call 0x115a3f50 */
  push32(0x115a156au); f_115a3f50();
  /* 115a156a mov esi, esp */
  ESI = (ESP);
  /* 115a156c push 0x115cc09c */
  push32((uint32_t)(0x115cc09cu));
  /* 115a1571 push 0x115d14d8 */
  push32((uint32_t)(0x115d14d8u));
  /* 115a1576 call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a157cu);
  /* 115a157c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a157f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1581 call 0x115a3f50 */
  push32(0x115a1586u); f_115a3f50();
  /* 115a1586 mov esi, esp */
  ESI = (ESP);
  /* 115a1588 push 0x115cc08c */
  push32((uint32_t)(0x115cc08cu));
  /* 115a158d push 0x115d14e0 */
  push32((uint32_t)(0x115d14e0u));
  /* 115a1592 call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a1598u);
  /* 115a1598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a159b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a159d call 0x115a3f50 */
  push32(0x115a15a2u); f_115a3f50();
  /* 115a15a2 mov esi, esp */
  ESI = (ESP);
  /* 115a15a4 push 0x115cc07c */
  push32((uint32_t)(0x115cc07cu));
  /* 115a15a9 push 0x115d14c8 */
  push32((uint32_t)(0x115d14c8u));
  /* 115a15ae call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a15b4u);
  /* 115a15b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a15b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a15b9 call 0x115a3f50 */
  push32(0x115a15beu); f_115a3f50();
  /* 115a15be mov esi, esp */
  ESI = (ESP);
  /* 115a15c0 push 0x115cc06c */
  push32((uint32_t)(0x115cc06cu));
  /* 115a15c5 push 0x115d14b0 */
  push32((uint32_t)(0x115d14b0u));
  /* 115a15ca call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a15d0u);
  /* 115a15d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a15d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a15d5 call 0x115a3f50 */
  push32(0x115a15dau); f_115a3f50();
  /* 115a15da mov esi, esp */
  ESI = (ESP);
  /* 115a15dc push 0x115cc064 */
  push32((uint32_t)(0x115cc064u));
  /* 115a15e1 push 0x115d1570 */
  push32((uint32_t)(0x115d1570u));
  /* 115a15e6 call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a15ecu);
  /* 115a15ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a15ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a15f1 call 0x115a3f50 */
  push32(0x115a15f6u); f_115a3f50();
  /* 115a15f6 mov esi, esp */
  ESI = (ESP);
  /* 115a15f8 push 0x115cc058 */
  push32((uint32_t)(0x115cc058u));
  /* 115a15fd push 0x115d13e0 */
  push32((uint32_t)(0x115d13e0u));
  /* 115a1602 call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a1608u);
  /* 115a1608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a160b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a160d call 0x115a3f50 */
  push32(0x115a1612u); f_115a3f50();
  /* 115a1612 mov esi, esp */
  ESI = (ESP);
  /* 115a1614 push 0x115cc04c */
  push32((uint32_t)(0x115cc04cu));
  /* 115a1619 push 0x115d13e8 */
  push32((uint32_t)(0x115d13e8u));
  /* 115a161e call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a1624u);
  /* 115a1624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1629 call 0x115a3f50 */
  push32(0x115a162eu); f_115a3f50();
  /* 115a162e mov esi, esp */
  ESI = (ESP);
  /* 115a1630 push 0x115cc044 */
  push32((uint32_t)(0x115cc044u));
  /* 115a1635 push 0x115d1460 */
  push32((uint32_t)(0x115d1460u));
  /* 115a163a call dword ptr [0x115d44fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44fc))), 0x115a1640u);
  /* 115a1640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1645 call 0x115a3f50 */
  push32(0x115a164au); f_115a3f50();
  /* 115a164a mov esi, esp */
  ESI = (ESP);
  /* 115a164c push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a1651 call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a1657u);
  /* 115a1657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a165a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a165c call 0x115a3f50 */
  push32(0x115a1661u); f_115a3f50();
  /* 115a1661 mov esi, esp */
  ESI = (ESP);
  /* 115a1663 push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a1668 call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a166eu);
  /* 115a166e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1671 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1673 call 0x115a3f50 */
  push32(0x115a1678u); f_115a3f50();
  /* 115a1678 mov esi, esp */
  ESI = (ESP);
  /* 115a167a push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a167f call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a1685u);
  /* 115a1685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1688 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a168a call 0x115a3f50 */
  push32(0x115a168fu); f_115a3f50();
  /* 115a168f mov esi, esp */
  ESI = (ESP);
  /* 115a1691 push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a1696 call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a169cu);
  /* 115a169c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a169f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a16a1 call 0x115a3f50 */
  push32(0x115a16a6u); f_115a3f50();
  /* 115a16a6 mov esi, esp */
  ESI = (ESP);
  /* 115a16a8 push 0x115d13f8 */
  push32((uint32_t)(0x115d13f8u));
  /* 115a16ad call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a16b3u);
  /* 115a16b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a16b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a16b8 call 0x115a3f50 */
  push32(0x115a16bdu); f_115a3f50();
  /* 115a16bd mov esi, esp */
  ESI = (ESP);
  /* 115a16bf push 0x115d13f0 */
  push32((uint32_t)(0x115d13f0u));
  /* 115a16c4 call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a16cau);
  /* 115a16ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a16cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a16cf call 0x115a3f50 */
  push32(0x115a16d4u); f_115a3f50();
  /* 115a16d4 mov esi, esp */
  ESI = (ESP);
  /* 115a16d6 push 0x115d1408 */
  push32((uint32_t)(0x115d1408u));
  /* 115a16db call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a16e1u);
  /* 115a16e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a16e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a16e6 call 0x115a3f50 */
  push32(0x115a16ebu); f_115a3f50();
  /* 115a16eb mov esi, esp */
  ESI = (ESP);
  /* 115a16ed push 0x115d1400 */
  push32((uint32_t)(0x115d1400u));
  /* 115a16f2 call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a16f8u);
  /* 115a16f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a16fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a16fd call 0x115a3f50 */
  push32(0x115a1702u); f_115a3f50();
  /* 115a1702 mov esi, esp */
  ESI = (ESP);
  /* 115a1704 push 0x115d1410 */
  push32((uint32_t)(0x115d1410u));
  /* 115a1709 call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a170fu);
  /* 115a170f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1714 call 0x115a3f50 */
  push32(0x115a1719u); f_115a3f50();
  /* 115a1719 mov esi, esp */
  ESI = (ESP);
  /* 115a171b push 0x115d14a8 */
  push32((uint32_t)(0x115d14a8u));
  /* 115a1720 call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a1726u);
  /* 115a1726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1729 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a172b call 0x115a3f50 */
  push32(0x115a1730u); f_115a3f50();
  /* 115a1730 mov esi, esp */
  ESI = (ESP);
  /* 115a1732 push 0x115d1568 */
  push32((uint32_t)(0x115d1568u));
  /* 115a1737 call dword ptr [0x115d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44f4))), 0x115a173du);
  /* 115a173d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1740 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1742 call 0x115a3f50 */
  push32(0x115a1747u); f_115a3f50();
  /* 115a1747 mov esi, esp */
  ESI = (ESP);
  /* 115a1749 push 0x115cc038 */
  push32((uint32_t)(0x115cc038u));
  /* 115a174e push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1750 call dword ptr [0x115d4504] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4504))), 0x115a1756u);
  /* 115a1756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a175b call 0x115a3f50 */
  push32(0x115a1760u); f_115a3f50();
  /* 115a1760 mov esi, esp */
  ESI = (ESP);
  /* 115a1762 push 0x115cc030 */
  push32((uint32_t)(0x115cc030u));
  /* 115a1767 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a1769 call dword ptr [0x115d4504] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4504))), 0x115a176fu);
  /* 115a176f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1772 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1774 call 0x115a3f50 */
  push32(0x115a1779u); f_115a3f50();
  /* 115a1779 mov esi, esp */
  ESI = (ESP);
  /* 115a177b push 0x115cc028 */
  push32((uint32_t)(0x115cc028u));
  /* 115a1780 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a1782 call dword ptr [0x115d4504] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4504))), 0x115a1788u);
  /* 115a1788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a178b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a178d call 0x115a3f50 */
  push32(0x115a1792u); f_115a3f50();
  /* 115a1792 mov esi, esp */
  ESI = (ESP);
  /* 115a1794 push 0x115cc01c */
  push32((uint32_t)(0x115cc01cu));
  /* 115a1799 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a179b call dword ptr [0x115d4504] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4504))), 0x115a17a1u);
  /* 115a17a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a17a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a17a6 call 0x115a3f50 */
  push32(0x115a17abu); f_115a3f50();
  /* 115a17ab mov esi, esp */
  ESI = (ESP);
  /* 115a17ad push 3 */
  push32((uint32_t)(0x3u));
  /* 115a17af push 1 */
  push32((uint32_t)(0x1u));
  /* 115a17b1 call dword ptr [0x115d4508] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4508))), 0x115a17b7u);
  /* 115a17b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a17ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a17bc call 0x115a3f50 */
  push32(0x115a17c1u); f_115a3f50();
  /* 115a17c1 mov esi, esp */
  ESI = (ESP);
  /* 115a17c3 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 115a17c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a17c7 call dword ptr [0x115d4508] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4508))), 0x115a17cdu);
  /* 115a17cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a17d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a17d2 call 0x115a3f50 */
  push32(0x115a17d7u); f_115a3f50();
  /* 115a17d7 mov esi, esp */
  ESI = (ESP);
  /* 115a17d9 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 115a17db push 3 */
  push32((uint32_t)(0x3u));
  /* 115a17dd call dword ptr [0x115d4508] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4508))), 0x115a17e3u);
  /* 115a17e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a17e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a17e8 call 0x115a3f50 */
  push32(0x115a17edu); f_115a3f50();
  /* 115a17ed mov esi, esp */
  ESI = (ESP);
  /* 115a17ef push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 115a17f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a17f3 call dword ptr [0x115d4508] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4508))), 0x115a17f9u);
  /* 115a17f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a17fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a17fe call 0x115a3f50 */
  push32(0x115a1803u); f_115a3f50();
  /* 115a1803 mov esi, esp */
  ESI = (ESP);
  /* 115a1805 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1807 push 0x115d1468 */
  push32((uint32_t)(0x115d1468u));
  /* 115a180c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a180e call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a1814u);
  /* 115a1814 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1819 call 0x115a3f50 */
  push32(0x115a181eu); f_115a3f50();
  /* 115a181e mov esi, esp */
  ESI = (ESP);
  /* 115a1820 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1822 push 0x115d14f8 */
  push32((uint32_t)(0x115d14f8u));
  /* 115a1827 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1829 call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a182fu);
  /* 115a182f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1834 call 0x115a3f50 */
  push32(0x115a1839u); f_115a3f50();
  /* 115a1839 mov esi, esp */
  ESI = (ESP);
  /* 115a183b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a183d push 0x115d1470 */
  push32((uint32_t)(0x115d1470u));
  /* 115a1842 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1844 call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a184au);
  /* 115a184a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a184d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a184f call 0x115a3f50 */
  push32(0x115a1854u); f_115a3f50();
  /* 115a1854 mov esi, esp */
  ESI = (ESP);
  /* 115a1856 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1858 push 0x115d1500 */
  push32((uint32_t)(0x115d1500u));
  /* 115a185d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a185f call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a1865u);
  /* 115a1865 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1868 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a186a call 0x115a3f50 */
  push32(0x115a186fu); f_115a3f50();
  /* 115a186f mov esi, esp */
  ESI = (ESP);
  /* 115a1871 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1873 push 0x115d1478 */
  push32((uint32_t)(0x115d1478u));
  /* 115a1878 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a187a call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a1880u);
  /* 115a1880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1885 call 0x115a3f50 */
  push32(0x115a188au); f_115a3f50();
  /* 115a188a mov esi, esp */
  ESI = (ESP);
  /* 115a188c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a188e push 0x115d1508 */
  push32((uint32_t)(0x115d1508u));
  /* 115a1893 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1895 call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a189bu);
  /* 115a189b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a189e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a18a0 call 0x115a3f50 */
  push32(0x115a18a5u); f_115a3f50();
  /* 115a18a5 mov esi, esp */
  ESI = (ESP);
  /* 115a18a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a18a9 push 0x115d1430 */
  push32((uint32_t)(0x115d1430u));
  /* 115a18ae push 0 */
  push32((uint32_t)(0x0u));
  /* 115a18b0 call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a18b6u);
  /* 115a18b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a18b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a18bb call 0x115a3f50 */
  push32(0x115a18c0u); f_115a3f50();
  /* 115a18c0 mov esi, esp */
  ESI = (ESP);
  /* 115a18c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a18c4 push 0x115d1440 */
  push32((uint32_t)(0x115d1440u));
  /* 115a18c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a18cb call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a18d1u);
  /* 115a18d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a18d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a18d6 call 0x115a3f50 */
  push32(0x115a18dbu); f_115a3f50();
  /* 115a18db mov esi, esp */
  ESI = (ESP);
  /* 115a18dd push 0 */
  push32((uint32_t)(0x0u));
  /* 115a18df push 0x115d1498 */
  push32((uint32_t)(0x115d1498u));
  /* 115a18e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a18e6 call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a18ecu);
  /* 115a18ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a18ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a18f1 call 0x115a3f50 */
  push32(0x115a18f6u); f_115a3f50();
  /* 115a18f6 mov esi, esp */
  ESI = (ESP);
  /* 115a18f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a18fa push 0x115d14a0 */
  push32((uint32_t)(0x115d14a0u));
  /* 115a18ff push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1901 call dword ptr [0x115d4500] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4500))), 0x115a1907u);
  /* 115a1907 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a190a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a190c call 0x115a3f50 */
  push32(0x115a1911u); f_115a3f50();
  /* 115a1911 pop edi */
  EDI = (pop32());
  /* 115a1912 pop esi */
  ESI = (pop32());
  /* 115a1913 pop ebx */
  EBX = (pop32());
  /* 115a1914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1917 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1919 call 0x115a3f50 */
  push32(0x115a191eu); f_115a3f50();
  /* 115a191e mov esp, ebp */
  ESP = (EBP);
  /* 115a1920 pop ebp */
  EBP = (pop32());
  /* 115a1921 ret  */
  ESPCHK(0x115a1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b60 @ 0x115a1b60 (67 bytes, 26 insns) */
void f_115a1b60(void) {
  FTRACE(0x115a1b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a1b60 push ebp */
  push32((uint32_t)(EBP));
  /* 115a1b61 mov ebp, esp */
  EBP = (ESP);
  /* 115a1b63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a1b66 push ebx */
  push32((uint32_t)(EBX));
  /* 115a1b67 push esi */
  push32((uint32_t)(ESI));
  /* 115a1b68 push edi */
  push32((uint32_t)(EDI));
  /* 115a1b69 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 115a1b6c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 115a1b71 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 115a1b76 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115a1b78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a1b7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a1b7e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1b82 je 0x115a1b86 */
  if (C.zf) goto L_115a1b86;
  /* 115a1b84 jmp 0x115a1b8b */
  goto L_115a1b8b;
L_115a1b86:;
  /* 115a1b86 call 0x115a1005 */
  push32(0x115a1b8bu); f_115a1005();
L_115a1b8b:;
  /* 115a1b8b mov eax, 1 */
  EAX = (0x1u);
  /* 115a1b90 pop edi */
  EDI = (pop32());
  /* 115a1b91 pop esi */
  ESI = (pop32());
  /* 115a1b92 pop ebx */
  EBX = (pop32());
  /* 115a1b93 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1b96 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1b98 call 0x115a3f50 */
  push32(0x115a1b9du); f_115a3f50();
  /* 115a1b9d mov esp, ebp */
  ESP = (EBP);
  /* 115a1b9f pop ebp */
  EBP = (pop32());
  /* 115a1ba0 ret 0xc */
  ESPCHK(0x115a1b60u, _esp0);
  ESP += 16; return;
}

/* FUN_10001bc0 @ 0x115a1bc0 (7007 bytes, 2021 insns) [3 switch table(s)] */
void f_115a1bc0(void) {
  FTRACE(0x115a1bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a1bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a1bc1 mov ebp, esp */
  EBP = (ESP);
  /* 115a1bc3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a1bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 115a1bc7 push esi */
  push32((uint32_t)(ESI));
  /* 115a1bc8 push edi */
  push32((uint32_t)(EDI));
  /* 115a1bc9 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 115a1bcc mov ecx, 0x13 */
  ECX = (0x13u);
  /* 115a1bd1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 115a1bd6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115a1bd8 mov esi, esp */
  ESI = (ESP);
  /* 115a1bda push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115a1bdc call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a1be2u);
  /* 115a1be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1be7 call 0x115a3f50 */
  push32(0x115a1becu); f_115a3f50();
  /* 115a1bec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a1bf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a1bf3 je 0x115a234a */
  if (C.zf) goto L_115a234a;
  /* 115a1bf9 mov esi, esp */
  ESI = (ESP);
  /* 115a1bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1bfd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115a1bff call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a1c05u);
  /* 115a1c05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1c08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1c0a call 0x115a3f50 */
  push32(0x115a1c0fu); f_115a3f50();
  /* 115a1c0f mov esi, esp */
  ESI = (ESP);
  /* 115a1c11 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 115a1c13 call dword ptr [0x115d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d445c))), 0x115a1c19u);
  /* 115a1c19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1c1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1c1e call 0x115a3f50 */
  push32(0x115a1c23u); f_115a3f50();
  /* 115a1c23 mov esi, esp */
  ESI = (ESP);
  /* 115a1c25 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 115a1c27 call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a1c2du);
  /* 115a1c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1c30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1c32 call 0x115a3f50 */
  push32(0x115a1c37u); f_115a3f50();
  /* 115a1c37 mov esi, esp */
  ESI = (ESP);
  /* 115a1c39 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 115a1c3b call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a1c41u);
  /* 115a1c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1c46 call 0x115a3f50 */
  push32(0x115a1c4bu); f_115a3f50();
  /* 115a1c4b mov esi, esp */
  ESI = (ESP);
  /* 115a1c4d push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 115a1c4f call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a1c55u);
  /* 115a1c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1c58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1c5a call 0x115a3f50 */
  push32(0x115a1c5fu); f_115a3f50();
  /* 115a1c5f mov esi, esp */
  ESI = (ESP);
  /* 115a1c61 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 115a1c63 call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a1c69u);
  /* 115a1c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1c6e call 0x115a3f50 */
  push32(0x115a1c73u); f_115a3f50();
  /* 115a1c73 mov esi, esp */
  ESI = (ESP);
  /* 115a1c75 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 115a1c77 call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a1c7du);
  /* 115a1c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1c80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1c82 call 0x115a3f50 */
  push32(0x115a1c87u); f_115a3f50();
  /* 115a1c87 mov esi, esp */
  ESI = (ESP);
  /* 115a1c89 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 115a1c8b call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a1c91u);
  /* 115a1c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1c94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1c96 call 0x115a3f50 */
  push32(0x115a1c9bu); f_115a3f50();
  /* 115a1c9b mov esi, esp */
  ESI = (ESP);
  /* 115a1c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1c9f push 0x115d15a0 */
  push32((uint32_t)(0x115d15a0u));
  /* 115a1ca4 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1caau);
  /* 115a1caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1caf call 0x115a3f50 */
  push32(0x115a1cb4u); f_115a3f50();
  /* 115a1cb4 mov esi, esp */
  ESI = (ESP);
  /* 115a1cb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1cb8 push 0x115d14d0 */
  push32((uint32_t)(0x115d14d0u));
  /* 115a1cbd call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1cc3u);
  /* 115a1cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1cc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1cc8 call 0x115a3f50 */
  push32(0x115a1ccdu); f_115a3f50();
  /* 115a1ccd mov esi, esp */
  ESI = (ESP);
  /* 115a1ccf push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1cd1 push 0x115d1510 */
  push32((uint32_t)(0x115d1510u));
  /* 115a1cd6 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1cdcu);
  /* 115a1cdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1cdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1ce1 call 0x115a3f50 */
  push32(0x115a1ce6u); f_115a3f50();
  /* 115a1ce6 mov esi, esp */
  ESI = (ESP);
  /* 115a1ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1cea push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1cec call dword ptr [0x115d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4468))), 0x115a1cf2u);
  /* 115a1cf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1cf7 call 0x115a3f50 */
  push32(0x115a1cfcu); f_115a3f50();
  /* 115a1cfc mov esi, esp */
  ESI = (ESP);
  /* 115a1cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1d00 call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a1d06u);
  /* 115a1d06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1d0b call 0x115a3f50 */
  push32(0x115a1d10u); f_115a3f50();
  /* 115a1d10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a1d13 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1d17 ja 0x115a2158 */
  if ((!C.cf&&!C.zf)) goto L_115a2158;
  /* 115a1d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a1d20 jmp dword ptr [eax*4 + 0x115a371f] */
  switch (EAX) {
    case 0: goto L_115a1d27;
    case 1: goto L_115a1e78;
    case 2: goto L_115a1fb0;
    case 3: goto L_115a20b6;
    case 4: goto L_115a2bba;
    case 5: goto L_115a2c19;
    case 6: goto L_115a2c78;
    case 7: goto L_115a2cd4;
    case 8: goto L_115a2f85;
    case 9: goto L_115a2fde;
    case 10: goto L_115a3037;
    case 11: goto L_115a308d;
    default: x86_unimpl("switch@0x115a1d20 out of table"); return;
  }
L_115a1d27:;
  /* 115a1d27 mov esi, esp */
  ESI = (ESP);
  /* 115a1d29 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a1d2e push 3 */
  push32((uint32_t)(0x3u));
  /* 115a1d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1d32 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1d38u);
  /* 115a1d38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1d3d call 0x115a3f50 */
  push32(0x115a1d42u); f_115a3f50();
  /* 115a1d42 mov esi, esp */
  ESI = (ESP);
  /* 115a1d44 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a1d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1d4d call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1d53u);
  /* 115a1d53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1d56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1d58 call 0x115a3f50 */
  push32(0x115a1d5du); f_115a3f50();
  /* 115a1d5d mov esi, esp */
  ESI = (ESP);
  /* 115a1d5f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a1d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a1d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1d68 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1d6eu);
  /* 115a1d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1d71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1d73 call 0x115a3f50 */
  push32(0x115a1d78u); f_115a3f50();
  /* 115a1d78 mov esi, esp */
  ESI = (ESP);
  /* 115a1d7a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a1d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1d83 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1d89u);
  /* 115a1d89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1d8e call 0x115a3f50 */
  push32(0x115a1d93u); f_115a3f50();
  /* 115a1d93 mov esi, esp */
  ESI = (ESP);
  /* 115a1d95 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 115a1d9a push 5 */
  push32((uint32_t)(0x5u));
  /* 115a1d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1d9e call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1da4u);
  /* 115a1da4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1da7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1da9 call 0x115a3f50 */
  push32(0x115a1daeu); f_115a3f50();
  /* 115a1dae mov esi, esp */
  ESI = (ESP);
  /* 115a1db0 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 115a1db5 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a1db7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1db9 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1dbfu);
  /* 115a1dbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1dc4 call 0x115a3f50 */
  push32(0x115a1dc9u); f_115a3f50();
  /* 115a1dc9 mov esi, esp */
  ESI = (ESP);
  /* 115a1dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1dcd push 0x115d1518 */
  push32((uint32_t)(0x115d1518u));
  /* 115a1dd2 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1dd8u);
  /* 115a1dd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1ddb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1ddd call 0x115a3f50 */
  push32(0x115a1de2u); f_115a3f50();
  /* 115a1de2 mov esi, esp */
  ESI = (ESP);
  /* 115a1de4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1de6 push 0x115d1520 */
  push32((uint32_t)(0x115d1520u));
  /* 115a1deb call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1df1u);
  /* 115a1df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1df4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1df6 call 0x115a3f50 */
  push32(0x115a1dfbu); f_115a3f50();
  /* 115a1dfb mov esi, esp */
  ESI = (ESP);
  /* 115a1dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1dff push 0x115d1528 */
  push32((uint32_t)(0x115d1528u));
  /* 115a1e04 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1e0au);
  /* 115a1e0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1e0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1e0f call 0x115a3f50 */
  push32(0x115a1e14u); f_115a3f50();
  /* 115a1e14 mov esi, esp */
  ESI = (ESP);
  /* 115a1e16 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1e18 push 0x115d1530 */
  push32((uint32_t)(0x115d1530u));
  /* 115a1e1d call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1e23u);
  /* 115a1e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1e26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1e28 call 0x115a3f50 */
  push32(0x115a1e2du); f_115a3f50();
  /* 115a1e2d mov esi, esp */
  ESI = (ESP);
  /* 115a1e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1e31 push 0x115d1538 */
  push32((uint32_t)(0x115d1538u));
  /* 115a1e36 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1e3cu);
  /* 115a1e3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1e3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1e41 call 0x115a3f50 */
  push32(0x115a1e46u); f_115a3f50();
  /* 115a1e46 mov esi, esp */
  ESI = (ESP);
  /* 115a1e48 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1e4a push 0x115d1490 */
  push32((uint32_t)(0x115d1490u));
  /* 115a1e4f call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1e55u);
  /* 115a1e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1e58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1e5a call 0x115a3f50 */
  push32(0x115a1e5fu); f_115a3f50();
  /* 115a1e5f mov esi, esp */
  ESI = (ESP);
  /* 115a1e61 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a1e63 call dword ptr [0x115d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4474))), 0x115a1e69u);
  /* 115a1e69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1e6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1e6e call 0x115a3f50 */
  push32(0x115a1e73u); f_115a3f50();
  /* 115a1e73 jmp 0x115a2158 */
  goto L_115a2158;
L_115a1e78:;
  /* 115a1e78 mov esi, esp */
  ESI = (ESP);
  /* 115a1e7a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 115a1e7f push 3 */
  push32((uint32_t)(0x3u));
  /* 115a1e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1e83 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1e89u);
  /* 115a1e89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1e8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1e8e call 0x115a3f50 */
  push32(0x115a1e93u); f_115a3f50();
  /* 115a1e93 mov esi, esp */
  ESI = (ESP);
  /* 115a1e95 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 115a1e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1e9e call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1ea4u);
  /* 115a1ea4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1ea7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1ea9 call 0x115a3f50 */
  push32(0x115a1eaeu); f_115a3f50();
  /* 115a1eae mov esi, esp */
  ESI = (ESP);
  /* 115a1eb0 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 115a1eb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a1eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1eb9 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1ebfu);
  /* 115a1ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1ec2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1ec4 call 0x115a3f50 */
  push32(0x115a1ec9u); f_115a3f50();
  /* 115a1ec9 mov esi, esp */
  ESI = (ESP);
  /* 115a1ecb push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 115a1ed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1ed4 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1edau);
  /* 115a1eda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1edd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1edf call 0x115a3f50 */
  push32(0x115a1ee4u); f_115a3f50();
  /* 115a1ee4 mov esi, esp */
  ESI = (ESP);
  /* 115a1ee6 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a1eeb push 5 */
  push32((uint32_t)(0x5u));
  /* 115a1eed push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1eef call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1ef5u);
  /* 115a1ef5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1ef8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1efa call 0x115a3f50 */
  push32(0x115a1effu); f_115a3f50();
  /* 115a1eff mov esi, esp */
  ESI = (ESP);
  /* 115a1f01 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a1f06 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a1f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1f0a call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1f10u);
  /* 115a1f10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1f13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1f15 call 0x115a3f50 */
  push32(0x115a1f1au); f_115a3f50();
  /* 115a1f1a mov esi, esp */
  ESI = (ESP);
  /* 115a1f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1f1e push 0x115d1518 */
  push32((uint32_t)(0x115d1518u));
  /* 115a1f23 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1f29u);
  /* 115a1f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1f2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1f2e call 0x115a3f50 */
  push32(0x115a1f33u); f_115a3f50();
  /* 115a1f33 mov esi, esp */
  ESI = (ESP);
  /* 115a1f35 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1f37 push 0x115d1528 */
  push32((uint32_t)(0x115d1528u));
  /* 115a1f3c call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1f42u);
  /* 115a1f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1f45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1f47 call 0x115a3f50 */
  push32(0x115a1f4cu); f_115a3f50();
  /* 115a1f4c mov esi, esp */
  ESI = (ESP);
  /* 115a1f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1f50 push 0x115d1530 */
  push32((uint32_t)(0x115d1530u));
  /* 115a1f55 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1f5bu);
  /* 115a1f5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1f5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1f60 call 0x115a3f50 */
  push32(0x115a1f65u); f_115a3f50();
  /* 115a1f65 mov esi, esp */
  ESI = (ESP);
  /* 115a1f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1f69 push 0x115d1538 */
  push32((uint32_t)(0x115d1538u));
  /* 115a1f6e call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1f74u);
  /* 115a1f74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1f77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1f79 call 0x115a3f50 */
  push32(0x115a1f7eu); f_115a3f50();
  /* 115a1f7e mov esi, esp */
  ESI = (ESP);
  /* 115a1f80 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a1f82 push 0x115d1490 */
  push32((uint32_t)(0x115d1490u));
  /* 115a1f87 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a1f8du);
  /* 115a1f8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1f90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1f92 call 0x115a3f50 */
  push32(0x115a1f97u); f_115a3f50();
  /* 115a1f97 mov esi, esp */
  ESI = (ESP);
  /* 115a1f99 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a1f9b call dword ptr [0x115d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4474))), 0x115a1fa1u);
  /* 115a1fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1fa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1fa6 call 0x115a3f50 */
  push32(0x115a1fabu); f_115a3f50();
  /* 115a1fab jmp 0x115a2158 */
  goto L_115a2158;
L_115a1fb0:;
  /* 115a1fb0 mov esi, esp */
  ESI = (ESP);
  /* 115a1fb2 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 115a1fb7 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a1fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1fbb call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1fc1u);
  /* 115a1fc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1fc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1fc6 call 0x115a3f50 */
  push32(0x115a1fcbu); f_115a3f50();
  /* 115a1fcb mov esi, esp */
  ESI = (ESP);
  /* 115a1fcd push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 115a1fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1fd6 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1fdcu);
  /* 115a1fdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1fdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1fe1 call 0x115a3f50 */
  push32(0x115a1fe6u); f_115a3f50();
  /* 115a1fe6 mov esi, esp */
  ESI = (ESP);
  /* 115a1fe8 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 115a1fed push 2 */
  push32((uint32_t)(0x2u));
  /* 115a1fef push 0 */
  push32((uint32_t)(0x0u));
  /* 115a1ff1 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a1ff7u);
  /* 115a1ff7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a1ffa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a1ffc call 0x115a3f50 */
  push32(0x115a2001u); f_115a3f50();
  /* 115a2001 mov esi, esp */
  ESI = (ESP);
  /* 115a2003 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 115a2008 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a200a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a200c call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a2012u);
  /* 115a2012 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2015 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2017 call 0x115a3f50 */
  push32(0x115a201cu); f_115a3f50();
  /* 115a201c mov esi, esp */
  ESI = (ESP);
  /* 115a201e push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 115a2023 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2025 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2027 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a202du);
  /* 115a202d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2030 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2032 call 0x115a3f50 */
  push32(0x115a2037u); f_115a3f50();
  /* 115a2037 mov esi, esp */
  ESI = (ESP);
  /* 115a2039 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 115a203e push 4 */
  push32((uint32_t)(0x4u));
  /* 115a2040 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2042 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a2048u);
  /* 115a2048 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a204b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a204d call 0x115a3f50 */
  push32(0x115a2052u); f_115a3f50();
  /* 115a2052 mov esi, esp */
  ESI = (ESP);
  /* 115a2054 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2056 push 0x115d1520 */
  push32((uint32_t)(0x115d1520u));
  /* 115a205b call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a2061u);
  /* 115a2061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2064 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2066 call 0x115a3f50 */
  push32(0x115a206bu); f_115a3f50();
  /* 115a206b mov esi, esp */
  ESI = (ESP);
  /* 115a206d push 1 */
  push32((uint32_t)(0x1u));
  /* 115a206f push 0x115d1530 */
  push32((uint32_t)(0x115d1530u));
  /* 115a2074 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a207au);
  /* 115a207a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a207d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a207f call 0x115a3f50 */
  push32(0x115a2084u); f_115a3f50();
  /* 115a2084 mov esi, esp */
  ESI = (ESP);
  /* 115a2086 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2088 push 0x115d1490 */
  push32((uint32_t)(0x115d1490u));
  /* 115a208d call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a2093u);
  /* 115a2093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2098 call 0x115a3f50 */
  push32(0x115a209du); f_115a3f50();
  /* 115a209d mov esi, esp */
  ESI = (ESP);
  /* 115a209f push 5 */
  push32((uint32_t)(0x5u));
  /* 115a20a1 call dword ptr [0x115d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4474))), 0x115a20a7u);
  /* 115a20a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a20aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a20ac call 0x115a3f50 */
  push32(0x115a20b1u); f_115a3f50();
  /* 115a20b1 jmp 0x115a2158 */
  goto L_115a2158;
L_115a20b6:;
  /* 115a20b6 mov esi, esp */
  ESI = (ESP);
  /* 115a20b8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a20bd push 3 */
  push32((uint32_t)(0x3u));
  /* 115a20bf push 0 */
  push32((uint32_t)(0x0u));
  /* 115a20c1 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a20c7u);
  /* 115a20c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a20ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a20cc call 0x115a3f50 */
  push32(0x115a20d1u); f_115a3f50();
  /* 115a20d1 mov esi, esp */
  ESI = (ESP);
  /* 115a20d3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a20d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a20da push 0 */
  push32((uint32_t)(0x0u));
  /* 115a20dc call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a20e2u);
  /* 115a20e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a20e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a20e7 call 0x115a3f50 */
  push32(0x115a20ecu); f_115a3f50();
  /* 115a20ec mov esi, esp */
  ESI = (ESP);
  /* 115a20ee push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a20f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a20f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a20f7 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a20fdu);
  /* 115a20fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2102 call 0x115a3f50 */
  push32(0x115a2107u); f_115a3f50();
  /* 115a2107 mov esi, esp */
  ESI = (ESP);
  /* 115a2109 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a210e push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2110 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2112 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a2118u);
  /* 115a2118 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a211b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a211d call 0x115a3f50 */
  push32(0x115a2122u); f_115a3f50();
  /* 115a2122 mov esi, esp */
  ESI = (ESP);
  /* 115a2124 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 115a2129 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a212b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a212d call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a2133u);
  /* 115a2133 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2136 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2138 call 0x115a3f50 */
  push32(0x115a213du); f_115a3f50();
  /* 115a213d mov esi, esp */
  ESI = (ESP);
  /* 115a213f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 115a2144 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a2146 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2148 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a214eu);
  /* 115a214e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2151 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2153 call 0x115a3f50 */
  push32(0x115a2158u); f_115a3f50();
L_115a2158:;
  /* 115a2158 mov esi, esp */
  ESI = (ESP);
  /* 115a215a push 5 */
  push32((uint32_t)(0x5u));
  /* 115a215c call dword ptr [0x115d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4478))), 0x115a2162u);
  /* 115a2162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2167 call 0x115a3f50 */
  push32(0x115a216cu); f_115a3f50();
  /* 115a216c mov esi, esp */
  ESI = (ESP);
  /* 115a216e push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 115a2173 push 6 */
  push32((uint32_t)(0x6u));
  /* 115a2175 call dword ptr [0x115d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4470))), 0x115a217bu);
  /* 115a217b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a217e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2180 call 0x115a3f50 */
  push32(0x115a2185u); f_115a3f50();
  /* 115a2185 mov esi, esp */
  ESI = (ESP);
  /* 115a2187 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 115a218c push 1 */
  push32((uint32_t)(0x1u));
  /* 115a218e call dword ptr [0x115d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4470))), 0x115a2194u);
  /* 115a2194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2197 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2199 call 0x115a3f50 */
  push32(0x115a219eu); f_115a3f50();
  /* 115a219e mov esi, esp */
  ESI = (ESP);
  /* 115a21a0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a21a5 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a21a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a21a9 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a21afu);
  /* 115a21af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a21b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a21b4 call 0x115a3f50 */
  push32(0x115a21b9u); f_115a3f50();
  /* 115a21b9 mov esi, esp */
  ESI = (ESP);
  /* 115a21bb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a21c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a21c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a21c4 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a21cau);
  /* 115a21ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a21cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a21cf call 0x115a3f50 */
  push32(0x115a21d4u); f_115a3f50();
  /* 115a21d4 mov esi, esp */
  ESI = (ESP);
  /* 115a21d6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a21db push 2 */
  push32((uint32_t)(0x2u));
  /* 115a21dd push 2 */
  push32((uint32_t)(0x2u));
  /* 115a21df call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a21e5u);
  /* 115a21e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a21e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a21ea call 0x115a3f50 */
  push32(0x115a21efu); f_115a3f50();
  /* 115a21ef mov esi, esp */
  ESI = (ESP);
  /* 115a21f1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a21f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a21f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a21fa call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a2200u);
  /* 115a2200 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2203 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2205 call 0x115a3f50 */
  push32(0x115a220au); f_115a3f50();
  /* 115a220a mov esi, esp */
  ESI = (ESP);
  /* 115a220c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a2211 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2213 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2215 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a221bu);
  /* 115a221b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a221e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2220 call 0x115a3f50 */
  push32(0x115a2225u); f_115a3f50();
  /* 115a2225 mov esi, esp */
  ESI = (ESP);
  /* 115a2227 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a222c push 4 */
  push32((uint32_t)(0x4u));
  /* 115a222e push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2230 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a2236u);
  /* 115a2236 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a223b call 0x115a3f50 */
  push32(0x115a2240u); f_115a3f50();
  /* 115a2240 mov esi, esp */
  ESI = (ESP);
  /* 115a2242 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2244 call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a224au);
  /* 115a224a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a224d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a224f call 0x115a3f50 */
  push32(0x115a2254u); f_115a3f50();
  /* 115a2254 mov esi, esp */
  ESI = (ESP);
  /* 115a2256 push eax */
  push32((uint32_t)(EAX));
  /* 115a2257 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2259 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a225b push 1 */
  push32((uint32_t)(0x1u));
  /* 115a225d push 0x115cc320 */
  push32((uint32_t)(0x115cc320u));
  /* 115a2262 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2264 call dword ptr [0x115d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4480))), 0x115a226au);
  /* 115a226a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a226d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a226f call 0x115a3f50 */
  push32(0x115a2274u); f_115a3f50();
  /* 115a2274 mov esi, esp */
  ESI = (ESP);
  /* 115a2276 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a227b push 3 */
  push32((uint32_t)(0x3u));
  /* 115a227d push 3 */
  push32((uint32_t)(0x3u));
  /* 115a227f call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a2285u);
  /* 115a2285 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2288 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a228a call 0x115a3f50 */
  push32(0x115a228fu); f_115a3f50();
  /* 115a228f mov esi, esp */
  ESI = (ESP);
  /* 115a2291 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a2296 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2298 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a229a call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a22a0u);
  /* 115a22a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a22a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a22a5 call 0x115a3f50 */
  push32(0x115a22aau); f_115a3f50();
  /* 115a22aa mov esi, esp */
  ESI = (ESP);
  /* 115a22ac push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a22b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a22b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a22b5 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a22bbu);
  /* 115a22bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a22be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a22c0 call 0x115a3f50 */
  push32(0x115a22c5u); f_115a3f50();
  /* 115a22c5 mov esi, esp */
  ESI = (ESP);
  /* 115a22c7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a22cc push 1 */
  push32((uint32_t)(0x1u));
  /* 115a22ce push 3 */
  push32((uint32_t)(0x3u));
  /* 115a22d0 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a22d6u);
  /* 115a22d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a22d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a22db call 0x115a3f50 */
  push32(0x115a22e0u); f_115a3f50();
  /* 115a22e0 mov esi, esp */
  ESI = (ESP);
  /* 115a22e2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a22e7 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a22e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a22eb call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a22f1u);
  /* 115a22f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a22f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a22f6 call 0x115a3f50 */
  push32(0x115a22fbu); f_115a3f50();
  /* 115a22fb mov esi, esp */
  ESI = (ESP);
  /* 115a22fd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 115a2302 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a2304 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a2306 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a230cu);
  /* 115a230c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a230f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2311 call 0x115a3f50 */
  push32(0x115a2316u); f_115a3f50();
  /* 115a2316 mov esi, esp */
  ESI = (ESP);
  /* 115a2318 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a231a call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a2320u);
  /* 115a2320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2323 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2325 call 0x115a3f50 */
  push32(0x115a232au); f_115a3f50();
  /* 115a232a mov esi, esp */
  ESI = (ESP);
  /* 115a232c push eax */
  push32((uint32_t)(EAX));
  /* 115a232d push 2 */
  push32((uint32_t)(0x2u));
  /* 115a232f push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2331 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2333 push 0x115cc314 */
  push32((uint32_t)(0x115cc314u));
  /* 115a2338 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a233a call dword ptr [0x115d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4480))), 0x115a2340u);
  /* 115a2340 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2343 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2345 call 0x115a3f50 */
  push32(0x115a234au); f_115a3f50();
L_115a234a:;
  /* 115a234a mov esi, esp */
  ESI = (ESP);
  /* 115a234c push 6 */
  push32((uint32_t)(0x6u));
  /* 115a234e call dword ptr [0x115d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4484))), 0x115a2354u);
  /* 115a2354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2357 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2359 call 0x115a3f50 */
  push32(0x115a235eu); f_115a3f50();
  /* 115a235e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2365 je 0x115a23c5 */
  if (C.zf) goto L_115a23c5;
  /* 115a2367 mov esi, esp */
  ESI = (ESP);
  /* 115a2369 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 115a236b call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2371u);
  /* 115a2371 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2374 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2376 call 0x115a3f50 */
  push32(0x115a237bu); f_115a3f50();
  /* 115a237b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2382 je 0x115a23c5 */
  if (C.zf) goto L_115a23c5;
  /* 115a2384 mov esi, esp */
  ESI = (ESP);
  /* 115a2386 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2388 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 115a238a call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a2390u);
  /* 115a2390 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2395 call 0x115a3f50 */
  push32(0x115a239au); f_115a3f50();
  /* 115a239a mov esi, esp */
  ESI = (ESP);
  /* 115a239c push 0x115cc308 */
  push32((uint32_t)(0x115cc308u));
  /* 115a23a1 call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a23a7u);
  /* 115a23a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a23aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a23ac call 0x115a3f50 */
  push32(0x115a23b1u); f_115a3f50();
  /* 115a23b1 mov esi, esp */
  ESI = (ESP);
  /* 115a23b3 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 115a23b5 call dword ptr [0x115d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d445c))), 0x115a23bbu);
  /* 115a23bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a23be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a23c0 call 0x115a3f50 */
  push32(0x115a23c5u); f_115a3f50();
L_115a23c5:;
  /* 115a23c5 mov esi, esp */
  ESI = (ESP);
  /* 115a23c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a23c9 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a23cfu);
  /* 115a23cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a23d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a23d4 call 0x115a3f50 */
  push32(0x115a23d9u); f_115a3f50();
  /* 115a23d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a23de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a23e0 jne 0x115a246b */
  if (!C.zf) goto L_115a246b;
  /* 115a23e6 mov esi, esp */
  ESI = (ESP);
  /* 115a23e8 push 0x115d1488 */
  push32((uint32_t)(0x115d1488u));
  /* 115a23ed push 0x115d1540 */
  push32((uint32_t)(0x115d1540u));
  /* 115a23f2 call dword ptr [0x115d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d448c))), 0x115a23f8u);
  /* 115a23f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a23fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a23fd call 0x115a3f50 */
  push32(0x115a2402u); f_115a3f50();
  /* 115a2402 mov esi, eax */
  ESI = (EAX);
  /* 115a2404 mov edi, esp */
  EDI = (ESP);
  /* 115a2406 push 0x115d1488 */
  push32((uint32_t)(0x115d1488u));
  /* 115a240b call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2411u);
  /* 115a2411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2414 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2416 call 0x115a3f50 */
  push32(0x115a241bu); f_115a3f50();
  /* 115a241b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a241d jge 0x115a246b */
  if ((C.sf==C.of)) goto L_115a246b;
  /* 115a241f mov esi, esp */
  ESI = (ESP);
  /* 115a2421 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2423 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2425 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a242bu);
  /* 115a242b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a242e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2430 call 0x115a3f50 */
  push32(0x115a2435u); f_115a3f50();
  /* 115a2435 mov esi, esp */
  ESI = (ESP);
  /* 115a2437 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2439 push 0x115d1488 */
  push32((uint32_t)(0x115d1488u));
  /* 115a243e call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a2444u);
  /* 115a2444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2447 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2449 call 0x115a3f50 */
  push32(0x115a244eu); f_115a3f50();
  /* 115a244e mov esi, esp */
  ESI = (ESP);
  /* 115a2450 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2452 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 115a2454 push 0x115d1588 */
  push32((uint32_t)(0x115d1588u));
  /* 115a2459 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a245b call dword ptr [0x115d4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4488))), 0x115a2461u);
  /* 115a2461 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2464 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2466 call 0x115a3f50 */
  push32(0x115a246bu); f_115a3f50();
L_115a246b:;
  /* 115a246b mov esi, esp */
  ESI = (ESP);
  /* 115a246d push 1 */
  push32((uint32_t)(0x1u));
  /* 115a246f call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2475u);
  /* 115a2475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2478 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a247a call 0x115a3f50 */
  push32(0x115a247fu); f_115a3f50();
  /* 115a247f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2486 je 0x115a250f */
  if (C.zf) goto L_115a250f;
  /* 115a248c mov esi, esp */
  ESI = (ESP);
  /* 115a248e push 0x115d1488 */
  push32((uint32_t)(0x115d1488u));
  /* 115a2493 push 0x115d1540 */
  push32((uint32_t)(0x115d1540u));
  /* 115a2498 call dword ptr [0x115d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d448c))), 0x115a249eu);
  /* 115a249e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a24a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a24a3 call 0x115a3f50 */
  push32(0x115a24a8u); f_115a3f50();
  /* 115a24a8 mov esi, eax */
  ESI = (EAX);
  /* 115a24aa mov edi, esp */
  EDI = (ESP);
  /* 115a24ac push 0x115d1488 */
  push32((uint32_t)(0x115d1488u));
  /* 115a24b1 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a24b7u);
  /* 115a24b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a24ba cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a24bc call 0x115a3f50 */
  push32(0x115a24c1u); f_115a3f50();
  /* 115a24c1 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a24c3 jne 0x115a250f */
  if (!C.zf) goto L_115a250f;
  /* 115a24c5 mov esi, esp */
  ESI = (ESP);
  /* 115a24c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a24c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a24cb call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a24d1u);
  /* 115a24d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a24d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a24d6 call 0x115a3f50 */
  push32(0x115a24dbu); f_115a3f50();
  /* 115a24db mov esi, esp */
  ESI = (ESP);
  /* 115a24dd push 0 */
  push32((uint32_t)(0x0u));
  /* 115a24df push 0x115d1488 */
  push32((uint32_t)(0x115d1488u));
  /* 115a24e4 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a24eau);
  /* 115a24ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a24ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a24ef call 0x115a3f50 */
  push32(0x115a24f4u); f_115a3f50();
  /* 115a24f4 mov esi, esp */
  ESI = (ESP);
  /* 115a24f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a24f8 push 0x115d1580 */
  push32((uint32_t)(0x115d1580u));
  /* 115a24fd push 5 */
  push32((uint32_t)(0x5u));
  /* 115a24ff call dword ptr [0x115d4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4498))), 0x115a2505u);
  /* 115a2505 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2508 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a250a call 0x115a3f50 */
  push32(0x115a250fu); f_115a3f50();
L_115a250f:;
  /* 115a250f mov esi, esp */
  ESI = (ESP);
  /* 115a2511 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2513 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2519u);
  /* 115a2519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a251c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a251e call 0x115a3f50 */
  push32(0x115a2523u); f_115a3f50();
  /* 115a2523 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a252a je 0x115a261f */
  if (C.zf) goto L_115a261f;
  /* 115a2530 mov esi, esp */
  ESI = (ESP);
  /* 115a2532 push 0x115d1488 */
  push32((uint32_t)(0x115d1488u));
  /* 115a2537 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a253du);
  /* 115a253d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2540 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2542 call 0x115a3f50 */
  push32(0x115a2547u); f_115a3f50();
  /* 115a2547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2549 jne 0x115a261f */
  if (!C.zf) goto L_115a261f;
  /* 115a254f mov esi, esp */
  ESI = (ESP);
  /* 115a2551 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2553 push 0x115d1540 */
  push32((uint32_t)(0x115d1540u));
  /* 115a2558 call dword ptr [0x115d449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d449c))), 0x115a255eu);
  /* 115a255e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2563 call 0x115a3f50 */
  push32(0x115a2568u); f_115a3f50();
  /* 115a2568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a256a jle 0x115a261f */
  if ((C.zf||C.sf!=C.of)) goto L_115a261f;
  /* 115a2570 mov esi, esp */
  ESI = (ESP);
  /* 115a2572 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2574 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2576 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a257cu);
  /* 115a257c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a257f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2581 call 0x115a3f50 */
  push32(0x115a2586u); f_115a3f50();
  /* 115a2586 mov esi, esp */
  ESI = (ESP);
  /* 115a2588 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a258a call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a2590u);
  /* 115a2590 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2593 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2595 call 0x115a3f50 */
  push32(0x115a259au); f_115a3f50();
  /* 115a259a imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a25a0 mov ecx, 0x1f40 */
  ECX = (0x1f40u);
  /* 115a25a5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a25a7 mov esi, esp */
  ESI = (ESP);
  /* 115a25a9 push ecx */
  push32((uint32_t)(ECX));
  /* 115a25aa push 0x115cc300 */
  push32((uint32_t)(0x115cc300u));
  /* 115a25af call dword ptr [0x115d4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4494))), 0x115a25b5u);
  /* 115a25b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a25b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a25ba call 0x115a3f50 */
  push32(0x115a25bfu); f_115a3f50();
  /* 115a25bf mov esi, esp */
  ESI = (ESP);
  /* 115a25c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a25c3 call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a25c9u);
  /* 115a25c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a25cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a25ce call 0x115a3f50 */
  push32(0x115a25d3u); f_115a3f50();
  /* 115a25d3 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a25d9 mov edx, 0x1f40 */
  EDX = (0x1f40u);
  /* 115a25de sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a25e0 mov esi, esp */
  ESI = (ESP);
  /* 115a25e2 push edx */
  push32((uint32_t)(EDX));
  /* 115a25e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a25e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a25e7 call dword ptr [0x115d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44a4))), 0x115a25edu);
  /* 115a25ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a25f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a25f2 call 0x115a3f50 */
  push32(0x115a25f7u); f_115a3f50();
  /* 115a25f7 mov esi, esp */
  ESI = (ESP);
  /* 115a25f9 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 115a25fb call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a2601u);
  /* 115a2601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2604 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2606 call 0x115a3f50 */
  push32(0x115a260bu); f_115a3f50();
  /* 115a260b mov esi, esp */
  ESI = (ESP);
  /* 115a260d push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 115a260f call dword ptr [0x115d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d445c))), 0x115a2615u);
  /* 115a2615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2618 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a261a call 0x115a3f50 */
  push32(0x115a261fu); f_115a3f50();
L_115a261f:;
  /* 115a261f mov esi, esp */
  ESI = (ESP);
  /* 115a2621 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115a2623 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2629u);
  /* 115a2629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a262c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a262e call 0x115a3f50 */
  push32(0x115a2633u); f_115a3f50();
  /* 115a2633 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a263a jne 0x115a26c5 */
  if (!C.zf) goto L_115a26c5;
  /* 115a2640 mov esi, esp */
  ESI = (ESP);
  /* 115a2642 push 0x115d1480 */
  push32((uint32_t)(0x115d1480u));
  /* 115a2647 push 0x115d1548 */
  push32((uint32_t)(0x115d1548u));
  /* 115a264c call dword ptr [0x115d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d448c))), 0x115a2652u);
  /* 115a2652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2657 call 0x115a3f50 */
  push32(0x115a265cu); f_115a3f50();
  /* 115a265c mov esi, eax */
  ESI = (EAX);
  /* 115a265e mov edi, esp */
  EDI = (ESP);
  /* 115a2660 push 0x115d1480 */
  push32((uint32_t)(0x115d1480u));
  /* 115a2665 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a266bu);
  /* 115a266b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a266e cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2670 call 0x115a3f50 */
  push32(0x115a2675u); f_115a3f50();
  /* 115a2675 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2677 jge 0x115a26c5 */
  if ((C.sf==C.of)) goto L_115a26c5;
  /* 115a2679 mov esi, esp */
  ESI = (ESP);
  /* 115a267b push 1 */
  push32((uint32_t)(0x1u));
  /* 115a267d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115a267f call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a2685u);
  /* 115a2685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2688 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a268a call 0x115a3f50 */
  push32(0x115a268fu); f_115a3f50();
  /* 115a268f mov esi, esp */
  ESI = (ESP);
  /* 115a2691 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2693 push 0x115d1480 */
  push32((uint32_t)(0x115d1480u));
  /* 115a2698 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a269eu);
  /* 115a269e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a26a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a26a3 call 0x115a3f50 */
  push32(0x115a26a8u); f_115a3f50();
  /* 115a26a8 mov esi, esp */
  ESI = (ESP);
  /* 115a26aa push 0 */
  push32((uint32_t)(0x0u));
  /* 115a26ac push 0 */
  push32((uint32_t)(0x0u));
  /* 115a26ae push 0x115d1598 */
  push32((uint32_t)(0x115d1598u));
  /* 115a26b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a26b5 call dword ptr [0x115d4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4488))), 0x115a26bbu);
  /* 115a26bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a26be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a26c0 call 0x115a3f50 */
  push32(0x115a26c5u); f_115a3f50();
L_115a26c5:;
  /* 115a26c5 mov esi, esp */
  ESI = (ESP);
  /* 115a26c7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115a26c9 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a26cfu);
  /* 115a26cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a26d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a26d4 call 0x115a3f50 */
  push32(0x115a26d9u); f_115a3f50();
  /* 115a26d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a26de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a26e0 je 0x115a2769 */
  if (C.zf) goto L_115a2769;
  /* 115a26e6 mov esi, esp */
  ESI = (ESP);
  /* 115a26e8 push 0x115d1480 */
  push32((uint32_t)(0x115d1480u));
  /* 115a26ed push 0x115d1548 */
  push32((uint32_t)(0x115d1548u));
  /* 115a26f2 call dword ptr [0x115d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d448c))), 0x115a26f8u);
  /* 115a26f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a26fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a26fd call 0x115a3f50 */
  push32(0x115a2702u); f_115a3f50();
  /* 115a2702 mov esi, eax */
  ESI = (EAX);
  /* 115a2704 mov edi, esp */
  EDI = (ESP);
  /* 115a2706 push 0x115d1480 */
  push32((uint32_t)(0x115d1480u));
  /* 115a270b call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2711u);
  /* 115a2711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2714 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2716 call 0x115a3f50 */
  push32(0x115a271bu); f_115a3f50();
  /* 115a271b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a271d jne 0x115a2769 */
  if (!C.zf) goto L_115a2769;
  /* 115a271f mov esi, esp */
  ESI = (ESP);
  /* 115a2721 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2723 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 115a2725 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a272bu);
  /* 115a272b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a272e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2730 call 0x115a3f50 */
  push32(0x115a2735u); f_115a3f50();
  /* 115a2735 mov esi, esp */
  ESI = (ESP);
  /* 115a2737 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2739 push 0x115d1480 */
  push32((uint32_t)(0x115d1480u));
  /* 115a273e call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a2744u);
  /* 115a2744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2747 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2749 call 0x115a3f50 */
  push32(0x115a274eu); f_115a3f50();
  /* 115a274e mov esi, esp */
  ESI = (ESP);
  /* 115a2750 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2752 push 0x115d1590 */
  push32((uint32_t)(0x115d1590u));
  /* 115a2757 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2759 call dword ptr [0x115d4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4498))), 0x115a275fu);
  /* 115a275f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2762 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2764 call 0x115a3f50 */
  push32(0x115a2769u); f_115a3f50();
L_115a2769:;
  /* 115a2769 mov esi, esp */
  ESI = (ESP);
  /* 115a276b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115a276d call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2773u);
  /* 115a2773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2778 call 0x115a3f50 */
  push32(0x115a277du); f_115a3f50();
  /* 115a277d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2784 je 0x115a2851 */
  if (C.zf) goto L_115a2851;
  /* 115a278a mov esi, esp */
  ESI = (ESP);
  /* 115a278c push 0x115d1480 */
  push32((uint32_t)(0x115d1480u));
  /* 115a2791 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2797u);
  /* 115a2797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a279a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a279c call 0x115a3f50 */
  push32(0x115a27a1u); f_115a3f50();
  /* 115a27a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a27a3 jne 0x115a2851 */
  if (!C.zf) goto L_115a2851;
  /* 115a27a9 mov esi, esp */
  ESI = (ESP);
  /* 115a27ab push 0 */
  push32((uint32_t)(0x0u));
  /* 115a27ad push 0x115d1548 */
  push32((uint32_t)(0x115d1548u));
  /* 115a27b2 call dword ptr [0x115d449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d449c))), 0x115a27b8u);
  /* 115a27b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a27bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a27bd call 0x115a3f50 */
  push32(0x115a27c2u); f_115a3f50();
  /* 115a27c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a27c4 jle 0x115a2851 */
  if ((C.zf||C.sf!=C.of)) goto L_115a2851;
  /* 115a27ca mov esi, esp */
  ESI = (ESP);
  /* 115a27cc push 0 */
  push32((uint32_t)(0x0u));
  /* 115a27ce push 0x15 */
  push32((uint32_t)(0x15u));
  /* 115a27d0 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a27d6u);
  /* 115a27d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a27d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a27db call 0x115a3f50 */
  push32(0x115a27e0u); f_115a3f50();
  /* 115a27e0 mov esi, esp */
  ESI = (ESP);
  /* 115a27e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a27e4 call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a27eau);
  /* 115a27ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a27ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a27ef call 0x115a3f50 */
  push32(0x115a27f4u); f_115a3f50();
  /* 115a27f4 imul eax, eax, 0x3a98 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3a98u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a27fa mov ecx, 0x13880 */
  ECX = (0x13880u);
  /* 115a27ff sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a2801 mov esi, esp */
  ESI = (ESP);
  /* 115a2803 push ecx */
  push32((uint32_t)(ECX));
  /* 115a2804 push 0x115cc300 */
  push32((uint32_t)(0x115cc300u));
  /* 115a2809 call dword ptr [0x115d4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4494))), 0x115a280fu);
  /* 115a280f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2812 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2814 call 0x115a3f50 */
  push32(0x115a2819u); f_115a3f50();
  /* 115a2819 mov esi, esp */
  ESI = (ESP);
  /* 115a281b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a281d call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a2823u);
  /* 115a2823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2826 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2828 call 0x115a3f50 */
  push32(0x115a282du); f_115a3f50();
  /* 115a282d imul eax, eax, 0x3a98 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3a98u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a2833 mov edx, 0x13880 */
  EDX = (0x13880u);
  /* 115a2838 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a283a mov esi, esp */
  ESI = (ESP);
  /* 115a283c push edx */
  push32((uint32_t)(EDX));
  /* 115a283d push 1 */
  push32((uint32_t)(0x1u));
  /* 115a283f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2841 call dword ptr [0x115d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44a4))), 0x115a2847u);
  /* 115a2847 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a284a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a284c call 0x115a3f50 */
  push32(0x115a2851u); f_115a3f50();
L_115a2851:;
  /* 115a2851 mov esi, esp */
  ESI = (ESP);
  /* 115a2853 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2855 call dword ptr [0x115d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4484))), 0x115a285bu);
  /* 115a285b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a285e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2860 call 0x115a3f50 */
  push32(0x115a2865u); f_115a3f50();
  /* 115a2865 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a286a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a286c je 0x115a294b */
  if (C.zf) goto L_115a294b;
  /* 115a2872 mov esi, esp */
  ESI = (ESP);
  /* 115a2874 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 115a2876 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a287cu);
  /* 115a287c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a287f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2881 call 0x115a3f50 */
  push32(0x115a2886u); f_115a3f50();
  /* 115a2886 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a288b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a288d je 0x115a294b */
  if (C.zf) goto L_115a294b;
  /* 115a2893 mov esi, esp */
  ESI = (ESP);
  /* 115a2895 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2897 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 115a2899 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a289fu);
  /* 115a289f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a28a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a28a4 call 0x115a3f50 */
  push32(0x115a28a9u); f_115a3f50();
  /* 115a28a9 mov esi, esp */
  ESI = (ESP);
  /* 115a28ab push 0x115cc2f4 */
  push32((uint32_t)(0x115cc2f4u));
  /* 115a28b0 call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a28b6u);
  /* 115a28b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a28b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a28bb call 0x115a3f50 */
  push32(0x115a28c0u); f_115a3f50();
  /* 115a28c0 mov esi, esp */
  ESI = (ESP);
  /* 115a28c2 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 115a28c4 call dword ptr [0x115d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d445c))), 0x115a28cau);
  /* 115a28ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a28cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a28cf call 0x115a3f50 */
  push32(0x115a28d4u); f_115a3f50();
  /* 115a28d4 mov esi, esp */
  ESI = (ESP);
  /* 115a28d6 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 115a28d8 call dword ptr [0x115d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d445c))), 0x115a28deu);
  /* 115a28de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a28e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a28e3 call 0x115a3f50 */
  push32(0x115a28e8u); f_115a3f50();
  /* 115a28e8 mov esi, esp */
  ESI = (ESP);
  /* 115a28ea push 1 */
  push32((uint32_t)(0x1u));
  /* 115a28ec push 1 */
  push32((uint32_t)(0x1u));
  /* 115a28ee push 0x115d14e8 */
  push32((uint32_t)(0x115d14e8u));
  /* 115a28f3 call dword ptr [0x115d44a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44a8))), 0x115a28f9u);
  /* 115a28f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a28fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a28fe call 0x115a3f50 */
  push32(0x115a2903u); f_115a3f50();
  /* 115a2903 mov esi, esp */
  ESI = (ESP);
  /* 115a2905 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2907 push 0x115d14d0 */
  push32((uint32_t)(0x115d14d0u));
  /* 115a290c call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a2912u);
  /* 115a2912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2917 call 0x115a3f50 */
  push32(0x115a291cu); f_115a3f50();
  /* 115a291c mov esi, esp */
  ESI = (ESP);
  /* 115a291e push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2920 push 0x115d1510 */
  push32((uint32_t)(0x115d1510u));
  /* 115a2925 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a292bu);
  /* 115a292b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a292e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2930 call 0x115a3f50 */
  push32(0x115a2935u); f_115a3f50();
  /* 115a2935 mov esi, esp */
  ESI = (ESP);
  /* 115a2937 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2939 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a293b call dword ptr [0x115d44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44a0))), 0x115a2941u);
  /* 115a2941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2944 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2946 call 0x115a3f50 */
  push32(0x115a294bu); f_115a3f50();
L_115a294b:;
  /* 115a294b mov esi, esp */
  ESI = (ESP);
  /* 115a294d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 115a294f call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2955u);
  /* 115a2955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2958 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a295a call 0x115a3f50 */
  push32(0x115a295fu); f_115a3f50();
  /* 115a295f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2966 je 0x115a29f6 */
  if (C.zf) goto L_115a29f6;
  /* 115a296c mov esi, esp */
  ESI = (ESP);
  /* 115a296e push 0x115d1448 */
  push32((uint32_t)(0x115d1448u));
  /* 115a2973 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2979u);
  /* 115a2979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a297c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a297e call 0x115a3f50 */
  push32(0x115a2983u); f_115a3f50();
  /* 115a2983 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2985 jne 0x115a29f6 */
  if (!C.zf) goto L_115a29f6;
  /* 115a2987 mov esi, esp */
  ESI = (ESP);
  /* 115a2989 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a298b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 115a298d call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a2993u);
  /* 115a2993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2996 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2998 call 0x115a3f50 */
  push32(0x115a299du); f_115a3f50();
  /* 115a299d mov esi, esp */
  ESI = (ESP);
  /* 115a299f push 3 */
  push32((uint32_t)(0x3u));
  /* 115a29a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a29a3 call dword ptr [0x115d44b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44b0))), 0x115a29a9u);
  /* 115a29a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a29ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a29ae call 0x115a3f50 */
  push32(0x115a29b3u); f_115a3f50();
  /* 115a29b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a29b5 jle 0x115a29d0 */
  if ((C.zf||C.sf!=C.of)) goto L_115a29d0;
  /* 115a29b7 mov esi, esp */
  ESI = (ESP);
  /* 115a29b9 push 0x115cc2ec */
  push32((uint32_t)(0x115cc2ecu));
  /* 115a29be call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a29c4u);
  /* 115a29c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a29c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a29c9 call 0x115a3f50 */
  push32(0x115a29ceu); f_115a3f50();
  /* 115a29ce jmp 0x115a29e7 */
  goto L_115a29e7;
L_115a29d0:;
  /* 115a29d0 mov esi, esp */
  ESI = (ESP);
  /* 115a29d2 push 0x115cc2e0 */
  push32((uint32_t)(0x115cc2e0u));
  /* 115a29d7 call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a29ddu);
  /* 115a29dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a29e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a29e2 call 0x115a3f50 */
  push32(0x115a29e7u); f_115a3f50();
L_115a29e7:;
  /* 115a29e7 mov esi, esp */
  ESI = (ESP);
  /* 115a29e9 call dword ptr [0x115d44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44b4))), 0x115a29efu);
  /* 115a29ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a29f1 call 0x115a3f50 */
  push32(0x115a29f6u); f_115a3f50();
L_115a29f6:;
  /* 115a29f6 mov esi, esp */
  ESI = (ESP);
  /* 115a29f8 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a29fa call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2a00u);
  /* 115a2a00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2a03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2a05 call 0x115a3f50 */
  push32(0x115a2a0au); f_115a3f50();
  /* 115a2a0a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2a0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2a11 je 0x115a2a6a */
  if (C.zf) goto L_115a2a6a;
  /* 115a2a13 mov esi, esp */
  ESI = (ESP);
  /* 115a2a15 push 0x115d15a0 */
  push32((uint32_t)(0x115d15a0u));
  /* 115a2a1a call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2a20u);
  /* 115a2a20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2a25 call 0x115a3f50 */
  push32(0x115a2a2au); f_115a3f50();
  /* 115a2a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2a2c jne 0x115a2a6a */
  if (!C.zf) goto L_115a2a6a;
  /* 115a2a2e mov esi, esp */
  ESI = (ESP);
  /* 115a2a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2a32 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a2a34 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a2a3au);
  /* 115a2a3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2a3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2a3f call 0x115a3f50 */
  push32(0x115a2a44u); f_115a3f50();
  /* 115a2a44 mov esi, esp */
  ESI = (ESP);
  /* 115a2a46 push 0x115cc2d4 */
  push32((uint32_t)(0x115cc2d4u));
  /* 115a2a4b call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a2a51u);
  /* 115a2a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2a54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2a56 call 0x115a3f50 */
  push32(0x115a2a5bu); f_115a3f50();
  /* 115a2a5b mov esi, esp */
  ESI = (ESP);
  /* 115a2a5d call dword ptr [0x115d44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44b4))), 0x115a2a63u);
  /* 115a2a63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2a65 call 0x115a3f50 */
  push32(0x115a2a6au); f_115a3f50();
L_115a2a6a:;
  /* 115a2a6a mov esi, esp */
  ESI = (ESP);
  /* 115a2a6c push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2a6e call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2a74u);
  /* 115a2a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2a77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2a79 call 0x115a3f50 */
  push32(0x115a2a7eu); f_115a3f50();
  /* 115a2a7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2a83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2a85 jne 0x115a2afd */
  if (!C.zf) goto L_115a2afd;
  /* 115a2a87 mov esi, esp */
  ESI = (ESP);
  /* 115a2a89 push 0xf */
  push32((uint32_t)(0xfu));
  /* 115a2a8b call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2a91u);
  /* 115a2a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2a96 call 0x115a3f50 */
  push32(0x115a2a9bu); f_115a3f50();
  /* 115a2a9b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2aa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2aa2 jne 0x115a2afd */
  if (!C.zf) goto L_115a2afd;
  /* 115a2aa4 mov esi, esp */
  ESI = (ESP);
  /* 115a2aa6 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 115a2aa8 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2aaeu);
  /* 115a2aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2ab3 call 0x115a3f50 */
  push32(0x115a2ab8u); f_115a3f50();
  /* 115a2ab8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2abf je 0x115a2afd */
  if (C.zf) goto L_115a2afd;
  /* 115a2ac1 mov esi, esp */
  ESI = (ESP);
  /* 115a2ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2ac5 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 115a2ac7 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a2acdu);
  /* 115a2acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2ad2 call 0x115a3f50 */
  push32(0x115a2ad7u); f_115a3f50();
  /* 115a2ad7 mov esi, esp */
  ESI = (ESP);
  /* 115a2ad9 push 0x115cc2cc */
  push32((uint32_t)(0x115cc2ccu));
  /* 115a2ade call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a2ae4u);
  /* 115a2ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2ae9 call 0x115a3f50 */
  push32(0x115a2aeeu); f_115a3f50();
  /* 115a2aee mov esi, esp */
  ESI = (ESP);
  /* 115a2af0 call dword ptr [0x115d44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44ac))), 0x115a2af6u);
  /* 115a2af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2af8 call 0x115a3f50 */
  push32(0x115a2afdu); f_115a3f50();
L_115a2afd:;
  /* 115a2afd mov esi, esp */
  ESI = (ESP);
  /* 115a2aff push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2b01 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2b07u);
  /* 115a2b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2b0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2b0c call 0x115a3f50 */
  push32(0x115a2b11u); f_115a3f50();
  /* 115a2b11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2b18 je 0x115a2d2e */
  if (C.zf) goto L_115a2d2e;
  /* 115a2b1e mov esi, esp */
  ESI = (ESP);
  /* 115a2b20 push 0xa */
  push32((uint32_t)(0xau));
  /* 115a2b22 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2b28u);
  /* 115a2b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2b2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2b2d call 0x115a3f50 */
  push32(0x115a2b32u); f_115a3f50();
  /* 115a2b32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2b39 je 0x115a2d2e */
  if (C.zf) goto L_115a2d2e;
  /* 115a2b3f mov esi, esp */
  ESI = (ESP);
  /* 115a2b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2b43 push 0x115d1540 */
  push32((uint32_t)(0x115d1540u));
  /* 115a2b48 call dword ptr [0x115d449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d449c))), 0x115a2b4eu);
  /* 115a2b4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2b51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2b53 call 0x115a3f50 */
  push32(0x115a2b58u); f_115a3f50();
  /* 115a2b58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2b5a jne 0x115a2d2e */
  if (!C.zf) goto L_115a2d2e;
  /* 115a2b60 mov esi, esp */
  ESI = (ESP);
  /* 115a2b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2b64 push 0xa */
  push32((uint32_t)(0xau));
  /* 115a2b66 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a2b6cu);
  /* 115a2b6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2b6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2b71 call 0x115a3f50 */
  push32(0x115a2b76u); f_115a3f50();
  /* 115a2b76 mov esi, esp */
  ESI = (ESP);
  /* 115a2b78 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 115a2b7d push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2b7f call dword ptr [0x115d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4470))), 0x115a2b85u);
  /* 115a2b85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2b8a call 0x115a3f50 */
  push32(0x115a2b8fu); f_115a3f50();
  /* 115a2b8f mov esi, esp */
  ESI = (ESP);
  /* 115a2b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2b93 call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a2b99u);
  /* 115a2b99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2b9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2b9e call 0x115a3f50 */
  push32(0x115a2ba3u); f_115a3f50();
  /* 115a2ba3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a2ba6 cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2baa ja 0x115a2d2e */
  if ((!C.cf&&!C.zf)) goto L_115a2d2e;
  /* 115a2bb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a2bb3 jmp dword ptr [eax*4 + 0x115a372f] */
  switch (EAX) {
    case 0: goto L_115a2bba;
    case 1: goto L_115a2c19;
    case 2: goto L_115a2c78;
    case 3: goto L_115a2cd4;
    case 4: goto L_115a2f85;
    case 5: goto L_115a2fde;
    case 6: goto L_115a3037;
    case 7: goto L_115a308d;
    default: x86_unimpl("switch@0x115a2bb3 out of table"); return;
  }
L_115a2bba:;
  /* 115a2bba mov esi, esp */
  ESI = (ESP);
  /* 115a2bbc push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115a2bc1 push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a2bc6 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2bc8 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a2bcd push 0x115d1578 */
  push32((uint32_t)(0x115d1578u));
  /* 115a2bd2 push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a2bd7 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2bddu);
  /* 115a2bdd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2be0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2be2 call 0x115a3f50 */
  push32(0x115a2be7u); f_115a3f50();
  /* 115a2be7 mov esi, esp */
  ESI = (ESP);
  /* 115a2be9 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115a2bee push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a2bf3 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2bf5 push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a2bfa push 0x115d1578 */
  push32((uint32_t)(0x115d1578u));
  /* 115a2bff push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a2c04 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2c0au);
  /* 115a2c0a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2c0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2c0f call 0x115a3f50 */
  push32(0x115a2c14u); f_115a3f50();
  /* 115a2c14 jmp 0x115a2d2e */
  goto L_115a2d2e;
L_115a2c19:;
  /* 115a2c19 mov esi, esp */
  ESI = (ESP);
  /* 115a2c1b push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115a2c20 push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a2c25 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2c27 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a2c2c push 0x115d14b0 */
  push32((uint32_t)(0x115d14b0u));
  /* 115a2c31 push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a2c36 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2c3cu);
  /* 115a2c3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2c3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2c41 call 0x115a3f50 */
  push32(0x115a2c46u); f_115a3f50();
  /* 115a2c46 mov esi, esp */
  ESI = (ESP);
  /* 115a2c48 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115a2c4d push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a2c52 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2c54 push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a2c59 push 0x115d14b0 */
  push32((uint32_t)(0x115d14b0u));
  /* 115a2c5e push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a2c63 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2c69u);
  /* 115a2c69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2c6e call 0x115a3f50 */
  push32(0x115a2c73u); f_115a3f50();
  /* 115a2c73 jmp 0x115a2d2e */
  goto L_115a2d2e;
L_115a2c78:;
  /* 115a2c78 mov esi, esp */
  ESI = (ESP);
  /* 115a2c7a push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115a2c7f push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a2c84 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2c86 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a2c8b push 0x115d14c0 */
  push32((uint32_t)(0x115d14c0u));
  /* 115a2c90 push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a2c95 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2c9bu);
  /* 115a2c9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2c9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2ca0 call 0x115a3f50 */
  push32(0x115a2ca5u); f_115a3f50();
  /* 115a2ca5 mov esi, esp */
  ESI = (ESP);
  /* 115a2ca7 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115a2cac push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a2cb1 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2cb3 push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a2cb8 push 0x115d14c0 */
  push32((uint32_t)(0x115d14c0u));
  /* 115a2cbd push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a2cc2 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2cc8u);
  /* 115a2cc8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2ccb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2ccd call 0x115a3f50 */
  push32(0x115a2cd2u); f_115a3f50();
  /* 115a2cd2 jmp 0x115a2d2e */
  goto L_115a2d2e;
L_115a2cd4:;
  /* 115a2cd4 mov esi, esp */
  ESI = (ESP);
  /* 115a2cd6 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115a2cdb push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a2ce0 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2ce2 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a2ce7 push 0x115d14d8 */
  push32((uint32_t)(0x115d14d8u));
  /* 115a2cec push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a2cf1 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2cf7u);
  /* 115a2cf7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2cfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2cfc call 0x115a3f50 */
  push32(0x115a2d01u); f_115a3f50();
  /* 115a2d01 mov esi, esp */
  ESI = (ESP);
  /* 115a2d03 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 115a2d08 push 0x115d1558 */
  push32((uint32_t)(0x115d1558u));
  /* 115a2d0d push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2d0f push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a2d14 push 0x115d14d8 */
  push32((uint32_t)(0x115d14d8u));
  /* 115a2d19 push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a2d1e call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2d24u);
  /* 115a2d24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2d27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2d29 call 0x115a3f50 */
  push32(0x115a2d2eu); f_115a3f50();
L_115a2d2e:;
  /* 115a2d2e mov esi, esp */
  ESI = (ESP);
  /* 115a2d30 push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a2d35 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2d3bu);
  /* 115a2d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2d3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2d40 call 0x115a3f50 */
  push32(0x115a2d45u); f_115a3f50();
  /* 115a2d45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2d47 jg 0x115a2d64 */
  if ((!C.zf&&C.sf==C.of)) goto L_115a2d64;
  /* 115a2d49 mov esi, esp */
  ESI = (ESP);
  /* 115a2d4b push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a2d50 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2d56u);
  /* 115a2d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2d59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2d5b call 0x115a3f50 */
  push32(0x115a2d60u); f_115a3f50();
  /* 115a2d60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2d62 jle 0x115a2dc3 */
  if ((C.zf||C.sf!=C.of)) goto L_115a2dc3;
L_115a2d64:;
  /* 115a2d64 mov esi, esp */
  ESI = (ESP);
  /* 115a2d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2d68 push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a2d6d call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a2d73u);
  /* 115a2d73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2d76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2d78 call 0x115a3f50 */
  push32(0x115a2d7du); f_115a3f50();
  /* 115a2d7d mov esi, esp */
  ESI = (ESP);
  /* 115a2d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2d81 push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a2d86 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a2d8cu);
  /* 115a2d8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2d8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2d91 call 0x115a3f50 */
  push32(0x115a2d96u); f_115a3f50();
  /* 115a2d96 mov esi, esp */
  ESI = (ESP);
  /* 115a2d98 push 0x115d1448 */
  push32((uint32_t)(0x115d1448u));
  /* 115a2d9d push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2d9f call dword ptr [0x115d44c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44c0))), 0x115a2da5u);
  /* 115a2da5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2da8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2daa call 0x115a3f50 */
  push32(0x115a2dafu); f_115a3f50();
  /* 115a2daf mov esi, esp */
  ESI = (ESP);
  /* 115a2db1 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2db3 call dword ptr [0x115d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4478))), 0x115a2db9u);
  /* 115a2db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2dbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2dbe call 0x115a3f50 */
  push32(0x115a2dc3u); f_115a3f50();
L_115a2dc3:;
  /* 115a2dc3 mov esi, esp */
  ESI = (ESP);
  /* 115a2dc5 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a2dc7 call dword ptr [0x115d44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44b8))), 0x115a2dcdu);
  /* 115a2dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2dd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2dd2 call 0x115a3f50 */
  push32(0x115a2dd7u); f_115a3f50();
  /* 115a2dd7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2ddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2dde je 0x115a2e4c */
  if (C.zf) goto L_115a2e4c;
  /* 115a2de0 mov esi, esp */
  ESI = (ESP);
  /* 115a2de2 push 0x115d1420 */
  push32((uint32_t)(0x115d1420u));
  /* 115a2de7 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2dedu);
  /* 115a2ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2df0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2df2 call 0x115a3f50 */
  push32(0x115a2df7u); f_115a3f50();
  /* 115a2df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2df9 jne 0x115a2e16 */
  if (!C.zf) goto L_115a2e16;
  /* 115a2dfb mov esi, esp */
  ESI = (ESP);
  /* 115a2dfd push 0x115d1418 */
  push32((uint32_t)(0x115d1418u));
  /* 115a2e02 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a2e08u);
  /* 115a2e08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2e0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2e0d call 0x115a3f50 */
  push32(0x115a2e12u); f_115a3f50();
  /* 115a2e12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2e14 je 0x115a2e33 */
  if (C.zf) goto L_115a2e33;
L_115a2e16:;
  /* 115a2e16 mov esi, esp */
  ESI = (ESP);
  /* 115a2e18 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2e1a call dword ptr [0x115d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4484))), 0x115a2e20u);
  /* 115a2e20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2e23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2e25 call 0x115a3f50 */
  push32(0x115a2e2au); f_115a3f50();
  /* 115a2e2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2e31 je 0x115a2e4c */
  if (C.zf) goto L_115a2e4c;
L_115a2e33:;
  /* 115a2e33 mov esi, esp */
  ESI = (ESP);
  /* 115a2e35 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 115a2e3a push 3 */
  push32((uint32_t)(0x3u));
  /* 115a2e3c call dword ptr [0x115d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4470))), 0x115a2e42u);
  /* 115a2e42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2e45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2e47 call 0x115a3f50 */
  push32(0x115a2e4cu); f_115a3f50();
L_115a2e4c:;
  /* 115a2e4c mov esi, esp */
  ESI = (ESP);
  /* 115a2e4e push 3 */
  push32((uint32_t)(0x3u));
  /* 115a2e50 call dword ptr [0x115d44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44c8))), 0x115a2e56u);
  /* 115a2e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2e59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2e5b call 0x115a3f50 */
  push32(0x115a2e60u); f_115a3f50();
  /* 115a2e60 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2e67 je 0x115a2ea7 */
  if (C.zf) goto L_115a2ea7;
  /* 115a2e69 mov esi, esp */
  ESI = (ESP);
  /* 115a2e6b push 3 */
  push32((uint32_t)(0x3u));
  /* 115a2e6d call dword ptr [0x115d44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44cc))), 0x115a2e73u);
  /* 115a2e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2e76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2e78 call 0x115a3f50 */
  push32(0x115a2e7du); f_115a3f50();
  /* 115a2e7d mov esi, esp */
  ESI = (ESP);
  /* 115a2e7f push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2e81 call dword ptr [0x115d44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44cc))), 0x115a2e87u);
  /* 115a2e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2e8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2e8c call 0x115a3f50 */
  push32(0x115a2e91u); f_115a3f50();
  /* 115a2e91 mov esi, esp */
  ESI = (ESP);
  /* 115a2e93 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a2e95 push 0xa */
  push32((uint32_t)(0xau));
  /* 115a2e97 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a2e9du);
  /* 115a2e9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2ea0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2ea2 call 0x115a3f50 */
  push32(0x115a2ea7u); f_115a3f50();
L_115a2ea7:;
  /* 115a2ea7 mov esi, esp */
  ESI = (ESP);
  /* 115a2ea9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 115a2eab call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2eb1u);
  /* 115a2eb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2eb6 call 0x115a3f50 */
  push32(0x115a2ebbu); f_115a3f50();
  /* 115a2ebb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2ec2 jne 0x115a30e1 */
  if (!C.zf) goto L_115a30e1;
  /* 115a2ec8 mov esi, esp */
  ESI = (ESP);
  /* 115a2eca push 2 */
  push32((uint32_t)(0x2u));
  /* 115a2ecc call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2ed2u);
  /* 115a2ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2ed5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2ed7 call 0x115a3f50 */
  push32(0x115a2edcu); f_115a3f50();
  /* 115a2edc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2ee3 je 0x115a30e1 */
  if (C.zf) goto L_115a30e1;
  /* 115a2ee9 mov esi, esp */
  ESI = (ESP);
  /* 115a2eeb push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115a2eed call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a2ef3u);
  /* 115a2ef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2ef6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2ef8 call 0x115a3f50 */
  push32(0x115a2efdu); f_115a3f50();
  /* 115a2efd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a2f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2f04 je 0x115a30e1 */
  if (C.zf) goto L_115a30e1;
  /* 115a2f0a mov esi, esp */
  ESI = (ESP);
  /* 115a2f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2f0e push 0x115d1540 */
  push32((uint32_t)(0x115d1540u));
  /* 115a2f13 call dword ptr [0x115d449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d449c))), 0x115a2f19u);
  /* 115a2f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2f1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2f1e call 0x115a3f50 */
  push32(0x115a2f23u); f_115a3f50();
  /* 115a2f23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a2f25 jne 0x115a30e1 */
  if (!C.zf) goto L_115a30e1;
  /* 115a2f2b mov esi, esp */
  ESI = (ESP);
  /* 115a2f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2f2f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115a2f31 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a2f37u);
  /* 115a2f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2f3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2f3c call 0x115a3f50 */
  push32(0x115a2f41u); f_115a3f50();
  /* 115a2f41 mov esi, esp */
  ESI = (ESP);
  /* 115a2f43 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 115a2f48 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a2f4a call dword ptr [0x115d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4470))), 0x115a2f50u);
  /* 115a2f50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2f53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2f55 call 0x115a3f50 */
  push32(0x115a2f5au); f_115a3f50();
  /* 115a2f5a mov esi, esp */
  ESI = (ESP);
  /* 115a2f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2f5e call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a2f64u);
  /* 115a2f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2f69 call 0x115a3f50 */
  push32(0x115a2f6eu); f_115a3f50();
  /* 115a2f6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a2f71 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2f75 ja 0x115a30e1 */
  if ((!C.cf&&!C.zf)) goto L_115a30e1;
  /* 115a2f7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a2f7e jmp dword ptr [ecx*4 + 0x115a373f] */
  switch (ECX) {
    case 0: goto L_115a2f85;
    case 1: goto L_115a2fde;
    case 2: goto L_115a3037;
    case 3: goto L_115a308d;
    default: x86_unimpl("switch@0x115a2f7e out of table"); return;
  }
L_115a2f85:;
  /* 115a2f85 mov esi, esp */
  ESI = (ESP);
  /* 115a2f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2f89 push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a2f8e push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2f90 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a2f95 push 0x115d1578 */
  push32((uint32_t)(0x115d1578u));
  /* 115a2f9a push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a2f9f call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2fa5u);
  /* 115a2fa5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2fa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2faa call 0x115a3f50 */
  push32(0x115a2fafu); f_115a3f50();
  /* 115a2faf mov esi, esp */
  ESI = (ESP);
  /* 115a2fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2fb3 push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a2fb8 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2fba push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a2fbf push 0x115d1578 */
  push32((uint32_t)(0x115d1578u));
  /* 115a2fc4 push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a2fc9 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2fcfu);
  /* 115a2fcf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a2fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a2fd4 call 0x115a3f50 */
  push32(0x115a2fd9u); f_115a3f50();
  /* 115a2fd9 jmp 0x115a30e1 */
  goto L_115a30e1;
L_115a2fde:;
  /* 115a2fde mov esi, esp */
  ESI = (ESP);
  /* 115a2fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a2fe2 push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a2fe7 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a2fe9 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a2fee push 0x115d14c8 */
  push32((uint32_t)(0x115d14c8u));
  /* 115a2ff3 push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a2ff8 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a2ffeu);
  /* 115a2ffe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3003 call 0x115a3f50 */
  push32(0x115a3008u); f_115a3f50();
  /* 115a3008 mov esi, esp */
  ESI = (ESP);
  /* 115a300a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a300c push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a3011 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3013 push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a3018 push 0x115d14c8 */
  push32((uint32_t)(0x115d14c8u));
  /* 115a301d push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a3022 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a3028u);
  /* 115a3028 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a302b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a302d call 0x115a3f50 */
  push32(0x115a3032u); f_115a3f50();
  /* 115a3032 jmp 0x115a30e1 */
  goto L_115a30e1;
L_115a3037:;
  /* 115a3037 mov esi, esp */
  ESI = (ESP);
  /* 115a3039 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a303b push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a3040 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3042 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a3047 push 0x115d14c0 */
  push32((uint32_t)(0x115d14c0u));
  /* 115a304c push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a3051 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a3057u);
  /* 115a3057 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a305a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a305c call 0x115a3f50 */
  push32(0x115a3061u); f_115a3f50();
  /* 115a3061 mov esi, esp */
  ESI = (ESP);
  /* 115a3063 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3065 push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a306a push 5 */
  push32((uint32_t)(0x5u));
  /* 115a306c push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a3071 push 0x115d14c0 */
  push32((uint32_t)(0x115d14c0u));
  /* 115a3076 push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a307b call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a3081u);
  /* 115a3081 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3084 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3086 call 0x115a3f50 */
  push32(0x115a308bu); f_115a3f50();
  /* 115a308b jmp 0x115a30e1 */
  goto L_115a30e1;
L_115a308d:;
  /* 115a308d mov esi, esp */
  ESI = (ESP);
  /* 115a308f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3091 push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a3096 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3098 push 0x115d1450 */
  push32((uint32_t)(0x115d1450u));
  /* 115a309d push 0x115d14d8 */
  push32((uint32_t)(0x115d14d8u));
  /* 115a30a2 push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a30a7 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a30adu);
  /* 115a30ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a30b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a30b2 call 0x115a3f50 */
  push32(0x115a30b7u); f_115a3f50();
  /* 115a30b7 mov esi, esp */
  ESI = (ESP);
  /* 115a30b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a30bb push 0x115d1560 */
  push32((uint32_t)(0x115d1560u));
  /* 115a30c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a30c2 push 0x115d14b8 */
  push32((uint32_t)(0x115d14b8u));
  /* 115a30c7 push 0x115d14d8 */
  push32((uint32_t)(0x115d14d8u));
  /* 115a30cc push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a30d1 call dword ptr [0x115d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44bc))), 0x115a30d7u);
  /* 115a30d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a30da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a30dc call 0x115a3f50 */
  push32(0x115a30e1u); f_115a3f50();
L_115a30e1:;
  /* 115a30e1 mov esi, esp */
  ESI = (ESP);
  /* 115a30e3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 115a30e5 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a30ebu);
  /* 115a30eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a30ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a30f0 call 0x115a3f50 */
  push32(0x115a30f5u); f_115a3f50();
  /* 115a30f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a30fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a30fc jne 0x115a3197 */
  if (!C.zf) goto L_115a3197;
  /* 115a3102 mov esi, esp */
  ESI = (ESP);
  /* 115a3104 push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a3109 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a310fu);
  /* 115a310f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3112 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3114 call 0x115a3f50 */
  push32(0x115a3119u); f_115a3f50();
  /* 115a3119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a311b jg 0x115a3138 */
  if ((!C.zf&&C.sf==C.of)) goto L_115a3138;
  /* 115a311d mov esi, esp */
  ESI = (ESP);
  /* 115a311f push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a3124 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a312au);
  /* 115a312a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a312d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a312f call 0x115a3f50 */
  push32(0x115a3134u); f_115a3f50();
  /* 115a3134 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a3136 jle 0x115a3197 */
  if ((C.zf||C.sf!=C.of)) goto L_115a3197;
L_115a3138:;
  /* 115a3138 mov esi, esp */
  ESI = (ESP);
  /* 115a313a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a313c push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a3141 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a3147u);
  /* 115a3147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a314a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a314c call 0x115a3f50 */
  push32(0x115a3151u); f_115a3f50();
  /* 115a3151 mov esi, esp */
  ESI = (ESP);
  /* 115a3153 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3155 push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a315a call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a3160u);
  /* 115a3160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3165 call 0x115a3f50 */
  push32(0x115a316au); f_115a3f50();
  /* 115a316a mov esi, esp */
  ESI = (ESP);
  /* 115a316c push 0x115d15a0 */
  push32((uint32_t)(0x115d15a0u));
  /* 115a3171 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3173 call dword ptr [0x115d44c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44c0))), 0x115a3179u);
  /* 115a3179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a317c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a317e call 0x115a3f50 */
  push32(0x115a3183u); f_115a3f50();
  /* 115a3183 mov esi, esp */
  ESI = (ESP);
  /* 115a3185 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3187 call dword ptr [0x115d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4478))), 0x115a318du);
  /* 115a318d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3190 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3192 call 0x115a3f50 */
  push32(0x115a3197u); f_115a3f50();
L_115a3197:;
  /* 115a3197 mov esi, esp */
  ESI = (ESP);
  /* 115a3199 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 115a319b call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a31a1u);
  /* 115a31a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a31a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a31a6 call 0x115a3f50 */
  push32(0x115a31abu); f_115a3f50();
  /* 115a31ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a31b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a31b2 jne 0x115a3241 */
  if (!C.zf) goto L_115a3241;
  /* 115a31b8 mov esi, esp */
  ESI = (ESP);
  /* 115a31ba push 5 */
  push32((uint32_t)(0x5u));
  /* 115a31bc call dword ptr [0x115d44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44b8))), 0x115a31c2u);
  /* 115a31c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a31c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a31c7 call 0x115a3f50 */
  push32(0x115a31ccu); f_115a3f50();
  /* 115a31cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a31d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a31d3 je 0x115a3241 */
  if (C.zf) goto L_115a3241;
  /* 115a31d5 mov esi, esp */
  ESI = (ESP);
  /* 115a31d7 push 0x115d1438 */
  push32((uint32_t)(0x115d1438u));
  /* 115a31dc call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a31e2u);
  /* 115a31e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a31e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a31e7 call 0x115a3f50 */
  push32(0x115a31ecu); f_115a3f50();
  /* 115a31ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a31ee jne 0x115a320b */
  if (!C.zf) goto L_115a320b;
  /* 115a31f0 mov esi, esp */
  ESI = (ESP);
  /* 115a31f2 push 0x115d1428 */
  push32((uint32_t)(0x115d1428u));
  /* 115a31f7 call dword ptr [0x115d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4490))), 0x115a31fdu);
  /* 115a31fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3202 call 0x115a3f50 */
  push32(0x115a3207u); f_115a3f50();
  /* 115a3207 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a3209 je 0x115a3228 */
  if (C.zf) goto L_115a3228;
L_115a320b:;
  /* 115a320b mov esi, esp */
  ESI = (ESP);
  /* 115a320d push 4 */
  push32((uint32_t)(0x4u));
  /* 115a320f call dword ptr [0x115d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4484))), 0x115a3215u);
  /* 115a3215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3218 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a321a call 0x115a3f50 */
  push32(0x115a321fu); f_115a3f50();
  /* 115a321f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a3224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a3226 je 0x115a3241 */
  if (C.zf) goto L_115a3241;
L_115a3228:;
  /* 115a3228 mov esi, esp */
  ESI = (ESP);
  /* 115a322a push 0x190 */
  push32((uint32_t)(0x190u));
  /* 115a322f push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3231 call dword ptr [0x115d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4470))), 0x115a3237u);
  /* 115a3237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a323a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a323c call 0x115a3f50 */
  push32(0x115a3241u); f_115a3f50();
L_115a3241:;
  /* 115a3241 mov esi, esp */
  ESI = (ESP);
  /* 115a3243 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3245 call dword ptr [0x115d44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44c8))), 0x115a324bu);
  /* 115a324b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a324e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3250 call 0x115a3f50 */
  push32(0x115a3255u); f_115a3f50();
  /* 115a3255 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a325a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a325c je 0x115a329c */
  if (C.zf) goto L_115a329c;
  /* 115a325e mov esi, esp */
  ESI = (ESP);
  /* 115a3260 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3262 call dword ptr [0x115d44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44cc))), 0x115a3268u);
  /* 115a3268 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a326b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a326d call 0x115a3f50 */
  push32(0x115a3272u); f_115a3f50();
  /* 115a3272 mov esi, esp */
  ESI = (ESP);
  /* 115a3274 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a3276 call dword ptr [0x115d44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44cc))), 0x115a327cu);
  /* 115a327c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a327f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3281 call 0x115a3f50 */
  push32(0x115a3286u); f_115a3f50();
  /* 115a3286 mov esi, esp */
  ESI = (ESP);
  /* 115a3288 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a328a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115a328c call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a3292u);
  /* 115a3292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3295 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3297 call 0x115a3f50 */
  push32(0x115a329cu); f_115a3f50();
L_115a329c:;
  /* 115a329c mov esi, esp */
  ESI = (ESP);
  /* 115a329e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 115a32a0 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a32a6u);
  /* 115a32a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a32a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a32ab call 0x115a3f50 */
  push32(0x115a32b0u); f_115a3f50();
  /* 115a32b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a32b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a32b7 jne 0x115a34a7 */
  if (!C.zf) goto L_115a34a7;
  /* 115a32bd mov esi, esp */
  ESI = (ESP);
  /* 115a32bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115a32c1 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a32c7u);
  /* 115a32c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a32ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a32cc call 0x115a3f50 */
  push32(0x115a32d1u); f_115a3f50();
  /* 115a32d1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a32d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a32d8 je 0x115a34a7 */
  if (C.zf) goto L_115a34a7;
  /* 115a32de mov esi, esp */
  ESI = (ESP);
  /* 115a32e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a32e2 push 0x115d1458 */
  push32((uint32_t)(0x115d1458u));
  /* 115a32e7 push 0x115d14e8 */
  push32((uint32_t)(0x115d14e8u));
  /* 115a32ec call dword ptr [0x115d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44c4))), 0x115a32f2u);
  /* 115a32f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a32f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a32f7 call 0x115a3f50 */
  push32(0x115a32fcu); f_115a3f50();
  /* 115a32fc cmp eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a32ff jle 0x115a34a7 */
  if ((C.zf||C.sf!=C.of)) goto L_115a34a7;
  /* 115a3305 mov esi, esp */
  ESI = (ESP);
  /* 115a3307 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3309 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115a330b call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a3311u);
  /* 115a3311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3314 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3316 call 0x115a3f50 */
  push32(0x115a331bu); f_115a3f50();
  /* 115a331b mov esi, esp */
  ESI = (ESP);
  /* 115a331d push 0x115cc2c0 */
  push32((uint32_t)(0x115cc2c0u));
  /* 115a3322 call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a3328u);
  /* 115a3328 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a332b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a332d call 0x115a3f50 */
  push32(0x115a3332u); f_115a3f50();
  /* 115a3332 mov esi, esp */
  ESI = (ESP);
  /* 115a3334 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 115a3336 call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a333cu);
  /* 115a333c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a333f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3341 call 0x115a3f50 */
  push32(0x115a3346u); f_115a3f50();
  /* 115a3346 mov esi, esp */
  ESI = (ESP);
  /* 115a3348 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 115a334a call dword ptr [0x115d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d445c))), 0x115a3350u);
  /* 115a3350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3353 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3355 call 0x115a3f50 */
  push32(0x115a335au); f_115a3f50();
  /* 115a335a mov esi, esp */
  ESI = (ESP);
  /* 115a335c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a335e push 0x115d15a0 */
  push32((uint32_t)(0x115d15a0u));
  /* 115a3363 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a3369u);
  /* 115a3369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a336c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a336e call 0x115a3f50 */
  push32(0x115a3373u); f_115a3f50();
  /* 115a3373 mov esi, esp */
  ESI = (ESP);
  /* 115a3375 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3377 call dword ptr [0x115d44d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44d4))), 0x115a337du);
  /* 115a337d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3380 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3382 call 0x115a3f50 */
  push32(0x115a3387u); f_115a3f50();
  /* 115a3387 mov esi, esp */
  ESI = (ESP);
  /* 115a3389 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a338b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a338d push 0x115d1458 */
  push32((uint32_t)(0x115d1458u));
  /* 115a3392 push 0x115d14f0 */
  push32((uint32_t)(0x115d14f0u));
  /* 115a3397 call dword ptr [0x115d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44d8))), 0x115a339du);
  /* 115a339d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a33a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a33a2 call 0x115a3f50 */
  push32(0x115a33a7u); f_115a3f50();
  /* 115a33a7 mov esi, esp */
  ESI = (ESP);
  /* 115a33a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a33ab push 0 */
  push32((uint32_t)(0x0u));
  /* 115a33ad call dword ptr [0x115d44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44a0))), 0x115a33b3u);
  /* 115a33b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a33b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a33b8 call 0x115a3f50 */
  push32(0x115a33bdu); f_115a3f50();
  /* 115a33bd mov esi, esp */
  ESI = (ESP);
  /* 115a33bf push 1 */
  push32((uint32_t)(0x1u));
  /* 115a33c1 call dword ptr [0x115d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4478))), 0x115a33c7u);
  /* 115a33c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a33ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a33cc call 0x115a3f50 */
  push32(0x115a33d1u); f_115a3f50();
  /* 115a33d1 mov esi, esp */
  ESI = (ESP);
  /* 115a33d3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a33d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a33da push 1 */
  push32((uint32_t)(0x1u));
  /* 115a33dc call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a33e2u);
  /* 115a33e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a33e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a33e7 call 0x115a3f50 */
  push32(0x115a33ecu); f_115a3f50();
  /* 115a33ec mov esi, esp */
  ESI = (ESP);
  /* 115a33ee push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a33f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a33f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a33f7 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a33fdu);
  /* 115a33fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3400 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3402 call 0x115a3f50 */
  push32(0x115a3407u); f_115a3f50();
  /* 115a3407 mov esi, esp */
  ESI = (ESP);
  /* 115a3409 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a340e push 2 */
  push32((uint32_t)(0x2u));
  /* 115a3410 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3412 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a3418u);
  /* 115a3418 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a341b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a341d call 0x115a3f50 */
  push32(0x115a3422u); f_115a3f50();
  /* 115a3422 mov esi, esp */
  ESI = (ESP);
  /* 115a3424 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a3429 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a342b push 1 */
  push32((uint32_t)(0x1u));
  /* 115a342d call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a3433u);
  /* 115a3433 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3438 call 0x115a3f50 */
  push32(0x115a343du); f_115a3f50();
  /* 115a343d mov esi, esp */
  ESI = (ESP);
  /* 115a343f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a3444 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a3446 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3448 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a344eu);
  /* 115a344e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3453 call 0x115a3f50 */
  push32(0x115a3458u); f_115a3f50();
  /* 115a3458 mov esi, esp */
  ESI = (ESP);
  /* 115a345a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 115a345f push 4 */
  push32((uint32_t)(0x4u));
  /* 115a3461 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3463 call dword ptr [0x115d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4464))), 0x115a3469u);
  /* 115a3469 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a346c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a346e call 0x115a3f50 */
  push32(0x115a3473u); f_115a3f50();
  /* 115a3473 mov esi, esp */
  ESI = (ESP);
  /* 115a3475 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3477 call dword ptr [0x115d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d446c))), 0x115a347du);
  /* 115a347d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3480 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3482 call 0x115a3f50 */
  push32(0x115a3487u); f_115a3f50();
  /* 115a3487 mov esi, esp */
  ESI = (ESP);
  /* 115a3489 push eax */
  push32((uint32_t)(EAX));
  /* 115a348a push 2 */
  push32((uint32_t)(0x2u));
  /* 115a348c push 1 */
  push32((uint32_t)(0x1u));
  /* 115a348e push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3490 push 0x115cc2b4 */
  push32((uint32_t)(0x115cc2b4u));
  /* 115a3495 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3497 call dword ptr [0x115d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4480))), 0x115a349du);
  /* 115a349d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a34a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a34a2 call 0x115a3f50 */
  push32(0x115a34a7u); f_115a3f50();
L_115a34a7:;
  /* 115a34a7 mov esi, esp */
  ESI = (ESP);
  /* 115a34a9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115a34ab call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a34b1u);
  /* 115a34b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a34b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a34b6 call 0x115a3f50 */
  push32(0x115a34bbu); f_115a3f50();
  /* 115a34bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a34c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a34c2 je 0x115a350e */
  if (C.zf) goto L_115a350e;
  /* 115a34c4 mov esi, esp */
  ESI = (ESP);
  /* 115a34c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a34c8 call dword ptr [0x115d44d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44d0))), 0x115a34ceu);
  /* 115a34ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a34d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a34d3 call 0x115a3f50 */
  push32(0x115a34d8u); f_115a3f50();
  /* 115a34d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a34dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a34df je 0x115a350e */
  if (C.zf) goto L_115a350e;
  /* 115a34e1 mov esi, esp */
  ESI = (ESP);
  /* 115a34e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a34e5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115a34e7 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a34edu);
  /* 115a34ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a34f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a34f2 call 0x115a3f50 */
  push32(0x115a34f7u); f_115a3f50();
  /* 115a34f7 mov esi, esp */
  ESI = (ESP);
  /* 115a34f9 push 0x115cc2a8 */
  push32((uint32_t)(0x115cc2a8u));
  /* 115a34fe call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a3504u);
  /* 115a3504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3507 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3509 call 0x115a3f50 */
  push32(0x115a350eu); f_115a3f50();
L_115a350e:;
  /* 115a350e mov esi, esp */
  ESI = (ESP);
  /* 115a3510 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115a3512 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a3518u);
  /* 115a3518 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a351b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a351d call 0x115a3f50 */
  push32(0x115a3522u); f_115a3f50();
  /* 115a3522 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a3527 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a3529 je 0x115a3575 */
  if (C.zf) goto L_115a3575;
  /* 115a352b mov esi, esp */
  ESI = (ESP);
  /* 115a352d push 3 */
  push32((uint32_t)(0x3u));
  /* 115a352f call dword ptr [0x115d44d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44d0))), 0x115a3535u);
  /* 115a3535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3538 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a353a call 0x115a3f50 */
  push32(0x115a353fu); f_115a3f50();
  /* 115a353f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a3544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a3546 je 0x115a3575 */
  if (C.zf) goto L_115a3575;
  /* 115a3548 mov esi, esp */
  ESI = (ESP);
  /* 115a354a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a354c push 0xd */
  push32((uint32_t)(0xdu));
  /* 115a354e call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a3554u);
  /* 115a3554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3557 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3559 call 0x115a3f50 */
  push32(0x115a355eu); f_115a3f50();
  /* 115a355e mov esi, esp */
  ESI = (ESP);
  /* 115a3560 push 0x115cc29c */
  push32((uint32_t)(0x115cc29cu));
  /* 115a3565 call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a356bu);
  /* 115a356b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a356e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3570 call 0x115a3f50 */
  push32(0x115a3575u); f_115a3f50();
L_115a3575:;
  /* 115a3575 mov esi, esp */
  ESI = (ESP);
  /* 115a3577 push 0xf */
  push32((uint32_t)(0xfu));
  /* 115a3579 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a357fu);
  /* 115a357f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3582 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3584 call 0x115a3f50 */
  push32(0x115a3589u); f_115a3f50();
  /* 115a3589 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a358e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a3590 je 0x115a3625 */
  if (C.zf) goto L_115a3625;
  /* 115a3596 mov esi, esp */
  ESI = (ESP);
  /* 115a3598 push 0xb */
  push32((uint32_t)(0xbu));
  /* 115a359a call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a35a0u);
  /* 115a35a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a35a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a35a5 call 0x115a3f50 */
  push32(0x115a35aau); f_115a3f50();
  /* 115a35aa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a35af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a35b1 jne 0x115a3625 */
  if (!C.zf) goto L_115a3625;
  /* 115a35b3 mov esi, esp */
  ESI = (ESP);
  /* 115a35b5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115a35b7 call dword ptr [0x115d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4454))), 0x115a35bdu);
  /* 115a35bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a35c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a35c2 call 0x115a3f50 */
  push32(0x115a35c7u); f_115a3f50();
  /* 115a35c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a35cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a35ce jne 0x115a3625 */
  if (!C.zf) goto L_115a3625;
  /* 115a35d0 mov esi, esp */
  ESI = (ESP);
  /* 115a35d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a35d4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 115a35d6 call dword ptr [0x115d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4450))), 0x115a35dcu);
  /* 115a35dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a35df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a35e1 call 0x115a3f50 */
  push32(0x115a35e6u); f_115a3f50();
  /* 115a35e6 mov esi, esp */
  ESI = (ESP);
  /* 115a35e8 push 0x115cc294 */
  push32((uint32_t)(0x115cc294u));
  /* 115a35ed call dword ptr [0x115d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d447c))), 0x115a35f3u);
  /* 115a35f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a35f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a35f8 call 0x115a3f50 */
  push32(0x115a35fdu); f_115a3f50();
  /* 115a35fd mov esi, esp */
  ESI = (ESP);
  /* 115a35ff push 0x42 */
  push32((uint32_t)(0x42u));
  /* 115a3601 call dword ptr [0x115d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4460))), 0x115a3607u);
  /* 115a3607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a360a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a360c call 0x115a3f50 */
  push32(0x115a3611u); f_115a3f50();
  /* 115a3611 mov esi, esp */
  ESI = (ESP);
  /* 115a3613 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 115a3615 call dword ptr [0x115d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d445c))), 0x115a361bu);
  /* 115a361b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a361e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3620 call 0x115a3f50 */
  push32(0x115a3625u); f_115a3f50();
L_115a3625:;
  /* 115a3625 mov esi, esp */
  ESI = (ESP);
  /* 115a3627 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3629 push 0x115d1568 */
  push32((uint32_t)(0x115d1568u));
  /* 115a362e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3630 call dword ptr [0x115d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e0))), 0x115a3636u);
  /* 115a3636 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3639 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a363b call 0x115a3f50 */
  push32(0x115a3640u); f_115a3f50();
  /* 115a3640 mov esi, esp */
  ESI = (ESP);
  /* 115a3642 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3644 call dword ptr [0x115d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4478))), 0x115a364au);
  /* 115a364a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a364d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a364f call 0x115a3f50 */
  push32(0x115a3654u); f_115a3f50();
  /* 115a3654 mov esi, esp */
  ESI = (ESP);
  /* 115a3656 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3658 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a365a push 0x115d1430 */
  push32((uint32_t)(0x115d1430u));
  /* 115a365f call dword ptr [0x115d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e4))), 0x115a3665u);
  /* 115a3665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a366a call 0x115a3f50 */
  push32(0x115a366fu); f_115a3f50();
  /* 115a366f mov esi, esp */
  ESI = (ESP);
  /* 115a3671 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3673 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a3675 push 0x115d1440 */
  push32((uint32_t)(0x115d1440u));
  /* 115a367a call dword ptr [0x115d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e4))), 0x115a3680u);
  /* 115a3680 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3685 call 0x115a3f50 */
  push32(0x115a368au); f_115a3f50();
  /* 115a368a mov esi, esp */
  ESI = (ESP);
  /* 115a368c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a368e call dword ptr [0x115d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44dc))), 0x115a3694u);
  /* 115a3694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3697 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3699 call 0x115a3f50 */
  push32(0x115a369eu); f_115a3f50();
  /* 115a369e mov esi, esp */
  ESI = (ESP);
  /* 115a36a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a36a2 push 0x115d1568 */
  push32((uint32_t)(0x115d1568u));
  /* 115a36a7 call dword ptr [0x115d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4458))), 0x115a36adu);
  /* 115a36ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a36b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a36b2 call 0x115a3f50 */
  push32(0x115a36b7u); f_115a3f50();
  /* 115a36b7 mov esi, esp */
  ESI = (ESP);
  /* 115a36b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a36bb call dword ptr [0x115d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4478))), 0x115a36c1u);
  /* 115a36c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a36c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a36c6 call 0x115a3f50 */
  push32(0x115a36cbu); f_115a3f50();
  /* 115a36cb mov esi, esp */
  ESI = (ESP);
  /* 115a36cd push 0 */
  push32((uint32_t)(0x0u));
  /* 115a36cf push 5 */
  push32((uint32_t)(0x5u));
  /* 115a36d1 push 0x115d1458 */
  push32((uint32_t)(0x115d1458u));
  /* 115a36d6 call dword ptr [0x115d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44e4))), 0x115a36dcu);
  /* 115a36dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a36df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a36e1 call 0x115a3f50 */
  push32(0x115a36e6u); f_115a3f50();
  /* 115a36e6 mov esi, esp */
  ESI = (ESP);
  /* 115a36e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 115a36ea call dword ptr [0x115d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d44dc))), 0x115a36f0u);
  /* 115a36f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a36f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a36f5 call 0x115a3f50 */
  push32(0x115a36fau); f_115a3f50();
  /* 115a36fa mov esi, esp */
  ESI = (ESP);
  /* 115a36fc push 5 */
  push32((uint32_t)(0x5u));
  /* 115a36fe call dword ptr [0x115d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4478))), 0x115a3704u);
  /* 115a3704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3709 call 0x115a3f50 */
  push32(0x115a370eu); f_115a3f50();
  /* 115a370e pop edi */
  EDI = (pop32());
  /* 115a370f pop esi */
  ESI = (pop32());
  /* 115a3710 pop ebx */
  EBX = (pop32());
  /* 115a3711 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3714 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3716 call 0x115a3f50 */
  push32(0x115a371bu); f_115a3f50();
  /* 115a371b mov esp, ebp */
  ESP = (EBP);
  /* 115a371d pop ebp */
  EBP = (pop32());
  /* 115a371e ret  */
  ESPCHK(0x115a1bc0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x115a3f50 (56 bytes, 28 insns) */
void f_115a3f50(void) {
  FTRACE(0x115a3f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a3f50 jne 0x115a3f53 */
  if (!C.zf) goto L_115a3f53;
  /* 115a3f52 ret  */
  ESPCHK(0x115a3f50u, _esp0);
  ESP += 4; return;
L_115a3f53:;
  /* 115a3f53 push ebp */
  push32((uint32_t)(EBP));
  /* 115a3f54 mov ebp, esp */
  EBP = (ESP);
  /* 115a3f56 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a3f59 push eax */
  push32((uint32_t)(EAX));
  /* 115a3f5a push edx */
  push32((uint32_t)(EDX));
  /* 115a3f5b push ebx */
  push32((uint32_t)(EBX));
  /* 115a3f5c push esi */
  push32((uint32_t)(ESI));
  /* 115a3f5d push edi */
  push32((uint32_t)(EDI));
  /* 115a3f5e push 0x115cc340 */
  push32((uint32_t)(0x115cc340u));
  /* 115a3f63 push 0x115cc33c */
  push32((uint32_t)(0x115cc33cu));
  /* 115a3f68 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 115a3f6a push 0x115cc32c */
  push32((uint32_t)(0x115cc32cu));
  /* 115a3f6f push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3f71 call 0x115a4320 */
  push32(0x115a3f76u); f_115a4320();
  /* 115a3f76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3f79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3f7c jne 0x115a3f7f */
  if (!C.zf) goto L_115a3f7f;
  /* 115a3f7e int3  */
  x86_unimpl("int3 @ 0x115a3f7e");
L_115a3f7f:;
  /* 115a3f7f pop edi */
  EDI = (pop32());
  /* 115a3f80 pop esi */
  ESI = (pop32());
  /* 115a3f81 pop ebx */
  EBX = (pop32());
  /* 115a3f82 pop edx */
  EDX = (pop32());
  /* 115a3f83 pop eax */
  EAX = (pop32());
  /* 115a3f84 mov esp, ebp */
  ESP = (EBP);
  /* 115a3f86 pop ebp */
  EBP = (pop32());
  /* 115a3f87 ret  */
  ESPCHK(0x115a3f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x115a3f90 (313 bytes, 78 insns) */
void f_115a3f90(void) {
  FTRACE(0x115a3f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a3f90 push ebp */
  push32((uint32_t)(EBP));
  /* 115a3f91 mov ebp, esp */
  EBP = (ESP);
  /* 115a3f93 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a3f97 jne 0x115a4057 */
  if (!C.zf) goto L_115a4057;
  /* 115a3f9d call dword ptr [0x115d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d438c))), 0x115a3fa3u);
  /* 115a3fa3 mov dword ptr [0x115d1624], eax */
  w32((uint32_t)(0x115d1624), (EAX));
  /* 115a3fa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a3faa call 0x115a7a50 */
  push32(0x115a3fafu); f_115a7a50();
  /* 115a3faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a3fb4 jne 0x115a3fbd */
  if (!C.zf) goto L_115a3fbd;
  /* 115a3fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a3fb8 jmp 0x115a40c5 */
  goto L_115a40c5;
L_115a3fbd:;
  /* 115a3fbd mov eax, dword ptr [0x115d1624] */
  EAX = (r32((uint32_t)(0x115d1624)));
  /* 115a3fc2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 115a3fc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a3fca mov dword ptr [0x115d1630], eax */
  w32((uint32_t)(0x115d1630), (EAX));
  /* 115a3fcf mov ecx, dword ptr [0x115d1624] */
  ECX = (r32((uint32_t)(0x115d1624)));
  /* 115a3fd5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a3fdb mov dword ptr [0x115d162c], ecx */
  w32((uint32_t)(0x115d162c), (ECX));
  /* 115a3fe1 mov edx, dword ptr [0x115d162c] */
  EDX = (r32((uint32_t)(0x115d162c)));
  /* 115a3fe7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 115a3fea add edx, dword ptr [0x115d1630] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115d1630))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a3ff0 mov dword ptr [0x115d1628], edx */
  w32((uint32_t)(0x115d1628), (EDX));
  /* 115a3ff6 mov eax, dword ptr [0x115d1624] */
  EAX = (r32((uint32_t)(0x115d1624)));
  /* 115a3ffb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 115a3ffe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a4003 mov dword ptr [0x115d1624], eax */
  w32((uint32_t)(0x115d1624), (EAX));
  /* 115a4008 call 0x115a4bc0 */
  push32(0x115a400du); f_115a4bc0();
  /* 115a400d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a400f jne 0x115a401d */
  if (!C.zf) goto L_115a401d;
  /* 115a4011 call 0x115a7aa0 */
  push32(0x115a4016u); f_115a7aa0();
  /* 115a4016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a4018 jmp 0x115a40c5 */
  goto L_115a40c5;
L_115a401d:;
  /* 115a401d call dword ptr [0x115d4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4388))), 0x115a4023u);
  /* 115a4023 mov dword ptr [0x115d316c], eax */
  w32((uint32_t)(0x115d316c), (EAX));
  /* 115a4028 call 0x115a7830 */
  push32(0x115a402du); f_115a7830();
  /* 115a402d mov dword ptr [0x115d160c], eax */
  w32((uint32_t)(0x115d160c), (EAX));
  /* 115a4032 call 0x115a4e70 */
  push32(0x115a4037u); f_115a4e70();
  /* 115a4037 call 0x115a7320 */
  push32(0x115a403cu); f_115a7320();
  /* 115a403c call 0x115a71d0 */
  push32(0x115a4041u); f_115a71d0();
  /* 115a4041 call 0x115a49c0 */
  push32(0x115a4046u); f_115a49c0();
  /* 115a4046 mov ecx, dword ptr [0x115d1608] */
  ECX = (r32((uint32_t)(0x115d1608)));
  /* 115a404c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a404f mov dword ptr [0x115d1608], ecx */
  w32((uint32_t)(0x115d1608), (ECX));
  /* 115a4055 jmp 0x115a40c0 */
  goto L_115a40c0;
L_115a4057:;
  /* 115a4057 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a405b jne 0x115a40b0 */
  if (!C.zf) goto L_115a40b0;
  /* 115a405d cmp dword ptr [0x115d1608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4064 jle 0x115a40aa */
  if ((C.zf||C.sf!=C.of)) goto L_115a40aa;
  /* 115a4066 mov edx, dword ptr [0x115d1608] */
  EDX = (r32((uint32_t)(0x115d1608)));
  /* 115a406c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a406f mov dword ptr [0x115d1608], edx */
  w32((uint32_t)(0x115d1608), (EDX));
  /* 115a4075 cmp dword ptr [0x115d165c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d165c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a407c jne 0x115a4083 */
  if (!C.zf) goto L_115a4083;
  /* 115a407e call 0x115a4a40 */
  push32(0x115a4083u); f_115a4a40();
L_115a4083:;
  /* 115a4083 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115a4085 call 0x115a6770 */
  push32(0x115a408au); f_115a6770();
  /* 115a408a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a408d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 115a4090 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a4092 je 0x115a4099 */
  if (C.zf) goto L_115a4099;
  /* 115a4094 call 0x115a7080 */
  push32(0x115a4099u); f_115a7080();
L_115a4099:;
  /* 115a4099 call 0x115a51a0 */
  push32(0x115a409eu); f_115a51a0();
  /* 115a409e call 0x115a4c50 */
  push32(0x115a40a3u); f_115a4c50();
  /* 115a40a3 call 0x115a7aa0 */
  push32(0x115a40a8u); f_115a7aa0();
  /* 115a40a8 jmp 0x115a40ae */
  goto L_115a40ae;
L_115a40aa:;
  /* 115a40aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a40ac jmp 0x115a40c5 */
  goto L_115a40c5;
L_115a40ae:;
  /* 115a40ae jmp 0x115a40c0 */
  goto L_115a40c0;
L_115a40b0:;
  /* 115a40b0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a40b4 jne 0x115a40c0 */
  if (!C.zf) goto L_115a40c0;
  /* 115a40b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a40b8 call 0x115a4d40 */
  push32(0x115a40bdu); f_115a4d40();
  /* 115a40bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a40c0:;
  /* 115a40c0 mov eax, 1 */
  EAX = (0x1u);
L_115a40c5:;
  /* 115a40c5 pop ebp */
  EBP = (pop32());
  /* 115a40c6 ret 0xc */
  ESPCHK(0x115a3f90u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x115a40d0 (243 bytes, 86 insns) */
void f_115a40d0(void) {
  FTRACE(0x115a40d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a40d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a40d1 mov ebp, esp */
  EBP = (ESP);
  /* 115a40d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a40d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115a40db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a40df jne 0x115a40f1 */
  if (!C.zf) goto L_115a40f1;
  /* 115a40e1 cmp dword ptr [0x115d1608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a40e8 jne 0x115a40f1 */
  if (!C.zf) goto L_115a40f1;
  /* 115a40ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a40ec jmp 0x115a41bd */
  goto L_115a41bd;
L_115a40f1:;
  /* 115a40f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a40f5 je 0x115a40fd */
  if (C.zf) goto L_115a40fd;
  /* 115a40f7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a40fb jne 0x115a413f */
  if (!C.zf) goto L_115a413f;
L_115a40fd:;
  /* 115a40fd cmp dword ptr [0x115d317c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d317c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4104 je 0x115a411b */
  if (C.zf) goto L_115a411b;
  /* 115a4106 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a4109 push eax */
  push32((uint32_t)(EAX));
  /* 115a410a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a410d push ecx */
  push32((uint32_t)(ECX));
  /* 115a410e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4111 push edx */
  push32((uint32_t)(EDX));
  /* 115a4112 call dword ptr [0x115d317c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d317c))), 0x115a4118u);
  /* 115a4118 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a411b:;
  /* 115a411b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a411f je 0x115a4135 */
  if (C.zf) goto L_115a4135;
  /* 115a4121 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a4124 push eax */
  push32((uint32_t)(EAX));
  /* 115a4125 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a4128 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4129 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a412c push edx */
  push32((uint32_t)(EDX));
  /* 115a412d call 0x115a3f90 */
  push32(0x115a4132u); f_115a3f90();
  /* 115a4132 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a4135:;
  /* 115a4135 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4139 jne 0x115a413f */
  if (!C.zf) goto L_115a413f;
  /* 115a413b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a413d jmp 0x115a41bd */
  goto L_115a41bd;
L_115a413f:;
  /* 115a413f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a4142 push eax */
  push32((uint32_t)(EAX));
  /* 115a4143 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a4146 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4147 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a414a push edx */
  push32((uint32_t)(EDX));
  /* 115a414b call 0x115a100a */
  push32(0x115a4150u); f_115a100a();
  /* 115a4150 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a4153 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4157 jne 0x115a416e */
  if (!C.zf) goto L_115a416e;
  /* 115a4159 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a415d jne 0x115a416e */
  if (!C.zf) goto L_115a416e;
  /* 115a415f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a4162 push eax */
  push32((uint32_t)(EAX));
  /* 115a4163 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a4165 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4168 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4169 call 0x115a3f90 */
  push32(0x115a416eu); f_115a3f90();
L_115a416e:;
  /* 115a416e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4172 je 0x115a417a */
  if (C.zf) goto L_115a417a;
  /* 115a4174 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4178 jne 0x115a41ba */
  if (!C.zf) goto L_115a41ba;
L_115a417a:;
  /* 115a417a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a417d push edx */
  push32((uint32_t)(EDX));
  /* 115a417e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a4181 push eax */
  push32((uint32_t)(EAX));
  /* 115a4182 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4185 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4186 call 0x115a3f90 */
  push32(0x115a418bu); f_115a3f90();
  /* 115a418b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a418d jne 0x115a4196 */
  if (!C.zf) goto L_115a4196;
  /* 115a418f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115a4196:;
  /* 115a4196 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a419a je 0x115a41ba */
  if (C.zf) goto L_115a41ba;
  /* 115a419c cmp dword ptr [0x115d317c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d317c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a41a3 je 0x115a41ba */
  if (C.zf) goto L_115a41ba;
  /* 115a41a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a41a8 push edx */
  push32((uint32_t)(EDX));
  /* 115a41a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a41ac push eax */
  push32((uint32_t)(EAX));
  /* 115a41ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a41b0 push ecx */
  push32((uint32_t)(ECX));
  /* 115a41b1 call dword ptr [0x115d317c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d317c))), 0x115a41b7u);
  /* 115a41b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a41ba:;
  /* 115a41ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115a41bd:;
  /* 115a41bd mov esp, ebp */
  ESP = (EBP);
  /* 115a41bf pop ebp */
  EBP = (pop32());
  /* 115a41c0 ret 0xc */
  ESPCHK(0x115a40d0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x115a41d0 (58 bytes, 18 insns) */
void f_115a41d0(void) {
  FTRACE(0x115a41d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a41d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a41d1 mov ebp, esp */
  EBP = (ESP);
  /* 115a41d3 cmp dword ptr [0x115d1614], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1614))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a41da je 0x115a41ee */
  if (C.zf) goto L_115a41ee;
  /* 115a41dc cmp dword ptr [0x115d1614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a41e3 jne 0x115a41f3 */
  if (!C.zf) goto L_115a41f3;
  /* 115a41e5 cmp dword ptr [0x115d1618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a41ec jne 0x115a41f3 */
  if (!C.zf) goto L_115a41f3;
L_115a41ee:;
  /* 115a41ee call 0x115a7b40 */
  push32(0x115a41f3u); f_115a7b40();
L_115a41f3:;
  /* 115a41f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a41f6 push eax */
  push32((uint32_t)(EAX));
  /* 115a41f7 call 0x115a7b90 */
  push32(0x115a41fcu); f_115a7b90();
  /* 115a41fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a41ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 115a4204 call dword ptr [0x115cfa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x115cfa30))), 0x115a420au);
  /* 115a420a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a420d pop ebp */
  EBP = (pop32());
  /* 115a420e ret  */
  ESPCHK(0x115a41d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004210 @ 0x115a4210 (11 bytes, 5 insns) */
void f_115a4210(void) {
  FTRACE(0x115a4210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4210 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4211 mov ebp, esp */
  EBP = (ESP);
  /* 115a4213 call dword ptr [0x115d4390] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4390))), 0x115a4219u);
  /* 115a4219 pop ebp */
  EBP = (pop32());
  /* 115a421a ret  */
  ESPCHK(0x115a4210u, _esp0);
  ESP += 4; return;
}

/* FUN_10004220 @ 0x115a4220 (87 bytes, 30 insns) */
void f_115a4220(void) {
  FTRACE(0x115a4220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4220 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4221 mov ebp, esp */
  EBP = (ESP);
  /* 115a4223 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4224 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4228 jl 0x115a4230 */
  if ((C.sf!=C.of)) goto L_115a4230;
  /* 115a422a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a422e jl 0x115a4235 */
  if ((C.sf!=C.of)) goto L_115a4235;
L_115a4230:;
  /* 115a4230 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a4233 jmp 0x115a4273 */
  goto L_115a4273;
L_115a4235:;
  /* 115a4235 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4239 jne 0x115a4247 */
  if (!C.zf) goto L_115a4247;
  /* 115a423b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a423e mov eax, dword ptr [eax*4 + 0x115cfa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x115cfa38)));
  /* 115a4245 jmp 0x115a4273 */
  goto L_115a4273;
L_115a4247:;
  /* 115a4247 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a424a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 115a424d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a424f je 0x115a4256 */
  if (C.zf) goto L_115a4256;
  /* 115a4251 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a4254 jmp 0x115a4273 */
  goto L_115a4273;
L_115a4256:;
  /* 115a4256 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4259 mov eax, dword ptr [edx*4 + 0x115cfa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115cfa38)));
  /* 115a4260 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a4263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4266 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a4269 mov dword ptr [ecx*4 + 0x115cfa38], edx */
  w32((uint32_t)(ECX*4 + 0x115cfa38), (EDX));
  /* 115a4270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115a4273:;
  /* 115a4273 mov esp, ebp */
  ESP = (EBP);
  /* 115a4275 pop ebp */
  EBP = (pop32());
  /* 115a4276 ret  */
  ESPCHK(0x115a4220u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x115a4280 (126 bytes, 38 insns) */
void f_115a4280(void) {
  FTRACE(0x115a4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4280 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4281 mov ebp, esp */
  EBP = (ESP);
  /* 115a4283 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4284 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4288 jl 0x115a4290 */
  if ((C.sf!=C.of)) goto L_115a4290;
  /* 115a428a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a428e jl 0x115a4297 */
  if ((C.sf!=C.of)) goto L_115a4297;
L_115a4290:;
  /* 115a4290 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 115a4295 jmp 0x115a42fa */
  goto L_115a42fa;
L_115a4297:;
  /* 115a4297 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a429b jne 0x115a42a9 */
  if (!C.zf) goto L_115a42a9;
  /* 115a429d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a42a0 mov eax, dword ptr [eax*4 + 0x115cfa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x115cfa44)));
  /* 115a42a7 jmp 0x115a42fa */
  goto L_115a42fa;
L_115a42a9:;
  /* 115a42a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a42ac mov edx, dword ptr [ecx*4 + 0x115cfa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfa44)));
  /* 115a42b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a42b6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a42ba jne 0x115a42d0 */
  if (!C.zf) goto L_115a42d0;
  /* 115a42bc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 115a42be call dword ptr [0x115d4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4394))), 0x115a42c4u);
  /* 115a42c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a42c7 mov dword ptr [ecx*4 + 0x115cfa44], eax */
  w32((uint32_t)(ECX*4 + 0x115cfa44), (EAX));
  /* 115a42ce jmp 0x115a42f7 */
  goto L_115a42f7;
L_115a42d0:;
  /* 115a42d0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a42d4 jne 0x115a42ea */
  if (!C.zf) goto L_115a42ea;
  /* 115a42d6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 115a42d8 call dword ptr [0x115d4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4394))), 0x115a42deu);
  /* 115a42de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a42e1 mov dword ptr [edx*4 + 0x115cfa44], eax */
  w32((uint32_t)(EDX*4 + 0x115cfa44), (EAX));
  /* 115a42e8 jmp 0x115a42f7 */
  goto L_115a42f7;
L_115a42ea:;
  /* 115a42ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a42ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a42f0 mov dword ptr [eax*4 + 0x115cfa44], ecx */
  w32((uint32_t)(EAX*4 + 0x115cfa44), (ECX));
L_115a42f7:;
  /* 115a42f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115a42fa:;
  /* 115a42fa mov esp, ebp */
  ESP = (EBP);
  /* 115a42fc pop ebp */
  EBP = (pop32());
  /* 115a42fd ret  */
  ESPCHK(0x115a4280u, _esp0);
  ESP += 4; return;
}

/* FUN_10004300 @ 0x115a4300 (28 bytes, 11 insns) */
void f_115a4300(void) {
  FTRACE(0x115a4300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4300 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4301 mov ebp, esp */
  EBP = (ESP);
  /* 115a4303 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4304 mov eax, dword ptr [0x115d3160] */
  EAX = (r32((uint32_t)(0x115d3160)));
  /* 115a4309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a430c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a430f mov dword ptr [0x115d3160], ecx */
  w32((uint32_t)(0x115d3160), (ECX));
  /* 115a4315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4318 mov esp, ebp */
  ESP = (EBP);
  /* 115a431a pop ebp */
  EBP = (pop32());
  /* 115a431b ret  */
  ESPCHK(0x115a4300u, _esp0);
  ESP += 4; return;
}

/* FUN_10004320 @ 0x115a4320 (912 bytes, 248 insns) */
void f_115a4320(void) {
  FTRACE(0x115a4320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4320 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4321 mov ebp, esp */
  EBP = (ESP);
  /* 115a4323 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 115a4328 call 0x115a8400 */
  push32(0x115a432du); f_115a8400();
  /* 115a432d push edi */
  push32((uint32_t)(EDI));
  /* 115a432e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 115a4335 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 115a433a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a433c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 115a4342 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115a4344 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 115a4346 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115a4347 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 115a434e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 115a4353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a4355 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 115a435b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115a435d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 115a435f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115a4360 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 115a4367 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 115a436c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a436e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 115a4374 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115a4376 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 115a4378 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 115a4379 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 115a437c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 115a4382 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4386 jl 0x115a438e */
  if ((C.sf!=C.of)) goto L_115a438e;
  /* 115a4388 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a438c jl 0x115a4396 */
  if ((C.sf!=C.of)) goto L_115a4396;
L_115a438e:;
  /* 115a438e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a4391 jmp 0x115a46ab */
  goto L_115a46ab;
L_115a4396:;
  /* 115a4396 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a439a jne 0x115a4440 */
  if (!C.zf) goto L_115a4440;
  /* 115a43a0 push 0x115cfa34 */
  push32((uint32_t)(0x115cfa34u));
  /* 115a43a5 call dword ptr [0x115d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43ac))), 0x115a43abu);
  /* 115a43ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a43ad jle 0x115a4440 */
  if ((C.zf||C.sf!=C.of)) goto L_115a4440;
  /* 115a43b3 cmp dword ptr [0x115d161c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d161c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a43ba jne 0x115a43fe */
  if (!C.zf) goto L_115a43fe;
  /* 115a43bc push 0x115cc4e8 */
  push32((uint32_t)(0x115cc4e8u));
  /* 115a43c1 call dword ptr [0x115d43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43a8))), 0x115a43c7u);
  /* 115a43c7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 115a43cd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a43d4 je 0x115a43f6 */
  if (C.zf) goto L_115a43f6;
  /* 115a43d6 push 0x115cc4dc */
  push32((uint32_t)(0x115cc4dcu));
  /* 115a43db mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 115a43e1 push ecx */
  push32((uint32_t)(ECX));
  /* 115a43e2 call dword ptr [0x115d43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43a4))), 0x115a43e8u);
  /* 115a43e8 mov dword ptr [0x115d161c], eax */
  w32((uint32_t)(0x115d161c), (EAX));
  /* 115a43ed cmp dword ptr [0x115d161c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d161c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a43f4 jne 0x115a43fe */
  if (!C.zf) goto L_115a43fe;
L_115a43f6:;
  /* 115a43f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a43f9 jmp 0x115a46ab */
  goto L_115a46ab;
L_115a43fe:;
  /* 115a43fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a4401 push edx */
  push32((uint32_t)(EDX));
  /* 115a4402 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a4405 push eax */
  push32((uint32_t)(EAX));
  /* 115a4406 push 0x115cc4a8 */
  push32((uint32_t)(0x115cc4a8u));
  /* 115a440b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 115a4411 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4412 call dword ptr [0x115d161c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d161c))), 0x115a4418u);
  /* 115a4418 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a441b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 115a4421 push edx */
  push32((uint32_t)(EDX));
  /* 115a4422 call dword ptr [0x115d43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43a0))), 0x115a4428u);
  /* 115a4428 push 0x115cfa34 */
  push32((uint32_t)(0x115cfa34u));
  /* 115a442d call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115a4433u);
  /* 115a4433 call 0x115a4210 */
  push32(0x115a4438u); f_115a4210();
  /* 115a4438 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a443b jmp 0x115a46ab */
  goto L_115a46ab;
L_115a4440:;
  /* 115a4440 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4444 je 0x115a447d */
  if (C.zf) goto L_115a447d;
  /* 115a4446 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 115a444c push eax */
  push32((uint32_t)(EAX));
  /* 115a444d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a4450 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4451 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 115a4456 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 115a445c push edx */
  push32((uint32_t)(EDX));
  /* 115a445d call 0x115a8300 */
  push32(0x115a4462u); f_115a8300();
  /* 115a4462 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4465 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a4467 jge 0x115a447d */
  if ((C.sf==C.of)) goto L_115a447d;
  /* 115a4469 push 0x115cc47c */
  push32((uint32_t)(0x115cc47cu));
  /* 115a446e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 115a4474 push eax */
  push32((uint32_t)(EAX));
  /* 115a4475 call 0x115a8210 */
  push32(0x115a447au); f_115a8210();
  /* 115a447a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a447d:;
  /* 115a447d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4481 jne 0x115a44b5 */
  if (!C.zf) goto L_115a44b5;
  /* 115a4483 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4487 je 0x115a4495 */
  if (C.zf) goto L_115a4495;
  /* 115a4489 mov dword ptr [ebp - 0x3028], 0x115cc468 */
  w32((uint32_t)(EBP + -0x3028), (0x115cc468u));
  /* 115a4493 jmp 0x115a449f */
  goto L_115a449f;
L_115a4495:;
  /* 115a4495 mov dword ptr [ebp - 0x3028], 0x115cc454 */
  w32((uint32_t)(EBP + -0x3028), (0x115cc454u));
L_115a449f:;
  /* 115a449f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 115a44a5 push ecx */
  push32((uint32_t)(ECX));
  /* 115a44a6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 115a44ac push edx */
  push32((uint32_t)(EDX));
  /* 115a44ad call 0x115a8210 */
  push32(0x115a44b2u); f_115a8210();
  /* 115a44b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a44b5:;
  /* 115a44b5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 115a44bb push eax */
  push32((uint32_t)(EAX));
  /* 115a44bc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 115a44c2 push ecx */
  push32((uint32_t)(ECX));
  /* 115a44c3 call 0x115a8220 */
  push32(0x115a44c8u); f_115a8220();
  /* 115a44c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a44cb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a44cf jne 0x115a450a */
  if (!C.zf) goto L_115a450a;
  /* 115a44d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a44d4 mov eax, dword ptr [edx*4 + 0x115cfa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115cfa38)));
  /* 115a44db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 115a44de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a44e0 je 0x115a44f6 */
  if (C.zf) goto L_115a44f6;
  /* 115a44e2 push 0x115cc450 */
  push32((uint32_t)(0x115cc450u));
  /* 115a44e7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 115a44ed push ecx */
  push32((uint32_t)(ECX));
  /* 115a44ee call 0x115a8220 */
  push32(0x115a44f3u); f_115a8220();
  /* 115a44f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a44f6:;
  /* 115a44f6 push 0x115cc44c */
  push32((uint32_t)(0x115cc44cu));
  /* 115a44fb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 115a4501 push edx */
  push32((uint32_t)(EDX));
  /* 115a4502 call 0x115a8220 */
  push32(0x115a4507u); f_115a8220();
  /* 115a4507 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a450a:;
  /* 115a450a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a450e je 0x115a4552 */
  if (C.zf) goto L_115a4552;
  /* 115a4510 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 115a4516 push eax */
  push32((uint32_t)(EAX));
  /* 115a4517 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a451a push ecx */
  push32((uint32_t)(ECX));
  /* 115a451b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a451e push edx */
  push32((uint32_t)(EDX));
  /* 115a451f push 0x115cc440 */
  push32((uint32_t)(0x115cc440u));
  /* 115a4524 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115a4529 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 115a452f push eax */
  push32((uint32_t)(EAX));
  /* 115a4530 call 0x115a8110 */
  push32(0x115a4535u); f_115a8110();
  /* 115a4535 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a453a jge 0x115a4550 */
  if ((C.sf==C.of)) goto L_115a4550;
  /* 115a453c push 0x115cc47c */
  push32((uint32_t)(0x115cc47cu));
  /* 115a4541 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 115a4547 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4548 call 0x115a8210 */
  push32(0x115a454du); f_115a8210();
  /* 115a454d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4550:;
  /* 115a4550 jmp 0x115a4568 */
  goto L_115a4568;
L_115a4552:;
  /* 115a4552 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 115a4558 push edx */
  push32((uint32_t)(EDX));
  /* 115a4559 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 115a455f push eax */
  push32((uint32_t)(EAX));
  /* 115a4560 call 0x115a8210 */
  push32(0x115a4565u); f_115a8210();
  /* 115a4565 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4568:;
  /* 115a4568 cmp dword ptr [0x115d3160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d3160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a456f je 0x115a45ac */
  if (C.zf) goto L_115a45ac;
  /* 115a4571 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 115a4577 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4578 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 115a457e push edx */
  push32((uint32_t)(EDX));
  /* 115a457f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4582 push eax */
  push32((uint32_t)(EAX));
  /* 115a4583 call dword ptr [0x115d3160] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d3160))), 0x115a4589u);
  /* 115a4589 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a458c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a458e je 0x115a45ac */
  if (C.zf) goto L_115a45ac;
  /* 115a4590 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4594 jne 0x115a45a1 */
  if (!C.zf) goto L_115a45a1;
  /* 115a4596 push 0x115cfa34 */
  push32((uint32_t)(0x115cfa34u));
  /* 115a459b call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115a45a1u);
L_115a45a1:;
  /* 115a45a1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 115a45a7 jmp 0x115a46ab */
  goto L_115a46ab;
L_115a45ac:;
  /* 115a45ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a45af mov edx, dword ptr [ecx*4 + 0x115cfa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfa38)));
  /* 115a45b6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115a45b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a45bb je 0x115a45fb */
  if (C.zf) goto L_115a45fb;
  /* 115a45bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a45c0 cmp dword ptr [eax*4 + 0x115cfa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x115cfa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a45c8 je 0x115a45fb */
  if (C.zf) goto L_115a45fb;
  /* 115a45ca push 0 */
  push32((uint32_t)(0x0u));
  /* 115a45cc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 115a45d2 push ecx */
  push32((uint32_t)(ECX));
  /* 115a45d3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 115a45d9 push edx */
  push32((uint32_t)(EDX));
  /* 115a45da call 0x115a8090 */
  push32(0x115a45dfu); f_115a8090();
  /* 115a45df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a45e2 push eax */
  push32((uint32_t)(EAX));
  /* 115a45e3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 115a45e9 push eax */
  push32((uint32_t)(EAX));
  /* 115a45ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a45ed mov edx, dword ptr [ecx*4 + 0x115cfa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfa44)));
  /* 115a45f4 push edx */
  push32((uint32_t)(EDX));
  /* 115a45f5 call dword ptr [0x115d4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4398))), 0x115a45fbu);
L_115a45fb:;
  /* 115a45fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a45fe mov ecx, dword ptr [eax*4 + 0x115cfa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x115cfa38)));
  /* 115a4605 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 115a4608 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a460a je 0x115a4619 */
  if (C.zf) goto L_115a4619;
  /* 115a460c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 115a4612 push edx */
  push32((uint32_t)(EDX));
  /* 115a4613 call dword ptr [0x115d43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43a0))), 0x115a4619u);
L_115a4619:;
  /* 115a4619 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a461c mov ecx, dword ptr [eax*4 + 0x115cfa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x115cfa38)));
  /* 115a4623 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 115a4626 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a4628 je 0x115a4698 */
  if (C.zf) goto L_115a4698;
  /* 115a462a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a462e je 0x115a464d */
  if (C.zf) goto L_115a464d;
  /* 115a4630 push 0xa */
  push32((uint32_t)(0xau));
  /* 115a4632 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 115a4638 push edx */
  push32((uint32_t)(EDX));
  /* 115a4639 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a463c push eax */
  push32((uint32_t)(EAX));
  /* 115a463d call 0x115a7da0 */
  push32(0x115a4642u); f_115a7da0();
  /* 115a4642 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4645 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 115a464b jmp 0x115a4657 */
  goto L_115a4657;
L_115a464d:;
  /* 115a464d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_115a4657:;
  /* 115a4657 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 115a465d push ecx */
  push32((uint32_t)(ECX));
  /* 115a465e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a4661 push edx */
  push32((uint32_t)(EDX));
  /* 115a4662 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 115a4668 push eax */
  push32((uint32_t)(EAX));
  /* 115a4669 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a466c push ecx */
  push32((uint32_t)(ECX));
  /* 115a466d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4670 push edx */
  push32((uint32_t)(EDX));
  /* 115a4671 call 0x115a46b0 */
  push32(0x115a4676u); f_115a46b0();
  /* 115a4676 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4679 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 115a467f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4683 jne 0x115a4690 */
  if (!C.zf) goto L_115a4690;
  /* 115a4685 push 0x115cfa34 */
  push32((uint32_t)(0x115cfa34u));
  /* 115a468a call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115a4690u);
L_115a4690:;
  /* 115a4690 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 115a4696 jmp 0x115a46ab */
  goto L_115a46ab;
L_115a4698:;
  /* 115a4698 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a469c jne 0x115a46a9 */
  if (!C.zf) goto L_115a46a9;
  /* 115a469e push 0x115cfa34 */
  push32((uint32_t)(0x115cfa34u));
  /* 115a46a3 call dword ptr [0x115d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d439c))), 0x115a46a9u);
L_115a46a9:;
  /* 115a46a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a46ab:;
  /* 115a46ab pop edi */
  EDI = (pop32());
  /* 115a46ac mov esp, ebp */
  ESP = (EBP);
  /* 115a46ae pop ebp */
  EBP = (pop32());
  /* 115a46af ret  */
  ESPCHK(0x115a4320u, _esp0);
  ESP += 4; return;
}

/* FUN_100046b0 @ 0x115a46b0 (780 bytes, 197 insns) */
void f_115a46b0(void) {
  FTRACE(0x115a46b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a46b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a46b1 mov ebp, esp */
  EBP = (ESP);
  /* 115a46b3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 115a46b8 call 0x115a8400 */
  push32(0x115a46bdu); f_115a8400();
L_115a46bd:;
  /* 115a46bd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a46c1 jne 0x115a46e8 */
  if (!C.zf) goto L_115a46e8;
  /* 115a46c3 push 0x115cc638 */
  push32((uint32_t)(0x115cc638u));
  /* 115a46c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a46ca push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 115a46cf push 0x115cc62c */
  push32((uint32_t)(0x115cc62cu));
  /* 115a46d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a46d6 call 0x115a4320 */
  push32(0x115a46dbu); f_115a4320();
  /* 115a46db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a46de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a46e1 jne 0x115a46e8 */
  if (!C.zf) goto L_115a46e8;
  /* 115a46e3 call 0x115a4210 */
  push32(0x115a46e8u); f_115a4210();
L_115a46e8:;
  /* 115a46e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a46ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a46ec jne 0x115a46bd */
  if (!C.zf) goto L_115a46bd;
  /* 115a46ee push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115a46f3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 115a46f9 push ecx */
  push32((uint32_t)(ECX));
  /* 115a46fa push 0 */
  push32((uint32_t)(0x0u));
  /* 115a46fc call dword ptr [0x115d43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b0))), 0x115a4702u);
  /* 115a4702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a4704 jne 0x115a471a */
  if (!C.zf) goto L_115a471a;
  /* 115a4706 push 0x115cc614 */
  push32((uint32_t)(0x115cc614u));
  /* 115a470b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 115a4711 push edx */
  push32((uint32_t)(EDX));
  /* 115a4712 call 0x115a8210 */
  push32(0x115a4717u); f_115a8210();
  /* 115a4717 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a471a:;
  /* 115a471a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 115a4720 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a4723 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4726 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4727 call 0x115a8090 */
  push32(0x115a472cu); f_115a8090();
  /* 115a472c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a472f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4732 jbe 0x115a475d */
  if ((C.cf||C.zf)) goto L_115a475d;
  /* 115a4734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4737 push edx */
  push32((uint32_t)(EDX));
  /* 115a4738 call 0x115a8090 */
  push32(0x115a473du); f_115a8090();
  /* 115a473d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4740 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4743 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 115a4747 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a474a push 3 */
  push32((uint32_t)(0x3u));
  /* 115a474c push 0x115cc610 */
  push32((uint32_t)(0x115cc610u));
  /* 115a4751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4754 push eax */
  push32((uint32_t)(EAX));
  /* 115a4755 call 0x115a8a80 */
  push32(0x115a475au); f_115a8a80();
  /* 115a475a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a475d:;
  /* 115a475d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a4760 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 115a4766 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a476d je 0x115a47b8 */
  if (C.zf) goto L_115a47b8;
  /* 115a476f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 115a4775 push edx */
  push32((uint32_t)(EDX));
  /* 115a4776 call 0x115a8090 */
  push32(0x115a477bu); f_115a8090();
  /* 115a477b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a477e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4781 jbe 0x115a47b8 */
  if ((C.cf||C.zf)) goto L_115a47b8;
  /* 115a4783 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 115a4789 push eax */
  push32((uint32_t)(EAX));
  /* 115a478a call 0x115a8090 */
  push32(0x115a478fu); f_115a8090();
  /* 115a478f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4792 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 115a4798 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 115a479c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 115a47a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a47a4 push 0x115cc610 */
  push32((uint32_t)(0x115cc610u));
  /* 115a47a9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 115a47af push eax */
  push32((uint32_t)(EAX));
  /* 115a47b0 call 0x115a8a80 */
  push32(0x115a47b5u); f_115a8a80();
  /* 115a47b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a47b8:;
  /* 115a47b8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a47bc jne 0x115a47ca */
  if (!C.zf) goto L_115a47ca;
  /* 115a47be mov dword ptr [ebp - 0x1114], 0x115cc59c */
  w32((uint32_t)(EBP + -0x1114), (0x115cc59cu));
  /* 115a47c8 jmp 0x115a47d4 */
  goto L_115a47d4;
L_115a47ca:;
  /* 115a47ca mov dword ptr [ebp - 0x1114], 0x115cc33c */
  w32((uint32_t)(EBP + -0x1114), (0x115cc33cu));
L_115a47d4:;
  /* 115a47d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a47d7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115a47da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a47dc je 0x115a47e9 */
  if (C.zf) goto L_115a47e9;
  /* 115a47de mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a47e1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 115a47e7 jmp 0x115a47f3 */
  goto L_115a47f3;
L_115a47e9:;
  /* 115a47e9 mov dword ptr [ebp - 0x1118], 0x115cc33c */
  w32((uint32_t)(EBP + -0x1118), (0x115cc33cu));
L_115a47f3:;
  /* 115a47f3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a47f6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115a47f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a47fb je 0x115a480f */
  if (C.zf) goto L_115a480f;
  /* 115a47fd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4801 jne 0x115a480f */
  if (!C.zf) goto L_115a480f;
  /* 115a4803 mov dword ptr [ebp - 0x111c], 0x115cc58c */
  w32((uint32_t)(EBP + -0x111c), (0x115cc58cu));
  /* 115a480d jmp 0x115a4819 */
  goto L_115a4819;
L_115a480f:;
  /* 115a480f mov dword ptr [ebp - 0x111c], 0x115cc33c */
  w32((uint32_t)(EBP + -0x111c), (0x115cc33cu));
L_115a4819:;
  /* 115a4819 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a481c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a481f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a4821 je 0x115a482f */
  if (C.zf) goto L_115a482f;
  /* 115a4823 mov dword ptr [ebp - 0x1120], 0x115cc588 */
  w32((uint32_t)(EBP + -0x1120), (0x115cc588u));
  /* 115a482d jmp 0x115a4839 */
  goto L_115a4839;
L_115a482f:;
  /* 115a482f mov dword ptr [ebp - 0x1120], 0x115cc33c */
  w32((uint32_t)(EBP + -0x1120), (0x115cc33cu));
L_115a4839:;
  /* 115a4839 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a483d je 0x115a484a */
  if (C.zf) goto L_115a484a;
  /* 115a483f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a4842 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 115a4848 jmp 0x115a4854 */
  goto L_115a4854;
L_115a484a:;
  /* 115a484a mov dword ptr [ebp - 0x1124], 0x115cc33c */
  w32((uint32_t)(EBP + -0x1124), (0x115cc33cu));
L_115a4854:;
  /* 115a4854 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4858 je 0x115a4866 */
  if (C.zf) goto L_115a4866;
  /* 115a485a mov dword ptr [ebp - 0x1128], 0x115cc580 */
  w32((uint32_t)(EBP + -0x1128), (0x115cc580u));
  /* 115a4864 jmp 0x115a4870 */
  goto L_115a4870;
L_115a4866:;
  /* 115a4866 mov dword ptr [ebp - 0x1128], 0x115cc33c */
  w32((uint32_t)(EBP + -0x1128), (0x115cc33cu));
L_115a4870:;
  /* 115a4870 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4874 je 0x115a4881 */
  if (C.zf) goto L_115a4881;
  /* 115a4876 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a4879 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 115a487f jmp 0x115a488b */
  goto L_115a488b;
L_115a4881:;
  /* 115a4881 mov dword ptr [ebp - 0x112c], 0x115cc33c */
  w32((uint32_t)(EBP + -0x112c), (0x115cc33cu));
L_115a488b:;
  /* 115a488b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a488f je 0x115a489d */
  if (C.zf) goto L_115a489d;
  /* 115a4891 mov dword ptr [ebp - 0x1130], 0x115cc578 */
  w32((uint32_t)(EBP + -0x1130), (0x115cc578u));
  /* 115a489b jmp 0x115a48a7 */
  goto L_115a48a7;
L_115a489d:;
  /* 115a489d mov dword ptr [ebp - 0x1130], 0x115cc33c */
  w32((uint32_t)(EBP + -0x1130), (0x115cc33cu));
L_115a48a7:;
  /* 115a48a7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a48ae je 0x115a48be */
  if (C.zf) goto L_115a48be;
  /* 115a48b0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 115a48b6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 115a48bc jmp 0x115a48c8 */
  goto L_115a48c8;
L_115a48be:;
  /* 115a48be mov dword ptr [ebp - 0x1134], 0x115cc33c */
  w32((uint32_t)(EBP + -0x1134), (0x115cc33cu));
L_115a48c8:;
  /* 115a48c8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a48cf je 0x115a48dd */
  if (C.zf) goto L_115a48dd;
  /* 115a48d1 mov dword ptr [ebp - 0x1138], 0x115cc56c */
  w32((uint32_t)(EBP + -0x1138), (0x115cc56cu));
  /* 115a48db jmp 0x115a48e7 */
  goto L_115a48e7;
L_115a48dd:;
  /* 115a48dd mov dword ptr [ebp - 0x1138], 0x115cc33c */
  w32((uint32_t)(EBP + -0x1138), (0x115cc33cu));
L_115a48e7:;
  /* 115a48e7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 115a48ed push edx */
  push32((uint32_t)(EDX));
  /* 115a48ee mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 115a48f4 push eax */
  push32((uint32_t)(EAX));
  /* 115a48f5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 115a48fb push ecx */
  push32((uint32_t)(ECX));
  /* 115a48fc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 115a4902 push edx */
  push32((uint32_t)(EDX));
  /* 115a4903 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 115a4909 push eax */
  push32((uint32_t)(EAX));
  /* 115a490a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 115a4910 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4911 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 115a4917 push edx */
  push32((uint32_t)(EDX));
  /* 115a4918 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 115a491e push eax */
  push32((uint32_t)(EAX));
  /* 115a491f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 115a4925 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4926 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 115a492c push edx */
  push32((uint32_t)(EDX));
  /* 115a492d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4930 push eax */
  push32((uint32_t)(EAX));
  /* 115a4931 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4934 mov edx, dword ptr [ecx*4 + 0x115cfa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfa50)));
  /* 115a493b push edx */
  push32((uint32_t)(EDX));
  /* 115a493c push 0x115cc518 */
  push32((uint32_t)(0x115cc518u));
  /* 115a4941 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115a4946 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 115a494c push eax */
  push32((uint32_t)(EAX));
  /* 115a494d call 0x115a8110 */
  push32(0x115a4952u); f_115a8110();
  /* 115a4952 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a4957 jge 0x115a496d */
  if ((C.sf==C.of)) goto L_115a496d;
  /* 115a4959 push 0x115cc47c */
  push32((uint32_t)(0x115cc47cu));
  /* 115a495e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 115a4964 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4965 call 0x115a8210 */
  push32(0x115a496au); f_115a8210();
  /* 115a496a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a496d:;
  /* 115a496d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 115a4972 push 0x115cc4f4 */
  push32((uint32_t)(0x115cc4f4u));
  /* 115a4977 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 115a497d push edx */
  push32((uint32_t)(EDX));
  /* 115a497e call 0x115a89c0 */
  push32(0x115a4983u); f_115a89c0();
  /* 115a4983 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4986 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 115a498c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4993 jne 0x115a49a6 */
  if (!C.zf) goto L_115a49a6;
  /* 115a4995 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 115a4997 call 0x115a8700 */
  push32(0x115a499cu); f_115a8700();
  /* 115a499c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a499f push 3 */
  push32((uint32_t)(0x3u));
  /* 115a49a1 call 0x115a4a20 */
  push32(0x115a49a6u); f_115a4a20();
L_115a49a6:;
  /* 115a49a6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a49ad jne 0x115a49b6 */
  if (!C.zf) goto L_115a49b6;
  /* 115a49af mov eax, 1 */
  EAX = (0x1u);
  /* 115a49b4 jmp 0x115a49b8 */
  goto L_115a49b8;
L_115a49b6:;
  /* 115a49b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a49b8:;
  /* 115a49b8 mov esp, ebp */
  ESP = (EBP);
  /* 115a49ba pop ebp */
  EBP = (pop32());
  /* 115a49bb ret  */
  ESPCHK(0x115a46b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049c0 @ 0x115a49c0 (56 bytes, 15 insns) */
void f_115a49c0(void) {
  FTRACE(0x115a49c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a49c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a49c1 mov ebp, esp */
  EBP = (ESP);
  /* 115a49c3 cmp dword ptr [0x115d315c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d315c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a49ca je 0x115a49d2 */
  if (C.zf) goto L_115a49d2;
  /* 115a49cc call dword ptr [0x115d315c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d315c))), 0x115a49d2u);
L_115a49d2:;
  /* 115a49d2 push 0x115cf418 */
  push32((uint32_t)(0x115cf418u));
  /* 115a49d7 push 0x115cf208 */
  push32((uint32_t)(0x115cf208u));
  /* 115a49dc call 0x115a4b90 */
  push32(0x115a49e1u); f_115a4b90();
  /* 115a49e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a49e4 push 0x115cf104 */
  push32((uint32_t)(0x115cf104u));
  /* 115a49e9 push 0x115cf000 */
  push32((uint32_t)(0x115cf000u));
  /* 115a49ee call 0x115a4b90 */
  push32(0x115a49f3u); f_115a4b90();
  /* 115a49f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a49f6 pop ebp */
  EBP = (pop32());
  /* 115a49f7 ret  */
  ESPCHK(0x115a49c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a00 @ 0x115a4a00 (21 bytes, 10 insns) */
void f_115a4a00(void) {
  FTRACE(0x115a4a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4a00 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4a01 mov ebp, esp */
  EBP = (ESP);
  /* 115a4a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a4a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a4a07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4a0a push eax */
  push32((uint32_t)(EAX));
  /* 115a4a0b call 0x115a4a80 */
  push32(0x115a4a10u); f_115a4a80();
  /* 115a4a10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4a13 pop ebp */
  EBP = (pop32());
  /* 115a4a14 ret  */
  ESPCHK(0x115a4a00u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x115a4a20 (21 bytes, 10 insns) */
void f_115a4a20(void) {
  FTRACE(0x115a4a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4a20 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4a21 mov ebp, esp */
  EBP = (ESP);
  /* 115a4a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a4a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a4a27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4a2a push eax */
  push32((uint32_t)(EAX));
  /* 115a4a2b call 0x115a4a80 */
  push32(0x115a4a30u); f_115a4a80();
  /* 115a4a30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4a33 pop ebp */
  EBP = (pop32());
  /* 115a4a34 ret  */
  ESPCHK(0x115a4a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x115a4a40 (19 bytes, 9 insns) */
void f_115a4a40(void) {
  FTRACE(0x115a4a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4a40 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4a41 mov ebp, esp */
  EBP = (ESP);
  /* 115a4a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a4a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a4a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a4a49 call 0x115a4a80 */
  push32(0x115a4a4eu); f_115a4a80();
  /* 115a4a4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4a51 pop ebp */
  EBP = (pop32());
  /* 115a4a52 ret  */
  ESPCHK(0x115a4a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a60 @ 0x115a4a60 (19 bytes, 9 insns) */
void f_115a4a60(void) {
  FTRACE(0x115a4a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4a60 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4a61 mov ebp, esp */
  EBP = (ESP);
  /* 115a4a63 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a4a65 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a4a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a4a69 call 0x115a4a80 */
  push32(0x115a4a6eu); f_115a4a80();
  /* 115a4a6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4a71 pop ebp */
  EBP = (pop32());
  /* 115a4a72 ret  */
  ESPCHK(0x115a4a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x115a4a80 (227 bytes, 61 insns) */
void f_115a4a80(void) {
  FTRACE(0x115a4a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4a80 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4a81 mov ebp, esp */
  EBP = (ESP);
  /* 115a4a83 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4a84 call 0x115a4b70 */
  push32(0x115a4a89u); f_115a4b70();
  /* 115a4a89 cmp dword ptr [0x115d1660], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1660))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4a90 jne 0x115a4aa3 */
  if (!C.zf) goto L_115a4aa3;
  /* 115a4a92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4a95 push eax */
  push32((uint32_t)(EAX));
  /* 115a4a96 call dword ptr [0x115d42d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42d0))), 0x115a4a9cu);
  /* 115a4a9c push eax */
  push32((uint32_t)(EAX));
  /* 115a4a9d call dword ptr [0x115d42cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d42cc))), 0x115a4aa3u);
L_115a4aa3:;
  /* 115a4aa3 mov dword ptr [0x115d165c], 1 */
  w32((uint32_t)(0x115d165c), (0x1u));
  /* 115a4aad mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 115a4ab0 mov byte ptr [0x115d1658], cl */
  w8((uint32_t)(0x115d1658), (CL));
  /* 115a4ab6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4aba jne 0x115a4b03 */
  if (!C.zf) goto L_115a4b03;
  /* 115a4abc cmp dword ptr [0x115d3158], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d3158))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4ac3 je 0x115a4af1 */
  if (C.zf) goto L_115a4af1;
  /* 115a4ac5 mov edx, dword ptr [0x115d3154] */
  EDX = (r32((uint32_t)(0x115d3154)));
  /* 115a4acb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115a4ace:;
  /* 115a4ace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4ad1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a4ad4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a4ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4ada cmp ecx, dword ptr [0x115d3158] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d3158))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4ae0 jb 0x115a4af1 */
  if (C.cf) goto L_115a4af1;
  /* 115a4ae2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4ae5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4ae8 je 0x115a4aef */
  if (C.zf) goto L_115a4aef;
  /* 115a4aea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4aed call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x115a4aefu);
L_115a4aef:;
  /* 115a4aef jmp 0x115a4ace */
  goto L_115a4ace;
L_115a4af1:;
  /* 115a4af1 push 0x115cf724 */
  push32((uint32_t)(0x115cf724u));
  /* 115a4af6 push 0x115cf51c */
  push32((uint32_t)(0x115cf51cu));
  /* 115a4afb call 0x115a4b90 */
  push32(0x115a4b00u); f_115a4b90();
  /* 115a4b00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4b03:;
  /* 115a4b03 push 0x115cf92c */
  push32((uint32_t)(0x115cf92cu));
  /* 115a4b08 push 0x115cf828 */
  push32((uint32_t)(0x115cf828u));
  /* 115a4b0d call 0x115a4b90 */
  push32(0x115a4b12u); f_115a4b90();
  /* 115a4b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4b15 cmp dword ptr [0x115d1664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4b1c jne 0x115a4b3e */
  if (!C.zf) goto L_115a4b3e;
  /* 115a4b1e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115a4b20 call 0x115a6770 */
  push32(0x115a4b25u); f_115a6770();
  /* 115a4b25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4b28 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 115a4b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a4b2d je 0x115a4b3e */
  if (C.zf) goto L_115a4b3e;
  /* 115a4b2f mov dword ptr [0x115d1664], 1 */
  w32((uint32_t)(0x115d1664), (0x1u));
  /* 115a4b39 call 0x115a7080 */
  push32(0x115a4b3eu); f_115a7080();
L_115a4b3e:;
  /* 115a4b3e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4b42 je 0x115a4b4b */
  if (C.zf) goto L_115a4b4b;
  /* 115a4b44 call 0x115a4b80 */
  push32(0x115a4b49u); f_115a4b80();
  /* 115a4b49 jmp 0x115a4b5f */
  goto L_115a4b5f;
L_115a4b4b:;
  /* 115a4b4b mov dword ptr [0x115d1660], 1 */
  w32((uint32_t)(0x115d1660), (0x1u));
  /* 115a4b55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4b58 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4b59 call dword ptr [0x115d43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b4))), 0x115a4b5fu);
L_115a4b5f:;
  /* 115a4b5f mov esp, ebp */
  ESP = (EBP);
  /* 115a4b61 pop ebp */
  EBP = (pop32());
  /* 115a4b62 ret  */
  ESPCHK(0x115a4a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b70 @ 0x115a4b70 (15 bytes, 7 insns) */
void f_115a4b70(void) {
  FTRACE(0x115a4b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4b70 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4b71 mov ebp, esp */
  EBP = (ESP);
  /* 115a4b73 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115a4b75 call 0x115a8c60 */
  push32(0x115a4b7au); f_115a8c60();
  /* 115a4b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4b7d pop ebp */
  EBP = (pop32());
  /* 115a4b7e ret  */
  ESPCHK(0x115a4b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b80 @ 0x115a4b80 (15 bytes, 7 insns) */
void f_115a4b80(void) {
  FTRACE(0x115a4b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4b80 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4b81 mov ebp, esp */
  EBP = (ESP);
  /* 115a4b83 push 0xd */
  push32((uint32_t)(0xdu));
  /* 115a4b85 call 0x115a8d00 */
  push32(0x115a4b8au); f_115a8d00();
  /* 115a4b8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4b8d pop ebp */
  EBP = (pop32());
  /* 115a4b8e ret  */
  ESPCHK(0x115a4b80u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x115a4b90 (37 bytes, 16 insns) */
void f_115a4b90(void) {
  FTRACE(0x115a4b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4b90 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4b91 mov ebp, esp */
  EBP = (ESP);
L_115a4b93:;
  /* 115a4b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4b96 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4b99 jae 0x115a4bb3 */
  if (!C.cf) goto L_115a4bb3;
  /* 115a4b9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4b9e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4ba1 je 0x115a4ba8 */
  if (C.zf) goto L_115a4ba8;
  /* 115a4ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4ba6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x115a4ba8u);
L_115a4ba8:;
  /* 115a4ba8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4bab add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4bae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115a4bb1 jmp 0x115a4b93 */
  goto L_115a4b93;
L_115a4bb3:;
  /* 115a4bb3 pop ebp */
  EBP = (pop32());
  /* 115a4bb4 ret  */
  ESPCHK(0x115a4b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bc0 @ 0x115a4bc0 (130 bytes, 42 insns) */
void f_115a4bc0(void) {
  FTRACE(0x115a4bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4bc1 mov ebp, esp */
  EBP = (ESP);
  /* 115a4bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4bc4 call 0x115a8b80 */
  push32(0x115a4bc9u); f_115a8b80();
  /* 115a4bc9 call dword ptr [0x115d43c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43c8))), 0x115a4bcfu);
  /* 115a4bcf mov dword ptr [0x115cfa5c], eax */
  w32((uint32_t)(0x115cfa5c), (EAX));
  /* 115a4bd4 cmp dword ptr [0x115cfa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4bdb jne 0x115a4be1 */
  if (!C.zf) goto L_115a4be1;
  /* 115a4bdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a4bdf jmp 0x115a4c3e */
  goto L_115a4c3e;
L_115a4be1:;
  /* 115a4be1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 115a4be3 push 0x115cc650 */
  push32((uint32_t)(0x115cc650u));
  /* 115a4be8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4bea push 0x74 */
  push32((uint32_t)(0x74u));
  /* 115a4bec push 1 */
  push32((uint32_t)(0x1u));
  /* 115a4bee call 0x115a5670 */
  push32(0x115a4bf3u); f_115a5670();
  /* 115a4bf3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4bf6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a4bf9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4bfd je 0x115a4c14 */
  if (C.zf) goto L_115a4c14;
  /* 115a4bff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4c02 push eax */
  push32((uint32_t)(EAX));
  /* 115a4c03 mov ecx, dword ptr [0x115cfa5c] */
  ECX = (r32((uint32_t)(0x115cfa5c)));
  /* 115a4c09 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4c0a call dword ptr [0x115d43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43c4))), 0x115a4c10u);
  /* 115a4c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a4c12 jne 0x115a4c18 */
  if (!C.zf) goto L_115a4c18;
L_115a4c14:;
  /* 115a4c14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a4c16 jmp 0x115a4c3e */
  goto L_115a4c3e;
L_115a4c18:;
  /* 115a4c18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4c1b push edx */
  push32((uint32_t)(EDX));
  /* 115a4c1c call 0x115a4c80 */
  push32(0x115a4c21u); f_115a4c80();
  /* 115a4c21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4c24 call dword ptr [0x115d43c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43c0))), 0x115a4c2au);
  /* 115a4c2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4c2d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115a4c2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4c32 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 115a4c39 mov eax, 1 */
  EAX = (0x1u);
L_115a4c3e:;
  /* 115a4c3e mov esp, ebp */
  ESP = (EBP);
  /* 115a4c40 pop ebp */
  EBP = (pop32());
  /* 115a4c41 ret  */
  ESPCHK(0x115a4bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c50 @ 0x115a4c50 (41 bytes, 11 insns) */
void f_115a4c50(void) {
  FTRACE(0x115a4c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4c50 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4c51 mov ebp, esp */
  EBP = (ESP);
  /* 115a4c53 call 0x115a8bc0 */
  push32(0x115a4c58u); f_115a8bc0();
  /* 115a4c58 cmp dword ptr [0x115cfa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4c5f je 0x115a4c77 */
  if (C.zf) goto L_115a4c77;
  /* 115a4c61 mov eax, dword ptr [0x115cfa5c] */
  EAX = (r32((uint32_t)(0x115cfa5c)));
  /* 115a4c66 push eax */
  push32((uint32_t)(EAX));
  /* 115a4c67 call dword ptr [0x115d43cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43cc))), 0x115a4c6du);
  /* 115a4c6d mov dword ptr [0x115cfa5c], 0xffffffff */
  w32((uint32_t)(0x115cfa5c), (0xffffffffu));
L_115a4c77:;
  /* 115a4c77 pop ebp */
  EBP = (pop32());
  /* 115a4c78 ret  */
  ESPCHK(0x115a4c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c80 @ 0x115a4c80 (25 bytes, 8 insns) */
void f_115a4c80(void) {
  FTRACE(0x115a4c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4c80 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4c81 mov ebp, esp */
  EBP = (ESP);
  /* 115a4c83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4c86 mov dword ptr [eax + 0x50], 0x115cfc00 */
  w32((uint32_t)(EAX + 0x50), (0x115cfc00u));
  /* 115a4c8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4c90 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 115a4c97 pop ebp */
  EBP = (pop32());
  /* 115a4c98 ret  */
  ESPCHK(0x115a4c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ca0 @ 0x115a4ca0 (152 bytes, 48 insns) */
void f_115a4ca0(void) {
  FTRACE(0x115a4ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4ca1 mov ebp, esp */
  EBP = (ESP);
  /* 115a4ca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a4ca6 call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115a4cacu);
  /* 115a4cac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a4caf mov eax, dword ptr [0x115cfa5c] */
  EAX = (r32((uint32_t)(0x115cfa5c)));
  /* 115a4cb4 push eax */
  push32((uint32_t)(EAX));
  /* 115a4cb5 call dword ptr [0x115d43d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d4))), 0x115a4cbbu);
  /* 115a4cbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a4cbe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4cc2 jne 0x115a4d27 */
  if (!C.zf) goto L_115a4d27;
  /* 115a4cc4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 115a4cc9 push 0x115cc650 */
  push32((uint32_t)(0x115cc650u));
  /* 115a4cce push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4cd0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 115a4cd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a4cd4 call 0x115a5670 */
  push32(0x115a4cd9u); f_115a5670();
  /* 115a4cd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4cdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a4cdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4ce3 je 0x115a4d1d */
  if (C.zf) goto L_115a4d1d;
  /* 115a4ce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4ce9 mov edx, dword ptr [0x115cfa5c] */
  EDX = (r32((uint32_t)(0x115cfa5c)));
  /* 115a4cef push edx */
  push32((uint32_t)(EDX));
  /* 115a4cf0 call dword ptr [0x115d43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43c4))), 0x115a4cf6u);
  /* 115a4cf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a4cf8 je 0x115a4d1d */
  if (C.zf) goto L_115a4d1d;
  /* 115a4cfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4cfd push eax */
  push32((uint32_t)(EAX));
  /* 115a4cfe call 0x115a4c80 */
  push32(0x115a4d03u); f_115a4c80();
  /* 115a4d03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4d06 call dword ptr [0x115d43c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43c0))), 0x115a4d0cu);
  /* 115a4d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4d0f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115a4d11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4d14 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 115a4d1b jmp 0x115a4d27 */
  goto L_115a4d27;
L_115a4d1d:;
  /* 115a4d1d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 115a4d1f call 0x115a41d0 */
  push32(0x115a4d24u); f_115a41d0();
  /* 115a4d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4d27:;
  /* 115a4d27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a4d2a push eax */
  push32((uint32_t)(EAX));
  /* 115a4d2b call dword ptr [0x115d43d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d0))), 0x115a4d31u);
  /* 115a4d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4d34 mov esp, ebp */
  ESP = (EBP);
  /* 115a4d36 pop ebp */
  EBP = (pop32());
  /* 115a4d37 ret  */
  ESPCHK(0x115a4ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d40 @ 0x115a4d40 (263 bytes, 86 insns) */
void f_115a4d40(void) {
  FTRACE(0x115a4d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4d40 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4d41 mov ebp, esp */
  EBP = (ESP);
  /* 115a4d43 cmp dword ptr [0x115cfa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4d4a je 0x115a4e45 */
  if (C.zf) goto L_115a4e45;
  /* 115a4d50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4d54 jne 0x115a4d65 */
  if (!C.zf) goto L_115a4d65;
  /* 115a4d56 mov eax, dword ptr [0x115cfa5c] */
  EAX = (r32((uint32_t)(0x115cfa5c)));
  /* 115a4d5b push eax */
  push32((uint32_t)(EAX));
  /* 115a4d5c call dword ptr [0x115d43d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d4))), 0x115a4d62u);
  /* 115a4d62 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115a4d65:;
  /* 115a4d65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4d69 je 0x115a4e36 */
  if (C.zf) goto L_115a4e36;
  /* 115a4d6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4d72 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4d76 je 0x115a4d89 */
  if (C.zf) goto L_115a4d89;
  /* 115a4d78 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4d7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4d7d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 115a4d80 push eax */
  push32((uint32_t)(EAX));
  /* 115a4d81 call 0x115a5cf0 */
  push32(0x115a4d86u); f_115a5cf0();
  /* 115a4d86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4d89:;
  /* 115a4d89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4d8c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4d90 je 0x115a4da3 */
  if (C.zf) goto L_115a4da3;
  /* 115a4d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4d94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4d97 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 115a4d9a push eax */
  push32((uint32_t)(EAX));
  /* 115a4d9b call 0x115a5cf0 */
  push32(0x115a4da0u); f_115a5cf0();
  /* 115a4da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4da3:;
  /* 115a4da3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4da6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4daa je 0x115a4dbd */
  if (C.zf) goto L_115a4dbd;
  /* 115a4dac push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4dae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4db1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 115a4db4 push eax */
  push32((uint32_t)(EAX));
  /* 115a4db5 call 0x115a5cf0 */
  push32(0x115a4dbau); f_115a5cf0();
  /* 115a4dba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4dbd:;
  /* 115a4dbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4dc0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4dc4 je 0x115a4dd7 */
  if (C.zf) goto L_115a4dd7;
  /* 115a4dc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4dc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4dcb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 115a4dce push eax */
  push32((uint32_t)(EAX));
  /* 115a4dcf call 0x115a5cf0 */
  push32(0x115a4dd4u); f_115a5cf0();
  /* 115a4dd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4dd7:;
  /* 115a4dd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4dda cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4dde je 0x115a4df1 */
  if (C.zf) goto L_115a4df1;
  /* 115a4de0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4de2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4de5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 115a4de8 push eax */
  push32((uint32_t)(EAX));
  /* 115a4de9 call 0x115a5cf0 */
  push32(0x115a4deeu); f_115a5cf0();
  /* 115a4dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4df1:;
  /* 115a4df1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4df4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4df8 je 0x115a4e0b */
  if (C.zf) goto L_115a4e0b;
  /* 115a4dfa push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4dfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4dff mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 115a4e02 push eax */
  push32((uint32_t)(EAX));
  /* 115a4e03 call 0x115a5cf0 */
  push32(0x115a4e08u); f_115a5cf0();
  /* 115a4e08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4e0b:;
  /* 115a4e0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4e0e cmp dword ptr [ecx + 0x50], 0x115cfc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x115cfc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4e15 je 0x115a4e28 */
  if (C.zf) goto L_115a4e28;
  /* 115a4e17 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4e1c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 115a4e1f push eax */
  push32((uint32_t)(EAX));
  /* 115a4e20 call 0x115a5cf0 */
  push32(0x115a4e25u); f_115a5cf0();
  /* 115a4e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4e28:;
  /* 115a4e28 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4e2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a4e2d push ecx */
  push32((uint32_t)(ECX));
  /* 115a4e2e call 0x115a5cf0 */
  push32(0x115a4e33u); f_115a5cf0();
  /* 115a4e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4e36:;
  /* 115a4e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a4e38 mov edx, dword ptr [0x115cfa5c] */
  EDX = (r32((uint32_t)(0x115cfa5c)));
  /* 115a4e3e push edx */
  push32((uint32_t)(EDX));
  /* 115a4e3f call dword ptr [0x115d43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43c4))), 0x115a4e45u);
L_115a4e45:;
  /* 115a4e45 pop ebp */
  EBP = (pop32());
  /* 115a4e46 ret  */
  ESPCHK(0x115a4d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x115a4e50 (11 bytes, 5 insns) */
void f_115a4e50(void) {
  FTRACE(0x115a4e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4e50 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4e51 mov ebp, esp */
  EBP = (ESP);
  /* 115a4e53 call dword ptr [0x115d43c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43c0))), 0x115a4e59u);
  /* 115a4e59 pop ebp */
  EBP = (pop32());
  /* 115a4e5a ret  */
  ESPCHK(0x115a4e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x115a4e60 (11 bytes, 5 insns) */
void f_115a4e60(void) {
  FTRACE(0x115a4e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4e60 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4e61 mov ebp, esp */
  EBP = (ESP);
  /* 115a4e63 call dword ptr [0x115d43dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43dc))), 0x115a4e69u);
  /* 115a4e69 pop ebp */
  EBP = (pop32());
  /* 115a4e6a ret  */
  ESPCHK(0x115a4e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e70 @ 0x115a4e70 (804 bytes, 236 insns) */
void f_115a4e70(void) {
  FTRACE(0x115a4e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a4e70 push ebp */
  push32((uint32_t)(EBP));
  /* 115a4e71 mov ebp, esp */
  EBP = (ESP);
  /* 115a4e73 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a4e76 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 115a4e7b push 0x115cc65c */
  push32((uint32_t)(0x115cc65cu));
  /* 115a4e80 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4e82 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115a4e87 call 0x115a5260 */
  push32(0x115a4e8cu); f_115a5260();
  /* 115a4e8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4e8f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 115a4e92 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4e96 jne 0x115a4ea2 */
  if (!C.zf) goto L_115a4ea2;
  /* 115a4e98 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 115a4e9a call 0x115a41d0 */
  push32(0x115a4e9fu); f_115a41d0();
  /* 115a4e9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a4ea2:;
  /* 115a4ea2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4ea5 mov dword ptr [0x115d3000], eax */
  w32((uint32_t)(0x115d3000), (EAX));
  /* 115a4eaa mov dword ptr [0x115d313c], 0x20 */
  w32((uint32_t)(0x115d313c), (0x20u));
  /* 115a4eb4 jmp 0x115a4ebf */
  goto L_115a4ebf;
L_115a4eb6:;
  /* 115a4eb6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4eb9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4ebc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_115a4ebf:;
  /* 115a4ebf mov edx, dword ptr [0x115d3000] */
  EDX = (r32((uint32_t)(0x115d3000)));
  /* 115a4ec5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4ecb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4ece jae 0x115a4ef3 */
  if (!C.cf) goto L_115a4ef3;
  /* 115a4ed0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4ed3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 115a4ed7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4eda mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 115a4ee0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4ee3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 115a4ee7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4eea mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 115a4ef1 jmp 0x115a4eb6 */
  goto L_115a4eb6;
L_115a4ef3:;
  /* 115a4ef3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 115a4ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 115a4ef7 call dword ptr [0x115d43e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43e8))), 0x115a4efdu);
  /* 115a4efd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 115a4f00 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a4f06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a4f08 je 0x115a5095 */
  if (C.zf) goto L_115a5095;
  /* 115a4f0e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4f12 je 0x115a5095 */
  if (C.zf) goto L_115a5095;
  /* 115a4f18 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a4f1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a4f1d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 115a4f20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a4f23 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4f26 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a4f29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a4f2c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4f2f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 115a4f32 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4f39 jge 0x115a4f43 */
  if ((C.sf==C.of)) goto L_115a4f43;
  /* 115a4f3b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 115a4f3e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 115a4f41 jmp 0x115a4f4a */
  goto L_115a4f4a;
L_115a4f43:;
  /* 115a4f43 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_115a4f4a:;
  /* 115a4f4a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 115a4f4d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 115a4f50 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 115a4f57 jmp 0x115a4f62 */
  goto L_115a4f62;
L_115a4f59:;
  /* 115a4f59 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 115a4f5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4f5f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_115a4f62:;
  /* 115a4f62 mov ecx, dword ptr [0x115d313c] */
  ECX = (r32((uint32_t)(0x115d313c)));
  /* 115a4f68 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4f6b jge 0x115a5002 */
  if ((C.sf==C.of)) goto L_115a5002;
  /* 115a4f71 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 115a4f76 push 0x115cc65c */
  push32((uint32_t)(0x115cc65cu));
  /* 115a4f7b push 2 */
  push32((uint32_t)(0x2u));
  /* 115a4f7d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 115a4f82 call 0x115a5260 */
  push32(0x115a4f87u); f_115a5260();
  /* 115a4f87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4f8a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 115a4f8d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4f91 jne 0x115a4f9e */
  if (!C.zf) goto L_115a4f9e;
  /* 115a4f93 mov edx, dword ptr [0x115d313c] */
  EDX = (r32((uint32_t)(0x115d313c)));
  /* 115a4f99 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 115a4f9c jmp 0x115a5002 */
  goto L_115a5002;
L_115a4f9e:;
  /* 115a4f9e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 115a4fa1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4fa4 mov dword ptr [eax*4 + 0x115d3000], ecx */
  w32((uint32_t)(EAX*4 + 0x115d3000), (ECX));
  /* 115a4fab mov edx, dword ptr [0x115d313c] */
  EDX = (r32((uint32_t)(0x115d313c)));
  /* 115a4fb1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4fb4 mov dword ptr [0x115d313c], edx */
  w32((uint32_t)(0x115d313c), (EDX));
  /* 115a4fba jmp 0x115a4fc5 */
  goto L_115a4fc5;
L_115a4fbc:;
  /* 115a4fbc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4fbf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4fc2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_115a4fc5:;
  /* 115a4fc5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 115a4fc8 mov edx, dword ptr [ecx*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115d3000)));
  /* 115a4fcf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a4fd5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a4fd8 jae 0x115a4ffd */
  if (!C.cf) goto L_115a4ffd;
  /* 115a4fda mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4fdd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 115a4fe1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4fe4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 115a4fea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4fed mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 115a4ff1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a4ff4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 115a4ffb jmp 0x115a4fbc */
  goto L_115a4fbc;
L_115a4ffd:;
  /* 115a4ffd jmp 0x115a4f59 */
  goto L_115a4f59;
L_115a5002:;
  /* 115a5002 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 115a5009 jmp 0x115a5026 */
  goto L_115a5026;
L_115a500b:;
  /* 115a500b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 115a500e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5011 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 115a5014 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5017 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a501a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a501d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 115a5020 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5023 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_115a5026:;
  /* 115a5026 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 115a5029 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a502c jge 0x115a5095 */
  if ((C.sf==C.of)) goto L_115a5095;
  /* 115a502e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 115a5031 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5034 je 0x115a5090 */
  if (C.zf) goto L_115a5090;
  /* 115a5036 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5039 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a503c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115a503f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5041 je 0x115a5090 */
  if (C.zf) goto L_115a5090;
  /* 115a5043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5046 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115a5049 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 115a504c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a504e jne 0x115a5060 */
  if (!C.zf) goto L_115a5060;
  /* 115a5050 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 115a5053 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a5055 push edx */
  push32((uint32_t)(EDX));
  /* 115a5056 call dword ptr [0x115d43e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43e4))), 0x115a505cu);
  /* 115a505c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a505e je 0x115a5090 */
  if (C.zf) goto L_115a5090;
L_115a5060:;
  /* 115a5060 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 115a5063 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 115a5066 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 115a5069 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 115a506c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a506f mov edx, dword ptr [eax*4 + 0x115d3000] */
  EDX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115a5076 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5078 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 115a507b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a507e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 115a5081 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a5083 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115a5085 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a5088 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a508b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a508d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_115a5090:;
  /* 115a5090 jmp 0x115a500b */
  goto L_115a500b;
L_115a5095:;
  /* 115a5095 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 115a509c jmp 0x115a50a7 */
  goto L_115a50a7;
L_115a509e:;
  /* 115a509e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 115a50a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a50a4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_115a50a7:;
  /* 115a50a7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a50ab jge 0x115a5184 */
  if ((C.sf==C.of)) goto L_115a5184;
  /* 115a50b1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 115a50b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a50b7 mov edx, dword ptr [0x115d3000] */
  EDX = (r32((uint32_t)(0x115d3000)));
  /* 115a50bd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a50bf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 115a50c2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a50c5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a50c8 jne 0x115a5170 */
  if (!C.zf) goto L_115a5170;
  /* 115a50ce mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a50d1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 115a50d5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a50d9 jne 0x115a50e4 */
  if (!C.zf) goto L_115a50e4;
  /* 115a50db mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 115a50e2 jmp 0x115a50f4 */
  goto L_115a50f4;
L_115a50e4:;
  /* 115a50e4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 115a50e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a50ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115a50ec sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a50ee add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a50f1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_115a50f4:;
  /* 115a50f4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 115a50f7 push eax */
  push32((uint32_t)(EAX));
  /* 115a50f8 call dword ptr [0x115d4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4394))), 0x115a50feu);
  /* 115a50fe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 115a5101 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5105 je 0x115a515f */
  if (C.zf) goto L_115a515f;
  /* 115a5107 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115a510a push ecx */
  push32((uint32_t)(ECX));
  /* 115a510b call dword ptr [0x115d43e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43e4))), 0x115a5111u);
  /* 115a5111 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 115a5114 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5118 je 0x115a515f */
  if (C.zf) goto L_115a515f;
  /* 115a511a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a511d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115a5120 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 115a5122 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 115a5125 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a512b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a512e jne 0x115a5140 */
  if (!C.zf) goto L_115a5140;
  /* 115a5130 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a5133 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 115a5136 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 115a5138 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a513b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 115a513e jmp 0x115a515d */
  goto L_115a515d;
L_115a5140:;
  /* 115a5140 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 115a5143 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a5149 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a514c jne 0x115a515d */
  if (!C.zf) goto L_115a515d;
  /* 115a514e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a5151 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115a5154 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 115a5157 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a515a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_115a515d:;
  /* 115a515d jmp 0x115a516e */
  goto L_115a516e;
L_115a515f:;
  /* 115a515f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a5162 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115a5165 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 115a5168 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a516b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_115a516e:;
  /* 115a516e jmp 0x115a517f */
  goto L_115a517f;
L_115a5170:;
  /* 115a5170 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a5173 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 115a5176 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 115a5179 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a517c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_115a517f:;
  /* 115a517f jmp 0x115a509e */
  goto L_115a509e;
L_115a5184:;
  /* 115a5184 mov eax, dword ptr [0x115d313c] */
  EAX = (r32((uint32_t)(0x115d313c)));
  /* 115a5189 push eax */
  push32((uint32_t)(EAX));
  /* 115a518a call dword ptr [0x115d43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43e0))), 0x115a5190u);
  /* 115a5190 mov esp, ebp */
  ESP = (EBP);
  /* 115a5192 pop ebp */
  EBP = (pop32());
  /* 115a5193 ret  */
  ESPCHK(0x115a4e70u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x115a51a0 (155 bytes, 45 insns) */
void f_115a51a0(void) {
  FTRACE(0x115a51a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a51a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a51a1 mov ebp, esp */
  EBP = (ESP);
  /* 115a51a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a51a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115a51ad jmp 0x115a51b8 */
  goto L_115a51b8;
L_115a51af:;
  /* 115a51af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a51b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a51b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115a51b8:;
  /* 115a51b8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a51bc jge 0x115a5237 */
  if ((C.sf==C.of)) goto L_115a5237;
  /* 115a51be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a51c1 cmp dword ptr [ecx*4 + 0x115d3000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x115d3000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a51c9 je 0x115a5232 */
  if (C.zf) goto L_115a5232;
  /* 115a51cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a51ce mov eax, dword ptr [edx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115a51d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a51d8 jmp 0x115a51e3 */
  goto L_115a51e3;
L_115a51da:;
  /* 115a51da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a51dd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a51e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a51e3:;
  /* 115a51e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a51e6 mov eax, dword ptr [edx*4 + 0x115d3000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115d3000)));
  /* 115a51ed add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a51f2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a51f5 jae 0x115a520f */
  if (!C.cf) goto L_115a520f;
  /* 115a51f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a51fa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a51fe je 0x115a520d */
  if (C.zf) goto L_115a520d;
  /* 115a5200 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5203 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5206 push edx */
  push32((uint32_t)(EDX));
  /* 115a5207 call dword ptr [0x115d43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b8))), 0x115a520du);
L_115a520d:;
  /* 115a520d jmp 0x115a51da */
  goto L_115a51da;
L_115a520f:;
  /* 115a520f push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a5214 mov ecx, dword ptr [eax*4 + 0x115d3000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x115d3000)));
  /* 115a521b push ecx */
  push32((uint32_t)(ECX));
  /* 115a521c call 0x115a5cf0 */
  push32(0x115a5221u); f_115a5cf0();
  /* 115a5221 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5224 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a5227 mov dword ptr [edx*4 + 0x115d3000], 0 */
  w32((uint32_t)(EDX*4 + 0x115d3000), (0x0u));
L_115a5232:;
  /* 115a5232 jmp 0x115a51af */
  goto L_115a51af;
L_115a5237:;
  /* 115a5237 mov esp, ebp */
  ESP = (EBP);
  /* 115a5239 pop ebp */
  EBP = (pop32());
  /* 115a523a ret  */
  ESPCHK(0x115a51a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x115a5240 (29 bytes, 13 insns) */
void f_115a5240(void) {
  FTRACE(0x115a5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5240 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5241 mov ebp, esp */
  EBP = (ESP);
  /* 115a5243 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5245 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5247 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5249 mov eax, dword ptr [0x115d1808] */
  EAX = (r32((uint32_t)(0x115d1808)));
  /* 115a524e push eax */
  push32((uint32_t)(EAX));
  /* 115a524f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5252 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5253 call 0x115a52b0 */
  push32(0x115a5258u); f_115a52b0();
  /* 115a5258 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a525b pop ebp */
  EBP = (pop32());
  /* 115a525c ret  */
  ESPCHK(0x115a5240u, _esp0);
  ESP += 4; return;
}

/* FUN_10005260 @ 0x115a5260 (35 bytes, 16 insns) */
void f_115a5260(void) {
  FTRACE(0x115a5260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5260 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5261 mov ebp, esp */
  EBP = (ESP);
  /* 115a5263 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a5266 push eax */
  push32((uint32_t)(EAX));
  /* 115a5267 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a526a push ecx */
  push32((uint32_t)(ECX));
  /* 115a526b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a526e push edx */
  push32((uint32_t)(EDX));
  /* 115a526f mov eax, dword ptr [0x115d1808] */
  EAX = (r32((uint32_t)(0x115d1808)));
  /* 115a5274 push eax */
  push32((uint32_t)(EAX));
  /* 115a5275 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5278 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5279 call 0x115a52b0 */
  push32(0x115a527eu); f_115a52b0();
  /* 115a527e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5281 pop ebp */
  EBP = (pop32());
  /* 115a5282 ret  */
  ESPCHK(0x115a5260u, _esp0);
  ESP += 4; return;
}

/* FUN_10005290 @ 0x115a5290 (27 bytes, 13 insns) */
void f_115a5290(void) {
  FTRACE(0x115a5290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5290 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5291 mov ebp, esp */
  EBP = (ESP);
  /* 115a5293 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5295 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5297 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a529c push eax */
  push32((uint32_t)(EAX));
  /* 115a529d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a52a0 push ecx */
  push32((uint32_t)(ECX));
  /* 115a52a1 call 0x115a52b0 */
  push32(0x115a52a6u); f_115a52b0();
  /* 115a52a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a52a9 pop ebp */
  EBP = (pop32());
  /* 115a52aa ret  */
  ESPCHK(0x115a5290u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x115a52b0 (94 bytes, 38 insns) */
void f_115a52b0(void) {
  FTRACE(0x115a52b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a52b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a52b1 mov ebp, esp */
  EBP = (ESP);
  /* 115a52b3 push ecx */
  push32((uint32_t)(ECX));
L_115a52b4:;
  /* 115a52b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a52b6 call 0x115a8c60 */
  push32(0x115a52bbu); f_115a8c60();
  /* 115a52bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a52be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a52c1 push eax */
  push32((uint32_t)(EAX));
  /* 115a52c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a52c5 push ecx */
  push32((uint32_t)(ECX));
  /* 115a52c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a52c9 push edx */
  push32((uint32_t)(EDX));
  /* 115a52ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a52cd push eax */
  push32((uint32_t)(EAX));
  /* 115a52ce call 0x115a5330 */
  push32(0x115a52d3u); f_115a5330();
  /* 115a52d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a52d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a52d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a52db call 0x115a8d00 */
  push32(0x115a52e0u); f_115a8d00();
  /* 115a52e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a52e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a52e7 jne 0x115a52ef */
  if (!C.zf) goto L_115a52ef;
  /* 115a52e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a52ed jne 0x115a52f4 */
  if (!C.zf) goto L_115a52f4;
L_115a52ef:;
  /* 115a52ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a52f2 jmp 0x115a530a */
  goto L_115a530a;
L_115a52f4:;
  /* 115a52f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a52f7 push ecx */
  push32((uint32_t)(ECX));
  /* 115a52f8 call 0x115a8fa0 */
  push32(0x115a52fdu); f_115a8fa0();
  /* 115a52fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5300 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5302 jne 0x115a5308 */
  if (!C.zf) goto L_115a5308;
  /* 115a5304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5306 jmp 0x115a530a */
  goto L_115a530a;
L_115a5308:;
  /* 115a5308 jmp 0x115a52b4 */
  goto L_115a52b4;
L_115a530a:;
  /* 115a530a mov esp, ebp */
  ESP = (EBP);
  /* 115a530c pop ebp */
  EBP = (pop32());
  /* 115a530d ret  */
  ESPCHK(0x115a52b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005310 @ 0x115a5310 (23 bytes, 11 insns) */
void f_115a5310(void) {
  FTRACE(0x115a5310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5310 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5311 mov ebp, esp */
  EBP = (ESP);
  /* 115a5313 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5315 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5317 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a531c push eax */
  push32((uint32_t)(EAX));
  /* 115a531d call 0x115a5330 */
  push32(0x115a5322u); f_115a5330();
  /* 115a5322 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5325 pop ebp */
  EBP = (pop32());
  /* 115a5326 ret  */
  ESPCHK(0x115a5310u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x115a5330 (787 bytes, 254 insns) */
void f_115a5330(void) {
  FTRACE(0x115a5330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5330 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5331 mov ebp, esp */
  EBP = (ESP);
  /* 115a5333 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5336 push ebx */
  push32((uint32_t)(EBX));
  /* 115a5337 push esi */
  push32((uint32_t)(ESI));
  /* 115a5338 push edi */
  push32((uint32_t)(EDI));
  /* 115a5339 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115a5340 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a5345 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115a5348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a534a je 0x115a537c */
  if (C.zf) goto L_115a537c;
L_115a534c:;
  /* 115a534c call 0x115a6400 */
  push32(0x115a5351u); f_115a6400();
  /* 115a5351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5353 jne 0x115a5376 */
  if (!C.zf) goto L_115a5376;
  /* 115a5355 push 0x115cc750 */
  push32((uint32_t)(0x115cc750u));
  /* 115a535a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a535c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 115a5361 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5366 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5368 call 0x115a4320 */
  push32(0x115a536du); f_115a4320();
  /* 115a536d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5370 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5373 jne 0x115a5376 */
  if (!C.zf) goto L_115a5376;
  /* 115a5375 int3  */
  x86_unimpl("int3 @ 0x115a5375");
L_115a5376:;
  /* 115a5376 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5378 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a537a jne 0x115a534c */
  if (!C.zf) goto L_115a534c;
L_115a537c:;
  /* 115a537c mov edx, dword ptr [0x115cfa88] */
  EDX = (r32((uint32_t)(0x115cfa88)));
  /* 115a5382 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115a5385 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a5388 cmp eax, dword ptr [0x115cfa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115cfa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a538e jne 0x115a5391 */
  if (!C.zf) goto L_115a5391;
  /* 115a5390 int3  */
  x86_unimpl("int3 @ 0x115a5390");
L_115a5391:;
  /* 115a5391 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a5394 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5395 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a5398 push edx */
  push32((uint32_t)(EDX));
  /* 115a5399 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a539c push eax */
  push32((uint32_t)(EAX));
  /* 115a539d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a53a0 push ecx */
  push32((uint32_t)(ECX));
  /* 115a53a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a53a4 push edx */
  push32((uint32_t)(EDX));
  /* 115a53a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a53a9 call dword ptr [0x115cfc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x115cfc90))), 0x115a53afu);
  /* 115a53af add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a53b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a53b4 jne 0x115a5414 */
  if (!C.zf) goto L_115a5414;
  /* 115a53b6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a53ba je 0x115a53e7 */
  if (C.zf) goto L_115a53e7;
L_115a53bc:;
  /* 115a53bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a53bf push eax */
  push32((uint32_t)(EAX));
  /* 115a53c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a53c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a53c4 push 0x115cc70c */
  push32((uint32_t)(0x115cc70cu));
  /* 115a53c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53cb push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53cd push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53cf push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53d1 call 0x115a4320 */
  push32(0x115a53d6u); f_115a4320();
  /* 115a53d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a53d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a53dc jne 0x115a53df */
  if (!C.zf) goto L_115a53df;
  /* 115a53de int3  */
  x86_unimpl("int3 @ 0x115a53de");
L_115a53df:;
  /* 115a53df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a53e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a53e3 jne 0x115a53bc */
  if (!C.zf) goto L_115a53bc;
  /* 115a53e5 jmp 0x115a540d */
  goto L_115a540d;
L_115a53e7:;
  /* 115a53e7 push 0x115cc6e8 */
  push32((uint32_t)(0x115cc6e8u));
  /* 115a53ec push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a53f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a53f9 call 0x115a4320 */
  push32(0x115a53feu); f_115a4320();
  /* 115a53fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5401 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5404 jne 0x115a5407 */
  if (!C.zf) goto L_115a5407;
  /* 115a5406 int3  */
  x86_unimpl("int3 @ 0x115a5406");
L_115a5407:;
  /* 115a5407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a540b jne 0x115a53e7 */
  if (!C.zf) goto L_115a53e7;
L_115a540d:;
  /* 115a540d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a540f jmp 0x115a563c */
  goto L_115a563c;
L_115a5414:;
  /* 115a5414 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5417 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a541d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5420 je 0x115a5436 */
  if (C.zf) goto L_115a5436;
  /* 115a5422 mov edx, dword ptr [0x115cfa84] */
  EDX = (r32((uint32_t)(0x115cfa84)));
  /* 115a5428 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 115a542b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a542d jne 0x115a5436 */
  if (!C.zf) goto L_115a5436;
  /* 115a542f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_115a5436:;
  /* 115a5436 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a543a ja 0x115a5447 */
  if ((!C.cf&&!C.zf)) goto L_115a5447;
  /* 115a543c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a543f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5442 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5445 jbe 0x115a5473 */
  if ((C.cf||C.zf)) goto L_115a5473;
L_115a5447:;
  /* 115a5447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a544a push ecx */
  push32((uint32_t)(ECX));
  /* 115a544b push 0x115cc6c0 */
  push32((uint32_t)(0x115cc6c0u));
  /* 115a5450 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5452 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5454 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5456 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5458 call 0x115a4320 */
  push32(0x115a545du); f_115a4320();
  /* 115a545d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5460 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5463 jne 0x115a5466 */
  if (!C.zf) goto L_115a5466;
  /* 115a5465 int3  */
  x86_unimpl("int3 @ 0x115a5465");
L_115a5466:;
  /* 115a5466 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a5468 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a546a jne 0x115a5447 */
  if (!C.zf) goto L_115a5447;
  /* 115a546c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a546e jmp 0x115a563c */
  goto L_115a563c;
L_115a5473:;
  /* 115a5473 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5476 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a547b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a547e je 0x115a54c0 */
  if (C.zf) goto L_115a54c0;
  /* 115a5480 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5484 je 0x115a54c0 */
  if (C.zf) goto L_115a54c0;
  /* 115a5486 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5489 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a548f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5492 je 0x115a54c0 */
  if (C.zf) goto L_115a54c0;
  /* 115a5494 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5498 je 0x115a54c0 */
  if (C.zf) goto L_115a54c0;
L_115a549a:;
  /* 115a549a push 0x115cc68c */
  push32((uint32_t)(0x115cc68cu));
  /* 115a549f push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a54a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a54a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a54a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a54aa push 1 */
  push32((uint32_t)(0x1u));
  /* 115a54ac call 0x115a4320 */
  push32(0x115a54b1u); f_115a4320();
  /* 115a54b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a54b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a54b7 jne 0x115a54ba */
  if (!C.zf) goto L_115a54ba;
  /* 115a54b9 int3  */
  x86_unimpl("int3 @ 0x115a54b9");
L_115a54ba:;
  /* 115a54ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a54bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a54be jne 0x115a549a */
  if (!C.zf) goto L_115a549a;
L_115a54c0:;
  /* 115a54c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a54c3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a54c6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115a54c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a54cc push ecx */
  push32((uint32_t)(ECX));
  /* 115a54cd call 0x115a90b0 */
  push32(0x115a54d2u); f_115a90b0();
  /* 115a54d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a54d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a54d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a54dc jne 0x115a54e5 */
  if (!C.zf) goto L_115a54e5;
  /* 115a54de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a54e0 jmp 0x115a563c */
  goto L_115a563c;
L_115a54e5:;
  /* 115a54e5 mov edx, dword ptr [0x115cfa88] */
  EDX = (r32((uint32_t)(0x115cfa88)));
  /* 115a54eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a54ee mov dword ptr [0x115cfa88], edx */
  w32((uint32_t)(0x115cfa88), (EDX));
  /* 115a54f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a54f8 je 0x115a5543 */
  if (C.zf) goto L_115a5543;
  /* 115a54fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a54fd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115a5503 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5506 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 115a550d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5510 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 115a5517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a551a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 115a5521 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5527 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 115a552a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a552d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 115a5534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5537 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 115a553e jmp 0x115a55e3 */
  goto L_115a55e3;
L_115a5543:;
  /* 115a5543 mov edx, dword ptr [0x115d166c] */
  EDX = (r32((uint32_t)(0x115d166c)));
  /* 115a5549 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a554c mov dword ptr [0x115d166c], edx */
  w32((uint32_t)(0x115d166c), (EDX));
  /* 115a5552 mov eax, dword ptr [0x115d1674] */
  EAX = (r32((uint32_t)(0x115d1674)));
  /* 115a5557 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a555a mov dword ptr [0x115d1674], eax */
  w32((uint32_t)(0x115d1674), (EAX));
  /* 115a555f mov ecx, dword ptr [0x115d1674] */
  ECX = (r32((uint32_t)(0x115d1674)));
  /* 115a5565 cmp ecx, dword ptr [0x115d1678] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115d1678))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a556b jbe 0x115a5579 */
  if ((C.cf||C.zf)) goto L_115a5579;
  /* 115a556d mov edx, dword ptr [0x115d1674] */
  EDX = (r32((uint32_t)(0x115d1674)));
  /* 115a5573 mov dword ptr [0x115d1678], edx */
  w32((uint32_t)(0x115d1678), (EDX));
L_115a5579:;
  /* 115a5579 cmp dword ptr [0x115d1670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5580 je 0x115a558f */
  if (C.zf) goto L_115a558f;
  /* 115a5582 mov eax, dword ptr [0x115d1670] */
  EAX = (r32((uint32_t)(0x115d1670)));
  /* 115a5587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a558a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115a558d jmp 0x115a5598 */
  goto L_115a5598;
L_115a558f:;
  /* 115a558f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5592 mov dword ptr [0x115d1668], edx */
  w32((uint32_t)(0x115d1668), (EDX));
L_115a5598:;
  /* 115a5598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a559b mov ecx, dword ptr [0x115d1670] */
  ECX = (r32((uint32_t)(0x115d1670)));
  /* 115a55a1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115a55a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a55a6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 115a55ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a55b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a55b3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 115a55b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a55b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a55bc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 115a55bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a55c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a55c5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 115a55c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a55cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a55ce mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 115a55d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a55d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a55d7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 115a55da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a55dd mov dword ptr [0x115d1670], ecx */
  w32((uint32_t)(0x115d1670), (ECX));
L_115a55e3:;
  /* 115a55e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a55e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a55e7 mov dl, byte ptr [0x115cfa90] */
  DL = (r8((uint32_t)(0x115cfa90)));
  /* 115a55ed push edx */
  push32((uint32_t)(EDX));
  /* 115a55ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a55f1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a55f4 push eax */
  push32((uint32_t)(EAX));
  /* 115a55f5 call 0x115a8fd0 */
  push32(0x115a55fau); f_115a8fd0();
  /* 115a55fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a55fd push 4 */
  push32((uint32_t)(0x4u));
  /* 115a55ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5601 mov cl, byte ptr [0x115cfa90] */
  CL = (r8((uint32_t)(0x115cfa90)));
  /* 115a5607 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5608 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a560b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a560e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 115a5612 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5613 call 0x115a8fd0 */
  push32(0x115a5618u); f_115a8fd0();
  /* 115a5618 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a561b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a561e push edx */
  push32((uint32_t)(EDX));
  /* 115a561f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5621 mov al, byte ptr [0x115cfa92] */
  AL = (r8((uint32_t)(0x115cfa92)));
  /* 115a5626 push eax */
  push32((uint32_t)(EAX));
  /* 115a5627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a562a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a562d push ecx */
  push32((uint32_t)(ECX));
  /* 115a562e call 0x115a8fd0 */
  push32(0x115a5633u); f_115a8fd0();
  /* 115a5633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5636 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5639 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_115a563c:;
  /* 115a563c pop edi */
  EDI = (pop32());
  /* 115a563d pop esi */
  ESI = (pop32());
  /* 115a563e pop ebx */
  EBX = (pop32());
  /* 115a563f mov esp, ebp */
  ESP = (EBP);
  /* 115a5641 pop ebp */
  EBP = (pop32());
  /* 115a5642 ret  */
  ESPCHK(0x115a5330u, _esp0);
  ESP += 4; return;
}

/* FUN_10005650 @ 0x115a5650 (27 bytes, 13 insns) */
void f_115a5650(void) {
  FTRACE(0x115a5650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5650 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5651 mov ebp, esp */
  EBP = (ESP);
  /* 115a5653 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5655 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5657 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a565c push eax */
  push32((uint32_t)(EAX));
  /* 115a565d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5660 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5661 call 0x115a5670 */
  push32(0x115a5666u); f_115a5670();
  /* 115a5666 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5669 pop ebp */
  EBP = (pop32());
  /* 115a566a ret  */
  ESPCHK(0x115a5650u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x115a5670 (96 bytes, 37 insns) */
void f_115a5670(void) {
  FTRACE(0x115a5670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5670 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5671 mov ebp, esp */
  EBP = (ESP);
  /* 115a5673 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5676 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5679 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a567d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 115a5680 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a5683 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5684 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a5687 push edx */
  push32((uint32_t)(EDX));
  /* 115a5688 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a568b push eax */
  push32((uint32_t)(EAX));
  /* 115a568c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a568f push ecx */
  push32((uint32_t)(ECX));
  /* 115a5690 call 0x115a5260 */
  push32(0x115a5695u); f_115a5260();
  /* 115a5695 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5698 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a569b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a569f je 0x115a56c9 */
  if (C.zf) goto L_115a56c9;
  /* 115a56a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a56a4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115a56a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a56aa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a56ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a56b0:;
  /* 115a56b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a56b3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a56b6 jae 0x115a56c9 */
  if (!C.cf) goto L_115a56c9;
  /* 115a56b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a56bb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115a56be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a56c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a56c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a56c7 jmp 0x115a56b0 */
  goto L_115a56b0;
L_115a56c9:;
  /* 115a56c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a56cc mov esp, ebp */
  ESP = (EBP);
  /* 115a56ce pop ebp */
  EBP = (pop32());
  /* 115a56cf ret  */
  ESPCHK(0x115a5670u, _esp0);
  ESP += 4; return;
}

/* FUN_100056d0 @ 0x115a56d0 (27 bytes, 13 insns) */
void f_115a56d0(void) {
  FTRACE(0x115a56d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a56d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a56d1 mov ebp, esp */
  EBP = (ESP);
  /* 115a56d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a56d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a56d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a56d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a56dc push eax */
  push32((uint32_t)(EAX));
  /* 115a56dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a56e0 push ecx */
  push32((uint32_t)(ECX));
  /* 115a56e1 call 0x115a56f0 */
  push32(0x115a56e6u); f_115a56f0();
  /* 115a56e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a56e9 pop ebp */
  EBP = (pop32());
  /* 115a56ea ret  */
  ESPCHK(0x115a56d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f0 @ 0x115a56f0 (64 bytes, 27 insns) */
void f_115a56f0(void) {
  FTRACE(0x115a56f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a56f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a56f1 mov ebp, esp */
  EBP = (ESP);
  /* 115a56f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a56f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a56f6 call 0x115a8c60 */
  push32(0x115a56fbu); f_115a8c60();
  /* 115a56fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a56fe push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5700 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a5703 push eax */
  push32((uint32_t)(EAX));
  /* 115a5704 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a5707 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5708 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a570b push edx */
  push32((uint32_t)(EDX));
  /* 115a570c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a570f push eax */
  push32((uint32_t)(EAX));
  /* 115a5710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5713 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5714 call 0x115a5730 */
  push32(0x115a5719u); f_115a5730();
  /* 115a5719 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a571c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a571f push 9 */
  push32((uint32_t)(0x9u));
  /* 115a5721 call 0x115a8d00 */
  push32(0x115a5726u); f_115a8d00();
  /* 115a5726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a572c mov esp, ebp */
  ESP = (EBP);
  /* 115a572e pop ebp */
  EBP = (pop32());
  /* 115a572f ret  */
  ESPCHK(0x115a56f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005730 @ 0x115a5730 (1297 bytes, 431 insns) */
void f_115a5730(void) {
  FTRACE(0x115a5730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5730 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5731 mov ebp, esp */
  EBP = (ESP);
  /* 115a5733 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5736 push ebx */
  push32((uint32_t)(EBX));
  /* 115a5737 push esi */
  push32((uint32_t)(ESI));
  /* 115a5738 push edi */
  push32((uint32_t)(EDI));
  /* 115a5739 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 115a5740 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5744 jne 0x115a5763 */
  if (!C.zf) goto L_115a5763;
  /* 115a5746 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a5749 push eax */
  push32((uint32_t)(EAX));
  /* 115a574a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a574d push ecx */
  push32((uint32_t)(ECX));
  /* 115a574e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a5751 push edx */
  push32((uint32_t)(EDX));
  /* 115a5752 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5755 push eax */
  push32((uint32_t)(EAX));
  /* 115a5756 call 0x115a5260 */
  push32(0x115a575bu); f_115a5260();
  /* 115a575b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a575e jmp 0x115a5c3a */
  goto L_115a5c3a;
L_115a5763:;
  /* 115a5763 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5767 je 0x115a5786 */
  if (C.zf) goto L_115a5786;
  /* 115a5769 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a576d jne 0x115a5786 */
  if (!C.zf) goto L_115a5786;
  /* 115a576f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a5772 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5773 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5776 push edx */
  push32((uint32_t)(EDX));
  /* 115a5777 call 0x115a5cf0 */
  push32(0x115a577cu); f_115a5cf0();
  /* 115a577c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a577f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5781 jmp 0x115a5c3a */
  goto L_115a5c3a;
L_115a5786:;
  /* 115a5786 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a578b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115a578e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5790 je 0x115a57c2 */
  if (C.zf) goto L_115a57c2;
L_115a5792:;
  /* 115a5792 call 0x115a6400 */
  push32(0x115a5797u); f_115a6400();
  /* 115a5797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5799 jne 0x115a57bc */
  if (!C.zf) goto L_115a57bc;
  /* 115a579b push 0x115cc750 */
  push32((uint32_t)(0x115cc750u));
  /* 115a57a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a57a2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 115a57a7 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a57ac push 2 */
  push32((uint32_t)(0x2u));
  /* 115a57ae call 0x115a4320 */
  push32(0x115a57b3u); f_115a4320();
  /* 115a57b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a57b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a57b9 jne 0x115a57bc */
  if (!C.zf) goto L_115a57bc;
  /* 115a57bb int3  */
  x86_unimpl("int3 @ 0x115a57bb");
L_115a57bc:;
  /* 115a57bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a57be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a57c0 jne 0x115a5792 */
  if (!C.zf) goto L_115a5792;
L_115a57c2:;
  /* 115a57c2 mov edx, dword ptr [0x115cfa88] */
  EDX = (r32((uint32_t)(0x115cfa88)));
  /* 115a57c8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115a57cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a57ce cmp eax, dword ptr [0x115cfa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115cfa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a57d4 jne 0x115a57d7 */
  if (!C.zf) goto L_115a57d7;
  /* 115a57d6 int3  */
  x86_unimpl("int3 @ 0x115a57d6");
L_115a57d7:;
  /* 115a57d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a57da push ecx */
  push32((uint32_t)(ECX));
  /* 115a57db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a57de push edx */
  push32((uint32_t)(EDX));
  /* 115a57df mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a57e2 push eax */
  push32((uint32_t)(EAX));
  /* 115a57e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a57e6 push ecx */
  push32((uint32_t)(ECX));
  /* 115a57e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a57ea push edx */
  push32((uint32_t)(EDX));
  /* 115a57eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a57ee push eax */
  push32((uint32_t)(EAX));
  /* 115a57ef push 2 */
  push32((uint32_t)(0x2u));
  /* 115a57f1 call dword ptr [0x115cfc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x115cfc90))), 0x115a57f7u);
  /* 115a57f7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a57fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a57fc jne 0x115a585c */
  if (!C.zf) goto L_115a585c;
  /* 115a57fe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5802 je 0x115a582f */
  if (C.zf) goto L_115a582f;
L_115a5804:;
  /* 115a5804 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a5807 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5808 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a580b push edx */
  push32((uint32_t)(EDX));
  /* 115a580c push 0x115cc8cc */
  push32((uint32_t)(0x115cc8ccu));
  /* 115a5811 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5813 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5815 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5817 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5819 call 0x115a4320 */
  push32(0x115a581eu); f_115a4320();
  /* 115a581e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5821 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5824 jne 0x115a5827 */
  if (!C.zf) goto L_115a5827;
  /* 115a5826 int3  */
  x86_unimpl("int3 @ 0x115a5826");
L_115a5827:;
  /* 115a5827 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a582b jne 0x115a5804 */
  if (!C.zf) goto L_115a5804;
  /* 115a582d jmp 0x115a5855 */
  goto L_115a5855;
L_115a582f:;
  /* 115a582f push 0x115cc8a8 */
  push32((uint32_t)(0x115cc8a8u));
  /* 115a5834 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a5839 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a583b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a583d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a583f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5841 call 0x115a4320 */
  push32(0x115a5846u); f_115a4320();
  /* 115a5846 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5849 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a584c jne 0x115a584f */
  if (!C.zf) goto L_115a584f;
  /* 115a584e int3  */
  x86_unimpl("int3 @ 0x115a584e");
L_115a584f:;
  /* 115a584f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5853 jne 0x115a582f */
  if (!C.zf) goto L_115a582f;
L_115a5855:;
  /* 115a5855 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5857 jmp 0x115a5c3a */
  goto L_115a5c3a;
L_115a585c:;
  /* 115a585c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5860 jbe 0x115a588e */
  if ((C.cf||C.zf)) goto L_115a588e;
L_115a5862:;
  /* 115a5862 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5865 push edx */
  push32((uint32_t)(EDX));
  /* 115a5866 push 0x115cc878 */
  push32((uint32_t)(0x115cc878u));
  /* 115a586b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a586d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a586f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5871 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5873 call 0x115a4320 */
  push32(0x115a5878u); f_115a4320();
  /* 115a5878 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a587b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a587e jne 0x115a5881 */
  if (!C.zf) goto L_115a5881;
  /* 115a5880 int3  */
  x86_unimpl("int3 @ 0x115a5880");
L_115a5881:;
  /* 115a5881 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5885 jne 0x115a5862 */
  if (!C.zf) goto L_115a5862;
  /* 115a5887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5889 jmp 0x115a5c3a */
  goto L_115a5c3a;
L_115a588e:;
  /* 115a588e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5892 je 0x115a58d6 */
  if (C.zf) goto L_115a58d6;
  /* 115a5894 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a5897 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a589d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a58a0 je 0x115a58d6 */
  if (C.zf) goto L_115a58d6;
  /* 115a58a2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a58a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a58ab cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a58ae je 0x115a58d6 */
  if (C.zf) goto L_115a58d6;
L_115a58b0:;
  /* 115a58b0 push 0x115cc68c */
  push32((uint32_t)(0x115cc68cu));
  /* 115a58b5 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a58ba push 0 */
  push32((uint32_t)(0x0u));
  /* 115a58bc push 0 */
  push32((uint32_t)(0x0u));
  /* 115a58be push 0 */
  push32((uint32_t)(0x0u));
  /* 115a58c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a58c2 call 0x115a4320 */
  push32(0x115a58c7u); f_115a4320();
  /* 115a58c7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a58ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a58cd jne 0x115a58d0 */
  if (!C.zf) goto L_115a58d0;
  /* 115a58cf int3  */
  x86_unimpl("int3 @ 0x115a58cf");
L_115a58d0:;
  /* 115a58d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a58d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a58d4 jne 0x115a58b0 */
  if (!C.zf) goto L_115a58b0;
L_115a58d6:;
  /* 115a58d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a58d9 push ecx */
  push32((uint32_t)(ECX));
  /* 115a58da call 0x115a6860 */
  push32(0x115a58dfu); f_115a6860();
  /* 115a58df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a58e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a58e4 jne 0x115a5907 */
  if (!C.zf) goto L_115a5907;
  /* 115a58e6 push 0x115cc854 */
  push32((uint32_t)(0x115cc854u));
  /* 115a58eb push 0 */
  push32((uint32_t)(0x0u));
  /* 115a58ed push 0x261 */
  push32((uint32_t)(0x261u));
  /* 115a58f2 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a58f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a58f9 call 0x115a4320 */
  push32(0x115a58feu); f_115a4320();
  /* 115a58fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5901 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5904 jne 0x115a5907 */
  if (!C.zf) goto L_115a5907;
  /* 115a5906 int3  */
  x86_unimpl("int3 @ 0x115a5906");
L_115a5907:;
  /* 115a5907 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a5909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a590b jne 0x115a58d6 */
  if (!C.zf) goto L_115a58d6;
  /* 115a590d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5910 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5913 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a5916 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a5919 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a591d jne 0x115a5926 */
  if (!C.zf) goto L_115a5926;
  /* 115a591f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_115a5926:;
  /* 115a5926 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a592a je 0x115a596a */
  if (C.zf) goto L_115a596a;
L_115a592c:;
  /* 115a592c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a592f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5936 jne 0x115a5941 */
  if (!C.zf) goto L_115a5941;
  /* 115a5938 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a593b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a593f je 0x115a5962 */
  if (C.zf) goto L_115a5962;
L_115a5941:;
  /* 115a5941 push 0x115cc80c */
  push32((uint32_t)(0x115cc80cu));
  /* 115a5946 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5948 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 115a594d push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5952 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5954 call 0x115a4320 */
  push32(0x115a5959u); f_115a4320();
  /* 115a5959 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a595c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a595f jne 0x115a5962 */
  if (!C.zf) goto L_115a5962;
  /* 115a5961 int3  */
  x86_unimpl("int3 @ 0x115a5961");
L_115a5962:;
  /* 115a5962 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5964 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5966 jne 0x115a592c */
  if (!C.zf) goto L_115a592c;
  /* 115a5968 jmp 0x115a59ce */
  goto L_115a59ce;
L_115a596a:;
  /* 115a596a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a596d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a5970 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a5975 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5978 jne 0x115a598f */
  if (!C.zf) goto L_115a598f;
  /* 115a597a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a597d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a5983 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5986 jne 0x115a598f */
  if (!C.zf) goto L_115a598f;
  /* 115a5988 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_115a598f:;
  /* 115a598f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a5992 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a5995 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a599a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a599d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a59a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a59a5 je 0x115a59c8 */
  if (C.zf) goto L_115a59c8;
  /* 115a59a7 push 0x115cc7d0 */
  push32((uint32_t)(0x115cc7d0u));
  /* 115a59ac push 0 */
  push32((uint32_t)(0x0u));
  /* 115a59ae push 0x272 */
  push32((uint32_t)(0x272u));
  /* 115a59b3 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a59b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a59ba call 0x115a4320 */
  push32(0x115a59bfu); f_115a4320();
  /* 115a59bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a59c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a59c5 jne 0x115a59c8 */
  if (!C.zf) goto L_115a59c8;
  /* 115a59c7 int3  */
  x86_unimpl("int3 @ 0x115a59c7");
L_115a59c8:;
  /* 115a59c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a59ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a59cc jne 0x115a598f */
  if (!C.zf) goto L_115a598f;
L_115a59ce:;
  /* 115a59ce cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a59d2 je 0x115a59f9 */
  if (C.zf) goto L_115a59f9;
  /* 115a59d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a59d7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a59da push eax */
  push32((uint32_t)(EAX));
  /* 115a59db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a59de push ecx */
  push32((uint32_t)(ECX));
  /* 115a59df call 0x115a91e0 */
  push32(0x115a59e4u); f_115a91e0();
  /* 115a59e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a59e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a59ea cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a59ee jne 0x115a59f7 */
  if (!C.zf) goto L_115a59f7;
  /* 115a59f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a59f2 jmp 0x115a5c3a */
  goto L_115a5c3a;
L_115a59f7:;
  /* 115a59f7 jmp 0x115a5a1c */
  goto L_115a5a1c;
L_115a59f9:;
  /* 115a59f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a59fc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a59ff push edx */
  push32((uint32_t)(EDX));
  /* 115a5a00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a5a03 push eax */
  push32((uint32_t)(EAX));
  /* 115a5a04 call 0x115a9130 */
  push32(0x115a5a09u); f_115a9130();
  /* 115a5a09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5a0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a5a0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5a13 jne 0x115a5a1c */
  if (!C.zf) goto L_115a5a1c;
  /* 115a5a15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5a17 jmp 0x115a5c3a */
  goto L_115a5c3a;
L_115a5a1c:;
  /* 115a5a1c mov ecx, dword ptr [0x115cfa88] */
  ECX = (r32((uint32_t)(0x115cfa88)));
  /* 115a5a22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5a25 mov dword ptr [0x115cfa88], ecx */
  w32((uint32_t)(0x115cfa88), (ECX));
  /* 115a5a2b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5a2f jne 0x115a5a87 */
  if (!C.zf) goto L_115a5a87;
  /* 115a5a31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5a34 mov eax, dword ptr [0x115d166c] */
  EAX = (r32((uint32_t)(0x115d166c)));
  /* 115a5a39 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5a3c mov dword ptr [0x115d166c], eax */
  w32((uint32_t)(0x115d166c), (EAX));
  /* 115a5a41 mov ecx, dword ptr [0x115d166c] */
  ECX = (r32((uint32_t)(0x115d166c)));
  /* 115a5a47 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5a4a mov dword ptr [0x115d166c], ecx */
  w32((uint32_t)(0x115d166c), (ECX));
  /* 115a5a50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5a53 mov eax, dword ptr [0x115d1674] */
  EAX = (r32((uint32_t)(0x115d1674)));
  /* 115a5a58 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5a5b mov dword ptr [0x115d1674], eax */
  w32((uint32_t)(0x115d1674), (EAX));
  /* 115a5a60 mov ecx, dword ptr [0x115d1674] */
  ECX = (r32((uint32_t)(0x115d1674)));
  /* 115a5a66 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5a69 mov dword ptr [0x115d1674], ecx */
  w32((uint32_t)(0x115d1674), (ECX));
  /* 115a5a6f mov edx, dword ptr [0x115d1674] */
  EDX = (r32((uint32_t)(0x115d1674)));
  /* 115a5a75 cmp edx, dword ptr [0x115d1678] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115d1678))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5a7b jbe 0x115a5a87 */
  if ((C.cf||C.zf)) goto L_115a5a87;
  /* 115a5a7d mov eax, dword ptr [0x115d1674] */
  EAX = (r32((uint32_t)(0x115d1674)));
  /* 115a5a82 mov dword ptr [0x115d1678], eax */
  w32((uint32_t)(0x115d1678), (EAX));
L_115a5a87:;
  /* 115a5a87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5a8a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5a8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a5a90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5a93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5a96 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5a99 jbe 0x115a5abf */
  if ((C.cf||C.zf)) goto L_115a5abf;
  /* 115a5a9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5a9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5aa1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5aa4 push edx */
  push32((uint32_t)(EDX));
  /* 115a5aa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5aa7 mov al, byte ptr [0x115cfa92] */
  AL = (r8((uint32_t)(0x115cfa92)));
  /* 115a5aac push eax */
  push32((uint32_t)(EAX));
  /* 115a5aad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5ab0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5ab3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5ab6 push edx */
  push32((uint32_t)(EDX));
  /* 115a5ab7 call 0x115a8fd0 */
  push32(0x115a5abcu); f_115a8fd0();
  /* 115a5abc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a5abf:;
  /* 115a5abf push 4 */
  push32((uint32_t)(0x4u));
  /* 115a5ac1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5ac3 mov al, byte ptr [0x115cfa90] */
  AL = (r8((uint32_t)(0x115cfa90)));
  /* 115a5ac8 push eax */
  push32((uint32_t)(EAX));
  /* 115a5ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5acc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5acf push ecx */
  push32((uint32_t)(ECX));
  /* 115a5ad0 call 0x115a8fd0 */
  push32(0x115a5ad5u); f_115a8fd0();
  /* 115a5ad5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5ad8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5adc jne 0x115a5af9 */
  if (!C.zf) goto L_115a5af9;
  /* 115a5ade mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5ae1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a5ae4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115a5ae7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5aea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a5aed mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 115a5af0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5af3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a5af6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_115a5af9:;
  /* 115a5af9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5afc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5aff mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_115a5b02:;
  /* 115a5b02 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b06 jne 0x115a5b37 */
  if (!C.zf) goto L_115a5b37;
  /* 115a5b08 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b0c jne 0x115a5b16 */
  if (!C.zf) goto L_115a5b16;
  /* 115a5b0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5b11 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b14 je 0x115a5b37 */
  if (C.zf) goto L_115a5b37;
L_115a5b16:;
  /* 115a5b16 push 0x115cc79c */
  push32((uint32_t)(0x115cc79cu));
  /* 115a5b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5b1d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 115a5b22 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5b27 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5b29 call 0x115a4320 */
  push32(0x115a5b2eu); f_115a4320();
  /* 115a5b2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5b31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b34 jne 0x115a5b37 */
  if (!C.zf) goto L_115a5b37;
  /* 115a5b36 int3  */
  x86_unimpl("int3 @ 0x115a5b36");
L_115a5b37:;
  /* 115a5b37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a5b39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a5b3b jne 0x115a5b02 */
  if (!C.zf) goto L_115a5b02;
  /* 115a5b3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5b40 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b43 je 0x115a5b4b */
  if (C.zf) goto L_115a5b4b;
  /* 115a5b45 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b49 je 0x115a5b53 */
  if (C.zf) goto L_115a5b53;
L_115a5b4b:;
  /* 115a5b4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5b4e jmp 0x115a5c3a */
  goto L_115a5c3a;
L_115a5b53:;
  /* 115a5b53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5b56 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b59 je 0x115a5b6b */
  if (C.zf) goto L_115a5b6b;
  /* 115a5b5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5b5e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a5b60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5b63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a5b66 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115a5b69 jmp 0x115a5ba7 */
  goto L_115a5ba7;
L_115a5b6b:;
  /* 115a5b6b mov eax, dword ptr [0x115d1668] */
  EAX = (r32((uint32_t)(0x115d1668)));
  /* 115a5b70 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b73 je 0x115a5b96 */
  if (C.zf) goto L_115a5b96;
  /* 115a5b75 push 0x115cc780 */
  push32((uint32_t)(0x115cc780u));
  /* 115a5b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5b7c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 115a5b81 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5b86 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5b88 call 0x115a4320 */
  push32(0x115a5b8du); f_115a4320();
  /* 115a5b8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5b90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5b93 jne 0x115a5b96 */
  if (!C.zf) goto L_115a5b96;
  /* 115a5b95 int3  */
  x86_unimpl("int3 @ 0x115a5b95");
L_115a5b96:;
  /* 115a5b96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5b98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5b9a jne 0x115a5b6b */
  if (!C.zf) goto L_115a5b6b;
  /* 115a5b9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5b9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a5ba2 mov dword ptr [0x115d1668], eax */
  w32((uint32_t)(0x115d1668), (EAX));
L_115a5ba7:;
  /* 115a5ba7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5baa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5bae je 0x115a5bbf */
  if (C.zf) goto L_115a5bbf;
  /* 115a5bb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5bb3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a5bb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5bb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a5bbb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115a5bbd jmp 0x115a5bfa */
  goto L_115a5bfa;
L_115a5bbf:;
  /* 115a5bbf mov eax, dword ptr [0x115d1670] */
  EAX = (r32((uint32_t)(0x115d1670)));
  /* 115a5bc4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5bc7 je 0x115a5bea */
  if (C.zf) goto L_115a5bea;
  /* 115a5bc9 push 0x115cc764 */
  push32((uint32_t)(0x115cc764u));
  /* 115a5bce push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5bd0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 115a5bd5 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5bda push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5bdc call 0x115a4320 */
  push32(0x115a5be1u); f_115a4320();
  /* 115a5be1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5be4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5be7 jne 0x115a5bea */
  if (!C.zf) goto L_115a5bea;
  /* 115a5be9 int3  */
  x86_unimpl("int3 @ 0x115a5be9");
L_115a5bea:;
  /* 115a5bea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5bee jne 0x115a5bbf */
  if (!C.zf) goto L_115a5bbf;
  /* 115a5bf0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5bf3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a5bf5 mov dword ptr [0x115d1670], eax */
  w32((uint32_t)(0x115d1670), (EAX));
L_115a5bfa:;
  /* 115a5bfa cmp dword ptr [0x115d1670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5c01 je 0x115a5c11 */
  if (C.zf) goto L_115a5c11;
  /* 115a5c03 mov ecx, dword ptr [0x115d1670] */
  ECX = (r32((uint32_t)(0x115d1670)));
  /* 115a5c09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5c0c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 115a5c0f jmp 0x115a5c19 */
  goto L_115a5c19;
L_115a5c11:;
  /* 115a5c11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5c14 mov dword ptr [0x115d1668], eax */
  w32((uint32_t)(0x115d1668), (EAX));
L_115a5c19:;
  /* 115a5c19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5c1c mov edx, dword ptr [0x115d1670] */
  EDX = (r32((uint32_t)(0x115d1670)));
  /* 115a5c22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115a5c24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5c27 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 115a5c2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a5c31 mov dword ptr [0x115d1670], ecx */
  w32((uint32_t)(0x115d1670), (ECX));
  /* 115a5c37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115a5c3a:;
  /* 115a5c3a pop edi */
  EDI = (pop32());
  /* 115a5c3b pop esi */
  ESI = (pop32());
  /* 115a5c3c pop ebx */
  EBX = (pop32());
  /* 115a5c3d mov esp, ebp */
  ESP = (EBP);
  /* 115a5c3f pop ebp */
  EBP = (pop32());
  /* 115a5c40 ret  */
  ESPCHK(0x115a5730u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c50 @ 0x115a5c50 (27 bytes, 13 insns) */
void f_115a5c50(void) {
  FTRACE(0x115a5c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5c50 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5c51 mov ebp, esp */
  EBP = (ESP);
  /* 115a5c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5c59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5c5c push eax */
  push32((uint32_t)(EAX));
  /* 115a5c5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5c60 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5c61 call 0x115a5c70 */
  push32(0x115a5c66u); f_115a5c70();
  /* 115a5c66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5c69 pop ebp */
  EBP = (pop32());
  /* 115a5c6a ret  */
  ESPCHK(0x115a5c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c70 @ 0x115a5c70 (64 bytes, 27 insns) */
void f_115a5c70(void) {
  FTRACE(0x115a5c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5c70 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5c71 mov ebp, esp */
  EBP = (ESP);
  /* 115a5c73 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5c74 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a5c76 call 0x115a8c60 */
  push32(0x115a5c7bu); f_115a8c60();
  /* 115a5c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5c80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a5c83 push eax */
  push32((uint32_t)(EAX));
  /* 115a5c84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a5c87 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5c88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a5c8b push edx */
  push32((uint32_t)(EDX));
  /* 115a5c8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5c8f push eax */
  push32((uint32_t)(EAX));
  /* 115a5c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5c93 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5c94 call 0x115a5730 */
  push32(0x115a5c99u); f_115a5730();
  /* 115a5c99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5c9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a5c9f push 9 */
  push32((uint32_t)(0x9u));
  /* 115a5ca1 call 0x115a8d00 */
  push32(0x115a5ca6u); f_115a8d00();
  /* 115a5ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5ca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5cac mov esp, ebp */
  ESP = (EBP);
  /* 115a5cae pop ebp */
  EBP = (pop32());
  /* 115a5caf ret  */
  ESPCHK(0x115a5c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cb0 @ 0x115a5cb0 (19 bytes, 9 insns) */
void f_115a5cb0(void) {
  FTRACE(0x115a5cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5cb1 mov ebp, esp */
  EBP = (ESP);
  /* 115a5cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5cb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5cb8 push eax */
  push32((uint32_t)(EAX));
  /* 115a5cb9 call 0x115a5cf0 */
  push32(0x115a5cbeu); f_115a5cf0();
  /* 115a5cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5cc1 pop ebp */
  EBP = (pop32());
  /* 115a5cc2 ret  */
  ESPCHK(0x115a5cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x115a5cd0 (19 bytes, 9 insns) */
void f_115a5cd0(void) {
  FTRACE(0x115a5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 115a5cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5cd8 push eax */
  push32((uint32_t)(EAX));
  /* 115a5cd9 call 0x115a5d20 */
  push32(0x115a5cdeu); f_115a5d20();
  /* 115a5cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5ce1 pop ebp */
  EBP = (pop32());
  /* 115a5ce2 ret  */
  ESPCHK(0x115a5cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cf0 @ 0x115a5cf0 (41 bytes, 16 insns) */
void f_115a5cf0(void) {
  FTRACE(0x115a5cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5cf1 mov ebp, esp */
  EBP = (ESP);
  /* 115a5cf3 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a5cf5 call 0x115a8c60 */
  push32(0x115a5cfau); f_115a8c60();
  /* 115a5cfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5d00 push eax */
  push32((uint32_t)(EAX));
  /* 115a5d01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5d04 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5d05 call 0x115a5d20 */
  push32(0x115a5d0au); f_115a5d20();
  /* 115a5d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5d0d push 9 */
  push32((uint32_t)(0x9u));
  /* 115a5d0f call 0x115a8d00 */
  push32(0x115a5d14u); f_115a8d00();
  /* 115a5d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5d17 pop ebp */
  EBP = (pop32());
  /* 115a5d18 ret  */
  ESPCHK(0x115a5cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d20 @ 0x115a5d20 (1004 bytes, 342 insns) */
void f_115a5d20(void) {
  FTRACE(0x115a5d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a5d20 push ebp */
  push32((uint32_t)(EBP));
  /* 115a5d21 mov ebp, esp */
  EBP = (ESP);
  /* 115a5d23 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5d24 push ebx */
  push32((uint32_t)(EBX));
  /* 115a5d25 push esi */
  push32((uint32_t)(ESI));
  /* 115a5d26 push edi */
  push32((uint32_t)(EDI));
  /* 115a5d27 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a5d2c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115a5d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5d31 je 0x115a5d63 */
  if (C.zf) goto L_115a5d63;
L_115a5d33:;
  /* 115a5d33 call 0x115a6400 */
  push32(0x115a5d38u); f_115a6400();
  /* 115a5d38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5d3a jne 0x115a5d5d */
  if (!C.zf) goto L_115a5d5d;
  /* 115a5d3c push 0x115cc750 */
  push32((uint32_t)(0x115cc750u));
  /* 115a5d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d43 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 115a5d48 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5d4d push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5d4f call 0x115a4320 */
  push32(0x115a5d54u); f_115a4320();
  /* 115a5d54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5d57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5d5a jne 0x115a5d5d */
  if (!C.zf) goto L_115a5d5d;
  /* 115a5d5c int3  */
  x86_unimpl("int3 @ 0x115a5d5c");
L_115a5d5d:;
  /* 115a5d5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5d5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5d61 jne 0x115a5d33 */
  if (!C.zf) goto L_115a5d33;
L_115a5d63:;
  /* 115a5d63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5d67 jne 0x115a5d6e */
  if (!C.zf) goto L_115a5d6e;
  /* 115a5d69 jmp 0x115a6105 */
  goto L_115a6105;
L_115a5d6e:;
  /* 115a5d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a5d77 push edx */
  push32((uint32_t)(EDX));
  /* 115a5d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5d7d push eax */
  push32((uint32_t)(EAX));
  /* 115a5d7e push 3 */
  push32((uint32_t)(0x3u));
  /* 115a5d80 call dword ptr [0x115cfc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x115cfc90))), 0x115a5d86u);
  /* 115a5d86 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5d8b jne 0x115a5db8 */
  if (!C.zf) goto L_115a5db8;
L_115a5d8d:;
  /* 115a5d8d push 0x115cca14 */
  push32((uint32_t)(0x115cca14u));
  /* 115a5d92 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a5d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d9d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5d9f call 0x115a4320 */
  push32(0x115a5da4u); f_115a4320();
  /* 115a5da4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5da7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5daa jne 0x115a5dad */
  if (!C.zf) goto L_115a5dad;
  /* 115a5dac int3  */
  x86_unimpl("int3 @ 0x115a5dac");
L_115a5dad:;
  /* 115a5dad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5daf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5db1 jne 0x115a5d8d */
  if (!C.zf) goto L_115a5d8d;
  /* 115a5db3 jmp 0x115a6105 */
  goto L_115a6105;
L_115a5db8:;
  /* 115a5db8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5dbb push edx */
  push32((uint32_t)(EDX));
  /* 115a5dbc call 0x115a6860 */
  push32(0x115a5dc1u); f_115a6860();
  /* 115a5dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5dc6 jne 0x115a5de9 */
  if (!C.zf) goto L_115a5de9;
  /* 115a5dc8 push 0x115cc854 */
  push32((uint32_t)(0x115cc854u));
  /* 115a5dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5dcf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 115a5dd4 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5dd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5ddb call 0x115a4320 */
  push32(0x115a5de0u); f_115a4320();
  /* 115a5de0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5de3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5de6 jne 0x115a5de9 */
  if (!C.zf) goto L_115a5de9;
  /* 115a5de8 int3  */
  x86_unimpl("int3 @ 0x115a5de8");
L_115a5de9:;
  /* 115a5de9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5deb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5ded jne 0x115a5db8 */
  if (!C.zf) goto L_115a5db8;
  /* 115a5def mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a5df2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5df5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a5df8:;
  /* 115a5df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5dfb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a5dfe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a5e03 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5e06 je 0x115a5e4b */
  if (C.zf) goto L_115a5e4b;
  /* 115a5e08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5e0b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5e0f je 0x115a5e4b */
  if (C.zf) goto L_115a5e4b;
  /* 115a5e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5e14 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a5e17 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a5e1c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5e1f je 0x115a5e4b */
  if (C.zf) goto L_115a5e4b;
  /* 115a5e21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5e24 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5e28 je 0x115a5e4b */
  if (C.zf) goto L_115a5e4b;
  /* 115a5e2a push 0x115cc9ec */
  push32((uint32_t)(0x115cc9ecu));
  /* 115a5e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5e31 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 115a5e36 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5e3b push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5e3d call 0x115a4320 */
  push32(0x115a5e42u); f_115a4320();
  /* 115a5e42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5e45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5e48 jne 0x115a5e4b */
  if (!C.zf) goto L_115a5e4b;
  /* 115a5e4a int3  */
  x86_unimpl("int3 @ 0x115a5e4a");
L_115a5e4b:;
  /* 115a5e4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a5e4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a5e4f jne 0x115a5df8 */
  if (!C.zf) goto L_115a5df8;
  /* 115a5e51 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a5e56 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115a5e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5e5b jne 0x115a5f26 */
  if (!C.zf) goto L_115a5f26;
  /* 115a5e61 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a5e63 mov cl, byte ptr [0x115cfa90] */
  CL = (r8((uint32_t)(0x115cfa90)));
  /* 115a5e69 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5e6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5e6d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5e70 push edx */
  push32((uint32_t)(EDX));
  /* 115a5e71 call 0x115a6370 */
  push32(0x115a5e76u); f_115a6370();
  /* 115a5e76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5e7b jne 0x115a5ec0 */
  if (!C.zf) goto L_115a5ec0;
L_115a5e7d:;
  /* 115a5e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5e80 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5e83 push eax */
  push32((uint32_t)(EAX));
  /* 115a5e84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5e87 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115a5e8a push edx */
  push32((uint32_t)(EDX));
  /* 115a5e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5e8e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115a5e91 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a5e97 mov edx, dword ptr [ecx*4 + 0x115cfa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfa94)));
  /* 115a5e9e push edx */
  push32((uint32_t)(EDX));
  /* 115a5e9f push 0x115cc9c0 */
  push32((uint32_t)(0x115cc9c0u));
  /* 115a5ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5eaa push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5eac call 0x115a4320 */
  push32(0x115a5eb1u); f_115a4320();
  /* 115a5eb1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5eb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5eb7 jne 0x115a5eba */
  if (!C.zf) goto L_115a5eba;
  /* 115a5eb9 int3  */
  x86_unimpl("int3 @ 0x115a5eb9");
L_115a5eba:;
  /* 115a5eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5ebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5ebe jne 0x115a5e7d */
  if (!C.zf) goto L_115a5e7d;
L_115a5ec0:;
  /* 115a5ec0 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a5ec2 mov cl, byte ptr [0x115cfa90] */
  CL = (r8((uint32_t)(0x115cfa90)));
  /* 115a5ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 115a5ec9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5ecc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a5ecf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5ed2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 115a5ed6 push edx */
  push32((uint32_t)(EDX));
  /* 115a5ed7 call 0x115a6370 */
  push32(0x115a5edcu); f_115a6370();
  /* 115a5edc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5edf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5ee1 jne 0x115a5f26 */
  if (!C.zf) goto L_115a5f26;
L_115a5ee3:;
  /* 115a5ee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5ee6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5ee9 push eax */
  push32((uint32_t)(EAX));
  /* 115a5eea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5eed mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115a5ef0 push edx */
  push32((uint32_t)(EDX));
  /* 115a5ef1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5ef4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115a5ef7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a5efd mov edx, dword ptr [ecx*4 + 0x115cfa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfa94)));
  /* 115a5f04 push edx */
  push32((uint32_t)(EDX));
  /* 115a5f05 push 0x115cc994 */
  push32((uint32_t)(0x115cc994u));
  /* 115a5f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5f10 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a5f12 call 0x115a4320 */
  push32(0x115a5f17u); f_115a4320();
  /* 115a5f17 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5f1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5f1d jne 0x115a5f20 */
  if (!C.zf) goto L_115a5f20;
  /* 115a5f1f int3  */
  x86_unimpl("int3 @ 0x115a5f1f");
L_115a5f20:;
  /* 115a5f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a5f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a5f24 jne 0x115a5ee3 */
  if (!C.zf) goto L_115a5ee3;
L_115a5f26:;
  /* 115a5f26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5f29 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5f2d jne 0x115a5f9b */
  if (!C.zf) goto L_115a5f9b;
L_115a5f2f:;
  /* 115a5f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5f32 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5f39 jne 0x115a5f44 */
  if (!C.zf) goto L_115a5f44;
  /* 115a5f3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5f3e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5f42 je 0x115a5f65 */
  if (C.zf) goto L_115a5f65;
L_115a5f44:;
  /* 115a5f44 push 0x115cc954 */
  push32((uint32_t)(0x115cc954u));
  /* 115a5f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5f4b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 115a5f50 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5f55 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5f57 call 0x115a4320 */
  push32(0x115a5f5cu); f_115a4320();
  /* 115a5f5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5f5f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5f62 jne 0x115a5f65 */
  if (!C.zf) goto L_115a5f65;
  /* 115a5f64 int3  */
  x86_unimpl("int3 @ 0x115a5f64");
L_115a5f65:;
  /* 115a5f65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5f67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5f69 jne 0x115a5f2f */
  if (!C.zf) goto L_115a5f2f;
  /* 115a5f6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5f6e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a5f71 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5f74 push eax */
  push32((uint32_t)(EAX));
  /* 115a5f75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5f77 mov cl, byte ptr [0x115cfa91] */
  CL = (r8((uint32_t)(0x115cfa91)));
  /* 115a5f7d push ecx */
  push32((uint32_t)(ECX));
  /* 115a5f7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5f81 push edx */
  push32((uint32_t)(EDX));
  /* 115a5f82 call 0x115a8fd0 */
  push32(0x115a5f87u); f_115a8fd0();
  /* 115a5f87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5f8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5f8d push eax */
  push32((uint32_t)(EAX));
  /* 115a5f8e call 0x115a93d0 */
  push32(0x115a5f93u); f_115a93d0();
  /* 115a5f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5f96 jmp 0x115a6105 */
  goto L_115a6105;
L_115a5f9b:;
  /* 115a5f9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5f9e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5fa2 jne 0x115a5fb1 */
  if (!C.zf) goto L_115a5fb1;
  /* 115a5fa4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5fa8 jne 0x115a5fb1 */
  if (!C.zf) goto L_115a5fb1;
  /* 115a5faa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_115a5fb1:;
  /* 115a5fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5fb4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a5fb7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5fba je 0x115a5fdd */
  if (C.zf) goto L_115a5fdd;
  /* 115a5fbc push 0x115cc934 */
  push32((uint32_t)(0x115cc934u));
  /* 115a5fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a5fc3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 115a5fc8 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a5fcd push 2 */
  push32((uint32_t)(0x2u));
  /* 115a5fcf call 0x115a4320 */
  push32(0x115a5fd4u); f_115a4320();
  /* 115a5fd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a5fd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a5fda jne 0x115a5fdd */
  if (!C.zf) goto L_115a5fdd;
  /* 115a5fdc int3  */
  x86_unimpl("int3 @ 0x115a5fdc");
L_115a5fdd:;
  /* 115a5fdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a5fdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5fe1 jne 0x115a5fb1 */
  if (!C.zf) goto L_115a5fb1;
  /* 115a5fe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a5fe6 mov eax, dword ptr [0x115d1674] */
  EAX = (r32((uint32_t)(0x115d1674)));
  /* 115a5feb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a5fee mov dword ptr [0x115d1674], eax */
  w32((uint32_t)(0x115d1674), (EAX));
  /* 115a5ff3 mov ecx, dword ptr [0x115cfa84] */
  ECX = (r32((uint32_t)(0x115cfa84)));
  /* 115a5ff9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 115a5ffc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a5ffe jne 0x115a60dc */
  if (!C.zf) goto L_115a60dc;
  /* 115a6004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6007 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a600a je 0x115a601c */
  if (C.zf) goto L_115a601c;
  /* 115a600c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a600f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a6011 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6014 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a6017 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 115a601a jmp 0x115a605a */
  goto L_115a605a;
L_115a601c:;
  /* 115a601c mov ecx, dword ptr [0x115d1668] */
  ECX = (r32((uint32_t)(0x115d1668)));
  /* 115a6022 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6025 je 0x115a6048 */
  if (C.zf) goto L_115a6048;
  /* 115a6027 push 0x115cc91c */
  push32((uint32_t)(0x115cc91cu));
  /* 115a602c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a602e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 115a6033 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a6038 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a603a call 0x115a4320 */
  push32(0x115a603fu); f_115a4320();
  /* 115a603f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6042 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6045 jne 0x115a6048 */
  if (!C.zf) goto L_115a6048;
  /* 115a6047 int3  */
  x86_unimpl("int3 @ 0x115a6047");
L_115a6048:;
  /* 115a6048 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a604a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a604c jne 0x115a601c */
  if (!C.zf) goto L_115a601c;
  /* 115a604e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6051 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a6054 mov dword ptr [0x115d1668], ecx */
  w32((uint32_t)(0x115d1668), (ECX));
L_115a605a:;
  /* 115a605a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a605d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6061 je 0x115a6072 */
  if (C.zf) goto L_115a6072;
  /* 115a6063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6066 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a6069 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a606c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a606e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115a6070 jmp 0x115a60af */
  goto L_115a60af;
L_115a6072:;
  /* 115a6072 mov ecx, dword ptr [0x115d1670] */
  ECX = (r32((uint32_t)(0x115d1670)));
  /* 115a6078 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a607b je 0x115a609e */
  if (C.zf) goto L_115a609e;
  /* 115a607d push 0x115cc904 */
  push32((uint32_t)(0x115cc904u));
  /* 115a6082 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6084 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 115a6089 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a608e push 2 */
  push32((uint32_t)(0x2u));
  /* 115a6090 call 0x115a4320 */
  push32(0x115a6095u); f_115a4320();
  /* 115a6095 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6098 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a609b jne 0x115a609e */
  if (!C.zf) goto L_115a609e;
  /* 115a609d int3  */
  x86_unimpl("int3 @ 0x115a609d");
L_115a609e:;
  /* 115a609e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a60a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a60a2 jne 0x115a6072 */
  if (!C.zf) goto L_115a6072;
  /* 115a60a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a60a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a60a9 mov dword ptr [0x115d1670], ecx */
  w32((uint32_t)(0x115d1670), (ECX));
L_115a60af:;
  /* 115a60af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a60b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a60b5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a60b8 push eax */
  push32((uint32_t)(EAX));
  /* 115a60b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a60bb mov cl, byte ptr [0x115cfa91] */
  CL = (r8((uint32_t)(0x115cfa91)));
  /* 115a60c1 push ecx */
  push32((uint32_t)(ECX));
  /* 115a60c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a60c5 push edx */
  push32((uint32_t)(EDX));
  /* 115a60c6 call 0x115a8fd0 */
  push32(0x115a60cbu); f_115a8fd0();
  /* 115a60cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a60ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a60d1 push eax */
  push32((uint32_t)(EAX));
  /* 115a60d2 call 0x115a93d0 */
  push32(0x115a60d7u); f_115a93d0();
  /* 115a60d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a60da jmp 0x115a6105 */
  goto L_115a6105;
L_115a60dc:;
  /* 115a60dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a60df mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 115a60e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a60e9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a60ec push eax */
  push32((uint32_t)(EAX));
  /* 115a60ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a60ef mov cl, byte ptr [0x115cfa91] */
  CL = (r8((uint32_t)(0x115cfa91)));
  /* 115a60f5 push ecx */
  push32((uint32_t)(ECX));
  /* 115a60f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a60f9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a60fc push edx */
  push32((uint32_t)(EDX));
  /* 115a60fd call 0x115a8fd0 */
  push32(0x115a6102u); f_115a8fd0();
  /* 115a6102 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a6105:;
  /* 115a6105 pop edi */
  EDI = (pop32());
  /* 115a6106 pop esi */
  ESI = (pop32());
  /* 115a6107 pop ebx */
  EBX = (pop32());
  /* 115a6108 mov esp, ebp */
  ESP = (EBP);
  /* 115a610a pop ebp */
  EBP = (pop32());
  /* 115a610b ret  */
  ESPCHK(0x115a5d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006110 @ 0x115a6110 (19 bytes, 9 insns) */
void f_115a6110(void) {
  FTRACE(0x115a6110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6110 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6111 mov ebp, esp */
  EBP = (ESP);
  /* 115a6113 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a6115 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6118 push eax */
  push32((uint32_t)(EAX));
  /* 115a6119 call 0x115a6130 */
  push32(0x115a611eu); f_115a6130();
  /* 115a611e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6121 pop ebp */
  EBP = (pop32());
  /* 115a6122 ret  */
  ESPCHK(0x115a6110u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x115a6130 (342 bytes, 119 insns) */
void f_115a6130(void) {
  FTRACE(0x115a6130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6130 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6131 mov ebp, esp */
  EBP = (ESP);
  /* 115a6133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6136 push ebx */
  push32((uint32_t)(EBX));
  /* 115a6137 push esi */
  push32((uint32_t)(ESI));
  /* 115a6138 push edi */
  push32((uint32_t)(EDI));
  /* 115a6139 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a613e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115a6141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6143 je 0x115a6175 */
  if (C.zf) goto L_115a6175;
L_115a6145:;
  /* 115a6145 call 0x115a6400 */
  push32(0x115a614au); f_115a6400();
  /* 115a614a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a614c jne 0x115a616f */
  if (!C.zf) goto L_115a616f;
  /* 115a614e push 0x115cc750 */
  push32((uint32_t)(0x115cc750u));
  /* 115a6153 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6155 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 115a615a push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a615f push 2 */
  push32((uint32_t)(0x2u));
  /* 115a6161 call 0x115a4320 */
  push32(0x115a6166u); f_115a4320();
  /* 115a6166 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6169 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a616c jne 0x115a616f */
  if (!C.zf) goto L_115a616f;
  /* 115a616e int3  */
  x86_unimpl("int3 @ 0x115a616e");
L_115a616f:;
  /* 115a616f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a6171 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a6173 jne 0x115a6145 */
  if (!C.zf) goto L_115a6145;
L_115a6175:;
  /* 115a6175 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a6177 call 0x115a8c60 */
  push32(0x115a617cu); f_115a8c60();
  /* 115a617c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a617f:;
  /* 115a617f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6182 push edx */
  push32((uint32_t)(EDX));
  /* 115a6183 call 0x115a6860 */
  push32(0x115a6188u); f_115a6860();
  /* 115a6188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a618b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a618d jne 0x115a61b0 */
  if (!C.zf) goto L_115a61b0;
  /* 115a618f push 0x115cc854 */
  push32((uint32_t)(0x115cc854u));
  /* 115a6194 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6196 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 115a619b push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a61a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a61a2 call 0x115a4320 */
  push32(0x115a61a7u); f_115a4320();
  /* 115a61a7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a61aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a61ad jne 0x115a61b0 */
  if (!C.zf) goto L_115a61b0;
  /* 115a61af int3  */
  x86_unimpl("int3 @ 0x115a61af");
L_115a61b0:;
  /* 115a61b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a61b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a61b4 jne 0x115a617f */
  if (!C.zf) goto L_115a617f;
  /* 115a61b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a61b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a61bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115a61bf:;
  /* 115a61bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a61c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a61c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a61ca cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a61cd je 0x115a6212 */
  if (C.zf) goto L_115a6212;
  /* 115a61cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a61d2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a61d6 je 0x115a6212 */
  if (C.zf) goto L_115a6212;
  /* 115a61d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a61db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a61de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a61e3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a61e6 je 0x115a6212 */
  if (C.zf) goto L_115a6212;
  /* 115a61e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a61eb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a61ef je 0x115a6212 */
  if (C.zf) goto L_115a6212;
  /* 115a61f1 push 0x115cc9ec */
  push32((uint32_t)(0x115cc9ecu));
  /* 115a61f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a61f8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 115a61fd push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a6202 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a6204 call 0x115a4320 */
  push32(0x115a6209u); f_115a4320();
  /* 115a6209 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a620c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a620f jne 0x115a6212 */
  if (!C.zf) goto L_115a6212;
  /* 115a6211 int3  */
  x86_unimpl("int3 @ 0x115a6211");
L_115a6212:;
  /* 115a6212 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a6214 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a6216 jne 0x115a61bf */
  if (!C.zf) goto L_115a61bf;
  /* 115a6218 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a621b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a621f jne 0x115a622e */
  if (!C.zf) goto L_115a622e;
  /* 115a6221 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6225 jne 0x115a622e */
  if (!C.zf) goto L_115a622e;
  /* 115a6227 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_115a622e:;
  /* 115a622e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6231 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6235 je 0x115a6269 */
  if (C.zf) goto L_115a6269;
L_115a6237:;
  /* 115a6237 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a623a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a623d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6240 je 0x115a6263 */
  if (C.zf) goto L_115a6263;
  /* 115a6242 push 0x115cc934 */
  push32((uint32_t)(0x115cc934u));
  /* 115a6247 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6249 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 115a624e push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a6253 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a6255 call 0x115a4320 */
  push32(0x115a625au); f_115a4320();
  /* 115a625a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a625d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6260 jne 0x115a6263 */
  if (!C.zf) goto L_115a6263;
  /* 115a6262 int3  */
  x86_unimpl("int3 @ 0x115a6262");
L_115a6263:;
  /* 115a6263 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a6265 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a6267 jne 0x115a6237 */
  if (!C.zf) goto L_115a6237;
L_115a6269:;
  /* 115a6269 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a626c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a626f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a6272 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a6274 call 0x115a8d00 */
  push32(0x115a6279u); f_115a8d00();
  /* 115a6279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a627c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a627f pop edi */
  EDI = (pop32());
  /* 115a6280 pop esi */
  ESI = (pop32());
  /* 115a6281 pop ebx */
  EBX = (pop32());
  /* 115a6282 mov esp, ebp */
  ESP = (EBP);
  /* 115a6284 pop ebp */
  EBP = (pop32());
  /* 115a6285 ret  */
  ESPCHK(0x115a6130u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x115a6290 (28 bytes, 11 insns) */
void f_115a6290(void) {
  FTRACE(0x115a6290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6290 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6291 mov ebp, esp */
  EBP = (ESP);
  /* 115a6293 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6294 mov eax, dword ptr [0x115cfa8c] */
  EAX = (r32((uint32_t)(0x115cfa8c)));
  /* 115a6299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a629c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a629f mov dword ptr [0x115cfa8c], ecx */
  w32((uint32_t)(0x115cfa8c), (ECX));
  /* 115a62a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a62a8 mov esp, ebp */
  ESP = (EBP);
  /* 115a62aa pop ebp */
  EBP = (pop32());
  /* 115a62ab ret  */
  ESPCHK(0x115a6290u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b0 @ 0x115a62b0 (157 bytes, 59 insns) */
void f_115a62b0(void) {
  FTRACE(0x115a62b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a62b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a62b1 mov ebp, esp */
  EBP = (ESP);
  /* 115a62b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a62b4 push ebx */
  push32((uint32_t)(EBX));
  /* 115a62b5 push esi */
  push32((uint32_t)(ESI));
  /* 115a62b6 push edi */
  push32((uint32_t)(EDI));
  /* 115a62b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a62b9 call 0x115a8c60 */
  push32(0x115a62beu); f_115a8c60();
  /* 115a62be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a62c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a62c4 push eax */
  push32((uint32_t)(EAX));
  /* 115a62c5 call 0x115a6860 */
  push32(0x115a62cau); f_115a6860();
  /* 115a62ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a62cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a62cf je 0x115a633c */
  if (C.zf) goto L_115a633c;
  /* 115a62d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a62d4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a62d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a62da:;
  /* 115a62da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a62dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a62e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a62e5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a62e8 je 0x115a632d */
  if (C.zf) goto L_115a632d;
  /* 115a62ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a62ed cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a62f1 je 0x115a632d */
  if (C.zf) goto L_115a632d;
  /* 115a62f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a62f6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a62f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a62fe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6301 je 0x115a632d */
  if (C.zf) goto L_115a632d;
  /* 115a6303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6306 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a630a je 0x115a632d */
  if (C.zf) goto L_115a632d;
  /* 115a630c push 0x115cc9ec */
  push32((uint32_t)(0x115cc9ecu));
  /* 115a6311 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6313 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 115a6318 push 0x115cc744 */
  push32((uint32_t)(0x115cc744u));
  /* 115a631d push 2 */
  push32((uint32_t)(0x2u));
  /* 115a631f call 0x115a4320 */
  push32(0x115a6324u); f_115a4320();
  /* 115a6324 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6327 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a632a jne 0x115a632d */
  if (!C.zf) goto L_115a632d;
  /* 115a632c int3  */
  x86_unimpl("int3 @ 0x115a632c");
L_115a632d:;
  /* 115a632d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a632f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a6331 jne 0x115a62da */
  if (!C.zf) goto L_115a62da;
  /* 115a6333 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6336 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a6339 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_115a633c:;
  /* 115a633c push 9 */
  push32((uint32_t)(0x9u));
  /* 115a633e call 0x115a8d00 */
  push32(0x115a6343u); f_115a8d00();
  /* 115a6343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6346 pop edi */
  EDI = (pop32());
  /* 115a6347 pop esi */
  ESI = (pop32());
  /* 115a6348 pop ebx */
  EBX = (pop32());
  /* 115a6349 mov esp, ebp */
  ESP = (EBP);
  /* 115a634b pop ebp */
  EBP = (pop32());
  /* 115a634c ret  */
  ESPCHK(0x115a62b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x115a6350 (28 bytes, 11 insns) */
void f_115a6350(void) {
  FTRACE(0x115a6350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6350 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6351 mov ebp, esp */
  EBP = (ESP);
  /* 115a6353 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6354 mov eax, dword ptr [0x115cfc90] */
  EAX = (r32((uint32_t)(0x115cfc90)));
  /* 115a6359 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a635c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a635f mov dword ptr [0x115cfc90], ecx */
  w32((uint32_t)(0x115cfc90), (ECX));
  /* 115a6365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6368 mov esp, ebp */
  ESP = (EBP);
  /* 115a636a pop ebp */
  EBP = (pop32());
  /* 115a636b ret  */
  ESPCHK(0x115a6350u, _esp0);
  ESP += 4; return;
}

/* FUN_10006370 @ 0x115a6370 (136 bytes, 55 insns) */
void f_115a6370(void) {
  FTRACE(0x115a6370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6370 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6371 mov ebp, esp */
  EBP = (ESP);
  /* 115a6373 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6374 push ebx */
  push32((uint32_t)(EBX));
  /* 115a6375 push esi */
  push32((uint32_t)(ESI));
  /* 115a6376 push edi */
  push32((uint32_t)(EDI));
  /* 115a6377 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_115a637e:;
  /* 115a637e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a6381 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a6384 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6387 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 115a638a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a638c je 0x115a63ee */
  if (C.zf) goto L_115a63ee;
  /* 115a638e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6391 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6393 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115a6395 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a6398 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a639e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a63a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a63a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115a63a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a63a9 je 0x115a63ec */
  if (C.zf) goto L_115a63ec;
L_115a63ab:;
  /* 115a63ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a63ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a63b3 push eax */
  push32((uint32_t)(EAX));
  /* 115a63b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a63b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a63b9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 115a63bc push edx */
  push32((uint32_t)(EDX));
  /* 115a63bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a63c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a63c3 push eax */
  push32((uint32_t)(EAX));
  /* 115a63c4 push 0x115cca30 */
  push32((uint32_t)(0x115cca30u));
  /* 115a63c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a63cb push 0 */
  push32((uint32_t)(0x0u));
  /* 115a63cd push 0 */
  push32((uint32_t)(0x0u));
  /* 115a63cf push 0 */
  push32((uint32_t)(0x0u));
  /* 115a63d1 call 0x115a4320 */
  push32(0x115a63d6u); f_115a4320();
  /* 115a63d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a63d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a63dc jne 0x115a63df */
  if (!C.zf) goto L_115a63df;
  /* 115a63de int3  */
  x86_unimpl("int3 @ 0x115a63de");
L_115a63df:;
  /* 115a63df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a63e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a63e3 jne 0x115a63ab */
  if (!C.zf) goto L_115a63ab;
  /* 115a63e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115a63ec:;
  /* 115a63ec jmp 0x115a637e */
  goto L_115a637e;
L_115a63ee:;
  /* 115a63ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a63f1 pop edi */
  EDI = (pop32());
  /* 115a63f2 pop esi */
  ESI = (pop32());
  /* 115a63f3 pop ebx */
  EBX = (pop32());
  /* 115a63f4 mov esp, ebp */
  ESP = (EBP);
  /* 115a63f6 pop ebp */
  EBP = (pop32());
  /* 115a63f7 ret  */
  ESPCHK(0x115a6370u, _esp0);
  ESP += 4; return;
}

/* FUN_10006400 @ 0x115a6400 (863 bytes, 299 insns) [1 switch table(s)] */
void f_115a6400(void) {
  FTRACE(0x115a6400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6400 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6401 mov ebp, esp */
  EBP = (ESP);
  /* 115a6403 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6406 push ebx */
  push32((uint32_t)(EBX));
  /* 115a6407 push esi */
  push32((uint32_t)(ESI));
  /* 115a6408 push edi */
  push32((uint32_t)(EDI));
  /* 115a6409 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115a6410 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a6415 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 115a6418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a641a jne 0x115a6426 */
  if (!C.zf) goto L_115a6426;
  /* 115a641c mov eax, 1 */
  EAX = (0x1u);
  /* 115a6421 jmp 0x115a6758 */
  goto L_115a6758;
L_115a6426:;
  /* 115a6426 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a6428 call 0x115a8c60 */
  push32(0x115a642du); f_115a8c60();
  /* 115a642d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6430 call 0x115a9440 */
  push32(0x115a6435u); f_115a9440();
  /* 115a6435 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a6438 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a643c je 0x115a6549 */
  if (C.zf) goto L_115a6549;
  /* 115a6442 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6446 je 0x115a6549 */
  if (C.zf) goto L_115a6549;
  /* 115a644c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a644f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115a6452 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a6455 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6458 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115a645b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a645f ja 0x115a6512 */
  if ((!C.cf&&!C.zf)) goto L_115a6512;
  /* 115a6465 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a6468 jmp dword ptr [eax*4 + 0x115a675f] */
  switch (EAX) {
    case 0: goto L_115a64ea;
    case 1: goto L_115a64c2;
    case 2: goto L_115a649a;
    case 3: goto L_115a646f;
    default: x86_unimpl("switch@0x115a6468 out of table"); return;
  }
L_115a646f:;
  /* 115a646f push 0x115ccb84 */
  push32((uint32_t)(0x115ccb84u));
  /* 115a6474 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a6479 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a647b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a647d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a647f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6481 call 0x115a4320 */
  push32(0x115a6486u); f_115a4320();
  /* 115a6486 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6489 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a648c jne 0x115a648f */
  if (!C.zf) goto L_115a648f;
  /* 115a648e int3  */
  x86_unimpl("int3 @ 0x115a648e");
L_115a648f:;
  /* 115a648f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a6491 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a6493 jne 0x115a646f */
  if (!C.zf) goto L_115a646f;
  /* 115a6495 jmp 0x115a6538 */
  goto L_115a6538;
L_115a649a:;
  /* 115a649a push 0x115ccb60 */
  push32((uint32_t)(0x115ccb60u));
  /* 115a649f push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a64a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64aa push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64ac call 0x115a4320 */
  push32(0x115a64b1u); f_115a4320();
  /* 115a64b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a64b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a64b7 jne 0x115a64ba */
  if (!C.zf) goto L_115a64ba;
  /* 115a64b9 int3  */
  x86_unimpl("int3 @ 0x115a64b9");
L_115a64ba:;
  /* 115a64ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a64bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a64be jne 0x115a649a */
  if (!C.zf) goto L_115a649a;
  /* 115a64c0 jmp 0x115a6538 */
  goto L_115a6538;
L_115a64c2:;
  /* 115a64c2 push 0x115ccb3c */
  push32((uint32_t)(0x115ccb3cu));
  /* 115a64c7 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a64cc push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64ce push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64d4 call 0x115a4320 */
  push32(0x115a64d9u); f_115a4320();
  /* 115a64d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a64dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a64df jne 0x115a64e2 */
  if (!C.zf) goto L_115a64e2;
  /* 115a64e1 int3  */
  x86_unimpl("int3 @ 0x115a64e1");
L_115a64e2:;
  /* 115a64e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a64e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a64e6 jne 0x115a64c2 */
  if (!C.zf) goto L_115a64c2;
  /* 115a64e8 jmp 0x115a6538 */
  goto L_115a6538;
L_115a64ea:;
  /* 115a64ea push 0x115ccb18 */
  push32((uint32_t)(0x115ccb18u));
  /* 115a64ef push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a64f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64fa push 0 */
  push32((uint32_t)(0x0u));
  /* 115a64fc call 0x115a4320 */
  push32(0x115a6501u); f_115a4320();
  /* 115a6501 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6504 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6507 jne 0x115a650a */
  if (!C.zf) goto L_115a650a;
  /* 115a6509 int3  */
  x86_unimpl("int3 @ 0x115a6509");
L_115a650a:;
  /* 115a650a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a650c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a650e jne 0x115a64ea */
  if (!C.zf) goto L_115a64ea;
  /* 115a6510 jmp 0x115a6538 */
  goto L_115a6538;
L_115a6512:;
  /* 115a6512 push 0x115ccaec */
  push32((uint32_t)(0x115ccaecu));
  /* 115a6517 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a651c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a651e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6520 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6522 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6524 call 0x115a4320 */
  push32(0x115a6529u); f_115a4320();
  /* 115a6529 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a652c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a652f jne 0x115a6532 */
  if (!C.zf) goto L_115a6532;
  /* 115a6531 int3  */
  x86_unimpl("int3 @ 0x115a6531");
L_115a6532:;
  /* 115a6532 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a6534 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a6536 jne 0x115a6512 */
  if (!C.zf) goto L_115a6512;
L_115a6538:;
  /* 115a6538 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a653a call 0x115a8d00 */
  push32(0x115a653fu); f_115a8d00();
  /* 115a653f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6542 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6544 jmp 0x115a6758 */
  goto L_115a6758;
L_115a6549:;
  /* 115a6549 mov eax, dword ptr [0x115d1670] */
  EAX = (r32((uint32_t)(0x115d1670)));
  /* 115a654e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a6551 jmp 0x115a655b */
  goto L_115a655b;
L_115a6553:;
  /* 115a6553 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6556 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a6558 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115a655b:;
  /* 115a655b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a655f je 0x115a674b */
  if (C.zf) goto L_115a674b;
  /* 115a6565 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 115a656c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a656f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115a6572 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a6578 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a657b je 0x115a65a0 */
  if (C.zf) goto L_115a65a0;
  /* 115a657d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6580 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6584 je 0x115a65a0 */
  if (C.zf) goto L_115a65a0;
  /* 115a6586 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6589 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115a658c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a6592 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6595 je 0x115a65a0 */
  if (C.zf) goto L_115a65a0;
  /* 115a6597 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a659a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a659e jne 0x115a65b8 */
  if (!C.zf) goto L_115a65b8;
L_115a65a0:;
  /* 115a65a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a65a3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115a65a6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a65ac mov edx, dword ptr [ecx*4 + 0x115cfa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfa94)));
  /* 115a65b3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115a65b6 jmp 0x115a65bf */
  goto L_115a65bf;
L_115a65b8:;
  /* 115a65b8 mov dword ptr [ebp - 0x14], 0x115ccae4 */
  w32((uint32_t)(EBP + -0x14), (0x115ccae4u));
L_115a65bf:;
  /* 115a65bf push 4 */
  push32((uint32_t)(0x4u));
  /* 115a65c1 mov al, byte ptr [0x115cfa90] */
  AL = (r8((uint32_t)(0x115cfa90)));
  /* 115a65c6 push eax */
  push32((uint32_t)(EAX));
  /* 115a65c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a65ca add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a65cd push ecx */
  push32((uint32_t)(ECX));
  /* 115a65ce call 0x115a6370 */
  push32(0x115a65d3u); f_115a6370();
  /* 115a65d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a65d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a65d8 jne 0x115a6614 */
  if (!C.zf) goto L_115a6614;
L_115a65da:;
  /* 115a65da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a65dd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a65e0 push edx */
  push32((uint32_t)(EDX));
  /* 115a65e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a65e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 115a65e7 push ecx */
  push32((uint32_t)(ECX));
  /* 115a65e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a65eb push edx */
  push32((uint32_t)(EDX));
  /* 115a65ec push 0x115cc9c0 */
  push32((uint32_t)(0x115cc9c0u));
  /* 115a65f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a65f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a65f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a65f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a65f9 call 0x115a4320 */
  push32(0x115a65feu); f_115a4320();
  /* 115a65fe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6601 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6604 jne 0x115a6607 */
  if (!C.zf) goto L_115a6607;
  /* 115a6606 int3  */
  x86_unimpl("int3 @ 0x115a6606");
L_115a6607:;
  /* 115a6607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a660b jne 0x115a65da */
  if (!C.zf) goto L_115a65da;
  /* 115a660d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_115a6614:;
  /* 115a6614 push 4 */
  push32((uint32_t)(0x4u));
  /* 115a6616 mov cl, byte ptr [0x115cfa90] */
  CL = (r8((uint32_t)(0x115cfa90)));
  /* 115a661c push ecx */
  push32((uint32_t)(ECX));
  /* 115a661d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6620 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a6623 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6626 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 115a662a push edx */
  push32((uint32_t)(EDX));
  /* 115a662b call 0x115a6370 */
  push32(0x115a6630u); f_115a6370();
  /* 115a6630 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6633 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6635 jne 0x115a6671 */
  if (!C.zf) goto L_115a6671;
L_115a6637:;
  /* 115a6637 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a663a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a663d push eax */
  push32((uint32_t)(EAX));
  /* 115a663e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6641 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115a6644 push edx */
  push32((uint32_t)(EDX));
  /* 115a6645 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a6648 push eax */
  push32((uint32_t)(EAX));
  /* 115a6649 push 0x115cc994 */
  push32((uint32_t)(0x115cc994u));
  /* 115a664e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6650 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6652 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6654 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6656 call 0x115a4320 */
  push32(0x115a665bu); f_115a4320();
  /* 115a665b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a665e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6661 jne 0x115a6664 */
  if (!C.zf) goto L_115a6664;
  /* 115a6663 int3  */
  x86_unimpl("int3 @ 0x115a6663");
L_115a6664:;
  /* 115a6664 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a6666 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a6668 jne 0x115a6637 */
  if (!C.zf) goto L_115a6637;
  /* 115a666a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_115a6671:;
  /* 115a6671 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6674 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6678 jne 0x115a66ca */
  if (!C.zf) goto L_115a66ca;
  /* 115a667a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a667d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a6680 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6681 mov dl, byte ptr [0x115cfa91] */
  DL = (r8((uint32_t)(0x115cfa91)));
  /* 115a6687 push edx */
  push32((uint32_t)(EDX));
  /* 115a6688 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a668b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a668e push eax */
  push32((uint32_t)(EAX));
  /* 115a668f call 0x115a6370 */
  push32(0x115a6694u); f_115a6370();
  /* 115a6694 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6699 jne 0x115a66ca */
  if (!C.zf) goto L_115a66ca;
L_115a669b:;
  /* 115a669b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a669e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a66a1 push ecx */
  push32((uint32_t)(ECX));
  /* 115a66a2 push 0x115ccab8 */
  push32((uint32_t)(0x115ccab8u));
  /* 115a66a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a66a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a66ab push 0 */
  push32((uint32_t)(0x0u));
  /* 115a66ad push 0 */
  push32((uint32_t)(0x0u));
  /* 115a66af call 0x115a4320 */
  push32(0x115a66b4u); f_115a4320();
  /* 115a66b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a66b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a66ba jne 0x115a66bd */
  if (!C.zf) goto L_115a66bd;
  /* 115a66bc int3  */
  x86_unimpl("int3 @ 0x115a66bc");
L_115a66bd:;
  /* 115a66bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a66bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a66c1 jne 0x115a669b */
  if (!C.zf) goto L_115a669b;
  /* 115a66c3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_115a66ca:;
  /* 115a66ca cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a66ce jne 0x115a6746 */
  if (!C.zf) goto L_115a6746;
  /* 115a66d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a66d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a66d7 je 0x115a670c */
  if (C.zf) goto L_115a670c;
L_115a66d9:;
  /* 115a66d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a66dc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115a66df push edx */
  push32((uint32_t)(EDX));
  /* 115a66e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a66e3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115a66e6 push ecx */
  push32((uint32_t)(ECX));
  /* 115a66e7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a66ea push edx */
  push32((uint32_t)(EDX));
  /* 115a66eb push 0x115cca98 */
  push32((uint32_t)(0x115cca98u));
  /* 115a66f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a66f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a66f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a66f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a66f8 call 0x115a4320 */
  push32(0x115a66fdu); f_115a4320();
  /* 115a66fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6700 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6703 jne 0x115a6706 */
  if (!C.zf) goto L_115a6706;
  /* 115a6705 int3  */
  x86_unimpl("int3 @ 0x115a6705");
L_115a6706:;
  /* 115a6706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6708 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a670a jne 0x115a66d9 */
  if (!C.zf) goto L_115a66d9;
L_115a670c:;
  /* 115a670c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a670f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115a6712 push edx */
  push32((uint32_t)(EDX));
  /* 115a6713 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6716 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6719 push eax */
  push32((uint32_t)(EAX));
  /* 115a671a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a671d push ecx */
  push32((uint32_t)(ECX));
  /* 115a671e push 0x115cca6c */
  push32((uint32_t)(0x115cca6cu));
  /* 115a6723 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6725 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6727 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6729 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a672b call 0x115a4320 */
  push32(0x115a6730u); f_115a4320();
  /* 115a6730 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6733 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6736 jne 0x115a6739 */
  if (!C.zf) goto L_115a6739;
  /* 115a6738 int3  */
  x86_unimpl("int3 @ 0x115a6738");
L_115a6739:;
  /* 115a6739 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a673b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a673d jne 0x115a670c */
  if (!C.zf) goto L_115a670c;
  /* 115a673f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115a6746:;
  /* 115a6746 jmp 0x115a6553 */
  goto L_115a6553;
L_115a674b:;
  /* 115a674b push 9 */
  push32((uint32_t)(0x9u));
  /* 115a674d call 0x115a8d00 */
  push32(0x115a6752u); f_115a8d00();
  /* 115a6752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6755 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115a6758:;
  /* 115a6758 pop edi */
  EDI = (pop32());
  /* 115a6759 pop esi */
  ESI = (pop32());
  /* 115a675a pop ebx */
  EBX = (pop32());
  /* 115a675b mov esp, ebp */
  ESP = (EBP);
  /* 115a675d pop ebp */
  EBP = (pop32());
  /* 115a675e ret  */
  ESPCHK(0x115a6400u, _esp0);
  ESP += 4; return;
}

/* FUN_10006770 @ 0x115a6770 (34 bytes, 13 insns) */
void f_115a6770(void) {
  FTRACE(0x115a6770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6770 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6771 mov ebp, esp */
  EBP = (ESP);
  /* 115a6773 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6774 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a6779 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a677c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6780 je 0x115a678b */
  if (C.zf) goto L_115a678b;
  /* 115a6782 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6785 mov dword ptr [0x115cfa84], ecx */
  w32((uint32_t)(0x115cfa84), (ECX));
L_115a678b:;
  /* 115a678b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a678e mov esp, ebp */
  ESP = (EBP);
  /* 115a6790 pop ebp */
  EBP = (pop32());
  /* 115a6791 ret  */
  ESPCHK(0x115a6770u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a0 @ 0x115a67a0 (103 bytes, 38 insns) */
void f_115a67a0(void) {
  FTRACE(0x115a67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a67a1 mov ebp, esp */
  EBP = (ESP);
  /* 115a67a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a67a4 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a67a9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 115a67ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a67ae jne 0x115a67b2 */
  if (!C.zf) goto L_115a67b2;
  /* 115a67b0 jmp 0x115a6803 */
  goto L_115a6803;
L_115a67b2:;
  /* 115a67b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a67b4 call 0x115a8c60 */
  push32(0x115a67b9u); f_115a8c60();
  /* 115a67b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a67bc mov ecx, dword ptr [0x115d1670] */
  ECX = (r32((uint32_t)(0x115d1670)));
  /* 115a67c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a67c5 jmp 0x115a67cf */
  goto L_115a67cf;
L_115a67c7:;
  /* 115a67c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a67ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a67cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a67cf:;
  /* 115a67cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a67d3 je 0x115a67f9 */
  if (C.zf) goto L_115a67f9;
  /* 115a67d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a67d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115a67db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a67e1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a67e4 jne 0x115a67f7 */
  if (!C.zf) goto L_115a67f7;
  /* 115a67e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a67e9 push eax */
  push32((uint32_t)(EAX));
  /* 115a67ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a67ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a67f0 push ecx */
  push32((uint32_t)(ECX));
  /* 115a67f1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x115a67f4u);
  /* 115a67f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a67f7:;
  /* 115a67f7 jmp 0x115a67c7 */
  goto L_115a67c7;
L_115a67f9:;
  /* 115a67f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a67fb call 0x115a8d00 */
  push32(0x115a6800u); f_115a8d00();
  /* 115a6800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a6803:;
  /* 115a6803 mov esp, ebp */
  ESP = (EBP);
  /* 115a6805 pop ebp */
  EBP = (pop32());
  /* 115a6806 ret  */
  ESPCHK(0x115a67a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x115a6810 (75 bytes, 28 insns) */
void f_115a6810(void) {
  FTRACE(0x115a6810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6810 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6811 mov ebp, esp */
  EBP = (ESP);
  /* 115a6813 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6814 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6818 je 0x115a684d */
  if (C.zf) goto L_115a684d;
  /* 115a681a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a681d push eax */
  push32((uint32_t)(EAX));
  /* 115a681e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6821 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6822 call dword ptr [0x115d43bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43bc))), 0x115a6828u);
  /* 115a6828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a682a jne 0x115a684d */
  if (!C.zf) goto L_115a684d;
  /* 115a682c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6830 je 0x115a6844 */
  if (C.zf) goto L_115a6844;
  /* 115a6832 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a6835 push edx */
  push32((uint32_t)(EDX));
  /* 115a6836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6839 push eax */
  push32((uint32_t)(EAX));
  /* 115a683a call dword ptr [0x115d4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4384))), 0x115a6840u);
  /* 115a6840 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6842 jne 0x115a684d */
  if (!C.zf) goto L_115a684d;
L_115a6844:;
  /* 115a6844 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115a684b jmp 0x115a6854 */
  goto L_115a6854;
L_115a684d:;
  /* 115a684d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115a6854:;
  /* 115a6854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6857 mov esp, ebp */
  ESP = (EBP);
  /* 115a6859 pop ebp */
  EBP = (pop32());
  /* 115a685a ret  */
  ESPCHK(0x115a6810u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x115a6860 (134 bytes, 50 insns) */
void f_115a6860(void) {
  FTRACE(0x115a6860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6860 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6861 mov ebp, esp */
  EBP = (ESP);
  /* 115a6863 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6864 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6868 jne 0x115a686e */
  if (!C.zf) goto L_115a686e;
  /* 115a686a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a686c jmp 0x115a68e2 */
  goto L_115a68e2;
L_115a686e:;
  /* 115a686e push 1 */
  push32((uint32_t)(0x1u));
  /* 115a6870 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 115a6872 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6875 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6878 push eax */
  push32((uint32_t)(EAX));
  /* 115a6879 call 0x115a6810 */
  push32(0x115a687eu); f_115a6810();
  /* 115a687e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6883 jne 0x115a6889 */
  if (!C.zf) goto L_115a6889;
  /* 115a6885 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6887 jmp 0x115a68e2 */
  goto L_115a68e2;
L_115a6889:;
  /* 115a6889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a688c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a688f push ecx */
  push32((uint32_t)(ECX));
  /* 115a6890 call 0x115a9560 */
  push32(0x115a6895u); f_115a9560();
  /* 115a6895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6898 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a689b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a689f je 0x115a68b6 */
  if (C.zf) goto L_115a68b6;
  /* 115a68a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a68a4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a68a7 push edx */
  push32((uint32_t)(EDX));
  /* 115a68a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a68ab push eax */
  push32((uint32_t)(EAX));
  /* 115a68ac call 0x115a95c0 */
  push32(0x115a68b1u); f_115a95c0();
  /* 115a68b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a68b4 jmp 0x115a68e2 */
  goto L_115a68e2;
L_115a68b6:;
  /* 115a68b6 mov ecx, dword ptr [0x115d1624] */
  ECX = (r32((uint32_t)(0x115d1624)));
  /* 115a68bc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 115a68c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a68c4 je 0x115a68cd */
  if (C.zf) goto L_115a68cd;
  /* 115a68c6 mov eax, 1 */
  EAX = (0x1u);
  /* 115a68cb jmp 0x115a68e2 */
  goto L_115a68e2;
L_115a68cd:;
  /* 115a68cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a68d0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a68d3 push edx */
  push32((uint32_t)(EDX));
  /* 115a68d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a68d6 mov eax, dword ptr [0x115d2fcc] */
  EAX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a68db push eax */
  push32((uint32_t)(EAX));
  /* 115a68dc call dword ptr [0x115d437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d437c))), 0x115a68e2u);
L_115a68e2:;
  /* 115a68e2 mov esp, ebp */
  ESP = (EBP);
  /* 115a68e4 pop ebp */
  EBP = (pop32());
  /* 115a68e5 ret  */
  ESPCHK(0x115a6860u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f0 @ 0x115a68f0 (227 bytes, 80 insns) */
void f_115a68f0(void) {
  FTRACE(0x115a68f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a68f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a68f1 mov ebp, esp */
  EBP = (ESP);
  /* 115a68f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a68f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a68f7 push eax */
  push32((uint32_t)(EAX));
  /* 115a68f8 call 0x115a6860 */
  push32(0x115a68fdu); f_115a6860();
  /* 115a68fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6902 jne 0x115a690b */
  if (!C.zf) goto L_115a690b;
  /* 115a6904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6906 jmp 0x115a69cf */
  goto L_115a69cf;
L_115a690b:;
  /* 115a690b push 9 */
  push32((uint32_t)(0x9u));
  /* 115a690d call 0x115a8c60 */
  push32(0x115a6912u); f_115a8c60();
  /* 115a6912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6915 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6918 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a691b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a691e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6921 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a6924 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a6929 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a692c je 0x115a6950 */
  if (C.zf) goto L_115a6950;
  /* 115a692e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6931 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6935 je 0x115a6950 */
  if (C.zf) goto L_115a6950;
  /* 115a6937 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a693a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a693d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a6942 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6945 je 0x115a6950 */
  if (C.zf) goto L_115a6950;
  /* 115a6947 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a694a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a694e jne 0x115a69c3 */
  if (!C.zf) goto L_115a69c3;
L_115a6950:;
  /* 115a6950 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a6952 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a6955 push edx */
  push32((uint32_t)(EDX));
  /* 115a6956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6959 push eax */
  push32((uint32_t)(EAX));
  /* 115a695a call 0x115a6810 */
  push32(0x115a695fu); f_115a6810();
  /* 115a695f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6964 je 0x115a69c3 */
  if (C.zf) goto L_115a69c3;
  /* 115a6966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6969 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115a696c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a696f jne 0x115a69c3 */
  if (!C.zf) goto L_115a69c3;
  /* 115a6971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6974 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 115a6977 cmp ecx, dword ptr [0x115cfa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115cfa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a697d jg 0x115a69c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_115a69c3;
  /* 115a697f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6983 je 0x115a6990 */
  if (C.zf) goto L_115a6990;
  /* 115a6985 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a6988 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a698b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 115a698e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115a6990:;
  /* 115a6990 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6994 je 0x115a69a1 */
  if (C.zf) goto L_115a69a1;
  /* 115a6996 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a6999 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a699c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115a699f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115a69a1:;
  /* 115a69a1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a69a5 je 0x115a69b2 */
  if (C.zf) goto L_115a69b2;
  /* 115a69a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a69aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a69ad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115a69b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115a69b2:;
  /* 115a69b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a69b4 call 0x115a8d00 */
  push32(0x115a69b9u); f_115a8d00();
  /* 115a69b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a69bc mov eax, 1 */
  EAX = (0x1u);
  /* 115a69c1 jmp 0x115a69cf */
  goto L_115a69cf;
L_115a69c3:;
  /* 115a69c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a69c5 call 0x115a8d00 */
  push32(0x115a69cau); f_115a8d00();
  /* 115a69ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a69cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a69cf:;
  /* 115a69cf mov esp, ebp */
  ESP = (EBP);
  /* 115a69d1 pop ebp */
  EBP = (pop32());
  /* 115a69d2 ret  */
  ESPCHK(0x115a68f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069e0 @ 0x115a69e0 (28 bytes, 11 insns) */
void f_115a69e0(void) {
  FTRACE(0x115a69e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a69e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a69e1 mov ebp, esp */
  EBP = (ESP);
  /* 115a69e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a69e4 mov eax, dword ptr [0x115d2fd8] */
  EAX = (r32((uint32_t)(0x115d2fd8)));
  /* 115a69e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a69ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a69ef mov dword ptr [0x115d2fd8], ecx */
  w32((uint32_t)(0x115d2fd8), (ECX));
  /* 115a69f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a69f8 mov esp, ebp */
  ESP = (EBP);
  /* 115a69fa pop ebp */
  EBP = (pop32());
  /* 115a69fb ret  */
  ESPCHK(0x115a69e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x115a6a00 (362 bytes, 116 insns) */
void f_115a6a00(void) {
  FTRACE(0x115a6a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6a00 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6a01 mov ebp, esp */
  EBP = (ESP);
  /* 115a6a03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6a06 push ebx */
  push32((uint32_t)(EBX));
  /* 115a6a07 push esi */
  push32((uint32_t)(ESI));
  /* 115a6a08 push edi */
  push32((uint32_t)(EDI));
  /* 115a6a09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6a0d jne 0x115a6a3a */
  if (!C.zf) goto L_115a6a3a;
L_115a6a0f:;
  /* 115a6a0f push 0x115ccbcc */
  push32((uint32_t)(0x115ccbccu));
  /* 115a6a14 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a6a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6a21 call 0x115a4320 */
  push32(0x115a6a26u); f_115a4320();
  /* 115a6a26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6a29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6a2c jne 0x115a6a2f */
  if (!C.zf) goto L_115a6a2f;
  /* 115a6a2e int3  */
  x86_unimpl("int3 @ 0x115a6a2e");
L_115a6a2f:;
  /* 115a6a2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6a33 jne 0x115a6a0f */
  if (!C.zf) goto L_115a6a0f;
  /* 115a6a35 jmp 0x115a6b63 */
  goto L_115a6b63;
L_115a6a3a:;
  /* 115a6a3a push 9 */
  push32((uint32_t)(0x9u));
  /* 115a6a3c call 0x115a8c60 */
  push32(0x115a6a41u); f_115a8c60();
  /* 115a6a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6a44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6a47 mov edx, dword ptr [0x115d1670] */
  EDX = (r32((uint32_t)(0x115d1670)));
  /* 115a6a4d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115a6a4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115a6a56 jmp 0x115a6a61 */
  goto L_115a6a61;
L_115a6a58:;
  /* 115a6a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6a5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6a5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a6a61:;
  /* 115a6a61 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6a65 jge 0x115a6a85 */
  if ((C.sf==C.of)) goto L_115a6a85;
  /* 115a6a67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6a6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6a6d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 115a6a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6a78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6a7b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 115a6a83 jmp 0x115a6a58 */
  goto L_115a6a58;
L_115a6a85:;
  /* 115a6a85 mov edx, dword ptr [0x115d1670] */
  EDX = (r32((uint32_t)(0x115d1670)));
  /* 115a6a8b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115a6a8e jmp 0x115a6a98 */
  goto L_115a6a98;
L_115a6a90:;
  /* 115a6a90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6a93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a6a95 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115a6a98:;
  /* 115a6a98 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6a9c je 0x115a6b41 */
  if (C.zf) goto L_115a6b41;
  /* 115a6aa2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6aa5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a6aa8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a6aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6aaf jl 0x115a6b17 */
  if ((C.sf!=C.of)) goto L_115a6b17;
  /* 115a6ab1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6ab4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115a6ab7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a6abd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6ac0 jge 0x115a6b17 */
  if ((C.sf==C.of)) goto L_115a6b17;
  /* 115a6ac2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6ac5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115a6ac8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a6ace mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6ad1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 115a6ad5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6ad8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6adb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115a6ade and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a6ae4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6ae7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 115a6aeb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6aee mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a6af1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a6af6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6af9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 115a6afd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6b00 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6b03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6b06 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 115a6b09 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a6b0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6b11 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 115a6b15 jmp 0x115a6b3c */
  goto L_115a6b3c;
L_115a6b17:;
  /* 115a6b17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6b1a push edx */
  push32((uint32_t)(EDX));
  /* 115a6b1b push 0x115ccba8 */
  push32((uint32_t)(0x115ccba8u));
  /* 115a6b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6b28 call 0x115a4320 */
  push32(0x115a6b2du); f_115a4320();
  /* 115a6b2d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6b30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6b33 jne 0x115a6b36 */
  if (!C.zf) goto L_115a6b36;
  /* 115a6b35 int3  */
  x86_unimpl("int3 @ 0x115a6b35");
L_115a6b36:;
  /* 115a6b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6b3a jne 0x115a6b17 */
  if (!C.zf) goto L_115a6b17;
L_115a6b3c:;
  /* 115a6b3c jmp 0x115a6a90 */
  goto L_115a6a90;
L_115a6b41:;
  /* 115a6b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6b44 mov edx, dword ptr [0x115d1678] */
  EDX = (r32((uint32_t)(0x115d1678)));
  /* 115a6b4a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 115a6b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6b50 mov ecx, dword ptr [0x115d166c] */
  ECX = (r32((uint32_t)(0x115d166c)));
  /* 115a6b56 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 115a6b59 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a6b5b call 0x115a8d00 */
  push32(0x115a6b60u); f_115a8d00();
  /* 115a6b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a6b63:;
  /* 115a6b63 pop edi */
  EDI = (pop32());
  /* 115a6b64 pop esi */
  ESI = (pop32());
  /* 115a6b65 pop ebx */
  EBX = (pop32());
  /* 115a6b66 mov esp, ebp */
  ESP = (EBP);
  /* 115a6b68 pop ebp */
  EBP = (pop32());
  /* 115a6b69 ret  */
  ESPCHK(0x115a6a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x115a6b70 (291 bytes, 95 insns) */
void f_115a6b70(void) {
  FTRACE(0x115a6b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6b70 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6b71 mov ebp, esp */
  EBP = (ESP);
  /* 115a6b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6b76 push ebx */
  push32((uint32_t)(EBX));
  /* 115a6b77 push esi */
  push32((uint32_t)(ESI));
  /* 115a6b78 push edi */
  push32((uint32_t)(EDI));
  /* 115a6b79 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115a6b80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6b84 je 0x115a6b92 */
  if (C.zf) goto L_115a6b92;
  /* 115a6b86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6b8a je 0x115a6b92 */
  if (C.zf) goto L_115a6b92;
  /* 115a6b8c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6b90 jne 0x115a6bc0 */
  if (!C.zf) goto L_115a6bc0;
L_115a6b92:;
  /* 115a6b92 push 0x115ccbf4 */
  push32((uint32_t)(0x115ccbf4u));
  /* 115a6b97 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a6b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6ba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6ba4 call 0x115a4320 */
  push32(0x115a6ba9u); f_115a4320();
  /* 115a6ba9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6bac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6baf jne 0x115a6bb2 */
  if (!C.zf) goto L_115a6bb2;
  /* 115a6bb1 int3  */
  x86_unimpl("int3 @ 0x115a6bb1");
L_115a6bb2:;
  /* 115a6bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6bb6 jne 0x115a6b92 */
  if (!C.zf) goto L_115a6b92;
  /* 115a6bb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a6bbb jmp 0x115a6c8c */
  goto L_115a6c8c;
L_115a6bc0:;
  /* 115a6bc0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115a6bc7 jmp 0x115a6bd2 */
  goto L_115a6bd2;
L_115a6bc9:;
  /* 115a6bc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6bcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6bcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a6bd2:;
  /* 115a6bd2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6bd6 jge 0x115a6c5c */
  if ((C.sf==C.of)) goto L_115a6c5c;
  /* 115a6bdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6bdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a6be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6be5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115a6be8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 115a6bec sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6bf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6bf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6bf6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 115a6bfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6bfd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a6c00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6c03 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115a6c06 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 115a6c0a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6c11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6c14 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 115a6c18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6c1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6c1e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6c23 jne 0x115a6c32 */
  if (!C.zf) goto L_115a6c32;
  /* 115a6c25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6c28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6c2b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6c30 je 0x115a6c57 */
  if (C.zf) goto L_115a6c57;
L_115a6c32:;
  /* 115a6c32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6c36 je 0x115a6c57 */
  if (C.zf) goto L_115a6c57;
  /* 115a6c38 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6c3c jne 0x115a6c50 */
  if (!C.zf) goto L_115a6c50;
  /* 115a6c3e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6c42 jne 0x115a6c57 */
  if (!C.zf) goto L_115a6c57;
  /* 115a6c44 mov eax, dword ptr [0x115cfa84] */
  EAX = (r32((uint32_t)(0x115cfa84)));
  /* 115a6c49 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 115a6c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6c4e je 0x115a6c57 */
  if (C.zf) goto L_115a6c57;
L_115a6c50:;
  /* 115a6c50 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_115a6c57:;
  /* 115a6c57 jmp 0x115a6bc9 */
  goto L_115a6bc9;
L_115a6c5c:;
  /* 115a6c5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a6c5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a6c62 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 115a6c65 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6c68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6c6b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 115a6c6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a6c71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a6c74 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 115a6c77 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6c7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6c7d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 115a6c80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6c83 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115a6c89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115a6c8c:;
  /* 115a6c8c pop edi */
  EDI = (pop32());
  /* 115a6c8d pop esi */
  ESI = (pop32());
  /* 115a6c8e pop ebx */
  EBX = (pop32());
  /* 115a6c8f mov esp, ebp */
  ESP = (EBP);
  /* 115a6c91 pop ebp */
  EBP = (pop32());
  /* 115a6c92 ret  */
  ESPCHK(0x115a6b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x115a6ca0 (697 bytes, 253 insns) */
void f_115a6ca0(void) {
  FTRACE(0x115a6ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6ca1 mov ebp, esp */
  EBP = (ESP);
  /* 115a6ca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 115a6ca7 push esi */
  push32((uint32_t)(ESI));
  /* 115a6ca8 push edi */
  push32((uint32_t)(EDI));
  /* 115a6ca9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115a6cb0 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a6cb2 call 0x115a8c60 */
  push32(0x115a6cb7u); f_115a8c60();
  /* 115a6cb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a6cba:;
  /* 115a6cba push 0x115cccec */
  push32((uint32_t)(0x115cccecu));
  /* 115a6cbf push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a6cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6cca push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6ccc call 0x115a4320 */
  push32(0x115a6cd1u); f_115a4320();
  /* 115a6cd1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6cd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6cd7 jne 0x115a6cda */
  if (!C.zf) goto L_115a6cda;
  /* 115a6cd9 int3  */
  x86_unimpl("int3 @ 0x115a6cd9");
L_115a6cda:;
  /* 115a6cda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6cdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6cde jne 0x115a6cba */
  if (!C.zf) goto L_115a6cba;
  /* 115a6ce0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6ce4 je 0x115a6cee */
  if (C.zf) goto L_115a6cee;
  /* 115a6ce6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6ce9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a6ceb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115a6cee:;
  /* 115a6cee mov eax, dword ptr [0x115d1670] */
  EAX = (r32((uint32_t)(0x115d1670)));
  /* 115a6cf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a6cf6 jmp 0x115a6d00 */
  goto L_115a6d00;
L_115a6cf8:;
  /* 115a6cf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6cfb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a6cfd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115a6d00:;
  /* 115a6d00 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6d04 je 0x115a6f22 */
  if (C.zf) goto L_115a6f22;
  /* 115a6d0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6d0d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6d10 je 0x115a6f22 */
  if (C.zf) goto L_115a6f22;
  /* 115a6d16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6d19 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115a6d1c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a6d22 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6d25 je 0x115a6d54 */
  if (C.zf) goto L_115a6d54;
  /* 115a6d27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6d2a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115a6d2d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a6d33 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a6d35 je 0x115a6d54 */
  if (C.zf) goto L_115a6d54;
  /* 115a6d37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6d3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a6d3d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a6d42 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6d45 jne 0x115a6d59 */
  if (!C.zf) goto L_115a6d59;
  /* 115a6d47 mov ecx, dword ptr [0x115cfa84] */
  ECX = (r32((uint32_t)(0x115cfa84)));
  /* 115a6d4d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 115a6d50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a6d52 jne 0x115a6d59 */
  if (!C.zf) goto L_115a6d59;
L_115a6d54:;
  /* 115a6d54 jmp 0x115a6f1d */
  goto L_115a6f1d;
L_115a6d59:;
  /* 115a6d59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6d5c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6d60 je 0x115a6dd2 */
  if (C.zf) goto L_115a6dd2;
  /* 115a6d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6d64 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a6d66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6d69 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115a6d6c push ecx */
  push32((uint32_t)(ECX));
  /* 115a6d6d call 0x115a6810 */
  push32(0x115a6d72u); f_115a6810();
  /* 115a6d72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6d77 jne 0x115a6da3 */
  if (!C.zf) goto L_115a6da3;
L_115a6d79:;
  /* 115a6d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6d7c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115a6d7f push eax */
  push32((uint32_t)(EAX));
  /* 115a6d80 push 0x115cccd8 */
  push32((uint32_t)(0x115cccd8u));
  /* 115a6d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6d8d call 0x115a4320 */
  push32(0x115a6d92u); f_115a4320();
  /* 115a6d92 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6d95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6d98 jne 0x115a6d9b */
  if (!C.zf) goto L_115a6d9b;
  /* 115a6d9a int3  */
  x86_unimpl("int3 @ 0x115a6d9a");
L_115a6d9b:;
  /* 115a6d9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a6d9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a6d9f jne 0x115a6d79 */
  if (!C.zf) goto L_115a6d79;
  /* 115a6da1 jmp 0x115a6dd2 */
  goto L_115a6dd2;
L_115a6da3:;
  /* 115a6da3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6da6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115a6da9 push eax */
  push32((uint32_t)(EAX));
  /* 115a6daa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6dad mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115a6db0 push edx */
  push32((uint32_t)(EDX));
  /* 115a6db1 push 0x115ccccc */
  push32((uint32_t)(0x115cccccu));
  /* 115a6db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6db8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6dba push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6dbe call 0x115a4320 */
  push32(0x115a6dc3u); f_115a4320();
  /* 115a6dc3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6dc6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6dc9 jne 0x115a6dcc */
  if (!C.zf) goto L_115a6dcc;
  /* 115a6dcb int3  */
  x86_unimpl("int3 @ 0x115a6dcb");
L_115a6dcc:;
  /* 115a6dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6dd0 jne 0x115a6da3 */
  if (!C.zf) goto L_115a6da3;
L_115a6dd2:;
  /* 115a6dd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6dd5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115a6dd8 push edx */
  push32((uint32_t)(EDX));
  /* 115a6dd9 push 0x115cccc4 */
  push32((uint32_t)(0x115cccc4u));
  /* 115a6dde push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6de6 call 0x115a4320 */
  push32(0x115a6debu); f_115a4320();
  /* 115a6deb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6dee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6df1 jne 0x115a6df4 */
  if (!C.zf) goto L_115a6df4;
  /* 115a6df3 int3  */
  x86_unimpl("int3 @ 0x115a6df3");
L_115a6df4:;
  /* 115a6df4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a6df6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a6df8 jne 0x115a6dd2 */
  if (!C.zf) goto L_115a6dd2;
  /* 115a6dfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6dfd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115a6e00 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a6e06 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6e09 jne 0x115a6e7c */
  if (!C.zf) goto L_115a6e7c;
L_115a6e0b:;
  /* 115a6e0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a6e11 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6e12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e15 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a6e18 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 115a6e1b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a6e20 push eax */
  push32((uint32_t)(EAX));
  /* 115a6e21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e24 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6e27 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6e28 push 0x115ccc90 */
  push32((uint32_t)(0x115ccc90u));
  /* 115a6e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6e35 call 0x115a4320 */
  push32(0x115a6e3au); f_115a4320();
  /* 115a6e3a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6e3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6e40 jne 0x115a6e43 */
  if (!C.zf) goto L_115a6e43;
  /* 115a6e42 int3  */
  x86_unimpl("int3 @ 0x115a6e42");
L_115a6e43:;
  /* 115a6e43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a6e45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a6e47 jne 0x115a6e0b */
  if (!C.zf) goto L_115a6e0b;
  /* 115a6e49 cmp dword ptr [0x115d2fd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d2fd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6e50 je 0x115a6e6b */
  if (C.zf) goto L_115a6e6b;
  /* 115a6e52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e55 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a6e58 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6e59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e5c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6e5f push edx */
  push32((uint32_t)(EDX));
  /* 115a6e60 call dword ptr [0x115d2fd8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d2fd8))), 0x115a6e66u);
  /* 115a6e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6e69 jmp 0x115a6e77 */
  goto L_115a6e77;
L_115a6e6b:;
  /* 115a6e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e6e push eax */
  push32((uint32_t)(EAX));
  /* 115a6e6f call 0x115a6f60 */
  push32(0x115a6e74u); f_115a6f60();
  /* 115a6e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a6e77:;
  /* 115a6e77 jmp 0x115a6f1d */
  goto L_115a6f1d;
L_115a6e7c:;
  /* 115a6e7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e7f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6e83 jne 0x115a6ec2 */
  if (!C.zf) goto L_115a6ec2;
L_115a6e85:;
  /* 115a6e85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e88 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a6e8b push eax */
  push32((uint32_t)(EAX));
  /* 115a6e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6e8f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6e92 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6e93 push 0x115ccc68 */
  push32((uint32_t)(0x115ccc68u));
  /* 115a6e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6ea0 call 0x115a4320 */
  push32(0x115a6ea5u); f_115a4320();
  /* 115a6ea5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6ea8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6eab jne 0x115a6eae */
  if (!C.zf) goto L_115a6eae;
  /* 115a6ead int3  */
  x86_unimpl("int3 @ 0x115a6ead");
L_115a6eae:;
  /* 115a6eae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a6eb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a6eb2 jne 0x115a6e85 */
  if (!C.zf) goto L_115a6e85;
  /* 115a6eb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6eb7 push eax */
  push32((uint32_t)(EAX));
  /* 115a6eb8 call 0x115a6f60 */
  push32(0x115a6ebdu); f_115a6f60();
  /* 115a6ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6ec0 jmp 0x115a6f1d */
  goto L_115a6f1d;
L_115a6ec2:;
  /* 115a6ec2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6ec5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115a6ec8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a6ece cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6ed1 jne 0x115a6f1d */
  if (!C.zf) goto L_115a6f1d;
L_115a6ed3:;
  /* 115a6ed3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6ed6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115a6ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6eda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6edd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115a6ee0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 115a6ee3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a6ee8 push eax */
  push32((uint32_t)(EAX));
  /* 115a6ee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6eec add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6eef push ecx */
  push32((uint32_t)(ECX));
  /* 115a6ef0 push 0x115ccc34 */
  push32((uint32_t)(0x115ccc34u));
  /* 115a6ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6efb push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6efd call 0x115a4320 */
  push32(0x115a6f02u); f_115a4320();
  /* 115a6f02 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6f05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6f08 jne 0x115a6f0b */
  if (!C.zf) goto L_115a6f0b;
  /* 115a6f0a int3  */
  x86_unimpl("int3 @ 0x115a6f0a");
L_115a6f0b:;
  /* 115a6f0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a6f0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a6f0f jne 0x115a6ed3 */
  if (!C.zf) goto L_115a6ed3;
  /* 115a6f11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a6f14 push eax */
  push32((uint32_t)(EAX));
  /* 115a6f15 call 0x115a6f60 */
  push32(0x115a6f1au); f_115a6f60();
  /* 115a6f1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a6f1d:;
  /* 115a6f1d jmp 0x115a6cf8 */
  goto L_115a6cf8;
L_115a6f22:;
  /* 115a6f22 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a6f24 call 0x115a8d00 */
  push32(0x115a6f29u); f_115a8d00();
  /* 115a6f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a6f2c:;
  /* 115a6f2c push 0x115ccc1c */
  push32((uint32_t)(0x115ccc1cu));
  /* 115a6f31 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a6f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a6f3e call 0x115a4320 */
  push32(0x115a6f43u); f_115a4320();
  /* 115a6f43 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6f46 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6f49 jne 0x115a6f4c */
  if (!C.zf) goto L_115a6f4c;
  /* 115a6f4b int3  */
  x86_unimpl("int3 @ 0x115a6f4b");
L_115a6f4c:;
  /* 115a6f4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a6f4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a6f50 jne 0x115a6f2c */
  if (!C.zf) goto L_115a6f2c;
  /* 115a6f52 pop edi */
  EDI = (pop32());
  /* 115a6f53 pop esi */
  ESI = (pop32());
  /* 115a6f54 pop ebx */
  EBX = (pop32());
  /* 115a6f55 mov esp, ebp */
  ESP = (EBP);
  /* 115a6f57 pop ebp */
  EBP = (pop32());
  /* 115a6f58 ret  */
  ESPCHK(0x115a6ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f60 @ 0x115a6f60 (276 bytes, 89 insns) */
void f_115a6f60(void) {
  FTRACE(0x115a6f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a6f60 push ebp */
  push32((uint32_t)(EBP));
  /* 115a6f61 mov ebp, esp */
  EBP = (ESP);
  /* 115a6f63 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a6f66 push ebx */
  push32((uint32_t)(EBX));
  /* 115a6f67 push esi */
  push32((uint32_t)(ESI));
  /* 115a6f68 push edi */
  push32((uint32_t)(EDI));
  /* 115a6f69 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 115a6f70 jmp 0x115a6f7b */
  goto L_115a6f7b;
L_115a6f72:;
  /* 115a6f72 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115a6f75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6f78 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_115a6f7b:;
  /* 115a6f7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6f7e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6f82 jge 0x115a6f8f */
  if ((C.sf==C.of)) goto L_115a6f8f;
  /* 115a6f84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6f87 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 115a6f8a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 115a6f8d jmp 0x115a6f96 */
  goto L_115a6f96;
L_115a6f8f:;
  /* 115a6f8f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_115a6f96:;
  /* 115a6f96 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115a6f99 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6f9c jge 0x115a703c */
  if ((C.sf==C.of)) goto L_115a703c;
  /* 115a6fa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a6fa5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6fa8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 115a6fab mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 115a6fae cmp dword ptr [0x115cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6fb5 jle 0x115a6fd3 */
  if ((C.zf||C.sf!=C.of)) goto L_115a6fd3;
  /* 115a6fb7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 115a6fbc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a6fbf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a6fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 115a6fc6 call 0x115ab270 */
  push32(0x115a6fcbu); f_115ab270();
  /* 115a6fcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a6fce mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 115a6fd1 jmp 0x115a6ff0 */
  goto L_115a6ff0;
L_115a6fd3:;
  /* 115a6fd3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a6fd6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a6fdc mov eax, dword ptr [0x115cfc98] */
  EAX = (r32((uint32_t)(0x115cfc98)));
  /* 115a6fe1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a6fe3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 115a6fe7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 115a6fed mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_115a6ff0:;
  /* 115a6ff0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a6ff4 je 0x115a7004 */
  if (C.zf) goto L_115a7004;
  /* 115a6ff6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a6ff9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a6fff mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 115a7002 jmp 0x115a700b */
  goto L_115a700b;
L_115a7004:;
  /* 115a7004 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_115a700b:;
  /* 115a700b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115a700e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 115a7011 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 115a7015 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 115a7018 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a701e push edx */
  push32((uint32_t)(EDX));
  /* 115a701f push 0x115ccd10 */
  push32((uint32_t)(0x115ccd10u));
  /* 115a7024 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115a7027 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a702a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 115a702e push ecx */
  push32((uint32_t)(ECX));
  /* 115a702f call 0x115ab170 */
  push32(0x115a7034u); f_115ab170();
  /* 115a7034 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7037 jmp 0x115a6f72 */
  goto L_115a6f72;
L_115a703c:;
  /* 115a703c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 115a703f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_115a7044:;
  /* 115a7044 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 115a7047 push eax */
  push32((uint32_t)(EAX));
  /* 115a7048 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 115a704b push ecx */
  push32((uint32_t)(ECX));
  /* 115a704c push 0x115ccd00 */
  push32((uint32_t)(0x115ccd00u));
  /* 115a7051 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7053 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7055 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7057 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7059 call 0x115a4320 */
  push32(0x115a705eu); f_115a4320();
  /* 115a705e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7061 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7064 jne 0x115a7067 */
  if (!C.zf) goto L_115a7067;
  /* 115a7066 int3  */
  x86_unimpl("int3 @ 0x115a7066");
L_115a7067:;
  /* 115a7067 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a7069 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a706b jne 0x115a7044 */
  if (!C.zf) goto L_115a7044;
  /* 115a706d pop edi */
  EDI = (pop32());
  /* 115a706e pop esi */
  ESI = (pop32());
  /* 115a706f pop ebx */
  EBX = (pop32());
  /* 115a7070 mov esp, ebp */
  ESP = (EBP);
  /* 115a7072 pop ebp */
  EBP = (pop32());
  /* 115a7073 ret  */
  ESPCHK(0x115a6f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x115a7080 (116 bytes, 46 insns) */
void f_115a7080(void) {
  FTRACE(0x115a7080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7080 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7081 mov ebp, esp */
  EBP = (ESP);
  /* 115a7083 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7086 push ebx */
  push32((uint32_t)(EBX));
  /* 115a7087 push esi */
  push32((uint32_t)(ESI));
  /* 115a7088 push edi */
  push32((uint32_t)(EDI));
  /* 115a7089 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 115a708c push eax */
  push32((uint32_t)(EAX));
  /* 115a708d call 0x115a6a00 */
  push32(0x115a7092u); f_115a6a00();
  /* 115a7092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7095 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7099 jne 0x115a70b4 */
  if (!C.zf) goto L_115a70b4;
  /* 115a709b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a709f jne 0x115a70b4 */
  if (!C.zf) goto L_115a70b4;
  /* 115a70a1 mov ecx, dword ptr [0x115cfa84] */
  ECX = (r32((uint32_t)(0x115cfa84)));
  /* 115a70a7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 115a70aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a70ac je 0x115a70eb */
  if (C.zf) goto L_115a70eb;
  /* 115a70ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a70b2 je 0x115a70eb */
  if (C.zf) goto L_115a70eb;
L_115a70b4:;
  /* 115a70b4 push 0x115ccd18 */
  push32((uint32_t)(0x115ccd18u));
  /* 115a70b9 push 0x115cc6e4 */
  push32((uint32_t)(0x115cc6e4u));
  /* 115a70be push 0 */
  push32((uint32_t)(0x0u));
  /* 115a70c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a70c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a70c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a70c6 call 0x115a4320 */
  push32(0x115a70cbu); f_115a4320();
  /* 115a70cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a70ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a70d1 jne 0x115a70d4 */
  if (!C.zf) goto L_115a70d4;
  /* 115a70d3 int3  */
  x86_unimpl("int3 @ 0x115a70d3");
L_115a70d4:;
  /* 115a70d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a70d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a70d8 jne 0x115a70b4 */
  if (!C.zf) goto L_115a70b4;
  /* 115a70da push 0 */
  push32((uint32_t)(0x0u));
  /* 115a70dc call 0x115a6ca0 */
  push32(0x115a70e1u); f_115a6ca0();
  /* 115a70e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a70e4 mov eax, 1 */
  EAX = (0x1u);
  /* 115a70e9 jmp 0x115a70ed */
  goto L_115a70ed;
L_115a70eb:;
  /* 115a70eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a70ed:;
  /* 115a70ed pop edi */
  EDI = (pop32());
  /* 115a70ee pop esi */
  ESI = (pop32());
  /* 115a70ef pop ebx */
  EBX = (pop32());
  /* 115a70f0 mov esp, ebp */
  ESP = (EBP);
  /* 115a70f2 pop ebp */
  EBP = (pop32());
  /* 115a70f3 ret  */
  ESPCHK(0x115a7080u, _esp0);
  ESP += 4; return;
}

/* FUN_10007100 @ 0x115a7100 (197 bytes, 79 insns) */
void f_115a7100(void) {
  FTRACE(0x115a7100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7100 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7101 mov ebp, esp */
  EBP = (ESP);
  /* 115a7103 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7104 push ebx */
  push32((uint32_t)(EBX));
  /* 115a7105 push esi */
  push32((uint32_t)(ESI));
  /* 115a7106 push edi */
  push32((uint32_t)(EDI));
  /* 115a7107 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a710b jne 0x115a7112 */
  if (!C.zf) goto L_115a7112;
  /* 115a710d jmp 0x115a71be */
  goto L_115a71be;
L_115a7112:;
  /* 115a7112 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115a7119 jmp 0x115a7124 */
  goto L_115a7124;
L_115a711b:;
  /* 115a711b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a711e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7121 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a7124:;
  /* 115a7124 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7128 jge 0x115a716e */
  if ((C.sf==C.of)) goto L_115a716e;
L_115a712a:;
  /* 115a712a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a712d mov edx, dword ptr [ecx*4 + 0x115cfa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfa94)));
  /* 115a7134 push edx */
  push32((uint32_t)(EDX));
  /* 115a7135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7138 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a713b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 115a713f push edx */
  push32((uint32_t)(EDX));
  /* 115a7140 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7143 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7146 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 115a714a push edx */
  push32((uint32_t)(EDX));
  /* 115a714b push 0x115ccd74 */
  push32((uint32_t)(0x115ccd74u));
  /* 115a7150 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7152 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7154 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7156 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7158 call 0x115a4320 */
  push32(0x115a715du); f_115a4320();
  /* 115a715d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7160 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7163 jne 0x115a7166 */
  if (!C.zf) goto L_115a7166;
  /* 115a7165 int3  */
  x86_unimpl("int3 @ 0x115a7165");
L_115a7166:;
  /* 115a7166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a716a jne 0x115a712a */
  if (!C.zf) goto L_115a712a;
  /* 115a716c jmp 0x115a711b */
  goto L_115a711b;
L_115a716e:;
  /* 115a716e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7171 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 115a7174 push edx */
  push32((uint32_t)(EDX));
  /* 115a7175 push 0x115ccd50 */
  push32((uint32_t)(0x115ccd50u));
  /* 115a717a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a717c push 0 */
  push32((uint32_t)(0x0u));
  /* 115a717e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7180 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7182 call 0x115a4320 */
  push32(0x115a7187u); f_115a4320();
  /* 115a7187 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a718a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a718d jne 0x115a7190 */
  if (!C.zf) goto L_115a7190;
  /* 115a718f int3  */
  x86_unimpl("int3 @ 0x115a718f");
L_115a7190:;
  /* 115a7190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a7194 jne 0x115a716e */
  if (!C.zf) goto L_115a716e;
L_115a7196:;
  /* 115a7196 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7199 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 115a719c push edx */
  push32((uint32_t)(EDX));
  /* 115a719d push 0x115ccd30 */
  push32((uint32_t)(0x115ccd30u));
  /* 115a71a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a71a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a71a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a71a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a71aa call 0x115a4320 */
  push32(0x115a71afu); f_115a4320();
  /* 115a71af add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a71b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a71b5 jne 0x115a71b8 */
  if (!C.zf) goto L_115a71b8;
  /* 115a71b7 int3  */
  x86_unimpl("int3 @ 0x115a71b7");
L_115a71b8:;
  /* 115a71b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a71ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a71bc jne 0x115a7196 */
  if (!C.zf) goto L_115a7196;
L_115a71be:;
  /* 115a71be pop edi */
  EDI = (pop32());
  /* 115a71bf pop esi */
  ESI = (pop32());
  /* 115a71c0 pop ebx */
  EBX = (pop32());
  /* 115a71c1 mov esp, ebp */
  ESP = (EBP);
  /* 115a71c3 pop ebp */
  EBP = (pop32());
  /* 115a71c4 ret  */
  ESPCHK(0x115a7100u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x115a71d0 (329 bytes, 102 insns) */
void f_115a71d0(void) {
  FTRACE(0x115a71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a71d1 mov ebp, esp */
  EBP = (ESP);
  /* 115a71d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a71d6 cmp dword ptr [0x115d3150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d3150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a71dd jne 0x115a71e4 */
  if (!C.zf) goto L_115a71e4;
  /* 115a71df call 0x115abb10 */
  push32(0x115a71e4u); f_115abb10();
L_115a71e4:;
  /* 115a71e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115a71eb mov eax, dword ptr [0x115d160c] */
  EAX = (r32((uint32_t)(0x115d160c)));
  /* 115a71f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a71f3:;
  /* 115a71f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a71f6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115a71f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a71fb je 0x115a7229 */
  if (C.zf) goto L_115a7229;
  /* 115a71fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7200 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a7203 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7206 je 0x115a7211 */
  if (C.zf) goto L_115a7211;
  /* 115a7208 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a720b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a720e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115a7211:;
  /* 115a7211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7214 push eax */
  push32((uint32_t)(EAX));
  /* 115a7215 call 0x115a8090 */
  push32(0x115a721au); f_115a8090();
  /* 115a721a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a721d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7220 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115a7224 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a7227 jmp 0x115a71f3 */
  goto L_115a71f3;
L_115a7229:;
  /* 115a7229 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 115a722b push 0x115ccd94 */
  push32((uint32_t)(0x115ccd94u));
  /* 115a7230 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a7232 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7235 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 115a723c push ecx */
  push32((uint32_t)(ECX));
  /* 115a723d call 0x115a5260 */
  push32(0x115a7242u); f_115a5260();
  /* 115a7242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7245 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a7248 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a724b mov dword ptr [0x115d1640], edx */
  w32((uint32_t)(0x115d1640), (EDX));
  /* 115a7251 cmp dword ptr [0x115d1640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7258 jne 0x115a7264 */
  if (!C.zf) goto L_115a7264;
  /* 115a725a push 9 */
  push32((uint32_t)(0x9u));
  /* 115a725c call 0x115a41d0 */
  push32(0x115a7261u); f_115a41d0();
  /* 115a7261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a7264:;
  /* 115a7264 mov eax, dword ptr [0x115d160c] */
  EAX = (r32((uint32_t)(0x115d160c)));
  /* 115a7269 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a726c jmp 0x115a7277 */
  goto L_115a7277;
L_115a726e:;
  /* 115a726e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7271 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7274 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a7277:;
  /* 115a7277 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a727a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115a727d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a727f je 0x115a72e7 */
  if (C.zf) goto L_115a72e7;
  /* 115a7281 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7284 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7285 call 0x115a8090 */
  push32(0x115a728au); f_115a8090();
  /* 115a728a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a728d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7290 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115a7293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7296 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115a7299 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a729c je 0x115a72e5 */
  if (C.zf) goto L_115a72e5;
  /* 115a729e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 115a72a0 push 0x115ccd94 */
  push32((uint32_t)(0x115ccd94u));
  /* 115a72a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a72a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a72aa push ecx */
  push32((uint32_t)(ECX));
  /* 115a72ab call 0x115a5260 */
  push32(0x115a72b0u); f_115a5260();
  /* 115a72b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a72b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a72b6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 115a72b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a72bb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a72be jne 0x115a72ca */
  if (!C.zf) goto L_115a72ca;
  /* 115a72c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a72c2 call 0x115a41d0 */
  push32(0x115a72c7u); f_115a41d0();
  /* 115a72c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a72ca:;
  /* 115a72ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a72cd push ecx */
  push32((uint32_t)(ECX));
  /* 115a72ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a72d1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a72d3 push eax */
  push32((uint32_t)(EAX));
  /* 115a72d4 call 0x115a8210 */
  push32(0x115a72d9u); f_115a8210();
  /* 115a72d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a72dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a72df add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a72e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_115a72e5:;
  /* 115a72e5 jmp 0x115a726e */
  goto L_115a726e;
L_115a72e7:;
  /* 115a72e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a72e9 mov edx, dword ptr [0x115d160c] */
  EDX = (r32((uint32_t)(0x115d160c)));
  /* 115a72ef push edx */
  push32((uint32_t)(EDX));
  /* 115a72f0 call 0x115a5cf0 */
  push32(0x115a72f5u); f_115a5cf0();
  /* 115a72f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a72f8 mov dword ptr [0x115d160c], 0 */
  w32((uint32_t)(0x115d160c), (0x0u));
  /* 115a7302 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7305 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115a730b mov dword ptr [0x115d3140], 1 */
  w32((uint32_t)(0x115d3140), (0x1u));
  /* 115a7315 mov esp, ebp */
  ESP = (EBP);
  /* 115a7317 pop ebp */
  EBP = (pop32());
  /* 115a7318 ret  */
  ESPCHK(0x115a71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007320 @ 0x115a7320 (216 bytes, 69 insns) */
void f_115a7320(void) {
  FTRACE(0x115a7320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7320 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7321 mov ebp, esp */
  EBP = (ESP);
  /* 115a7323 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7326 cmp dword ptr [0x115d3150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d3150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a732d jne 0x115a7334 */
  if (!C.zf) goto L_115a7334;
  /* 115a732f call 0x115abb10 */
  push32(0x115a7334u); f_115abb10();
L_115a7334:;
  /* 115a7334 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115a7339 push 0x115d167c */
  push32((uint32_t)(0x115d167cu));
  /* 115a733e push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7340 call dword ptr [0x115d43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b0))), 0x115a7346u);
  /* 115a7346 mov dword ptr [0x115d1650], 0x115d167c */
  w32((uint32_t)(0x115d1650), (0x115d167cu));
  /* 115a7350 mov eax, dword ptr [0x115d316c] */
  EAX = (r32((uint32_t)(0x115d316c)));
  /* 115a7355 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a7358 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a735a jne 0x115a7367 */
  if (!C.zf) goto L_115a7367;
  /* 115a735c mov edx, dword ptr [0x115d1650] */
  EDX = (r32((uint32_t)(0x115d1650)));
  /* 115a7362 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115a7365 jmp 0x115a736f */
  goto L_115a736f;
L_115a7367:;
  /* 115a7367 mov eax, dword ptr [0x115d316c] */
  EAX = (r32((uint32_t)(0x115d316c)));
  /* 115a736c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_115a736f:;
  /* 115a736f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a7372 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115a7375 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 115a7378 push edx */
  push32((uint32_t)(EDX));
  /* 115a7379 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 115a737c push eax */
  push32((uint32_t)(EAX));
  /* 115a737d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a737f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7381 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a7384 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7385 call 0x115a7400 */
  push32(0x115a738au); f_115a7400();
  /* 115a738a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a738d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 115a7392 push 0x115ccda0 */
  push32((uint32_t)(0x115ccda0u));
  /* 115a7397 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a7399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a739c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a739f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 115a73a2 push ecx */
  push32((uint32_t)(ECX));
  /* 115a73a3 call 0x115a5260 */
  push32(0x115a73a8u); f_115a5260();
  /* 115a73a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a73ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a73ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a73b2 jne 0x115a73be */
  if (!C.zf) goto L_115a73be;
  /* 115a73b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a73b6 call 0x115a41d0 */
  push32(0x115a73bbu); f_115a41d0();
  /* 115a73bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a73be:;
  /* 115a73be lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 115a73c1 push edx */
  push32((uint32_t)(EDX));
  /* 115a73c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 115a73c5 push eax */
  push32((uint32_t)(EAX));
  /* 115a73c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a73c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a73cc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 115a73cf push eax */
  push32((uint32_t)(EAX));
  /* 115a73d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a73d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a73d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a73d7 push edx */
  push32((uint32_t)(EDX));
  /* 115a73d8 call 0x115a7400 */
  push32(0x115a73ddu); f_115a7400();
  /* 115a73dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a73e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a73e3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a73e6 mov dword ptr [0x115d1634], eax */
  w32((uint32_t)(0x115d1634), (EAX));
  /* 115a73eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a73ee mov dword ptr [0x115d1638], ecx */
  w32((uint32_t)(0x115d1638), (ECX));
  /* 115a73f4 mov esp, ebp */
  ESP = (EBP);
  /* 115a73f6 pop ebp */
  EBP = (pop32());
  /* 115a73f7 ret  */
  ESPCHK(0x115a7320u, _esp0);
  ESP += 4; return;
}

/* FUN_10007400 @ 0x115a7400 (1060 bytes, 360 insns) */
void f_115a7400(void) {
  FTRACE(0x115a7400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7400 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7401 mov ebp, esp */
  EBP = (ESP);
  /* 115a7403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7406 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a7409 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115a740f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a7412 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 115a7418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a741b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a741e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7422 je 0x115a7435 */
  if (C.zf) goto L_115a7435;
  /* 115a7424 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7427 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a742a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115a742c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a742f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7432 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_115a7435:;
  /* 115a7435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7438 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a743b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a743e jne 0x115a750d */
  if (!C.zf) goto L_115a750d;
L_115a7444:;
  /* 115a7444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7447 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a744a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a744d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7450 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a7453 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7456 je 0x115a74d2 */
  if (C.zf) goto L_115a74d2;
  /* 115a7458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a745b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115a745e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a7460 je 0x115a74d2 */
  if (C.zf) goto L_115a74d2;
  /* 115a7462 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7465 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a7467 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a7469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a746b mov al, byte ptr [edx + 0x115d2ea1] */
  AL = (r8((uint32_t)(EDX + 0x115d2ea1)));
  /* 115a7471 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 115a7474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a7476 je 0x115a74a7 */
  if (C.zf) goto L_115a74a7;
  /* 115a7478 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a747b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a747d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7480 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a7483 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115a7485 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7489 je 0x115a74a7 */
  if (C.zf) goto L_115a74a7;
  /* 115a748b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a748e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7491 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115a7493 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115a7495 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7498 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a749b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 115a749e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a74a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a74a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115a74a7:;
  /* 115a74a7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a74aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a74ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a74af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a74b2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115a74b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a74b8 je 0x115a74cd */
  if (C.zf) goto L_115a74cd;
  /* 115a74ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a74bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a74c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a74c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a74c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a74c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a74ca mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_115a74cd:;
  /* 115a74cd jmp 0x115a7444 */
  goto L_115a7444;
L_115a74d2:;
  /* 115a74d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a74d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a74d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a74da mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a74dd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115a74df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a74e3 je 0x115a74f4 */
  if (C.zf) goto L_115a74f4;
  /* 115a74e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a74e8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 115a74eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a74ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a74f1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_115a74f4:;
  /* 115a74f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a74f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a74fa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a74fd jne 0x115a7508 */
  if (!C.zf) goto L_115a7508;
  /* 115a74ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7502 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7505 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115a7508:;
  /* 115a7508 jmp 0x115a75dc */
  goto L_115a75dc;
L_115a750d:;
  /* 115a750d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a7510 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a7512 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7515 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a7518 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115a751a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a751e je 0x115a7533 */
  if (C.zf) goto L_115a7533;
  /* 115a7520 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7523 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7526 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a7528 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a752a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a752d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7530 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_115a7533:;
  /* 115a7533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7536 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a7538 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 115a753b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a753e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7541 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a7544 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7547 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a754d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a754f mov dl, byte ptr [ecx + 0x115d2ea1] */
  DL = (r8((uint32_t)(ECX + 0x115d2ea1)));
  /* 115a7555 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115a7558 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a755a je 0x115a758b */
  if (C.zf) goto L_115a758b;
  /* 115a755c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a755f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a7561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7564 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a7567 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115a7569 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a756d je 0x115a7582 */
  if (C.zf) goto L_115a7582;
  /* 115a756f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7572 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7575 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a7577 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a7579 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a757c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a757f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_115a7582:;
  /* 115a7582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7585 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7588 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a758b:;
  /* 115a758b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a758e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a7594 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7597 je 0x115a75b7 */
  if (C.zf) goto L_115a75b7;
  /* 115a7599 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a759c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a75a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a75a3 je 0x115a75b7 */
  if (C.zf) goto L_115a75b7;
  /* 115a75a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a75a8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a75ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a75b1 jne 0x115a750d */
  if (!C.zf) goto L_115a750d;
L_115a75b7:;
  /* 115a75b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a75ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a75c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a75c2 jne 0x115a75cf */
  if (!C.zf) goto L_115a75cf;
  /* 115a75c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a75c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a75ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a75cd jmp 0x115a75dc */
  goto L_115a75dc;
L_115a75cf:;
  /* 115a75cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a75d3 je 0x115a75dc */
  if (C.zf) goto L_115a75dc;
  /* 115a75d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a75d8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_115a75dc:;
  /* 115a75dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_115a75e3:;
  /* 115a75e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a75e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115a75e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a75eb je 0x115a760e */
  if (C.zf) goto L_115a760e;
L_115a75ed:;
  /* 115a75ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a75f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115a75f3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a75f6 je 0x115a7603 */
  if (C.zf) goto L_115a7603;
  /* 115a75f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a75fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a75fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7601 jne 0x115a760e */
  if (!C.zf) goto L_115a760e;
L_115a7603:;
  /* 115a7603 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7606 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7609 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a760c jmp 0x115a75ed */
  goto L_115a75ed;
L_115a760e:;
  /* 115a760e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7611 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a7614 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a7616 jne 0x115a761d */
  if (!C.zf) goto L_115a761d;
  /* 115a7618 jmp 0x115a77fb */
  goto L_115a77fb;
L_115a761d:;
  /* 115a761d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7621 je 0x115a7634 */
  if (C.zf) goto L_115a7634;
  /* 115a7623 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7626 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7629 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 115a762b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a762e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7631 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_115a7634:;
  /* 115a7634 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a7637 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a7639 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a763c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a763f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_115a7641:;
  /* 115a7641 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 115a7648 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_115a764f:;
  /* 115a764f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7652 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115a7655 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7658 jne 0x115a766e */
  if (!C.zf) goto L_115a766e;
  /* 115a765a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a765d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7660 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a7663 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a7666 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7669 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115a766c jmp 0x115a764f */
  goto L_115a764f;
L_115a766e:;
  /* 115a766e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7671 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a7674 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7677 jne 0x115a76ca */
  if (!C.zf) goto L_115a76ca;
  /* 115a7679 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a767c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a767e mov ecx, 2 */
  ECX = (0x2u);
  /* 115a7683 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115a7685 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a7687 jne 0x115a76c2 */
  if (!C.zf) goto L_115a76c2;
  /* 115a7689 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a768d je 0x115a76af */
  if (C.zf) goto L_115a76af;
  /* 115a768f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7692 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 115a7696 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7699 jne 0x115a76a6 */
  if (!C.zf) goto L_115a76a6;
  /* 115a769b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a769e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a76a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a76a4 jmp 0x115a76ad */
  goto L_115a76ad;
L_115a76a6:;
  /* 115a76a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115a76ad:;
  /* 115a76ad jmp 0x115a76b6 */
  goto L_115a76b6;
L_115a76af:;
  /* 115a76af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115a76b6:;
  /* 115a76b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a76b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a76bc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 115a76bf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_115a76c2:;
  /* 115a76c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a76c5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115a76c7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_115a76ca:;
  /* 115a76ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a76cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a76d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a76d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115a76d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a76d8 je 0x115a76fe */
  if (C.zf) goto L_115a76fe;
  /* 115a76da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a76de je 0x115a76ef */
  if (C.zf) goto L_115a76ef;
  /* 115a76e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a76e3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 115a76e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a76e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a76ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_115a76ef:;
  /* 115a76ef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a76f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a76f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a76f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a76fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115a76fc jmp 0x115a76ca */
  goto L_115a76ca;
L_115a76fe:;
  /* 115a76fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7701 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115a7704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a7706 je 0x115a7724 */
  if (C.zf) goto L_115a7724;
  /* 115a7708 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a770c jne 0x115a7729 */
  if (!C.zf) goto L_115a7729;
  /* 115a770e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7711 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115a7714 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7717 je 0x115a7724 */
  if (C.zf) goto L_115a7724;
  /* 115a7719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a771c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115a771f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7722 jne 0x115a7729 */
  if (!C.zf) goto L_115a7729;
L_115a7724:;
  /* 115a7724 jmp 0x115a77d4 */
  goto L_115a77d4;
L_115a7729:;
  /* 115a7729 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a772d je 0x115a77c6 */
  if (C.zf) goto L_115a77c6;
  /* 115a7733 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7737 je 0x115a778d */
  if (C.zf) goto L_115a778d;
  /* 115a7739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a773c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a773e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115a7740 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a7742 mov cl, byte ptr [eax + 0x115d2ea1] */
  CL = (r8((uint32_t)(EAX + 0x115d2ea1)));
  /* 115a7748 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 115a774b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a774d je 0x115a7778 */
  if (C.zf) goto L_115a7778;
  /* 115a774f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7755 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115a7757 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 115a7759 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a775c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a775f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 115a7762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7765 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a776b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a776e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a7770 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7773 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a7776 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115a7778:;
  /* 115a7778 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a777b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a777e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115a7780 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 115a7782 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7788 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 115a778b jmp 0x115a77b9 */
  goto L_115a77b9;
L_115a778d:;
  /* 115a778d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7792 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115a7794 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a7796 mov cl, byte ptr [eax + 0x115d2ea1] */
  CL = (r8((uint32_t)(EAX + 0x115d2ea1)));
  /* 115a779c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 115a779f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a77a1 je 0x115a77b9 */
  if (C.zf) goto L_115a77b9;
  /* 115a77a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a77a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a77a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a77ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a77af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a77b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a77b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a77b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115a77b9:;
  /* 115a77b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a77bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a77be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a77c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a77c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115a77c6:;
  /* 115a77c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a77c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a77cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a77cf jmp 0x115a7641 */
  goto L_115a7641;
L_115a77d4:;
  /* 115a77d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a77d8 je 0x115a77e9 */
  if (C.zf) goto L_115a77e9;
  /* 115a77da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a77dd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 115a77e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a77e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a77e6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_115a77e9:;
  /* 115a77e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a77ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a77ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a77f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115a77f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115a77f6 jmp 0x115a75e3 */
  goto L_115a75e3;
L_115a77fb:;
  /* 115a77fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a77ff je 0x115a7813 */
  if (C.zf) goto L_115a7813;
  /* 115a7801 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7804 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115a780a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a780d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7810 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_115a7813:;
  /* 115a7813 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a7816 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a7818 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a781b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a781e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115a7820 mov esp, ebp */
  ESP = (EBP);
  /* 115a7822 pop ebp */
  EBP = (pop32());
  /* 115a7823 ret  */
  ESPCHK(0x115a7400u, _esp0);
  ESP += 4; return;
}

/* FUN_10007830 @ 0x115a7830 (537 bytes, 173 insns) */
void f_115a7830(void) {
  FTRACE(0x115a7830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7830 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7831 mov ebp, esp */
  EBP = (ESP);
  /* 115a7833 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7836 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 115a783d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 115a7844 cmp dword ptr [0x115d1780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a784b jne 0x115a788a */
  if (!C.zf) goto L_115a788a;
  /* 115a784d call dword ptr [0x115d4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4374))), 0x115a7853u);
  /* 115a7853 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115a7856 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a785a je 0x115a7868 */
  if (C.zf) goto L_115a7868;
  /* 115a785c mov dword ptr [0x115d1780], 1 */
  w32((uint32_t)(0x115d1780), (0x1u));
  /* 115a7866 jmp 0x115a788a */
  goto L_115a788a;
L_115a7868:;
  /* 115a7868 call dword ptr [0x115d436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d436c))), 0x115a786eu);
  /* 115a786e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115a7871 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7875 je 0x115a7883 */
  if (C.zf) goto L_115a7883;
  /* 115a7877 mov dword ptr [0x115d1780], 2 */
  w32((uint32_t)(0x115d1780), (0x2u));
  /* 115a7881 jmp 0x115a788a */
  goto L_115a788a;
L_115a7883:;
  /* 115a7883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7885 jmp 0x115a7a45 */
  goto L_115a7a45;
L_115a788a:;
  /* 115a788a cmp dword ptr [0x115d1780], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1780))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7891 jne 0x115a798e */
  if (!C.zf) goto L_115a798e;
  /* 115a7897 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a789b jne 0x115a78b3 */
  if (!C.zf) goto L_115a78b3;
  /* 115a789d call dword ptr [0x115d4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4374))), 0x115a78a3u);
  /* 115a78a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115a78a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a78aa jne 0x115a78b3 */
  if (!C.zf) goto L_115a78b3;
  /* 115a78ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a78ae jmp 0x115a7a45 */
  goto L_115a7a45;
L_115a78b3:;
  /* 115a78b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a78b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115a78b9:;
  /* 115a78b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a78bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a78be mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 115a78c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a78c3 je 0x115a78e5 */
  if (C.zf) goto L_115a78e5;
  /* 115a78c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a78c8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a78cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a78ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a78d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a78d3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 115a78d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a78d8 jne 0x115a78e3 */
  if (!C.zf) goto L_115a78e3;
  /* 115a78da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a78dd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a78e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115a78e3:;
  /* 115a78e3 jmp 0x115a78b9 */
  goto L_115a78b9;
L_115a78e5:;
  /* 115a78e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a78e8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a78eb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115a78ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a78f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a78f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a78f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a78f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a78f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a78fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a78fe push edx */
  push32((uint32_t)(EDX));
  /* 115a78ff mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a7902 push eax */
  push32((uint32_t)(EAX));
  /* 115a7903 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7905 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7907 call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115a790du);
  /* 115a790d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115a7910 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7914 je 0x115a7934 */
  if (C.zf) goto L_115a7934;
  /* 115a7916 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 115a7918 push 0x115ccdac */
  push32((uint32_t)(0x115ccdacu));
  /* 115a791d push 2 */
  push32((uint32_t)(0x2u));
  /* 115a791f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a7922 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7923 call 0x115a5260 */
  push32(0x115a7928u); f_115a5260();
  /* 115a7928 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a792b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115a792e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7932 jne 0x115a7945 */
  if (!C.zf) goto L_115a7945;
L_115a7934:;
  /* 115a7934 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a7937 push edx */
  push32((uint32_t)(EDX));
  /* 115a7938 call dword ptr [0x115d4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4380))), 0x115a793eu);
  /* 115a793e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7940 jmp 0x115a7a45 */
  goto L_115a7a45;
L_115a7945:;
  /* 115a7945 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7947 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7949 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a794c push eax */
  push32((uint32_t)(EAX));
  /* 115a794d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a7950 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7954 push edx */
  push32((uint32_t)(EDX));
  /* 115a7955 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a7958 push eax */
  push32((uint32_t)(EAX));
  /* 115a7959 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a795b push 0 */
  push32((uint32_t)(0x0u));
  /* 115a795d call dword ptr [0x115d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4370))), 0x115a7963u);
  /* 115a7963 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a7965 jne 0x115a797c */
  if (!C.zf) goto L_115a797c;
  /* 115a7967 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a7969 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a796c push ecx */
  push32((uint32_t)(ECX));
  /* 115a796d call 0x115a5cf0 */
  push32(0x115a7972u); f_115a5cf0();
  /* 115a7972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7975 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_115a797c:;
  /* 115a797c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a797f push edx */
  push32((uint32_t)(EDX));
  /* 115a7980 call dword ptr [0x115d4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4380))), 0x115a7986u);
  /* 115a7986 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a7989 jmp 0x115a7a45 */
  goto L_115a7a45;
L_115a798e:;
  /* 115a798e cmp dword ptr [0x115d1780], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115d1780))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7995 jne 0x115a7a43 */
  if (!C.zf) goto L_115a7a43;
  /* 115a799b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a799f jne 0x115a79b7 */
  if (!C.zf) goto L_115a79b7;
  /* 115a79a1 call dword ptr [0x115d436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d436c))), 0x115a79a7u);
  /* 115a79a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115a79aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a79ae jne 0x115a79b7 */
  if (!C.zf) goto L_115a79b7;
  /* 115a79b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a79b2 jmp 0x115a7a45 */
  goto L_115a7a45;
L_115a79b7:;
  /* 115a79b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a79ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115a79bd:;
  /* 115a79bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a79c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115a79c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a79c5 je 0x115a79e5 */
  if (C.zf) goto L_115a79e5;
  /* 115a79c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a79ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a79cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a79d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a79d3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115a79d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a79d8 jne 0x115a79e3 */
  if (!C.zf) goto L_115a79e3;
  /* 115a79da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a79dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a79e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115a79e3:;
  /* 115a79e3 jmp 0x115a79bd */
  goto L_115a79bd;
L_115a79e5:;
  /* 115a79e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a79e8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a79eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a79ee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115a79f1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 115a79f6 push 0x115ccdac */
  push32((uint32_t)(0x115ccdacu));
  /* 115a79fb push 2 */
  push32((uint32_t)(0x2u));
  /* 115a79fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a7a00 push edx */
  push32((uint32_t)(EDX));
  /* 115a7a01 call 0x115a5260 */
  push32(0x115a7a06u); f_115a5260();
  /* 115a7a06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7a09 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a7a0c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7a10 jne 0x115a7a20 */
  if (!C.zf) goto L_115a7a20;
  /* 115a7a12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a7a15 push eax */
  push32((uint32_t)(EAX));
  /* 115a7a16 call dword ptr [0x115d4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4378))), 0x115a7a1cu);
  /* 115a7a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7a1e jmp 0x115a7a45 */
  goto L_115a7a45;
L_115a7a20:;
  /* 115a7a20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a7a23 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7a24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a7a27 push edx */
  push32((uint32_t)(EDX));
  /* 115a7a28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7a2b push eax */
  push32((uint32_t)(EAX));
  /* 115a7a2c call 0x115abb40 */
  push32(0x115a7a31u); f_115abb40();
  /* 115a7a31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7a34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a7a37 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7a38 call dword ptr [0x115d4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4378))), 0x115a7a3eu);
  /* 115a7a3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7a41 jmp 0x115a7a45 */
  goto L_115a7a45;
L_115a7a43:;
  /* 115a7a43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a7a45:;
  /* 115a7a45 mov esp, ebp */
  ESP = (EBP);
  /* 115a7a47 pop ebp */
  EBP = (pop32());
  /* 115a7a48 ret  */
  ESPCHK(0x115a7830u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a50 @ 0x115a7a50 (77 bytes, 25 insns) */
void f_115a7a50(void) {
  FTRACE(0x115a7a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7a50 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7a51 mov ebp, esp */
  EBP = (ESP);
  /* 115a7a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7a55 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 115a7a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7a5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7a60 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 115a7a63 push eax */
  push32((uint32_t)(EAX));
  /* 115a7a64 call dword ptr [0x115d4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4360))), 0x115a7a6au);
  /* 115a7a6a mov dword ptr [0x115d2fcc], eax */
  w32((uint32_t)(0x115d2fcc), (EAX));
  /* 115a7a6f cmp dword ptr [0x115d2fcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d2fcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7a76 jne 0x115a7a7c */
  if (!C.zf) goto L_115a7a7c;
  /* 115a7a78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7a7a jmp 0x115a7a9b */
  goto L_115a7a9b;
L_115a7a7c:;
  /* 115a7a7c call 0x115a9500 */
  push32(0x115a7a81u); f_115a9500();
  /* 115a7a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a7a83 jne 0x115a7a96 */
  if (!C.zf) goto L_115a7a96;
  /* 115a7a85 mov ecx, dword ptr [0x115d2fcc] */
  ECX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a7a8b push ecx */
  push32((uint32_t)(ECX));
  /* 115a7a8c call dword ptr [0x115d4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4364))), 0x115a7a92u);
  /* 115a7a92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a7a94 jmp 0x115a7a9b */
  goto L_115a7a9b;
L_115a7a96:;
  /* 115a7a96 mov eax, 1 */
  EAX = (0x1u);
L_115a7a9b:;
  /* 115a7a9b pop ebp */
  EBP = (pop32());
  /* 115a7a9c ret  */
  ESPCHK(0x115a7a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007aa0 @ 0x115a7aa0 (156 bytes, 48 insns) */
void f_115a7aa0(void) {
  FTRACE(0x115a7aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7aa1 mov ebp, esp */
  EBP = (ESP);
  /* 115a7aa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7aa6 mov eax, dword ptr [0x115d2fc8] */
  EAX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a7aab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a7aae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115a7ab5 jmp 0x115a7ac0 */
  goto L_115a7ac0;
L_115a7ab7:;
  /* 115a7ab7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7aba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7abd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a7ac0:;
  /* 115a7ac0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7ac3 cmp edx, dword ptr [0x115d2fc4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115d2fc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7ac9 jge 0x115a7b16 */
  if ((C.sf==C.of)) goto L_115a7b16;
  /* 115a7acb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 115a7ad0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 115a7ad5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7ad8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115a7adb push ecx */
  push32((uint32_t)(ECX));
  /* 115a7adc call dword ptr [0x115d4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4358))), 0x115a7ae2u);
  /* 115a7ae2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115a7ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7ae9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7aec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115a7aef push eax */
  push32((uint32_t)(EAX));
  /* 115a7af0 call dword ptr [0x115d4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4358))), 0x115a7af6u);
  /* 115a7af6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7af9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115a7afc push edx */
  push32((uint32_t)(EDX));
  /* 115a7afd push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7aff mov eax, dword ptr [0x115d2fcc] */
  EAX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a7b04 push eax */
  push32((uint32_t)(EAX));
  /* 115a7b05 call dword ptr [0x115d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4368))), 0x115a7b0bu);
  /* 115a7b0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7b0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7b11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115a7b14 jmp 0x115a7ab7 */
  goto L_115a7ab7;
L_115a7b16:;
  /* 115a7b16 mov edx, dword ptr [0x115d2fc8] */
  EDX = (r32((uint32_t)(0x115d2fc8)));
  /* 115a7b1c push edx */
  push32((uint32_t)(EDX));
  /* 115a7b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7b1f mov eax, dword ptr [0x115d2fcc] */
  EAX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a7b24 push eax */
  push32((uint32_t)(EAX));
  /* 115a7b25 call dword ptr [0x115d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4368))), 0x115a7b2bu);
  /* 115a7b2b mov ecx, dword ptr [0x115d2fcc] */
  ECX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a7b31 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7b32 call dword ptr [0x115d4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4364))), 0x115a7b38u);
  /* 115a7b38 mov esp, ebp */
  ESP = (EBP);
  /* 115a7b3a pop ebp */
  EBP = (pop32());
  /* 115a7b3b ret  */
  ESPCHK(0x115a7aa0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x115a7b40 (73 bytes, 19 insns) */
void f_115a7b40(void) {
  FTRACE(0x115a7b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7b40 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7b41 mov ebp, esp */
  EBP = (ESP);
  /* 115a7b43 cmp dword ptr [0x115d1614], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1614))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7b4a je 0x115a7b5e */
  if (C.zf) goto L_115a7b5e;
  /* 115a7b4c cmp dword ptr [0x115d1614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7b53 jne 0x115a7b87 */
  if (!C.zf) goto L_115a7b87;
  /* 115a7b55 cmp dword ptr [0x115d1618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7b5c jne 0x115a7b87 */
  if (!C.zf) goto L_115a7b87;
L_115a7b5e:;
  /* 115a7b5e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 115a7b63 call 0x115a7b90 */
  push32(0x115a7b68u); f_115a7b90();
  /* 115a7b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7b6b cmp dword ptr [0x115d1784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7b72 je 0x115a7b7a */
  if (C.zf) goto L_115a7b7a;
  /* 115a7b74 call dword ptr [0x115d1784] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d1784))), 0x115a7b7au);
L_115a7b7a:;
  /* 115a7b7a push 0xff */
  push32((uint32_t)(0xffu));
  /* 115a7b7f call 0x115a7b90 */
  push32(0x115a7b84u); f_115a7b90();
  /* 115a7b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a7b87:;
  /* 115a7b87 pop ebp */
  EBP = (pop32());
  /* 115a7b88 ret  */
  ESPCHK(0x115a7b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b90 @ 0x115a7b90 (447 bytes, 131 insns) */
void f_115a7b90(void) {
  FTRACE(0x115a7b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7b90 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7b91 mov ebp, esp */
  EBP = (ESP);
  /* 115a7b93 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7b99 push ebx */
  push32((uint32_t)(EBX));
  /* 115a7b9a push esi */
  push32((uint32_t)(ESI));
  /* 115a7b9b push edi */
  push32((uint32_t)(EDI));
  /* 115a7b9c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115a7ba3 jmp 0x115a7bae */
  goto L_115a7bae;
L_115a7ba5:;
  /* 115a7ba5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7ba8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7bab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115a7bae:;
  /* 115a7bae cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7bb2 jae 0x115a7bc7 */
  if (!C.cf) goto L_115a7bc7;
  /* 115a7bb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7bb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7bba cmp edx, dword ptr [ecx*8 + 0x115cfab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x115cfab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7bc1 jne 0x115a7bc5 */
  if (!C.zf) goto L_115a7bc5;
  /* 115a7bc3 jmp 0x115a7bc7 */
  goto L_115a7bc7;
L_115a7bc5:;
  /* 115a7bc5 jmp 0x115a7ba5 */
  goto L_115a7ba5;
L_115a7bc7:;
  /* 115a7bc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7bca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7bcd cmp ecx, dword ptr [eax*8 + 0x115cfab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x115cfab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7bd4 jne 0x115a7d48 */
  if (!C.zf) goto L_115a7d48;
  /* 115a7bda cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7be1 je 0x115a7c04 */
  if (C.zf) goto L_115a7c04;
  /* 115a7be3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7be6 mov eax, dword ptr [edx*8 + 0x115cfab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x115cfab4)));
  /* 115a7bed push eax */
  push32((uint32_t)(EAX));
  /* 115a7bee push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7bf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a7bf6 call 0x115a4320 */
  push32(0x115a7bfbu); f_115a4320();
  /* 115a7bfb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7bfe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7c01 jne 0x115a7c04 */
  if (!C.zf) goto L_115a7c04;
  /* 115a7c03 int3  */
  x86_unimpl("int3 @ 0x115a7c03");
L_115a7c04:;
  /* 115a7c04 cmp dword ptr [0x115d1614], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1614))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7c0b je 0x115a7c1f */
  if (C.zf) goto L_115a7c1f;
  /* 115a7c0d cmp dword ptr [0x115d1614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7c14 jne 0x115a7c58 */
  if (!C.zf) goto L_115a7c58;
  /* 115a7c16 cmp dword ptr [0x115d1618], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115d1618))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7c1d jne 0x115a7c58 */
  if (!C.zf) goto L_115a7c58;
L_115a7c1f:;
  /* 115a7c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7c21 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 115a7c24 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7c25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7c28 mov eax, dword ptr [edx*8 + 0x115cfab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x115cfab4)));
  /* 115a7c2f push eax */
  push32((uint32_t)(EAX));
  /* 115a7c30 call 0x115a8090 */
  push32(0x115a7c35u); f_115a8090();
  /* 115a7c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7c38 push eax */
  push32((uint32_t)(EAX));
  /* 115a7c39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7c3c mov edx, dword ptr [ecx*8 + 0x115cfab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x115cfab4)));
  /* 115a7c43 push edx */
  push32((uint32_t)(EDX));
  /* 115a7c44 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 115a7c46 call dword ptr [0x115d4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4394))), 0x115a7c4cu);
  /* 115a7c4c push eax */
  push32((uint32_t)(EAX));
  /* 115a7c4d call dword ptr [0x115d4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4398))), 0x115a7c53u);
  /* 115a7c53 jmp 0x115a7d48 */
  goto L_115a7d48;
L_115a7c58:;
  /* 115a7c58 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7c5f je 0x115a7d48 */
  if (C.zf) goto L_115a7d48;
  /* 115a7c65 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 115a7c6a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 115a7c70 push eax */
  push32((uint32_t)(EAX));
  /* 115a7c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7c73 call dword ptr [0x115d43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b0))), 0x115a7c79u);
  /* 115a7c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a7c7b jne 0x115a7c91 */
  if (!C.zf) goto L_115a7c91;
  /* 115a7c7d push 0x115cc614 */
  push32((uint32_t)(0x115cc614u));
  /* 115a7c82 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 115a7c88 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7c89 call 0x115a8210 */
  push32(0x115a7c8eu); f_115a8210();
  /* 115a7c8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a7c91:;
  /* 115a7c91 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 115a7c97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115a7c9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7c9d push eax */
  push32((uint32_t)(EAX));
  /* 115a7c9e call 0x115a8090 */
  push32(0x115a7ca3u); f_115a8090();
  /* 115a7ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7ca6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7ca9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7cac jbe 0x115a7cda */
  if ((C.cf||C.zf)) goto L_115a7cda;
  /* 115a7cae lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 115a7cb4 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7cb5 call 0x115a8090 */
  push32(0x115a7cbau); f_115a8090();
  /* 115a7cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7cbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7cc0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 115a7cc4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a7cc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a7cc9 push 0x115cc610 */
  push32((uint32_t)(0x115cc610u));
  /* 115a7cce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7cd2 call 0x115a8a80 */
  push32(0x115a7cd7u); f_115a8a80();
  /* 115a7cd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a7cda:;
  /* 115a7cda push 0x115cd068 */
  push32((uint32_t)(0x115cd068u));
  /* 115a7cdf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 115a7ce5 push edx */
  push32((uint32_t)(EDX));
  /* 115a7ce6 call 0x115a8210 */
  push32(0x115a7cebu); f_115a8210();
  /* 115a7ceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7cee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7cf1 push eax */
  push32((uint32_t)(EAX));
  /* 115a7cf2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 115a7cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7cf9 call 0x115a8220 */
  push32(0x115a7cfeu); f_115a8220();
  /* 115a7cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7d01 push 0x115cc588 */
  push32((uint32_t)(0x115cc588u));
  /* 115a7d06 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 115a7d0c push edx */
  push32((uint32_t)(EDX));
  /* 115a7d0d call 0x115a8220 */
  push32(0x115a7d12u); f_115a8220();
  /* 115a7d12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7d15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7d18 mov ecx, dword ptr [eax*8 + 0x115cfab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x115cfab4)));
  /* 115a7d1f push ecx */
  push32((uint32_t)(ECX));
  /* 115a7d20 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 115a7d26 push edx */
  push32((uint32_t)(EDX));
  /* 115a7d27 call 0x115a8220 */
  push32(0x115a7d2cu); f_115a8220();
  /* 115a7d2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7d2f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 115a7d34 push 0x115cd040 */
  push32((uint32_t)(0x115cd040u));
  /* 115a7d39 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 115a7d3f push eax */
  push32((uint32_t)(EAX));
  /* 115a7d40 call 0x115a89c0 */
  push32(0x115a7d45u); f_115a89c0();
  /* 115a7d45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a7d48:;
  /* 115a7d48 pop edi */
  EDI = (pop32());
  /* 115a7d49 pop esi */
  ESI = (pop32());
  /* 115a7d4a pop ebx */
  EBX = (pop32());
  /* 115a7d4b mov esp, ebp */
  ESP = (EBP);
  /* 115a7d4d pop ebp */
  EBP = (pop32());
  /* 115a7d4e ret  */
  ESPCHK(0x115a7b90u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x115a7d50 (80 bytes, 27 insns) */
void f_115a7d50(void) {
  FTRACE(0x115a7d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7d50 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7d51 mov ebp, esp */
  EBP = (ESP);
  /* 115a7d53 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7d54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115a7d5b jmp 0x115a7d66 */
  goto L_115a7d66;
L_115a7d5d:;
  /* 115a7d5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7d60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7d63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a7d66:;
  /* 115a7d66 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7d6a jae 0x115a7d7f */
  if (!C.cf) goto L_115a7d7f;
  /* 115a7d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7d6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7d72 cmp edx, dword ptr [ecx*8 + 0x115cfab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x115cfab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7d79 jne 0x115a7d7d */
  if (!C.zf) goto L_115a7d7d;
  /* 115a7d7b jmp 0x115a7d7f */
  goto L_115a7d7f;
L_115a7d7d:;
  /* 115a7d7d jmp 0x115a7d5d */
  goto L_115a7d5d;
L_115a7d7f:;
  /* 115a7d7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7d85 cmp ecx, dword ptr [eax*8 + 0x115cfab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x115cfab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7d8c jne 0x115a7d9a */
  if (!C.zf) goto L_115a7d9a;
  /* 115a7d8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7d91 mov eax, dword ptr [edx*8 + 0x115cfab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x115cfab4)));
  /* 115a7d98 jmp 0x115a7d9c */
  goto L_115a7d9c;
L_115a7d9a:;
  /* 115a7d9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a7d9c:;
  /* 115a7d9c mov esp, ebp */
  ESP = (EBP);
  /* 115a7d9e pop ebp */
  EBP = (pop32());
  /* 115a7d9f ret  */
  ESPCHK(0x115a7d50u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x115a7da0 (66 bytes, 28 insns) */
void f_115a7da0(void) {
  FTRACE(0x115a7da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7da0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7da1 mov ebp, esp */
  EBP = (ESP);
  /* 115a7da3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7da7 jne 0x115a7dc7 */
  if (!C.zf) goto L_115a7dc7;
  /* 115a7da9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7dad jge 0x115a7dc7 */
  if ((C.sf==C.of)) goto L_115a7dc7;
  /* 115a7daf push 1 */
  push32((uint32_t)(0x1u));
  /* 115a7db1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7db4 push eax */
  push32((uint32_t)(EAX));
  /* 115a7db5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7db8 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7db9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7dbc push edx */
  push32((uint32_t)(EDX));
  /* 115a7dbd call 0x115a7df0 */
  push32(0x115a7dc2u); f_115a7df0();
  /* 115a7dc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7dc5 jmp 0x115a7ddd */
  goto L_115a7ddd;
L_115a7dc7:;
  /* 115a7dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7dc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7dcc push eax */
  push32((uint32_t)(EAX));
  /* 115a7dcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7dd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7dd4 push edx */
  push32((uint32_t)(EDX));
  /* 115a7dd5 call 0x115a7df0 */
  push32(0x115a7ddau); f_115a7df0();
  /* 115a7dda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a7ddd:;
  /* 115a7ddd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7de0 pop ebp */
  EBP = (pop32());
  /* 115a7de1 ret  */
  ESPCHK(0x115a7da0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x115a7df0 (194 bytes, 71 insns) */
void f_115a7df0(void) {
  FTRACE(0x115a7df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7df0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7df1 mov ebp, esp */
  EBP = (ESP);
  /* 115a7df3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a7dfc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7e00 je 0x115a7e19 */
  if (C.zf) goto L_115a7e19;
  /* 115a7e02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e05 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 115a7e08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7e0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a7e11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7e14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115a7e16 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115a7e19:;
  /* 115a7e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115a7e1f:;
  /* 115a7e1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7e22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a7e24 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115a7e27 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115a7e2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7e2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a7e2f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115a7e32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115a7e35 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7e39 jbe 0x115a7e51 */
  if ((C.cf||C.zf)) goto L_115a7e51;
  /* 115a7e3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7e3e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e44 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a7e46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7e4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a7e4f jmp 0x115a7e65 */
  goto L_115a7e65;
L_115a7e51:;
  /* 115a7e51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7e54 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7e57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e5a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a7e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7e62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a7e65:;
  /* 115a7e65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7e69 ja 0x115a7e1f */
  if ((!C.cf&&!C.zf)) goto L_115a7e1f;
  /* 115a7e6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e6e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115a7e71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e74 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7e77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a7e7a:;
  /* 115a7e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a7e7f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 115a7e82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7e88 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a7e8a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a7e8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7e8f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 115a7e92 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 115a7e94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7e97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7e9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a7e9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7ea0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7ea3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a7ea6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a7ea9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7eac jb 0x115a7e7a */
  if (C.cf) goto L_115a7e7a;
  /* 115a7eae mov esp, ebp */
  ESP = (EBP);
  /* 115a7eb0 pop ebp */
  EBP = (pop32());
  /* 115a7eb1 ret  */
  ESPCHK(0x115a7df0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x115a7ec0 (63 bytes, 24 insns) */
void f_115a7ec0(void) {
  FTRACE(0x115a7ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7ec1 mov ebp, esp */
  EBP = (ESP);
  /* 115a7ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7ec4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7ec8 jne 0x115a7ed9 */
  if (!C.zf) goto L_115a7ed9;
  /* 115a7eca cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7ece jge 0x115a7ed9 */
  if ((C.sf==C.of)) goto L_115a7ed9;
  /* 115a7ed0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115a7ed7 jmp 0x115a7ee0 */
  goto L_115a7ee0;
L_115a7ed9:;
  /* 115a7ed9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115a7ee0:;
  /* 115a7ee0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7ee3 push eax */
  push32((uint32_t)(EAX));
  /* 115a7ee4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7ee8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7eeb push edx */
  push32((uint32_t)(EDX));
  /* 115a7eec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7eef push eax */
  push32((uint32_t)(EAX));
  /* 115a7ef0 call 0x115a7df0 */
  push32(0x115a7ef5u); f_115a7df0();
  /* 115a7ef5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7ef8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7efb mov esp, ebp */
  ESP = (EBP);
  /* 115a7efd pop ebp */
  EBP = (pop32());
  /* 115a7efe ret  */
  ESPCHK(0x115a7ec0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x115a7f00 (30 bytes, 14 insns) */
void f_115a7f00(void) {
  FTRACE(0x115a7f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7f00 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7f01 mov ebp, esp */
  EBP = (ESP);
  /* 115a7f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a7f05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7f08 push eax */
  push32((uint32_t)(EAX));
  /* 115a7f09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7f0c push ecx */
  push32((uint32_t)(ECX));
  /* 115a7f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7f10 push edx */
  push32((uint32_t)(EDX));
  /* 115a7f11 call 0x115a7df0 */
  push32(0x115a7f16u); f_115a7df0();
  /* 115a7f16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7f19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7f1c pop ebp */
  EBP = (pop32());
  /* 115a7f1d ret  */
  ESPCHK(0x115a7f00u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x115a7f20 (72 bytes, 28 insns) */
void f_115a7f20(void) {
  FTRACE(0x115a7f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7f20 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7f21 mov ebp, esp */
  EBP = (ESP);
  /* 115a7f23 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7f24 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7f28 jne 0x115a7f41 */
  if (!C.zf) goto L_115a7f41;
  /* 115a7f2a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7f2e jg 0x115a7f41 */
  if ((!C.zf&&C.sf==C.of)) goto L_115a7f41;
  /* 115a7f30 jl 0x115a7f38 */
  if ((C.sf!=C.of)) goto L_115a7f38;
  /* 115a7f32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7f36 jae 0x115a7f41 */
  if (!C.cf) goto L_115a7f41;
L_115a7f38:;
  /* 115a7f38 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115a7f3f jmp 0x115a7f48 */
  goto L_115a7f48;
L_115a7f41:;
  /* 115a7f41 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115a7f48:;
  /* 115a7f48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7f4b push eax */
  push32((uint32_t)(EAX));
  /* 115a7f4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a7f4f push ecx */
  push32((uint32_t)(ECX));
  /* 115a7f50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7f53 push edx */
  push32((uint32_t)(EDX));
  /* 115a7f54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7f57 push eax */
  push32((uint32_t)(EAX));
  /* 115a7f58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7f5b push ecx */
  push32((uint32_t)(ECX));
  /* 115a7f5c call 0x115a7f70 */
  push32(0x115a7f61u); f_115a7f70();
  /* 115a7f61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7f64 mov esp, ebp */
  ESP = (EBP);
  /* 115a7f66 pop ebp */
  EBP = (pop32());
  /* 115a7f67 ret  */
  ESPCHK(0x115a7f20u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x115a7f70 (242 bytes, 91 insns) */
void f_115a7f70(void) {
  FTRACE(0x115a7f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a7f70 push ebp */
  push32((uint32_t)(EBP));
  /* 115a7f71 mov ebp, esp */
  EBP = (ESP);
  /* 115a7f73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a7f76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a7f79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a7f7c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7f80 je 0x115a7fa4 */
  if (C.zf) goto L_115a7fa4;
  /* 115a7f82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7f85 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 115a7f88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7f8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7f8e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a7f91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7f94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115a7f96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7f99 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7f9c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115a7f9e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115a7fa1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_115a7fa4:;
  /* 115a7fa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7fa7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115a7faa:;
  /* 115a7faa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a7fad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a7faf push ecx */
  push32((uint32_t)(ECX));
  /* 115a7fb0 push eax */
  push32((uint32_t)(EAX));
  /* 115a7fb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7fb4 push edx */
  push32((uint32_t)(EDX));
  /* 115a7fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7fb8 push eax */
  push32((uint32_t)(EAX));
  /* 115a7fb9 call 0x115abef0 */
  push32(0x115a7fbeu); f_115abef0();
  /* 115a7fbe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a7fc1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a7fc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a7fc6 push edx */
  push32((uint32_t)(EDX));
  /* 115a7fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 115a7fc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a7fcb push eax */
  push32((uint32_t)(EAX));
  /* 115a7fcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a7fcf push ecx */
  push32((uint32_t)(ECX));
  /* 115a7fd0 call 0x115abe80 */
  push32(0x115a7fd5u); f_115abe80();
  /* 115a7fd5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115a7fd8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 115a7fdb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a7fdf jbe 0x115a7ff7 */
  if ((C.cf||C.zf)) goto L_115a7ff7;
  /* 115a7fe1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7fe4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7fe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7fea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a7fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a7fef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7ff2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a7ff5 jmp 0x115a800b */
  goto L_115a800b;
L_115a7ff7:;
  /* 115a7ff7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a7ffa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a7ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8000 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a8002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8005 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8008 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115a800b:;
  /* 115a800b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a800f ja 0x115a7faa */
  if ((!C.cf&&!C.zf)) goto L_115a7faa;
  /* 115a8011 jb 0x115a8019 */
  if (C.cf) goto L_115a8019;
  /* 115a8013 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8017 ja 0x115a7faa */
  if ((!C.cf&&!C.zf)) goto L_115a7faa;
L_115a8019:;
  /* 115a8019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a801c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115a801f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8022 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8025 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a8028:;
  /* 115a8028 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a802b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a802d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 115a8030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8033 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8036 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a8038 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115a803a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a803d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 115a8040 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 115a8042 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8045 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8048 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a804b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a804e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8051 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a8054 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8057 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a805a jb 0x115a8028 */
  if (C.cf) goto L_115a8028;
  /* 115a805c mov esp, ebp */
  ESP = (EBP);
  /* 115a805e pop ebp */
  EBP = (pop32());
  /* 115a805f ret 0x14 */
  ESPCHK(0x115a7f70u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x115a8070 (31 bytes, 15 insns) */
void f_115a8070(void) {
  FTRACE(0x115a8070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8070 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8071 mov ebp, esp */
  EBP = (ESP);
  /* 115a8073 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a8075 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a8078 push eax */
  push32((uint32_t)(EAX));
  /* 115a8079 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a807c push ecx */
  push32((uint32_t)(ECX));
  /* 115a807d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8080 push edx */
  push32((uint32_t)(EDX));
  /* 115a8081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8084 push eax */
  push32((uint32_t)(EAX));
  /* 115a8085 call 0x115a7f70 */
  push32(0x115a808au); f_115a7f70();
  /* 115a808a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a808d pop ebp */
  EBP = (pop32());
  /* 115a808e ret  */
  ESPCHK(0x115a8070u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x115a8090 (123 bytes, 44 insns) */
void f_115a8090(void) {
  FTRACE(0x115a8090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8090 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115a8094 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115a809a je 0x115a80b0 */
  if (C.zf) goto L_115a80b0;
L_115a809c:;
  /* 115a809c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 115a809e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115a809f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115a80a1 je 0x115a80e3 */
  if (C.zf) goto L_115a80e3;
  /* 115a80a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115a80a9 jne 0x115a809c */
  if (!C.zf) goto L_115a809c;
  /* 115a80ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_115a80b0:;
  /* 115a80b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115a80b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115a80b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a80b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a80bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115a80be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a80c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115a80c6 je 0x115a80b0 */
  if (C.zf) goto L_115a80b0;
  /* 115a80c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 115a80cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115a80cd je 0x115a8101 */
  if (C.zf) goto L_115a8101;
  /* 115a80cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 115a80d1 je 0x115a80f7 */
  if (C.zf) goto L_115a80f7;
  /* 115a80d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 115a80d8 je 0x115a80ed */
  if (C.zf) goto L_115a80ed;
  /* 115a80da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 115a80df je 0x115a80e3 */
  if (C.zf) goto L_115a80e3;
  /* 115a80e1 jmp 0x115a80b0 */
  goto L_115a80b0;
L_115a80e3:;
  /* 115a80e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 115a80e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115a80ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a80ec ret  */
  ESPCHK(0x115a8090u, _esp0);
  ESP += 4; return;
L_115a80ed:;
  /* 115a80ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 115a80f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115a80f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a80f6 ret  */
  ESPCHK(0x115a8090u, _esp0);
  ESP += 4; return;
L_115a80f7:;
  /* 115a80f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 115a80fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115a80fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8100 ret  */
  ESPCHK(0x115a8090u, _esp0);
  ESP += 4; return;
L_115a8101:;
  /* 115a8101 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 115a8104 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115a8108 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a810a ret  */
  ESPCHK(0x115a8090u, _esp0);
  ESP += 4; return;
}

/* FUN_10008110 @ 0x115a8110 (249 bytes, 93 insns) */
void f_115a8110(void) {
  FTRACE(0x115a8110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8110 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8111 mov ebp, esp */
  EBP = (ESP);
  /* 115a8113 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8116 push ebx */
  push32((uint32_t)(EBX));
  /* 115a8117 push esi */
  push32((uint32_t)(ESI));
  /* 115a8118 push edi */
  push32((uint32_t)(EDI));
  /* 115a8119 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 115a811c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115a811f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 115a8122 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_115a8125:;
  /* 115a8125 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8129 jne 0x115a8149 */
  if (!C.zf) goto L_115a8149;
  /* 115a812b push 0x115cd0a0 */
  push32((uint32_t)(0x115cd0a0u));
  /* 115a8130 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a8132 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 115a8134 push 0x115cd094 */
  push32((uint32_t)(0x115cd094u));
  /* 115a8139 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a813b call 0x115a4320 */
  push32(0x115a8140u); f_115a4320();
  /* 115a8140 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8143 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8146 jne 0x115a8149 */
  if (!C.zf) goto L_115a8149;
  /* 115a8148 int3  */
  x86_unimpl("int3 @ 0x115a8148");
L_115a8149:;
  /* 115a8149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a814b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a814d jne 0x115a8125 */
  if (!C.zf) goto L_115a8125;
L_115a814f:;
  /* 115a814f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8153 jne 0x115a8173 */
  if (!C.zf) goto L_115a8173;
  /* 115a8155 push 0x115cd084 */
  push32((uint32_t)(0x115cd084u));
  /* 115a815a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a815c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 115a815e push 0x115cd094 */
  push32((uint32_t)(0x115cd094u));
  /* 115a8163 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a8165 call 0x115a4320 */
  push32(0x115a816au); f_115a4320();
  /* 115a816a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a816d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8170 jne 0x115a8173 */
  if (!C.zf) goto L_115a8173;
  /* 115a8172 int3  */
  x86_unimpl("int3 @ 0x115a8172");
L_115a8173:;
  /* 115a8173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a8175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a8177 jne 0x115a814f */
  if (!C.zf) goto L_115a814f;
  /* 115a8179 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a817c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 115a8183 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a8186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8189 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115a818c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a818f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8192 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115a8194 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a8197 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a819a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115a819d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115a81a0 push edx */
  push32((uint32_t)(EDX));
  /* 115a81a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a81a4 push eax */
  push32((uint32_t)(EAX));
  /* 115a81a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a81a8 push ecx */
  push32((uint32_t)(ECX));
  /* 115a81a9 call 0x115ac1f0 */
  push32(0x115a81aeu); f_115ac1f0();
  /* 115a81ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a81b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115a81b4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a81b7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a81ba sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a81bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a81c0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 115a81c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a81c6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a81ca jl 0x115a81ee */
  if ((C.sf!=C.of)) goto L_115a81ee;
  /* 115a81cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a81cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a81d1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 115a81d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a81d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a81dc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 115a81df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a81e2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a81e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a81e7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a81ea mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115a81ec jmp 0x115a81ff */
  goto L_115a81ff;
L_115a81ee:;
  /* 115a81ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a81f1 push eax */
  push32((uint32_t)(EAX));
  /* 115a81f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a81f4 call 0x115abf70 */
  push32(0x115a81f9u); f_115abf70();
  /* 115a81f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a81fc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_115a81ff:;
  /* 115a81ff mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115a8202 pop edi */
  EDI = (pop32());
  /* 115a8203 pop esi */
  ESI = (pop32());
  /* 115a8204 pop ebx */
  EBX = (pop32());
  /* 115a8205 mov esp, ebp */
  ESP = (EBP);
  /* 115a8207 pop ebp */
  EBP = (pop32());
  /* 115a8208 ret  */
  ESPCHK(0x115a8110u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x115a8210 (7 bytes, 3 insns) */
void f_115a8210(void) {
  FTRACE(0x115a8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8210 push edi */
  push32((uint32_t)(EDI));
  /* 115a8211 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 115a8215 jmp 0x115a8281 */
  jmp_ind(0x115a8281u); return;
}

/* FUN_10008220 @ 0x115a8220 (224 bytes, 84 insns) */
void f_115a8220(void) {
  FTRACE(0x115a8220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8220 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115a8224 push edi */
  push32((uint32_t)(EDI));
  /* 115a8225 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115a822b je 0x115a823c */
  if (C.zf) goto L_115a823c;
L_115a822d:;
  /* 115a822d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 115a822f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115a8230 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115a8232 je 0x115a826f */
  if (C.zf) goto L_115a826f;
  /* 115a8234 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115a823a jne 0x115a822d */
  if (!C.zf) goto L_115a822d;
L_115a823c:;
  /* 115a823c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115a823e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115a8243 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8245 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a8248 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115a824a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a824d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115a8252 je 0x115a823c */
  if (C.zf) goto L_115a823c;
  /* 115a8254 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 115a8257 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115a8259 je 0x115a827e */
  if (C.zf) goto L_115a827e;
  /* 115a825b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 115a825d je 0x115a8279 */
  if (C.zf) goto L_115a8279;
  /* 115a825f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 115a8264 je 0x115a8274 */
  if (C.zf) goto L_115a8274;
  /* 115a8266 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 115a826b je 0x115a826f */
  if (C.zf) goto L_115a826f;
  /* 115a826d jmp 0x115a823c */
  goto L_115a823c;
L_115a826f:;
  /* 115a826f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 115a8272 jmp 0x115a8281 */
  goto L_115a8281;
L_115a8274:;
  /* 115a8274 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 115a8277 jmp 0x115a8281 */
  goto L_115a8281;
L_115a8279:;
  /* 115a8279 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 115a827c jmp 0x115a8281 */
  goto L_115a8281;
L_115a827e:;
  /* 115a827e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_115a8281:;
  /* 115a8281 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 115a8285 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115a828b je 0x115a82a6 */
  if (C.zf) goto L_115a82a6;
L_115a828d:;
  /* 115a828d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115a828f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 115a8290 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115a8292 je 0x115a82f8 */
  if (C.zf) goto L_115a82f8;
  /* 115a8294 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 115a8296 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115a8297 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 115a829d jne 0x115a828d */
  if (!C.zf) goto L_115a828d;
  /* 115a829f jmp 0x115a82a6 */
  goto L_115a82a6;
L_115a82a1:;
  /* 115a82a1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115a82a3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_115a82a6:;
  /* 115a82a6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115a82ab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 115a82ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a82af xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a82b2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115a82b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a82b6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a82b9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115a82be je 0x115a82a1 */
  if (C.zf) goto L_115a82a1;
  /* 115a82c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115a82c2 je 0x115a82f8 */
  if (C.zf) goto L_115a82f8;
  /* 115a82c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 115a82c6 je 0x115a82ef */
  if (C.zf) goto L_115a82ef;
  /* 115a82c8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 115a82ce je 0x115a82e2 */
  if (C.zf) goto L_115a82e2;
  /* 115a82d0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 115a82d6 je 0x115a82da */
  if (C.zf) goto L_115a82da;
  /* 115a82d8 jmp 0x115a82a1 */
  goto L_115a82a1;
L_115a82da:;
  /* 115a82da mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115a82dc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115a82e0 pop edi */
  EDI = (pop32());
  /* 115a82e1 ret  */
  ESPCHK(0x115a8220u, _esp0);
  ESP += 4; return;
L_115a82e2:;
  /* 115a82e2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 115a82e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115a82e9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 115a82ed pop edi */
  EDI = (pop32());
  /* 115a82ee ret  */
  ESPCHK(0x115a8220u, _esp0);
  ESP += 4; return;
L_115a82ef:;
  /* 115a82ef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 115a82f2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115a82f6 pop edi */
  EDI = (pop32());
  /* 115a82f7 ret  */
  ESPCHK(0x115a8220u, _esp0);
  ESP += 4; return;
L_115a82f8:;
  /* 115a82f8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 115a82fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115a82fe pop edi */
  EDI = (pop32());
  /* 115a82ff ret  */
  ESPCHK(0x115a8220u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x115a8300 (243 bytes, 91 insns) */
void f_115a8300(void) {
  FTRACE(0x115a8300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8300 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8301 mov ebp, esp */
  EBP = (ESP);
  /* 115a8303 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8306 push ebx */
  push32((uint32_t)(EBX));
  /* 115a8307 push esi */
  push32((uint32_t)(ESI));
  /* 115a8308 push edi */
  push32((uint32_t)(EDI));
  /* 115a8309 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 115a830c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115a830f:;
  /* 115a830f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8313 jne 0x115a8333 */
  if (!C.zf) goto L_115a8333;
  /* 115a8315 push 0x115cd0a0 */
  push32((uint32_t)(0x115cd0a0u));
  /* 115a831a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a831c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 115a831e push 0x115cd0b0 */
  push32((uint32_t)(0x115cd0b0u));
  /* 115a8323 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a8325 call 0x115a4320 */
  push32(0x115a832au); f_115a4320();
  /* 115a832a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a832d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8330 jne 0x115a8333 */
  if (!C.zf) goto L_115a8333;
  /* 115a8332 int3  */
  x86_unimpl("int3 @ 0x115a8332");
L_115a8333:;
  /* 115a8333 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a8335 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a8337 jne 0x115a830f */
  if (!C.zf) goto L_115a830f;
L_115a8339:;
  /* 115a8339 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a833d jne 0x115a835d */
  if (!C.zf) goto L_115a835d;
  /* 115a833f push 0x115cd084 */
  push32((uint32_t)(0x115cd084u));
  /* 115a8344 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a8346 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 115a8348 push 0x115cd0b0 */
  push32((uint32_t)(0x115cd0b0u));
  /* 115a834d push 2 */
  push32((uint32_t)(0x2u));
  /* 115a834f call 0x115a4320 */
  push32(0x115a8354u); f_115a4320();
  /* 115a8354 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8357 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a835a jne 0x115a835d */
  if (!C.zf) goto L_115a835d;
  /* 115a835c int3  */
  x86_unimpl("int3 @ 0x115a835c");
L_115a835d:;
  /* 115a835d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a835f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a8361 jne 0x115a8339 */
  if (!C.zf) goto L_115a8339;
  /* 115a8363 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a8366 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 115a836d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a8370 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8373 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 115a8376 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a8379 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a837c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 115a837e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a8381 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8384 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 115a8387 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115a838a push ecx */
  push32((uint32_t)(ECX));
  /* 115a838b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a838e push edx */
  push32((uint32_t)(EDX));
  /* 115a838f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a8392 push eax */
  push32((uint32_t)(EAX));
  /* 115a8393 call 0x115ac1f0 */
  push32(0x115a8398u); f_115ac1f0();
  /* 115a8398 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a839b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115a839e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a83a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a83a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a83a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a83aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 115a83ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a83b0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a83b4 jl 0x115a83d8 */
  if ((C.sf!=C.of)) goto L_115a83d8;
  /* 115a83b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a83b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a83bb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115a83be xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115a83c0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115a83c6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 115a83c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a83cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a83ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a83d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a83d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115a83d6 jmp 0x115a83e9 */
  goto L_115a83e9;
L_115a83d8:;
  /* 115a83d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115a83db push edx */
  push32((uint32_t)(EDX));
  /* 115a83dc push 0 */
  push32((uint32_t)(0x0u));
  /* 115a83de call 0x115abf70 */
  push32(0x115a83e3u); f_115abf70();
  /* 115a83e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a83e6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_115a83e9:;
  /* 115a83e9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115a83ec pop edi */
  EDI = (pop32());
  /* 115a83ed pop esi */
  ESI = (pop32());
  /* 115a83ee pop ebx */
  EBX = (pop32());
  /* 115a83ef mov esp, ebp */
  ESP = (EBP);
  /* 115a83f1 pop ebp */
  EBP = (pop32());
  /* 115a83f2 ret  */
  ESPCHK(0x115a8300u, _esp0);
  ESP += 4; return;
}

/* FUN_10008400 @ 0x115a8400 (47 bytes, 17 insns) */
void f_115a8400(void) {
  FTRACE(0x115a8400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8400 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8401 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8406 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 115a840a jb 0x115a8420 */
  if (C.cf) goto L_115a8420;
L_115a840c:;
  /* 115a840c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8412 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8417 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 115a8419 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a841e jae 0x115a840c */
  if (!C.cf) goto L_115a840c;
L_115a8420:;
  /* 115a8420 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8422 mov eax, esp */
  EAX = (ESP);
  /* 115a8424 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 115a8426 mov esp, ecx */
  ESP = (ECX);
  /* 115a8428 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a842a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a842d push eax */
  push32((uint32_t)(EAX));
  /* 115a842e ret  */
  ESPCHK(0x115a8400u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x115a8430 (507 bytes, 151 insns) [1 switch table(s)] */
void f_115a8430(void) {
  FTRACE(0x115a8430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8430 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8431 mov ebp, esp */
  EBP = (ESP);
  /* 115a8433 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8436 push esi */
  push32((uint32_t)(ESI));
  /* 115a8437 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a843b je 0x115a8443 */
  if (C.zf) goto L_115a8443;
  /* 115a843d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8441 jne 0x115a8448 */
  if (!C.zf) goto L_115a8448;
L_115a8443:;
  /* 115a8443 jmp 0x115a8618 */
  goto L_115a8618;
L_115a8448:;
  /* 115a8448 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a844c je 0x115a8464 */
  if (C.zf) goto L_115a8464;
  /* 115a844e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8452 je 0x115a8464 */
  if (C.zf) goto L_115a8464;
  /* 115a8454 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8458 je 0x115a8464 */
  if (C.zf) goto L_115a8464;
  /* 115a845a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a845e jne 0x115a8541 */
  if (!C.zf) goto L_115a8541;
L_115a8464:;
  /* 115a8464 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a8466 call 0x115a8c60 */
  push32(0x115a846bu); f_115a8c60();
  /* 115a846b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a846e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8472 je 0x115a847a */
  if (C.zf) goto L_115a847a;
  /* 115a8474 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8478 jne 0x115a84bf */
  if (!C.zf) goto L_115a84bf;
L_115a847a:;
  /* 115a847a cmp dword ptr [0x115d1798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8481 jne 0x115a84bf */
  if (!C.zf) goto L_115a84bf;
  /* 115a8483 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a8485 push 0x115a8660 */
  push32((uint32_t)(0x115a8660u));
  /* 115a848a call dword ptr [0x115d4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4354))), 0x115a8490u);
  /* 115a8490 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8493 jne 0x115a84a1 */
  if (!C.zf) goto L_115a84a1;
  /* 115a8495 mov dword ptr [0x115d1798], 1 */
  w32((uint32_t)(0x115d1798), (0x1u));
  /* 115a849f jmp 0x115a84bf */
  goto L_115a84bf;
L_115a84a1:;
  /* 115a84a1 call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115a84a7u);
  /* 115a84a7 mov esi, eax */
  ESI = (EAX);
  /* 115a84a9 call 0x115ad140 */
  push32(0x115a84aeu); f_115ad140();
  /* 115a84ae mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 115a84b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a84b2 call 0x115a8d00 */
  push32(0x115a84b7u); f_115a8d00();
  /* 115a84b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a84ba jmp 0x115a8618 */
  goto L_115a8618;
L_115a84bf:;
  /* 115a84bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a84c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115a84c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a84c8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a84cb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115a84ce cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a84d2 ja 0x115a8532 */
  if ((!C.cf&&!C.zf)) goto L_115a8532;
  /* 115a84d4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a84d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a84d9 mov dl, byte ptr [eax + 0x115a863f] */
  DL = (r8((uint32_t)(EAX + 0x115a863f)));
  /* 115a84df jmp dword ptr [edx*4 + 0x115a862b] */
  switch (EDX) {
    case 0: goto L_115a84e6;
    case 1: goto L_115a8520;
    case 2: goto L_115a84fa;
    case 3: goto L_115a850d;
    case 4: goto L_115a8532;
    default: x86_unimpl("switch@0x115a84df out of table"); return;
  }
L_115a84e6:;
  /* 115a84e6 mov ecx, dword ptr [0x115d1788] */
  ECX = (r32((uint32_t)(0x115d1788)));
  /* 115a84ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115a84ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a84f2 mov dword ptr [0x115d1788], edx */
  w32((uint32_t)(0x115d1788), (EDX));
  /* 115a84f8 jmp 0x115a8532 */
  goto L_115a8532;
L_115a84fa:;
  /* 115a84fa mov eax, dword ptr [0x115d178c] */
  EAX = (r32((uint32_t)(0x115d178c)));
  /* 115a84ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a8502 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8505 mov dword ptr [0x115d178c], ecx */
  w32((uint32_t)(0x115d178c), (ECX));
  /* 115a850b jmp 0x115a8532 */
  goto L_115a8532;
L_115a850d:;
  /* 115a850d mov edx, dword ptr [0x115d1790] */
  EDX = (r32((uint32_t)(0x115d1790)));
  /* 115a8513 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115a8516 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8519 mov dword ptr [0x115d1790], eax */
  w32((uint32_t)(0x115d1790), (EAX));
  /* 115a851e jmp 0x115a8532 */
  goto L_115a8532;
L_115a8520:;
  /* 115a8520 mov ecx, dword ptr [0x115d1794] */
  ECX = (r32((uint32_t)(0x115d1794)));
  /* 115a8526 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115a8529 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a852c mov dword ptr [0x115d1794], edx */
  w32((uint32_t)(0x115d1794), (EDX));
L_115a8532:;
  /* 115a8532 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a8534 call 0x115a8d00 */
  push32(0x115a8539u); f_115a8d00();
  /* 115a8539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a853c jmp 0x115a8613 */
  goto L_115a8613;
L_115a8541:;
  /* 115a8541 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8545 je 0x115a8558 */
  if (C.zf) goto L_115a8558;
  /* 115a8547 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a854b je 0x115a8558 */
  if (C.zf) goto L_115a8558;
  /* 115a854d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8551 je 0x115a8558 */
  if (C.zf) goto L_115a8558;
  /* 115a8553 jmp 0x115a8618 */
  goto L_115a8618;
L_115a8558:;
  /* 115a8558 call 0x115a4ca0 */
  push32(0x115a855du); f_115a4ca0();
  /* 115a855d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a8560 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8563 cmp dword ptr [eax + 0x50], 0x115cfc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x115cfc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a856a jne 0x115a85b5 */
  if (!C.zf) goto L_115a85b5;
  /* 115a856c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 115a8571 push 0x115cd0bc */
  push32((uint32_t)(0x115cd0bcu));
  /* 115a8576 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a8578 mov ecx, dword ptr [0x115cfc80] */
  ECX = (r32((uint32_t)(0x115cfc80)));
  /* 115a857e push ecx */
  push32((uint32_t)(ECX));
  /* 115a857f call 0x115a5260 */
  push32(0x115a8584u); f_115a5260();
  /* 115a8584 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8587 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a858a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 115a858d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8590 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8594 je 0x115a85b3 */
  if (C.zf) goto L_115a85b3;
  /* 115a8596 mov ecx, dword ptr [0x115cfc80] */
  ECX = (r32((uint32_t)(0x115cfc80)));
  /* 115a859c push ecx */
  push32((uint32_t)(ECX));
  /* 115a859d push 0x115cfc00 */
  push32((uint32_t)(0x115cfc00u));
  /* 115a85a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a85a5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 115a85a8 push eax */
  push32((uint32_t)(EAX));
  /* 115a85a9 call 0x115abb40 */
  push32(0x115a85aeu); f_115abb40();
  /* 115a85ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a85b1 jmp 0x115a85b5 */
  goto L_115a85b5;
L_115a85b3:;
  /* 115a85b3 jmp 0x115a8618 */
  goto L_115a8618;
L_115a85b5:;
  /* 115a85b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a85b8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 115a85bb push edx */
  push32((uint32_t)(EDX));
  /* 115a85bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a85bf push eax */
  push32((uint32_t)(EAX));
  /* 115a85c0 call 0x115a8940 */
  push32(0x115a85c5u); f_115a8940();
  /* 115a85c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a85c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a85cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a85cf jne 0x115a85d3 */
  if (!C.zf) goto L_115a85d3;
  /* 115a85d1 jmp 0x115a8618 */
  goto L_115a8618;
L_115a85d3:;
  /* 115a85d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a85d6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115a85d9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115a85dc:;
  /* 115a85dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a85df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a85e2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a85e5 jne 0x115a8613 */
  if (!C.zf) goto L_115a8613;
  /* 115a85e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a85ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a85ed mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115a85f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a85f3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a85f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115a85f9 mov edx, dword ptr [0x115cfc84] */
  EDX = (r32((uint32_t)(0x115cfc84)));
  /* 115a85ff imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a8602 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8605 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 115a8608 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a860a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a860d jb 0x115a8611 */
  if (C.cf) goto L_115a8611;
  /* 115a860f jmp 0x115a8613 */
  goto L_115a8613;
L_115a8611:;
  /* 115a8611 jmp 0x115a85dc */
  goto L_115a85dc;
L_115a8613:;
  /* 115a8613 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a8616 jmp 0x115a8626 */
  goto L_115a8626;
L_115a8618:;
  /* 115a8618 call 0x115ad130 */
  push32(0x115a861du); f_115ad130();
  /* 115a861d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 115a8623 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_115a8626:;
  /* 115a8626 pop esi */
  ESI = (pop32());
  /* 115a8627 mov esp, ebp */
  ESP = (EBP);
  /* 115a8629 pop ebp */
  EBP = (pop32());
  /* 115a862a ret  */
  ESPCHK(0x115a8430u, _esp0);
  ESP += 4; return;
}

/* FUN_10008660 @ 0x115a8660 (146 bytes, 45 insns) */
void f_115a8660(void) {
  FTRACE(0x115a8660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8660 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8661 mov ebp, esp */
  EBP = (ESP);
  /* 115a8663 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8666 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a8668 call 0x115a8c60 */
  push32(0x115a866du); f_115a8c60();
  /* 115a866d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8670 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8674 jne 0x115a868e */
  if (!C.zf) goto L_115a868e;
  /* 115a8676 mov dword ptr [ebp - 8], 0x115d1788 */
  w32((uint32_t)(EBP + -0x8), (0x115d1788u));
  /* 115a867d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8680 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115a8682 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115a8685 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 115a868c jmp 0x115a86a4 */
  goto L_115a86a4;
L_115a868e:;
  /* 115a868e mov dword ptr [ebp - 8], 0x115d178c */
  w32((uint32_t)(EBP + -0x8), (0x115d178cu));
  /* 115a8695 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8698 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a869a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a869d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_115a86a4:;
  /* 115a86a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a86a8 jne 0x115a86b8 */
  if (!C.zf) goto L_115a86b8;
  /* 115a86aa push 1 */
  push32((uint32_t)(0x1u));
  /* 115a86ac call 0x115a8d00 */
  push32(0x115a86b1u); f_115a8d00();
  /* 115a86b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a86b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a86b6 jmp 0x115a86ec */
  goto L_115a86ec;
L_115a86b8:;
  /* 115a86b8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a86bc je 0x115a86dd */
  if (C.zf) goto L_115a86dd;
  /* 115a86be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a86c1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 115a86c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a86c9 call 0x115a8d00 */
  push32(0x115a86ceu); f_115a8d00();
  /* 115a86ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a86d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a86d4 push edx */
  push32((uint32_t)(EDX));
  /* 115a86d5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x115a86d8u);
  /* 115a86d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a86db jmp 0x115a86e7 */
  goto L_115a86e7;
L_115a86dd:;
  /* 115a86dd push 1 */
  push32((uint32_t)(0x1u));
  /* 115a86df call 0x115a8d00 */
  push32(0x115a86e4u); f_115a8d00();
  /* 115a86e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a86e7:;
  /* 115a86e7 mov eax, 1 */
  EAX = (0x1u);
L_115a86ec:;
  /* 115a86ec mov esp, ebp */
  ESP = (EBP);
  /* 115a86ee pop ebp */
  EBP = (pop32());
  /* 115a86ef ret 4 */
  ESPCHK(0x115a8660u, _esp0);
  ESP += 8; return;
}

/* FUN_10008700 @ 0x115a8700 (522 bytes, 162 insns) [1 switch table(s)] */
void f_115a8700(void) {
  FTRACE(0x115a8700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8700 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8701 mov ebp, esp */
  EBP = (ESP);
  /* 115a8703 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8706 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115a870d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8710 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115a8713 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a8716 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8719 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 115a871c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8720 ja 0x115a87ce */
  if ((!C.cf&&!C.zf)) goto L_115a87ce;
  /* 115a8726 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115a8729 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a872b mov dl, byte ptr [eax + 0x115a8922] */
  DL = (r8((uint32_t)(EAX + 0x115a8922)));
  /* 115a8731 jmp dword ptr [edx*4 + 0x115a890a] */
  switch (EDX) {
    case 0: goto L_115a8738;
    case 1: goto L_115a87a3;
    case 2: goto L_115a8789;
    case 3: goto L_115a8755;
    case 4: goto L_115a876f;
    case 5: goto L_115a87ce;
    default: x86_unimpl("switch@0x115a8731 out of table"); return;
  }
L_115a8738:;
  /* 115a8738 mov dword ptr [ebp - 0x18], 0x115d1788 */
  w32((uint32_t)(EBP + -0x18), (0x115d1788u));
  /* 115a873f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a8742 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a8744 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115a8747 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a874a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a874d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a8750 jmp 0x115a87d6 */
  goto L_115a87d6;
L_115a8755:;
  /* 115a8755 mov dword ptr [ebp - 0x18], 0x115d178c */
  w32((uint32_t)(EBP + -0x18), (0x115d178cu));
  /* 115a875c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a875f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a8761 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115a8764 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a8767 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a876a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a876d jmp 0x115a87d6 */
  goto L_115a87d6;
L_115a876f:;
  /* 115a876f mov dword ptr [ebp - 0x18], 0x115d1790 */
  w32((uint32_t)(EBP + -0x18), (0x115d1790u));
  /* 115a8776 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a8779 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a877b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115a877e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a8781 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8784 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a8787 jmp 0x115a87d6 */
  goto L_115a87d6;
L_115a8789:;
  /* 115a8789 mov dword ptr [ebp - 0x18], 0x115d1794 */
  w32((uint32_t)(EBP + -0x18), (0x115d1794u));
  /* 115a8790 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a8793 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a8795 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115a8798 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a879b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a879e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a87a1 jmp 0x115a87d6 */
  goto L_115a87d6;
L_115a87a3:;
  /* 115a87a3 call 0x115a4ca0 */
  push32(0x115a87a8u); f_115a4ca0();
  /* 115a87a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a87ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a87ae mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 115a87b1 push edx */
  push32((uint32_t)(EDX));
  /* 115a87b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a87b5 push eax */
  push32((uint32_t)(EAX));
  /* 115a87b6 call 0x115a8940 */
  push32(0x115a87bbu); f_115a8940();
  /* 115a87bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a87be add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a87c1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115a87c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a87c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a87c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115a87cc jmp 0x115a87d6 */
  goto L_115a87d6;
L_115a87ce:;
  /* 115a87ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a87d1 jmp 0x115a8906 */
  goto L_115a8906;
L_115a87d6:;
  /* 115a87d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a87da je 0x115a87e6 */
  if (C.zf) goto L_115a87e6;
  /* 115a87dc push 1 */
  push32((uint32_t)(0x1u));
  /* 115a87de call 0x115a8c60 */
  push32(0x115a87e3u); f_115a8c60();
  /* 115a87e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a87e6:;
  /* 115a87e6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a87ea jne 0x115a8803 */
  if (!C.zf) goto L_115a8803;
  /* 115a87ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a87f0 je 0x115a87fc */
  if (C.zf) goto L_115a87fc;
  /* 115a87f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115a87f4 call 0x115a8d00 */
  push32(0x115a87f9u); f_115a8d00();
  /* 115a87f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a87fc:;
  /* 115a87fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a87fe jmp 0x115a8906 */
  goto L_115a8906;
L_115a8803:;
  /* 115a8803 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8807 jne 0x115a8820 */
  if (!C.zf) goto L_115a8820;
  /* 115a8809 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a880d je 0x115a8819 */
  if (C.zf) goto L_115a8819;
  /* 115a880f push 1 */
  push32((uint32_t)(0x1u));
  /* 115a8811 call 0x115a8d00 */
  push32(0x115a8816u); f_115a8d00();
  /* 115a8816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a8819:;
  /* 115a8819 push 3 */
  push32((uint32_t)(0x3u));
  /* 115a881b call 0x115a4a20 */
  push32(0x115a8820u); f_115a4a20();
L_115a8820:;
  /* 115a8820 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8824 je 0x115a8832 */
  if (C.zf) goto L_115a8832;
  /* 115a8826 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a882a je 0x115a8832 */
  if (C.zf) goto L_115a8832;
  /* 115a882c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8830 jne 0x115a885e */
  if (!C.zf) goto L_115a885e;
L_115a8832:;
  /* 115a8832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8835 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 115a8838 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115a883b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a883e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 115a8845 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8849 jne 0x115a885e */
  if (!C.zf) goto L_115a885e;
  /* 115a884b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a884e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 115a8851 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115a8854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8857 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_115a885e:;
  /* 115a885e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8862 jne 0x115a88a0 */
  if (!C.zf) goto L_115a88a0;
  /* 115a8864 mov eax, dword ptr [0x115cfc78] */
  EAX = (r32((uint32_t)(0x115cfc78)));
  /* 115a8869 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115a886c jmp 0x115a8877 */
  goto L_115a8877;
L_115a886e:;
  /* 115a886e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8871 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8874 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115a8877:;
  /* 115a8877 mov edx, dword ptr [0x115cfc78] */
  EDX = (r32((uint32_t)(0x115cfc78)));
  /* 115a887d add edx, dword ptr [0x115cfc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115cfc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8883 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8886 jge 0x115a889e */
  if ((C.sf==C.of)) goto L_115a889e;
  /* 115a8888 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a888b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a888e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8891 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 115a8894 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 115a889c jmp 0x115a886e */
  goto L_115a886e;
L_115a889e:;
  /* 115a889e jmp 0x115a88a9 */
  goto L_115a88a9;
L_115a88a0:;
  /* 115a88a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a88a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_115a88a9:;
  /* 115a88a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a88ad je 0x115a88b9 */
  if (C.zf) goto L_115a88b9;
  /* 115a88af push 1 */
  push32((uint32_t)(0x1u));
  /* 115a88b1 call 0x115a8d00 */
  push32(0x115a88b6u); f_115a8d00();
  /* 115a88b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a88b9:;
  /* 115a88b9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a88bd jne 0x115a88d0 */
  if (!C.zf) goto L_115a88d0;
  /* 115a88bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a88c2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 115a88c5 push edx */
  push32((uint32_t)(EDX));
  /* 115a88c6 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a88c8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x115a88cbu);
  /* 115a88cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a88ce jmp 0x115a88da */
  goto L_115a88da;
L_115a88d0:;
  /* 115a88d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a88d3 push eax */
  push32((uint32_t)(EAX));
  /* 115a88d4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x115a88d7u);
  /* 115a88d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a88da:;
  /* 115a88da cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a88de je 0x115a88ec */
  if (C.zf) goto L_115a88ec;
  /* 115a88e0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a88e4 je 0x115a88ec */
  if (C.zf) goto L_115a88ec;
  /* 115a88e6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a88ea jne 0x115a8904 */
  if (!C.zf) goto L_115a8904;
L_115a88ec:;
  /* 115a88ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a88ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a88f2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 115a88f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a88f9 jne 0x115a8904 */
  if (!C.zf) goto L_115a8904;
  /* 115a88fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a88fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8901 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_115a8904:;
  /* 115a8904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a8906:;
  /* 115a8906 mov esp, ebp */
  ESP = (EBP);
  /* 115a8908 pop ebp */
  EBP = (pop32());
  /* 115a8909 ret  */
  ESPCHK(0x115a8700u, _esp0);
  ESP += 4; return;
}

/* FUN_10008940 @ 0x115a8940 (91 bytes, 35 insns) */
void f_115a8940(void) {
  FTRACE(0x115a8940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8940 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8941 mov ebp, esp */
  EBP = (ESP);
  /* 115a8943 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8944 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8947 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a894a:;
  /* 115a894a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a894d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115a8950 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8953 je 0x115a8973 */
  if (C.zf) goto L_115a8973;
  /* 115a8955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8958 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a895b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a895e mov ecx, dword ptr [0x115cfc84] */
  ECX = (r32((uint32_t)(0x115cfc84)));
  /* 115a8964 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a8967 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a896a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a896c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a896f jae 0x115a8973 */
  if (!C.cf) goto L_115a8973;
  /* 115a8971 jmp 0x115a894a */
  goto L_115a894a;
L_115a8973:;
  /* 115a8973 mov eax, dword ptr [0x115cfc84] */
  EAX = (r32((uint32_t)(0x115cfc84)));
  /* 115a8978 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a897b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a897e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8980 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8983 jae 0x115a8995 */
  if (!C.cf) goto L_115a8995;
  /* 115a8985 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8988 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 115a898b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a898e jne 0x115a8995 */
  if (!C.zf) goto L_115a8995;
  /* 115a8990 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8993 jmp 0x115a8997 */
  goto L_115a8997;
L_115a8995:;
  /* 115a8995 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a8997:;
  /* 115a8997 mov esp, ebp */
  ESP = (EBP);
  /* 115a8999 pop ebp */
  EBP = (pop32());
  /* 115a899a ret  */
  ESPCHK(0x115a8940u, _esp0);
  ESP += 4; return;
}

/* FUN_100089a0 @ 0x115a89a0 (13 bytes, 6 insns) */
void f_115a89a0(void) {
  FTRACE(0x115a89a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a89a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a89a1 mov ebp, esp */
  EBP = (ESP);
  /* 115a89a3 call 0x115a4ca0 */
  push32(0x115a89a8u); f_115a4ca0();
  /* 115a89a8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a89ab pop ebp */
  EBP = (pop32());
  /* 115a89ac ret  */
  ESPCHK(0x115a89a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089b0 @ 0x115a89b0 (13 bytes, 6 insns) */
void f_115a89b0(void) {
  FTRACE(0x115a89b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a89b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a89b1 mov ebp, esp */
  EBP = (ESP);
  /* 115a89b3 call 0x115a4ca0 */
  push32(0x115a89b8u); f_115a4ca0();
  /* 115a89b8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a89bb pop ebp */
  EBP = (pop32());
  /* 115a89bc ret  */
  ESPCHK(0x115a89b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x115a89c0 (187 bytes, 54 insns) */
void f_115a89c0(void) {
  FTRACE(0x115a89c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a89c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a89c1 mov ebp, esp */
  EBP = (ESP);
  /* 115a89c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a89c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115a89cd cmp dword ptr [0x115d179c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d179c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a89d4 jne 0x115a8a33 */
  if (!C.zf) goto L_115a8a33;
  /* 115a89d6 push 0x115cc4e8 */
  push32((uint32_t)(0x115cc4e8u));
  /* 115a89db call dword ptr [0x115d43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43a8))), 0x115a89e1u);
  /* 115a89e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a89e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a89e8 je 0x115a8a07 */
  if (C.zf) goto L_115a8a07;
  /* 115a89ea push 0x115cd0ec */
  push32((uint32_t)(0x115cd0ecu));
  /* 115a89ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a89f2 push eax */
  push32((uint32_t)(EAX));
  /* 115a89f3 call dword ptr [0x115d43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43a4))), 0x115a89f9u);
  /* 115a89f9 mov dword ptr [0x115d179c], eax */
  w32((uint32_t)(0x115d179c), (EAX));
  /* 115a89fe cmp dword ptr [0x115d179c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d179c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8a05 jne 0x115a8a0b */
  if (!C.zf) goto L_115a8a0b;
L_115a8a07:;
  /* 115a8a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a8a09 jmp 0x115a8a77 */
  goto L_115a8a77;
L_115a8a0b:;
  /* 115a8a0b push 0x115cd0dc */
  push32((uint32_t)(0x115cd0dcu));
  /* 115a8a10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8a13 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8a14 call dword ptr [0x115d43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43a4))), 0x115a8a1au);
  /* 115a8a1a mov dword ptr [0x115d17a0], eax */
  w32((uint32_t)(0x115d17a0), (EAX));
  /* 115a8a1f push 0x115cd0c8 */
  push32((uint32_t)(0x115cd0c8u));
  /* 115a8a24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8a27 push edx */
  push32((uint32_t)(EDX));
  /* 115a8a28 call dword ptr [0x115d43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43a4))), 0x115a8a2eu);
  /* 115a8a2e mov dword ptr [0x115d17a4], eax */
  w32((uint32_t)(0x115d17a4), (EAX));
L_115a8a33:;
  /* 115a8a33 cmp dword ptr [0x115d17a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d17a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8a3a je 0x115a8a45 */
  if (C.zf) goto L_115a8a45;
  /* 115a8a3c call dword ptr [0x115d17a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d17a0))), 0x115a8a42u);
  /* 115a8a42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a8a45:;
  /* 115a8a45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8a49 je 0x115a8a61 */
  if (C.zf) goto L_115a8a61;
  /* 115a8a4b cmp dword ptr [0x115d17a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d17a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8a52 je 0x115a8a61 */
  if (C.zf) goto L_115a8a61;
  /* 115a8a54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8a57 push eax */
  push32((uint32_t)(EAX));
  /* 115a8a58 call dword ptr [0x115d17a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d17a4))), 0x115a8a5eu);
  /* 115a8a5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a8a61:;
  /* 115a8a61 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115a8a64 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8a65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8a68 push edx */
  push32((uint32_t)(EDX));
  /* 115a8a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8a6c push eax */
  push32((uint32_t)(EAX));
  /* 115a8a6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8a70 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8a71 call dword ptr [0x115d179c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d179c))), 0x115a8a77u);
L_115a8a77:;
  /* 115a8a77 mov esp, ebp */
  ESP = (EBP);
  /* 115a8a79 pop ebp */
  EBP = (pop32());
  /* 115a8a7a ret  */
  ESPCHK(0x115a89c0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x115a8a80 (254 bytes, 109 insns) */
void f_115a8a80(void) {
  FTRACE(0x115a8a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8a80 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 115a8a84 push edi */
  push32((uint32_t)(EDI));
  /* 115a8a85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115a8a87 je 0x115a8b03 */
  if (C.zf) goto L_115a8b03;
  /* 115a8a89 push esi */
  push32((uint32_t)(ESI));
  /* 115a8a8a push ebx */
  push32((uint32_t)(EBX));
  /* 115a8a8b mov ebx, ecx */
  EBX = (ECX);
  /* 115a8a8d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 115a8a91 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 115a8a97 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 115a8a9b jne 0x115a8aa4 */
  if (!C.zf) goto L_115a8aa4;
  /* 115a8a9d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115a8aa0 jne 0x115a8b11 */
  if (!C.zf) goto L_115a8b11;
  /* 115a8aa2 jmp 0x115a8ac5 */
  goto L_115a8ac5;
L_115a8aa4:;
  /* 115a8aa4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115a8aa6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115a8aa7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115a8aa9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115a8aaa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115a8aab je 0x115a8ad2 */
  if (C.zf) goto L_115a8ad2;
  /* 115a8aad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115a8aaf je 0x115a8ada */
  if (C.zf) goto L_115a8ada;
  /* 115a8ab1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 115a8ab7 jne 0x115a8aa4 */
  if (!C.zf) goto L_115a8aa4;
  /* 115a8ab9 mov ebx, ecx */
  EBX = (ECX);
  /* 115a8abb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115a8abe jne 0x115a8b11 */
  if (!C.zf) goto L_115a8b11;
L_115a8ac0:;
  /* 115a8ac0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 115a8ac3 je 0x115a8ad2 */
  if (C.zf) goto L_115a8ad2;
L_115a8ac5:;
  /* 115a8ac5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115a8ac7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115a8ac8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115a8aca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115a8acb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115a8acd je 0x115a8afe */
  if (C.zf) goto L_115a8afe;
  /* 115a8acf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115a8ad0 jne 0x115a8ac5 */
  if (!C.zf) goto L_115a8ac5;
L_115a8ad2:;
  /* 115a8ad2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115a8ad6 pop ebx */
  EBX = (pop32());
  /* 115a8ad7 pop esi */
  ESI = (pop32());
  /* 115a8ad8 pop edi */
  EDI = (pop32());
  /* 115a8ad9 ret  */
  ESPCHK(0x115a8a80u, _esp0);
  ESP += 4; return;
L_115a8ada:;
  /* 115a8ada test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115a8ae0 je 0x115a8af4 */
  if (C.zf) goto L_115a8af4;
L_115a8ae2:;
  /* 115a8ae2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115a8ae4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115a8ae5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115a8ae6 je 0x115a8b76 */
  if (C.zf) goto L_115a8b76;
  /* 115a8aec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115a8af2 jne 0x115a8ae2 */
  if (!C.zf) goto L_115a8ae2;
L_115a8af4:;
  /* 115a8af4 mov ebx, ecx */
  EBX = (ECX);
  /* 115a8af6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115a8af9 jne 0x115a8b67 */
  if (!C.zf) goto L_115a8b67;
L_115a8afb:;
  /* 115a8afb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115a8afd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_115a8afe:;
  /* 115a8afe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115a8aff jne 0x115a8afb */
  if (!C.zf) goto L_115a8afb;
  /* 115a8b01 pop ebx */
  EBX = (pop32());
  /* 115a8b02 pop esi */
  ESI = (pop32());
L_115a8b03:;
  /* 115a8b03 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115a8b07 pop edi */
  EDI = (pop32());
  /* 115a8b08 ret  */
  ESPCHK(0x115a8a80u, _esp0);
  ESP += 4; return;
L_115a8b09:;
  /* 115a8b09 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115a8b0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8b0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115a8b0f je 0x115a8ac0 */
  if (C.zf) goto L_115a8ac0;
L_115a8b11:;
  /* 115a8b11 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115a8b16 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115a8b18 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8b1a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a8b1d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115a8b1f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 115a8b21 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8b24 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 115a8b29 je 0x115a8b09 */
  if (C.zf) goto L_115a8b09;
  /* 115a8b2b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 115a8b2d je 0x115a8b5b */
  if (C.zf) goto L_115a8b5b;
  /* 115a8b2f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 115a8b31 je 0x115a8b51 */
  if (C.zf) goto L_115a8b51;
  /* 115a8b33 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 115a8b39 je 0x115a8b47 */
  if (C.zf) goto L_115a8b47;
  /* 115a8b3b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 115a8b41 jne 0x115a8b09 */
  if (!C.zf) goto L_115a8b09;
  /* 115a8b43 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115a8b45 jmp 0x115a8b5f */
  goto L_115a8b5f;
L_115a8b47:;
  /* 115a8b47 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a8b4d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115a8b4f jmp 0x115a8b5f */
  goto L_115a8b5f;
L_115a8b51:;
  /* 115a8b51 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115a8b57 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115a8b59 jmp 0x115a8b5f */
  goto L_115a8b5f;
L_115a8b5b:;
  /* 115a8b5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115a8b5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_115a8b5f:;
  /* 115a8b5f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8b62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a8b64 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115a8b65 je 0x115a8b71 */
  if (C.zf) goto L_115a8b71;
L_115a8b67:;
  /* 115a8b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115a8b69:;
  /* 115a8b69 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 115a8b6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8b6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115a8b6f jne 0x115a8b69 */
  if (!C.zf) goto L_115a8b69;
L_115a8b71:;
  /* 115a8b71 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 115a8b74 jne 0x115a8afb */
  if (!C.zf) goto L_115a8afb;
L_115a8b76:;
  /* 115a8b76 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115a8b7a pop ebx */
  EBX = (pop32());
  /* 115a8b7b pop esi */
  ESI = (pop32());
  /* 115a8b7c pop edi */
  EDI = (pop32());
  /* 115a8b7d ret  */
  ESPCHK(0x115a8a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b80 @ 0x115a8b80 (55 bytes, 16 insns) */
void f_115a8b80(void) {
  FTRACE(0x115a8b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8b80 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8b81 mov ebp, esp */
  EBP = (ESP);
  /* 115a8b83 mov eax, dword ptr [0x115cfb84] */
  EAX = (r32((uint32_t)(0x115cfb84)));
  /* 115a8b88 push eax */
  push32((uint32_t)(EAX));
  /* 115a8b89 call dword ptr [0x115d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d435c))), 0x115a8b8fu);
  /* 115a8b8f mov ecx, dword ptr [0x115cfb74] */
  ECX = (r32((uint32_t)(0x115cfb74)));
  /* 115a8b95 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8b96 call dword ptr [0x115d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d435c))), 0x115a8b9cu);
  /* 115a8b9c mov edx, dword ptr [0x115cfb64] */
  EDX = (r32((uint32_t)(0x115cfb64)));
  /* 115a8ba2 push edx */
  push32((uint32_t)(EDX));
  /* 115a8ba3 call dword ptr [0x115d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d435c))), 0x115a8ba9u);
  /* 115a8ba9 mov eax, dword ptr [0x115cfb44] */
  EAX = (r32((uint32_t)(0x115cfb44)));
  /* 115a8bae push eax */
  push32((uint32_t)(EAX));
  /* 115a8baf call dword ptr [0x115d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d435c))), 0x115a8bb5u);
  /* 115a8bb5 pop ebp */
  EBP = (pop32());
  /* 115a8bb6 ret  */
  ESPCHK(0x115a8b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x115a8bc0 (159 bytes, 47 insns) */
void f_115a8bc0(void) {
  FTRACE(0x115a8bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8bc1 mov ebp, esp */
  EBP = (ESP);
  /* 115a8bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8bc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115a8bcb jmp 0x115a8bd6 */
  goto L_115a8bd6;
L_115a8bcd:;
  /* 115a8bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8bd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8bd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a8bd6:;
  /* 115a8bd6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8bda jge 0x115a8c29 */
  if ((C.sf==C.of)) goto L_115a8c29;
  /* 115a8bdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8bdf cmp dword ptr [ecx*4 + 0x115cfb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x115cfb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8be7 je 0x115a8c27 */
  if (C.zf) goto L_115a8c27;
  /* 115a8be9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8bed je 0x115a8c27 */
  if (C.zf) goto L_115a8c27;
  /* 115a8bef cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8bf3 je 0x115a8c27 */
  if (C.zf) goto L_115a8c27;
  /* 115a8bf5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8bf9 je 0x115a8c27 */
  if (C.zf) goto L_115a8c27;
  /* 115a8bfb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8bff je 0x115a8c27 */
  if (C.zf) goto L_115a8c27;
  /* 115a8c01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8c04 mov eax, dword ptr [edx*4 + 0x115cfb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x115cfb40)));
  /* 115a8c0b push eax */
  push32((uint32_t)(EAX));
  /* 115a8c0c call dword ptr [0x115d43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b8))), 0x115a8c12u);
  /* 115a8c12 push 2 */
  push32((uint32_t)(0x2u));
  /* 115a8c14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8c17 mov edx, dword ptr [ecx*4 + 0x115cfb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x115cfb40)));
  /* 115a8c1e push edx */
  push32((uint32_t)(EDX));
  /* 115a8c1f call 0x115a5cf0 */
  push32(0x115a8c24u); f_115a5cf0();
  /* 115a8c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a8c27:;
  /* 115a8c27 jmp 0x115a8bcd */
  goto L_115a8bcd;
L_115a8c29:;
  /* 115a8c29 mov eax, dword ptr [0x115cfb64] */
  EAX = (r32((uint32_t)(0x115cfb64)));
  /* 115a8c2e push eax */
  push32((uint32_t)(EAX));
  /* 115a8c2f call dword ptr [0x115d43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b8))), 0x115a8c35u);
  /* 115a8c35 mov ecx, dword ptr [0x115cfb74] */
  ECX = (r32((uint32_t)(0x115cfb74)));
  /* 115a8c3b push ecx */
  push32((uint32_t)(ECX));
  /* 115a8c3c call dword ptr [0x115d43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b8))), 0x115a8c42u);
  /* 115a8c42 mov edx, dword ptr [0x115cfb84] */
  EDX = (r32((uint32_t)(0x115cfb84)));
  /* 115a8c48 push edx */
  push32((uint32_t)(EDX));
  /* 115a8c49 call dword ptr [0x115d43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b8))), 0x115a8c4fu);
  /* 115a8c4f mov eax, dword ptr [0x115cfb44] */
  EAX = (r32((uint32_t)(0x115cfb44)));
  /* 115a8c54 push eax */
  push32((uint32_t)(EAX));
  /* 115a8c55 call dword ptr [0x115d43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b8))), 0x115a8c5bu);
  /* 115a8c5b mov esp, ebp */
  ESP = (EBP);
  /* 115a8c5d pop ebp */
  EBP = (pop32());
  /* 115a8c5e ret  */
  ESPCHK(0x115a8bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c60 @ 0x115a8c60 (151 bytes, 46 insns) */
void f_115a8c60(void) {
  FTRACE(0x115a8c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8c60 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8c61 mov ebp, esp */
  EBP = (ESP);
  /* 115a8c63 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8c67 cmp dword ptr [eax*4 + 0x115cfb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x115cfb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8c6f jne 0x115a8ce2 */
  if (!C.zf) goto L_115a8ce2;
  /* 115a8c71 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 115a8c76 push 0x115cd0f8 */
  push32((uint32_t)(0x115cd0f8u));
  /* 115a8c7b push 2 */
  push32((uint32_t)(0x2u));
  /* 115a8c7d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 115a8c7f call 0x115a5260 */
  push32(0x115a8c84u); f_115a5260();
  /* 115a8c84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8c87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a8c8a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8c8e jne 0x115a8c9a */
  if (!C.zf) goto L_115a8c9a;
  /* 115a8c90 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115a8c92 call 0x115a41d0 */
  push32(0x115a8c97u); f_115a41d0();
  /* 115a8c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a8c9a:;
  /* 115a8c9a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115a8c9c call 0x115a8c60 */
  push32(0x115a8ca1u); f_115a8c60();
  /* 115a8ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8ca4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8ca7 cmp dword ptr [ecx*4 + 0x115cfb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x115cfb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8caf jne 0x115a8cca */
  if (!C.zf) goto L_115a8cca;
  /* 115a8cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8cb4 push edx */
  push32((uint32_t)(EDX));
  /* 115a8cb5 call dword ptr [0x115d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d435c))), 0x115a8cbbu);
  /* 115a8cbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8cbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8cc1 mov dword ptr [eax*4 + 0x115cfb40], ecx */
  w32((uint32_t)(EAX*4 + 0x115cfb40), (ECX));
  /* 115a8cc8 jmp 0x115a8cd8 */
  goto L_115a8cd8;
L_115a8cca:;
  /* 115a8cca push 2 */
  push32((uint32_t)(0x2u));
  /* 115a8ccc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8ccf push edx */
  push32((uint32_t)(EDX));
  /* 115a8cd0 call 0x115a5cf0 */
  push32(0x115a8cd5u); f_115a5cf0();
  /* 115a8cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a8cd8:;
  /* 115a8cd8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115a8cda call 0x115a8d00 */
  push32(0x115a8cdfu); f_115a8d00();
  /* 115a8cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a8ce2:;
  /* 115a8ce2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8ce5 mov ecx, dword ptr [eax*4 + 0x115cfb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x115cfb40)));
  /* 115a8cec push ecx */
  push32((uint32_t)(ECX));
  /* 115a8ced call dword ptr [0x115d434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d434c))), 0x115a8cf3u);
  /* 115a8cf3 mov esp, ebp */
  ESP = (EBP);
  /* 115a8cf5 pop ebp */
  EBP = (pop32());
  /* 115a8cf6 ret  */
  ESPCHK(0x115a8c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d00 @ 0x115a8d00 (22 bytes, 8 insns) */
void f_115a8d00(void) {
  FTRACE(0x115a8d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8d00 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8d01 mov ebp, esp */
  EBP = (ESP);
  /* 115a8d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8d06 mov ecx, dword ptr [eax*4 + 0x115cfb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x115cfb40)));
  /* 115a8d0d push ecx */
  push32((uint32_t)(ECX));
  /* 115a8d0e call dword ptr [0x115d4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4348))), 0x115a8d14u);
  /* 115a8d14 pop ebp */
  EBP = (pop32());
  /* 115a8d15 ret  */
  ESPCHK(0x115a8d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d20 @ 0x115a8d20 (26 bytes, 10 insns) */
void f_115a8d20(void) {
  FTRACE(0x115a8d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8d20 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8d21 mov ebp, esp */
  EBP = (ESP);
  /* 115a8d23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8d26 push eax */
  push32((uint32_t)(EAX));
  /* 115a8d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a8d29 call dword ptr [0x115d4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4350))), 0x115a8d2fu);
  /* 115a8d2f push 0xff */
  push32((uint32_t)(0xffu));
  /* 115a8d34 call dword ptr [0x115d43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43b4))), 0x115a8d3au);
  /* 115a8d3a pop ebp */
  EBP = (pop32());
  /* 115a8d3b ret  */
  ESPCHK(0x115a8d20u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x115a8d40 (446 bytes, 130 insns) */
void f_115a8d40(void) {
  FTRACE(0x115a8d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8d40 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8d41 mov ebp, esp */
  EBP = (ESP);
  /* 115a8d43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a8d46 call 0x115a4ca0 */
  push32(0x115a8d4bu); f_115a4ca0();
  /* 115a8d4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a8d4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8d51 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 115a8d54 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8d58 push edx */
  push32((uint32_t)(EDX));
  /* 115a8d59 call 0x115a8f00 */
  push32(0x115a8d5eu); f_115a8f00();
  /* 115a8d5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8d61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115a8d64 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8d68 je 0x115a8d73 */
  if (C.zf) goto L_115a8d73;
  /* 115a8d6a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8d6d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8d71 jne 0x115a8d82 */
  if (!C.zf) goto L_115a8d82;
L_115a8d73:;
  /* 115a8d73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8d76 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8d77 call dword ptr [0x115d4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4340))), 0x115a8d7du);
  /* 115a8d7d jmp 0x115a8efa */
  goto L_115a8efa;
L_115a8d82:;
  /* 115a8d82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8d85 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8d89 jne 0x115a8d9f */
  if (!C.zf) goto L_115a8d9f;
  /* 115a8d8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8d8e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 115a8d95 mov eax, 1 */
  EAX = (0x1u);
  /* 115a8d9a jmp 0x115a8efa */
  goto L_115a8efa;
L_115a8d9f:;
  /* 115a8d9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8da2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8da6 jne 0x115a8db0 */
  if (!C.zf) goto L_115a8db0;
  /* 115a8da8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115a8dab jmp 0x115a8efa */
  goto L_115a8efa;
L_115a8db0:;
  /* 115a8db0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8db3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115a8db6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a8db9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8dbc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 115a8dbf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 115a8dc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8dc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8dc8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 115a8dcb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8dce cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8dd2 jne 0x115a8ed7 */
  if (!C.zf) goto L_115a8ed7;
  /* 115a8dd8 mov eax, dword ptr [0x115cfc78] */
  EAX = (r32((uint32_t)(0x115cfc78)));
  /* 115a8ddd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115a8de0 jmp 0x115a8deb */
  goto L_115a8deb;
L_115a8de2:;
  /* 115a8de2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a8de5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8de8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_115a8deb:;
  /* 115a8deb mov edx, dword ptr [0x115cfc78] */
  EDX = (r32((uint32_t)(0x115cfc78)));
  /* 115a8df1 add edx, dword ptr [0x115cfc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x115cfc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8df7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8dfa jge 0x115a8e12 */
  if ((C.sf==C.of)) goto L_115a8e12;
  /* 115a8dfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a8dff imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a8e02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8e05 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 115a8e08 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 115a8e10 jmp 0x115a8de2 */
  goto L_115a8de2;
L_115a8e12:;
  /* 115a8e12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8e15 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 115a8e18 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115a8e1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8e1e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8e24 jne 0x115a8e35 */
  if (!C.zf) goto L_115a8e35;
  /* 115a8e26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8e29 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 115a8e30 jmp 0x115a8ebd */
  goto L_115a8ebd;
L_115a8e35:;
  /* 115a8e35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8e38 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8e3e jne 0x115a8e4c */
  if (!C.zf) goto L_115a8e4c;
  /* 115a8e40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8e43 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 115a8e4a jmp 0x115a8ebd */
  goto L_115a8ebd;
L_115a8e4c:;
  /* 115a8e4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8e4f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8e55 jne 0x115a8e63 */
  if (!C.zf) goto L_115a8e63;
  /* 115a8e57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8e5a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 115a8e61 jmp 0x115a8ebd */
  goto L_115a8ebd;
L_115a8e63:;
  /* 115a8e63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8e66 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8e6c jne 0x115a8e7a */
  if (!C.zf) goto L_115a8e7a;
  /* 115a8e6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8e71 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 115a8e78 jmp 0x115a8ebd */
  goto L_115a8ebd;
L_115a8e7a:;
  /* 115a8e7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8e7d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8e83 jne 0x115a8e91 */
  if (!C.zf) goto L_115a8e91;
  /* 115a8e85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8e88 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 115a8e8f jmp 0x115a8ebd */
  goto L_115a8ebd;
L_115a8e91:;
  /* 115a8e91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8e94 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8e9a jne 0x115a8ea8 */
  if (!C.zf) goto L_115a8ea8;
  /* 115a8e9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8e9f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 115a8ea6 jmp 0x115a8ebd */
  goto L_115a8ebd;
L_115a8ea8:;
  /* 115a8ea8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8eab cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8eb1 jne 0x115a8ebd */
  if (!C.zf) goto L_115a8ebd;
  /* 115a8eb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8eb6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_115a8ebd:;
  /* 115a8ebd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8ec0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 115a8ec3 push edx */
  push32((uint32_t)(EDX));
  /* 115a8ec4 push 8 */
  push32((uint32_t)(0x8u));
  /* 115a8ec6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x115a8ec9u);
  /* 115a8ec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8ecc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8ecf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a8ed2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 115a8ed5 jmp 0x115a8eee */
  goto L_115a8eee;
L_115a8ed7:;
  /* 115a8ed7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8eda mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 115a8ee1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a8ee4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115a8ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8ee8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x115a8eebu);
  /* 115a8eeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a8eee:;
  /* 115a8eee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a8ef1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115a8ef4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 115a8ef7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_115a8efa:;
  /* 115a8efa mov esp, ebp */
  ESP = (EBP);
  /* 115a8efc pop ebp */
  EBP = (pop32());
  /* 115a8efd ret  */
  ESPCHK(0x115a8d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x115a8f00 (89 bytes, 35 insns) */
void f_115a8f00(void) {
  FTRACE(0x115a8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8f00 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8f01 mov ebp, esp */
  EBP = (ESP);
  /* 115a8f03 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8f04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8f07 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115a8f0a:;
  /* 115a8f0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8f0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115a8f0f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8f12 je 0x115a8f32 */
  if (C.zf) goto L_115a8f32;
  /* 115a8f14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8f17 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8f1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a8f1d mov ecx, dword ptr [0x115cfc84] */
  ECX = (r32((uint32_t)(0x115cfc84)));
  /* 115a8f23 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a8f26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8f29 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8f2b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8f2e jae 0x115a8f32 */
  if (!C.cf) goto L_115a8f32;
  /* 115a8f30 jmp 0x115a8f0a */
  goto L_115a8f0a;
L_115a8f32:;
  /* 115a8f32 mov eax, dword ptr [0x115cfc84] */
  EAX = (r32((uint32_t)(0x115cfc84)));
  /* 115a8f37 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115a8f3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a8f3d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8f3f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8f42 jae 0x115a8f4e */
  if (!C.cf) goto L_115a8f4e;
  /* 115a8f44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8f47 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115a8f49 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8f4c je 0x115a8f52 */
  if (C.zf) goto L_115a8f52;
L_115a8f4e:;
  /* 115a8f4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a8f50 jmp 0x115a8f55 */
  goto L_115a8f55;
L_115a8f52:;
  /* 115a8f52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115a8f55:;
  /* 115a8f55 mov esp, ebp */
  ESP = (EBP);
  /* 115a8f57 pop ebp */
  EBP = (pop32());
  /* 115a8f58 ret  */
  ESPCHK(0x115a8f00u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x115a8f60 (48 bytes, 17 insns) */
void f_115a8f60(void) {
  FTRACE(0x115a8f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8f60 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8f61 mov ebp, esp */
  EBP = (ESP);
  /* 115a8f63 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8f64 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a8f66 call 0x115a8c60 */
  push32(0x115a8f6bu); f_115a8c60();
  /* 115a8f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8f6e mov eax, dword ptr [0x115d180c] */
  EAX = (r32((uint32_t)(0x115d180c)));
  /* 115a8f73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a8f76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8f79 mov dword ptr [0x115d180c], ecx */
  w32((uint32_t)(0x115d180c), (ECX));
  /* 115a8f7f push 9 */
  push32((uint32_t)(0x9u));
  /* 115a8f81 call 0x115a8d00 */
  push32(0x115a8f86u); f_115a8d00();
  /* 115a8f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8f89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a8f8c mov esp, ebp */
  ESP = (EBP);
  /* 115a8f8e pop ebp */
  EBP = (pop32());
  /* 115a8f8f ret  */
  ESPCHK(0x115a8f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f90 @ 0x115a8f90 (10 bytes, 5 insns) */
void f_115a8f90(void) {
  FTRACE(0x115a8f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8f90 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8f91 mov ebp, esp */
  EBP = (ESP);
  /* 115a8f93 mov eax, dword ptr [0x115d180c] */
  EAX = (r32((uint32_t)(0x115d180c)));
  /* 115a8f98 pop ebp */
  EBP = (pop32());
  /* 115a8f99 ret  */
  ESPCHK(0x115a8f90u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x115a8fa0 (45 bytes, 19 insns) */
void f_115a8fa0(void) {
  FTRACE(0x115a8fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a8fa1 mov ebp, esp */
  EBP = (ESP);
  /* 115a8fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8fa4 mov eax, dword ptr [0x115d180c] */
  EAX = (r32((uint32_t)(0x115d180c)));
  /* 115a8fa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a8fac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8fb0 je 0x115a8fc0 */
  if (C.zf) goto L_115a8fc0;
  /* 115a8fb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a8fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 115a8fb6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x115a8fb9u);
  /* 115a8fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a8fbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a8fbe jne 0x115a8fc4 */
  if (!C.zf) goto L_115a8fc4;
L_115a8fc0:;
  /* 115a8fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a8fc2 jmp 0x115a8fc9 */
  goto L_115a8fc9;
L_115a8fc4:;
  /* 115a8fc4 mov eax, 1 */
  EAX = (0x1u);
L_115a8fc9:;
  /* 115a8fc9 mov esp, ebp */
  ESP = (EBP);
  /* 115a8fcb pop ebp */
  EBP = (pop32());
  /* 115a8fcc ret  */
  ESPCHK(0x115a8fa0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x115a8fd0 (88 bytes, 40 insns) */
void f_115a8fd0(void) {
  FTRACE(0x115a8fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a8fd0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 115a8fd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 115a8fd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a8fda je 0x115a9023 */
  if (C.zf) goto L_115a9023;
  /* 115a8fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a8fde mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 115a8fe2 push edi */
  push32((uint32_t)(EDI));
  /* 115a8fe3 mov edi, ecx */
  EDI = (ECX);
  /* 115a8fe5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a8fe8 jb 0x115a9017 */
  if (C.cf) goto L_115a9017;
  /* 115a8fea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115a8fec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 115a8fef je 0x115a8ff9 */
  if (C.zf) goto L_115a8ff9;
  /* 115a8ff1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_115a8ff3:;
  /* 115a8ff3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115a8ff5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115a8ff6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115a8ff7 jne 0x115a8ff3 */
  if (!C.zf) goto L_115a8ff3;
L_115a8ff9:;
  /* 115a8ff9 mov ecx, eax */
  ECX = (EAX);
  /* 115a8ffb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 115a8ffe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9000 mov ecx, eax */
  ECX = (EAX);
  /* 115a9002 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 115a9005 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9007 mov ecx, edx */
  ECX = (EDX);
  /* 115a9009 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 115a900c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115a900f je 0x115a9017 */
  if (C.zf) goto L_115a9017;
  /* 115a9011 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 115a9013 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115a9015 je 0x115a901d */
  if (C.zf) goto L_115a901d;
L_115a9017:;
  /* 115a9017 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115a9019 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115a901a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 115a901b jne 0x115a9017 */
  if (!C.zf) goto L_115a9017;
L_115a901d:;
  /* 115a901d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115a9021 pop edi */
  EDI = (pop32());
  /* 115a9022 ret  */
  ESPCHK(0x115a8fd0u, _esp0);
  ESP += 4; return;
L_115a9023:;
  /* 115a9023 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115a9027 ret  */
  ESPCHK(0x115a8fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009030 @ 0x115a9030 (23 bytes, 10 insns) */
void f_115a9030(void) {
  FTRACE(0x115a9030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9030 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9031 mov ebp, esp */
  EBP = (ESP);
  /* 115a9033 mov eax, dword ptr [0x115d1808] */
  EAX = (r32((uint32_t)(0x115d1808)));
  /* 115a9038 push eax */
  push32((uint32_t)(EAX));
  /* 115a9039 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a903c push ecx */
  push32((uint32_t)(ECX));
  /* 115a903d call 0x115a9050 */
  push32(0x115a9042u); f_115a9050();
  /* 115a9042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9045 pop ebp */
  EBP = (pop32());
  /* 115a9046 ret  */
  ESPCHK(0x115a9030u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x115a9050 (87 bytes, 34 insns) */
void f_115a9050(void) {
  FTRACE(0x115a9050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9050 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9051 mov ebp, esp */
  EBP = (ESP);
  /* 115a9053 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9054 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9058 jbe 0x115a905e */
  if ((C.cf||C.zf)) goto L_115a905e;
  /* 115a905a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a905c jmp 0x115a90a3 */
  goto L_115a90a3;
L_115a905e:;
  /* 115a905e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9062 ja 0x115a9075 */
  if ((!C.cf&&!C.zf)) goto L_115a9075;
  /* 115a9064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9067 push eax */
  push32((uint32_t)(EAX));
  /* 115a9068 call 0x115a90b0 */
  push32(0x115a906du); f_115a90b0();
  /* 115a906d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9070 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a9073 jmp 0x115a907c */
  goto L_115a907c;
L_115a9075:;
  /* 115a9075 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115a907c:;
  /* 115a907c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9080 jne 0x115a9088 */
  if (!C.zf) goto L_115a9088;
  /* 115a9082 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9086 jne 0x115a908d */
  if (!C.zf) goto L_115a908d;
L_115a9088:;
  /* 115a9088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a908b jmp 0x115a90a3 */
  goto L_115a90a3;
L_115a908d:;
  /* 115a908d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9090 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9091 call 0x115a8fa0 */
  push32(0x115a9096u); f_115a8fa0();
  /* 115a9096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a909b jne 0x115a90a1 */
  if (!C.zf) goto L_115a90a1;
  /* 115a909d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a909f jmp 0x115a90a3 */
  goto L_115a90a3;
L_115a90a1:;
  /* 115a90a1 jmp 0x115a905e */
  goto L_115a905e;
L_115a90a3:;
  /* 115a90a3 mov esp, ebp */
  ESP = (EBP);
  /* 115a90a5 pop ebp */
  EBP = (pop32());
  /* 115a90a6 ret  */
  ESPCHK(0x115a9050u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x115a90b0 (109 bytes, 37 insns) */
void f_115a90b0(void) {
  FTRACE(0x115a90b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a90b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a90b1 mov ebp, esp */
  EBP = (ESP);
  /* 115a90b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a90b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a90b7 cmp eax, dword ptr [0x115cfc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115cfc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a90bd ja 0x115a90ed */
  if ((!C.cf&&!C.zf)) goto L_115a90ed;
  /* 115a90bf push 9 */
  push32((uint32_t)(0x9u));
  /* 115a90c1 call 0x115a8c60 */
  push32(0x115a90c6u); f_115a8c60();
  /* 115a90c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a90c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a90cc push ecx */
  push32((uint32_t)(ECX));
  /* 115a90cd call 0x115a9bf0 */
  push32(0x115a90d2u); f_115a9bf0();
  /* 115a90d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a90d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a90d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a90da call 0x115a8d00 */
  push32(0x115a90dfu); f_115a8d00();
  /* 115a90df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a90e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a90e6 je 0x115a90ed */
  if (C.zf) goto L_115a90ed;
  /* 115a90e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a90eb jmp 0x115a9119 */
  goto L_115a9119;
L_115a90ed:;
  /* 115a90ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a90f1 jne 0x115a90fa */
  if (!C.zf) goto L_115a90fa;
  /* 115a90f3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_115a90fa:;
  /* 115a90fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a90fd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9100 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 115a9103 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115a9106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9109 push eax */
  push32((uint32_t)(EAX));
  /* 115a910a push 0 */
  push32((uint32_t)(0x0u));
  /* 115a910c mov ecx, dword ptr [0x115d2fcc] */
  ECX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a9112 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9113 call dword ptr [0x115d433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d433c))), 0x115a9119u);
L_115a9119:;
  /* 115a9119 mov esp, ebp */
  ESP = (EBP);
  /* 115a911b pop ebp */
  EBP = (pop32());
  /* 115a911c ret  */
  ESPCHK(0x115a90b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009120 @ 0x115a9120 (10 bytes, 5 insns) */
void f_115a9120(void) {
  FTRACE(0x115a9120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9120 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9121 mov ebp, esp */
  EBP = (ESP);
  /* 115a9123 mov eax, 1 */
  EAX = (0x1u);
  /* 115a9128 pop ebp */
  EBP = (pop32());
  /* 115a9129 ret  */
  ESPCHK(0x115a9120u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x115a9130 (173 bytes, 59 insns) */
void f_115a9130(void) {
  FTRACE(0x115a9130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9130 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9131 mov ebp, esp */
  EBP = (ESP);
  /* 115a9133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9136 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a913a jbe 0x115a9143 */
  if ((C.cf||C.zf)) goto L_115a9143;
  /* 115a913c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a913e jmp 0x115a91d9 */
  goto L_115a91d9;
L_115a9143:;
  /* 115a9143 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a9145 call 0x115a8c60 */
  push32(0x115a914au); f_115a8c60();
  /* 115a914a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a914d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9150 push eax */
  push32((uint32_t)(EAX));
  /* 115a9151 call 0x115a9560 */
  push32(0x115a9156u); f_115a9560();
  /* 115a9156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9159 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a915c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9160 je 0x115a91a1 */
  if (C.zf) goto L_115a91a1;
  /* 115a9162 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115a9169 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a916c cmp ecx, dword ptr [0x115cfc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x115cfc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9172 ja 0x115a9192 */
  if ((!C.cf&&!C.zf)) goto L_115a9192;
  /* 115a9174 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a9177 push edx */
  push32((uint32_t)(EDX));
  /* 115a9178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a917b push eax */
  push32((uint32_t)(EAX));
  /* 115a917c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a917f push ecx */
  push32((uint32_t)(ECX));
  /* 115a9180 call 0x115aa430 */
  push32(0x115a9185u); f_115aa430();
  /* 115a9185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a918a je 0x115a9192 */
  if (C.zf) goto L_115a9192;
  /* 115a918c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a918f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115a9192:;
  /* 115a9192 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a9194 call 0x115a8d00 */
  push32(0x115a9199u); f_115a8d00();
  /* 115a9199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a919c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a919f jmp 0x115a91d9 */
  goto L_115a91d9;
L_115a91a1:;
  /* 115a91a1 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a91a3 call 0x115a8d00 */
  push32(0x115a91a8u); f_115a8d00();
  /* 115a91a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a91ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a91af jne 0x115a91b8 */
  if (!C.zf) goto L_115a91b8;
  /* 115a91b1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_115a91b8:;
  /* 115a91b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a91bb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a91be and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 115a91c0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 115a91c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a91c6 push ecx */
  push32((uint32_t)(ECX));
  /* 115a91c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a91ca push edx */
  push32((uint32_t)(EDX));
  /* 115a91cb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 115a91cd mov eax, dword ptr [0x115d2fcc] */
  EAX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a91d2 push eax */
  push32((uint32_t)(EAX));
  /* 115a91d3 call dword ptr [0x115d4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4344))), 0x115a91d9u);
L_115a91d9:;
  /* 115a91d9 mov esp, ebp */
  ESP = (EBP);
  /* 115a91db pop ebp */
  EBP = (pop32());
  /* 115a91dc ret  */
  ESPCHK(0x115a9130u, _esp0);
  ESP += 4; return;
}

/* FUN_100091e0 @ 0x115a91e0 (490 bytes, 165 insns) */
void f_115a91e0(void) {
  FTRACE(0x115a91e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a91e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a91e1 mov ebp, esp */
  EBP = (ESP);
  /* 115a91e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a91e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a91ea jne 0x115a91fd */
  if (!C.zf) goto L_115a91fd;
  /* 115a91ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a91ef push eax */
  push32((uint32_t)(EAX));
  /* 115a91f0 call 0x115a9030 */
  push32(0x115a91f5u); f_115a9030();
  /* 115a91f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a91f8 jmp 0x115a93c6 */
  goto L_115a93c6;
L_115a91fd:;
  /* 115a91fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9201 jne 0x115a9216 */
  if (!C.zf) goto L_115a9216;
  /* 115a9203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9206 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9207 call 0x115a93d0 */
  push32(0x115a920cu); f_115a93d0();
  /* 115a920c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a920f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a9211 jmp 0x115a93c6 */
  goto L_115a93c6;
L_115a9216:;
  /* 115a9216 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115a921d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9221 ja 0x115a9399 */
  if ((!C.cf&&!C.zf)) goto L_115a9399;
  /* 115a9227 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a9229 call 0x115a8c60 */
  push32(0x115a922eu); f_115a8c60();
  /* 115a922e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9234 push edx */
  push32((uint32_t)(EDX));
  /* 115a9235 call 0x115a9560 */
  push32(0x115a923au); f_115a9560();
  /* 115a923a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a923d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115a9240 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9244 je 0x115a935c */
  if (C.zf) goto L_115a935c;
  /* 115a924a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a924d cmp eax, dword ptr [0x115cfc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x115cfc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9253 ja 0x115a92d0 */
  if ((!C.cf&&!C.zf)) goto L_115a92d0;
  /* 115a9255 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a9258 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9259 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a925c push edx */
  push32((uint32_t)(EDX));
  /* 115a925d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a9260 push eax */
  push32((uint32_t)(EAX));
  /* 115a9261 call 0x115aa430 */
  push32(0x115a9266u); f_115aa430();
  /* 115a9266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a926b je 0x115a9275 */
  if (C.zf) goto L_115a9275;
  /* 115a926d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9270 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115a9273 jmp 0x115a92d0 */
  goto L_115a92d0;
L_115a9275:;
  /* 115a9275 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a9278 push edx */
  push32((uint32_t)(EDX));
  /* 115a9279 call 0x115a9bf0 */
  push32(0x115a927eu); f_115a9bf0();
  /* 115a927e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9281 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a9284 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9288 je 0x115a92d0 */
  if (C.zf) goto L_115a92d0;
  /* 115a928a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a928d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 115a9290 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9293 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115a9296 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9299 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a929c jae 0x115a92a6 */
  if (!C.cf) goto L_115a92a6;
  /* 115a929e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a92a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115a92a4 jmp 0x115a92ac */
  goto L_115a92ac;
L_115a92a6:;
  /* 115a92a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a92a9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115a92ac:;
  /* 115a92ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115a92af push edx */
  push32((uint32_t)(EDX));
  /* 115a92b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a92b3 push eax */
  push32((uint32_t)(EAX));
  /* 115a92b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a92b7 push ecx */
  push32((uint32_t)(ECX));
  /* 115a92b8 call 0x115abb40 */
  push32(0x115a92bdu); f_115abb40();
  /* 115a92bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a92c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a92c3 push edx */
  push32((uint32_t)(EDX));
  /* 115a92c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a92c7 push eax */
  push32((uint32_t)(EAX));
  /* 115a92c8 call 0x115a9620 */
  push32(0x115a92cdu); f_115a9620();
  /* 115a92cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a92d0:;
  /* 115a92d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a92d4 jne 0x115a9350 */
  if (!C.zf) goto L_115a9350;
  /* 115a92d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a92da jne 0x115a92e3 */
  if (!C.zf) goto L_115a92e3;
  /* 115a92dc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_115a92e3:;
  /* 115a92e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a92e6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a92e9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 115a92ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 115a92ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a92f2 push edx */
  push32((uint32_t)(EDX));
  /* 115a92f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a92f5 mov eax, dword ptr [0x115d2fcc] */
  EAX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a92fa push eax */
  push32((uint32_t)(EAX));
  /* 115a92fb call dword ptr [0x115d433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d433c))), 0x115a9301u);
  /* 115a9301 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115a9304 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a9308 je 0x115a9350 */
  if (C.zf) goto L_115a9350;
  /* 115a930a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a930d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 115a9310 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115a9313 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115a9316 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9319 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a931c jae 0x115a9326 */
  if (!C.cf) goto L_115a9326;
  /* 115a931e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9321 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 115a9324 jmp 0x115a932c */
  goto L_115a932c;
L_115a9326:;
  /* 115a9326 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a9329 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_115a932c:;
  /* 115a932c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115a932f push eax */
  push32((uint32_t)(EAX));
  /* 115a9330 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9333 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9334 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a9337 push edx */
  push32((uint32_t)(EDX));
  /* 115a9338 call 0x115abb40 */
  push32(0x115a933du); f_115abb40();
  /* 115a933d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9343 push eax */
  push32((uint32_t)(EAX));
  /* 115a9344 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115a9347 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9348 call 0x115a9620 */
  push32(0x115a934du); f_115a9620();
  /* 115a934d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115a9350:;
  /* 115a9350 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a9352 call 0x115a8d00 */
  push32(0x115a9357u); f_115a8d00();
  /* 115a9357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a935a jmp 0x115a9399 */
  goto L_115a9399;
L_115a935c:;
  /* 115a935c push 9 */
  push32((uint32_t)(0x9u));
  /* 115a935e call 0x115a8d00 */
  push32(0x115a9363u); f_115a8d00();
  /* 115a9363 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9366 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a936a jne 0x115a9373 */
  if (!C.zf) goto L_115a9373;
  /* 115a936c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_115a9373:;
  /* 115a9373 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a9376 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9379 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 115a937c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 115a937f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a9382 push eax */
  push32((uint32_t)(EAX));
  /* 115a9383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9386 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9387 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a9389 mov edx, dword ptr [0x115d2fcc] */
  EDX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a938f push edx */
  push32((uint32_t)(EDX));
  /* 115a9390 call dword ptr [0x115d4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4344))), 0x115a9396u);
  /* 115a9396 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115a9399:;
  /* 115a9399 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a939d jne 0x115a93a8 */
  if (!C.zf) goto L_115a93a8;
  /* 115a939f cmp dword ptr [0x115d1808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115d1808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a93a6 jne 0x115a93ad */
  if (!C.zf) goto L_115a93ad;
L_115a93a8:;
  /* 115a93a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115a93ab jmp 0x115a93c6 */
  goto L_115a93c6;
L_115a93ad:;
  /* 115a93ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115a93b0 push eax */
  push32((uint32_t)(EAX));
  /* 115a93b1 call 0x115a8fa0 */
  push32(0x115a93b6u); f_115a8fa0();
  /* 115a93b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a93b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a93bb jne 0x115a93c1 */
  if (!C.zf) goto L_115a93c1;
  /* 115a93bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115a93bf jmp 0x115a93c6 */
  goto L_115a93c6;
L_115a93c1:;
  /* 115a93c1 jmp 0x115a9216 */
  goto L_115a9216;
L_115a93c6:;
  /* 115a93c6 mov esp, ebp */
  ESP = (EBP);
  /* 115a93c8 pop ebp */
  EBP = (pop32());
  /* 115a93c9 ret  */
  ESPCHK(0x115a91e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x115a93d0 (104 bytes, 38 insns) */
void f_115a93d0(void) {
  FTRACE(0x115a93d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a93d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a93d1 mov ebp, esp */
  EBP = (ESP);
  /* 115a93d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115a93d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a93d8 jne 0x115a93dc */
  if (!C.zf) goto L_115a93dc;
  /* 115a93da jmp 0x115a9434 */
  goto L_115a9434;
L_115a93dc:;
  /* 115a93dc push 9 */
  push32((uint32_t)(0x9u));
  /* 115a93de call 0x115a8c60 */
  push32(0x115a93e3u); f_115a8c60();
  /* 115a93e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a93e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a93e9 push eax */
  push32((uint32_t)(EAX));
  /* 115a93ea call 0x115a9560 */
  push32(0x115a93efu); f_115a9560();
  /* 115a93ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a93f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115a93f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a93f9 je 0x115a9417 */
  if (C.zf) goto L_115a9417;
  /* 115a93fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a93fe push ecx */
  push32((uint32_t)(ECX));
  /* 115a93ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a9402 push edx */
  push32((uint32_t)(EDX));
  /* 115a9403 call 0x115a9620 */
  push32(0x115a9408u); f_115a9620();
  /* 115a9408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a940b push 9 */
  push32((uint32_t)(0x9u));
  /* 115a940d call 0x115a8d00 */
  push32(0x115a9412u); f_115a8d00();
  /* 115a9412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9415 jmp 0x115a9434 */
  goto L_115a9434;
L_115a9417:;
  /* 115a9417 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a9419 call 0x115a8d00 */
  push32(0x115a941eu); f_115a8d00();
  /* 115a941e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115a9424 push eax */
  push32((uint32_t)(EAX));
  /* 115a9425 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a9427 mov ecx, dword ptr [0x115d2fcc] */
  ECX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a942d push ecx */
  push32((uint32_t)(ECX));
  /* 115a942e call dword ptr [0x115d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d4368))), 0x115a9434u);
L_115a9434:;
  /* 115a9434 mov esp, ebp */
  ESP = (EBP);
  /* 115a9436 pop ebp */
  EBP = (pop32());
  /* 115a9437 ret  */
  ESPCHK(0x115a93d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x115a9440 (116 bytes, 34 insns) */
void f_115a9440(void) {
  FTRACE(0x115a9440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a9440 push ebp */
  push32((uint32_t)(EBP));
  /* 115a9441 mov ebp, esp */
  EBP = (ESP);
  /* 115a9443 push ecx */
  push32((uint32_t)(ECX));
  /* 115a9444 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 115a944b push 9 */
  push32((uint32_t)(0x9u));
  /* 115a944d call 0x115a8c60 */
  push32(0x115a9452u); f_115a8c60();
  /* 115a9452 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a9455 call 0x115aab50 */
  push32(0x115a945au); f_115aab50();
  /* 115a945a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a945c jge 0x115a9465 */
  if ((C.sf==C.of)) goto L_115a9465;
  /* 115a945e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_115a9465:;
  /* 115a9465 push 9 */
  push32((uint32_t)(0x9u));
  /* 115a9467 call 0x115a8d00 */
  push32(0x115a946cu); f_115a8d00();
  /* 115a946c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115a946f push 0 */
  push32((uint32_t)(0x0u));
  /* 115a9471 push 0 */
  push32((uint32_t)(0x0u));
  /* 115a9473 mov eax, dword ptr [0x115d2fcc] */
  EAX = (r32((uint32_t)(0x115d2fcc)));
  /* 115a9478 push eax */
  push32((uint32_t)(EAX));
  /* 115a9479 call dword ptr [0x115d437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d437c))), 0x115a947fu);
  /* 115a947f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115a9481 jne 0x115a94ad */
  if (!C.zf) goto L_115a94ad;
  /* 115a9483 call dword ptr [0x115d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115d43d8))), 0x115a9489u);
  /* 115a9489 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115a948c jne 0x115a94a6 */
  if (!C.zf) goto L_115a94a6;
  /* 115a948e call 0x115ad140 */
  push32(0x115a9493u); f_115ad140();
  /* 115a9493 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 115a9499 call 0x115ad130 */
  push32(0x115a949eu); f_115ad130();
  /* 115a949e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 115a94a4 jmp 0x115a94ad */
  goto L_115a94ad;
L_115a94a6:;
  /* 115a94a6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_115a94ad:;
  /* 115a94ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115a94b0 mov esp, ebp */
  ESP = (EBP);
  /* 115a94b2 pop ebp */
  EBP = (pop32());
  /* 115a94b3 ret  */
  ESPCHK(0x115a9440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094c0 @ 0x115a94c0 (10 bytes, 5 insns) */
void f_115a94c0(void) {
  FTRACE(0x115a94c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115a94c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115a94c1 mov ebp, esp */
  EBP = (ESP);
  /* 115a94c3 call 0x115a9440 */
  push32(0x115a94c8u); f_115a9440();
  /* 115a94c8 pop ebp */
  EBP = (pop32());
  /* 115a94c9 ret  */
  ESPCHK(0x115a94c0u, _esp0);
  ESP += 4; return;
}

