#include "recomp.h"

/* OnInit @ 0x111a1005 (5 bytes, 1 insns) */
void f_111a1005(void) {
  FTRACE(0x111a1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a1005 jmp 0x111a1030 */
  f_111a1030(); return;
}

/* thunk_FUN_10001b50 @ 0x111a100a (5 bytes, 1 insns) */
void f_111a100a(void) {
  FTRACE(0x111a100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a100a jmp 0x111a1b50 */
  f_111a1b50(); return;
}

/* ProcessScenary @ 0x111a100f (5 bytes, 1 insns) */
void f_111a100f(void) {
  FTRACE(0x111a100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a100f jmp 0x111a1bb0 */
  f_111a1bb0(); return;
}

/* FUN_10001030 @ 0x111a1030 (2276 bytes, 601 insns) */
void f_111a1030(void) {
  FTRACE(0x111a1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a1030 push ebp */
  push32((uint32_t)(EBP));
  /* 111a1031 mov ebp, esp */
  EBP = (ESP);
  /* 111a1033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a1036 push ebx */
  push32((uint32_t)(EBX));
  /* 111a1037 push esi */
  push32((uint32_t)(ESI));
  /* 111a1038 push edi */
  push32((uint32_t)(EDI));
  /* 111a1039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 111a103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 111a1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 111a1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111a1048 mov esi, esp */
  ESI = (ESP);
  /* 111a104a push 0x111cc29c */
  push32((uint32_t)(0x111cc29cu));
  /* 111a104f push 0x111d1440 */
  push32((uint32_t)(0x111d1440u));
  /* 111a1054 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a105au);
  /* 111a105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a105f call 0x111a40a0 */
  push32(0x111a1064u); f_111a40a0();
  /* 111a1064 mov esi, esp */
  ESI = (ESP);
  /* 111a1066 push 0x111cc294 */
  push32((uint32_t)(0x111cc294u));
  /* 111a106b push 0x111d1460 */
  push32((uint32_t)(0x111d1460u));
  /* 111a1070 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a1076u);
  /* 111a1076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a107b call 0x111a40a0 */
  push32(0x111a1080u); f_111a40a0();
  /* 111a1080 mov esi, esp */
  ESI = (ESP);
  /* 111a1082 push 0x111cc288 */
  push32((uint32_t)(0x111cc288u));
  /* 111a1087 push 0x111d1488 */
  push32((uint32_t)(0x111d1488u));
  /* 111a108c call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a1092u);
  /* 111a1092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1097 call 0x111a40a0 */
  push32(0x111a109cu); f_111a40a0();
  /* 111a109c mov esi, esp */
  ESI = (ESP);
  /* 111a109e push 0x111cc27c */
  push32((uint32_t)(0x111cc27cu));
  /* 111a10a3 push 0x111d1480 */
  push32((uint32_t)(0x111d1480u));
  /* 111a10a8 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a10aeu);
  /* 111a10ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a10b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a10b3 call 0x111a40a0 */
  push32(0x111a10b8u); f_111a40a0();
  /* 111a10b8 mov esi, esp */
  ESI = (ESP);
  /* 111a10ba push 0x111cc270 */
  push32((uint32_t)(0x111cc270u));
  /* 111a10bf push 0x111d1478 */
  push32((uint32_t)(0x111d1478u));
  /* 111a10c4 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a10cau);
  /* 111a10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a10cf call 0x111a40a0 */
  push32(0x111a10d4u); f_111a40a0();
  /* 111a10d4 mov esi, esp */
  ESI = (ESP);
  /* 111a10d6 push 0x111cc264 */
  push32((uint32_t)(0x111cc264u));
  /* 111a10db push 0x111d1470 */
  push32((uint32_t)(0x111d1470u));
  /* 111a10e0 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a10e6u);
  /* 111a10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a10eb call 0x111a40a0 */
  push32(0x111a10f0u); f_111a40a0();
  /* 111a10f0 mov esi, esp */
  ESI = (ESP);
  /* 111a10f2 push 0x111cc258 */
  push32((uint32_t)(0x111cc258u));
  /* 111a10f7 push 0x111d1468 */
  push32((uint32_t)(0x111d1468u));
  /* 111a10fc call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a1102u);
  /* 111a1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1107 call 0x111a40a0 */
  push32(0x111a110cu); f_111a40a0();
  /* 111a110c mov esi, esp */
  ESI = (ESP);
  /* 111a110e push 0x111cc250 */
  push32((uint32_t)(0x111cc250u));
  /* 111a1113 push 0x111d15a0 */
  push32((uint32_t)(0x111d15a0u));
  /* 111a1118 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a111eu);
  /* 111a111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1123 call 0x111a40a0 */
  push32(0x111a1128u); f_111a40a0();
  /* 111a1128 mov esi, esp */
  ESI = (ESP);
  /* 111a112a push 0x111cc244 */
  push32((uint32_t)(0x111cc244u));
  /* 111a112f push 0x111d1580 */
  push32((uint32_t)(0x111d1580u));
  /* 111a1134 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a113au);
  /* 111a113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a113f call 0x111a40a0 */
  push32(0x111a1144u); f_111a40a0();
  /* 111a1144 mov esi, esp */
  ESI = (ESP);
  /* 111a1146 push 0x111cc238 */
  push32((uint32_t)(0x111cc238u));
  /* 111a114b push 0x111d1578 */
  push32((uint32_t)(0x111d1578u));
  /* 111a1150 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a1156u);
  /* 111a1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a115b call 0x111a40a0 */
  push32(0x111a1160u); f_111a40a0();
  /* 111a1160 mov esi, esp */
  ESI = (ESP);
  /* 111a1162 push 0x111cc230 */
  push32((uint32_t)(0x111cc230u));
  /* 111a1167 push 0x111d1588 */
  push32((uint32_t)(0x111d1588u));
  /* 111a116c call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a1172u);
  /* 111a1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1177 call 0x111a40a0 */
  push32(0x111a117cu); f_111a40a0();
  /* 111a117c mov esi, esp */
  ESI = (ESP);
  /* 111a117e push 0x111cc228 */
  push32((uint32_t)(0x111cc228u));
  /* 111a1183 push 0x111d1598 */
  push32((uint32_t)(0x111d1598u));
  /* 111a1188 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a118eu);
  /* 111a118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1193 call 0x111a40a0 */
  push32(0x111a1198u); f_111a40a0();
  /* 111a1198 mov esi, esp */
  ESI = (ESP);
  /* 111a119a push 0x111cc220 */
  push32((uint32_t)(0x111cc220u));
  /* 111a119f push 0x111d1590 */
  push32((uint32_t)(0x111d1590u));
  /* 111a11a4 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a11aau);
  /* 111a11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a11af call 0x111a40a0 */
  push32(0x111a11b4u); f_111a40a0();
  /* 111a11b4 mov esi, esp */
  ESI = (ESP);
  /* 111a11b6 push 0x111cc218 */
  push32((uint32_t)(0x111cc218u));
  /* 111a11bb push 0x111d1518 */
  push32((uint32_t)(0x111d1518u));
  /* 111a11c0 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a11c6u);
  /* 111a11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a11cb call 0x111a40a0 */
  push32(0x111a11d0u); f_111a40a0();
  /* 111a11d0 mov esi, esp */
  ESI = (ESP);
  /* 111a11d2 push 0x111cc210 */
  push32((uint32_t)(0x111cc210u));
  /* 111a11d7 push 0x111d1520 */
  push32((uint32_t)(0x111d1520u));
  /* 111a11dc call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a11e2u);
  /* 111a11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a11e7 call 0x111a40a0 */
  push32(0x111a11ecu); f_111a40a0();
  /* 111a11ec mov esi, esp */
  ESI = (ESP);
  /* 111a11ee push 0x111cc208 */
  push32((uint32_t)(0x111cc208u));
  /* 111a11f3 push 0x111d1528 */
  push32((uint32_t)(0x111d1528u));
  /* 111a11f8 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a11feu);
  /* 111a11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1203 call 0x111a40a0 */
  push32(0x111a1208u); f_111a40a0();
  /* 111a1208 mov esi, esp */
  ESI = (ESP);
  /* 111a120a push 0x111cc200 */
  push32((uint32_t)(0x111cc200u));
  /* 111a120f push 0x111d15c8 */
  push32((uint32_t)(0x111d15c8u));
  /* 111a1214 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a121au);
  /* 111a121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a121f call 0x111a40a0 */
  push32(0x111a1224u); f_111a40a0();
  /* 111a1224 mov esi, esp */
  ESI = (ESP);
  /* 111a1226 push 0x111cc1f8 */
  push32((uint32_t)(0x111cc1f8u));
  /* 111a122b push 0x111d13e0 */
  push32((uint32_t)(0x111d13e0u));
  /* 111a1230 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a1236u);
  /* 111a1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a123b call 0x111a40a0 */
  push32(0x111a1240u); f_111a40a0();
  /* 111a1240 mov esi, esp */
  ESI = (ESP);
  /* 111a1242 push 0x111cc1f0 */
  push32((uint32_t)(0x111cc1f0u));
  /* 111a1247 push 0x111d1498 */
  push32((uint32_t)(0x111d1498u));
  /* 111a124c call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a1252u);
  /* 111a1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1257 call 0x111a40a0 */
  push32(0x111a125cu); f_111a40a0();
  /* 111a125c mov esi, esp */
  ESI = (ESP);
  /* 111a125e push 0x111cc1e8 */
  push32((uint32_t)(0x111cc1e8u));
  /* 111a1263 push 0x111d1490 */
  push32((uint32_t)(0x111d1490u));
  /* 111a1268 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a126eu);
  /* 111a126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1273 call 0x111a40a0 */
  push32(0x111a1278u); f_111a40a0();
  /* 111a1278 mov esi, esp */
  ESI = (ESP);
  /* 111a127a push 0x111cc1e0 */
  push32((uint32_t)(0x111cc1e0u));
  /* 111a127f push 0x111d14a8 */
  push32((uint32_t)(0x111d14a8u));
  /* 111a1284 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a128au);
  /* 111a128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a128f call 0x111a40a0 */
  push32(0x111a1294u); f_111a40a0();
  /* 111a1294 mov esi, esp */
  ESI = (ESP);
  /* 111a1296 push 0x111cc1d8 */
  push32((uint32_t)(0x111cc1d8u));
  /* 111a129b push 0x111d14d8 */
  push32((uint32_t)(0x111d14d8u));
  /* 111a12a0 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a12a6u);
  /* 111a12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a12ab call 0x111a40a0 */
  push32(0x111a12b0u); f_111a40a0();
  /* 111a12b0 mov esi, esp */
  ESI = (ESP);
  /* 111a12b2 push 0x111cc1d0 */
  push32((uint32_t)(0x111cc1d0u));
  /* 111a12b7 push 0x111d14c8 */
  push32((uint32_t)(0x111d14c8u));
  /* 111a12bc call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a12c2u);
  /* 111a12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a12c7 call 0x111a40a0 */
  push32(0x111a12ccu); f_111a40a0();
  /* 111a12cc mov esi, esp */
  ESI = (ESP);
  /* 111a12ce push 0x111cc1c8 */
  push32((uint32_t)(0x111cc1c8u));
  /* 111a12d3 push 0x111d15a8 */
  push32((uint32_t)(0x111d15a8u));
  /* 111a12d8 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a12deu);
  /* 111a12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a12e3 call 0x111a40a0 */
  push32(0x111a12e8u); f_111a40a0();
  /* 111a12e8 mov esi, esp */
  ESI = (ESP);
  /* 111a12ea push 0x111cc1bc */
  push32((uint32_t)(0x111cc1bcu));
  /* 111a12ef push 0x111d1538 */
  push32((uint32_t)(0x111d1538u));
  /* 111a12f4 call dword ptr [0x111d44dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44dc))), 0x111a12fau);
  /* 111a12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a12ff call 0x111a40a0 */
  push32(0x111a1304u); f_111a40a0();
  /* 111a1304 mov esi, esp */
  ESI = (ESP);
  /* 111a1306 push 0x111cc1b4 */
  push32((uint32_t)(0x111cc1b4u));
  /* 111a130b push 0x111d1540 */
  push32((uint32_t)(0x111d1540u));
  /* 111a1310 call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a1316u);
  /* 111a1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a131b call 0x111a40a0 */
  push32(0x111a1320u); f_111a40a0();
  /* 111a1320 mov esi, esp */
  ESI = (ESP);
  /* 111a1322 push 0x111cc1ac */
  push32((uint32_t)(0x111cc1acu));
  /* 111a1327 push 0x111d14a0 */
  push32((uint32_t)(0x111d14a0u));
  /* 111a132c call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a1332u);
  /* 111a1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1337 call 0x111a40a0 */
  push32(0x111a133cu); f_111a40a0();
  /* 111a133c mov esi, esp */
  ESI = (ESP);
  /* 111a133e push 0x111cc1a0 */
  push32((uint32_t)(0x111cc1a0u));
  /* 111a1343 push 0x111d15b0 */
  push32((uint32_t)(0x111d15b0u));
  /* 111a1348 call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a134eu);
  /* 111a134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1353 call 0x111a40a0 */
  push32(0x111a1358u); f_111a40a0();
  /* 111a1358 mov esi, esp */
  ESI = (ESP);
  /* 111a135a push 0x111cc194 */
  push32((uint32_t)(0x111cc194u));
  /* 111a135f push 0x111d15b8 */
  push32((uint32_t)(0x111d15b8u));
  /* 111a1364 call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a136au);
  /* 111a136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a136f call 0x111a40a0 */
  push32(0x111a1374u); f_111a40a0();
  /* 111a1374 mov esi, esp */
  ESI = (ESP);
  /* 111a1376 push 0x111cc18c */
  push32((uint32_t)(0x111cc18cu));
  /* 111a137b push 0x111d1510 */
  push32((uint32_t)(0x111d1510u));
  /* 111a1380 call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a1386u);
  /* 111a1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a138b call 0x111a40a0 */
  push32(0x111a1390u); f_111a40a0();
  /* 111a1390 mov esi, esp */
  ESI = (ESP);
  /* 111a1392 push 0x111cc184 */
  push32((uint32_t)(0x111cc184u));
  /* 111a1397 push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a139c call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a13a2u);
  /* 111a13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a13a7 call 0x111a40a0 */
  push32(0x111a13acu); f_111a40a0();
  /* 111a13ac mov esi, esp */
  ESI = (ESP);
  /* 111a13ae push 0x111cc17c */
  push32((uint32_t)(0x111cc17cu));
  /* 111a13b3 push 0x111d1558 */
  push32((uint32_t)(0x111d1558u));
  /* 111a13b8 call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a13beu);
  /* 111a13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a13c3 call 0x111a40a0 */
  push32(0x111a13c8u); f_111a40a0();
  /* 111a13c8 mov esi, esp */
  ESI = (ESP);
  /* 111a13ca push 0x111cc170 */
  push32((uint32_t)(0x111cc170u));
  /* 111a13cf push 0x111d1548 */
  push32((uint32_t)(0x111d1548u));
  /* 111a13d4 call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a13dau);
  /* 111a13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a13df call 0x111a40a0 */
  push32(0x111a13e4u); f_111a40a0();
  /* 111a13e4 mov esi, esp */
  ESI = (ESP);
  /* 111a13e6 push 0x111cc164 */
  push32((uint32_t)(0x111cc164u));
  /* 111a13eb push 0x111d1500 */
  push32((uint32_t)(0x111d1500u));
  /* 111a13f0 call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a13f6u);
  /* 111a13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a13fb call 0x111a40a0 */
  push32(0x111a1400u); f_111a40a0();
  /* 111a1400 mov esi, esp */
  ESI = (ESP);
  /* 111a1402 push 0x111cc15c */
  push32((uint32_t)(0x111cc15cu));
  /* 111a1407 push 0x111d14f0 */
  push32((uint32_t)(0x111d14f0u));
  /* 111a140c call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a1412u);
  /* 111a1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1417 call 0x111a40a0 */
  push32(0x111a141cu); f_111a40a0();
  /* 111a141c mov esi, esp */
  ESI = (ESP);
  /* 111a141e push 0x111cc154 */
  push32((uint32_t)(0x111cc154u));
  /* 111a1423 push 0x111d14f8 */
  push32((uint32_t)(0x111d14f8u));
  /* 111a1428 call dword ptr [0x111d44e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e0))), 0x111a142eu);
  /* 111a142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1433 call 0x111a40a0 */
  push32(0x111a1438u); f_111a40a0();
  /* 111a1438 mov esi, esp */
  ESI = (ESP);
  /* 111a143a push 0x111cc144 */
  push32((uint32_t)(0x111cc144u));
  /* 111a143f push 0x111d1508 */
  push32((uint32_t)(0x111d1508u));
  /* 111a1444 call dword ptr [0x111d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d8))), 0x111a144au);
  /* 111a144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a144f call 0x111a40a0 */
  push32(0x111a1454u); f_111a40a0();
  /* 111a1454 mov esi, esp */
  ESI = (ESP);
  /* 111a1456 push 0x111cc134 */
  push32((uint32_t)(0x111cc134u));
  /* 111a145b push 0x111d1530 */
  push32((uint32_t)(0x111d1530u));
  /* 111a1460 call dword ptr [0x111d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d8))), 0x111a1466u);
  /* 111a1466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a146b call 0x111a40a0 */
  push32(0x111a1470u); f_111a40a0();
  /* 111a1470 mov esi, esp */
  ESI = (ESP);
  /* 111a1472 push 0x111cc124 */
  push32((uint32_t)(0x111cc124u));
  /* 111a1477 push 0x111d15c0 */
  push32((uint32_t)(0x111d15c0u));
  /* 111a147c call dword ptr [0x111d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d8))), 0x111a1482u);
  /* 111a1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1487 call 0x111a40a0 */
  push32(0x111a148cu); f_111a40a0();
  /* 111a148c mov esi, esp */
  ESI = (ESP);
  /* 111a148e push 0x111cc114 */
  push32((uint32_t)(0x111cc114u));
  /* 111a1493 push 0x111d13f8 */
  push32((uint32_t)(0x111d13f8u));
  /* 111a1498 call dword ptr [0x111d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d8))), 0x111a149eu);
  /* 111a149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a14a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a14a3 call 0x111a40a0 */
  push32(0x111a14a8u); f_111a40a0();
  /* 111a14a8 mov esi, esp */
  ESI = (ESP);
  /* 111a14aa push 0x111cc100 */
  push32((uint32_t)(0x111cc100u));
  /* 111a14af push 0x111d1448 */
  push32((uint32_t)(0x111d1448u));
  /* 111a14b4 call dword ptr [0x111d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d8))), 0x111a14bau);
  /* 111a14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a14bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a14bf call 0x111a40a0 */
  push32(0x111a14c4u); f_111a40a0();
  /* 111a14c4 mov esi, esp */
  ESI = (ESP);
  /* 111a14c6 push 0x111cc0e8 */
  push32((uint32_t)(0x111cc0e8u));
  /* 111a14cb push 0x111d14b8 */
  push32((uint32_t)(0x111d14b8u));
  /* 111a14d0 call dword ptr [0x111d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d8))), 0x111a14d6u);
  /* 111a14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a14d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a14db call 0x111a40a0 */
  push32(0x111a14e0u); f_111a40a0();
  /* 111a14e0 mov esi, esp */
  ESI = (ESP);
  /* 111a14e2 push 0x111cc0dc */
  push32((uint32_t)(0x111cc0dcu));
  /* 111a14e7 push 0x111d15d0 */
  push32((uint32_t)(0x111d15d0u));
  /* 111a14ec call dword ptr [0x111d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d8))), 0x111a14f2u);
  /* 111a14f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a14f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a14f7 call 0x111a40a0 */
  push32(0x111a14fcu); f_111a40a0();
  /* 111a14fc mov esi, esp */
  ESI = (ESP);
  /* 111a14fe push 0x111cc0cc */
  push32((uint32_t)(0x111cc0ccu));
  /* 111a1503 push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a1508 call dword ptr [0x111d44d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d8))), 0x111a150eu);
  /* 111a150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1513 call 0x111a40a0 */
  push32(0x111a1518u); f_111a40a0();
  /* 111a1518 mov esi, esp */
  ESI = (ESP);
  /* 111a151a push 8 */
  push32((uint32_t)(0x8u));
  /* 111a151c push 0x111d1428 */
  push32((uint32_t)(0x111d1428u));
  /* 111a1521 call dword ptr [0x111d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e8))), 0x111a1527u);
  /* 111a1527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a152a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a152c call 0x111a40a0 */
  push32(0x111a1531u); f_111a40a0();
  /* 111a1531 mov esi, esp */
  ESI = (ESP);
  /* 111a1533 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a1535 push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a153a call dword ptr [0x111d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e8))), 0x111a1540u);
  /* 111a1540 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1543 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1545 call 0x111a40a0 */
  push32(0x111a154au); f_111a40a0();
  /* 111a154a mov esi, esp */
  ESI = (ESP);
  /* 111a154c push 8 */
  push32((uint32_t)(0x8u));
  /* 111a154e push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a1553 call dword ptr [0x111d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e8))), 0x111a1559u);
  /* 111a1559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a155c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a155e call 0x111a40a0 */
  push32(0x111a1563u); f_111a40a0();
  /* 111a1563 mov esi, esp */
  ESI = (ESP);
  /* 111a1565 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a1567 push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a156c call dword ptr [0x111d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e8))), 0x111a1572u);
  /* 111a1572 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1575 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1577 call 0x111a40a0 */
  push32(0x111a157cu); f_111a40a0();
  /* 111a157c mov esi, esp */
  ESI = (ESP);
  /* 111a157e push 8 */
  push32((uint32_t)(0x8u));
  /* 111a1580 push 0x111d1408 */
  push32((uint32_t)(0x111d1408u));
  /* 111a1585 call dword ptr [0x111d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e8))), 0x111a158bu);
  /* 111a158b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a158e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1590 call 0x111a40a0 */
  push32(0x111a1595u); f_111a40a0();
  /* 111a1595 mov esi, esp */
  ESI = (ESP);
  /* 111a1597 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a1599 push 0x111d1400 */
  push32((uint32_t)(0x111d1400u));
  /* 111a159e call dword ptr [0x111d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e8))), 0x111a15a4u);
  /* 111a15a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a15a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a15a9 call 0x111a40a0 */
  push32(0x111a15aeu); f_111a40a0();
  /* 111a15ae mov esi, esp */
  ESI = (ESP);
  /* 111a15b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a15b2 push 0x111d1418 */
  push32((uint32_t)(0x111d1418u));
  /* 111a15b7 call dword ptr [0x111d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e8))), 0x111a15bdu);
  /* 111a15bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a15c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a15c2 call 0x111a40a0 */
  push32(0x111a15c7u); f_111a40a0();
  /* 111a15c7 mov esi, esp */
  ESI = (ESP);
  /* 111a15c9 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a15cb push 0x111d1410 */
  push32((uint32_t)(0x111d1410u));
  /* 111a15d0 call dword ptr [0x111d44e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e8))), 0x111a15d6u);
  /* 111a15d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a15d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a15db call 0x111a40a0 */
  push32(0x111a15e0u); f_111a40a0();
  /* 111a15e0 mov esi, esp */
  ESI = (ESP);
  /* 111a15e2 push 0x111cc0c4 */
  push32((uint32_t)(0x111cc0c4u));
  /* 111a15e7 push 0x111d1570 */
  push32((uint32_t)(0x111d1570u));
  /* 111a15ec call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a15f2u);
  /* 111a15f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a15f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a15f7 call 0x111a40a0 */
  push32(0x111a15fcu); f_111a40a0();
  /* 111a15fc mov esi, esp */
  ESI = (ESP);
  /* 111a15fe push 0x111cc0b4 */
  push32((uint32_t)(0x111cc0b4u));
  /* 111a1603 push 0x111d14c0 */
  push32((uint32_t)(0x111d14c0u));
  /* 111a1608 call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a160eu);
  /* 111a160e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1613 call 0x111a40a0 */
  push32(0x111a1618u); f_111a40a0();
  /* 111a1618 mov esi, esp */
  ESI = (ESP);
  /* 111a161a push 0x111cc0a4 */
  push32((uint32_t)(0x111cc0a4u));
  /* 111a161f push 0x111d14e0 */
  push32((uint32_t)(0x111d14e0u));
  /* 111a1624 call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a162au);
  /* 111a162a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a162d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a162f call 0x111a40a0 */
  push32(0x111a1634u); f_111a40a0();
  /* 111a1634 mov esi, esp */
  ESI = (ESP);
  /* 111a1636 push 0x111cc094 */
  push32((uint32_t)(0x111cc094u));
  /* 111a163b push 0x111d14e8 */
  push32((uint32_t)(0x111d14e8u));
  /* 111a1640 call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a1646u);
  /* 111a1646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a164b call 0x111a40a0 */
  push32(0x111a1650u); f_111a40a0();
  /* 111a1650 mov esi, esp */
  ESI = (ESP);
  /* 111a1652 push 0x111cc084 */
  push32((uint32_t)(0x111cc084u));
  /* 111a1657 push 0x111d14d0 */
  push32((uint32_t)(0x111d14d0u));
  /* 111a165c call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a1662u);
  /* 111a1662 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1667 call 0x111a40a0 */
  push32(0x111a166cu); f_111a40a0();
  /* 111a166c mov esi, esp */
  ESI = (ESP);
  /* 111a166e push 0x111cc074 */
  push32((uint32_t)(0x111cc074u));
  /* 111a1673 push 0x111d14b0 */
  push32((uint32_t)(0x111d14b0u));
  /* 111a1678 call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a167eu);
  /* 111a167e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1683 call 0x111a40a0 */
  push32(0x111a1688u); f_111a40a0();
  /* 111a1688 mov esi, esp */
  ESI = (ESP);
  /* 111a168a push 0x111cc06c */
  push32((uint32_t)(0x111cc06cu));
  /* 111a168f push 0x111d1568 */
  push32((uint32_t)(0x111d1568u));
  /* 111a1694 call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a169au);
  /* 111a169a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a169d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a169f call 0x111a40a0 */
  push32(0x111a16a4u); f_111a40a0();
  /* 111a16a4 mov esi, esp */
  ESI = (ESP);
  /* 111a16a6 push 0x111cc060 */
  push32((uint32_t)(0x111cc060u));
  /* 111a16ab push 0x111d13e8 */
  push32((uint32_t)(0x111d13e8u));
  /* 111a16b0 call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a16b6u);
  /* 111a16b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a16b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a16bb call 0x111a40a0 */
  push32(0x111a16c0u); f_111a40a0();
  /* 111a16c0 mov esi, esp */
  ESI = (ESP);
  /* 111a16c2 push 0x111cc054 */
  push32((uint32_t)(0x111cc054u));
  /* 111a16c7 push 0x111d13f0 */
  push32((uint32_t)(0x111d13f0u));
  /* 111a16cc call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a16d2u);
  /* 111a16d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a16d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a16d7 call 0x111a40a0 */
  push32(0x111a16dcu); f_111a40a0();
  /* 111a16dc mov esi, esp */
  ESI = (ESP);
  /* 111a16de push 0x111cc04c */
  push32((uint32_t)(0x111cc04cu));
  /* 111a16e3 push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a16e8 call dword ptr [0x111d44ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ec))), 0x111a16eeu);
  /* 111a16ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a16f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a16f3 call 0x111a40a0 */
  push32(0x111a16f8u); f_111a40a0();
  /* 111a16f8 mov esi, esp */
  ESI = (ESP);
  /* 111a16fa push 0x111d1428 */
  push32((uint32_t)(0x111d1428u));
  /* 111a16ff call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a1705u);
  /* 111a1705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1708 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a170a call 0x111a40a0 */
  push32(0x111a170fu); f_111a40a0();
  /* 111a170f mov esi, esp */
  ESI = (ESP);
  /* 111a1711 push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a1716 call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a171cu);
  /* 111a171c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a171f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1721 call 0x111a40a0 */
  push32(0x111a1726u); f_111a40a0();
  /* 111a1726 mov esi, esp */
  ESI = (ESP);
  /* 111a1728 push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a172d call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a1733u);
  /* 111a1733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1738 call 0x111a40a0 */
  push32(0x111a173du); f_111a40a0();
  /* 111a173d mov esi, esp */
  ESI = (ESP);
  /* 111a173f push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a1744 call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a174au);
  /* 111a174a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a174d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a174f call 0x111a40a0 */
  push32(0x111a1754u); f_111a40a0();
  /* 111a1754 mov esi, esp */
  ESI = (ESP);
  /* 111a1756 push 0x111d1408 */
  push32((uint32_t)(0x111d1408u));
  /* 111a175b call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a1761u);
  /* 111a1761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1764 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1766 call 0x111a40a0 */
  push32(0x111a176bu); f_111a40a0();
  /* 111a176b mov esi, esp */
  ESI = (ESP);
  /* 111a176d push 0x111d1400 */
  push32((uint32_t)(0x111d1400u));
  /* 111a1772 call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a1778u);
  /* 111a1778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a177b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a177d call 0x111a40a0 */
  push32(0x111a1782u); f_111a40a0();
  /* 111a1782 mov esi, esp */
  ESI = (ESP);
  /* 111a1784 push 0x111d1418 */
  push32((uint32_t)(0x111d1418u));
  /* 111a1789 call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a178fu);
  /* 111a178f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1792 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1794 call 0x111a40a0 */
  push32(0x111a1799u); f_111a40a0();
  /* 111a1799 mov esi, esp */
  ESI = (ESP);
  /* 111a179b push 0x111d1410 */
  push32((uint32_t)(0x111d1410u));
  /* 111a17a0 call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a17a6u);
  /* 111a17a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a17a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a17ab call 0x111a40a0 */
  push32(0x111a17b0u); f_111a40a0();
  /* 111a17b0 mov esi, esp */
  ESI = (ESP);
  /* 111a17b2 push 0x111d1560 */
  push32((uint32_t)(0x111d1560u));
  /* 111a17b7 call dword ptr [0x111d44e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44e4))), 0x111a17bdu);
  /* 111a17bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a17c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a17c2 call 0x111a40a0 */
  push32(0x111a17c7u); f_111a40a0();
  /* 111a17c7 mov esi, esp */
  ESI = (ESP);
  /* 111a17c9 push 0x111cc044 */
  push32((uint32_t)(0x111cc044u));
  /* 111a17ce push 1 */
  push32((uint32_t)(0x1u));
  /* 111a17d0 call dword ptr [0x111d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f4))), 0x111a17d6u);
  /* 111a17d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a17d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a17db call 0x111a40a0 */
  push32(0x111a17e0u); f_111a40a0();
  /* 111a17e0 mov esi, esp */
  ESI = (ESP);
  /* 111a17e2 push 0x111cc03c */
  push32((uint32_t)(0x111cc03cu));
  /* 111a17e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a17e9 call dword ptr [0x111d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f4))), 0x111a17efu);
  /* 111a17ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a17f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a17f4 call 0x111a40a0 */
  push32(0x111a17f9u); f_111a40a0();
  /* 111a17f9 mov esi, esp */
  ESI = (ESP);
  /* 111a17fb push 0x111cc034 */
  push32((uint32_t)(0x111cc034u));
  /* 111a1800 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a1802 call dword ptr [0x111d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f4))), 0x111a1808u);
  /* 111a1808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a180b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a180d call 0x111a40a0 */
  push32(0x111a1812u); f_111a40a0();
  /* 111a1812 mov esi, esp */
  ESI = (ESP);
  /* 111a1814 push 0x111cc028 */
  push32((uint32_t)(0x111cc028u));
  /* 111a1819 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a181b call dword ptr [0x111d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f4))), 0x111a1821u);
  /* 111a1821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1824 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1826 call 0x111a40a0 */
  push32(0x111a182bu); f_111a40a0();
  /* 111a182b mov esi, esp */
  ESI = (ESP);
  /* 111a182d push 0x111cc01c */
  push32((uint32_t)(0x111cc01cu));
  /* 111a1832 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a1834 call dword ptr [0x111d44f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f4))), 0x111a183au);
  /* 111a183a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a183d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a183f call 0x111a40a0 */
  push32(0x111a1844u); f_111a40a0();
  /* 111a1844 mov esi, esp */
  ESI = (ESP);
  /* 111a1846 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a1848 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a184a call dword ptr [0x111d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f8))), 0x111a1850u);
  /* 111a1850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1853 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1855 call 0x111a40a0 */
  push32(0x111a185au); f_111a40a0();
  /* 111a185a mov esi, esp */
  ESI = (ESP);
  /* 111a185c push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111a185e push 2 */
  push32((uint32_t)(0x2u));
  /* 111a1860 call dword ptr [0x111d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f8))), 0x111a1866u);
  /* 111a1866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a186b call 0x111a40a0 */
  push32(0x111a1870u); f_111a40a0();
  /* 111a1870 mov esi, esp */
  ESI = (ESP);
  /* 111a1872 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111a1874 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a1876 call dword ptr [0x111d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f8))), 0x111a187cu);
  /* 111a187c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a187f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1881 call 0x111a40a0 */
  push32(0x111a1886u); f_111a40a0();
  /* 111a1886 mov esi, esp */
  ESI = (ESP);
  /* 111a1888 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111a188a push 4 */
  push32((uint32_t)(0x4u));
  /* 111a188c call dword ptr [0x111d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f8))), 0x111a1892u);
  /* 111a1892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1895 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1897 call 0x111a40a0 */
  push32(0x111a189cu); f_111a40a0();
  /* 111a189c mov esi, esp */
  ESI = (ESP);
  /* 111a189e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111a18a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a18a2 call dword ptr [0x111d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f8))), 0x111a18a8u);
  /* 111a18a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a18ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a18ad call 0x111a40a0 */
  push32(0x111a18b2u); f_111a40a0();
  /* 111a18b2 mov esi, esp */
  ESI = (ESP);
  /* 111a18b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a18b6 push 0x111d15c0 */
  push32((uint32_t)(0x111d15c0u));
  /* 111a18bb push 0 */
  push32((uint32_t)(0x0u));
  /* 111a18bd call dword ptr [0x111d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f0))), 0x111a18c3u);
  /* 111a18c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a18c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a18c8 call 0x111a40a0 */
  push32(0x111a18cdu); f_111a40a0();
  /* 111a18cd mov esi, esp */
  ESI = (ESP);
  /* 111a18cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111a18d1 push 0x111d1530 */
  push32((uint32_t)(0x111d1530u));
  /* 111a18d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a18d8 call dword ptr [0x111d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f0))), 0x111a18deu);
  /* 111a18de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a18e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a18e3 call 0x111a40a0 */
  push32(0x111a18e8u); f_111a40a0();
  /* 111a18e8 mov esi, esp */
  ESI = (ESP);
  /* 111a18ea push 0 */
  push32((uint32_t)(0x0u));
  /* 111a18ec push 0x111d1508 */
  push32((uint32_t)(0x111d1508u));
  /* 111a18f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a18f3 call dword ptr [0x111d44f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f0))), 0x111a18f9u);
  /* 111a18f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a18fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a18fe call 0x111a40a0 */
  push32(0x111a1903u); f_111a40a0();
  /* 111a1903 pop edi */
  EDI = (pop32());
  /* 111a1904 pop esi */
  ESI = (pop32());
  /* 111a1905 pop ebx */
  EBX = (pop32());
  /* 111a1906 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1909 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a190b call 0x111a40a0 */
  push32(0x111a1910u); f_111a40a0();
  /* 111a1910 mov esp, ebp */
  ESP = (EBP);
  /* 111a1912 pop ebp */
  EBP = (pop32());
  /* 111a1913 ret  */
  ESPCHK(0x111a1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b50 @ 0x111a1b50 (67 bytes, 26 insns) */
void f_111a1b50(void) {
  FTRACE(0x111a1b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a1b50 push ebp */
  push32((uint32_t)(EBP));
  /* 111a1b51 mov ebp, esp */
  EBP = (ESP);
  /* 111a1b53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a1b56 push ebx */
  push32((uint32_t)(EBX));
  /* 111a1b57 push esi */
  push32((uint32_t)(ESI));
  /* 111a1b58 push edi */
  push32((uint32_t)(EDI));
  /* 111a1b59 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 111a1b5c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 111a1b61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 111a1b66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111a1b68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a1b6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a1b6e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1b72 je 0x111a1b76 */
  if (C.zf) goto L_111a1b76;
  /* 111a1b74 jmp 0x111a1b7b */
  goto L_111a1b7b;
L_111a1b76:;
  /* 111a1b76 call 0x111a1005 */
  push32(0x111a1b7bu); f_111a1005();
L_111a1b7b:;
  /* 111a1b7b mov eax, 1 */
  EAX = (0x1u);
  /* 111a1b80 pop edi */
  EDI = (pop32());
  /* 111a1b81 pop esi */
  ESI = (pop32());
  /* 111a1b82 pop ebx */
  EBX = (pop32());
  /* 111a1b83 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1b86 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1b88 call 0x111a40a0 */
  push32(0x111a1b8du); f_111a40a0();
  /* 111a1b8d mov esp, ebp */
  ESP = (EBP);
  /* 111a1b8f pop ebp */
  EBP = (pop32());
  /* 111a1b90 ret 0xc */
  ESPCHK(0x111a1b50u, _esp0);
  ESP += 16; return;
}

/* FUN_10001bb0 @ 0x111a1bb0 (7291 bytes, 2101 insns) [3 switch table(s)] */
void f_111a1bb0(void) {
  FTRACE(0x111a1bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a1bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a1bb1 mov ebp, esp */
  EBP = (ESP);
  /* 111a1bb3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a1bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 111a1bb7 push esi */
  push32((uint32_t)(ESI));
  /* 111a1bb8 push edi */
  push32((uint32_t)(EDI));
  /* 111a1bb9 lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 111a1bbc mov ecx, 0x13 */
  ECX = (0x13u);
  /* 111a1bc1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 111a1bc6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111a1bc8 mov esi, esp */
  ESI = (ESP);
  /* 111a1bca push 0x63 */
  push32((uint32_t)(0x63u));
  /* 111a1bcc call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a1bd2u);
  /* 111a1bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1bd7 call 0x111a40a0 */
  push32(0x111a1bdcu); f_111a40a0();
  /* 111a1bdc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a1be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a1be3 je 0x111a246e */
  if (C.zf) goto L_111a246e;
  /* 111a1be9 mov esi, esp */
  ESI = (ESP);
  /* 111a1beb push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1bed push 0x63 */
  push32((uint32_t)(0x63u));
  /* 111a1bef call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a1bf5u);
  /* 111a1bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1bf8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1bfa call 0x111a40a0 */
  push32(0x111a1bffu); f_111a40a0();
  /* 111a1bff mov esi, esp */
  ESI = (ESP);
  /* 111a1c01 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 111a1c03 call dword ptr [0x111d4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4448))), 0x111a1c09u);
  /* 111a1c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1c0e call 0x111a40a0 */
  push32(0x111a1c13u); f_111a40a0();
  /* 111a1c13 mov esi, esp */
  ESI = (ESP);
  /* 111a1c15 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 111a1c17 call dword ptr [0x111d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4458))), 0x111a1c1du);
  /* 111a1c1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1c20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1c22 call 0x111a40a0 */
  push32(0x111a1c27u); f_111a40a0();
  /* 111a1c27 mov esi, esp */
  ESI = (ESP);
  /* 111a1c29 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 111a1c2b call dword ptr [0x111d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4458))), 0x111a1c31u);
  /* 111a1c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1c36 call 0x111a40a0 */
  push32(0x111a1c3bu); f_111a40a0();
  /* 111a1c3b mov esi, esp */
  ESI = (ESP);
  /* 111a1c3d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 111a1c3f call dword ptr [0x111d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4458))), 0x111a1c45u);
  /* 111a1c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1c4a call 0x111a40a0 */
  push32(0x111a1c4fu); f_111a40a0();
  /* 111a1c4f mov esi, esp */
  ESI = (ESP);
  /* 111a1c51 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111a1c53 call dword ptr [0x111d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4458))), 0x111a1c59u);
  /* 111a1c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1c5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1c5e call 0x111a40a0 */
  push32(0x111a1c63u); f_111a40a0();
  /* 111a1c63 mov esi, esp */
  ESI = (ESP);
  /* 111a1c65 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 111a1c67 call dword ptr [0x111d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4458))), 0x111a1c6du);
  /* 111a1c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1c70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1c72 call 0x111a40a0 */
  push32(0x111a1c77u); f_111a40a0();
  /* 111a1c77 mov esi, esp */
  ESI = (ESP);
  /* 111a1c79 push 0x111d1470 */
  push32((uint32_t)(0x111d1470u));
  /* 111a1c7e call dword ptr [0x111d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d445c))), 0x111a1c84u);
  /* 111a1c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1c87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1c89 call 0x111a40a0 */
  push32(0x111a1c8eu); f_111a40a0();
  /* 111a1c8e mov esi, esp */
  ESI = (ESP);
  /* 111a1c90 push 0x111d1478 */
  push32((uint32_t)(0x111d1478u));
  /* 111a1c95 call dword ptr [0x111d445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d445c))), 0x111a1c9bu);
  /* 111a1c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1c9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1ca0 call 0x111a40a0 */
  push32(0x111a1ca5u); f_111a40a0();
  /* 111a1ca5 mov esi, esp */
  ESI = (ESP);
  /* 111a1ca7 push 0x111d1488 */
  push32((uint32_t)(0x111d1488u));
  /* 111a1cac call dword ptr [0x111d4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4454))), 0x111a1cb2u);
  /* 111a1cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1cb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1cb7 call 0x111a40a0 */
  push32(0x111a1cbcu); f_111a40a0();
  /* 111a1cbc mov esi, esp */
  ESI = (ESP);
  /* 111a1cbe push 0x111d1480 */
  push32((uint32_t)(0x111d1480u));
  /* 111a1cc3 call dword ptr [0x111d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4464))), 0x111a1cc9u);
  /* 111a1cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1ccc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1cce call 0x111a40a0 */
  push32(0x111a1cd3u); f_111a40a0();
  /* 111a1cd3 mov esi, esp */
  ESI = (ESP);
  /* 111a1cd5 push 0x111d1468 */
  push32((uint32_t)(0x111d1468u));
  /* 111a1cda call dword ptr [0x111d4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4464))), 0x111a1ce0u);
  /* 111a1ce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1ce5 call 0x111a40a0 */
  push32(0x111a1ceau); f_111a40a0();
  /* 111a1cea mov esi, esp */
  ESI = (ESP);
  /* 111a1cec push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1cee push 0x111d15a0 */
  push32((uint32_t)(0x111d15a0u));
  /* 111a1cf3 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1cf9u);
  /* 111a1cf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1cfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1cfe call 0x111a40a0 */
  push32(0x111a1d03u); f_111a40a0();
  /* 111a1d03 mov esi, esp */
  ESI = (ESP);
  /* 111a1d05 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1d07 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a1d09 call dword ptr [0x111d4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4460))), 0x111a1d0fu);
  /* 111a1d0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1d12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1d14 call 0x111a40a0 */
  push32(0x111a1d19u); f_111a40a0();
  /* 111a1d19 mov esi, esp */
  ESI = (ESP);
  /* 111a1d1b push 0x78 */
  push32((uint32_t)(0x78u));
  /* 111a1d1d push 6 */
  push32((uint32_t)(0x6u));
  /* 111a1d1f call dword ptr [0x111d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4470))), 0x111a1d25u);
  /* 111a1d25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1d28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1d2a call 0x111a40a0 */
  push32(0x111a1d2fu); f_111a40a0();
  /* 111a1d2f mov esi, esp */
  ESI = (ESP);
  /* 111a1d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1d33 call dword ptr [0x111d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4474))), 0x111a1d39u);
  /* 111a1d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1d3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1d3e call 0x111a40a0 */
  push32(0x111a1d43u); f_111a40a0();
  /* 111a1d43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a1d46 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1d4a ja 0x111a221c */
  if ((!C.cf&&!C.zf)) goto L_111a221c;
  /* 111a1d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a1d53 jmp dword ptr [eax*4 + 0x111a382b] */
  switch (EAX) {
    case 0: goto L_111a1d5a;
    case 1: goto L_111a1ebf;
    case 2: goto L_111a2006;
    case 3: goto L_111a214d;
    case 4: goto L_111a2c33;
    case 5: goto L_111a2c65;
    case 6: goto L_111a2cc4;
    case 7: goto L_111a2d20;
    case 8: goto L_111a3269;
    case 9: goto L_111a32c8;
    case 10: goto L_111a3327;
    case 11: goto L_111a3383;
    default: x86_unimpl("switch@0x111a1d53 out of table"); return;
  }
L_111a1d5a:;
  /* 111a1d5a mov esi, esp */
  ESI = (ESP);
  /* 111a1d5c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 111a1d61 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a1d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1d65 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1d6bu);
  /* 111a1d6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1d6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1d70 call 0x111a40a0 */
  push32(0x111a1d75u); f_111a40a0();
  /* 111a1d75 mov esi, esp */
  ESI = (ESP);
  /* 111a1d77 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 111a1d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1d80 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1d86u);
  /* 111a1d86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1d89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1d8b call 0x111a40a0 */
  push32(0x111a1d90u); f_111a40a0();
  /* 111a1d90 mov esi, esp */
  ESI = (ESP);
  /* 111a1d92 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 111a1d97 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a1d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1d9b call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1da1u);
  /* 111a1da1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1da6 call 0x111a40a0 */
  push32(0x111a1dabu); f_111a40a0();
  /* 111a1dab mov esi, esp */
  ESI = (ESP);
  /* 111a1dad push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 111a1db2 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1db6 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1dbcu);
  /* 111a1dbc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1dbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1dc1 call 0x111a40a0 */
  push32(0x111a1dc6u); f_111a40a0();
  /* 111a1dc6 mov esi, esp */
  ESI = (ESP);
  /* 111a1dc8 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 111a1dcd push 5 */
  push32((uint32_t)(0x5u));
  /* 111a1dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1dd1 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1dd7u);
  /* 111a1dd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1ddc call 0x111a40a0 */
  push32(0x111a1de1u); f_111a40a0();
  /* 111a1de1 mov esi, esp */
  ESI = (ESP);
  /* 111a1de3 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 111a1de8 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a1dea push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1dec call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1df2u);
  /* 111a1df2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1df5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1df7 call 0x111a40a0 */
  push32(0x111a1dfcu); f_111a40a0();
  /* 111a1dfc mov esi, esp */
  ESI = (ESP);
  /* 111a1dfe push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1e00 push 0x111d1518 */
  push32((uint32_t)(0x111d1518u));
  /* 111a1e05 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1e0bu);
  /* 111a1e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1e0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1e10 call 0x111a40a0 */
  push32(0x111a1e15u); f_111a40a0();
  /* 111a1e15 mov esi, esp */
  ESI = (ESP);
  /* 111a1e17 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1e19 push 0x111d1520 */
  push32((uint32_t)(0x111d1520u));
  /* 111a1e1e call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1e24u);
  /* 111a1e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1e29 call 0x111a40a0 */
  push32(0x111a1e2eu); f_111a40a0();
  /* 111a1e2e mov esi, esp */
  ESI = (ESP);
  /* 111a1e30 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1e32 push 0x111d1528 */
  push32((uint32_t)(0x111d1528u));
  /* 111a1e37 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1e3du);
  /* 111a1e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1e40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1e42 call 0x111a40a0 */
  push32(0x111a1e47u); f_111a40a0();
  /* 111a1e47 mov esi, esp */
  ESI = (ESP);
  /* 111a1e49 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a1e4b call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a1e51u);
  /* 111a1e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1e54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1e56 call 0x111a40a0 */
  push32(0x111a1e5bu); f_111a40a0();
  /* 111a1e5b mov esi, esp */
  ESI = (ESP);
  /* 111a1e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1e5f push 0x111d14a8 */
  push32((uint32_t)(0x111d14a8u));
  /* 111a1e64 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1e6au);
  /* 111a1e6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1e6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1e6f call 0x111a40a0 */
  push32(0x111a1e74u); f_111a40a0();
  /* 111a1e74 mov esi, esp */
  ESI = (ESP);
  /* 111a1e76 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1e78 push 0x111d14d8 */
  push32((uint32_t)(0x111d14d8u));
  /* 111a1e7d call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1e83u);
  /* 111a1e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1e86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1e88 call 0x111a40a0 */
  push32(0x111a1e8du); f_111a40a0();
  /* 111a1e8d mov esi, esp */
  ESI = (ESP);
  /* 111a1e8f push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1e91 push 0x111d14c8 */
  push32((uint32_t)(0x111d14c8u));
  /* 111a1e96 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1e9cu);
  /* 111a1e9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1ea1 call 0x111a40a0 */
  push32(0x111a1ea6u); f_111a40a0();
  /* 111a1ea6 mov esi, esp */
  ESI = (ESP);
  /* 111a1ea8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a1eaa call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a1eb0u);
  /* 111a1eb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1eb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1eb5 call 0x111a40a0 */
  push32(0x111a1ebau); f_111a40a0();
  /* 111a1eba jmp 0x111a221c */
  goto L_111a221c;
L_111a1ebf:;
  /* 111a1ebf mov esi, esp */
  ESI = (ESP);
  /* 111a1ec1 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 111a1ec6 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a1ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1eca call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1ed0u);
  /* 111a1ed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1ed3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1ed5 call 0x111a40a0 */
  push32(0x111a1edau); f_111a40a0();
  /* 111a1eda mov esi, esp */
  ESI = (ESP);
  /* 111a1edc push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 111a1ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1ee5 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1eebu);
  /* 111a1eeb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1eee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1ef0 call 0x111a40a0 */
  push32(0x111a1ef5u); f_111a40a0();
  /* 111a1ef5 mov esi, esp */
  ESI = (ESP);
  /* 111a1ef7 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 111a1efc push 2 */
  push32((uint32_t)(0x2u));
  /* 111a1efe push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1f00 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1f06u);
  /* 111a1f06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1f09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1f0b call 0x111a40a0 */
  push32(0x111a1f10u); f_111a40a0();
  /* 111a1f10 mov esi, esp */
  ESI = (ESP);
  /* 111a1f12 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 111a1f17 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1f1b call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1f21u);
  /* 111a1f21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1f26 call 0x111a40a0 */
  push32(0x111a1f2bu); f_111a40a0();
  /* 111a1f2b mov esi, esp */
  ESI = (ESP);
  /* 111a1f2d push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 111a1f32 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a1f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1f36 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1f3cu);
  /* 111a1f3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1f3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1f41 call 0x111a40a0 */
  push32(0x111a1f46u); f_111a40a0();
  /* 111a1f46 mov esi, esp */
  ESI = (ESP);
  /* 111a1f48 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 111a1f4d push 4 */
  push32((uint32_t)(0x4u));
  /* 111a1f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1f51 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a1f57u);
  /* 111a1f57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1f5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1f5c call 0x111a40a0 */
  push32(0x111a1f61u); f_111a40a0();
  /* 111a1f61 mov esi, esp */
  ESI = (ESP);
  /* 111a1f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1f65 push 0x111d1518 */
  push32((uint32_t)(0x111d1518u));
  /* 111a1f6a call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1f70u);
  /* 111a1f70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1f73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1f75 call 0x111a40a0 */
  push32(0x111a1f7au); f_111a40a0();
  /* 111a1f7a mov esi, esp */
  ESI = (ESP);
  /* 111a1f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1f7e push 0x111d1528 */
  push32((uint32_t)(0x111d1528u));
  /* 111a1f83 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1f89u);
  /* 111a1f89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1f8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1f8e call 0x111a40a0 */
  push32(0x111a1f93u); f_111a40a0();
  /* 111a1f93 mov esi, esp */
  ESI = (ESP);
  /* 111a1f95 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a1f97 call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a1f9du);
  /* 111a1f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1fa0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1fa2 call 0x111a40a0 */
  push32(0x111a1fa7u); f_111a40a0();
  /* 111a1fa7 mov esi, esp */
  ESI = (ESP);
  /* 111a1fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1fab push 0x111d14a8 */
  push32((uint32_t)(0x111d14a8u));
  /* 111a1fb0 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1fb6u);
  /* 111a1fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1fbb call 0x111a40a0 */
  push32(0x111a1fc0u); f_111a40a0();
  /* 111a1fc0 mov esi, esp */
  ESI = (ESP);
  /* 111a1fc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a1fc4 call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a1fcau);
  /* 111a1fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1fcf call 0x111a40a0 */
  push32(0x111a1fd4u); f_111a40a0();
  /* 111a1fd4 mov esi, esp */
  ESI = (ESP);
  /* 111a1fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a1fd8 push 0x111d1590 */
  push32((uint32_t)(0x111d1590u));
  /* 111a1fdd call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a1fe3u);
  /* 111a1fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1fe6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1fe8 call 0x111a40a0 */
  push32(0x111a1fedu); f_111a40a0();
  /* 111a1fed mov esi, esp */
  ESI = (ESP);
  /* 111a1fef push 1 */
  push32((uint32_t)(0x1u));
  /* 111a1ff1 call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a1ff7u);
  /* 111a1ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a1ffa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a1ffc call 0x111a40a0 */
  push32(0x111a2001u); f_111a40a0();
  /* 111a2001 jmp 0x111a221c */
  goto L_111a221c;
L_111a2006:;
  /* 111a2006 mov esi, esp */
  ESI = (ESP);
  /* 111a2008 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111a200d push 3 */
  push32((uint32_t)(0x3u));
  /* 111a200f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2011 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2017u);
  /* 111a2017 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a201a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a201c call 0x111a40a0 */
  push32(0x111a2021u); f_111a40a0();
  /* 111a2021 mov esi, esp */
  ESI = (ESP);
  /* 111a2023 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111a2028 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a202a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a202c call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2032u);
  /* 111a2032 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2035 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2037 call 0x111a40a0 */
  push32(0x111a203cu); f_111a40a0();
  /* 111a203c mov esi, esp */
  ESI = (ESP);
  /* 111a203e push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111a2043 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2045 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2047 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a204du);
  /* 111a204d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2050 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2052 call 0x111a40a0 */
  push32(0x111a2057u); f_111a40a0();
  /* 111a2057 mov esi, esp */
  ESI = (ESP);
  /* 111a2059 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111a205e push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2060 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2062 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2068u);
  /* 111a2068 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a206b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a206d call 0x111a40a0 */
  push32(0x111a2072u); f_111a40a0();
  /* 111a2072 mov esi, esp */
  ESI = (ESP);
  /* 111a2074 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111a2079 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a207b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a207d call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2083u);
  /* 111a2083 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2086 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2088 call 0x111a40a0 */
  push32(0x111a208du); f_111a40a0();
  /* 111a208d mov esi, esp */
  ESI = (ESP);
  /* 111a208f push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 111a2094 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a2096 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2098 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a209eu);
  /* 111a209e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a20a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a20a3 call 0x111a40a0 */
  push32(0x111a20a8u); f_111a40a0();
  /* 111a20a8 mov esi, esp */
  ESI = (ESP);
  /* 111a20aa push 0 */
  push32((uint32_t)(0x0u));
  /* 111a20ac push 0x111d1518 */
  push32((uint32_t)(0x111d1518u));
  /* 111a20b1 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a20b7u);
  /* 111a20b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a20ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a20bc call 0x111a40a0 */
  push32(0x111a20c1u); f_111a40a0();
  /* 111a20c1 mov esi, esp */
  ESI = (ESP);
  /* 111a20c3 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a20c5 call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a20cbu);
  /* 111a20cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a20ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a20d0 call 0x111a40a0 */
  push32(0x111a20d5u); f_111a40a0();
  /* 111a20d5 mov esi, esp */
  ESI = (ESP);
  /* 111a20d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a20d9 push 0x111d14d8 */
  push32((uint32_t)(0x111d14d8u));
  /* 111a20de call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a20e4u);
  /* 111a20e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a20e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a20e9 call 0x111a40a0 */
  push32(0x111a20eeu); f_111a40a0();
  /* 111a20ee mov esi, esp */
  ESI = (ESP);
  /* 111a20f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a20f2 push 0x111d14c8 */
  push32((uint32_t)(0x111d14c8u));
  /* 111a20f7 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a20fdu);
  /* 111a20fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2102 call 0x111a40a0 */
  push32(0x111a2107u); f_111a40a0();
  /* 111a2107 mov esi, esp */
  ESI = (ESP);
  /* 111a2109 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a210b call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a2111u);
  /* 111a2111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2116 call 0x111a40a0 */
  push32(0x111a211bu); f_111a40a0();
  /* 111a211b mov esi, esp */
  ESI = (ESP);
  /* 111a211d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a211f push 0x111d1590 */
  push32((uint32_t)(0x111d1590u));
  /* 111a2124 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a212au);
  /* 111a212a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a212d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a212f call 0x111a40a0 */
  push32(0x111a2134u); f_111a40a0();
  /* 111a2134 mov esi, esp */
  ESI = (ESP);
  /* 111a2136 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2138 call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a213eu);
  /* 111a213e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2141 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2143 call 0x111a40a0 */
  push32(0x111a2148u); f_111a40a0();
  /* 111a2148 jmp 0x111a221c */
  goto L_111a221c;
L_111a214d:;
  /* 111a214d mov esi, esp */
  ESI = (ESP);
  /* 111a214f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a2154 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a2156 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2158 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a215eu);
  /* 111a215e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2161 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2163 call 0x111a40a0 */
  push32(0x111a2168u); f_111a40a0();
  /* 111a2168 mov esi, esp */
  ESI = (ESP);
  /* 111a216a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a216f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2171 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2173 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2179u);
  /* 111a2179 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a217c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a217e call 0x111a40a0 */
  push32(0x111a2183u); f_111a40a0();
  /* 111a2183 mov esi, esp */
  ESI = (ESP);
  /* 111a2185 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a218a push 2 */
  push32((uint32_t)(0x2u));
  /* 111a218c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a218e call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2194u);
  /* 111a2194 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2197 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2199 call 0x111a40a0 */
  push32(0x111a219eu); f_111a40a0();
  /* 111a219e mov esi, esp */
  ESI = (ESP);
  /* 111a21a0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a21a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a21a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a21a9 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a21afu);
  /* 111a21af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a21b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a21b4 call 0x111a40a0 */
  push32(0x111a21b9u); f_111a40a0();
  /* 111a21b9 mov esi, esp */
  ESI = (ESP);
  /* 111a21bb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a21c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a21c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a21c4 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a21cau);
  /* 111a21ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a21cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a21cf call 0x111a40a0 */
  push32(0x111a21d4u); f_111a40a0();
  /* 111a21d4 mov esi, esp */
  ESI = (ESP);
  /* 111a21d6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a21db push 4 */
  push32((uint32_t)(0x4u));
  /* 111a21dd push 0 */
  push32((uint32_t)(0x0u));
  /* 111a21df call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a21e5u);
  /* 111a21e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a21e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a21ea call 0x111a40a0 */
  push32(0x111a21efu); f_111a40a0();
  /* 111a21ef mov esi, esp */
  ESI = (ESP);
  /* 111a21f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a21f3 push 0x111d1590 */
  push32((uint32_t)(0x111d1590u));
  /* 111a21f8 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a21feu);
  /* 111a21fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2203 call 0x111a40a0 */
  push32(0x111a2208u); f_111a40a0();
  /* 111a2208 mov esi, esp */
  ESI = (ESP);
  /* 111a220a push 1 */
  push32((uint32_t)(0x1u));
  /* 111a220c call dword ptr [0x111d447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d447c))), 0x111a2212u);
  /* 111a2212 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2217 call 0x111a40a0 */
  push32(0x111a221cu); f_111a40a0();
L_111a221c:;
  /* 111a221c mov esi, esp */
  ESI = (ESP);
  /* 111a221e push 5 */
  push32((uint32_t)(0x5u));
  /* 111a2220 call dword ptr [0x111d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4480))), 0x111a2226u);
  /* 111a2226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a222b call 0x111a40a0 */
  push32(0x111a2230u); f_111a40a0();
  /* 111a2230 mov esi, esp */
  ESI = (ESP);
  /* 111a2232 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2234 call dword ptr [0x111d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4480))), 0x111a223au);
  /* 111a223a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a223d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a223f call 0x111a40a0 */
  push32(0x111a2244u); f_111a40a0();
  /* 111a2244 mov esi, esp */
  ESI = (ESP);
  /* 111a2246 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2248 call dword ptr [0x111d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4480))), 0x111a224eu);
  /* 111a224e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2251 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2253 call 0x111a40a0 */
  push32(0x111a2258u); f_111a40a0();
  /* 111a2258 mov esi, esp */
  ESI = (ESP);
  /* 111a225a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 111a225f push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2261 call dword ptr [0x111d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4470))), 0x111a2267u);
  /* 111a2267 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a226a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a226c call 0x111a40a0 */
  push32(0x111a2271u); f_111a40a0();
  /* 111a2271 mov esi, esp */
  ESI = (ESP);
  /* 111a2273 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 111a2278 push 7 */
  push32((uint32_t)(0x7u));
  /* 111a227a call dword ptr [0x111d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4470))), 0x111a2280u);
  /* 111a2280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2285 call 0x111a40a0 */
  push32(0x111a228au); f_111a40a0();
  /* 111a228a mov esi, esp */
  ESI = (ESP);
  /* 111a228c push 0x111cc370 */
  push32((uint32_t)(0x111cc370u));
  /* 111a2291 push 0x111cc238 */
  push32((uint32_t)(0x111cc238u));
  /* 111a2296 call dword ptr [0x111d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4478))), 0x111a229cu);
  /* 111a229c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a229f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a22a1 call 0x111a40a0 */
  push32(0x111a22a6u); f_111a40a0();
  /* 111a22a6 mov esi, esp */
  ESI = (ESP);
  /* 111a22a8 push 0x111cc364 */
  push32((uint32_t)(0x111cc364u));
  /* 111a22ad push 0x111cc238 */
  push32((uint32_t)(0x111cc238u));
  /* 111a22b2 call dword ptr [0x111d4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4478))), 0x111a22b8u);
  /* 111a22b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a22bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a22bd call 0x111a40a0 */
  push32(0x111a22c2u); f_111a40a0();
  /* 111a22c2 mov esi, esp */
  ESI = (ESP);
  /* 111a22c4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a22c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a22cb push 4 */
  push32((uint32_t)(0x4u));
  /* 111a22cd call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a22d3u);
  /* 111a22d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a22d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a22d8 call 0x111a40a0 */
  push32(0x111a22ddu); f_111a40a0();
  /* 111a22dd mov esi, esp */
  ESI = (ESP);
  /* 111a22df push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a22e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a22e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a22e8 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a22eeu);
  /* 111a22ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a22f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a22f3 call 0x111a40a0 */
  push32(0x111a22f8u); f_111a40a0();
  /* 111a22f8 mov esi, esp */
  ESI = (ESP);
  /* 111a22fa push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a22ff push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2301 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a2303 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2309u);
  /* 111a2309 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a230c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a230e call 0x111a40a0 */
  push32(0x111a2313u); f_111a40a0();
  /* 111a2313 mov esi, esp */
  ESI = (ESP);
  /* 111a2315 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a231a push 1 */
  push32((uint32_t)(0x1u));
  /* 111a231c push 4 */
  push32((uint32_t)(0x4u));
  /* 111a231e call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2324u);
  /* 111a2324 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2327 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2329 call 0x111a40a0 */
  push32(0x111a232eu); f_111a40a0();
  /* 111a232e mov esi, esp */
  ESI = (ESP);
  /* 111a2330 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a2335 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a2337 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a2339 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a233fu);
  /* 111a233f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2342 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2344 call 0x111a40a0 */
  push32(0x111a2349u); f_111a40a0();
  /* 111a2349 mov esi, esp */
  ESI = (ESP);
  /* 111a234b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a2350 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a2352 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a2354 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a235au);
  /* 111a235a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a235d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a235f call 0x111a40a0 */
  push32(0x111a2364u); f_111a40a0();
  /* 111a2364 mov esi, esp */
  ESI = (ESP);
  /* 111a2366 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a236b push 3 */
  push32((uint32_t)(0x3u));
  /* 111a236d push 3 */
  push32((uint32_t)(0x3u));
  /* 111a236f call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2375u);
  /* 111a2375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2378 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a237a call 0x111a40a0 */
  push32(0x111a237fu); f_111a40a0();
  /* 111a237f mov esi, esp */
  ESI = (ESP);
  /* 111a2381 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a2386 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2388 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a238a call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a2390u);
  /* 111a2390 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2395 call 0x111a40a0 */
  push32(0x111a239au); f_111a40a0();
  /* 111a239a mov esi, esp */
  ESI = (ESP);
  /* 111a239c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a23a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a23a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a23a5 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a23abu);
  /* 111a23ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a23ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a23b0 call 0x111a40a0 */
  push32(0x111a23b5u); f_111a40a0();
  /* 111a23b5 mov esi, esp */
  ESI = (ESP);
  /* 111a23b7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a23bc push 1 */
  push32((uint32_t)(0x1u));
  /* 111a23be push 3 */
  push32((uint32_t)(0x3u));
  /* 111a23c0 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a23c6u);
  /* 111a23c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a23c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a23cb call 0x111a40a0 */
  push32(0x111a23d0u); f_111a40a0();
  /* 111a23d0 mov esi, esp */
  ESI = (ESP);
  /* 111a23d2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a23d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a23d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a23db call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a23e1u);
  /* 111a23e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a23e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a23e6 call 0x111a40a0 */
  push32(0x111a23ebu); f_111a40a0();
  /* 111a23eb mov esi, esp */
  ESI = (ESP);
  /* 111a23ed push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111a23f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a23f4 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a23f6 call dword ptr [0x111d446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d446c))), 0x111a23fcu);
  /* 111a23fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a23ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2401 call 0x111a40a0 */
  push32(0x111a2406u); f_111a40a0();
  /* 111a2406 mov esi, esp */
  ESI = (ESP);
  /* 111a2408 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a240a call dword ptr [0x111d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4474))), 0x111a2410u);
  /* 111a2410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2413 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2415 call 0x111a40a0 */
  push32(0x111a241au); f_111a40a0();
  /* 111a241a mov esi, esp */
  ESI = (ESP);
  /* 111a241c push eax */
  push32((uint32_t)(EAX));
  /* 111a241d push 2 */
  push32((uint32_t)(0x2u));
  /* 111a241f push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2421 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2423 push 0x111cc358 */
  push32((uint32_t)(0x111cc358u));
  /* 111a2428 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a242a call dword ptr [0x111d4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4488))), 0x111a2430u);
  /* 111a2430 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2433 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2435 call 0x111a40a0 */
  push32(0x111a243au); f_111a40a0();
  /* 111a243a mov esi, esp */
  ESI = (ESP);
  /* 111a243c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a243e call dword ptr [0x111d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4474))), 0x111a2444u);
  /* 111a2444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2447 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2449 call 0x111a40a0 */
  push32(0x111a244eu); f_111a40a0();
  /* 111a244e mov esi, esp */
  ESI = (ESP);
  /* 111a2450 push eax */
  push32((uint32_t)(EAX));
  /* 111a2451 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2453 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2455 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2457 push 0x111cc34c */
  push32((uint32_t)(0x111cc34cu));
  /* 111a245c push 3 */
  push32((uint32_t)(0x3u));
  /* 111a245e call dword ptr [0x111d4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4488))), 0x111a2464u);
  /* 111a2464 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2467 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2469 call 0x111a40a0 */
  push32(0x111a246eu); f_111a40a0();
L_111a246e:;
  /* 111a246e mov esi, esp */
  ESI = (ESP);
  /* 111a2470 push 6 */
  push32((uint32_t)(0x6u));
  /* 111a2472 call dword ptr [0x111d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d448c))), 0x111a2478u);
  /* 111a2478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a247b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a247d call 0x111a40a0 */
  push32(0x111a2482u); f_111a40a0();
  /* 111a2482 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2489 je 0x111a256d */
  if (C.zf) goto L_111a256d;
  /* 111a248f mov esi, esp */
  ESI = (ESP);
  /* 111a2491 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 111a2493 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2499u);
  /* 111a2499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a249c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a249e call 0x111a40a0 */
  push32(0x111a24a3u); f_111a40a0();
  /* 111a24a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a24a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a24aa je 0x111a256d */
  if (C.zf) goto L_111a256d;
  /* 111a24b0 mov esi, esp */
  ESI = (ESP);
  /* 111a24b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a24b4 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 111a24b6 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a24bcu);
  /* 111a24bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a24bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a24c1 call 0x111a40a0 */
  push32(0x111a24c6u); f_111a40a0();
  /* 111a24c6 mov esi, esp */
  ESI = (ESP);
  /* 111a24c8 push 0x111cc340 */
  push32((uint32_t)(0x111cc340u));
  /* 111a24cd call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a24d3u);
  /* 111a24d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a24d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a24d8 call 0x111a40a0 */
  push32(0x111a24ddu); f_111a40a0();
  /* 111a24dd mov esi, esp */
  ESI = (ESP);
  /* 111a24df push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 111a24e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a24e6 call dword ptr [0x111d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4470))), 0x111a24ecu);
  /* 111a24ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a24ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a24f1 call 0x111a40a0 */
  push32(0x111a24f6u); f_111a40a0();
  /* 111a24f6 mov esi, esp */
  ESI = (ESP);
  /* 111a24f8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 111a24fa call dword ptr [0x111d4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4448))), 0x111a2500u);
  /* 111a2500 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2503 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2505 call 0x111a40a0 */
  push32(0x111a250au); f_111a40a0();
  /* 111a250a mov esi, esp */
  ESI = (ESP);
  /* 111a250c push 1 */
  push32((uint32_t)(0x1u));
  /* 111a250e push 4 */
  push32((uint32_t)(0x4u));
  /* 111a2510 push 0x111d1548 */
  push32((uint32_t)(0x111d1548u));
  /* 111a2515 call dword ptr [0x111d4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4494))), 0x111a251bu);
  /* 111a251b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a251e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2520 call 0x111a40a0 */
  push32(0x111a2525u); f_111a40a0();
  /* 111a2525 mov esi, esp */
  ESI = (ESP);
  /* 111a2527 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2529 push 0x111d1588 */
  push32((uint32_t)(0x111d1588u));
  /* 111a252e call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a2534u);
  /* 111a2534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2539 call 0x111a40a0 */
  push32(0x111a253eu); f_111a40a0();
  /* 111a253e mov esi, esp */
  ESI = (ESP);
  /* 111a2540 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2542 push 0x111d1598 */
  push32((uint32_t)(0x111d1598u));
  /* 111a2547 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a254du);
  /* 111a254d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2550 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2552 call 0x111a40a0 */
  push32(0x111a2557u); f_111a40a0();
  /* 111a2557 mov esi, esp */
  ESI = (ESP);
  /* 111a2559 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a255b push 1 */
  push32((uint32_t)(0x1u));
  /* 111a255d call dword ptr [0x111d4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4498))), 0x111a2563u);
  /* 111a2563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2566 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2568 call 0x111a40a0 */
  push32(0x111a256du); f_111a40a0();
L_111a256d:;
  /* 111a256d mov esi, esp */
  ESI = (ESP);
  /* 111a256f push 8 */
  push32((uint32_t)(0x8u));
  /* 111a2571 call dword ptr [0x111d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d448c))), 0x111a2577u);
  /* 111a2577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a257a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a257c call 0x111a40a0 */
  push32(0x111a2581u); f_111a40a0();
  /* 111a2581 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2588 je 0x111a25b9 */
  if (C.zf) goto L_111a25b9;
  /* 111a258a mov esi, esp */
  ESI = (ESP);
  /* 111a258c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a258e call dword ptr [0x111d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4474))), 0x111a2594u);
  /* 111a2594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2597 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2599 call 0x111a40a0 */
  push32(0x111a259eu); f_111a40a0();
  /* 111a259e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a25a0 jne 0x111a25b9 */
  if (!C.zf) goto L_111a25b9;
  /* 111a25a2 mov esi, esp */
  ESI = (ESP);
  /* 111a25a4 push 0x111cc334 */
  push32((uint32_t)(0x111cc334u));
  /* 111a25a9 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a25afu);
  /* 111a25af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a25b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a25b4 call 0x111a40a0 */
  push32(0x111a25b9u); f_111a40a0();
L_111a25b9:;
  /* 111a25b9 mov esi, esp */
  ESI = (ESP);
  /* 111a25bb push 3 */
  push32((uint32_t)(0x3u));
  /* 111a25bd call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a25c3u);
  /* 111a25c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a25c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a25c8 call 0x111a40a0 */
  push32(0x111a25cdu); f_111a40a0();
  /* 111a25cd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a25d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a25d4 je 0x111a2651 */
  if (C.zf) goto L_111a2651;
  /* 111a25d6 mov esi, esp */
  ESI = (ESP);
  /* 111a25d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a25da push 0x111d14a0 */
  push32((uint32_t)(0x111d14a0u));
  /* 111a25df call dword ptr [0x111d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4490))), 0x111a25e5u);
  /* 111a25e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a25e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a25ea call 0x111a40a0 */
  push32(0x111a25efu); f_111a40a0();
  /* 111a25ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a25f1 jg 0x111a2610 */
  if ((!C.zf&&C.sf==C.of)) goto L_111a2610;
  /* 111a25f3 mov esi, esp */
  ESI = (ESP);
  /* 111a25f5 push 7 */
  push32((uint32_t)(0x7u));
  /* 111a25f7 call dword ptr [0x111d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d448c))), 0x111a25fdu);
  /* 111a25fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2600 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2602 call 0x111a40a0 */
  push32(0x111a2607u); f_111a40a0();
  /* 111a2607 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a260c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a260e je 0x111a2651 */
  if (C.zf) goto L_111a2651;
L_111a2610:;
  /* 111a2610 mov esi, esp */
  ESI = (ESP);
  /* 111a2612 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2614 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a2616 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a261cu);
  /* 111a261c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a261f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2621 call 0x111a40a0 */
  push32(0x111a2626u); f_111a40a0();
  /* 111a2626 mov esi, esp */
  ESI = (ESP);
  /* 111a2628 push 0x111cc32c */
  push32((uint32_t)(0x111cc32cu));
  /* 111a262d call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a2633u);
  /* 111a2633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2636 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2638 call 0x111a40a0 */
  push32(0x111a263du); f_111a40a0();
  /* 111a263d mov esi, esp */
  ESI = (ESP);
  /* 111a263f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111a2641 call dword ptr [0x111d4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4448))), 0x111a2647u);
  /* 111a2647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a264a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a264c call 0x111a40a0 */
  push32(0x111a2651u); f_111a40a0();
L_111a2651:;
  /* 111a2651 mov esi, esp */
  ESI = (ESP);
  /* 111a2653 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2655 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a265bu);
  /* 111a265b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a265e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2660 call 0x111a40a0 */
  push32(0x111a2665u); f_111a40a0();
  /* 111a2665 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a266a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a266c jne 0x111a26f7 */
  if (!C.zf) goto L_111a26f7;
  /* 111a2672 mov esi, esp */
  ESI = (ESP);
  /* 111a2674 push 0x111d1460 */
  push32((uint32_t)(0x111d1460u));
  /* 111a2679 push 0x111d1540 */
  push32((uint32_t)(0x111d1540u));
  /* 111a267e call dword ptr [0x111d44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a0))), 0x111a2684u);
  /* 111a2684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2687 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2689 call 0x111a40a0 */
  push32(0x111a268eu); f_111a40a0();
  /* 111a268e mov esi, eax */
  ESI = (EAX);
  /* 111a2690 mov edi, esp */
  EDI = (ESP);
  /* 111a2692 push 0x111d1460 */
  push32((uint32_t)(0x111d1460u));
  /* 111a2697 call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a269du);
  /* 111a269d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a26a0 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a26a2 call 0x111a40a0 */
  push32(0x111a26a7u); f_111a40a0();
  /* 111a26a7 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a26a9 jge 0x111a26f7 */
  if ((C.sf==C.of)) goto L_111a26f7;
  /* 111a26ab mov esi, esp */
  ESI = (ESP);
  /* 111a26ad push 1 */
  push32((uint32_t)(0x1u));
  /* 111a26af push 1 */
  push32((uint32_t)(0x1u));
  /* 111a26b1 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a26b7u);
  /* 111a26b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a26ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a26bc call 0x111a40a0 */
  push32(0x111a26c1u); f_111a40a0();
  /* 111a26c1 mov esi, esp */
  ESI = (ESP);
  /* 111a26c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a26c5 push 0x111d1460 */
  push32((uint32_t)(0x111d1460u));
  /* 111a26ca call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a26d0u);
  /* 111a26d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a26d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a26d5 call 0x111a40a0 */
  push32(0x111a26dau); f_111a40a0();
  /* 111a26da mov esi, esp */
  ESI = (ESP);
  /* 111a26dc push 0 */
  push32((uint32_t)(0x0u));
  /* 111a26de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 111a26e0 push 0x111d15b8 */
  push32((uint32_t)(0x111d15b8u));
  /* 111a26e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a26e7 call dword ptr [0x111d449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d449c))), 0x111a26edu);
  /* 111a26ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a26f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a26f2 call 0x111a40a0 */
  push32(0x111a26f7u); f_111a40a0();
L_111a26f7:;
  /* 111a26f7 mov esi, esp */
  ESI = (ESP);
  /* 111a26f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a26fb call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2701u);
  /* 111a2701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2704 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2706 call 0x111a40a0 */
  push32(0x111a270bu); f_111a40a0();
  /* 111a270b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2712 je 0x111a279b */
  if (C.zf) goto L_111a279b;
  /* 111a2718 mov esi, esp */
  ESI = (ESP);
  /* 111a271a push 0x111d1460 */
  push32((uint32_t)(0x111d1460u));
  /* 111a271f push 0x111d1540 */
  push32((uint32_t)(0x111d1540u));
  /* 111a2724 call dword ptr [0x111d44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a0))), 0x111a272au);
  /* 111a272a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a272d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a272f call 0x111a40a0 */
  push32(0x111a2734u); f_111a40a0();
  /* 111a2734 mov esi, eax */
  ESI = (EAX);
  /* 111a2736 mov edi, esp */
  EDI = (ESP);
  /* 111a2738 push 0x111d1460 */
  push32((uint32_t)(0x111d1460u));
  /* 111a273d call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a2743u);
  /* 111a2743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2746 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2748 call 0x111a40a0 */
  push32(0x111a274du); f_111a40a0();
  /* 111a274d cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a274f jne 0x111a279b */
  if (!C.zf) goto L_111a279b;
  /* 111a2751 mov esi, esp */
  ESI = (ESP);
  /* 111a2753 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2755 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2757 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a275du);
  /* 111a275d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2760 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2762 call 0x111a40a0 */
  push32(0x111a2767u); f_111a40a0();
  /* 111a2767 mov esi, esp */
  ESI = (ESP);
  /* 111a2769 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a276b push 0x111d1460 */
  push32((uint32_t)(0x111d1460u));
  /* 111a2770 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a2776u);
  /* 111a2776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a277b call 0x111a40a0 */
  push32(0x111a2780u); f_111a40a0();
  /* 111a2780 mov esi, esp */
  ESI = (ESP);
  /* 111a2782 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2784 push 0x111d15b0 */
  push32((uint32_t)(0x111d15b0u));
  /* 111a2789 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a278b call dword ptr [0x111d44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44ac))), 0x111a2791u);
  /* 111a2791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2796 call 0x111a40a0 */
  push32(0x111a279bu); f_111a40a0();
L_111a279b:;
  /* 111a279b mov esi, esp */
  ESI = (ESP);
  /* 111a279d push 2 */
  push32((uint32_t)(0x2u));
  /* 111a279f call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a27a5u);
  /* 111a27a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a27a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a27aa call 0x111a40a0 */
  push32(0x111a27afu); f_111a40a0();
  /* 111a27af and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a27b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a27b6 je 0x111a28ab */
  if (C.zf) goto L_111a28ab;
  /* 111a27bc mov esi, esp */
  ESI = (ESP);
  /* 111a27be push 0x111d1460 */
  push32((uint32_t)(0x111d1460u));
  /* 111a27c3 call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a27c9u);
  /* 111a27c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a27cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a27ce call 0x111a40a0 */
  push32(0x111a27d3u); f_111a40a0();
  /* 111a27d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a27d5 jne 0x111a28ab */
  if (!C.zf) goto L_111a28ab;
  /* 111a27db mov esi, esp */
  ESI = (ESP);
  /* 111a27dd push 0 */
  push32((uint32_t)(0x0u));
  /* 111a27df push 0x111d1540 */
  push32((uint32_t)(0x111d1540u));
  /* 111a27e4 call dword ptr [0x111d4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4490))), 0x111a27eau);
  /* 111a27ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a27ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a27ef call 0x111a40a0 */
  push32(0x111a27f4u); f_111a40a0();
  /* 111a27f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a27f6 jle 0x111a28ab */
  if ((C.zf||C.sf!=C.of)) goto L_111a28ab;
  /* 111a27fc mov esi, esp */
  ESI = (ESP);
  /* 111a27fe push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2800 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2802 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a2808u);
  /* 111a2808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a280b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a280d call 0x111a40a0 */
  push32(0x111a2812u); f_111a40a0();
  /* 111a2812 mov esi, esp */
  ESI = (ESP);
  /* 111a2814 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2816 call dword ptr [0x111d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4474))), 0x111a281cu);
  /* 111a281c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a281f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2821 call 0x111a40a0 */
  push32(0x111a2826u); f_111a40a0();
  /* 111a2826 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a282c mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 111a2831 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a2833 mov esi, esp */
  ESI = (ESP);
  /* 111a2835 push ecx */
  push32((uint32_t)(ECX));
  /* 111a2836 push 0x111cc324 */
  push32((uint32_t)(0x111cc324u));
  /* 111a283b call dword ptr [0x111d44b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44b0))), 0x111a2841u);
  /* 111a2841 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2844 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2846 call 0x111a40a0 */
  push32(0x111a284bu); f_111a40a0();
  /* 111a284b mov esi, esp */
  ESI = (ESP);
  /* 111a284d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a284f call dword ptr [0x111d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4474))), 0x111a2855u);
  /* 111a2855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2858 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a285a call 0x111a40a0 */
  push32(0x111a285fu); f_111a40a0();
  /* 111a285f imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a2865 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 111a286a sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a286c mov esi, esp */
  ESI = (ESP);
  /* 111a286e push edx */
  push32((uint32_t)(EDX));
  /* 111a286f push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2871 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2873 call dword ptr [0x111d44a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a8))), 0x111a2879u);
  /* 111a2879 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a287c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a287e call 0x111a40a0 */
  push32(0x111a2883u); f_111a40a0();
  /* 111a2883 mov esi, esp */
  ESI = (ESP);
  /* 111a2885 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111a2887 call dword ptr [0x111d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4458))), 0x111a288du);
  /* 111a288d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2890 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2892 call 0x111a40a0 */
  push32(0x111a2897u); f_111a40a0();
  /* 111a2897 mov esi, esp */
  ESI = (ESP);
  /* 111a2899 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 111a289b call dword ptr [0x111d4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4448))), 0x111a28a1u);
  /* 111a28a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a28a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a28a6 call 0x111a40a0 */
  push32(0x111a28abu); f_111a40a0();
L_111a28ab:;
  /* 111a28ab mov esi, esp */
  ESI = (ESP);
  /* 111a28ad push 1 */
  push32((uint32_t)(0x1u));
  /* 111a28af call dword ptr [0x111d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d448c))), 0x111a28b5u);
  /* 111a28b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a28b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a28ba call 0x111a40a0 */
  push32(0x111a28bfu); f_111a40a0();
  /* 111a28bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a28c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a28c6 je 0x111a2912 */
  if (C.zf) goto L_111a2912;
  /* 111a28c8 mov esi, esp */
  ESI = (ESP);
  /* 111a28ca push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 111a28cc call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a28d2u);
  /* 111a28d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a28d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a28d7 call 0x111a40a0 */
  push32(0x111a28dcu); f_111a40a0();
  /* 111a28dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a28e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a28e3 je 0x111a2912 */
  if (C.zf) goto L_111a2912;
  /* 111a28e5 mov esi, esp */
  ESI = (ESP);
  /* 111a28e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a28e9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 111a28eb call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a28f1u);
  /* 111a28f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a28f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a28f6 call 0x111a40a0 */
  push32(0x111a28fbu); f_111a40a0();
  /* 111a28fb mov esi, esp */
  ESI = (ESP);
  /* 111a28fd push 0x111cc318 */
  push32((uint32_t)(0x111cc318u));
  /* 111a2902 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a2908u);
  /* 111a2908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a290b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a290d call 0x111a40a0 */
  push32(0x111a2912u); f_111a40a0();
L_111a2912:;
  /* 111a2912 mov esi, esp */
  ESI = (ESP);
  /* 111a2914 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 111a2916 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a291cu);
  /* 111a291c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a291f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2921 call 0x111a40a0 */
  push32(0x111a2926u); f_111a40a0();
  /* 111a2926 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a292b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a292d je 0x111a29bd */
  if (C.zf) goto L_111a29bd;
  /* 111a2933 mov esi, esp */
  ESI = (ESP);
  /* 111a2935 push 0x111d1440 */
  push32((uint32_t)(0x111d1440u));
  /* 111a293a call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a2940u);
  /* 111a2940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2945 call 0x111a40a0 */
  push32(0x111a294au); f_111a40a0();
  /* 111a294a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a294c jne 0x111a29bd */
  if (!C.zf) goto L_111a29bd;
  /* 111a294e mov esi, esp */
  ESI = (ESP);
  /* 111a2950 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2952 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 111a2954 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a295au);
  /* 111a295a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a295d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a295f call 0x111a40a0 */
  push32(0x111a2964u); f_111a40a0();
  /* 111a2964 mov esi, esp */
  ESI = (ESP);
  /* 111a2966 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a2968 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a296a call dword ptr [0x111d44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44b8))), 0x111a2970u);
  /* 111a2970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2975 call 0x111a40a0 */
  push32(0x111a297au); f_111a40a0();
  /* 111a297a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a297c jle 0x111a2997 */
  if ((C.zf||C.sf!=C.of)) goto L_111a2997;
  /* 111a297e mov esi, esp */
  ESI = (ESP);
  /* 111a2980 push 0x111cc310 */
  push32((uint32_t)(0x111cc310u));
  /* 111a2985 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a298bu);
  /* 111a298b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a298e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2990 call 0x111a40a0 */
  push32(0x111a2995u); f_111a40a0();
  /* 111a2995 jmp 0x111a29ae */
  goto L_111a29ae;
L_111a2997:;
  /* 111a2997 mov esi, esp */
  ESI = (ESP);
  /* 111a2999 push 0x111cc304 */
  push32((uint32_t)(0x111cc304u));
  /* 111a299e call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a29a4u);
  /* 111a29a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a29a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a29a9 call 0x111a40a0 */
  push32(0x111a29aeu); f_111a40a0();
L_111a29ae:;
  /* 111a29ae mov esi, esp */
  ESI = (ESP);
  /* 111a29b0 call dword ptr [0x111d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44bc))), 0x111a29b6u);
  /* 111a29b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a29b8 call 0x111a40a0 */
  push32(0x111a29bdu); f_111a40a0();
L_111a29bd:;
  /* 111a29bd mov esi, esp */
  ESI = (ESP);
  /* 111a29bf push 2 */
  push32((uint32_t)(0x2u));
  /* 111a29c1 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a29c7u);
  /* 111a29c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a29ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a29cc call 0x111a40a0 */
  push32(0x111a29d1u); f_111a40a0();
  /* 111a29d1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a29d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a29d8 jne 0x111a2a71 */
  if (!C.zf) goto L_111a2a71;
  /* 111a29de mov esi, esp */
  ESI = (ESP);
  /* 111a29e0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 111a29e2 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a29e8u);
  /* 111a29e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a29eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a29ed call 0x111a40a0 */
  push32(0x111a29f2u); f_111a40a0();
  /* 111a29f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a29f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a29f9 jne 0x111a2a71 */
  if (!C.zf) goto L_111a2a71;
  /* 111a29fb mov esi, esp */
  ESI = (ESP);
  /* 111a29fd push 0x61 */
  push32((uint32_t)(0x61u));
  /* 111a29ff call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2a05u);
  /* 111a2a05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2a08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2a0a call 0x111a40a0 */
  push32(0x111a2a0fu); f_111a40a0();
  /* 111a2a0f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2a16 je 0x111a2a71 */
  if (C.zf) goto L_111a2a71;
  /* 111a2a18 mov esi, esp */
  ESI = (ESP);
  /* 111a2a1a push 0xc */
  push32((uint32_t)(0xcu));
  /* 111a2a1c call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2a22u);
  /* 111a2a22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2a25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2a27 call 0x111a40a0 */
  push32(0x111a2a2cu); f_111a40a0();
  /* 111a2a2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2a33 jne 0x111a2a71 */
  if (!C.zf) goto L_111a2a71;
  /* 111a2a35 mov esi, esp */
  ESI = (ESP);
  /* 111a2a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2a39 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 111a2a3b call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a2a41u);
  /* 111a2a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2a44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2a46 call 0x111a40a0 */
  push32(0x111a2a4bu); f_111a40a0();
  /* 111a2a4b mov esi, esp */
  ESI = (ESP);
  /* 111a2a4d push 0x111cc2fc */
  push32((uint32_t)(0x111cc2fcu));
  /* 111a2a52 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a2a58u);
  /* 111a2a58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2a5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2a5d call 0x111a40a0 */
  push32(0x111a2a62u); f_111a40a0();
  /* 111a2a62 mov esi, esp */
  ESI = (ESP);
  /* 111a2a64 call dword ptr [0x111d44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44b4))), 0x111a2a6au);
  /* 111a2a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2a6c call 0x111a40a0 */
  push32(0x111a2a71u); f_111a40a0();
L_111a2a71:;
  /* 111a2a71 mov esi, esp */
  ESI = (ESP);
  /* 111a2a73 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 111a2a75 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2a7bu);
  /* 111a2a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2a80 call 0x111a40a0 */
  push32(0x111a2a85u); f_111a40a0();
  /* 111a2a85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2a8c jne 0x111a2b81 */
  if (!C.zf) goto L_111a2b81;
  /* 111a2a92 mov esi, esp */
  ESI = (ESP);
  /* 111a2a94 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a2a96 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2a9cu);
  /* 111a2a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2aa1 call 0x111a40a0 */
  push32(0x111a2aa6u); f_111a40a0();
  /* 111a2aa6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2aad je 0x111a2b81 */
  if (C.zf) goto L_111a2b81;
  /* 111a2ab3 mov esi, esp */
  ESI = (ESP);
  /* 111a2ab5 push 0x111d15a0 */
  push32((uint32_t)(0x111d15a0u));
  /* 111a2aba call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a2ac0u);
  /* 111a2ac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2ac3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2ac5 call 0x111a40a0 */
  push32(0x111a2acau); f_111a40a0();
  /* 111a2aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2acc jne 0x111a2b81 */
  if (!C.zf) goto L_111a2b81;
  /* 111a2ad2 mov esi, esp */
  ESI = (ESP);
  /* 111a2ad4 push 0x111d1440 */
  push32((uint32_t)(0x111d1440u));
  /* 111a2ad9 push 0x111d1510 */
  push32((uint32_t)(0x111d1510u));
  /* 111a2ade call dword ptr [0x111d44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a0))), 0x111a2ae4u);
  /* 111a2ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2ae9 call 0x111a40a0 */
  push32(0x111a2aeeu); f_111a40a0();
  /* 111a2aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2af0 jle 0x111a2b81 */
  if ((C.zf||C.sf!=C.of)) goto L_111a2b81;
  /* 111a2af6 mov esi, esp */
  ESI = (ESP);
  /* 111a2af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2afa push 4 */
  push32((uint32_t)(0x4u));
  /* 111a2afc call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a2b02u);
  /* 111a2b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2b05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2b07 call 0x111a40a0 */
  push32(0x111a2b0cu); f_111a40a0();
  /* 111a2b0c mov esi, esp */
  ESI = (ESP);
  /* 111a2b0e push 0x111cc2f4 */
  push32((uint32_t)(0x111cc2f4u));
  /* 111a2b13 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a2b19u);
  /* 111a2b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2b1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2b1e call 0x111a40a0 */
  push32(0x111a2b23u); f_111a40a0();
  /* 111a2b23 mov esi, esp */
  ESI = (ESP);
  /* 111a2b25 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a2b27 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2b29 call dword ptr [0x111d44f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44f8))), 0x111a2b2fu);
  /* 111a2b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2b32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2b34 call 0x111a40a0 */
  push32(0x111a2b39u); f_111a40a0();
  /* 111a2b39 mov esi, esp */
  ESI = (ESP);
  /* 111a2b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2b3d push 0x111d1578 */
  push32((uint32_t)(0x111d1578u));
  /* 111a2b42 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a2b48u);
  /* 111a2b48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2b4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2b4d call 0x111a40a0 */
  push32(0x111a2b52u); f_111a40a0();
  /* 111a2b52 mov esi, esp */
  ESI = (ESP);
  /* 111a2b54 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2b56 push 0x111d1580 */
  push32((uint32_t)(0x111d1580u));
  /* 111a2b5b call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a2b61u);
  /* 111a2b61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2b66 call 0x111a40a0 */
  push32(0x111a2b6bu); f_111a40a0();
  /* 111a2b6b mov esi, esp */
  ESI = (ESP);
  /* 111a2b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2b6f push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2b71 call dword ptr [0x111d4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4498))), 0x111a2b77u);
  /* 111a2b77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2b7c call 0x111a40a0 */
  push32(0x111a2b81u); f_111a40a0();
L_111a2b81:;
  /* 111a2b81 mov esi, esp */
  ESI = (ESP);
  /* 111a2b83 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a2b85 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2b8bu);
  /* 111a2b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2b90 call 0x111a40a0 */
  push32(0x111a2b95u); f_111a40a0();
  /* 111a2b95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2b9c je 0x111a2de0 */
  if (C.zf) goto L_111a2de0;
  /* 111a2ba2 mov esi, esp */
  ESI = (ESP);
  /* 111a2ba4 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a2ba6 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2bacu);
  /* 111a2bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2baf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2bb1 call 0x111a40a0 */
  push32(0x111a2bb6u); f_111a40a0();
  /* 111a2bb6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2bbd je 0x111a2de0 */
  if (C.zf) goto L_111a2de0;
  /* 111a2bc3 mov esi, esp */
  ESI = (ESP);
  /* 111a2bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2bc7 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a2bc9 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a2bcfu);
  /* 111a2bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2bd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2bd4 call 0x111a40a0 */
  push32(0x111a2bd9u); f_111a40a0();
  /* 111a2bd9 mov esi, esp */
  ESI = (ESP);
  /* 111a2bdb push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2bdd push 6 */
  push32((uint32_t)(0x6u));
  /* 111a2bdf call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a2be5u);
  /* 111a2be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2be8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2bea call 0x111a40a0 */
  push32(0x111a2befu); f_111a40a0();
  /* 111a2bef mov esi, esp */
  ESI = (ESP);
  /* 111a2bf1 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 111a2bf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2bf8 call dword ptr [0x111d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4470))), 0x111a2bfeu);
  /* 111a2bfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2c03 call 0x111a40a0 */
  push32(0x111a2c08u); f_111a40a0();
  /* 111a2c08 mov esi, esp */
  ESI = (ESP);
  /* 111a2c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2c0c call dword ptr [0x111d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4474))), 0x111a2c12u);
  /* 111a2c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2c15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2c17 call 0x111a40a0 */
  push32(0x111a2c1cu); f_111a40a0();
  /* 111a2c1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a2c1f cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2c23 ja 0x111a2d7a */
  if ((!C.cf&&!C.zf)) goto L_111a2d7a;
  /* 111a2c29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a2c2c jmp dword ptr [eax*4 + 0x111a383b] */
  switch (EAX) {
    case 0: goto L_111a2c33;
    case 1: goto L_111a2c65;
    case 2: goto L_111a2cc4;
    case 3: goto L_111a2d20;
    case 4: goto L_111a3269;
    case 5: goto L_111a32c8;
    case 6: goto L_111a3327;
    case 7: goto L_111a3383;
    default: x86_unimpl("switch@0x111a2c2c out of table"); return;
  }
L_111a2c33:;
  /* 111a2c33 mov esi, esp */
  ESI = (ESP);
  /* 111a2c35 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a2c3a push 0x111d1558 */
  push32((uint32_t)(0x111d1558u));
  /* 111a2c3f push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2c41 push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a2c46 push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a2c4b push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a2c50 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a2c56u);
  /* 111a2c56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2c59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2c5b call 0x111a40a0 */
  push32(0x111a2c60u); f_111a40a0();
  /* 111a2c60 jmp 0x111a2d7a */
  goto L_111a2d7a;
L_111a2c65:;
  /* 111a2c65 mov esi, esp */
  ESI = (ESP);
  /* 111a2c67 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a2c6c push 0x111d1558 */
  push32((uint32_t)(0x111d1558u));
  /* 111a2c71 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2c73 push 0x111d15d0 */
  push32((uint32_t)(0x111d15d0u));
  /* 111a2c78 push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a2c7d push 0x111d1428 */
  push32((uint32_t)(0x111d1428u));
  /* 111a2c82 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a2c88u);
  /* 111a2c88 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2c8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2c8d call 0x111a40a0 */
  push32(0x111a2c92u); f_111a40a0();
  /* 111a2c92 mov esi, esp */
  ESI = (ESP);
  /* 111a2c94 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a2c99 push 0x111d1558 */
  push32((uint32_t)(0x111d1558u));
  /* 111a2c9e push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2ca0 push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a2ca5 push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a2caa push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a2caf call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a2cb5u);
  /* 111a2cb5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2cba call 0x111a40a0 */
  push32(0x111a2cbfu); f_111a40a0();
  /* 111a2cbf jmp 0x111a2d7a */
  goto L_111a2d7a;
L_111a2cc4:;
  /* 111a2cc4 mov esi, esp */
  ESI = (ESP);
  /* 111a2cc6 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a2ccb push 0x111d1558 */
  push32((uint32_t)(0x111d1558u));
  /* 111a2cd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2cd2 push 0x111d15d0 */
  push32((uint32_t)(0x111d15d0u));
  /* 111a2cd7 push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a2cdc push 0x111d1428 */
  push32((uint32_t)(0x111d1428u));
  /* 111a2ce1 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a2ce7u);
  /* 111a2ce7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2cea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2cec call 0x111a40a0 */
  push32(0x111a2cf1u); f_111a40a0();
  /* 111a2cf1 mov esi, esp */
  ESI = (ESP);
  /* 111a2cf3 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a2cf8 push 0x111d1558 */
  push32((uint32_t)(0x111d1558u));
  /* 111a2cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2cff push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a2d04 push 0x111d13e8 */
  push32((uint32_t)(0x111d13e8u));
  /* 111a2d09 push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a2d0e call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a2d14u);
  /* 111a2d14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2d17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2d19 call 0x111a40a0 */
  push32(0x111a2d1eu); f_111a40a0();
  /* 111a2d1e jmp 0x111a2d7a */
  goto L_111a2d7a;
L_111a2d20:;
  /* 111a2d20 mov esi, esp */
  ESI = (ESP);
  /* 111a2d22 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a2d27 push 0x111d1558 */
  push32((uint32_t)(0x111d1558u));
  /* 111a2d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2d2e push 0x111d15d0 */
  push32((uint32_t)(0x111d15d0u));
  /* 111a2d33 push 0x111d13e8 */
  push32((uint32_t)(0x111d13e8u));
  /* 111a2d38 push 0x111d1428 */
  push32((uint32_t)(0x111d1428u));
  /* 111a2d3d call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a2d43u);
  /* 111a2d43 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2d46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2d48 call 0x111a40a0 */
  push32(0x111a2d4du); f_111a40a0();
  /* 111a2d4d mov esi, esp */
  ESI = (ESP);
  /* 111a2d4f push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a2d54 push 0x111d1558 */
  push32((uint32_t)(0x111d1558u));
  /* 111a2d59 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2d5b push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a2d60 push 0x111d13e8 */
  push32((uint32_t)(0x111d13e8u));
  /* 111a2d65 push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a2d6a call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a2d70u);
  /* 111a2d70 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2d73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2d75 call 0x111a40a0 */
  push32(0x111a2d7au); f_111a40a0();
L_111a2d7a:;
  /* 111a2d7a mov esi, esp */
  ESI = (ESP);
  /* 111a2d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2d7e push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a2d83 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a2d89u);
  /* 111a2d89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2d8e call 0x111a40a0 */
  push32(0x111a2d93u); f_111a40a0();
  /* 111a2d93 mov esi, esp */
  ESI = (ESP);
  /* 111a2d95 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2d97 push 0x111d1428 */
  push32((uint32_t)(0x111d1428u));
  /* 111a2d9c call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a2da2u);
  /* 111a2da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2da5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2da7 call 0x111a40a0 */
  push32(0x111a2dacu); f_111a40a0();
  /* 111a2dac mov esi, esp */
  ESI = (ESP);
  /* 111a2dae push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2db0 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 111a2db5 push 0x111d14f8 */
  push32((uint32_t)(0x111d14f8u));
  /* 111a2dba push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2dbc call dword ptr [0x111d449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d449c))), 0x111a2dc2u);
  /* 111a2dc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2dc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2dc7 call 0x111a40a0 */
  push32(0x111a2dccu); f_111a40a0();
  /* 111a2dcc mov esi, esp */
  ESI = (ESP);
  /* 111a2dce push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2dd0 call dword ptr [0x111d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4480))), 0x111a2dd6u);
  /* 111a2dd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2dd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2ddb call 0x111a40a0 */
  push32(0x111a2de0u); f_111a40a0();
L_111a2de0:;
  /* 111a2de0 mov esi, esp */
  ESI = (ESP);
  /* 111a2de2 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a2de4 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2deau);
  /* 111a2dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2ded cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2def call 0x111a40a0 */
  push32(0x111a2df4u); f_111a40a0();
  /* 111a2df4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2dfb jne 0x111a2e50 */
  if (!C.zf) goto L_111a2e50;
  /* 111a2dfd mov esi, esp */
  ESI = (ESP);
  /* 111a2dff push 6 */
  push32((uint32_t)(0x6u));
  /* 111a2e01 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2e07u);
  /* 111a2e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2e0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2e0c call 0x111a40a0 */
  push32(0x111a2e11u); f_111a40a0();
  /* 111a2e11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2e16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2e18 je 0x111a2e50 */
  if (C.zf) goto L_111a2e50;
  /* 111a2e1a mov esi, esp */
  ESI = (ESP);
  /* 111a2e1c push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a2e21 push 0x111d14f8 */
  push32((uint32_t)(0x111d14f8u));
  /* 111a2e26 call dword ptr [0x111d44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a0))), 0x111a2e2cu);
  /* 111a2e2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2e2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2e31 call 0x111a40a0 */
  push32(0x111a2e36u); f_111a40a0();
  /* 111a2e36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2e38 jle 0x111a2e50 */
  if ((C.zf||C.sf!=C.of)) goto L_111a2e50;
  /* 111a2e3a mov esi, esp */
  ESI = (ESP);
  /* 111a2e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2e3e push 6 */
  push32((uint32_t)(0x6u));
  /* 111a2e40 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a2e46u);
  /* 111a2e46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2e49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2e4b call 0x111a40a0 */
  push32(0x111a2e50u); f_111a40a0();
L_111a2e50:;
  /* 111a2e50 mov esi, esp */
  ESI = (ESP);
  /* 111a2e52 push 6 */
  push32((uint32_t)(0x6u));
  /* 111a2e54 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2e5au);
  /* 111a2e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2e5f call 0x111a40a0 */
  push32(0x111a2e64u); f_111a40a0();
  /* 111a2e64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2e69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2e6b jne 0x111a2ee5 */
  if (!C.zf) goto L_111a2ee5;
  /* 111a2e6d mov esi, esp */
  ESI = (ESP);
  /* 111a2e6f push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2e71 call dword ptr [0x111d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4480))), 0x111a2e77u);
  /* 111a2e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2e7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2e7c call 0x111a40a0 */
  push32(0x111a2e81u); f_111a40a0();
  /* 111a2e81 mov esi, esp */
  ESI = (ESP);
  /* 111a2e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2e85 push 0x111d1428 */
  push32((uint32_t)(0x111d1428u));
  /* 111a2e8a call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a2e90u);
  /* 111a2e90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2e93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2e95 call 0x111a40a0 */
  push32(0x111a2e9au); f_111a40a0();
  /* 111a2e9a mov esi, esp */
  ESI = (ESP);
  /* 111a2e9c push 0x111d1490 */
  push32((uint32_t)(0x111d1490u));
  /* 111a2ea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2ea3 call dword ptr [0x111d44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c8))), 0x111a2ea9u);
  /* 111a2ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2eae call 0x111a40a0 */
  push32(0x111a2eb3u); f_111a40a0();
  /* 111a2eb3 mov esi, esp */
  ESI = (ESP);
  /* 111a2eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a2eb7 push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a2ebc call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a2ec2u);
  /* 111a2ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2ec5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2ec7 call 0x111a40a0 */
  push32(0x111a2eccu); f_111a40a0();
  /* 111a2ecc mov esi, esp */
  ESI = (ESP);
  /* 111a2ece push 0x111d15a8 */
  push32((uint32_t)(0x111d15a8u));
  /* 111a2ed3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2ed5 call dword ptr [0x111d44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c8))), 0x111a2edbu);
  /* 111a2edb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2ede cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2ee0 call 0x111a40a0 */
  push32(0x111a2ee5u); f_111a40a0();
L_111a2ee5:;
  /* 111a2ee5 mov esi, esp */
  ESI = (ESP);
  /* 111a2ee7 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a2ee9 call dword ptr [0x111d44c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c0))), 0x111a2eefu);
  /* 111a2eef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2ef2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2ef4 call 0x111a40a0 */
  push32(0x111a2ef9u); f_111a40a0();
  /* 111a2ef9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2f00 je 0x111a2f6e */
  if (C.zf) goto L_111a2f6e;
  /* 111a2f02 mov esi, esp */
  ESI = (ESP);
  /* 111a2f04 push 0x111d1428 */
  push32((uint32_t)(0x111d1428u));
  /* 111a2f09 call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a2f0fu);
  /* 111a2f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2f12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2f14 call 0x111a40a0 */
  push32(0x111a2f19u); f_111a40a0();
  /* 111a2f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2f1b jne 0x111a2f38 */
  if (!C.zf) goto L_111a2f38;
  /* 111a2f1d mov esi, esp */
  ESI = (ESP);
  /* 111a2f1f push 0x111d1420 */
  push32((uint32_t)(0x111d1420u));
  /* 111a2f24 call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a2f2au);
  /* 111a2f2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2f2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2f2f call 0x111a40a0 */
  push32(0x111a2f34u); f_111a40a0();
  /* 111a2f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2f36 je 0x111a2f55 */
  if (C.zf) goto L_111a2f55;
L_111a2f38:;
  /* 111a2f38 mov esi, esp */
  ESI = (ESP);
  /* 111a2f3a push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2f3c call dword ptr [0x111d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d448c))), 0x111a2f42u);
  /* 111a2f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2f45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2f47 call 0x111a40a0 */
  push32(0x111a2f4cu); f_111a40a0();
  /* 111a2f4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2f53 je 0x111a2f6e */
  if (C.zf) goto L_111a2f6e;
L_111a2f55:;
  /* 111a2f55 mov esi, esp */
  ESI = (ESP);
  /* 111a2f57 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 111a2f5c push 3 */
  push32((uint32_t)(0x3u));
  /* 111a2f5e call dword ptr [0x111d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4470))), 0x111a2f64u);
  /* 111a2f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2f69 call 0x111a40a0 */
  push32(0x111a2f6eu); f_111a40a0();
L_111a2f6e:;
  /* 111a2f6e mov esi, esp */
  ESI = (ESP);
  /* 111a2f70 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a2f72 call dword ptr [0x111d44d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d0))), 0x111a2f78u);
  /* 111a2f78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2f7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2f7d call 0x111a40a0 */
  push32(0x111a2f82u); f_111a40a0();
  /* 111a2f82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2f89 je 0x111a2fc9 */
  if (C.zf) goto L_111a2fc9;
  /* 111a2f8b mov esi, esp */
  ESI = (ESP);
  /* 111a2f8d push 3 */
  push32((uint32_t)(0x3u));
  /* 111a2f8f call dword ptr [0x111d44d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d4))), 0x111a2f95u);
  /* 111a2f95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2f98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2f9a call 0x111a40a0 */
  push32(0x111a2f9fu); f_111a40a0();
  /* 111a2f9f mov esi, esp */
  ESI = (ESP);
  /* 111a2fa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a2fa3 call dword ptr [0x111d44d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d4))), 0x111a2fa9u);
  /* 111a2fa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2fac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2fae call 0x111a40a0 */
  push32(0x111a2fb3u); f_111a40a0();
  /* 111a2fb3 mov esi, esp */
  ESI = (ESP);
  /* 111a2fb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a2fb7 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a2fb9 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a2fbfu);
  /* 111a2fbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2fc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2fc4 call 0x111a40a0 */
  push32(0x111a2fc9u); f_111a40a0();
L_111a2fc9:;
  /* 111a2fc9 mov esi, esp */
  ESI = (ESP);
  /* 111a2fcb push 7 */
  push32((uint32_t)(0x7u));
  /* 111a2fcd call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a2fd3u);
  /* 111a2fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2fd8 call 0x111a40a0 */
  push32(0x111a2fddu); f_111a40a0();
  /* 111a2fdd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a2fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2fe4 je 0x111a303d */
  if (C.zf) goto L_111a303d;
  /* 111a2fe6 mov esi, esp */
  ESI = (ESP);
  /* 111a2fe8 push 0x111d15a8 */
  push32((uint32_t)(0x111d15a8u));
  /* 111a2fed call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a2ff3u);
  /* 111a2ff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a2ff6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a2ff8 call 0x111a40a0 */
  push32(0x111a2ffdu); f_111a40a0();
  /* 111a2ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a2fff jne 0x111a303d */
  if (!C.zf) goto L_111a303d;
  /* 111a3001 mov esi, esp */
  ESI = (ESP);
  /* 111a3003 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a3005 push 7 */
  push32((uint32_t)(0x7u));
  /* 111a3007 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a300du);
  /* 111a300d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3010 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3012 call 0x111a40a0 */
  push32(0x111a3017u); f_111a40a0();
  /* 111a3017 mov esi, esp */
  ESI = (ESP);
  /* 111a3019 push 0x111cc2e8 */
  push32((uint32_t)(0x111cc2e8u));
  /* 111a301e call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a3024u);
  /* 111a3024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3027 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3029 call 0x111a40a0 */
  push32(0x111a302eu); f_111a40a0();
  /* 111a302e mov esi, esp */
  ESI = (ESP);
  /* 111a3030 call dword ptr [0x111d44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44bc))), 0x111a3036u);
  /* 111a3036 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3038 call 0x111a40a0 */
  push32(0x111a303du); f_111a40a0();
L_111a303d:;
  /* 111a303d mov esi, esp */
  ESI = (ESP);
  /* 111a303f push 8 */
  push32((uint32_t)(0x8u));
  /* 111a3041 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a3047u);
  /* 111a3047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a304a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a304c call 0x111a40a0 */
  push32(0x111a3051u); f_111a40a0();
  /* 111a3051 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a3056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3058 je 0x111a30a2 */
  if (C.zf) goto L_111a30a2;
  /* 111a305a mov esi, esp */
  ESI = (ESP);
  /* 111a305c push 0x111d13e0 */
  push32((uint32_t)(0x111d13e0u));
  /* 111a3061 call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a3067u);
  /* 111a3067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a306a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a306c call 0x111a40a0 */
  push32(0x111a3071u); f_111a40a0();
  /* 111a3071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3073 jne 0x111a30a2 */
  if (!C.zf) goto L_111a30a2;
  /* 111a3075 mov esi, esp */
  ESI = (ESP);
  /* 111a3077 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a3079 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a307b call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a3081u);
  /* 111a3081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3084 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3086 call 0x111a40a0 */
  push32(0x111a308bu); f_111a40a0();
  /* 111a308b mov esi, esp */
  ESI = (ESP);
  /* 111a308d push 0x111cc2dc */
  push32((uint32_t)(0x111cc2dcu));
  /* 111a3092 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a3098u);
  /* 111a3098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a309b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a309d call 0x111a40a0 */
  push32(0x111a30a2u); f_111a40a0();
L_111a30a2:;
  /* 111a30a2 mov esi, esp */
  ESI = (ESP);
  /* 111a30a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111a30a6 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a30acu);
  /* 111a30ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a30af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a30b1 call 0x111a40a0 */
  push32(0x111a30b6u); f_111a40a0();
  /* 111a30b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a30bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a30bd je 0x111a3107 */
  if (C.zf) goto L_111a3107;
  /* 111a30bf mov esi, esp */
  ESI = (ESP);
  /* 111a30c1 push 0x111d15c8 */
  push32((uint32_t)(0x111d15c8u));
  /* 111a30c6 call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a30ccu);
  /* 111a30cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a30cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a30d1 call 0x111a40a0 */
  push32(0x111a30d6u); f_111a40a0();
  /* 111a30d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a30d8 jne 0x111a3107 */
  if (!C.zf) goto L_111a3107;
  /* 111a30da mov esi, esp */
  ESI = (ESP);
  /* 111a30dc push 0 */
  push32((uint32_t)(0x0u));
  /* 111a30de push 0xb */
  push32((uint32_t)(0xbu));
  /* 111a30e0 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a30e6u);
  /* 111a30e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a30e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a30eb call 0x111a40a0 */
  push32(0x111a30f0u); f_111a40a0();
  /* 111a30f0 mov esi, esp */
  ESI = (ESP);
  /* 111a30f2 push 0x111cc2d0 */
  push32((uint32_t)(0x111cc2d0u));
  /* 111a30f7 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a30fdu);
  /* 111a30fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3102 call 0x111a40a0 */
  push32(0x111a3107u); f_111a40a0();
L_111a3107:;
  /* 111a3107 mov esi, esp */
  ESI = (ESP);
  /* 111a3109 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a310b call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a3111u);
  /* 111a3111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3116 call 0x111a40a0 */
  push32(0x111a311bu); f_111a40a0();
  /* 111a311b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a3120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3122 jne 0x111a31b7 */
  if (!C.zf) goto L_111a31b7;
  /* 111a3128 mov esi, esp */
  ESI = (ESP);
  /* 111a312a push 0xb */
  push32((uint32_t)(0xbu));
  /* 111a312c call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a3132u);
  /* 111a3132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3135 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3137 call 0x111a40a0 */
  push32(0x111a313cu); f_111a40a0();
  /* 111a313c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a3141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3143 jne 0x111a31b7 */
  if (!C.zf) goto L_111a31b7;
  /* 111a3145 mov esi, esp */
  ESI = (ESP);
  /* 111a3147 push 0xc */
  push32((uint32_t)(0xcu));
  /* 111a3149 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a314fu);
  /* 111a314f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3152 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3154 call 0x111a40a0 */
  push32(0x111a3159u); f_111a40a0();
  /* 111a3159 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a315e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3160 je 0x111a31b7 */
  if (C.zf) goto L_111a31b7;
  /* 111a3162 mov esi, esp */
  ESI = (ESP);
  /* 111a3164 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a3166 push 0xc */
  push32((uint32_t)(0xcu));
  /* 111a3168 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a316eu);
  /* 111a316e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3171 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3173 call 0x111a40a0 */
  push32(0x111a3178u); f_111a40a0();
  /* 111a3178 mov esi, esp */
  ESI = (ESP);
  /* 111a317a push 0x111cc2c8 */
  push32((uint32_t)(0x111cc2c8u));
  /* 111a317f call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a3185u);
  /* 111a3185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a318a call 0x111a40a0 */
  push32(0x111a318fu); f_111a40a0();
  /* 111a318f mov esi, esp */
  ESI = (ESP);
  /* 111a3191 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 111a3193 call dword ptr [0x111d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4458))), 0x111a3199u);
  /* 111a3199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a319c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a319e call 0x111a40a0 */
  push32(0x111a31a3u); f_111a40a0();
  /* 111a31a3 mov esi, esp */
  ESI = (ESP);
  /* 111a31a5 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 111a31a7 call dword ptr [0x111d4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4448))), 0x111a31adu);
  /* 111a31ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a31b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a31b2 call 0x111a40a0 */
  push32(0x111a31b7u); f_111a40a0();
L_111a31b7:;
  /* 111a31b7 mov esi, esp */
  ESI = (ESP);
  /* 111a31b9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111a31bb call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a31c1u);
  /* 111a31c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a31c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a31c6 call 0x111a40a0 */
  push32(0x111a31cbu); f_111a40a0();
  /* 111a31cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a31d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a31d2 je 0x111a3443 */
  if (C.zf) goto L_111a3443;
  /* 111a31d8 mov esi, esp */
  ESI = (ESP);
  /* 111a31da push 9 */
  push32((uint32_t)(0x9u));
  /* 111a31dc call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a31e2u);
  /* 111a31e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a31e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a31e7 call 0x111a40a0 */
  push32(0x111a31ecu); f_111a40a0();
  /* 111a31ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a31f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a31f3 je 0x111a3443 */
  if (C.zf) goto L_111a3443;
  /* 111a31f9 mov esi, esp */
  ESI = (ESP);
  /* 111a31fb push 0 */
  push32((uint32_t)(0x0u));
  /* 111a31fd push 9 */
  push32((uint32_t)(0x9u));
  /* 111a31ff call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a3205u);
  /* 111a3205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a320a call 0x111a40a0 */
  push32(0x111a320fu); f_111a40a0();
  /* 111a320f mov esi, esp */
  ESI = (ESP);
  /* 111a3211 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a3213 push 0xa */
  push32((uint32_t)(0xau));
  /* 111a3215 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a321bu);
  /* 111a321b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a321e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3220 call 0x111a40a0 */
  push32(0x111a3225u); f_111a40a0();
  /* 111a3225 mov esi, esp */
  ESI = (ESP);
  /* 111a3227 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 111a322c push 4 */
  push32((uint32_t)(0x4u));
  /* 111a322e call dword ptr [0x111d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4470))), 0x111a3234u);
  /* 111a3234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3237 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3239 call 0x111a40a0 */
  push32(0x111a323eu); f_111a40a0();
  /* 111a323e mov esi, esp */
  ESI = (ESP);
  /* 111a3240 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a3242 call dword ptr [0x111d4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4474))), 0x111a3248u);
  /* 111a3248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a324b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a324d call 0x111a40a0 */
  push32(0x111a3252u); f_111a40a0();
  /* 111a3252 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a3255 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3259 ja 0x111a33dd */
  if ((!C.cf&&!C.zf)) goto L_111a33dd;
  /* 111a325f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a3262 jmp dword ptr [ecx*4 + 0x111a384b] */
  switch (ECX) {
    case 0: goto L_111a3269;
    case 1: goto L_111a32c8;
    case 2: goto L_111a3327;
    case 3: goto L_111a3383;
    default: x86_unimpl("switch@0x111a3262 out of table"); return;
  }
L_111a3269:;
  /* 111a3269 mov esi, esp */
  ESI = (ESP);
  /* 111a326b push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a3270 push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a3275 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a3277 push 0x111d15d0 */
  push32((uint32_t)(0x111d15d0u));
  /* 111a327c push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a3281 push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a3286 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a328cu);
  /* 111a328c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a328f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3291 call 0x111a40a0 */
  push32(0x111a3296u); f_111a40a0();
  /* 111a3296 mov esi, esp */
  ESI = (ESP);
  /* 111a3298 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a329d push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a32a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a32a4 push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a32a9 push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a32ae push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a32b3 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a32b9u);
  /* 111a32b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a32bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a32be call 0x111a40a0 */
  push32(0x111a32c3u); f_111a40a0();
  /* 111a32c3 jmp 0x111a33dd */
  goto L_111a33dd;
L_111a32c8:;
  /* 111a32c8 mov esi, esp */
  ESI = (ESP);
  /* 111a32ca push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a32cf push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a32d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a32d6 push 0x111d15d0 */
  push32((uint32_t)(0x111d15d0u));
  /* 111a32db push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a32e0 push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a32e5 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a32ebu);
  /* 111a32eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a32ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a32f0 call 0x111a40a0 */
  push32(0x111a32f5u); f_111a40a0();
  /* 111a32f5 mov esi, esp */
  ESI = (ESP);
  /* 111a32f7 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a32fc push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a3301 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a3303 push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a3308 push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a330d push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a3312 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a3318u);
  /* 111a3318 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a331b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a331d call 0x111a40a0 */
  push32(0x111a3322u); f_111a40a0();
  /* 111a3322 jmp 0x111a33dd */
  goto L_111a33dd;
L_111a3327:;
  /* 111a3327 mov esi, esp */
  ESI = (ESP);
  /* 111a3329 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a332e push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a3333 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a3335 push 0x111d15d0 */
  push32((uint32_t)(0x111d15d0u));
  /* 111a333a push 0x111d1458 */
  push32((uint32_t)(0x111d1458u));
  /* 111a333f push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a3344 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a334au);
  /* 111a334a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a334d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a334f call 0x111a40a0 */
  push32(0x111a3354u); f_111a40a0();
  /* 111a3354 mov esi, esp */
  ESI = (ESP);
  /* 111a3356 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a335b push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a3360 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a3362 push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a3367 push 0x111d13e8 */
  push32((uint32_t)(0x111d13e8u));
  /* 111a336c push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a3371 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a3377u);
  /* 111a3377 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a337a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a337c call 0x111a40a0 */
  push32(0x111a3381u); f_111a40a0();
  /* 111a3381 jmp 0x111a33dd */
  goto L_111a33dd;
L_111a3383:;
  /* 111a3383 mov esi, esp */
  ESI = (ESP);
  /* 111a3385 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a338a push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a338f push 2 */
  push32((uint32_t)(0x2u));
  /* 111a3391 push 0x111d15d0 */
  push32((uint32_t)(0x111d15d0u));
  /* 111a3396 push 0x111d13e8 */
  push32((uint32_t)(0x111d13e8u));
  /* 111a339b push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a33a0 call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a33a6u);
  /* 111a33a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a33a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a33ab call 0x111a40a0 */
  push32(0x111a33b0u); f_111a40a0();
  /* 111a33b0 mov esi, esp */
  ESI = (ESP);
  /* 111a33b2 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a33b7 push 0x111d1550 */
  push32((uint32_t)(0x111d1550u));
  /* 111a33bc push 2 */
  push32((uint32_t)(0x2u));
  /* 111a33be push 0x111d1450 */
  push32((uint32_t)(0x111d1450u));
  /* 111a33c3 push 0x111d13e8 */
  push32((uint32_t)(0x111d13e8u));
  /* 111a33c8 push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a33cd call dword ptr [0x111d44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c4))), 0x111a33d3u);
  /* 111a33d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a33d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a33d8 call 0x111a40a0 */
  push32(0x111a33ddu); f_111a40a0();
L_111a33dd:;
  /* 111a33dd mov esi, esp */
  ESI = (ESP);
  /* 111a33df push 0 */
  push32((uint32_t)(0x0u));
  /* 111a33e1 push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a33e6 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a33ecu);
  /* 111a33ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a33ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a33f1 call 0x111a40a0 */
  push32(0x111a33f6u); f_111a40a0();
  /* 111a33f6 mov esi, esp */
  ESI = (ESP);
  /* 111a33f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a33fa push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a33ff call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a3405u);
  /* 111a3405 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3408 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a340a call 0x111a40a0 */
  push32(0x111a340fu); f_111a40a0();
  /* 111a340f mov esi, esp */
  ESI = (ESP);
  /* 111a3411 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a3413 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 111a3418 push 0x111d14f0 */
  push32((uint32_t)(0x111d14f0u));
  /* 111a341d push 2 */
  push32((uint32_t)(0x2u));
  /* 111a341f call dword ptr [0x111d449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d449c))), 0x111a3425u);
  /* 111a3425 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a342a call 0x111a40a0 */
  push32(0x111a342fu); f_111a40a0();
  /* 111a342f mov esi, esp */
  ESI = (ESP);
  /* 111a3431 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a3433 call dword ptr [0x111d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4480))), 0x111a3439u);
  /* 111a3439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a343c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a343e call 0x111a40a0 */
  push32(0x111a3443u); f_111a40a0();
L_111a3443:;
  /* 111a3443 mov esi, esp */
  ESI = (ESP);
  /* 111a3445 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a3447 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a344du);
  /* 111a344d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3452 call 0x111a40a0 */
  push32(0x111a3457u); f_111a40a0();
  /* 111a3457 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a345c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a345e jne 0x111a34b3 */
  if (!C.zf) goto L_111a34b3;
  /* 111a3460 mov esi, esp */
  ESI = (ESP);
  /* 111a3462 push 0xa */
  push32((uint32_t)(0xau));
  /* 111a3464 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a346au);
  /* 111a346a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a346d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a346f call 0x111a40a0 */
  push32(0x111a3474u); f_111a40a0();
  /* 111a3474 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a3479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a347b je 0x111a34b3 */
  if (C.zf) goto L_111a34b3;
  /* 111a347d mov esi, esp */
  ESI = (ESP);
  /* 111a347f push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a3484 push 0x111d14f0 */
  push32((uint32_t)(0x111d14f0u));
  /* 111a3489 call dword ptr [0x111d44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a0))), 0x111a348fu);
  /* 111a348f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3492 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3494 call 0x111a40a0 */
  push32(0x111a3499u); f_111a40a0();
  /* 111a3499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a349b jle 0x111a34b3 */
  if ((C.zf||C.sf!=C.of)) goto L_111a34b3;
  /* 111a349d mov esi, esp */
  ESI = (ESP);
  /* 111a349f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a34a1 push 0xa */
  push32((uint32_t)(0xau));
  /* 111a34a3 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a34a9u);
  /* 111a34a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a34ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a34ae call 0x111a40a0 */
  push32(0x111a34b3u); f_111a40a0();
L_111a34b3:;
  /* 111a34b3 mov esi, esp */
  ESI = (ESP);
  /* 111a34b5 push 0xa */
  push32((uint32_t)(0xau));
  /* 111a34b7 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a34bdu);
  /* 111a34bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a34c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a34c2 call 0x111a40a0 */
  push32(0x111a34c7u); f_111a40a0();
  /* 111a34c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a34cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a34ce jne 0x111a35b8 */
  if (!C.zf) goto L_111a35b8;
  /* 111a34d4 mov esi, esp */
  ESI = (ESP);
  /* 111a34d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a34d8 call dword ptr [0x111d4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4480))), 0x111a34deu);
  /* 111a34de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a34e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a34e3 call 0x111a40a0 */
  push32(0x111a34e8u); f_111a40a0();
  /* 111a34e8 mov esi, esp */
  ESI = (ESP);
  /* 111a34ea push 0 */
  push32((uint32_t)(0x0u));
  /* 111a34ec push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a34f1 call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a34f7u);
  /* 111a34f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a34fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a34fc call 0x111a40a0 */
  push32(0x111a3501u); f_111a40a0();
  /* 111a3501 mov esi, esp */
  ESI = (ESP);
  /* 111a3503 push 0x111d1498 */
  push32((uint32_t)(0x111d1498u));
  /* 111a3508 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a350a call dword ptr [0x111d44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c8))), 0x111a3510u);
  /* 111a3510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3515 call 0x111a40a0 */
  push32(0x111a351au); f_111a40a0();
  /* 111a351a mov esi, esp */
  ESI = (ESP);
  /* 111a351c push 0x111d1538 */
  push32((uint32_t)(0x111d1538u));
  /* 111a3521 call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a3527u);
  /* 111a3527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a352a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a352c call 0x111a40a0 */
  push32(0x111a3531u); f_111a40a0();
  /* 111a3531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3533 je 0x111a3552 */
  if (C.zf) goto L_111a3552;
  /* 111a3535 mov esi, esp */
  ESI = (ESP);
  /* 111a3537 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a3539 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a353fu);
  /* 111a353f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3542 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3544 call 0x111a40a0 */
  push32(0x111a3549u); f_111a40a0();
  /* 111a3549 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a354e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3550 jne 0x111a3586 */
  if (!C.zf) goto L_111a3586;
L_111a3552:;
  /* 111a3552 mov esi, esp */
  ESI = (ESP);
  /* 111a3554 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a3556 push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a355b call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a3561u);
  /* 111a3561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3566 call 0x111a40a0 */
  push32(0x111a356bu); f_111a40a0();
  /* 111a356b mov esi, esp */
  ESI = (ESP);
  /* 111a356d push 0x111d15a8 */
  push32((uint32_t)(0x111d15a8u));
  /* 111a3572 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a3574 call dword ptr [0x111d44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c8))), 0x111a357au);
  /* 111a357a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a357d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a357f call 0x111a40a0 */
  push32(0x111a3584u); f_111a40a0();
  /* 111a3584 jmp 0x111a35b8 */
  goto L_111a35b8;
L_111a3586:;
  /* 111a3586 mov esi, esp */
  ESI = (ESP);
  /* 111a3588 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a358a push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a358f call dword ptr [0x111d4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4468))), 0x111a3595u);
  /* 111a3595 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3598 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a359a call 0x111a40a0 */
  push32(0x111a359fu); f_111a40a0();
  /* 111a359f mov esi, esp */
  ESI = (ESP);
  /* 111a35a1 push 0x111d1538 */
  push32((uint32_t)(0x111d1538u));
  /* 111a35a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a35a8 call dword ptr [0x111d44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c8))), 0x111a35aeu);
  /* 111a35ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a35b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a35b3 call 0x111a40a0 */
  push32(0x111a35b8u); f_111a40a0();
L_111a35b8:;
  /* 111a35b8 mov esi, esp */
  ESI = (ESP);
  /* 111a35ba push 5 */
  push32((uint32_t)(0x5u));
  /* 111a35bc call dword ptr [0x111d44c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44c0))), 0x111a35c2u);
  /* 111a35c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a35c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a35c7 call 0x111a40a0 */
  push32(0x111a35ccu); f_111a40a0();
  /* 111a35cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a35d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a35d3 je 0x111a3641 */
  if (C.zf) goto L_111a3641;
  /* 111a35d5 mov esi, esp */
  ESI = (ESP);
  /* 111a35d7 push 0x111d1438 */
  push32((uint32_t)(0x111d1438u));
  /* 111a35dc call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a35e2u);
  /* 111a35e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a35e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a35e7 call 0x111a40a0 */
  push32(0x111a35ecu); f_111a40a0();
  /* 111a35ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a35ee jne 0x111a360b */
  if (!C.zf) goto L_111a360b;
  /* 111a35f0 mov esi, esp */
  ESI = (ESP);
  /* 111a35f2 push 0x111d1430 */
  push32((uint32_t)(0x111d1430u));
  /* 111a35f7 call dword ptr [0x111d44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44a4))), 0x111a35fdu);
  /* 111a35fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3600 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3602 call 0x111a40a0 */
  push32(0x111a3607u); f_111a40a0();
  /* 111a3607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3609 je 0x111a3628 */
  if (C.zf) goto L_111a3628;
L_111a360b:;
  /* 111a360b mov esi, esp */
  ESI = (ESP);
  /* 111a360d push 4 */
  push32((uint32_t)(0x4u));
  /* 111a360f call dword ptr [0x111d448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d448c))), 0x111a3615u);
  /* 111a3615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3618 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a361a call 0x111a40a0 */
  push32(0x111a361fu); f_111a40a0();
  /* 111a361f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a3624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3626 je 0x111a3641 */
  if (C.zf) goto L_111a3641;
L_111a3628:;
  /* 111a3628 mov esi, esp */
  ESI = (ESP);
  /* 111a362a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 111a362f push 5 */
  push32((uint32_t)(0x5u));
  /* 111a3631 call dword ptr [0x111d4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4470))), 0x111a3637u);
  /* 111a3637 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a363a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a363c call 0x111a40a0 */
  push32(0x111a3641u); f_111a40a0();
L_111a3641:;
  /* 111a3641 mov esi, esp */
  ESI = (ESP);
  /* 111a3643 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a3645 call dword ptr [0x111d44d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d0))), 0x111a364bu);
  /* 111a364b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a364e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3650 call 0x111a40a0 */
  push32(0x111a3655u); f_111a40a0();
  /* 111a3655 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a365a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a365c je 0x111a369c */
  if (C.zf) goto L_111a369c;
  /* 111a365e mov esi, esp */
  ESI = (ESP);
  /* 111a3660 push 5 */
  push32((uint32_t)(0x5u));
  /* 111a3662 call dword ptr [0x111d44d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d4))), 0x111a3668u);
  /* 111a3668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a366b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a366d call 0x111a40a0 */
  push32(0x111a3672u); f_111a40a0();
  /* 111a3672 mov esi, esp */
  ESI = (ESP);
  /* 111a3674 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a3676 call dword ptr [0x111d44d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44d4))), 0x111a367cu);
  /* 111a367c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a367f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3681 call 0x111a40a0 */
  push32(0x111a3686u); f_111a40a0();
  /* 111a3686 mov esi, esp */
  ESI = (ESP);
  /* 111a3688 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a368a push 9 */
  push32((uint32_t)(0x9u));
  /* 111a368c call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a3692u);
  /* 111a3692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3695 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3697 call 0x111a40a0 */
  push32(0x111a369cu); f_111a40a0();
L_111a369c:;
  /* 111a369c mov esi, esp */
  ESI = (ESP);
  /* 111a369e push 0xd */
  push32((uint32_t)(0xdu));
  /* 111a36a0 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a36a6u);
  /* 111a36a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a36a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a36ab call 0x111a40a0 */
  push32(0x111a36b0u); f_111a40a0();
  /* 111a36b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a36b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a36b7 je 0x111a3703 */
  if (C.zf) goto L_111a3703;
  /* 111a36b9 mov esi, esp */
  ESI = (ESP);
  /* 111a36bb push 3 */
  push32((uint32_t)(0x3u));
  /* 111a36bd call dword ptr [0x111d44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44cc))), 0x111a36c3u);
  /* 111a36c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a36c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a36c8 call 0x111a40a0 */
  push32(0x111a36cdu); f_111a40a0();
  /* 111a36cd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a36d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a36d4 je 0x111a3703 */
  if (C.zf) goto L_111a3703;
  /* 111a36d6 mov esi, esp */
  ESI = (ESP);
  /* 111a36d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a36da push 0xd */
  push32((uint32_t)(0xdu));
  /* 111a36dc call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a36e2u);
  /* 111a36e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a36e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a36e7 call 0x111a40a0 */
  push32(0x111a36ecu); f_111a40a0();
  /* 111a36ec mov esi, esp */
  ESI = (ESP);
  /* 111a36ee push 0x111cc2bc */
  push32((uint32_t)(0x111cc2bcu));
  /* 111a36f3 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a36f9u);
  /* 111a36f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a36fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a36fe call 0x111a40a0 */
  push32(0x111a3703u); f_111a40a0();
L_111a3703:;
  /* 111a3703 mov esi, esp */
  ESI = (ESP);
  /* 111a3705 push 0xe */
  push32((uint32_t)(0xeu));
  /* 111a3707 call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a370du);
  /* 111a370d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3710 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3712 call 0x111a40a0 */
  push32(0x111a3717u); f_111a40a0();
  /* 111a3717 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a371c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a371e je 0x111a376a */
  if (C.zf) goto L_111a376a;
  /* 111a3720 mov esi, esp */
  ESI = (ESP);
  /* 111a3722 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a3724 call dword ptr [0x111d44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d44cc))), 0x111a372au);
  /* 111a372a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a372d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a372f call 0x111a40a0 */
  push32(0x111a3734u); f_111a40a0();
  /* 111a3734 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a3739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a373b je 0x111a376a */
  if (C.zf) goto L_111a376a;
  /* 111a373d mov esi, esp */
  ESI = (ESP);
  /* 111a373f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a3741 push 0xe */
  push32((uint32_t)(0xeu));
  /* 111a3743 call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a3749u);
  /* 111a3749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a374c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a374e call 0x111a40a0 */
  push32(0x111a3753u); f_111a40a0();
  /* 111a3753 mov esi, esp */
  ESI = (ESP);
  /* 111a3755 push 0x111cc2b0 */
  push32((uint32_t)(0x111cc2b0u));
  /* 111a375a call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a3760u);
  /* 111a3760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3763 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3765 call 0x111a40a0 */
  push32(0x111a376au); f_111a40a0();
L_111a376a:;
  /* 111a376a mov esi, esp */
  ESI = (ESP);
  /* 111a376c push 0xd */
  push32((uint32_t)(0xdu));
  /* 111a376e call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a3774u);
  /* 111a3774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3777 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3779 call 0x111a40a0 */
  push32(0x111a377eu); f_111a40a0();
  /* 111a377e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a3783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a3785 jne 0x111a381a */
  if (!C.zf) goto L_111a381a;
  /* 111a378b mov esi, esp */
  ESI = (ESP);
  /* 111a378d push 0xe */
  push32((uint32_t)(0xeu));
  /* 111a378f call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a3795u);
  /* 111a3795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3798 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a379a call 0x111a40a0 */
  push32(0x111a379fu); f_111a40a0();
  /* 111a379f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a37a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a37a6 jne 0x111a381a */
  if (!C.zf) goto L_111a381a;
  /* 111a37a8 mov esi, esp */
  ESI = (ESP);
  /* 111a37aa push 0xf */
  push32((uint32_t)(0xfu));
  /* 111a37ac call dword ptr [0x111d444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d444c))), 0x111a37b2u);
  /* 111a37b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a37b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a37b7 call 0x111a40a0 */
  push32(0x111a37bcu); f_111a40a0();
  /* 111a37bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a37c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a37c3 je 0x111a381a */
  if (C.zf) goto L_111a381a;
  /* 111a37c5 mov esi, esp */
  ESI = (ESP);
  /* 111a37c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a37c9 push 0xf */
  push32((uint32_t)(0xfu));
  /* 111a37cb call dword ptr [0x111d4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4450))), 0x111a37d1u);
  /* 111a37d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a37d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a37d6 call 0x111a40a0 */
  push32(0x111a37dbu); f_111a40a0();
  /* 111a37db mov esi, esp */
  ESI = (ESP);
  /* 111a37dd push 0x111cc2a8 */
  push32((uint32_t)(0x111cc2a8u));
  /* 111a37e2 call dword ptr [0x111d4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4484))), 0x111a37e8u);
  /* 111a37e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a37eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a37ed call 0x111a40a0 */
  push32(0x111a37f2u); f_111a40a0();
  /* 111a37f2 mov esi, esp */
  ESI = (ESP);
  /* 111a37f4 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 111a37f6 call dword ptr [0x111d4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4458))), 0x111a37fcu);
  /* 111a37fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a37ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3801 call 0x111a40a0 */
  push32(0x111a3806u); f_111a40a0();
  /* 111a3806 mov esi, esp */
  ESI = (ESP);
  /* 111a3808 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 111a380a call dword ptr [0x111d4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4448))), 0x111a3810u);
  /* 111a3810 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3813 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3815 call 0x111a40a0 */
  push32(0x111a381au); f_111a40a0();
L_111a381a:;
  /* 111a381a pop edi */
  EDI = (pop32());
  /* 111a381b pop esi */
  ESI = (pop32());
  /* 111a381c pop ebx */
  EBX = (pop32());
  /* 111a381d add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a3820 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a3822 call 0x111a40a0 */
  push32(0x111a3827u); f_111a40a0();
  /* 111a3827 mov esp, ebp */
  ESP = (EBP);
  /* 111a3829 pop ebp */
  EBP = (pop32());
  /* 111a382a ret  */
  ESPCHK(0x111a1bb0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x111a40a0 (56 bytes, 28 insns) */
void f_111a40a0(void) {
  FTRACE(0x111a40a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a40a0 jne 0x111a40a3 */
  if (!C.zf) goto L_111a40a3;
  /* 111a40a2 ret  */
  ESPCHK(0x111a40a0u, _esp0);
  ESP += 4; return;
L_111a40a3:;
  /* 111a40a3 push ebp */
  push32((uint32_t)(EBP));
  /* 111a40a4 mov ebp, esp */
  EBP = (ESP);
  /* 111a40a6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a40a9 push eax */
  push32((uint32_t)(EAX));
  /* 111a40aa push edx */
  push32((uint32_t)(EDX));
  /* 111a40ab push ebx */
  push32((uint32_t)(EBX));
  /* 111a40ac push esi */
  push32((uint32_t)(ESI));
  /* 111a40ad push edi */
  push32((uint32_t)(EDI));
  /* 111a40ae push 0x111cc390 */
  push32((uint32_t)(0x111cc390u));
  /* 111a40b3 push 0x111cc38c */
  push32((uint32_t)(0x111cc38cu));
  /* 111a40b8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 111a40ba push 0x111cc37c */
  push32((uint32_t)(0x111cc37cu));
  /* 111a40bf push 1 */
  push32((uint32_t)(0x1u));
  /* 111a40c1 call 0x111a4470 */
  push32(0x111a40c6u); f_111a4470();
  /* 111a40c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a40c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a40cc jne 0x111a40cf */
  if (!C.zf) goto L_111a40cf;
  /* 111a40ce int3  */
  x86_unimpl("int3 @ 0x111a40ce");
L_111a40cf:;
  /* 111a40cf pop edi */
  EDI = (pop32());
  /* 111a40d0 pop esi */
  ESI = (pop32());
  /* 111a40d1 pop ebx */
  EBX = (pop32());
  /* 111a40d2 pop edx */
  EDX = (pop32());
  /* 111a40d3 pop eax */
  EAX = (pop32());
  /* 111a40d4 mov esp, ebp */
  ESP = (EBP);
  /* 111a40d6 pop ebp */
  EBP = (pop32());
  /* 111a40d7 ret  */
  ESPCHK(0x111a40a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x111a40e0 (313 bytes, 78 insns) */
void f_111a40e0(void) {
  FTRACE(0x111a40e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a40e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a40e1 mov ebp, esp */
  EBP = (ESP);
  /* 111a40e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a40e7 jne 0x111a41a7 */
  if (!C.zf) goto L_111a41a7;
  /* 111a40ed call dword ptr [0x111d437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d437c))), 0x111a40f3u);
  /* 111a40f3 mov dword ptr [0x111d1660], eax */
  w32((uint32_t)(0x111d1660), (EAX));
  /* 111a40f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a40fa call 0x111a7ba0 */
  push32(0x111a40ffu); f_111a7ba0();
  /* 111a40ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a4104 jne 0x111a410d */
  if (!C.zf) goto L_111a410d;
  /* 111a4106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a4108 jmp 0x111a4215 */
  goto L_111a4215;
L_111a410d:;
  /* 111a410d mov eax, dword ptr [0x111d1660] */
  EAX = (r32((uint32_t)(0x111d1660)));
  /* 111a4112 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111a4115 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a411a mov dword ptr [0x111d166c], eax */
  w32((uint32_t)(0x111d166c), (EAX));
  /* 111a411f mov ecx, dword ptr [0x111d1660] */
  ECX = (r32((uint32_t)(0x111d1660)));
  /* 111a4125 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a412b mov dword ptr [0x111d1668], ecx */
  w32((uint32_t)(0x111d1668), (ECX));
  /* 111a4131 mov edx, dword ptr [0x111d1668] */
  EDX = (r32((uint32_t)(0x111d1668)));
  /* 111a4137 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 111a413a add edx, dword ptr [0x111d166c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111d166c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4140 mov dword ptr [0x111d1664], edx */
  w32((uint32_t)(0x111d1664), (EDX));
  /* 111a4146 mov eax, dword ptr [0x111d1660] */
  EAX = (r32((uint32_t)(0x111d1660)));
  /* 111a414b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111a414e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a4153 mov dword ptr [0x111d1660], eax */
  w32((uint32_t)(0x111d1660), (EAX));
  /* 111a4158 call 0x111a4d10 */
  push32(0x111a415du); f_111a4d10();
  /* 111a415d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a415f jne 0x111a416d */
  if (!C.zf) goto L_111a416d;
  /* 111a4161 call 0x111a7bf0 */
  push32(0x111a4166u); f_111a7bf0();
  /* 111a4166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a4168 jmp 0x111a4215 */
  goto L_111a4215;
L_111a416d:;
  /* 111a416d call dword ptr [0x111d4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4378))), 0x111a4173u);
  /* 111a4173 mov dword ptr [0x111d31ac], eax */
  w32((uint32_t)(0x111d31ac), (EAX));
  /* 111a4178 call 0x111a7980 */
  push32(0x111a417du); f_111a7980();
  /* 111a417d mov dword ptr [0x111d1648], eax */
  w32((uint32_t)(0x111d1648), (EAX));
  /* 111a4182 call 0x111a4fc0 */
  push32(0x111a4187u); f_111a4fc0();
  /* 111a4187 call 0x111a7470 */
  push32(0x111a418cu); f_111a7470();
  /* 111a418c call 0x111a7320 */
  push32(0x111a4191u); f_111a7320();
  /* 111a4191 call 0x111a4b10 */
  push32(0x111a4196u); f_111a4b10();
  /* 111a4196 mov ecx, dword ptr [0x111d1644] */
  ECX = (r32((uint32_t)(0x111d1644)));
  /* 111a419c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a419f mov dword ptr [0x111d1644], ecx */
  w32((uint32_t)(0x111d1644), (ECX));
  /* 111a41a5 jmp 0x111a4210 */
  goto L_111a4210;
L_111a41a7:;
  /* 111a41a7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a41ab jne 0x111a4200 */
  if (!C.zf) goto L_111a4200;
  /* 111a41ad cmp dword ptr [0x111d1644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a41b4 jle 0x111a41fa */
  if ((C.zf||C.sf!=C.of)) goto L_111a41fa;
  /* 111a41b6 mov edx, dword ptr [0x111d1644] */
  EDX = (r32((uint32_t)(0x111d1644)));
  /* 111a41bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a41bf mov dword ptr [0x111d1644], edx */
  w32((uint32_t)(0x111d1644), (EDX));
  /* 111a41c5 cmp dword ptr [0x111d1698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a41cc jne 0x111a41d3 */
  if (!C.zf) goto L_111a41d3;
  /* 111a41ce call 0x111a4b90 */
  push32(0x111a41d3u); f_111a4b90();
L_111a41d3:;
  /* 111a41d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111a41d5 call 0x111a68c0 */
  push32(0x111a41dau); f_111a68c0();
  /* 111a41da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a41dd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 111a41e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a41e2 je 0x111a41e9 */
  if (C.zf) goto L_111a41e9;
  /* 111a41e4 call 0x111a71d0 */
  push32(0x111a41e9u); f_111a71d0();
L_111a41e9:;
  /* 111a41e9 call 0x111a52f0 */
  push32(0x111a41eeu); f_111a52f0();
  /* 111a41ee call 0x111a4da0 */
  push32(0x111a41f3u); f_111a4da0();
  /* 111a41f3 call 0x111a7bf0 */
  push32(0x111a41f8u); f_111a7bf0();
  /* 111a41f8 jmp 0x111a41fe */
  goto L_111a41fe;
L_111a41fa:;
  /* 111a41fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a41fc jmp 0x111a4215 */
  goto L_111a4215;
L_111a41fe:;
  /* 111a41fe jmp 0x111a4210 */
  goto L_111a4210;
L_111a4200:;
  /* 111a4200 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4204 jne 0x111a4210 */
  if (!C.zf) goto L_111a4210;
  /* 111a4206 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a4208 call 0x111a4e90 */
  push32(0x111a420du); f_111a4e90();
  /* 111a420d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4210:;
  /* 111a4210 mov eax, 1 */
  EAX = (0x1u);
L_111a4215:;
  /* 111a4215 pop ebp */
  EBP = (pop32());
  /* 111a4216 ret 0xc */
  ESPCHK(0x111a40e0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x111a4220 (243 bytes, 86 insns) */
void f_111a4220(void) {
  FTRACE(0x111a4220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4220 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4221 mov ebp, esp */
  EBP = (ESP);
  /* 111a4223 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4224 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111a422b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a422f jne 0x111a4241 */
  if (!C.zf) goto L_111a4241;
  /* 111a4231 cmp dword ptr [0x111d1644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4238 jne 0x111a4241 */
  if (!C.zf) goto L_111a4241;
  /* 111a423a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a423c jmp 0x111a430d */
  goto L_111a430d;
L_111a4241:;
  /* 111a4241 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4245 je 0x111a424d */
  if (C.zf) goto L_111a424d;
  /* 111a4247 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a424b jne 0x111a428f */
  if (!C.zf) goto L_111a428f;
L_111a424d:;
  /* 111a424d cmp dword ptr [0x111d31bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d31bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4254 je 0x111a426b */
  if (C.zf) goto L_111a426b;
  /* 111a4256 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a4259 push eax */
  push32((uint32_t)(EAX));
  /* 111a425a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a425d push ecx */
  push32((uint32_t)(ECX));
  /* 111a425e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4261 push edx */
  push32((uint32_t)(EDX));
  /* 111a4262 call dword ptr [0x111d31bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d31bc))), 0x111a4268u);
  /* 111a4268 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a426b:;
  /* 111a426b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a426f je 0x111a4285 */
  if (C.zf) goto L_111a4285;
  /* 111a4271 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a4274 push eax */
  push32((uint32_t)(EAX));
  /* 111a4275 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a4278 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a427c push edx */
  push32((uint32_t)(EDX));
  /* 111a427d call 0x111a40e0 */
  push32(0x111a4282u); f_111a40e0();
  /* 111a4282 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a4285:;
  /* 111a4285 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4289 jne 0x111a428f */
  if (!C.zf) goto L_111a428f;
  /* 111a428b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a428d jmp 0x111a430d */
  goto L_111a430d;
L_111a428f:;
  /* 111a428f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a4292 push eax */
  push32((uint32_t)(EAX));
  /* 111a4293 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a4296 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a429a push edx */
  push32((uint32_t)(EDX));
  /* 111a429b call 0x111a100a */
  push32(0x111a42a0u); f_111a100a();
  /* 111a42a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a42a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a42a7 jne 0x111a42be */
  if (!C.zf) goto L_111a42be;
  /* 111a42a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a42ad jne 0x111a42be */
  if (!C.zf) goto L_111a42be;
  /* 111a42af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a42b2 push eax */
  push32((uint32_t)(EAX));
  /* 111a42b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a42b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a42b8 push ecx */
  push32((uint32_t)(ECX));
  /* 111a42b9 call 0x111a40e0 */
  push32(0x111a42beu); f_111a40e0();
L_111a42be:;
  /* 111a42be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a42c2 je 0x111a42ca */
  if (C.zf) goto L_111a42ca;
  /* 111a42c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a42c8 jne 0x111a430a */
  if (!C.zf) goto L_111a430a;
L_111a42ca:;
  /* 111a42ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a42cd push edx */
  push32((uint32_t)(EDX));
  /* 111a42ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a42d1 push eax */
  push32((uint32_t)(EAX));
  /* 111a42d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a42d5 push ecx */
  push32((uint32_t)(ECX));
  /* 111a42d6 call 0x111a40e0 */
  push32(0x111a42dbu); f_111a40e0();
  /* 111a42db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a42dd jne 0x111a42e6 */
  if (!C.zf) goto L_111a42e6;
  /* 111a42df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111a42e6:;
  /* 111a42e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a42ea je 0x111a430a */
  if (C.zf) goto L_111a430a;
  /* 111a42ec cmp dword ptr [0x111d31bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d31bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a42f3 je 0x111a430a */
  if (C.zf) goto L_111a430a;
  /* 111a42f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a42f8 push edx */
  push32((uint32_t)(EDX));
  /* 111a42f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a42fc push eax */
  push32((uint32_t)(EAX));
  /* 111a42fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4300 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4301 call dword ptr [0x111d31bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d31bc))), 0x111a4307u);
  /* 111a4307 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a430a:;
  /* 111a430a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111a430d:;
  /* 111a430d mov esp, ebp */
  ESP = (EBP);
  /* 111a430f pop ebp */
  EBP = (pop32());
  /* 111a4310 ret 0xc */
  ESPCHK(0x111a4220u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x111a4320 (58 bytes, 18 insns) */
void f_111a4320(void) {
  FTRACE(0x111a4320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4320 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4321 mov ebp, esp */
  EBP = (ESP);
  /* 111a4323 cmp dword ptr [0x111d1650], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1650))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a432a je 0x111a433e */
  if (C.zf) goto L_111a433e;
  /* 111a432c cmp dword ptr [0x111d1650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4333 jne 0x111a4343 */
  if (!C.zf) goto L_111a4343;
  /* 111a4335 cmp dword ptr [0x111d1654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a433c jne 0x111a4343 */
  if (!C.zf) goto L_111a4343;
L_111a433e:;
  /* 111a433e call 0x111a7c90 */
  push32(0x111a4343u); f_111a7c90();
L_111a4343:;
  /* 111a4343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4346 push eax */
  push32((uint32_t)(EAX));
  /* 111a4347 call 0x111a7ce0 */
  push32(0x111a434cu); f_111a7ce0();
  /* 111a434c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a434f push 0xff */
  push32((uint32_t)(0xffu));
  /* 111a4354 call dword ptr [0x111cfa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x111cfa30))), 0x111a435au);
  /* 111a435a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a435d pop ebp */
  EBP = (pop32());
  /* 111a435e ret  */
  ESPCHK(0x111a4320u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x111a4360 (11 bytes, 5 insns) */
void f_111a4360(void) {
  FTRACE(0x111a4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4360 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4361 mov ebp, esp */
  EBP = (ESP);
  /* 111a4363 call dword ptr [0x111d4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4380))), 0x111a4369u);
  /* 111a4369 pop ebp */
  EBP = (pop32());
  /* 111a436a ret  */
  ESPCHK(0x111a4360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004370 @ 0x111a4370 (87 bytes, 30 insns) */
void f_111a4370(void) {
  FTRACE(0x111a4370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4370 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4371 mov ebp, esp */
  EBP = (ESP);
  /* 111a4373 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4374 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4378 jl 0x111a4380 */
  if ((C.sf!=C.of)) goto L_111a4380;
  /* 111a437a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a437e jl 0x111a4385 */
  if ((C.sf!=C.of)) goto L_111a4385;
L_111a4380:;
  /* 111a4380 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a4383 jmp 0x111a43c3 */
  goto L_111a43c3;
L_111a4385:;
  /* 111a4385 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4389 jne 0x111a4397 */
  if (!C.zf) goto L_111a4397;
  /* 111a438b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a438e mov eax, dword ptr [eax*4 + 0x111cfa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x111cfa38)));
  /* 111a4395 jmp 0x111a43c3 */
  goto L_111a43c3;
L_111a4397:;
  /* 111a4397 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a439a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 111a439d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a439f je 0x111a43a6 */
  if (C.zf) goto L_111a43a6;
  /* 111a43a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a43a4 jmp 0x111a43c3 */
  goto L_111a43c3;
L_111a43a6:;
  /* 111a43a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a43a9 mov eax, dword ptr [edx*4 + 0x111cfa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111cfa38)));
  /* 111a43b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a43b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a43b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a43b9 mov dword ptr [ecx*4 + 0x111cfa38], edx */
  w32((uint32_t)(ECX*4 + 0x111cfa38), (EDX));
  /* 111a43c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111a43c3:;
  /* 111a43c3 mov esp, ebp */
  ESP = (EBP);
  /* 111a43c5 pop ebp */
  EBP = (pop32());
  /* 111a43c6 ret  */
  ESPCHK(0x111a4370u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x111a43d0 (126 bytes, 38 insns) */
void f_111a43d0(void) {
  FTRACE(0x111a43d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a43d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a43d1 mov ebp, esp */
  EBP = (ESP);
  /* 111a43d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a43d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a43d8 jl 0x111a43e0 */
  if ((C.sf!=C.of)) goto L_111a43e0;
  /* 111a43da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a43de jl 0x111a43e7 */
  if ((C.sf!=C.of)) goto L_111a43e7;
L_111a43e0:;
  /* 111a43e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 111a43e5 jmp 0x111a444a */
  goto L_111a444a;
L_111a43e7:;
  /* 111a43e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a43eb jne 0x111a43f9 */
  if (!C.zf) goto L_111a43f9;
  /* 111a43ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a43f0 mov eax, dword ptr [eax*4 + 0x111cfa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x111cfa44)));
  /* 111a43f7 jmp 0x111a444a */
  goto L_111a444a;
L_111a43f9:;
  /* 111a43f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a43fc mov edx, dword ptr [ecx*4 + 0x111cfa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfa44)));
  /* 111a4403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a4406 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a440a jne 0x111a4420 */
  if (!C.zf) goto L_111a4420;
  /* 111a440c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 111a440e call dword ptr [0x111d4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4384))), 0x111a4414u);
  /* 111a4414 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4417 mov dword ptr [ecx*4 + 0x111cfa44], eax */
  w32((uint32_t)(ECX*4 + 0x111cfa44), (EAX));
  /* 111a441e jmp 0x111a4447 */
  goto L_111a4447;
L_111a4420:;
  /* 111a4420 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4424 jne 0x111a443a */
  if (!C.zf) goto L_111a443a;
  /* 111a4426 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111a4428 call dword ptr [0x111d4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4384))), 0x111a442eu);
  /* 111a442e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4431 mov dword ptr [edx*4 + 0x111cfa44], eax */
  w32((uint32_t)(EDX*4 + 0x111cfa44), (EAX));
  /* 111a4438 jmp 0x111a4447 */
  goto L_111a4447;
L_111a443a:;
  /* 111a443a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a443d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a4440 mov dword ptr [eax*4 + 0x111cfa44], ecx */
  w32((uint32_t)(EAX*4 + 0x111cfa44), (ECX));
L_111a4447:;
  /* 111a4447 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111a444a:;
  /* 111a444a mov esp, ebp */
  ESP = (EBP);
  /* 111a444c pop ebp */
  EBP = (pop32());
  /* 111a444d ret  */
  ESPCHK(0x111a43d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004450 @ 0x111a4450 (28 bytes, 11 insns) */
void f_111a4450(void) {
  FTRACE(0x111a4450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4450 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4451 mov ebp, esp */
  EBP = (ESP);
  /* 111a4453 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4454 mov eax, dword ptr [0x111d31a0] */
  EAX = (r32((uint32_t)(0x111d31a0)));
  /* 111a4459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a445c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a445f mov dword ptr [0x111d31a0], ecx */
  w32((uint32_t)(0x111d31a0), (ECX));
  /* 111a4465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4468 mov esp, ebp */
  ESP = (EBP);
  /* 111a446a pop ebp */
  EBP = (pop32());
  /* 111a446b ret  */
  ESPCHK(0x111a4450u, _esp0);
  ESP += 4; return;
}

/* FUN_10004470 @ 0x111a4470 (912 bytes, 248 insns) */
void f_111a4470(void) {
  FTRACE(0x111a4470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4470 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4471 mov ebp, esp */
  EBP = (ESP);
  /* 111a4473 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 111a4478 call 0x111a8550 */
  push32(0x111a447du); f_111a8550();
  /* 111a447d push edi */
  push32((uint32_t)(EDI));
  /* 111a447e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 111a4485 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 111a448a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a448c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 111a4492 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111a4494 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 111a4496 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 111a4497 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 111a449e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 111a44a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a44a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 111a44ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111a44ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 111a44af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 111a44b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 111a44b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 111a44bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a44be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 111a44c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111a44c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 111a44c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 111a44c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 111a44cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 111a44d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a44d6 jl 0x111a44de */
  if ((C.sf!=C.of)) goto L_111a44de;
  /* 111a44d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a44dc jl 0x111a44e6 */
  if ((C.sf!=C.of)) goto L_111a44e6;
L_111a44de:;
  /* 111a44de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a44e1 jmp 0x111a47fb */
  goto L_111a47fb;
L_111a44e6:;
  /* 111a44e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a44ea jne 0x111a4590 */
  if (!C.zf) goto L_111a4590;
  /* 111a44f0 push 0x111cfa34 */
  push32((uint32_t)(0x111cfa34u));
  /* 111a44f5 call dword ptr [0x111d439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d439c))), 0x111a44fbu);
  /* 111a44fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a44fd jle 0x111a4590 */
  if ((C.zf||C.sf!=C.of)) goto L_111a4590;
  /* 111a4503 cmp dword ptr [0x111d1658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a450a jne 0x111a454e */
  if (!C.zf) goto L_111a454e;
  /* 111a450c push 0x111cc538 */
  push32((uint32_t)(0x111cc538u));
  /* 111a4511 call dword ptr [0x111d4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4398))), 0x111a4517u);
  /* 111a4517 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 111a451d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4524 je 0x111a4546 */
  if (C.zf) goto L_111a4546;
  /* 111a4526 push 0x111cc52c */
  push32((uint32_t)(0x111cc52cu));
  /* 111a452b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 111a4531 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4532 call dword ptr [0x111d4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4394))), 0x111a4538u);
  /* 111a4538 mov dword ptr [0x111d1658], eax */
  w32((uint32_t)(0x111d1658), (EAX));
  /* 111a453d cmp dword ptr [0x111d1658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4544 jne 0x111a454e */
  if (!C.zf) goto L_111a454e;
L_111a4546:;
  /* 111a4546 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a4549 jmp 0x111a47fb */
  goto L_111a47fb;
L_111a454e:;
  /* 111a454e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a4551 push edx */
  push32((uint32_t)(EDX));
  /* 111a4552 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a4555 push eax */
  push32((uint32_t)(EAX));
  /* 111a4556 push 0x111cc4f8 */
  push32((uint32_t)(0x111cc4f8u));
  /* 111a455b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 111a4561 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4562 call dword ptr [0x111d1658] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d1658))), 0x111a4568u);
  /* 111a4568 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a456b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 111a4571 push edx */
  push32((uint32_t)(EDX));
  /* 111a4572 call dword ptr [0x111d4390] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4390))), 0x111a4578u);
  /* 111a4578 push 0x111cfa34 */
  push32((uint32_t)(0x111cfa34u));
  /* 111a457d call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111a4583u);
  /* 111a4583 call 0x111a4360 */
  push32(0x111a4588u); f_111a4360();
  /* 111a4588 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a458b jmp 0x111a47fb */
  goto L_111a47fb;
L_111a4590:;
  /* 111a4590 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4594 je 0x111a45cd */
  if (C.zf) goto L_111a45cd;
  /* 111a4596 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 111a459c push eax */
  push32((uint32_t)(EAX));
  /* 111a459d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a45a0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a45a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 111a45a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 111a45ac push edx */
  push32((uint32_t)(EDX));
  /* 111a45ad call 0x111a8450 */
  push32(0x111a45b2u); f_111a8450();
  /* 111a45b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a45b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a45b7 jge 0x111a45cd */
  if ((C.sf==C.of)) goto L_111a45cd;
  /* 111a45b9 push 0x111cc4cc */
  push32((uint32_t)(0x111cc4ccu));
  /* 111a45be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 111a45c4 push eax */
  push32((uint32_t)(EAX));
  /* 111a45c5 call 0x111a8360 */
  push32(0x111a45cau); f_111a8360();
  /* 111a45ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a45cd:;
  /* 111a45cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a45d1 jne 0x111a4605 */
  if (!C.zf) goto L_111a4605;
  /* 111a45d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a45d7 je 0x111a45e5 */
  if (C.zf) goto L_111a45e5;
  /* 111a45d9 mov dword ptr [ebp - 0x3028], 0x111cc4b8 */
  w32((uint32_t)(EBP + -0x3028), (0x111cc4b8u));
  /* 111a45e3 jmp 0x111a45ef */
  goto L_111a45ef;
L_111a45e5:;
  /* 111a45e5 mov dword ptr [ebp - 0x3028], 0x111cc4a4 */
  w32((uint32_t)(EBP + -0x3028), (0x111cc4a4u));
L_111a45ef:;
  /* 111a45ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 111a45f5 push ecx */
  push32((uint32_t)(ECX));
  /* 111a45f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 111a45fc push edx */
  push32((uint32_t)(EDX));
  /* 111a45fd call 0x111a8360 */
  push32(0x111a4602u); f_111a8360();
  /* 111a4602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4605:;
  /* 111a4605 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 111a460b push eax */
  push32((uint32_t)(EAX));
  /* 111a460c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 111a4612 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4613 call 0x111a8370 */
  push32(0x111a4618u); f_111a8370();
  /* 111a4618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a461b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a461f jne 0x111a465a */
  if (!C.zf) goto L_111a465a;
  /* 111a4621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4624 mov eax, dword ptr [edx*4 + 0x111cfa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111cfa38)));
  /* 111a462b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 111a462e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a4630 je 0x111a4646 */
  if (C.zf) goto L_111a4646;
  /* 111a4632 push 0x111cc4a0 */
  push32((uint32_t)(0x111cc4a0u));
  /* 111a4637 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 111a463d push ecx */
  push32((uint32_t)(ECX));
  /* 111a463e call 0x111a8370 */
  push32(0x111a4643u); f_111a8370();
  /* 111a4643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4646:;
  /* 111a4646 push 0x111cc49c */
  push32((uint32_t)(0x111cc49cu));
  /* 111a464b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 111a4651 push edx */
  push32((uint32_t)(EDX));
  /* 111a4652 call 0x111a8370 */
  push32(0x111a4657u); f_111a8370();
  /* 111a4657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a465a:;
  /* 111a465a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a465e je 0x111a46a2 */
  if (C.zf) goto L_111a46a2;
  /* 111a4660 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 111a4666 push eax */
  push32((uint32_t)(EAX));
  /* 111a4667 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a466a push ecx */
  push32((uint32_t)(ECX));
  /* 111a466b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a466e push edx */
  push32((uint32_t)(EDX));
  /* 111a466f push 0x111cc490 */
  push32((uint32_t)(0x111cc490u));
  /* 111a4674 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111a4679 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 111a467f push eax */
  push32((uint32_t)(EAX));
  /* 111a4680 call 0x111a8260 */
  push32(0x111a4685u); f_111a8260();
  /* 111a4685 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a468a jge 0x111a46a0 */
  if ((C.sf==C.of)) goto L_111a46a0;
  /* 111a468c push 0x111cc4cc */
  push32((uint32_t)(0x111cc4ccu));
  /* 111a4691 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 111a4697 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4698 call 0x111a8360 */
  push32(0x111a469du); f_111a8360();
  /* 111a469d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a46a0:;
  /* 111a46a0 jmp 0x111a46b8 */
  goto L_111a46b8;
L_111a46a2:;
  /* 111a46a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 111a46a8 push edx */
  push32((uint32_t)(EDX));
  /* 111a46a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 111a46af push eax */
  push32((uint32_t)(EAX));
  /* 111a46b0 call 0x111a8360 */
  push32(0x111a46b5u); f_111a8360();
  /* 111a46b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a46b8:;
  /* 111a46b8 cmp dword ptr [0x111d31a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d31a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a46bf je 0x111a46fc */
  if (C.zf) goto L_111a46fc;
  /* 111a46c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 111a46c7 push ecx */
  push32((uint32_t)(ECX));
  /* 111a46c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 111a46ce push edx */
  push32((uint32_t)(EDX));
  /* 111a46cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a46d2 push eax */
  push32((uint32_t)(EAX));
  /* 111a46d3 call dword ptr [0x111d31a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d31a0))), 0x111a46d9u);
  /* 111a46d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a46dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a46de je 0x111a46fc */
  if (C.zf) goto L_111a46fc;
  /* 111a46e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a46e4 jne 0x111a46f1 */
  if (!C.zf) goto L_111a46f1;
  /* 111a46e6 push 0x111cfa34 */
  push32((uint32_t)(0x111cfa34u));
  /* 111a46eb call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111a46f1u);
L_111a46f1:;
  /* 111a46f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 111a46f7 jmp 0x111a47fb */
  goto L_111a47fb;
L_111a46fc:;
  /* 111a46fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a46ff mov edx, dword ptr [ecx*4 + 0x111cfa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfa38)));
  /* 111a4706 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111a4709 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a470b je 0x111a474b */
  if (C.zf) goto L_111a474b;
  /* 111a470d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4710 cmp dword ptr [eax*4 + 0x111cfa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x111cfa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4718 je 0x111a474b */
  if (C.zf) goto L_111a474b;
  /* 111a471a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a471c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 111a4722 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4723 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 111a4729 push edx */
  push32((uint32_t)(EDX));
  /* 111a472a call 0x111a81e0 */
  push32(0x111a472fu); f_111a81e0();
  /* 111a472f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4732 push eax */
  push32((uint32_t)(EAX));
  /* 111a4733 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 111a4739 push eax */
  push32((uint32_t)(EAX));
  /* 111a473a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a473d mov edx, dword ptr [ecx*4 + 0x111cfa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfa44)));
  /* 111a4744 push edx */
  push32((uint32_t)(EDX));
  /* 111a4745 call dword ptr [0x111d4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4388))), 0x111a474bu);
L_111a474b:;
  /* 111a474b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a474e mov ecx, dword ptr [eax*4 + 0x111cfa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111cfa38)));
  /* 111a4755 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 111a4758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a475a je 0x111a4769 */
  if (C.zf) goto L_111a4769;
  /* 111a475c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 111a4762 push edx */
  push32((uint32_t)(EDX));
  /* 111a4763 call dword ptr [0x111d4390] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4390))), 0x111a4769u);
L_111a4769:;
  /* 111a4769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a476c mov ecx, dword ptr [eax*4 + 0x111cfa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111cfa38)));
  /* 111a4773 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 111a4776 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a4778 je 0x111a47e8 */
  if (C.zf) goto L_111a47e8;
  /* 111a477a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a477e je 0x111a479d */
  if (C.zf) goto L_111a479d;
  /* 111a4780 push 0xa */
  push32((uint32_t)(0xau));
  /* 111a4782 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 111a4788 push edx */
  push32((uint32_t)(EDX));
  /* 111a4789 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a478c push eax */
  push32((uint32_t)(EAX));
  /* 111a478d call 0x111a7ef0 */
  push32(0x111a4792u); f_111a7ef0();
  /* 111a4792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4795 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 111a479b jmp 0x111a47a7 */
  goto L_111a47a7;
L_111a479d:;
  /* 111a479d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_111a47a7:;
  /* 111a47a7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 111a47ad push ecx */
  push32((uint32_t)(ECX));
  /* 111a47ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a47b1 push edx */
  push32((uint32_t)(EDX));
  /* 111a47b2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 111a47b8 push eax */
  push32((uint32_t)(EAX));
  /* 111a47b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a47bc push ecx */
  push32((uint32_t)(ECX));
  /* 111a47bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a47c0 push edx */
  push32((uint32_t)(EDX));
  /* 111a47c1 call 0x111a4800 */
  push32(0x111a47c6u); f_111a4800();
  /* 111a47c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a47c9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 111a47cf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a47d3 jne 0x111a47e0 */
  if (!C.zf) goto L_111a47e0;
  /* 111a47d5 push 0x111cfa34 */
  push32((uint32_t)(0x111cfa34u));
  /* 111a47da call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111a47e0u);
L_111a47e0:;
  /* 111a47e0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 111a47e6 jmp 0x111a47fb */
  goto L_111a47fb;
L_111a47e8:;
  /* 111a47e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a47ec jne 0x111a47f9 */
  if (!C.zf) goto L_111a47f9;
  /* 111a47ee push 0x111cfa34 */
  push32((uint32_t)(0x111cfa34u));
  /* 111a47f3 call dword ptr [0x111d438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d438c))), 0x111a47f9u);
L_111a47f9:;
  /* 111a47f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a47fb:;
  /* 111a47fb pop edi */
  EDI = (pop32());
  /* 111a47fc mov esp, ebp */
  ESP = (EBP);
  /* 111a47fe pop ebp */
  EBP = (pop32());
  /* 111a47ff ret  */
  ESPCHK(0x111a4470u, _esp0);
  ESP += 4; return;
}

/* FUN_10004800 @ 0x111a4800 (780 bytes, 197 insns) */
void f_111a4800(void) {
  FTRACE(0x111a4800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4800 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4801 mov ebp, esp */
  EBP = (ESP);
  /* 111a4803 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 111a4808 call 0x111a8550 */
  push32(0x111a480du); f_111a8550();
L_111a480d:;
  /* 111a480d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4811 jne 0x111a4838 */
  if (!C.zf) goto L_111a4838;
  /* 111a4813 push 0x111cc688 */
  push32((uint32_t)(0x111cc688u));
  /* 111a4818 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a481a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 111a481f push 0x111cc67c */
  push32((uint32_t)(0x111cc67cu));
  /* 111a4824 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4826 call 0x111a4470 */
  push32(0x111a482bu); f_111a4470();
  /* 111a482b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a482e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4831 jne 0x111a4838 */
  if (!C.zf) goto L_111a4838;
  /* 111a4833 call 0x111a4360 */
  push32(0x111a4838u); f_111a4360();
L_111a4838:;
  /* 111a4838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a483a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a483c jne 0x111a480d */
  if (!C.zf) goto L_111a480d;
  /* 111a483e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 111a4843 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 111a4849 push ecx */
  push32((uint32_t)(ECX));
  /* 111a484a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a484c call dword ptr [0x111d43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43a0))), 0x111a4852u);
  /* 111a4852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a4854 jne 0x111a486a */
  if (!C.zf) goto L_111a486a;
  /* 111a4856 push 0x111cc664 */
  push32((uint32_t)(0x111cc664u));
  /* 111a485b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 111a4861 push edx */
  push32((uint32_t)(EDX));
  /* 111a4862 call 0x111a8360 */
  push32(0x111a4867u); f_111a8360();
  /* 111a4867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a486a:;
  /* 111a486a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 111a4870 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a4873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4876 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4877 call 0x111a81e0 */
  push32(0x111a487cu); f_111a81e0();
  /* 111a487c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a487f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4882 jbe 0x111a48ad */
  if ((C.cf||C.zf)) goto L_111a48ad;
  /* 111a4884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4887 push edx */
  push32((uint32_t)(EDX));
  /* 111a4888 call 0x111a81e0 */
  push32(0x111a488du); f_111a81e0();
  /* 111a488d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4890 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4893 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 111a4897 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a489a push 3 */
  push32((uint32_t)(0x3u));
  /* 111a489c push 0x111cc660 */
  push32((uint32_t)(0x111cc660u));
  /* 111a48a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a48a4 push eax */
  push32((uint32_t)(EAX));
  /* 111a48a5 call 0x111a8bd0 */
  push32(0x111a48aau); f_111a8bd0();
  /* 111a48aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a48ad:;
  /* 111a48ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a48b0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 111a48b6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a48bd je 0x111a4908 */
  if (C.zf) goto L_111a4908;
  /* 111a48bf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 111a48c5 push edx */
  push32((uint32_t)(EDX));
  /* 111a48c6 call 0x111a81e0 */
  push32(0x111a48cbu); f_111a81e0();
  /* 111a48cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a48ce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a48d1 jbe 0x111a4908 */
  if ((C.cf||C.zf)) goto L_111a4908;
  /* 111a48d3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 111a48d9 push eax */
  push32((uint32_t)(EAX));
  /* 111a48da call 0x111a81e0 */
  push32(0x111a48dfu); f_111a81e0();
  /* 111a48df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a48e2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 111a48e8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 111a48ec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 111a48f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a48f4 push 0x111cc660 */
  push32((uint32_t)(0x111cc660u));
  /* 111a48f9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 111a48ff push eax */
  push32((uint32_t)(EAX));
  /* 111a4900 call 0x111a8bd0 */
  push32(0x111a4905u); f_111a8bd0();
  /* 111a4905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4908:;
  /* 111a4908 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a490c jne 0x111a491a */
  if (!C.zf) goto L_111a491a;
  /* 111a490e mov dword ptr [ebp - 0x1114], 0x111cc5ec */
  w32((uint32_t)(EBP + -0x1114), (0x111cc5ecu));
  /* 111a4918 jmp 0x111a4924 */
  goto L_111a4924;
L_111a491a:;
  /* 111a491a mov dword ptr [ebp - 0x1114], 0x111cc38c */
  w32((uint32_t)(EBP + -0x1114), (0x111cc38cu));
L_111a4924:;
  /* 111a4924 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a4927 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111a492a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a492c je 0x111a4939 */
  if (C.zf) goto L_111a4939;
  /* 111a492e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a4931 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 111a4937 jmp 0x111a4943 */
  goto L_111a4943;
L_111a4939:;
  /* 111a4939 mov dword ptr [ebp - 0x1118], 0x111cc38c */
  w32((uint32_t)(EBP + -0x1118), (0x111cc38cu));
L_111a4943:;
  /* 111a4943 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a4946 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111a4949 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a494b je 0x111a495f */
  if (C.zf) goto L_111a495f;
  /* 111a494d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4951 jne 0x111a495f */
  if (!C.zf) goto L_111a495f;
  /* 111a4953 mov dword ptr [ebp - 0x111c], 0x111cc5dc */
  w32((uint32_t)(EBP + -0x111c), (0x111cc5dcu));
  /* 111a495d jmp 0x111a4969 */
  goto L_111a4969;
L_111a495f:;
  /* 111a495f mov dword ptr [ebp - 0x111c], 0x111cc38c */
  w32((uint32_t)(EBP + -0x111c), (0x111cc38cu));
L_111a4969:;
  /* 111a4969 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a496c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a496f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a4971 je 0x111a497f */
  if (C.zf) goto L_111a497f;
  /* 111a4973 mov dword ptr [ebp - 0x1120], 0x111cc5d8 */
  w32((uint32_t)(EBP + -0x1120), (0x111cc5d8u));
  /* 111a497d jmp 0x111a4989 */
  goto L_111a4989;
L_111a497f:;
  /* 111a497f mov dword ptr [ebp - 0x1120], 0x111cc38c */
  w32((uint32_t)(EBP + -0x1120), (0x111cc38cu));
L_111a4989:;
  /* 111a4989 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a498d je 0x111a499a */
  if (C.zf) goto L_111a499a;
  /* 111a498f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a4992 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 111a4998 jmp 0x111a49a4 */
  goto L_111a49a4;
L_111a499a:;
  /* 111a499a mov dword ptr [ebp - 0x1124], 0x111cc38c */
  w32((uint32_t)(EBP + -0x1124), (0x111cc38cu));
L_111a49a4:;
  /* 111a49a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a49a8 je 0x111a49b6 */
  if (C.zf) goto L_111a49b6;
  /* 111a49aa mov dword ptr [ebp - 0x1128], 0x111cc5d0 */
  w32((uint32_t)(EBP + -0x1128), (0x111cc5d0u));
  /* 111a49b4 jmp 0x111a49c0 */
  goto L_111a49c0;
L_111a49b6:;
  /* 111a49b6 mov dword ptr [ebp - 0x1128], 0x111cc38c */
  w32((uint32_t)(EBP + -0x1128), (0x111cc38cu));
L_111a49c0:;
  /* 111a49c0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a49c4 je 0x111a49d1 */
  if (C.zf) goto L_111a49d1;
  /* 111a49c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a49c9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 111a49cf jmp 0x111a49db */
  goto L_111a49db;
L_111a49d1:;
  /* 111a49d1 mov dword ptr [ebp - 0x112c], 0x111cc38c */
  w32((uint32_t)(EBP + -0x112c), (0x111cc38cu));
L_111a49db:;
  /* 111a49db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a49df je 0x111a49ed */
  if (C.zf) goto L_111a49ed;
  /* 111a49e1 mov dword ptr [ebp - 0x1130], 0x111cc5c8 */
  w32((uint32_t)(EBP + -0x1130), (0x111cc5c8u));
  /* 111a49eb jmp 0x111a49f7 */
  goto L_111a49f7;
L_111a49ed:;
  /* 111a49ed mov dword ptr [ebp - 0x1130], 0x111cc38c */
  w32((uint32_t)(EBP + -0x1130), (0x111cc38cu));
L_111a49f7:;
  /* 111a49f7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a49fe je 0x111a4a0e */
  if (C.zf) goto L_111a4a0e;
  /* 111a4a00 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 111a4a06 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 111a4a0c jmp 0x111a4a18 */
  goto L_111a4a18;
L_111a4a0e:;
  /* 111a4a0e mov dword ptr [ebp - 0x1134], 0x111cc38c */
  w32((uint32_t)(EBP + -0x1134), (0x111cc38cu));
L_111a4a18:;
  /* 111a4a18 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4a1f je 0x111a4a2d */
  if (C.zf) goto L_111a4a2d;
  /* 111a4a21 mov dword ptr [ebp - 0x1138], 0x111cc5bc */
  w32((uint32_t)(EBP + -0x1138), (0x111cc5bcu));
  /* 111a4a2b jmp 0x111a4a37 */
  goto L_111a4a37;
L_111a4a2d:;
  /* 111a4a2d mov dword ptr [ebp - 0x1138], 0x111cc38c */
  w32((uint32_t)(EBP + -0x1138), (0x111cc38cu));
L_111a4a37:;
  /* 111a4a37 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 111a4a3d push edx */
  push32((uint32_t)(EDX));
  /* 111a4a3e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 111a4a44 push eax */
  push32((uint32_t)(EAX));
  /* 111a4a45 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 111a4a4b push ecx */
  push32((uint32_t)(ECX));
  /* 111a4a4c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 111a4a52 push edx */
  push32((uint32_t)(EDX));
  /* 111a4a53 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 111a4a59 push eax */
  push32((uint32_t)(EAX));
  /* 111a4a5a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 111a4a60 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4a61 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 111a4a67 push edx */
  push32((uint32_t)(EDX));
  /* 111a4a68 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 111a4a6e push eax */
  push32((uint32_t)(EAX));
  /* 111a4a6f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 111a4a75 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4a76 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 111a4a7c push edx */
  push32((uint32_t)(EDX));
  /* 111a4a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4a80 push eax */
  push32((uint32_t)(EAX));
  /* 111a4a81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4a84 mov edx, dword ptr [ecx*4 + 0x111cfa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfa50)));
  /* 111a4a8b push edx */
  push32((uint32_t)(EDX));
  /* 111a4a8c push 0x111cc568 */
  push32((uint32_t)(0x111cc568u));
  /* 111a4a91 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111a4a96 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 111a4a9c push eax */
  push32((uint32_t)(EAX));
  /* 111a4a9d call 0x111a8260 */
  push32(0x111a4aa2u); f_111a8260();
  /* 111a4aa2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a4aa7 jge 0x111a4abd */
  if ((C.sf==C.of)) goto L_111a4abd;
  /* 111a4aa9 push 0x111cc4cc */
  push32((uint32_t)(0x111cc4ccu));
  /* 111a4aae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 111a4ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4ab5 call 0x111a8360 */
  push32(0x111a4abau); f_111a8360();
  /* 111a4aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4abd:;
  /* 111a4abd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 111a4ac2 push 0x111cc544 */
  push32((uint32_t)(0x111cc544u));
  /* 111a4ac7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 111a4acd push edx */
  push32((uint32_t)(EDX));
  /* 111a4ace call 0x111a8b10 */
  push32(0x111a4ad3u); f_111a8b10();
  /* 111a4ad3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4ad6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 111a4adc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4ae3 jne 0x111a4af6 */
  if (!C.zf) goto L_111a4af6;
  /* 111a4ae5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 111a4ae7 call 0x111a8850 */
  push32(0x111a4aecu); f_111a8850();
  /* 111a4aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4aef push 3 */
  push32((uint32_t)(0x3u));
  /* 111a4af1 call 0x111a4b70 */
  push32(0x111a4af6u); f_111a4b70();
L_111a4af6:;
  /* 111a4af6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4afd jne 0x111a4b06 */
  if (!C.zf) goto L_111a4b06;
  /* 111a4aff mov eax, 1 */
  EAX = (0x1u);
  /* 111a4b04 jmp 0x111a4b08 */
  goto L_111a4b08;
L_111a4b06:;
  /* 111a4b06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a4b08:;
  /* 111a4b08 mov esp, ebp */
  ESP = (EBP);
  /* 111a4b0a pop ebp */
  EBP = (pop32());
  /* 111a4b0b ret  */
  ESPCHK(0x111a4800u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b10 @ 0x111a4b10 (56 bytes, 15 insns) */
void f_111a4b10(void) {
  FTRACE(0x111a4b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4b10 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4b11 mov ebp, esp */
  EBP = (ESP);
  /* 111a4b13 cmp dword ptr [0x111d319c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d319c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4b1a je 0x111a4b22 */
  if (C.zf) goto L_111a4b22;
  /* 111a4b1c call dword ptr [0x111d319c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d319c))), 0x111a4b22u);
L_111a4b22:;
  /* 111a4b22 push 0x111cf418 */
  push32((uint32_t)(0x111cf418u));
  /* 111a4b27 push 0x111cf208 */
  push32((uint32_t)(0x111cf208u));
  /* 111a4b2c call 0x111a4ce0 */
  push32(0x111a4b31u); f_111a4ce0();
  /* 111a4b31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4b34 push 0x111cf104 */
  push32((uint32_t)(0x111cf104u));
  /* 111a4b39 push 0x111cf000 */
  push32((uint32_t)(0x111cf000u));
  /* 111a4b3e call 0x111a4ce0 */
  push32(0x111a4b43u); f_111a4ce0();
  /* 111a4b43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4b46 pop ebp */
  EBP = (pop32());
  /* 111a4b47 ret  */
  ESPCHK(0x111a4b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x111a4b50 (21 bytes, 10 insns) */
void f_111a4b50(void) {
  FTRACE(0x111a4b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4b50 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4b51 mov ebp, esp */
  EBP = (ESP);
  /* 111a4b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a4b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a4b57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4b5a push eax */
  push32((uint32_t)(EAX));
  /* 111a4b5b call 0x111a4bd0 */
  push32(0x111a4b60u); f_111a4bd0();
  /* 111a4b60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4b63 pop ebp */
  EBP = (pop32());
  /* 111a4b64 ret  */
  ESPCHK(0x111a4b50u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x111a4b70 (21 bytes, 10 insns) */
void f_111a4b70(void) {
  FTRACE(0x111a4b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4b70 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4b71 mov ebp, esp */
  EBP = (ESP);
  /* 111a4b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a4b75 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a4b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4b7a push eax */
  push32((uint32_t)(EAX));
  /* 111a4b7b call 0x111a4bd0 */
  push32(0x111a4b80u); f_111a4bd0();
  /* 111a4b80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4b83 pop ebp */
  EBP = (pop32());
  /* 111a4b84 ret  */
  ESPCHK(0x111a4b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b90 @ 0x111a4b90 (19 bytes, 9 insns) */
void f_111a4b90(void) {
  FTRACE(0x111a4b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4b90 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4b91 mov ebp, esp */
  EBP = (ESP);
  /* 111a4b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a4b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a4b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a4b99 call 0x111a4bd0 */
  push32(0x111a4b9eu); f_111a4bd0();
  /* 111a4b9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4ba1 pop ebp */
  EBP = (pop32());
  /* 111a4ba2 ret  */
  ESPCHK(0x111a4b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bb0 @ 0x111a4bb0 (19 bytes, 9 insns) */
void f_111a4bb0(void) {
  FTRACE(0x111a4bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4bb1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a4bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a4bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a4bb9 call 0x111a4bd0 */
  push32(0x111a4bbeu); f_111a4bd0();
  /* 111a4bbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4bc1 pop ebp */
  EBP = (pop32());
  /* 111a4bc2 ret  */
  ESPCHK(0x111a4bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bd0 @ 0x111a4bd0 (227 bytes, 61 insns) */
void f_111a4bd0(void) {
  FTRACE(0x111a4bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4bd1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4bd4 call 0x111a4cc0 */
  push32(0x111a4bd9u); f_111a4cc0();
  /* 111a4bd9 cmp dword ptr [0x111d169c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d169c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4be0 jne 0x111a4bf3 */
  if (!C.zf) goto L_111a4bf3;
  /* 111a4be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4be5 push eax */
  push32((uint32_t)(EAX));
  /* 111a4be6 call dword ptr [0x111d42c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42c4))), 0x111a4becu);
  /* 111a4bec push eax */
  push32((uint32_t)(EAX));
  /* 111a4bed call dword ptr [0x111d43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43a8))), 0x111a4bf3u);
L_111a4bf3:;
  /* 111a4bf3 mov dword ptr [0x111d1698], 1 */
  w32((uint32_t)(0x111d1698), (0x1u));
  /* 111a4bfd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 111a4c00 mov byte ptr [0x111d1694], cl */
  w8((uint32_t)(0x111d1694), (CL));
  /* 111a4c06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4c0a jne 0x111a4c53 */
  if (!C.zf) goto L_111a4c53;
  /* 111a4c0c cmp dword ptr [0x111d3198], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4c13 je 0x111a4c41 */
  if (C.zf) goto L_111a4c41;
  /* 111a4c15 mov edx, dword ptr [0x111d3194] */
  EDX = (r32((uint32_t)(0x111d3194)));
  /* 111a4c1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111a4c1e:;
  /* 111a4c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4c21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a4c24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a4c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4c2a cmp ecx, dword ptr [0x111d3198] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d3198))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4c30 jb 0x111a4c41 */
  if (C.cf) goto L_111a4c41;
  /* 111a4c32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4c35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4c38 je 0x111a4c3f */
  if (C.zf) goto L_111a4c3f;
  /* 111a4c3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4c3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x111a4c3fu);
L_111a4c3f:;
  /* 111a4c3f jmp 0x111a4c1e */
  goto L_111a4c1e;
L_111a4c41:;
  /* 111a4c41 push 0x111cf724 */
  push32((uint32_t)(0x111cf724u));
  /* 111a4c46 push 0x111cf51c */
  push32((uint32_t)(0x111cf51cu));
  /* 111a4c4b call 0x111a4ce0 */
  push32(0x111a4c50u); f_111a4ce0();
  /* 111a4c50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4c53:;
  /* 111a4c53 push 0x111cf92c */
  push32((uint32_t)(0x111cf92cu));
  /* 111a4c58 push 0x111cf828 */
  push32((uint32_t)(0x111cf828u));
  /* 111a4c5d call 0x111a4ce0 */
  push32(0x111a4c62u); f_111a4ce0();
  /* 111a4c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4c65 cmp dword ptr [0x111d16a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d16a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4c6c jne 0x111a4c8e */
  if (!C.zf) goto L_111a4c8e;
  /* 111a4c6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111a4c70 call 0x111a68c0 */
  push32(0x111a4c75u); f_111a68c0();
  /* 111a4c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4c78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 111a4c7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a4c7d je 0x111a4c8e */
  if (C.zf) goto L_111a4c8e;
  /* 111a4c7f mov dword ptr [0x111d16a0], 1 */
  w32((uint32_t)(0x111d16a0), (0x1u));
  /* 111a4c89 call 0x111a71d0 */
  push32(0x111a4c8eu); f_111a71d0();
L_111a4c8e:;
  /* 111a4c8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4c92 je 0x111a4c9b */
  if (C.zf) goto L_111a4c9b;
  /* 111a4c94 call 0x111a4cd0 */
  push32(0x111a4c99u); f_111a4cd0();
  /* 111a4c99 jmp 0x111a4caf */
  goto L_111a4caf;
L_111a4c9b:;
  /* 111a4c9b mov dword ptr [0x111d169c], 1 */
  w32((uint32_t)(0x111d169c), (0x1u));
  /* 111a4ca5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4ca9 call dword ptr [0x111d43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43a4))), 0x111a4cafu);
L_111a4caf:;
  /* 111a4caf mov esp, ebp */
  ESP = (EBP);
  /* 111a4cb1 pop ebp */
  EBP = (pop32());
  /* 111a4cb2 ret  */
  ESPCHK(0x111a4bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x111a4cc0 (15 bytes, 7 insns) */
void f_111a4cc0(void) {
  FTRACE(0x111a4cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4cc1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4cc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 111a4cc5 call 0x111a8db0 */
  push32(0x111a4ccau); f_111a8db0();
  /* 111a4cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4ccd pop ebp */
  EBP = (pop32());
  /* 111a4cce ret  */
  ESPCHK(0x111a4cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cd0 @ 0x111a4cd0 (15 bytes, 7 insns) */
void f_111a4cd0(void) {
  FTRACE(0x111a4cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4cd1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4cd3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 111a4cd5 call 0x111a8e50 */
  push32(0x111a4cdau); f_111a8e50();
  /* 111a4cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4cdd pop ebp */
  EBP = (pop32());
  /* 111a4cde ret  */
  ESPCHK(0x111a4cd0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x111a4ce0 (37 bytes, 16 insns) */
void f_111a4ce0(void) {
  FTRACE(0x111a4ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4ce1 mov ebp, esp */
  EBP = (ESP);
L_111a4ce3:;
  /* 111a4ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4ce6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4ce9 jae 0x111a4d03 */
  if (!C.cf) goto L_111a4d03;
  /* 111a4ceb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4cee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4cf1 je 0x111a4cf8 */
  if (C.zf) goto L_111a4cf8;
  /* 111a4cf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4cf6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x111a4cf8u);
L_111a4cf8:;
  /* 111a4cf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4cfb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4cfe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111a4d01 jmp 0x111a4ce3 */
  goto L_111a4ce3;
L_111a4d03:;
  /* 111a4d03 pop ebp */
  EBP = (pop32());
  /* 111a4d04 ret  */
  ESPCHK(0x111a4ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d10 @ 0x111a4d10 (130 bytes, 42 insns) */
void f_111a4d10(void) {
  FTRACE(0x111a4d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4d10 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4d11 mov ebp, esp */
  EBP = (ESP);
  /* 111a4d13 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4d14 call 0x111a8cd0 */
  push32(0x111a4d19u); f_111a8cd0();
  /* 111a4d19 call dword ptr [0x111d43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43b8))), 0x111a4d1fu);
  /* 111a4d1f mov dword ptr [0x111cfa5c], eax */
  w32((uint32_t)(0x111cfa5c), (EAX));
  /* 111a4d24 cmp dword ptr [0x111cfa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4d2b jne 0x111a4d31 */
  if (!C.zf) goto L_111a4d31;
  /* 111a4d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a4d2f jmp 0x111a4d8e */
  goto L_111a4d8e;
L_111a4d31:;
  /* 111a4d31 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 111a4d33 push 0x111cc6a0 */
  push32((uint32_t)(0x111cc6a0u));
  /* 111a4d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4d3a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 111a4d3c push 1 */
  push32((uint32_t)(0x1u));
  /* 111a4d3e call 0x111a57c0 */
  push32(0x111a4d43u); f_111a57c0();
  /* 111a4d43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4d46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a4d49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4d4d je 0x111a4d64 */
  if (C.zf) goto L_111a4d64;
  /* 111a4d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4d52 push eax */
  push32((uint32_t)(EAX));
  /* 111a4d53 mov ecx, dword ptr [0x111cfa5c] */
  ECX = (r32((uint32_t)(0x111cfa5c)));
  /* 111a4d59 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4d5a call dword ptr [0x111d43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43b4))), 0x111a4d60u);
  /* 111a4d60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a4d62 jne 0x111a4d68 */
  if (!C.zf) goto L_111a4d68;
L_111a4d64:;
  /* 111a4d64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a4d66 jmp 0x111a4d8e */
  goto L_111a4d8e;
L_111a4d68:;
  /* 111a4d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4d6b push edx */
  push32((uint32_t)(EDX));
  /* 111a4d6c call 0x111a4dd0 */
  push32(0x111a4d71u); f_111a4dd0();
  /* 111a4d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4d74 call dword ptr [0x111d42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42c8))), 0x111a4d7au);
  /* 111a4d7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4d7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111a4d7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4d82 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 111a4d89 mov eax, 1 */
  EAX = (0x1u);
L_111a4d8e:;
  /* 111a4d8e mov esp, ebp */
  ESP = (EBP);
  /* 111a4d90 pop ebp */
  EBP = (pop32());
  /* 111a4d91 ret  */
  ESPCHK(0x111a4d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da0 @ 0x111a4da0 (41 bytes, 11 insns) */
void f_111a4da0(void) {
  FTRACE(0x111a4da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4da0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4da1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4da3 call 0x111a8d10 */
  push32(0x111a4da8u); f_111a8d10();
  /* 111a4da8 cmp dword ptr [0x111cfa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4daf je 0x111a4dc7 */
  if (C.zf) goto L_111a4dc7;
  /* 111a4db1 mov eax, dword ptr [0x111cfa5c] */
  EAX = (r32((uint32_t)(0x111cfa5c)));
  /* 111a4db6 push eax */
  push32((uint32_t)(EAX));
  /* 111a4db7 call dword ptr [0x111d43bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43bc))), 0x111a4dbdu);
  /* 111a4dbd mov dword ptr [0x111cfa5c], 0xffffffff */
  w32((uint32_t)(0x111cfa5c), (0xffffffffu));
L_111a4dc7:;
  /* 111a4dc7 pop ebp */
  EBP = (pop32());
  /* 111a4dc8 ret  */
  ESPCHK(0x111a4da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dd0 @ 0x111a4dd0 (25 bytes, 8 insns) */
void f_111a4dd0(void) {
  FTRACE(0x111a4dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4dd1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4dd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4dd6 mov dword ptr [eax + 0x50], 0x111cfc00 */
  w32((uint32_t)(EAX + 0x50), (0x111cfc00u));
  /* 111a4ddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4de0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 111a4de7 pop ebp */
  EBP = (pop32());
  /* 111a4de8 ret  */
  ESPCHK(0x111a4dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004df0 @ 0x111a4df0 (152 bytes, 48 insns) */
void f_111a4df0(void) {
  FTRACE(0x111a4df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4df0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4df1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a4df6 call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111a4dfcu);
  /* 111a4dfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a4dff mov eax, dword ptr [0x111cfa5c] */
  EAX = (r32((uint32_t)(0x111cfa5c)));
  /* 111a4e04 push eax */
  push32((uint32_t)(EAX));
  /* 111a4e05 call dword ptr [0x111d43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43c4))), 0x111a4e0bu);
  /* 111a4e0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a4e0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4e12 jne 0x111a4e77 */
  if (!C.zf) goto L_111a4e77;
  /* 111a4e14 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 111a4e19 push 0x111cc6a0 */
  push32((uint32_t)(0x111cc6a0u));
  /* 111a4e1e push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4e20 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 111a4e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a4e24 call 0x111a57c0 */
  push32(0x111a4e29u); f_111a57c0();
  /* 111a4e29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4e2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a4e2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4e33 je 0x111a4e6d */
  if (C.zf) goto L_111a4e6d;
  /* 111a4e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4e38 push ecx */
  push32((uint32_t)(ECX));
  /* 111a4e39 mov edx, dword ptr [0x111cfa5c] */
  EDX = (r32((uint32_t)(0x111cfa5c)));
  /* 111a4e3f push edx */
  push32((uint32_t)(EDX));
  /* 111a4e40 call dword ptr [0x111d43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43b4))), 0x111a4e46u);
  /* 111a4e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a4e48 je 0x111a4e6d */
  if (C.zf) goto L_111a4e6d;
  /* 111a4e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4e4d push eax */
  push32((uint32_t)(EAX));
  /* 111a4e4e call 0x111a4dd0 */
  push32(0x111a4e53u); f_111a4dd0();
  /* 111a4e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4e56 call dword ptr [0x111d42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42c8))), 0x111a4e5cu);
  /* 111a4e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4e5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111a4e61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4e64 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 111a4e6b jmp 0x111a4e77 */
  goto L_111a4e77;
L_111a4e6d:;
  /* 111a4e6d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111a4e6f call 0x111a4320 */
  push32(0x111a4e74u); f_111a4320();
  /* 111a4e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4e77:;
  /* 111a4e77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a4e7a push eax */
  push32((uint32_t)(EAX));
  /* 111a4e7b call dword ptr [0x111d43c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43c0))), 0x111a4e81u);
  /* 111a4e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a4e84 mov esp, ebp */
  ESP = (EBP);
  /* 111a4e86 pop ebp */
  EBP = (pop32());
  /* 111a4e87 ret  */
  ESPCHK(0x111a4df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e90 @ 0x111a4e90 (263 bytes, 86 insns) */
void f_111a4e90(void) {
  FTRACE(0x111a4e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4e90 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4e91 mov ebp, esp */
  EBP = (ESP);
  /* 111a4e93 cmp dword ptr [0x111cfa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4e9a je 0x111a4f95 */
  if (C.zf) goto L_111a4f95;
  /* 111a4ea0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4ea4 jne 0x111a4eb5 */
  if (!C.zf) goto L_111a4eb5;
  /* 111a4ea6 mov eax, dword ptr [0x111cfa5c] */
  EAX = (r32((uint32_t)(0x111cfa5c)));
  /* 111a4eab push eax */
  push32((uint32_t)(EAX));
  /* 111a4eac call dword ptr [0x111d43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43c4))), 0x111a4eb2u);
  /* 111a4eb2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111a4eb5:;
  /* 111a4eb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4eb9 je 0x111a4f86 */
  if (C.zf) goto L_111a4f86;
  /* 111a4ebf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4ec2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4ec6 je 0x111a4ed9 */
  if (C.zf) goto L_111a4ed9;
  /* 111a4ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4ecd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 111a4ed0 push eax */
  push32((uint32_t)(EAX));
  /* 111a4ed1 call 0x111a5e40 */
  push32(0x111a4ed6u); f_111a5e40();
  /* 111a4ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4ed9:;
  /* 111a4ed9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4edc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4ee0 je 0x111a4ef3 */
  if (C.zf) goto L_111a4ef3;
  /* 111a4ee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4ee4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4ee7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 111a4eea push eax */
  push32((uint32_t)(EAX));
  /* 111a4eeb call 0x111a5e40 */
  push32(0x111a4ef0u); f_111a5e40();
  /* 111a4ef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4ef3:;
  /* 111a4ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4ef6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4efa je 0x111a4f0d */
  if (C.zf) goto L_111a4f0d;
  /* 111a4efc push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4efe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f01 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 111a4f04 push eax */
  push32((uint32_t)(EAX));
  /* 111a4f05 call 0x111a5e40 */
  push32(0x111a4f0au); f_111a5e40();
  /* 111a4f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4f0d:;
  /* 111a4f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f10 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4f14 je 0x111a4f27 */
  if (C.zf) goto L_111a4f27;
  /* 111a4f16 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4f18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f1b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 111a4f1e push eax */
  push32((uint32_t)(EAX));
  /* 111a4f1f call 0x111a5e40 */
  push32(0x111a4f24u); f_111a5e40();
  /* 111a4f24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4f27:;
  /* 111a4f27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f2a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4f2e je 0x111a4f41 */
  if (C.zf) goto L_111a4f41;
  /* 111a4f30 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4f32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f35 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 111a4f38 push eax */
  push32((uint32_t)(EAX));
  /* 111a4f39 call 0x111a5e40 */
  push32(0x111a4f3eu); f_111a5e40();
  /* 111a4f3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4f41:;
  /* 111a4f41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f44 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4f48 je 0x111a4f5b */
  if (C.zf) goto L_111a4f5b;
  /* 111a4f4a push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f4f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 111a4f52 push eax */
  push32((uint32_t)(EAX));
  /* 111a4f53 call 0x111a5e40 */
  push32(0x111a4f58u); f_111a5e40();
  /* 111a4f58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4f5b:;
  /* 111a4f5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f5e cmp dword ptr [ecx + 0x50], 0x111cfc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x111cfc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4f65 je 0x111a4f78 */
  if (C.zf) goto L_111a4f78;
  /* 111a4f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4f69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f6c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 111a4f6f push eax */
  push32((uint32_t)(EAX));
  /* 111a4f70 call 0x111a5e40 */
  push32(0x111a4f75u); f_111a5e40();
  /* 111a4f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4f78:;
  /* 111a4f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4f7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a4f7d push ecx */
  push32((uint32_t)(ECX));
  /* 111a4f7e call 0x111a5e40 */
  push32(0x111a4f83u); f_111a5e40();
  /* 111a4f83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4f86:;
  /* 111a4f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a4f88 mov edx, dword ptr [0x111cfa5c] */
  EDX = (r32((uint32_t)(0x111cfa5c)));
  /* 111a4f8e push edx */
  push32((uint32_t)(EDX));
  /* 111a4f8f call dword ptr [0x111d43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43b4))), 0x111a4f95u);
L_111a4f95:;
  /* 111a4f95 pop ebp */
  EBP = (pop32());
  /* 111a4f96 ret  */
  ESPCHK(0x111a4e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fa0 @ 0x111a4fa0 (11 bytes, 5 insns) */
void f_111a4fa0(void) {
  FTRACE(0x111a4fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4fa1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4fa3 call dword ptr [0x111d42c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d42c8))), 0x111a4fa9u);
  /* 111a4fa9 pop ebp */
  EBP = (pop32());
  /* 111a4faa ret  */
  ESPCHK(0x111a4fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fb0 @ 0x111a4fb0 (11 bytes, 5 insns) */
void f_111a4fb0(void) {
  FTRACE(0x111a4fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4fb1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4fb3 call dword ptr [0x111d43c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43c8))), 0x111a4fb9u);
  /* 111a4fb9 pop ebp */
  EBP = (pop32());
  /* 111a4fba ret  */
  ESPCHK(0x111a4fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x111a4fc0 (804 bytes, 236 insns) */
void f_111a4fc0(void) {
  FTRACE(0x111a4fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a4fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a4fc1 mov ebp, esp */
  EBP = (ESP);
  /* 111a4fc3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a4fc6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 111a4fcb push 0x111cc6ac */
  push32((uint32_t)(0x111cc6acu));
  /* 111a4fd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a4fd2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 111a4fd7 call 0x111a53b0 */
  push32(0x111a4fdcu); f_111a53b0();
  /* 111a4fdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a4fdf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 111a4fe2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a4fe6 jne 0x111a4ff2 */
  if (!C.zf) goto L_111a4ff2;
  /* 111a4fe8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 111a4fea call 0x111a4320 */
  push32(0x111a4fefu); f_111a4320();
  /* 111a4fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a4ff2:;
  /* 111a4ff2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a4ff5 mov dword ptr [0x111d3040], eax */
  w32((uint32_t)(0x111d3040), (EAX));
  /* 111a4ffa mov dword ptr [0x111d317c], 0x20 */
  w32((uint32_t)(0x111d317c), (0x20u));
  /* 111a5004 jmp 0x111a500f */
  goto L_111a500f;
L_111a5006:;
  /* 111a5006 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a5009 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a500c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_111a500f:;
  /* 111a500f mov edx, dword ptr [0x111d3040] */
  EDX = (r32((uint32_t)(0x111d3040)));
  /* 111a5015 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a501b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a501e jae 0x111a5043 */
  if (!C.cf) goto L_111a5043;
  /* 111a5020 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a5023 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 111a5027 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a502a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111a5030 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a5033 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 111a5037 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a503a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111a5041 jmp 0x111a5006 */
  goto L_111a5006;
L_111a5043:;
  /* 111a5043 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 111a5046 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5047 call dword ptr [0x111d43d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d4))), 0x111a504du);
  /* 111a504d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 111a5050 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a5056 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a5058 je 0x111a51e5 */
  if (C.zf) goto L_111a51e5;
  /* 111a505e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5062 je 0x111a51e5 */
  if (C.zf) goto L_111a51e5;
  /* 111a5068 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a506b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a506d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 111a5070 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a5073 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5076 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a5079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a507c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a507f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 111a5082 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5089 jge 0x111a5093 */
  if ((C.sf==C.of)) goto L_111a5093;
  /* 111a508b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 111a508e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 111a5091 jmp 0x111a509a */
  goto L_111a509a;
L_111a5093:;
  /* 111a5093 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_111a509a:;
  /* 111a509a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 111a509d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 111a50a0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 111a50a7 jmp 0x111a50b2 */
  goto L_111a50b2;
L_111a50a9:;
  /* 111a50a9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 111a50ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a50af mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_111a50b2:;
  /* 111a50b2 mov ecx, dword ptr [0x111d317c] */
  ECX = (r32((uint32_t)(0x111d317c)));
  /* 111a50b8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a50bb jge 0x111a5152 */
  if ((C.sf==C.of)) goto L_111a5152;
  /* 111a50c1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 111a50c6 push 0x111cc6ac */
  push32((uint32_t)(0x111cc6acu));
  /* 111a50cb push 2 */
  push32((uint32_t)(0x2u));
  /* 111a50cd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 111a50d2 call 0x111a53b0 */
  push32(0x111a50d7u); f_111a53b0();
  /* 111a50d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a50da mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 111a50dd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a50e1 jne 0x111a50ee */
  if (!C.zf) goto L_111a50ee;
  /* 111a50e3 mov edx, dword ptr [0x111d317c] */
  EDX = (r32((uint32_t)(0x111d317c)));
  /* 111a50e9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 111a50ec jmp 0x111a5152 */
  goto L_111a5152;
L_111a50ee:;
  /* 111a50ee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 111a50f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a50f4 mov dword ptr [eax*4 + 0x111d3040], ecx */
  w32((uint32_t)(EAX*4 + 0x111d3040), (ECX));
  /* 111a50fb mov edx, dword ptr [0x111d317c] */
  EDX = (r32((uint32_t)(0x111d317c)));
  /* 111a5101 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5104 mov dword ptr [0x111d317c], edx */
  w32((uint32_t)(0x111d317c), (EDX));
  /* 111a510a jmp 0x111a5115 */
  goto L_111a5115;
L_111a510c:;
  /* 111a510c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a510f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5112 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_111a5115:;
  /* 111a5115 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 111a5118 mov edx, dword ptr [ecx*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111d3040)));
  /* 111a511f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5125 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5128 jae 0x111a514d */
  if (!C.cf) goto L_111a514d;
  /* 111a512a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a512d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 111a5131 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a5134 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111a513a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a513d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 111a5141 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a5144 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111a514b jmp 0x111a510c */
  goto L_111a510c;
L_111a514d:;
  /* 111a514d jmp 0x111a50a9 */
  goto L_111a50a9;
L_111a5152:;
  /* 111a5152 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 111a5159 jmp 0x111a5176 */
  goto L_111a5176;
L_111a515b:;
  /* 111a515b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 111a515e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5161 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 111a5164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5167 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a516a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a516d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 111a5170 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5173 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_111a5176:;
  /* 111a5176 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 111a5179 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a517c jge 0x111a51e5 */
  if ((C.sf==C.of)) goto L_111a51e5;
  /* 111a517e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 111a5181 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5184 je 0x111a51e0 */
  if (C.zf) goto L_111a51e0;
  /* 111a5186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5189 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a518c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 111a518f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a5191 je 0x111a51e0 */
  if (C.zf) goto L_111a51e0;
  /* 111a5193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5196 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111a5199 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 111a519c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a519e jne 0x111a51b0 */
  if (!C.zf) goto L_111a51b0;
  /* 111a51a0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 111a51a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a51a5 push edx */
  push32((uint32_t)(EDX));
  /* 111a51a6 call dword ptr [0x111d43d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d0))), 0x111a51acu);
  /* 111a51ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a51ae je 0x111a51e0 */
  if (C.zf) goto L_111a51e0;
L_111a51b0:;
  /* 111a51b0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 111a51b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111a51b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 111a51b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111a51bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a51bf mov edx, dword ptr [eax*4 + 0x111d3040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111a51c6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a51c8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 111a51cb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a51ce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 111a51d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a51d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111a51d5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a51d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a51db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a51dd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_111a51e0:;
  /* 111a51e0 jmp 0x111a515b */
  goto L_111a515b;
L_111a51e5:;
  /* 111a51e5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 111a51ec jmp 0x111a51f7 */
  goto L_111a51f7;
L_111a51ee:;
  /* 111a51ee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 111a51f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a51f4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_111a51f7:;
  /* 111a51f7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a51fb jge 0x111a52d4 */
  if ((C.sf==C.of)) goto L_111a52d4;
  /* 111a5201 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 111a5204 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a5207 mov edx, dword ptr [0x111d3040] */
  EDX = (r32((uint32_t)(0x111d3040)));
  /* 111a520d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a520f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 111a5212 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a5215 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5218 jne 0x111a52c0 */
  if (!C.zf) goto L_111a52c0;
  /* 111a521e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a5221 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 111a5225 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5229 jne 0x111a5234 */
  if (!C.zf) goto L_111a5234;
  /* 111a522b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 111a5232 jmp 0x111a5244 */
  goto L_111a5244;
L_111a5234:;
  /* 111a5234 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 111a5237 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a523a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111a523c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a523e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5241 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_111a5244:;
  /* 111a5244 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 111a5247 push eax */
  push32((uint32_t)(EAX));
  /* 111a5248 call dword ptr [0x111d4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4384))), 0x111a524eu);
  /* 111a524e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 111a5251 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5255 je 0x111a52af */
  if (C.zf) goto L_111a52af;
  /* 111a5257 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111a525a push ecx */
  push32((uint32_t)(ECX));
  /* 111a525b call dword ptr [0x111d43d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d0))), 0x111a5261u);
  /* 111a5261 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 111a5264 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5268 je 0x111a52af */
  if (C.zf) goto L_111a52af;
  /* 111a526a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a526d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111a5270 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111a5272 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 111a5275 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a527b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a527e jne 0x111a5290 */
  if (!C.zf) goto L_111a5290;
  /* 111a5280 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a5283 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 111a5286 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 111a5288 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a528b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 111a528e jmp 0x111a52ad */
  goto L_111a52ad;
L_111a5290:;
  /* 111a5290 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 111a5293 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a5299 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a529c jne 0x111a52ad */
  if (!C.zf) goto L_111a52ad;
  /* 111a529e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a52a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111a52a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 111a52a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a52aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_111a52ad:;
  /* 111a52ad jmp 0x111a52be */
  goto L_111a52be;
L_111a52af:;
  /* 111a52af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a52b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111a52b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 111a52b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a52bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_111a52be:;
  /* 111a52be jmp 0x111a52cf */
  goto L_111a52cf;
L_111a52c0:;
  /* 111a52c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a52c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111a52c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 111a52c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a52cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_111a52cf:;
  /* 111a52cf jmp 0x111a51ee */
  goto L_111a51ee;
L_111a52d4:;
  /* 111a52d4 mov eax, dword ptr [0x111d317c] */
  EAX = (r32((uint32_t)(0x111d317c)));
  /* 111a52d9 push eax */
  push32((uint32_t)(EAX));
  /* 111a52da call dword ptr [0x111d43cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43cc))), 0x111a52e0u);
  /* 111a52e0 mov esp, ebp */
  ESP = (EBP);
  /* 111a52e2 pop ebp */
  EBP = (pop32());
  /* 111a52e3 ret  */
  ESPCHK(0x111a4fc0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x111a52f0 (155 bytes, 45 insns) */
void f_111a52f0(void) {
  FTRACE(0x111a52f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a52f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a52f1 mov ebp, esp */
  EBP = (ESP);
  /* 111a52f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a52f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111a52fd jmp 0x111a5308 */
  goto L_111a5308;
L_111a52ff:;
  /* 111a52ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5302 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5305 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111a5308:;
  /* 111a5308 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a530c jge 0x111a5387 */
  if ((C.sf==C.of)) goto L_111a5387;
  /* 111a530e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5311 cmp dword ptr [ecx*4 + 0x111d3040], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x111d3040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5319 je 0x111a5382 */
  if (C.zf) goto L_111a5382;
  /* 111a531b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a531e mov eax, dword ptr [edx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111a5325 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a5328 jmp 0x111a5333 */
  goto L_111a5333;
L_111a532a:;
  /* 111a532a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a532d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5330 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a5333:;
  /* 111a5333 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5336 mov eax, dword ptr [edx*4 + 0x111d3040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111d3040)));
  /* 111a533d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5342 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5345 jae 0x111a535f */
  if (!C.cf) goto L_111a535f;
  /* 111a5347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a534a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a534e je 0x111a535d */
  if (C.zf) goto L_111a535d;
  /* 111a5350 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5353 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5356 push edx */
  push32((uint32_t)(EDX));
  /* 111a5357 call dword ptr [0x111d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d8))), 0x111a535du);
L_111a535d:;
  /* 111a535d jmp 0x111a532a */
  goto L_111a532a;
L_111a535f:;
  /* 111a535f push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5364 mov ecx, dword ptr [eax*4 + 0x111d3040] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111d3040)));
  /* 111a536b push ecx */
  push32((uint32_t)(ECX));
  /* 111a536c call 0x111a5e40 */
  push32(0x111a5371u); f_111a5e40();
  /* 111a5371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5374 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5377 mov dword ptr [edx*4 + 0x111d3040], 0 */
  w32((uint32_t)(EDX*4 + 0x111d3040), (0x0u));
L_111a5382:;
  /* 111a5382 jmp 0x111a52ff */
  goto L_111a52ff;
L_111a5387:;
  /* 111a5387 mov esp, ebp */
  ESP = (EBP);
  /* 111a5389 pop ebp */
  EBP = (pop32());
  /* 111a538a ret  */
  ESPCHK(0x111a52f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005390 @ 0x111a5390 (29 bytes, 13 insns) */
void f_111a5390(void) {
  FTRACE(0x111a5390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5390 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5391 mov ebp, esp */
  EBP = (ESP);
  /* 111a5393 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5395 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5397 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5399 mov eax, dword ptr [0x111d1848] */
  EAX = (r32((uint32_t)(0x111d1848)));
  /* 111a539e push eax */
  push32((uint32_t)(EAX));
  /* 111a539f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a53a2 push ecx */
  push32((uint32_t)(ECX));
  /* 111a53a3 call 0x111a5400 */
  push32(0x111a53a8u); f_111a5400();
  /* 111a53a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a53ab pop ebp */
  EBP = (pop32());
  /* 111a53ac ret  */
  ESPCHK(0x111a5390u, _esp0);
  ESP += 4; return;
}

/* FUN_100053b0 @ 0x111a53b0 (35 bytes, 16 insns) */
void f_111a53b0(void) {
  FTRACE(0x111a53b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a53b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a53b1 mov ebp, esp */
  EBP = (ESP);
  /* 111a53b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a53b6 push eax */
  push32((uint32_t)(EAX));
  /* 111a53b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a53ba push ecx */
  push32((uint32_t)(ECX));
  /* 111a53bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a53be push edx */
  push32((uint32_t)(EDX));
  /* 111a53bf mov eax, dword ptr [0x111d1848] */
  EAX = (r32((uint32_t)(0x111d1848)));
  /* 111a53c4 push eax */
  push32((uint32_t)(EAX));
  /* 111a53c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a53c8 push ecx */
  push32((uint32_t)(ECX));
  /* 111a53c9 call 0x111a5400 */
  push32(0x111a53ceu); f_111a5400();
  /* 111a53ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a53d1 pop ebp */
  EBP = (pop32());
  /* 111a53d2 ret  */
  ESPCHK(0x111a53b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053e0 @ 0x111a53e0 (27 bytes, 13 insns) */
void f_111a53e0(void) {
  FTRACE(0x111a53e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a53e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a53e1 mov ebp, esp */
  EBP = (ESP);
  /* 111a53e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a53e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a53e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a53e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a53ec push eax */
  push32((uint32_t)(EAX));
  /* 111a53ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a53f0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a53f1 call 0x111a5400 */
  push32(0x111a53f6u); f_111a5400();
  /* 111a53f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a53f9 pop ebp */
  EBP = (pop32());
  /* 111a53fa ret  */
  ESPCHK(0x111a53e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005400 @ 0x111a5400 (94 bytes, 38 insns) */
void f_111a5400(void) {
  FTRACE(0x111a5400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5400 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5401 mov ebp, esp */
  EBP = (ESP);
  /* 111a5403 push ecx */
  push32((uint32_t)(ECX));
L_111a5404:;
  /* 111a5404 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a5406 call 0x111a8db0 */
  push32(0x111a540bu); f_111a8db0();
  /* 111a540b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a540e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a5411 push eax */
  push32((uint32_t)(EAX));
  /* 111a5412 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a5415 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5416 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a5419 push edx */
  push32((uint32_t)(EDX));
  /* 111a541a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a541d push eax */
  push32((uint32_t)(EAX));
  /* 111a541e call 0x111a5480 */
  push32(0x111a5423u); f_111a5480();
  /* 111a5423 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a5429 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a542b call 0x111a8e50 */
  push32(0x111a5430u); f_111a8e50();
  /* 111a5430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5433 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5437 jne 0x111a543f */
  if (!C.zf) goto L_111a543f;
  /* 111a5439 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a543d jne 0x111a5444 */
  if (!C.zf) goto L_111a5444;
L_111a543f:;
  /* 111a543f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5442 jmp 0x111a545a */
  goto L_111a545a;
L_111a5444:;
  /* 111a5444 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5447 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5448 call 0x111a90f0 */
  push32(0x111a544du); f_111a90f0();
  /* 111a544d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5450 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5452 jne 0x111a5458 */
  if (!C.zf) goto L_111a5458;
  /* 111a5454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5456 jmp 0x111a545a */
  goto L_111a545a;
L_111a5458:;
  /* 111a5458 jmp 0x111a5404 */
  goto L_111a5404;
L_111a545a:;
  /* 111a545a mov esp, ebp */
  ESP = (EBP);
  /* 111a545c pop ebp */
  EBP = (pop32());
  /* 111a545d ret  */
  ESPCHK(0x111a5400u, _esp0);
  ESP += 4; return;
}

/* FUN_10005460 @ 0x111a5460 (23 bytes, 11 insns) */
void f_111a5460(void) {
  FTRACE(0x111a5460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5460 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5461 mov ebp, esp */
  EBP = (ESP);
  /* 111a5463 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5465 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5467 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5469 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a546c push eax */
  push32((uint32_t)(EAX));
  /* 111a546d call 0x111a5480 */
  push32(0x111a5472u); f_111a5480();
  /* 111a5472 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5475 pop ebp */
  EBP = (pop32());
  /* 111a5476 ret  */
  ESPCHK(0x111a5460u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x111a5480 (787 bytes, 254 insns) */
void f_111a5480(void) {
  FTRACE(0x111a5480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5480 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5481 mov ebp, esp */
  EBP = (ESP);
  /* 111a5483 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a5486 push ebx */
  push32((uint32_t)(EBX));
  /* 111a5487 push esi */
  push32((uint32_t)(ESI));
  /* 111a5488 push edi */
  push32((uint32_t)(EDI));
  /* 111a5489 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111a5490 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a5495 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111a5498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a549a je 0x111a54cc */
  if (C.zf) goto L_111a54cc;
L_111a549c:;
  /* 111a549c call 0x111a6550 */
  push32(0x111a54a1u); f_111a6550();
  /* 111a54a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a54a3 jne 0x111a54c6 */
  if (!C.zf) goto L_111a54c6;
  /* 111a54a5 push 0x111cc7a0 */
  push32((uint32_t)(0x111cc7a0u));
  /* 111a54aa push 0 */
  push32((uint32_t)(0x0u));
  /* 111a54ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 111a54b1 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a54b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a54b8 call 0x111a4470 */
  push32(0x111a54bdu); f_111a4470();
  /* 111a54bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a54c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a54c3 jne 0x111a54c6 */
  if (!C.zf) goto L_111a54c6;
  /* 111a54c5 int3  */
  x86_unimpl("int3 @ 0x111a54c5");
L_111a54c6:;
  /* 111a54c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a54c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a54ca jne 0x111a549c */
  if (!C.zf) goto L_111a549c;
L_111a54cc:;
  /* 111a54cc mov edx, dword ptr [0x111cfa88] */
  EDX = (r32((uint32_t)(0x111cfa88)));
  /* 111a54d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111a54d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a54d8 cmp eax, dword ptr [0x111cfa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111cfa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a54de jne 0x111a54e1 */
  if (!C.zf) goto L_111a54e1;
  /* 111a54e0 int3  */
  x86_unimpl("int3 @ 0x111a54e0");
L_111a54e1:;
  /* 111a54e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a54e4 push ecx */
  push32((uint32_t)(ECX));
  /* 111a54e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a54e8 push edx */
  push32((uint32_t)(EDX));
  /* 111a54e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a54ec push eax */
  push32((uint32_t)(EAX));
  /* 111a54ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a54f0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a54f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a54f4 push edx */
  push32((uint32_t)(EDX));
  /* 111a54f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a54f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a54f9 call dword ptr [0x111cfc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x111cfc90))), 0x111a54ffu);
  /* 111a54ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5502 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5504 jne 0x111a5564 */
  if (!C.zf) goto L_111a5564;
  /* 111a5506 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a550a je 0x111a5537 */
  if (C.zf) goto L_111a5537;
L_111a550c:;
  /* 111a550c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a550f push eax */
  push32((uint32_t)(EAX));
  /* 111a5510 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a5513 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5514 push 0x111cc75c */
  push32((uint32_t)(0x111cc75cu));
  /* 111a5519 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a551b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a551d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a551f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5521 call 0x111a4470 */
  push32(0x111a5526u); f_111a4470();
  /* 111a5526 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5529 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a552c jne 0x111a552f */
  if (!C.zf) goto L_111a552f;
  /* 111a552e int3  */
  x86_unimpl("int3 @ 0x111a552e");
L_111a552f:;
  /* 111a552f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a5531 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a5533 jne 0x111a550c */
  if (!C.zf) goto L_111a550c;
  /* 111a5535 jmp 0x111a555d */
  goto L_111a555d;
L_111a5537:;
  /* 111a5537 push 0x111cc738 */
  push32((uint32_t)(0x111cc738u));
  /* 111a553c push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a5541 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5543 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5545 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5547 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5549 call 0x111a4470 */
  push32(0x111a554eu); f_111a4470();
  /* 111a554e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5551 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5554 jne 0x111a5557 */
  if (!C.zf) goto L_111a5557;
  /* 111a5556 int3  */
  x86_unimpl("int3 @ 0x111a5556");
L_111a5557:;
  /* 111a5557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a555b jne 0x111a5537 */
  if (!C.zf) goto L_111a5537;
L_111a555d:;
  /* 111a555d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a555f jmp 0x111a578c */
  goto L_111a578c;
L_111a5564:;
  /* 111a5564 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5567 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a556d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5570 je 0x111a5586 */
  if (C.zf) goto L_111a5586;
  /* 111a5572 mov edx, dword ptr [0x111cfa84] */
  EDX = (r32((uint32_t)(0x111cfa84)));
  /* 111a5578 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 111a557b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a557d jne 0x111a5586 */
  if (!C.zf) goto L_111a5586;
  /* 111a557f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_111a5586:;
  /* 111a5586 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a558a ja 0x111a5597 */
  if ((!C.cf&&!C.zf)) goto L_111a5597;
  /* 111a558c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a558f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5592 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5595 jbe 0x111a55c3 */
  if ((C.cf||C.zf)) goto L_111a55c3;
L_111a5597:;
  /* 111a5597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a559a push ecx */
  push32((uint32_t)(ECX));
  /* 111a559b push 0x111cc710 */
  push32((uint32_t)(0x111cc710u));
  /* 111a55a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a55a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a55a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a55a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a55a8 call 0x111a4470 */
  push32(0x111a55adu); f_111a4470();
  /* 111a55ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a55b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a55b3 jne 0x111a55b6 */
  if (!C.zf) goto L_111a55b6;
  /* 111a55b5 int3  */
  x86_unimpl("int3 @ 0x111a55b5");
L_111a55b6:;
  /* 111a55b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a55b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a55ba jne 0x111a5597 */
  if (!C.zf) goto L_111a5597;
  /* 111a55bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a55be jmp 0x111a578c */
  goto L_111a578c;
L_111a55c3:;
  /* 111a55c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a55c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a55cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a55ce je 0x111a5610 */
  if (C.zf) goto L_111a5610;
  /* 111a55d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a55d4 je 0x111a5610 */
  if (C.zf) goto L_111a5610;
  /* 111a55d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a55d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a55df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a55e2 je 0x111a5610 */
  if (C.zf) goto L_111a5610;
  /* 111a55e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a55e8 je 0x111a5610 */
  if (C.zf) goto L_111a5610;
L_111a55ea:;
  /* 111a55ea push 0x111cc6dc */
  push32((uint32_t)(0x111cc6dcu));
  /* 111a55ef push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a55f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a55f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a55f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a55fa push 1 */
  push32((uint32_t)(0x1u));
  /* 111a55fc call 0x111a4470 */
  push32(0x111a5601u); f_111a4470();
  /* 111a5601 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5604 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5607 jne 0x111a560a */
  if (!C.zf) goto L_111a560a;
  /* 111a5609 int3  */
  x86_unimpl("int3 @ 0x111a5609");
L_111a560a:;
  /* 111a560a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a560c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a560e jne 0x111a55ea */
  if (!C.zf) goto L_111a55ea;
L_111a5610:;
  /* 111a5610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5613 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5616 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111a5619 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a561c push ecx */
  push32((uint32_t)(ECX));
  /* 111a561d call 0x111a9200 */
  push32(0x111a5622u); f_111a9200();
  /* 111a5622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a5628 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a562c jne 0x111a5635 */
  if (!C.zf) goto L_111a5635;
  /* 111a562e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5630 jmp 0x111a578c */
  goto L_111a578c;
L_111a5635:;
  /* 111a5635 mov edx, dword ptr [0x111cfa88] */
  EDX = (r32((uint32_t)(0x111cfa88)));
  /* 111a563b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a563e mov dword ptr [0x111cfa88], edx */
  w32((uint32_t)(0x111cfa88), (EDX));
  /* 111a5644 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5648 je 0x111a5693 */
  if (C.zf) goto L_111a5693;
  /* 111a564a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a564d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111a5653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5656 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 111a565d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5660 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 111a5667 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a566a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 111a5671 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5677 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 111a567a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a567d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 111a5684 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5687 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 111a568e jmp 0x111a5733 */
  goto L_111a5733;
L_111a5693:;
  /* 111a5693 mov edx, dword ptr [0x111d16a8] */
  EDX = (r32((uint32_t)(0x111d16a8)));
  /* 111a5699 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a569c mov dword ptr [0x111d16a8], edx */
  w32((uint32_t)(0x111d16a8), (EDX));
  /* 111a56a2 mov eax, dword ptr [0x111d16b0] */
  EAX = (r32((uint32_t)(0x111d16b0)));
  /* 111a56a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a56aa mov dword ptr [0x111d16b0], eax */
  w32((uint32_t)(0x111d16b0), (EAX));
  /* 111a56af mov ecx, dword ptr [0x111d16b0] */
  ECX = (r32((uint32_t)(0x111d16b0)));
  /* 111a56b5 cmp ecx, dword ptr [0x111d16b4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111d16b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a56bb jbe 0x111a56c9 */
  if ((C.cf||C.zf)) goto L_111a56c9;
  /* 111a56bd mov edx, dword ptr [0x111d16b0] */
  EDX = (r32((uint32_t)(0x111d16b0)));
  /* 111a56c3 mov dword ptr [0x111d16b4], edx */
  w32((uint32_t)(0x111d16b4), (EDX));
L_111a56c9:;
  /* 111a56c9 cmp dword ptr [0x111d16ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d16ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a56d0 je 0x111a56df */
  if (C.zf) goto L_111a56df;
  /* 111a56d2 mov eax, dword ptr [0x111d16ac] */
  EAX = (r32((uint32_t)(0x111d16ac)));
  /* 111a56d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a56da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111a56dd jmp 0x111a56e8 */
  goto L_111a56e8;
L_111a56df:;
  /* 111a56df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a56e2 mov dword ptr [0x111d16a4], edx */
  w32((uint32_t)(0x111d16a4), (EDX));
L_111a56e8:;
  /* 111a56e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a56eb mov ecx, dword ptr [0x111d16ac] */
  ECX = (r32((uint32_t)(0x111d16ac)));
  /* 111a56f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111a56f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a56f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 111a56fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5700 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a5703 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 111a5706 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5709 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a570c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 111a570f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5712 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5715 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 111a5718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a571b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a571e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 111a5721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5724 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5727 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 111a572a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a572d mov dword ptr [0x111d16ac], ecx */
  w32((uint32_t)(0x111d16ac), (ECX));
L_111a5733:;
  /* 111a5733 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a5735 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a5737 mov dl, byte ptr [0x111cfa90] */
  DL = (r8((uint32_t)(0x111cfa90)));
  /* 111a573d push edx */
  push32((uint32_t)(EDX));
  /* 111a573e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5741 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5744 push eax */
  push32((uint32_t)(EAX));
  /* 111a5745 call 0x111a9120 */
  push32(0x111a574au); f_111a9120();
  /* 111a574a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a574d push 4 */
  push32((uint32_t)(0x4u));
  /* 111a574f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a5751 mov cl, byte ptr [0x111cfa90] */
  CL = (r8((uint32_t)(0x111cfa90)));
  /* 111a5757 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a575b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a575e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 111a5762 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5763 call 0x111a9120 */
  push32(0x111a5768u); f_111a9120();
  /* 111a5768 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a576b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a576e push edx */
  push32((uint32_t)(EDX));
  /* 111a576f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5771 mov al, byte ptr [0x111cfa92] */
  AL = (r8((uint32_t)(0x111cfa92)));
  /* 111a5776 push eax */
  push32((uint32_t)(EAX));
  /* 111a5777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a577a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a577d push ecx */
  push32((uint32_t)(ECX));
  /* 111a577e call 0x111a9120 */
  push32(0x111a5783u); f_111a9120();
  /* 111a5783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5786 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5789 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111a578c:;
  /* 111a578c pop edi */
  EDI = (pop32());
  /* 111a578d pop esi */
  ESI = (pop32());
  /* 111a578e pop ebx */
  EBX = (pop32());
  /* 111a578f mov esp, ebp */
  ESP = (EBP);
  /* 111a5791 pop ebp */
  EBP = (pop32());
  /* 111a5792 ret  */
  ESPCHK(0x111a5480u, _esp0);
  ESP += 4; return;
}

/* FUN_100057a0 @ 0x111a57a0 (27 bytes, 13 insns) */
void f_111a57a0(void) {
  FTRACE(0x111a57a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a57a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a57a1 mov ebp, esp */
  EBP = (ESP);
  /* 111a57a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a57a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a57a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a57a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a57ac push eax */
  push32((uint32_t)(EAX));
  /* 111a57ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a57b0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a57b1 call 0x111a57c0 */
  push32(0x111a57b6u); f_111a57c0();
  /* 111a57b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a57b9 pop ebp */
  EBP = (pop32());
  /* 111a57ba ret  */
  ESPCHK(0x111a57a0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x111a57c0 (96 bytes, 37 insns) */
void f_111a57c0(void) {
  FTRACE(0x111a57c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a57c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a57c1 mov ebp, esp */
  EBP = (ESP);
  /* 111a57c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a57c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a57c9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a57cd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 111a57d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a57d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a57d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a57d7 push edx */
  push32((uint32_t)(EDX));
  /* 111a57d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a57db push eax */
  push32((uint32_t)(EAX));
  /* 111a57dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a57df push ecx */
  push32((uint32_t)(ECX));
  /* 111a57e0 call 0x111a53b0 */
  push32(0x111a57e5u); f_111a53b0();
  /* 111a57e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a57e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a57eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a57ef je 0x111a5819 */
  if (C.zf) goto L_111a5819;
  /* 111a57f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a57f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111a57f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a57fa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a57fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a5800:;
  /* 111a5800 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5803 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5806 jae 0x111a5819 */
  if (!C.cf) goto L_111a5819;
  /* 111a5808 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a580b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111a580e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5811 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5814 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a5817 jmp 0x111a5800 */
  goto L_111a5800;
L_111a5819:;
  /* 111a5819 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a581c mov esp, ebp */
  ESP = (EBP);
  /* 111a581e pop ebp */
  EBP = (pop32());
  /* 111a581f ret  */
  ESPCHK(0x111a57c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005820 @ 0x111a5820 (27 bytes, 13 insns) */
void f_111a5820(void) {
  FTRACE(0x111a5820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5820 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5821 mov ebp, esp */
  EBP = (ESP);
  /* 111a5823 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5825 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5827 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5829 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a582c push eax */
  push32((uint32_t)(EAX));
  /* 111a582d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5830 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5831 call 0x111a5840 */
  push32(0x111a5836u); f_111a5840();
  /* 111a5836 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5839 pop ebp */
  EBP = (pop32());
  /* 111a583a ret  */
  ESPCHK(0x111a5820u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x111a5840 (64 bytes, 27 insns) */
void f_111a5840(void) {
  FTRACE(0x111a5840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5840 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5841 mov ebp, esp */
  EBP = (ESP);
  /* 111a5843 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5844 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a5846 call 0x111a8db0 */
  push32(0x111a584bu); f_111a8db0();
  /* 111a584b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a584e push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5850 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a5853 push eax */
  push32((uint32_t)(EAX));
  /* 111a5854 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a5857 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5858 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a585b push edx */
  push32((uint32_t)(EDX));
  /* 111a585c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a585f push eax */
  push32((uint32_t)(EAX));
  /* 111a5860 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5863 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5864 call 0x111a5880 */
  push32(0x111a5869u); f_111a5880();
  /* 111a5869 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a586c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a586f push 9 */
  push32((uint32_t)(0x9u));
  /* 111a5871 call 0x111a8e50 */
  push32(0x111a5876u); f_111a8e50();
  /* 111a5876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a587c mov esp, ebp */
  ESP = (EBP);
  /* 111a587e pop ebp */
  EBP = (pop32());
  /* 111a587f ret  */
  ESPCHK(0x111a5840u, _esp0);
  ESP += 4; return;
}

/* FUN_10005880 @ 0x111a5880 (1297 bytes, 431 insns) */
void f_111a5880(void) {
  FTRACE(0x111a5880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5880 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5881 mov ebp, esp */
  EBP = (ESP);
  /* 111a5883 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a5886 push ebx */
  push32((uint32_t)(EBX));
  /* 111a5887 push esi */
  push32((uint32_t)(ESI));
  /* 111a5888 push edi */
  push32((uint32_t)(EDI));
  /* 111a5889 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 111a5890 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5894 jne 0x111a58b3 */
  if (!C.zf) goto L_111a58b3;
  /* 111a5896 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a5899 push eax */
  push32((uint32_t)(EAX));
  /* 111a589a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a589d push ecx */
  push32((uint32_t)(ECX));
  /* 111a589e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a58a1 push edx */
  push32((uint32_t)(EDX));
  /* 111a58a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a58a5 push eax */
  push32((uint32_t)(EAX));
  /* 111a58a6 call 0x111a53b0 */
  push32(0x111a58abu); f_111a53b0();
  /* 111a58ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a58ae jmp 0x111a5d8a */
  goto L_111a5d8a;
L_111a58b3:;
  /* 111a58b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a58b7 je 0x111a58d6 */
  if (C.zf) goto L_111a58d6;
  /* 111a58b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a58bd jne 0x111a58d6 */
  if (!C.zf) goto L_111a58d6;
  /* 111a58bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a58c2 push ecx */
  push32((uint32_t)(ECX));
  /* 111a58c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a58c6 push edx */
  push32((uint32_t)(EDX));
  /* 111a58c7 call 0x111a5e40 */
  push32(0x111a58ccu); f_111a5e40();
  /* 111a58cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a58cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a58d1 jmp 0x111a5d8a */
  goto L_111a5d8a;
L_111a58d6:;
  /* 111a58d6 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a58db and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111a58de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a58e0 je 0x111a5912 */
  if (C.zf) goto L_111a5912;
L_111a58e2:;
  /* 111a58e2 call 0x111a6550 */
  push32(0x111a58e7u); f_111a6550();
  /* 111a58e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a58e9 jne 0x111a590c */
  if (!C.zf) goto L_111a590c;
  /* 111a58eb push 0x111cc7a0 */
  push32((uint32_t)(0x111cc7a0u));
  /* 111a58f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a58f2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 111a58f7 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a58fc push 2 */
  push32((uint32_t)(0x2u));
  /* 111a58fe call 0x111a4470 */
  push32(0x111a5903u); f_111a4470();
  /* 111a5903 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5906 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5909 jne 0x111a590c */
  if (!C.zf) goto L_111a590c;
  /* 111a590b int3  */
  x86_unimpl("int3 @ 0x111a590b");
L_111a590c:;
  /* 111a590c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a590e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a5910 jne 0x111a58e2 */
  if (!C.zf) goto L_111a58e2;
L_111a5912:;
  /* 111a5912 mov edx, dword ptr [0x111cfa88] */
  EDX = (r32((uint32_t)(0x111cfa88)));
  /* 111a5918 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111a591b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a591e cmp eax, dword ptr [0x111cfa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111cfa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5924 jne 0x111a5927 */
  if (!C.zf) goto L_111a5927;
  /* 111a5926 int3  */
  x86_unimpl("int3 @ 0x111a5926");
L_111a5927:;
  /* 111a5927 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a592a push ecx */
  push32((uint32_t)(ECX));
  /* 111a592b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a592e push edx */
  push32((uint32_t)(EDX));
  /* 111a592f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a5932 push eax */
  push32((uint32_t)(EAX));
  /* 111a5933 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a5936 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5937 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a593a push edx */
  push32((uint32_t)(EDX));
  /* 111a593b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a593e push eax */
  push32((uint32_t)(EAX));
  /* 111a593f push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5941 call dword ptr [0x111cfc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x111cfc90))), 0x111a5947u);
  /* 111a5947 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a594a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a594c jne 0x111a59ac */
  if (!C.zf) goto L_111a59ac;
  /* 111a594e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5952 je 0x111a597f */
  if (C.zf) goto L_111a597f;
L_111a5954:;
  /* 111a5954 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a5957 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5958 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a595b push edx */
  push32((uint32_t)(EDX));
  /* 111a595c push 0x111cc91c */
  push32((uint32_t)(0x111cc91cu));
  /* 111a5961 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5963 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5965 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5967 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5969 call 0x111a4470 */
  push32(0x111a596eu); f_111a4470();
  /* 111a596e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5971 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5974 jne 0x111a5977 */
  if (!C.zf) goto L_111a5977;
  /* 111a5976 int3  */
  x86_unimpl("int3 @ 0x111a5976");
L_111a5977:;
  /* 111a5977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a597b jne 0x111a5954 */
  if (!C.zf) goto L_111a5954;
  /* 111a597d jmp 0x111a59a5 */
  goto L_111a59a5;
L_111a597f:;
  /* 111a597f push 0x111cc8f8 */
  push32((uint32_t)(0x111cc8f8u));
  /* 111a5984 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a5989 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a598b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a598d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a598f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5991 call 0x111a4470 */
  push32(0x111a5996u); f_111a4470();
  /* 111a5996 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a599c jne 0x111a599f */
  if (!C.zf) goto L_111a599f;
  /* 111a599e int3  */
  x86_unimpl("int3 @ 0x111a599e");
L_111a599f:;
  /* 111a599f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a59a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a59a3 jne 0x111a597f */
  if (!C.zf) goto L_111a597f;
L_111a59a5:;
  /* 111a59a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a59a7 jmp 0x111a5d8a */
  goto L_111a5d8a;
L_111a59ac:;
  /* 111a59ac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a59b0 jbe 0x111a59de */
  if ((C.cf||C.zf)) goto L_111a59de;
L_111a59b2:;
  /* 111a59b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a59b5 push edx */
  push32((uint32_t)(EDX));
  /* 111a59b6 push 0x111cc8c8 */
  push32((uint32_t)(0x111cc8c8u));
  /* 111a59bb push 0 */
  push32((uint32_t)(0x0u));
  /* 111a59bd push 0 */
  push32((uint32_t)(0x0u));
  /* 111a59bf push 0 */
  push32((uint32_t)(0x0u));
  /* 111a59c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a59c3 call 0x111a4470 */
  push32(0x111a59c8u); f_111a4470();
  /* 111a59c8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a59cb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a59ce jne 0x111a59d1 */
  if (!C.zf) goto L_111a59d1;
  /* 111a59d0 int3  */
  x86_unimpl("int3 @ 0x111a59d0");
L_111a59d1:;
  /* 111a59d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a59d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a59d5 jne 0x111a59b2 */
  if (!C.zf) goto L_111a59b2;
  /* 111a59d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a59d9 jmp 0x111a5d8a */
  goto L_111a5d8a;
L_111a59de:;
  /* 111a59de cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a59e2 je 0x111a5a26 */
  if (C.zf) goto L_111a5a26;
  /* 111a59e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a59e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a59ed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a59f0 je 0x111a5a26 */
  if (C.zf) goto L_111a5a26;
  /* 111a59f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a59f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a59fb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a59fe je 0x111a5a26 */
  if (C.zf) goto L_111a5a26;
L_111a5a00:;
  /* 111a5a00 push 0x111cc6dc */
  push32((uint32_t)(0x111cc6dcu));
  /* 111a5a05 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a5a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5a12 call 0x111a4470 */
  push32(0x111a5a17u); f_111a4470();
  /* 111a5a17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5a1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5a1d jne 0x111a5a20 */
  if (!C.zf) goto L_111a5a20;
  /* 111a5a1f int3  */
  x86_unimpl("int3 @ 0x111a5a1f");
L_111a5a20:;
  /* 111a5a20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5a24 jne 0x111a5a00 */
  if (!C.zf) goto L_111a5a00;
L_111a5a26:;
  /* 111a5a26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5a29 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5a2a call 0x111a69b0 */
  push32(0x111a5a2fu); f_111a69b0();
  /* 111a5a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5a34 jne 0x111a5a57 */
  if (!C.zf) goto L_111a5a57;
  /* 111a5a36 push 0x111cc8a4 */
  push32((uint32_t)(0x111cc8a4u));
  /* 111a5a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5a3d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 111a5a42 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5a47 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5a49 call 0x111a4470 */
  push32(0x111a5a4eu); f_111a4470();
  /* 111a5a4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5a51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5a54 jne 0x111a5a57 */
  if (!C.zf) goto L_111a5a57;
  /* 111a5a56 int3  */
  x86_unimpl("int3 @ 0x111a5a56");
L_111a5a57:;
  /* 111a5a57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a5a59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a5a5b jne 0x111a5a26 */
  if (!C.zf) goto L_111a5a26;
  /* 111a5a5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5a60 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a5a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a5a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5a69 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5a6d jne 0x111a5a76 */
  if (!C.zf) goto L_111a5a76;
  /* 111a5a6f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_111a5a76:;
  /* 111a5a76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5a7a je 0x111a5aba */
  if (C.zf) goto L_111a5aba;
L_111a5a7c:;
  /* 111a5a7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5a7f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5a86 jne 0x111a5a91 */
  if (!C.zf) goto L_111a5a91;
  /* 111a5a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5a8b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5a8f je 0x111a5ab2 */
  if (C.zf) goto L_111a5ab2;
L_111a5a91:;
  /* 111a5a91 push 0x111cc85c */
  push32((uint32_t)(0x111cc85cu));
  /* 111a5a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5a98 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 111a5a9d push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5aa4 call 0x111a4470 */
  push32(0x111a5aa9u); f_111a4470();
  /* 111a5aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5aac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5aaf jne 0x111a5ab2 */
  if (!C.zf) goto L_111a5ab2;
  /* 111a5ab1 int3  */
  x86_unimpl("int3 @ 0x111a5ab1");
L_111a5ab2:;
  /* 111a5ab2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a5ab4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a5ab6 jne 0x111a5a7c */
  if (!C.zf) goto L_111a5a7c;
  /* 111a5ab8 jmp 0x111a5b1e */
  goto L_111a5b1e;
L_111a5aba:;
  /* 111a5aba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5abd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a5ac0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a5ac5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5ac8 jne 0x111a5adf */
  if (!C.zf) goto L_111a5adf;
  /* 111a5aca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a5acd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a5ad3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5ad6 jne 0x111a5adf */
  if (!C.zf) goto L_111a5adf;
  /* 111a5ad8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_111a5adf:;
  /* 111a5adf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5ae2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a5ae5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a5aea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a5aed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a5af3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5af5 je 0x111a5b18 */
  if (C.zf) goto L_111a5b18;
  /* 111a5af7 push 0x111cc820 */
  push32((uint32_t)(0x111cc820u));
  /* 111a5afc push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5afe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 111a5b03 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5b08 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5b0a call 0x111a4470 */
  push32(0x111a5b0fu); f_111a4470();
  /* 111a5b0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5b12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5b15 jne 0x111a5b18 */
  if (!C.zf) goto L_111a5b18;
  /* 111a5b17 int3  */
  x86_unimpl("int3 @ 0x111a5b17");
L_111a5b18:;
  /* 111a5b18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a5b1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a5b1c jne 0x111a5adf */
  if (!C.zf) goto L_111a5adf;
L_111a5b1e:;
  /* 111a5b1e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5b22 je 0x111a5b49 */
  if (C.zf) goto L_111a5b49;
  /* 111a5b24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5b27 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5b2a push eax */
  push32((uint32_t)(EAX));
  /* 111a5b2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5b2e push ecx */
  push32((uint32_t)(ECX));
  /* 111a5b2f call 0x111a9330 */
  push32(0x111a5b34u); f_111a9330();
  /* 111a5b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5b37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a5b3a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5b3e jne 0x111a5b47 */
  if (!C.zf) goto L_111a5b47;
  /* 111a5b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5b42 jmp 0x111a5d8a */
  goto L_111a5d8a;
L_111a5b47:;
  /* 111a5b47 jmp 0x111a5b6c */
  goto L_111a5b6c;
L_111a5b49:;
  /* 111a5b49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5b4c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5b4f push edx */
  push32((uint32_t)(EDX));
  /* 111a5b50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a5b53 push eax */
  push32((uint32_t)(EAX));
  /* 111a5b54 call 0x111a9280 */
  push32(0x111a5b59u); f_111a9280();
  /* 111a5b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5b5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a5b5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5b63 jne 0x111a5b6c */
  if (!C.zf) goto L_111a5b6c;
  /* 111a5b65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5b67 jmp 0x111a5d8a */
  goto L_111a5d8a;
L_111a5b6c:;
  /* 111a5b6c mov ecx, dword ptr [0x111cfa88] */
  ECX = (r32((uint32_t)(0x111cfa88)));
  /* 111a5b72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5b75 mov dword ptr [0x111cfa88], ecx */
  w32((uint32_t)(0x111cfa88), (ECX));
  /* 111a5b7b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5b7f jne 0x111a5bd7 */
  if (!C.zf) goto L_111a5bd7;
  /* 111a5b81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5b84 mov eax, dword ptr [0x111d16a8] */
  EAX = (r32((uint32_t)(0x111d16a8)));
  /* 111a5b89 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a5b8c mov dword ptr [0x111d16a8], eax */
  w32((uint32_t)(0x111d16a8), (EAX));
  /* 111a5b91 mov ecx, dword ptr [0x111d16a8] */
  ECX = (r32((uint32_t)(0x111d16a8)));
  /* 111a5b97 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5b9a mov dword ptr [0x111d16a8], ecx */
  w32((uint32_t)(0x111d16a8), (ECX));
  /* 111a5ba0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5ba3 mov eax, dword ptr [0x111d16b0] */
  EAX = (r32((uint32_t)(0x111d16b0)));
  /* 111a5ba8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a5bab mov dword ptr [0x111d16b0], eax */
  w32((uint32_t)(0x111d16b0), (EAX));
  /* 111a5bb0 mov ecx, dword ptr [0x111d16b0] */
  ECX = (r32((uint32_t)(0x111d16b0)));
  /* 111a5bb6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5bb9 mov dword ptr [0x111d16b0], ecx */
  w32((uint32_t)(0x111d16b0), (ECX));
  /* 111a5bbf mov edx, dword ptr [0x111d16b0] */
  EDX = (r32((uint32_t)(0x111d16b0)));
  /* 111a5bc5 cmp edx, dword ptr [0x111d16b4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111d16b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5bcb jbe 0x111a5bd7 */
  if ((C.cf||C.zf)) goto L_111a5bd7;
  /* 111a5bcd mov eax, dword ptr [0x111d16b0] */
  EAX = (r32((uint32_t)(0x111d16b0)));
  /* 111a5bd2 mov dword ptr [0x111d16b4], eax */
  w32((uint32_t)(0x111d16b4), (EAX));
L_111a5bd7:;
  /* 111a5bd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5bda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5bdd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a5be0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5be6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5be9 jbe 0x111a5c0f */
  if ((C.cf||C.zf)) goto L_111a5c0f;
  /* 111a5beb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5bee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5bf1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a5bf4 push edx */
  push32((uint32_t)(EDX));
  /* 111a5bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5bf7 mov al, byte ptr [0x111cfa92] */
  AL = (r8((uint32_t)(0x111cfa92)));
  /* 111a5bfc push eax */
  push32((uint32_t)(EAX));
  /* 111a5bfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5c00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5c03 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5c06 push edx */
  push32((uint32_t)(EDX));
  /* 111a5c07 call 0x111a9120 */
  push32(0x111a5c0cu); f_111a9120();
  /* 111a5c0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a5c0f:;
  /* 111a5c0f push 4 */
  push32((uint32_t)(0x4u));
  /* 111a5c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5c13 mov al, byte ptr [0x111cfa90] */
  AL = (r8((uint32_t)(0x111cfa90)));
  /* 111a5c18 push eax */
  push32((uint32_t)(EAX));
  /* 111a5c19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5c1c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5c1f push ecx */
  push32((uint32_t)(ECX));
  /* 111a5c20 call 0x111a9120 */
  push32(0x111a5c25u); f_111a9120();
  /* 111a5c25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5c28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5c2c jne 0x111a5c49 */
  if (!C.zf) goto L_111a5c49;
  /* 111a5c2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5c31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a5c34 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111a5c37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5c3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a5c3d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 111a5c40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5c43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a5c46 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_111a5c49:;
  /* 111a5c49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5c4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5c4f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_111a5c52:;
  /* 111a5c52 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5c56 jne 0x111a5c87 */
  if (!C.zf) goto L_111a5c87;
  /* 111a5c58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5c5c jne 0x111a5c66 */
  if (!C.zf) goto L_111a5c66;
  /* 111a5c5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5c61 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5c64 je 0x111a5c87 */
  if (C.zf) goto L_111a5c87;
L_111a5c66:;
  /* 111a5c66 push 0x111cc7ec */
  push32((uint32_t)(0x111cc7ecu));
  /* 111a5c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5c6d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 111a5c72 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5c79 call 0x111a4470 */
  push32(0x111a5c7eu); f_111a4470();
  /* 111a5c7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5c81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5c84 jne 0x111a5c87 */
  if (!C.zf) goto L_111a5c87;
  /* 111a5c86 int3  */
  x86_unimpl("int3 @ 0x111a5c86");
L_111a5c87:;
  /* 111a5c87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a5c89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a5c8b jne 0x111a5c52 */
  if (!C.zf) goto L_111a5c52;
  /* 111a5c8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5c90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5c93 je 0x111a5c9b */
  if (C.zf) goto L_111a5c9b;
  /* 111a5c95 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5c99 je 0x111a5ca3 */
  if (C.zf) goto L_111a5ca3;
L_111a5c9b:;
  /* 111a5c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5c9e jmp 0x111a5d8a */
  goto L_111a5d8a;
L_111a5ca3:;
  /* 111a5ca3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5ca6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5ca9 je 0x111a5cbb */
  if (C.zf) goto L_111a5cbb;
  /* 111a5cab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5cae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a5cb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5cb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a5cb6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 111a5cb9 jmp 0x111a5cf7 */
  goto L_111a5cf7;
L_111a5cbb:;
  /* 111a5cbb mov eax, dword ptr [0x111d16a4] */
  EAX = (r32((uint32_t)(0x111d16a4)));
  /* 111a5cc0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5cc3 je 0x111a5ce6 */
  if (C.zf) goto L_111a5ce6;
  /* 111a5cc5 push 0x111cc7d0 */
  push32((uint32_t)(0x111cc7d0u));
  /* 111a5cca push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5ccc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 111a5cd1 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5cd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5cd8 call 0x111a4470 */
  push32(0x111a5cddu); f_111a4470();
  /* 111a5cdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5ce0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5ce3 jne 0x111a5ce6 */
  if (!C.zf) goto L_111a5ce6;
  /* 111a5ce5 int3  */
  x86_unimpl("int3 @ 0x111a5ce5");
L_111a5ce6:;
  /* 111a5ce6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a5ce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a5cea jne 0x111a5cbb */
  if (!C.zf) goto L_111a5cbb;
  /* 111a5cec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5cef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111a5cf2 mov dword ptr [0x111d16a4], eax */
  w32((uint32_t)(0x111d16a4), (EAX));
L_111a5cf7:;
  /* 111a5cf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5cfa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5cfe je 0x111a5d0f */
  if (C.zf) goto L_111a5d0f;
  /* 111a5d00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5d03 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111a5d06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5d09 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a5d0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111a5d0d jmp 0x111a5d4a */
  goto L_111a5d4a;
L_111a5d0f:;
  /* 111a5d0f mov eax, dword ptr [0x111d16ac] */
  EAX = (r32((uint32_t)(0x111d16ac)));
  /* 111a5d14 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5d17 je 0x111a5d3a */
  if (C.zf) goto L_111a5d3a;
  /* 111a5d19 push 0x111cc7b4 */
  push32((uint32_t)(0x111cc7b4u));
  /* 111a5d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5d20 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 111a5d25 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5d2a push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5d2c call 0x111a4470 */
  push32(0x111a5d31u); f_111a4470();
  /* 111a5d31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5d34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5d37 jne 0x111a5d3a */
  if (!C.zf) goto L_111a5d3a;
  /* 111a5d39 int3  */
  x86_unimpl("int3 @ 0x111a5d39");
L_111a5d3a:;
  /* 111a5d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a5d3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a5d3e jne 0x111a5d0f */
  if (!C.zf) goto L_111a5d0f;
  /* 111a5d40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5d43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a5d45 mov dword ptr [0x111d16ac], eax */
  w32((uint32_t)(0x111d16ac), (EAX));
L_111a5d4a:;
  /* 111a5d4a cmp dword ptr [0x111d16ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d16ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5d51 je 0x111a5d61 */
  if (C.zf) goto L_111a5d61;
  /* 111a5d53 mov ecx, dword ptr [0x111d16ac] */
  ECX = (r32((uint32_t)(0x111d16ac)));
  /* 111a5d59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5d5c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111a5d5f jmp 0x111a5d69 */
  goto L_111a5d69;
L_111a5d61:;
  /* 111a5d61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5d64 mov dword ptr [0x111d16a4], eax */
  w32((uint32_t)(0x111d16a4), (EAX));
L_111a5d69:;
  /* 111a5d69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5d6c mov edx, dword ptr [0x111d16ac] */
  EDX = (r32((uint32_t)(0x111d16ac)));
  /* 111a5d72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111a5d74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5d77 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 111a5d7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a5d81 mov dword ptr [0x111d16ac], ecx */
  w32((uint32_t)(0x111d16ac), (ECX));
  /* 111a5d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111a5d8a:;
  /* 111a5d8a pop edi */
  EDI = (pop32());
  /* 111a5d8b pop esi */
  ESI = (pop32());
  /* 111a5d8c pop ebx */
  EBX = (pop32());
  /* 111a5d8d mov esp, ebp */
  ESP = (EBP);
  /* 111a5d8f pop ebp */
  EBP = (pop32());
  /* 111a5d90 ret  */
  ESPCHK(0x111a5880u, _esp0);
  ESP += 4; return;
}

/* FUN_10005da0 @ 0x111a5da0 (27 bytes, 13 insns) */
void f_111a5da0(void) {
  FTRACE(0x111a5da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5da0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5da1 mov ebp, esp */
  EBP = (ESP);
  /* 111a5da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5da7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5da9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5dac push eax */
  push32((uint32_t)(EAX));
  /* 111a5dad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5db0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5db1 call 0x111a5dc0 */
  push32(0x111a5db6u); f_111a5dc0();
  /* 111a5db6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5db9 pop ebp */
  EBP = (pop32());
  /* 111a5dba ret  */
  ESPCHK(0x111a5da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dc0 @ 0x111a5dc0 (64 bytes, 27 insns) */
void f_111a5dc0(void) {
  FTRACE(0x111a5dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5dc1 mov ebp, esp */
  EBP = (ESP);
  /* 111a5dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5dc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a5dc6 call 0x111a8db0 */
  push32(0x111a5dcbu); f_111a8db0();
  /* 111a5dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5dce push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5dd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a5dd3 push eax */
  push32((uint32_t)(EAX));
  /* 111a5dd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a5dd7 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5dd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a5ddb push edx */
  push32((uint32_t)(EDX));
  /* 111a5ddc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5ddf push eax */
  push32((uint32_t)(EAX));
  /* 111a5de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5de3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5de4 call 0x111a5880 */
  push32(0x111a5de9u); f_111a5880();
  /* 111a5de9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5dec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a5def push 9 */
  push32((uint32_t)(0x9u));
  /* 111a5df1 call 0x111a8e50 */
  push32(0x111a5df6u); f_111a8e50();
  /* 111a5df6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5df9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5dfc mov esp, ebp */
  ESP = (EBP);
  /* 111a5dfe pop ebp */
  EBP = (pop32());
  /* 111a5dff ret  */
  ESPCHK(0x111a5dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e00 @ 0x111a5e00 (19 bytes, 9 insns) */
void f_111a5e00(void) {
  FTRACE(0x111a5e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5e00 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5e01 mov ebp, esp */
  EBP = (ESP);
  /* 111a5e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5e08 push eax */
  push32((uint32_t)(EAX));
  /* 111a5e09 call 0x111a5e40 */
  push32(0x111a5e0eu); f_111a5e40();
  /* 111a5e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5e11 pop ebp */
  EBP = (pop32());
  /* 111a5e12 ret  */
  ESPCHK(0x111a5e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e20 @ 0x111a5e20 (19 bytes, 9 insns) */
void f_111a5e20(void) {
  FTRACE(0x111a5e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5e20 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5e21 mov ebp, esp */
  EBP = (ESP);
  /* 111a5e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5e25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5e28 push eax */
  push32((uint32_t)(EAX));
  /* 111a5e29 call 0x111a5e70 */
  push32(0x111a5e2eu); f_111a5e70();
  /* 111a5e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5e31 pop ebp */
  EBP = (pop32());
  /* 111a5e32 ret  */
  ESPCHK(0x111a5e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e40 @ 0x111a5e40 (41 bytes, 16 insns) */
void f_111a5e40(void) {
  FTRACE(0x111a5e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5e40 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5e41 mov ebp, esp */
  EBP = (ESP);
  /* 111a5e43 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a5e45 call 0x111a8db0 */
  push32(0x111a5e4au); f_111a8db0();
  /* 111a5e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5e4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5e50 push eax */
  push32((uint32_t)(EAX));
  /* 111a5e51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5e54 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5e55 call 0x111a5e70 */
  push32(0x111a5e5au); f_111a5e70();
  /* 111a5e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5e5d push 9 */
  push32((uint32_t)(0x9u));
  /* 111a5e5f call 0x111a8e50 */
  push32(0x111a5e64u); f_111a8e50();
  /* 111a5e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5e67 pop ebp */
  EBP = (pop32());
  /* 111a5e68 ret  */
  ESPCHK(0x111a5e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e70 @ 0x111a5e70 (1004 bytes, 342 insns) */
void f_111a5e70(void) {
  FTRACE(0x111a5e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a5e70 push ebp */
  push32((uint32_t)(EBP));
  /* 111a5e71 mov ebp, esp */
  EBP = (ESP);
  /* 111a5e73 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5e74 push ebx */
  push32((uint32_t)(EBX));
  /* 111a5e75 push esi */
  push32((uint32_t)(ESI));
  /* 111a5e76 push edi */
  push32((uint32_t)(EDI));
  /* 111a5e77 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a5e7c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111a5e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5e81 je 0x111a5eb3 */
  if (C.zf) goto L_111a5eb3;
L_111a5e83:;
  /* 111a5e83 call 0x111a6550 */
  push32(0x111a5e88u); f_111a6550();
  /* 111a5e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5e8a jne 0x111a5ead */
  if (!C.zf) goto L_111a5ead;
  /* 111a5e8c push 0x111cc7a0 */
  push32((uint32_t)(0x111cc7a0u));
  /* 111a5e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5e93 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 111a5e98 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5e9f call 0x111a4470 */
  push32(0x111a5ea4u); f_111a4470();
  /* 111a5ea4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5ea7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5eaa jne 0x111a5ead */
  if (!C.zf) goto L_111a5ead;
  /* 111a5eac int3  */
  x86_unimpl("int3 @ 0x111a5eac");
L_111a5ead:;
  /* 111a5ead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a5eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a5eb1 jne 0x111a5e83 */
  if (!C.zf) goto L_111a5e83;
L_111a5eb3:;
  /* 111a5eb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5eb7 jne 0x111a5ebe */
  if (!C.zf) goto L_111a5ebe;
  /* 111a5eb9 jmp 0x111a6255 */
  goto L_111a6255;
L_111a5ebe:;
  /* 111a5ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5ec4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a5ec7 push edx */
  push32((uint32_t)(EDX));
  /* 111a5ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5ecd push eax */
  push32((uint32_t)(EAX));
  /* 111a5ece push 3 */
  push32((uint32_t)(0x3u));
  /* 111a5ed0 call dword ptr [0x111cfc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x111cfc90))), 0x111a5ed6u);
  /* 111a5ed6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5edb jne 0x111a5f08 */
  if (!C.zf) goto L_111a5f08;
L_111a5edd:;
  /* 111a5edd push 0x111cca64 */
  push32((uint32_t)(0x111cca64u));
  /* 111a5ee2 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a5ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5eed push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5eef call 0x111a4470 */
  push32(0x111a5ef4u); f_111a4470();
  /* 111a5ef4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5ef7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5efa jne 0x111a5efd */
  if (!C.zf) goto L_111a5efd;
  /* 111a5efc int3  */
  x86_unimpl("int3 @ 0x111a5efc");
L_111a5efd:;
  /* 111a5efd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a5eff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a5f01 jne 0x111a5edd */
  if (!C.zf) goto L_111a5edd;
  /* 111a5f03 jmp 0x111a6255 */
  goto L_111a6255;
L_111a5f08:;
  /* 111a5f08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5f0b push edx */
  push32((uint32_t)(EDX));
  /* 111a5f0c call 0x111a69b0 */
  push32(0x111a5f11u); f_111a69b0();
  /* 111a5f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5f16 jne 0x111a5f39 */
  if (!C.zf) goto L_111a5f39;
  /* 111a5f18 push 0x111cc8a4 */
  push32((uint32_t)(0x111cc8a4u));
  /* 111a5f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5f1f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 111a5f24 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5f29 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5f2b call 0x111a4470 */
  push32(0x111a5f30u); f_111a4470();
  /* 111a5f30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5f33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5f36 jne 0x111a5f39 */
  if (!C.zf) goto L_111a5f39;
  /* 111a5f38 int3  */
  x86_unimpl("int3 @ 0x111a5f38");
L_111a5f39:;
  /* 111a5f39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a5f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5f3d jne 0x111a5f08 */
  if (!C.zf) goto L_111a5f08;
  /* 111a5f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a5f42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a5f45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a5f48:;
  /* 111a5f48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5f4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a5f4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a5f53 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5f56 je 0x111a5f9b */
  if (C.zf) goto L_111a5f9b;
  /* 111a5f58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5f5b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5f5f je 0x111a5f9b */
  if (C.zf) goto L_111a5f9b;
  /* 111a5f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5f64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a5f67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a5f6c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5f6f je 0x111a5f9b */
  if (C.zf) goto L_111a5f9b;
  /* 111a5f71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5f74 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5f78 je 0x111a5f9b */
  if (C.zf) goto L_111a5f9b;
  /* 111a5f7a push 0x111cca3c */
  push32((uint32_t)(0x111cca3cu));
  /* 111a5f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5f81 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 111a5f86 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a5f8b push 2 */
  push32((uint32_t)(0x2u));
  /* 111a5f8d call 0x111a4470 */
  push32(0x111a5f92u); f_111a4470();
  /* 111a5f92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5f95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a5f98 jne 0x111a5f9b */
  if (!C.zf) goto L_111a5f9b;
  /* 111a5f9a int3  */
  x86_unimpl("int3 @ 0x111a5f9a");
L_111a5f9b:;
  /* 111a5f9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a5f9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a5f9f jne 0x111a5f48 */
  if (!C.zf) goto L_111a5f48;
  /* 111a5fa1 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a5fa6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111a5fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5fab jne 0x111a6076 */
  if (!C.zf) goto L_111a6076;
  /* 111a5fb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a5fb3 mov cl, byte ptr [0x111cfa90] */
  CL = (r8((uint32_t)(0x111cfa90)));
  /* 111a5fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 111a5fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5fbd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5fc0 push edx */
  push32((uint32_t)(EDX));
  /* 111a5fc1 call 0x111a64c0 */
  push32(0x111a5fc6u); f_111a64c0();
  /* 111a5fc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a5fcb jne 0x111a6010 */
  if (!C.zf) goto L_111a6010;
L_111a5fcd:;
  /* 111a5fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5fd0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a5fd3 push eax */
  push32((uint32_t)(EAX));
  /* 111a5fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5fd7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111a5fda push edx */
  push32((uint32_t)(EDX));
  /* 111a5fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a5fde mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111a5fe1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a5fe7 mov edx, dword ptr [ecx*4 + 0x111cfa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfa94)));
  /* 111a5fee push edx */
  push32((uint32_t)(EDX));
  /* 111a5fef push 0x111cca10 */
  push32((uint32_t)(0x111cca10u));
  /* 111a5ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a5ffa push 1 */
  push32((uint32_t)(0x1u));
  /* 111a5ffc call 0x111a4470 */
  push32(0x111a6001u); f_111a4470();
  /* 111a6001 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6004 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6007 jne 0x111a600a */
  if (!C.zf) goto L_111a600a;
  /* 111a6009 int3  */
  x86_unimpl("int3 @ 0x111a6009");
L_111a600a:;
  /* 111a600a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a600c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a600e jne 0x111a5fcd */
  if (!C.zf) goto L_111a5fcd;
L_111a6010:;
  /* 111a6010 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a6012 mov cl, byte ptr [0x111cfa90] */
  CL = (r8((uint32_t)(0x111cfa90)));
  /* 111a6018 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a601c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a601f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6022 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 111a6026 push edx */
  push32((uint32_t)(EDX));
  /* 111a6027 call 0x111a64c0 */
  push32(0x111a602cu); f_111a64c0();
  /* 111a602c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a602f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6031 jne 0x111a6076 */
  if (!C.zf) goto L_111a6076;
L_111a6033:;
  /* 111a6033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6036 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6039 push eax */
  push32((uint32_t)(EAX));
  /* 111a603a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a603d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111a6040 push edx */
  push32((uint32_t)(EDX));
  /* 111a6041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6044 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111a6047 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a604d mov edx, dword ptr [ecx*4 + 0x111cfa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfa94)));
  /* 111a6054 push edx */
  push32((uint32_t)(EDX));
  /* 111a6055 push 0x111cc9e4 */
  push32((uint32_t)(0x111cc9e4u));
  /* 111a605a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a605c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a605e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6060 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a6062 call 0x111a4470 */
  push32(0x111a6067u); f_111a4470();
  /* 111a6067 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a606a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a606d jne 0x111a6070 */
  if (!C.zf) goto L_111a6070;
  /* 111a606f int3  */
  x86_unimpl("int3 @ 0x111a606f");
L_111a6070:;
  /* 111a6070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6074 jne 0x111a6033 */
  if (!C.zf) goto L_111a6033;
L_111a6076:;
  /* 111a6076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6079 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a607d jne 0x111a60eb */
  if (!C.zf) goto L_111a60eb;
L_111a607f:;
  /* 111a607f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6082 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6089 jne 0x111a6094 */
  if (!C.zf) goto L_111a6094;
  /* 111a608b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a608e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6092 je 0x111a60b5 */
  if (C.zf) goto L_111a60b5;
L_111a6094:;
  /* 111a6094 push 0x111cc9a4 */
  push32((uint32_t)(0x111cc9a4u));
  /* 111a6099 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a609b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 111a60a0 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a60a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a60a7 call 0x111a4470 */
  push32(0x111a60acu); f_111a4470();
  /* 111a60ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a60af cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a60b2 jne 0x111a60b5 */
  if (!C.zf) goto L_111a60b5;
  /* 111a60b4 int3  */
  x86_unimpl("int3 @ 0x111a60b4");
L_111a60b5:;
  /* 111a60b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a60b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a60b9 jne 0x111a607f */
  if (!C.zf) goto L_111a607f;
  /* 111a60bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a60be mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a60c1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a60c4 push eax */
  push32((uint32_t)(EAX));
  /* 111a60c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a60c7 mov cl, byte ptr [0x111cfa91] */
  CL = (r8((uint32_t)(0x111cfa91)));
  /* 111a60cd push ecx */
  push32((uint32_t)(ECX));
  /* 111a60ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a60d1 push edx */
  push32((uint32_t)(EDX));
  /* 111a60d2 call 0x111a9120 */
  push32(0x111a60d7u); f_111a9120();
  /* 111a60d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a60da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a60dd push eax */
  push32((uint32_t)(EAX));
  /* 111a60de call 0x111a9520 */
  push32(0x111a60e3u); f_111a9520();
  /* 111a60e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a60e6 jmp 0x111a6255 */
  goto L_111a6255;
L_111a60eb:;
  /* 111a60eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a60ee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a60f2 jne 0x111a6101 */
  if (!C.zf) goto L_111a6101;
  /* 111a60f4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a60f8 jne 0x111a6101 */
  if (!C.zf) goto L_111a6101;
  /* 111a60fa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_111a6101:;
  /* 111a6101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6104 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6107 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a610a je 0x111a612d */
  if (C.zf) goto L_111a612d;
  /* 111a610c push 0x111cc984 */
  push32((uint32_t)(0x111cc984u));
  /* 111a6111 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6113 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 111a6118 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a611d push 2 */
  push32((uint32_t)(0x2u));
  /* 111a611f call 0x111a4470 */
  push32(0x111a6124u); f_111a4470();
  /* 111a6124 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6127 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a612a jne 0x111a612d */
  if (!C.zf) goto L_111a612d;
  /* 111a612c int3  */
  x86_unimpl("int3 @ 0x111a612c");
L_111a612d:;
  /* 111a612d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a612f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a6131 jne 0x111a6101 */
  if (!C.zf) goto L_111a6101;
  /* 111a6133 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6136 mov eax, dword ptr [0x111d16b0] */
  EAX = (r32((uint32_t)(0x111d16b0)));
  /* 111a613b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a613e mov dword ptr [0x111d16b0], eax */
  w32((uint32_t)(0x111d16b0), (EAX));
  /* 111a6143 mov ecx, dword ptr [0x111cfa84] */
  ECX = (r32((uint32_t)(0x111cfa84)));
  /* 111a6149 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 111a614c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a614e jne 0x111a622c */
  if (!C.zf) goto L_111a622c;
  /* 111a6154 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6157 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a615a je 0x111a616c */
  if (C.zf) goto L_111a616c;
  /* 111a615c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a615f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a6161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6164 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111a6167 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111a616a jmp 0x111a61aa */
  goto L_111a61aa;
L_111a616c:;
  /* 111a616c mov ecx, dword ptr [0x111d16a4] */
  ECX = (r32((uint32_t)(0x111d16a4)));
  /* 111a6172 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6175 je 0x111a6198 */
  if (C.zf) goto L_111a6198;
  /* 111a6177 push 0x111cc96c */
  push32((uint32_t)(0x111cc96cu));
  /* 111a617c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a617e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 111a6183 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a6188 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a618a call 0x111a4470 */
  push32(0x111a618fu); f_111a4470();
  /* 111a618f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6192 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6195 jne 0x111a6198 */
  if (!C.zf) goto L_111a6198;
  /* 111a6197 int3  */
  x86_unimpl("int3 @ 0x111a6197");
L_111a6198:;
  /* 111a6198 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a619a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a619c jne 0x111a616c */
  if (!C.zf) goto L_111a616c;
  /* 111a619e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a61a1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a61a4 mov dword ptr [0x111d16a4], ecx */
  w32((uint32_t)(0x111d16a4), (ECX));
L_111a61aa:;
  /* 111a61aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a61ad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a61b1 je 0x111a61c2 */
  if (C.zf) goto L_111a61c2;
  /* 111a61b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a61b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a61b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a61bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a61be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111a61c0 jmp 0x111a61ff */
  goto L_111a61ff;
L_111a61c2:;
  /* 111a61c2 mov ecx, dword ptr [0x111d16ac] */
  ECX = (r32((uint32_t)(0x111d16ac)));
  /* 111a61c8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a61cb je 0x111a61ee */
  if (C.zf) goto L_111a61ee;
  /* 111a61cd push 0x111cc954 */
  push32((uint32_t)(0x111cc954u));
  /* 111a61d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a61d4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 111a61d9 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a61de push 2 */
  push32((uint32_t)(0x2u));
  /* 111a61e0 call 0x111a4470 */
  push32(0x111a61e5u); f_111a4470();
  /* 111a61e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a61e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a61eb jne 0x111a61ee */
  if (!C.zf) goto L_111a61ee;
  /* 111a61ed int3  */
  x86_unimpl("int3 @ 0x111a61ed");
L_111a61ee:;
  /* 111a61ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a61f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a61f2 jne 0x111a61c2 */
  if (!C.zf) goto L_111a61c2;
  /* 111a61f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a61f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a61f9 mov dword ptr [0x111d16ac], ecx */
  w32((uint32_t)(0x111d16ac), (ECX));
L_111a61ff:;
  /* 111a61ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6202 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a6205 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6208 push eax */
  push32((uint32_t)(EAX));
  /* 111a6209 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a620b mov cl, byte ptr [0x111cfa91] */
  CL = (r8((uint32_t)(0x111cfa91)));
  /* 111a6211 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6215 push edx */
  push32((uint32_t)(EDX));
  /* 111a6216 call 0x111a9120 */
  push32(0x111a621bu); f_111a9120();
  /* 111a621b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a621e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6221 push eax */
  push32((uint32_t)(EAX));
  /* 111a6222 call 0x111a9520 */
  push32(0x111a6227u); f_111a9520();
  /* 111a6227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a622a jmp 0x111a6255 */
  goto L_111a6255;
L_111a622c:;
  /* 111a622c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a622f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 111a6236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6239 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a623c push eax */
  push32((uint32_t)(EAX));
  /* 111a623d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a623f mov cl, byte ptr [0x111cfa91] */
  CL = (r8((uint32_t)(0x111cfa91)));
  /* 111a6245 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6246 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6249 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a624c push edx */
  push32((uint32_t)(EDX));
  /* 111a624d call 0x111a9120 */
  push32(0x111a6252u); f_111a9120();
  /* 111a6252 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a6255:;
  /* 111a6255 pop edi */
  EDI = (pop32());
  /* 111a6256 pop esi */
  ESI = (pop32());
  /* 111a6257 pop ebx */
  EBX = (pop32());
  /* 111a6258 mov esp, ebp */
  ESP = (EBP);
  /* 111a625a pop ebp */
  EBP = (pop32());
  /* 111a625b ret  */
  ESPCHK(0x111a5e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006260 @ 0x111a6260 (19 bytes, 9 insns) */
void f_111a6260(void) {
  FTRACE(0x111a6260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6260 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6261 mov ebp, esp */
  EBP = (ESP);
  /* 111a6263 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a6265 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6268 push eax */
  push32((uint32_t)(EAX));
  /* 111a6269 call 0x111a6280 */
  push32(0x111a626eu); f_111a6280();
  /* 111a626e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6271 pop ebp */
  EBP = (pop32());
  /* 111a6272 ret  */
  ESPCHK(0x111a6260u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x111a6280 (342 bytes, 119 insns) */
void f_111a6280(void) {
  FTRACE(0x111a6280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6280 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6281 mov ebp, esp */
  EBP = (ESP);
  /* 111a6283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6286 push ebx */
  push32((uint32_t)(EBX));
  /* 111a6287 push esi */
  push32((uint32_t)(ESI));
  /* 111a6288 push edi */
  push32((uint32_t)(EDI));
  /* 111a6289 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a628e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111a6291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6293 je 0x111a62c5 */
  if (C.zf) goto L_111a62c5;
L_111a6295:;
  /* 111a6295 call 0x111a6550 */
  push32(0x111a629au); f_111a6550();
  /* 111a629a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a629c jne 0x111a62bf */
  if (!C.zf) goto L_111a62bf;
  /* 111a629e push 0x111cc7a0 */
  push32((uint32_t)(0x111cc7a0u));
  /* 111a62a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a62a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 111a62aa push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a62af push 2 */
  push32((uint32_t)(0x2u));
  /* 111a62b1 call 0x111a4470 */
  push32(0x111a62b6u); f_111a4470();
  /* 111a62b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a62b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a62bc jne 0x111a62bf */
  if (!C.zf) goto L_111a62bf;
  /* 111a62be int3  */
  x86_unimpl("int3 @ 0x111a62be");
L_111a62bf:;
  /* 111a62bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a62c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a62c3 jne 0x111a6295 */
  if (!C.zf) goto L_111a6295;
L_111a62c5:;
  /* 111a62c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a62c7 call 0x111a8db0 */
  push32(0x111a62ccu); f_111a8db0();
  /* 111a62cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a62cf:;
  /* 111a62cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a62d2 push edx */
  push32((uint32_t)(EDX));
  /* 111a62d3 call 0x111a69b0 */
  push32(0x111a62d8u); f_111a69b0();
  /* 111a62d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a62db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a62dd jne 0x111a6300 */
  if (!C.zf) goto L_111a6300;
  /* 111a62df push 0x111cc8a4 */
  push32((uint32_t)(0x111cc8a4u));
  /* 111a62e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a62e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 111a62eb push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a62f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a62f2 call 0x111a4470 */
  push32(0x111a62f7u); f_111a4470();
  /* 111a62f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a62fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a62fd jne 0x111a6300 */
  if (!C.zf) goto L_111a6300;
  /* 111a62ff int3  */
  x86_unimpl("int3 @ 0x111a62ff");
L_111a6300:;
  /* 111a6300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6304 jne 0x111a62cf */
  if (!C.zf) goto L_111a62cf;
  /* 111a6306 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6309 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a630c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111a630f:;
  /* 111a630f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6312 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6315 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a631a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a631d je 0x111a6362 */
  if (C.zf) goto L_111a6362;
  /* 111a631f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6322 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6326 je 0x111a6362 */
  if (C.zf) goto L_111a6362;
  /* 111a6328 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a632b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a632e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6333 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6336 je 0x111a6362 */
  if (C.zf) goto L_111a6362;
  /* 111a6338 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a633b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a633f je 0x111a6362 */
  if (C.zf) goto L_111a6362;
  /* 111a6341 push 0x111cca3c */
  push32((uint32_t)(0x111cca3cu));
  /* 111a6346 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6348 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 111a634d push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a6352 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a6354 call 0x111a4470 */
  push32(0x111a6359u); f_111a4470();
  /* 111a6359 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a635c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a635f jne 0x111a6362 */
  if (!C.zf) goto L_111a6362;
  /* 111a6361 int3  */
  x86_unimpl("int3 @ 0x111a6361");
L_111a6362:;
  /* 111a6362 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a6364 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a6366 jne 0x111a630f */
  if (!C.zf) goto L_111a630f;
  /* 111a6368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a636b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a636f jne 0x111a637e */
  if (!C.zf) goto L_111a637e;
  /* 111a6371 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6375 jne 0x111a637e */
  if (!C.zf) goto L_111a637e;
  /* 111a6377 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_111a637e:;
  /* 111a637e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6381 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6385 je 0x111a63b9 */
  if (C.zf) goto L_111a63b9;
L_111a6387:;
  /* 111a6387 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a638a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a638d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6390 je 0x111a63b3 */
  if (C.zf) goto L_111a63b3;
  /* 111a6392 push 0x111cc984 */
  push32((uint32_t)(0x111cc984u));
  /* 111a6397 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6399 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 111a639e push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a63a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a63a5 call 0x111a4470 */
  push32(0x111a63aau); f_111a4470();
  /* 111a63aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a63ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a63b0 jne 0x111a63b3 */
  if (!C.zf) goto L_111a63b3;
  /* 111a63b2 int3  */
  x86_unimpl("int3 @ 0x111a63b2");
L_111a63b3:;
  /* 111a63b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a63b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a63b7 jne 0x111a6387 */
  if (!C.zf) goto L_111a6387;
L_111a63b9:;
  /* 111a63b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a63bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a63bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a63c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a63c4 call 0x111a8e50 */
  push32(0x111a63c9u); f_111a8e50();
  /* 111a63c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a63cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a63cf pop edi */
  EDI = (pop32());
  /* 111a63d0 pop esi */
  ESI = (pop32());
  /* 111a63d1 pop ebx */
  EBX = (pop32());
  /* 111a63d2 mov esp, ebp */
  ESP = (EBP);
  /* 111a63d4 pop ebp */
  EBP = (pop32());
  /* 111a63d5 ret  */
  ESPCHK(0x111a6280u, _esp0);
  ESP += 4; return;
}

/* FUN_100063e0 @ 0x111a63e0 (28 bytes, 11 insns) */
void f_111a63e0(void) {
  FTRACE(0x111a63e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a63e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a63e1 mov ebp, esp */
  EBP = (ESP);
  /* 111a63e3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a63e4 mov eax, dword ptr [0x111cfa8c] */
  EAX = (r32((uint32_t)(0x111cfa8c)));
  /* 111a63e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a63ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a63ef mov dword ptr [0x111cfa8c], ecx */
  w32((uint32_t)(0x111cfa8c), (ECX));
  /* 111a63f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a63f8 mov esp, ebp */
  ESP = (EBP);
  /* 111a63fa pop ebp */
  EBP = (pop32());
  /* 111a63fb ret  */
  ESPCHK(0x111a63e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006400 @ 0x111a6400 (157 bytes, 59 insns) */
void f_111a6400(void) {
  FTRACE(0x111a6400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6400 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6401 mov ebp, esp */
  EBP = (ESP);
  /* 111a6403 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6404 push ebx */
  push32((uint32_t)(EBX));
  /* 111a6405 push esi */
  push32((uint32_t)(ESI));
  /* 111a6406 push edi */
  push32((uint32_t)(EDI));
  /* 111a6407 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6409 call 0x111a8db0 */
  push32(0x111a640eu); f_111a8db0();
  /* 111a640e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6414 push eax */
  push32((uint32_t)(EAX));
  /* 111a6415 call 0x111a69b0 */
  push32(0x111a641au); f_111a69b0();
  /* 111a641a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a641d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a641f je 0x111a648c */
  if (C.zf) goto L_111a648c;
  /* 111a6421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6424 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6427 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a642a:;
  /* 111a642a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a642d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6430 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6435 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6438 je 0x111a647d */
  if (C.zf) goto L_111a647d;
  /* 111a643a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a643d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6441 je 0x111a647d */
  if (C.zf) goto L_111a647d;
  /* 111a6443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6446 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6449 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a644e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6451 je 0x111a647d */
  if (C.zf) goto L_111a647d;
  /* 111a6453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6456 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a645a je 0x111a647d */
  if (C.zf) goto L_111a647d;
  /* 111a645c push 0x111cca3c */
  push32((uint32_t)(0x111cca3cu));
  /* 111a6461 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6463 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 111a6468 push 0x111cc794 */
  push32((uint32_t)(0x111cc794u));
  /* 111a646d push 2 */
  push32((uint32_t)(0x2u));
  /* 111a646f call 0x111a4470 */
  push32(0x111a6474u); f_111a4470();
  /* 111a6474 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6477 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a647a jne 0x111a647d */
  if (!C.zf) goto L_111a647d;
  /* 111a647c int3  */
  x86_unimpl("int3 @ 0x111a647c");
L_111a647d:;
  /* 111a647d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a647f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a6481 jne 0x111a642a */
  if (!C.zf) goto L_111a642a;
  /* 111a6483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6486 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a6489 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_111a648c:;
  /* 111a648c push 9 */
  push32((uint32_t)(0x9u));
  /* 111a648e call 0x111a8e50 */
  push32(0x111a6493u); f_111a8e50();
  /* 111a6493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6496 pop edi */
  EDI = (pop32());
  /* 111a6497 pop esi */
  ESI = (pop32());
  /* 111a6498 pop ebx */
  EBX = (pop32());
  /* 111a6499 mov esp, ebp */
  ESP = (EBP);
  /* 111a649b pop ebp */
  EBP = (pop32());
  /* 111a649c ret  */
  ESPCHK(0x111a6400u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x111a64a0 (28 bytes, 11 insns) */
void f_111a64a0(void) {
  FTRACE(0x111a64a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a64a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a64a1 mov ebp, esp */
  EBP = (ESP);
  /* 111a64a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a64a4 mov eax, dword ptr [0x111cfc90] */
  EAX = (r32((uint32_t)(0x111cfc90)));
  /* 111a64a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a64ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a64af mov dword ptr [0x111cfc90], ecx */
  w32((uint32_t)(0x111cfc90), (ECX));
  /* 111a64b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a64b8 mov esp, ebp */
  ESP = (EBP);
  /* 111a64ba pop ebp */
  EBP = (pop32());
  /* 111a64bb ret  */
  ESPCHK(0x111a64a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c0 @ 0x111a64c0 (136 bytes, 55 insns) */
void f_111a64c0(void) {
  FTRACE(0x111a64c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a64c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a64c1 mov ebp, esp */
  EBP = (ESP);
  /* 111a64c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a64c4 push ebx */
  push32((uint32_t)(EBX));
  /* 111a64c5 push esi */
  push32((uint32_t)(ESI));
  /* 111a64c6 push edi */
  push32((uint32_t)(EDI));
  /* 111a64c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_111a64ce:;
  /* 111a64ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a64d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a64d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a64d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111a64da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a64dc je 0x111a653e */
  if (C.zf) goto L_111a653e;
  /* 111a64de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a64e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a64e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111a64e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a64e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a64ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a64f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a64f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111a64f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a64f9 je 0x111a653c */
  if (C.zf) goto L_111a653c;
L_111a64fb:;
  /* 111a64fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a64fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6503 push eax */
  push32((uint32_t)(EAX));
  /* 111a6504 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6507 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a6509 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 111a650c push edx */
  push32((uint32_t)(EDX));
  /* 111a650d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6510 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6513 push eax */
  push32((uint32_t)(EAX));
  /* 111a6514 push 0x111cca80 */
  push32((uint32_t)(0x111cca80u));
  /* 111a6519 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a651b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a651d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a651f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6521 call 0x111a4470 */
  push32(0x111a6526u); f_111a4470();
  /* 111a6526 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6529 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a652c jne 0x111a652f */
  if (!C.zf) goto L_111a652f;
  /* 111a652e int3  */
  x86_unimpl("int3 @ 0x111a652e");
L_111a652f:;
  /* 111a652f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a6531 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a6533 jne 0x111a64fb */
  if (!C.zf) goto L_111a64fb;
  /* 111a6535 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111a653c:;
  /* 111a653c jmp 0x111a64ce */
  goto L_111a64ce;
L_111a653e:;
  /* 111a653e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6541 pop edi */
  EDI = (pop32());
  /* 111a6542 pop esi */
  ESI = (pop32());
  /* 111a6543 pop ebx */
  EBX = (pop32());
  /* 111a6544 mov esp, ebp */
  ESP = (EBP);
  /* 111a6546 pop ebp */
  EBP = (pop32());
  /* 111a6547 ret  */
  ESPCHK(0x111a64c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x111a6550 (863 bytes, 299 insns) [1 switch table(s)] */
void f_111a6550(void) {
  FTRACE(0x111a6550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6550 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6551 mov ebp, esp */
  EBP = (ESP);
  /* 111a6553 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6556 push ebx */
  push32((uint32_t)(EBX));
  /* 111a6557 push esi */
  push32((uint32_t)(ESI));
  /* 111a6558 push edi */
  push32((uint32_t)(EDI));
  /* 111a6559 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111a6560 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a6565 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 111a6568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a656a jne 0x111a6576 */
  if (!C.zf) goto L_111a6576;
  /* 111a656c mov eax, 1 */
  EAX = (0x1u);
  /* 111a6571 jmp 0x111a68a8 */
  goto L_111a68a8;
L_111a6576:;
  /* 111a6576 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6578 call 0x111a8db0 */
  push32(0x111a657du); f_111a8db0();
  /* 111a657d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6580 call 0x111a9590 */
  push32(0x111a6585u); f_111a9590();
  /* 111a6585 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a6588 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a658c je 0x111a6699 */
  if (C.zf) goto L_111a6699;
  /* 111a6592 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6596 je 0x111a6699 */
  if (C.zf) goto L_111a6699;
  /* 111a659c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a659f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 111a65a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a65a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a65a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111a65ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a65af ja 0x111a6662 */
  if ((!C.cf&&!C.zf)) goto L_111a6662;
  /* 111a65b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a65b8 jmp dword ptr [eax*4 + 0x111a68af] */
  switch (EAX) {
    case 0: goto L_111a663a;
    case 1: goto L_111a6612;
    case 2: goto L_111a65ea;
    case 3: goto L_111a65bf;
    default: x86_unimpl("switch@0x111a65b8 out of table"); return;
  }
L_111a65bf:;
  /* 111a65bf push 0x111ccbd4 */
  push32((uint32_t)(0x111ccbd4u));
  /* 111a65c4 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a65c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a65cb push 0 */
  push32((uint32_t)(0x0u));
  /* 111a65cd push 0 */
  push32((uint32_t)(0x0u));
  /* 111a65cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111a65d1 call 0x111a4470 */
  push32(0x111a65d6u); f_111a4470();
  /* 111a65d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a65d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a65dc jne 0x111a65df */
  if (!C.zf) goto L_111a65df;
  /* 111a65de int3  */
  x86_unimpl("int3 @ 0x111a65de");
L_111a65df:;
  /* 111a65df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a65e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a65e3 jne 0x111a65bf */
  if (!C.zf) goto L_111a65bf;
  /* 111a65e5 jmp 0x111a6688 */
  goto L_111a6688;
L_111a65ea:;
  /* 111a65ea push 0x111ccbb0 */
  push32((uint32_t)(0x111ccbb0u));
  /* 111a65ef push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a65f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a65f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a65f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a65fa push 0 */
  push32((uint32_t)(0x0u));
  /* 111a65fc call 0x111a4470 */
  push32(0x111a6601u); f_111a4470();
  /* 111a6601 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6604 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6607 jne 0x111a660a */
  if (!C.zf) goto L_111a660a;
  /* 111a6609 int3  */
  x86_unimpl("int3 @ 0x111a6609");
L_111a660a:;
  /* 111a660a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a660c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a660e jne 0x111a65ea */
  if (!C.zf) goto L_111a65ea;
  /* 111a6610 jmp 0x111a6688 */
  goto L_111a6688;
L_111a6612:;
  /* 111a6612 push 0x111ccb8c */
  push32((uint32_t)(0x111ccb8cu));
  /* 111a6617 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a661c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a661e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6620 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6622 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6624 call 0x111a4470 */
  push32(0x111a6629u); f_111a4470();
  /* 111a6629 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a662c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a662f jne 0x111a6632 */
  if (!C.zf) goto L_111a6632;
  /* 111a6631 int3  */
  x86_unimpl("int3 @ 0x111a6631");
L_111a6632:;
  /* 111a6632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6636 jne 0x111a6612 */
  if (!C.zf) goto L_111a6612;
  /* 111a6638 jmp 0x111a6688 */
  goto L_111a6688;
L_111a663a:;
  /* 111a663a push 0x111ccb68 */
  push32((uint32_t)(0x111ccb68u));
  /* 111a663f push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a6644 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6646 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6648 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a664a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a664c call 0x111a4470 */
  push32(0x111a6651u); f_111a4470();
  /* 111a6651 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6654 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6657 jne 0x111a665a */
  if (!C.zf) goto L_111a665a;
  /* 111a6659 int3  */
  x86_unimpl("int3 @ 0x111a6659");
L_111a665a:;
  /* 111a665a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a665c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a665e jne 0x111a663a */
  if (!C.zf) goto L_111a663a;
  /* 111a6660 jmp 0x111a6688 */
  goto L_111a6688;
L_111a6662:;
  /* 111a6662 push 0x111ccb3c */
  push32((uint32_t)(0x111ccb3cu));
  /* 111a6667 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a666c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a666e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6670 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6672 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6674 call 0x111a4470 */
  push32(0x111a6679u); f_111a4470();
  /* 111a6679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a667c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a667f jne 0x111a6682 */
  if (!C.zf) goto L_111a6682;
  /* 111a6681 int3  */
  x86_unimpl("int3 @ 0x111a6681");
L_111a6682:;
  /* 111a6682 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a6684 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a6686 jne 0x111a6662 */
  if (!C.zf) goto L_111a6662;
L_111a6688:;
  /* 111a6688 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a668a call 0x111a8e50 */
  push32(0x111a668fu); f_111a8e50();
  /* 111a668f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6692 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6694 jmp 0x111a68a8 */
  goto L_111a68a8;
L_111a6699:;
  /* 111a6699 mov eax, dword ptr [0x111d16ac] */
  EAX = (r32((uint32_t)(0x111d16ac)));
  /* 111a669e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a66a1 jmp 0x111a66ab */
  goto L_111a66ab;
L_111a66a3:;
  /* 111a66a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a66a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a66a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111a66ab:;
  /* 111a66ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a66af je 0x111a689b */
  if (C.zf) goto L_111a689b;
  /* 111a66b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 111a66bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a66bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111a66c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a66c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a66cb je 0x111a66f0 */
  if (C.zf) goto L_111a66f0;
  /* 111a66cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a66d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a66d4 je 0x111a66f0 */
  if (C.zf) goto L_111a66f0;
  /* 111a66d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a66d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111a66dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a66e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a66e5 je 0x111a66f0 */
  if (C.zf) goto L_111a66f0;
  /* 111a66e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a66ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a66ee jne 0x111a6708 */
  if (!C.zf) goto L_111a6708;
L_111a66f0:;
  /* 111a66f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a66f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111a66f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a66fc mov edx, dword ptr [ecx*4 + 0x111cfa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfa94)));
  /* 111a6703 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111a6706 jmp 0x111a670f */
  goto L_111a670f;
L_111a6708:;
  /* 111a6708 mov dword ptr [ebp - 0x14], 0x111ccb34 */
  w32((uint32_t)(EBP + -0x14), (0x111ccb34u));
L_111a670f:;
  /* 111a670f push 4 */
  push32((uint32_t)(0x4u));
  /* 111a6711 mov al, byte ptr [0x111cfa90] */
  AL = (r8((uint32_t)(0x111cfa90)));
  /* 111a6716 push eax */
  push32((uint32_t)(EAX));
  /* 111a6717 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a671a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a671d push ecx */
  push32((uint32_t)(ECX));
  /* 111a671e call 0x111a64c0 */
  push32(0x111a6723u); f_111a64c0();
  /* 111a6723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6728 jne 0x111a6764 */
  if (!C.zf) goto L_111a6764;
L_111a672a:;
  /* 111a672a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a672d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6730 push edx */
  push32((uint32_t)(EDX));
  /* 111a6731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6734 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 111a6737 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6738 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a673b push edx */
  push32((uint32_t)(EDX));
  /* 111a673c push 0x111cca10 */
  push32((uint32_t)(0x111cca10u));
  /* 111a6741 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6743 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6745 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6747 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6749 call 0x111a4470 */
  push32(0x111a674eu); f_111a4470();
  /* 111a674e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6751 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6754 jne 0x111a6757 */
  if (!C.zf) goto L_111a6757;
  /* 111a6756 int3  */
  x86_unimpl("int3 @ 0x111a6756");
L_111a6757:;
  /* 111a6757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a675b jne 0x111a672a */
  if (!C.zf) goto L_111a672a;
  /* 111a675d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_111a6764:;
  /* 111a6764 push 4 */
  push32((uint32_t)(0x4u));
  /* 111a6766 mov cl, byte ptr [0x111cfa90] */
  CL = (r8((uint32_t)(0x111cfa90)));
  /* 111a676c push ecx */
  push32((uint32_t)(ECX));
  /* 111a676d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6770 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a6773 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6776 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 111a677a push edx */
  push32((uint32_t)(EDX));
  /* 111a677b call 0x111a64c0 */
  push32(0x111a6780u); f_111a64c0();
  /* 111a6780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6785 jne 0x111a67c1 */
  if (!C.zf) goto L_111a67c1;
L_111a6787:;
  /* 111a6787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a678a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a678d push eax */
  push32((uint32_t)(EAX));
  /* 111a678e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6791 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111a6794 push edx */
  push32((uint32_t)(EDX));
  /* 111a6795 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a6798 push eax */
  push32((uint32_t)(EAX));
  /* 111a6799 push 0x111cc9e4 */
  push32((uint32_t)(0x111cc9e4u));
  /* 111a679e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a67a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a67a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a67a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a67a6 call 0x111a4470 */
  push32(0x111a67abu); f_111a4470();
  /* 111a67ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a67ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a67b1 jne 0x111a67b4 */
  if (!C.zf) goto L_111a67b4;
  /* 111a67b3 int3  */
  x86_unimpl("int3 @ 0x111a67b3");
L_111a67b4:;
  /* 111a67b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a67b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a67b8 jne 0x111a6787 */
  if (!C.zf) goto L_111a6787;
  /* 111a67ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_111a67c1:;
  /* 111a67c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a67c4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a67c8 jne 0x111a681a */
  if (!C.zf) goto L_111a681a;
  /* 111a67ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a67cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a67d0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a67d1 mov dl, byte ptr [0x111cfa91] */
  DL = (r8((uint32_t)(0x111cfa91)));
  /* 111a67d7 push edx */
  push32((uint32_t)(EDX));
  /* 111a67d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a67db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a67de push eax */
  push32((uint32_t)(EAX));
  /* 111a67df call 0x111a64c0 */
  push32(0x111a67e4u); f_111a64c0();
  /* 111a67e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a67e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a67e9 jne 0x111a681a */
  if (!C.zf) goto L_111a681a;
L_111a67eb:;
  /* 111a67eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a67ee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a67f1 push ecx */
  push32((uint32_t)(ECX));
  /* 111a67f2 push 0x111ccb08 */
  push32((uint32_t)(0x111ccb08u));
  /* 111a67f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a67f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a67fb push 0 */
  push32((uint32_t)(0x0u));
  /* 111a67fd push 0 */
  push32((uint32_t)(0x0u));
  /* 111a67ff call 0x111a4470 */
  push32(0x111a6804u); f_111a4470();
  /* 111a6804 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a680a jne 0x111a680d */
  if (!C.zf) goto L_111a680d;
  /* 111a680c int3  */
  x86_unimpl("int3 @ 0x111a680c");
L_111a680d:;
  /* 111a680d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a680f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a6811 jne 0x111a67eb */
  if (!C.zf) goto L_111a67eb;
  /* 111a6813 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_111a681a:;
  /* 111a681a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a681e jne 0x111a6896 */
  if (!C.zf) goto L_111a6896;
  /* 111a6820 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6823 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6827 je 0x111a685c */
  if (C.zf) goto L_111a685c;
L_111a6829:;
  /* 111a6829 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a682c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111a682f push edx */
  push32((uint32_t)(EDX));
  /* 111a6830 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6833 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111a6836 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6837 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a683a push edx */
  push32((uint32_t)(EDX));
  /* 111a683b push 0x111ccae8 */
  push32((uint32_t)(0x111ccae8u));
  /* 111a6840 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6842 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6844 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6846 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6848 call 0x111a4470 */
  push32(0x111a684du); f_111a4470();
  /* 111a684d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6850 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6853 jne 0x111a6856 */
  if (!C.zf) goto L_111a6856;
  /* 111a6855 int3  */
  x86_unimpl("int3 @ 0x111a6855");
L_111a6856:;
  /* 111a6856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a685a jne 0x111a6829 */
  if (!C.zf) goto L_111a6829;
L_111a685c:;
  /* 111a685c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a685f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 111a6862 push edx */
  push32((uint32_t)(EDX));
  /* 111a6863 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6866 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6869 push eax */
  push32((uint32_t)(EAX));
  /* 111a686a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a686d push ecx */
  push32((uint32_t)(ECX));
  /* 111a686e push 0x111ccabc */
  push32((uint32_t)(0x111ccabcu));
  /* 111a6873 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6875 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6877 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6879 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a687b call 0x111a4470 */
  push32(0x111a6880u); f_111a4470();
  /* 111a6880 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6883 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6886 jne 0x111a6889 */
  if (!C.zf) goto L_111a6889;
  /* 111a6888 int3  */
  x86_unimpl("int3 @ 0x111a6888");
L_111a6889:;
  /* 111a6889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a688b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a688d jne 0x111a685c */
  if (!C.zf) goto L_111a685c;
  /* 111a688f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111a6896:;
  /* 111a6896 jmp 0x111a66a3 */
  goto L_111a66a3;
L_111a689b:;
  /* 111a689b push 9 */
  push32((uint32_t)(0x9u));
  /* 111a689d call 0x111a8e50 */
  push32(0x111a68a2u); f_111a8e50();
  /* 111a68a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a68a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111a68a8:;
  /* 111a68a8 pop edi */
  EDI = (pop32());
  /* 111a68a9 pop esi */
  ESI = (pop32());
  /* 111a68aa pop ebx */
  EBX = (pop32());
  /* 111a68ab mov esp, ebp */
  ESP = (EBP);
  /* 111a68ad pop ebp */
  EBP = (pop32());
  /* 111a68ae ret  */
  ESPCHK(0x111a6550u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x111a68c0 (34 bytes, 13 insns) */
void f_111a68c0(void) {
  FTRACE(0x111a68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a68c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a68c1 mov ebp, esp */
  EBP = (ESP);
  /* 111a68c3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a68c4 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a68c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a68cc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a68d0 je 0x111a68db */
  if (C.zf) goto L_111a68db;
  /* 111a68d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a68d5 mov dword ptr [0x111cfa84], ecx */
  w32((uint32_t)(0x111cfa84), (ECX));
L_111a68db:;
  /* 111a68db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a68de mov esp, ebp */
  ESP = (EBP);
  /* 111a68e0 pop ebp */
  EBP = (pop32());
  /* 111a68e1 ret  */
  ESPCHK(0x111a68c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f0 @ 0x111a68f0 (103 bytes, 38 insns) */
void f_111a68f0(void) {
  FTRACE(0x111a68f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a68f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a68f1 mov ebp, esp */
  EBP = (ESP);
  /* 111a68f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a68f4 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a68f9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 111a68fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a68fe jne 0x111a6902 */
  if (!C.zf) goto L_111a6902;
  /* 111a6900 jmp 0x111a6953 */
  goto L_111a6953;
L_111a6902:;
  /* 111a6902 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6904 call 0x111a8db0 */
  push32(0x111a6909u); f_111a8db0();
  /* 111a6909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a690c mov ecx, dword ptr [0x111d16ac] */
  ECX = (r32((uint32_t)(0x111d16ac)));
  /* 111a6912 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a6915 jmp 0x111a691f */
  goto L_111a691f;
L_111a6917:;
  /* 111a6917 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a691a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a691c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a691f:;
  /* 111a691f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6923 je 0x111a6949 */
  if (C.zf) goto L_111a6949;
  /* 111a6925 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6928 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111a692b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a6931 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6934 jne 0x111a6947 */
  if (!C.zf) goto L_111a6947;
  /* 111a6936 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a6939 push eax */
  push32((uint32_t)(EAX));
  /* 111a693a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a693d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6940 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6941 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x111a6944u);
  /* 111a6944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a6947:;
  /* 111a6947 jmp 0x111a6917 */
  goto L_111a6917;
L_111a6949:;
  /* 111a6949 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a694b call 0x111a8e50 */
  push32(0x111a6950u); f_111a8e50();
  /* 111a6950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a6953:;
  /* 111a6953 mov esp, ebp */
  ESP = (EBP);
  /* 111a6955 pop ebp */
  EBP = (pop32());
  /* 111a6956 ret  */
  ESPCHK(0x111a68f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x111a6960 (75 bytes, 28 insns) */
void f_111a6960(void) {
  FTRACE(0x111a6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6960 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6961 mov ebp, esp */
  EBP = (ESP);
  /* 111a6963 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6964 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6968 je 0x111a699d */
  if (C.zf) goto L_111a699d;
  /* 111a696a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a696d push eax */
  push32((uint32_t)(EAX));
  /* 111a696e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6971 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6972 call dword ptr [0x111d43e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43e0))), 0x111a6978u);
  /* 111a6978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a697a jne 0x111a699d */
  if (!C.zf) goto L_111a699d;
  /* 111a697c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6980 je 0x111a6994 */
  if (C.zf) goto L_111a6994;
  /* 111a6982 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a6985 push edx */
  push32((uint32_t)(EDX));
  /* 111a6986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6989 push eax */
  push32((uint32_t)(EAX));
  /* 111a698a call dword ptr [0x111d43dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43dc))), 0x111a6990u);
  /* 111a6990 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6992 jne 0x111a699d */
  if (!C.zf) goto L_111a699d;
L_111a6994:;
  /* 111a6994 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111a699b jmp 0x111a69a4 */
  goto L_111a69a4;
L_111a699d:;
  /* 111a699d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111a69a4:;
  /* 111a69a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a69a7 mov esp, ebp */
  ESP = (EBP);
  /* 111a69a9 pop ebp */
  EBP = (pop32());
  /* 111a69aa ret  */
  ESPCHK(0x111a6960u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b0 @ 0x111a69b0 (134 bytes, 50 insns) */
void f_111a69b0(void) {
  FTRACE(0x111a69b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a69b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a69b1 mov ebp, esp */
  EBP = (ESP);
  /* 111a69b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a69b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a69b8 jne 0x111a69be */
  if (!C.zf) goto L_111a69be;
  /* 111a69ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a69bc jmp 0x111a6a32 */
  goto L_111a6a32;
L_111a69be:;
  /* 111a69be push 1 */
  push32((uint32_t)(0x1u));
  /* 111a69c0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111a69c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a69c5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a69c8 push eax */
  push32((uint32_t)(EAX));
  /* 111a69c9 call 0x111a6960 */
  push32(0x111a69ceu); f_111a6960();
  /* 111a69ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a69d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a69d3 jne 0x111a69d9 */
  if (!C.zf) goto L_111a69d9;
  /* 111a69d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a69d7 jmp 0x111a6a32 */
  goto L_111a6a32;
L_111a69d9:;
  /* 111a69d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a69dc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a69df push ecx */
  push32((uint32_t)(ECX));
  /* 111a69e0 call 0x111a96b0 */
  push32(0x111a69e5u); f_111a96b0();
  /* 111a69e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a69e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a69eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a69ef je 0x111a6a06 */
  if (C.zf) goto L_111a6a06;
  /* 111a69f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a69f4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a69f7 push edx */
  push32((uint32_t)(EDX));
  /* 111a69f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a69fb push eax */
  push32((uint32_t)(EAX));
  /* 111a69fc call 0x111a9710 */
  push32(0x111a6a01u); f_111a9710();
  /* 111a6a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6a04 jmp 0x111a6a32 */
  goto L_111a6a32;
L_111a6a06:;
  /* 111a6a06 mov ecx, dword ptr [0x111d1660] */
  ECX = (r32((uint32_t)(0x111d1660)));
  /* 111a6a0c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 111a6a12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a6a14 je 0x111a6a1d */
  if (C.zf) goto L_111a6a1d;
  /* 111a6a16 mov eax, 1 */
  EAX = (0x1u);
  /* 111a6a1b jmp 0x111a6a32 */
  goto L_111a6a32;
L_111a6a1d:;
  /* 111a6a1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6a20 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6a23 push edx */
  push32((uint32_t)(EDX));
  /* 111a6a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6a26 mov eax, dword ptr [0x111d300c] */
  EAX = (r32((uint32_t)(0x111d300c)));
  /* 111a6a2b push eax */
  push32((uint32_t)(EAX));
  /* 111a6a2c call dword ptr [0x111d4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4374))), 0x111a6a32u);
L_111a6a32:;
  /* 111a6a32 mov esp, ebp */
  ESP = (EBP);
  /* 111a6a34 pop ebp */
  EBP = (pop32());
  /* 111a6a35 ret  */
  ESPCHK(0x111a69b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x111a6a40 (227 bytes, 80 insns) */
void f_111a6a40(void) {
  FTRACE(0x111a6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6a41 mov ebp, esp */
  EBP = (ESP);
  /* 111a6a43 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6a47 push eax */
  push32((uint32_t)(EAX));
  /* 111a6a48 call 0x111a69b0 */
  push32(0x111a6a4du); f_111a69b0();
  /* 111a6a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6a50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6a52 jne 0x111a6a5b */
  if (!C.zf) goto L_111a6a5b;
  /* 111a6a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6a56 jmp 0x111a6b1f */
  goto L_111a6b1f;
L_111a6a5b:;
  /* 111a6a5b push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6a5d call 0x111a8db0 */
  push32(0x111a6a62u); f_111a8db0();
  /* 111a6a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6a65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6a68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6a6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a6a6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6a71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6a74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6a79 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6a7c je 0x111a6aa0 */
  if (C.zf) goto L_111a6aa0;
  /* 111a6a7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6a81 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6a85 je 0x111a6aa0 */
  if (C.zf) goto L_111a6aa0;
  /* 111a6a87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6a8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6a8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6a92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6a95 je 0x111a6aa0 */
  if (C.zf) goto L_111a6aa0;
  /* 111a6a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6a9a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6a9e jne 0x111a6b13 */
  if (!C.zf) goto L_111a6b13;
L_111a6aa0:;
  /* 111a6aa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a6aa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a6aa5 push edx */
  push32((uint32_t)(EDX));
  /* 111a6aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6aa9 push eax */
  push32((uint32_t)(EAX));
  /* 111a6aaa call 0x111a6960 */
  push32(0x111a6aafu); f_111a6960();
  /* 111a6aaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6ab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6ab4 je 0x111a6b13 */
  if (C.zf) goto L_111a6b13;
  /* 111a6ab6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6ab9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 111a6abc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6abf jne 0x111a6b13 */
  if (!C.zf) goto L_111a6b13;
  /* 111a6ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6ac4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 111a6ac7 cmp ecx, dword ptr [0x111cfa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111cfa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6acd jg 0x111a6b13 */
  if ((!C.zf&&C.sf==C.of)) goto L_111a6b13;
  /* 111a6acf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6ad3 je 0x111a6ae0 */
  if (C.zf) goto L_111a6ae0;
  /* 111a6ad5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a6ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6adb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 111a6ade mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111a6ae0:;
  /* 111a6ae0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6ae4 je 0x111a6af1 */
  if (C.zf) goto L_111a6af1;
  /* 111a6ae6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a6ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6aec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111a6aef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111a6af1:;
  /* 111a6af1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6af5 je 0x111a6b02 */
  if (C.zf) goto L_111a6b02;
  /* 111a6af7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a6afa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6afd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111a6b00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111a6b02:;
  /* 111a6b02 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6b04 call 0x111a8e50 */
  push32(0x111a6b09u); f_111a8e50();
  /* 111a6b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6b0c mov eax, 1 */
  EAX = (0x1u);
  /* 111a6b11 jmp 0x111a6b1f */
  goto L_111a6b1f;
L_111a6b13:;
  /* 111a6b13 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6b15 call 0x111a8e50 */
  push32(0x111a6b1au); f_111a8e50();
  /* 111a6b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a6b1f:;
  /* 111a6b1f mov esp, ebp */
  ESP = (EBP);
  /* 111a6b21 pop ebp */
  EBP = (pop32());
  /* 111a6b22 ret  */
  ESPCHK(0x111a6a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x111a6b30 (28 bytes, 11 insns) */
void f_111a6b30(void) {
  FTRACE(0x111a6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6b31 mov ebp, esp */
  EBP = (ESP);
  /* 111a6b33 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6b34 mov eax, dword ptr [0x111d3018] */
  EAX = (r32((uint32_t)(0x111d3018)));
  /* 111a6b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a6b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6b3f mov dword ptr [0x111d3018], ecx */
  w32((uint32_t)(0x111d3018), (ECX));
  /* 111a6b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6b48 mov esp, ebp */
  ESP = (EBP);
  /* 111a6b4a pop ebp */
  EBP = (pop32());
  /* 111a6b4b ret  */
  ESPCHK(0x111a6b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x111a6b50 (362 bytes, 116 insns) */
void f_111a6b50(void) {
  FTRACE(0x111a6b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6b50 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6b51 mov ebp, esp */
  EBP = (ESP);
  /* 111a6b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6b56 push ebx */
  push32((uint32_t)(EBX));
  /* 111a6b57 push esi */
  push32((uint32_t)(ESI));
  /* 111a6b58 push edi */
  push32((uint32_t)(EDI));
  /* 111a6b59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6b5d jne 0x111a6b8a */
  if (!C.zf) goto L_111a6b8a;
L_111a6b5f:;
  /* 111a6b5f push 0x111ccc1c */
  push32((uint32_t)(0x111ccc1cu));
  /* 111a6b64 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a6b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6b71 call 0x111a4470 */
  push32(0x111a6b76u); f_111a4470();
  /* 111a6b76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6b79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6b7c jne 0x111a6b7f */
  if (!C.zf) goto L_111a6b7f;
  /* 111a6b7e int3  */
  x86_unimpl("int3 @ 0x111a6b7e");
L_111a6b7f:;
  /* 111a6b7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6b83 jne 0x111a6b5f */
  if (!C.zf) goto L_111a6b5f;
  /* 111a6b85 jmp 0x111a6cb3 */
  goto L_111a6cb3;
L_111a6b8a:;
  /* 111a6b8a push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6b8c call 0x111a8db0 */
  push32(0x111a6b91u); f_111a8db0();
  /* 111a6b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6b94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6b97 mov edx, dword ptr [0x111d16ac] */
  EDX = (r32((uint32_t)(0x111d16ac)));
  /* 111a6b9d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111a6b9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111a6ba6 jmp 0x111a6bb1 */
  goto L_111a6bb1;
L_111a6ba8:;
  /* 111a6ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6bab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6bae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a6bb1:;
  /* 111a6bb1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6bb5 jge 0x111a6bd5 */
  if ((C.sf==C.of)) goto L_111a6bd5;
  /* 111a6bb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6bba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6bbd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 111a6bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6bc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6bcb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 111a6bd3 jmp 0x111a6ba8 */
  goto L_111a6ba8;
L_111a6bd5:;
  /* 111a6bd5 mov edx, dword ptr [0x111d16ac] */
  EDX = (r32((uint32_t)(0x111d16ac)));
  /* 111a6bdb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111a6bde jmp 0x111a6be8 */
  goto L_111a6be8;
L_111a6be0:;
  /* 111a6be0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6be3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a6be5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111a6be8:;
  /* 111a6be8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6bec je 0x111a6c91 */
  if (C.zf) goto L_111a6c91;
  /* 111a6bf2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6bf5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6bf8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6bff jl 0x111a6c67 */
  if ((C.sf!=C.of)) goto L_111a6c67;
  /* 111a6c01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6c04 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111a6c07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a6c0d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6c10 jge 0x111a6c67 */
  if ((C.sf==C.of)) goto L_111a6c67;
  /* 111a6c12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6c15 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111a6c18 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a6c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6c21 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 111a6c25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6c28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6c2b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111a6c2e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a6c34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6c37 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 111a6c3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6c3e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6c41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6c46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6c49 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 111a6c4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6c50 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6c53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6c56 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 111a6c59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6c61 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 111a6c65 jmp 0x111a6c8c */
  goto L_111a6c8c;
L_111a6c67:;
  /* 111a6c67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6c6a push edx */
  push32((uint32_t)(EDX));
  /* 111a6c6b push 0x111ccbf8 */
  push32((uint32_t)(0x111ccbf8u));
  /* 111a6c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6c78 call 0x111a4470 */
  push32(0x111a6c7du); f_111a4470();
  /* 111a6c7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6c80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6c83 jne 0x111a6c86 */
  if (!C.zf) goto L_111a6c86;
  /* 111a6c85 int3  */
  x86_unimpl("int3 @ 0x111a6c85");
L_111a6c86:;
  /* 111a6c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6c8a jne 0x111a6c67 */
  if (!C.zf) goto L_111a6c67;
L_111a6c8c:;
  /* 111a6c8c jmp 0x111a6be0 */
  goto L_111a6be0;
L_111a6c91:;
  /* 111a6c91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6c94 mov edx, dword ptr [0x111d16b4] */
  EDX = (r32((uint32_t)(0x111d16b4)));
  /* 111a6c9a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 111a6c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6ca0 mov ecx, dword ptr [0x111d16a8] */
  ECX = (r32((uint32_t)(0x111d16a8)));
  /* 111a6ca6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 111a6ca9 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6cab call 0x111a8e50 */
  push32(0x111a6cb0u); f_111a8e50();
  /* 111a6cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a6cb3:;
  /* 111a6cb3 pop edi */
  EDI = (pop32());
  /* 111a6cb4 pop esi */
  ESI = (pop32());
  /* 111a6cb5 pop ebx */
  EBX = (pop32());
  /* 111a6cb6 mov esp, ebp */
  ESP = (EBP);
  /* 111a6cb8 pop ebp */
  EBP = (pop32());
  /* 111a6cb9 ret  */
  ESPCHK(0x111a6b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x111a6cc0 (291 bytes, 95 insns) */
void f_111a6cc0(void) {
  FTRACE(0x111a6cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6cc1 mov ebp, esp */
  EBP = (ESP);
  /* 111a6cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 111a6cc7 push esi */
  push32((uint32_t)(ESI));
  /* 111a6cc8 push edi */
  push32((uint32_t)(EDI));
  /* 111a6cc9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111a6cd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6cd4 je 0x111a6ce2 */
  if (C.zf) goto L_111a6ce2;
  /* 111a6cd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6cda je 0x111a6ce2 */
  if (C.zf) goto L_111a6ce2;
  /* 111a6cdc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6ce0 jne 0x111a6d10 */
  if (!C.zf) goto L_111a6d10;
L_111a6ce2:;
  /* 111a6ce2 push 0x111ccc44 */
  push32((uint32_t)(0x111ccc44u));
  /* 111a6ce7 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a6cec push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6cee push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6cf4 call 0x111a4470 */
  push32(0x111a6cf9u); f_111a4470();
  /* 111a6cf9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6cfc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6cff jne 0x111a6d02 */
  if (!C.zf) goto L_111a6d02;
  /* 111a6d01 int3  */
  x86_unimpl("int3 @ 0x111a6d01");
L_111a6d02:;
  /* 111a6d02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6d06 jne 0x111a6ce2 */
  if (!C.zf) goto L_111a6ce2;
  /* 111a6d08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a6d0b jmp 0x111a6ddc */
  goto L_111a6ddc;
L_111a6d10:;
  /* 111a6d10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111a6d17 jmp 0x111a6d22 */
  goto L_111a6d22;
L_111a6d19:;
  /* 111a6d19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6d1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a6d22:;
  /* 111a6d22 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6d26 jge 0x111a6dac */
  if ((C.sf==C.of)) goto L_111a6dac;
  /* 111a6d2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a6d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111a6d38 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 111a6d3c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6d46 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 111a6d4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a6d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d53 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111a6d56 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 111a6d5a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6d5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6d64 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 111a6d68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6d6e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6d73 jne 0x111a6d82 */
  if (!C.zf) goto L_111a6d82;
  /* 111a6d75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6d7b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6d80 je 0x111a6da7 */
  if (C.zf) goto L_111a6da7;
L_111a6d82:;
  /* 111a6d82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6d86 je 0x111a6da7 */
  if (C.zf) goto L_111a6da7;
  /* 111a6d88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6d8c jne 0x111a6da0 */
  if (!C.zf) goto L_111a6da0;
  /* 111a6d8e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6d92 jne 0x111a6da7 */
  if (!C.zf) goto L_111a6da7;
  /* 111a6d94 mov eax, dword ptr [0x111cfa84] */
  EAX = (r32((uint32_t)(0x111cfa84)));
  /* 111a6d99 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 111a6d9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6d9e je 0x111a6da7 */
  if (C.zf) goto L_111a6da7;
L_111a6da0:;
  /* 111a6da0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_111a6da7:;
  /* 111a6da7 jmp 0x111a6d19 */
  goto L_111a6d19;
L_111a6dac:;
  /* 111a6dac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a6daf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a6db2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 111a6db5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6db8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6dbb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 111a6dbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a6dc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a6dc4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 111a6dc7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6dca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6dcd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 111a6dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6dd3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111a6dd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_111a6ddc:;
  /* 111a6ddc pop edi */
  EDI = (pop32());
  /* 111a6ddd pop esi */
  ESI = (pop32());
  /* 111a6dde pop ebx */
  EBX = (pop32());
  /* 111a6ddf mov esp, ebp */
  ESP = (EBP);
  /* 111a6de1 pop ebp */
  EBP = (pop32());
  /* 111a6de2 ret  */
  ESPCHK(0x111a6cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006df0 @ 0x111a6df0 (697 bytes, 253 insns) */
void f_111a6df0(void) {
  FTRACE(0x111a6df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a6df0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a6df1 mov ebp, esp */
  EBP = (ESP);
  /* 111a6df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a6df6 push ebx */
  push32((uint32_t)(EBX));
  /* 111a6df7 push esi */
  push32((uint32_t)(ESI));
  /* 111a6df8 push edi */
  push32((uint32_t)(EDI));
  /* 111a6df9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111a6e00 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a6e02 call 0x111a8db0 */
  push32(0x111a6e07u); f_111a8db0();
  /* 111a6e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a6e0a:;
  /* 111a6e0a push 0x111ccd3c */
  push32((uint32_t)(0x111ccd3cu));
  /* 111a6e0f push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a6e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6e1c call 0x111a4470 */
  push32(0x111a6e21u); f_111a4470();
  /* 111a6e21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6e24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6e27 jne 0x111a6e2a */
  if (!C.zf) goto L_111a6e2a;
  /* 111a6e29 int3  */
  x86_unimpl("int3 @ 0x111a6e29");
L_111a6e2a:;
  /* 111a6e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6e2e jne 0x111a6e0a */
  if (!C.zf) goto L_111a6e0a;
  /* 111a6e30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6e34 je 0x111a6e3e */
  if (C.zf) goto L_111a6e3e;
  /* 111a6e36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a6e39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a6e3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111a6e3e:;
  /* 111a6e3e mov eax, dword ptr [0x111d16ac] */
  EAX = (r32((uint32_t)(0x111d16ac)));
  /* 111a6e43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a6e46 jmp 0x111a6e50 */
  goto L_111a6e50;
L_111a6e48:;
  /* 111a6e48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6e4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a6e4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111a6e50:;
  /* 111a6e50 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6e54 je 0x111a7072 */
  if (C.zf) goto L_111a7072;
  /* 111a6e5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6e5d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6e60 je 0x111a7072 */
  if (C.zf) goto L_111a7072;
  /* 111a6e66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6e69 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111a6e6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a6e72 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6e75 je 0x111a6ea4 */
  if (C.zf) goto L_111a6ea4;
  /* 111a6e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6e7a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111a6e7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a6e83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a6e85 je 0x111a6ea4 */
  if (C.zf) goto L_111a6ea4;
  /* 111a6e87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6e8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6e8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6e92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6e95 jne 0x111a6ea9 */
  if (!C.zf) goto L_111a6ea9;
  /* 111a6e97 mov ecx, dword ptr [0x111cfa84] */
  ECX = (r32((uint32_t)(0x111cfa84)));
  /* 111a6e9d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 111a6ea0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a6ea2 jne 0x111a6ea9 */
  if (!C.zf) goto L_111a6ea9;
L_111a6ea4:;
  /* 111a6ea4 jmp 0x111a706d */
  goto L_111a706d;
L_111a6ea9:;
  /* 111a6ea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6eac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6eb0 je 0x111a6f22 */
  if (C.zf) goto L_111a6f22;
  /* 111a6eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a6eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6eb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111a6ebc push ecx */
  push32((uint32_t)(ECX));
  /* 111a6ebd call 0x111a6960 */
  push32(0x111a6ec2u); f_111a6960();
  /* 111a6ec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6ec7 jne 0x111a6ef3 */
  if (!C.zf) goto L_111a6ef3;
L_111a6ec9:;
  /* 111a6ec9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6ecc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111a6ecf push eax */
  push32((uint32_t)(EAX));
  /* 111a6ed0 push 0x111ccd28 */
  push32((uint32_t)(0x111ccd28u));
  /* 111a6ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6edb push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6edd call 0x111a4470 */
  push32(0x111a6ee2u); f_111a4470();
  /* 111a6ee2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6ee5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6ee8 jne 0x111a6eeb */
  if (!C.zf) goto L_111a6eeb;
  /* 111a6eea int3  */
  x86_unimpl("int3 @ 0x111a6eea");
L_111a6eeb:;
  /* 111a6eeb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a6eed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a6eef jne 0x111a6ec9 */
  if (!C.zf) goto L_111a6ec9;
  /* 111a6ef1 jmp 0x111a6f22 */
  goto L_111a6f22;
L_111a6ef3:;
  /* 111a6ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6ef6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111a6ef9 push eax */
  push32((uint32_t)(EAX));
  /* 111a6efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6efd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111a6f00 push edx */
  push32((uint32_t)(EDX));
  /* 111a6f01 push 0x111ccd1c */
  push32((uint32_t)(0x111ccd1cu));
  /* 111a6f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f0e call 0x111a4470 */
  push32(0x111a6f13u); f_111a4470();
  /* 111a6f13 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6f16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6f19 jne 0x111a6f1c */
  if (!C.zf) goto L_111a6f1c;
  /* 111a6f1b int3  */
  x86_unimpl("int3 @ 0x111a6f1b");
L_111a6f1c:;
  /* 111a6f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6f20 jne 0x111a6ef3 */
  if (!C.zf) goto L_111a6ef3;
L_111a6f22:;
  /* 111a6f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6f25 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111a6f28 push edx */
  push32((uint32_t)(EDX));
  /* 111a6f29 push 0x111ccd14 */
  push32((uint32_t)(0x111ccd14u));
  /* 111a6f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f36 call 0x111a4470 */
  push32(0x111a6f3bu); f_111a4470();
  /* 111a6f3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6f41 jne 0x111a6f44 */
  if (!C.zf) goto L_111a6f44;
  /* 111a6f43 int3  */
  x86_unimpl("int3 @ 0x111a6f43");
L_111a6f44:;
  /* 111a6f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a6f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a6f48 jne 0x111a6f22 */
  if (!C.zf) goto L_111a6f22;
  /* 111a6f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6f4d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111a6f50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a6f56 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6f59 jne 0x111a6fcc */
  if (!C.zf) goto L_111a6fcc;
L_111a6f5b:;
  /* 111a6f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6f5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a6f61 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6f62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6f65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a6f68 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111a6f6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a6f70 push eax */
  push32((uint32_t)(EAX));
  /* 111a6f71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6f74 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6f77 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6f78 push 0x111ccce0 */
  push32((uint32_t)(0x111ccce0u));
  /* 111a6f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6f85 call 0x111a4470 */
  push32(0x111a6f8au); f_111a4470();
  /* 111a6f8a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6f8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6f90 jne 0x111a6f93 */
  if (!C.zf) goto L_111a6f93;
  /* 111a6f92 int3  */
  x86_unimpl("int3 @ 0x111a6f92");
L_111a6f93:;
  /* 111a6f93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a6f95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a6f97 jne 0x111a6f5b */
  if (!C.zf) goto L_111a6f5b;
  /* 111a6f99 cmp dword ptr [0x111d3018], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3018))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6fa0 je 0x111a6fbb */
  if (C.zf) goto L_111a6fbb;
  /* 111a6fa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6fa5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a6fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6fa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6fac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6faf push edx */
  push32((uint32_t)(EDX));
  /* 111a6fb0 call dword ptr [0x111d3018] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d3018))), 0x111a6fb6u);
  /* 111a6fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6fb9 jmp 0x111a6fc7 */
  goto L_111a6fc7;
L_111a6fbb:;
  /* 111a6fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6fbe push eax */
  push32((uint32_t)(EAX));
  /* 111a6fbf call 0x111a70b0 */
  push32(0x111a6fc4u); f_111a70b0();
  /* 111a6fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a6fc7:;
  /* 111a6fc7 jmp 0x111a706d */
  goto L_111a706d;
L_111a6fcc:;
  /* 111a6fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6fcf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6fd3 jne 0x111a7012 */
  if (!C.zf) goto L_111a7012;
L_111a6fd5:;
  /* 111a6fd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6fd8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a6fdb push eax */
  push32((uint32_t)(EAX));
  /* 111a6fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a6fdf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 111a6fe3 push 0x111cccb8 */
  push32((uint32_t)(0x111cccb8u));
  /* 111a6fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6fea push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6fec push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6fee push 0 */
  push32((uint32_t)(0x0u));
  /* 111a6ff0 call 0x111a4470 */
  push32(0x111a6ff5u); f_111a4470();
  /* 111a6ff5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a6ff8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a6ffb jne 0x111a6ffe */
  if (!C.zf) goto L_111a6ffe;
  /* 111a6ffd int3  */
  x86_unimpl("int3 @ 0x111a6ffd");
L_111a6ffe:;
  /* 111a6ffe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a7000 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a7002 jne 0x111a6fd5 */
  if (!C.zf) goto L_111a6fd5;
  /* 111a7004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7007 push eax */
  push32((uint32_t)(EAX));
  /* 111a7008 call 0x111a70b0 */
  push32(0x111a700du); f_111a70b0();
  /* 111a700d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7010 jmp 0x111a706d */
  goto L_111a706d;
L_111a7012:;
  /* 111a7012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7015 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111a7018 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a701e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7021 jne 0x111a706d */
  if (!C.zf) goto L_111a706d;
L_111a7023:;
  /* 111a7023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7026 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111a7029 push ecx */
  push32((uint32_t)(ECX));
  /* 111a702a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a702d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111a7030 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111a7033 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a7038 push eax */
  push32((uint32_t)(EAX));
  /* 111a7039 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a703c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a703f push ecx */
  push32((uint32_t)(ECX));
  /* 111a7040 push 0x111ccc84 */
  push32((uint32_t)(0x111ccc84u));
  /* 111a7045 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7047 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7049 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a704b push 0 */
  push32((uint32_t)(0x0u));
  /* 111a704d call 0x111a4470 */
  push32(0x111a7052u); f_111a4470();
  /* 111a7052 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7055 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7058 jne 0x111a705b */
  if (!C.zf) goto L_111a705b;
  /* 111a705a int3  */
  x86_unimpl("int3 @ 0x111a705a");
L_111a705b:;
  /* 111a705b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a705d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a705f jne 0x111a7023 */
  if (!C.zf) goto L_111a7023;
  /* 111a7061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7064 push eax */
  push32((uint32_t)(EAX));
  /* 111a7065 call 0x111a70b0 */
  push32(0x111a706au); f_111a70b0();
  /* 111a706a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a706d:;
  /* 111a706d jmp 0x111a6e48 */
  goto L_111a6e48;
L_111a7072:;
  /* 111a7072 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a7074 call 0x111a8e50 */
  push32(0x111a7079u); f_111a8e50();
  /* 111a7079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a707c:;
  /* 111a707c push 0x111ccc6c */
  push32((uint32_t)(0x111ccc6cu));
  /* 111a7081 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a7086 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7088 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a708a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a708c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a708e call 0x111a4470 */
  push32(0x111a7093u); f_111a4470();
  /* 111a7093 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7096 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7099 jne 0x111a709c */
  if (!C.zf) goto L_111a709c;
  /* 111a709b int3  */
  x86_unimpl("int3 @ 0x111a709b");
L_111a709c:;
  /* 111a709c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a709e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a70a0 jne 0x111a707c */
  if (!C.zf) goto L_111a707c;
  /* 111a70a2 pop edi */
  EDI = (pop32());
  /* 111a70a3 pop esi */
  ESI = (pop32());
  /* 111a70a4 pop ebx */
  EBX = (pop32());
  /* 111a70a5 mov esp, ebp */
  ESP = (EBP);
  /* 111a70a7 pop ebp */
  EBP = (pop32());
  /* 111a70a8 ret  */
  ESPCHK(0x111a6df0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070b0 @ 0x111a70b0 (276 bytes, 89 insns) */
void f_111a70b0(void) {
  FTRACE(0x111a70b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a70b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a70b1 mov ebp, esp */
  EBP = (ESP);
  /* 111a70b3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a70b6 push ebx */
  push32((uint32_t)(EBX));
  /* 111a70b7 push esi */
  push32((uint32_t)(ESI));
  /* 111a70b8 push edi */
  push32((uint32_t)(EDI));
  /* 111a70b9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 111a70c0 jmp 0x111a70cb */
  goto L_111a70cb;
L_111a70c2:;
  /* 111a70c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111a70c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a70c8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_111a70cb:;
  /* 111a70cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a70ce cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a70d2 jge 0x111a70df */
  if ((C.sf==C.of)) goto L_111a70df;
  /* 111a70d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a70d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111a70da mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 111a70dd jmp 0x111a70e6 */
  goto L_111a70e6;
L_111a70df:;
  /* 111a70df mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_111a70e6:;
  /* 111a70e6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111a70e9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a70ec jge 0x111a718c */
  if ((C.sf==C.of)) goto L_111a718c;
  /* 111a70f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a70f5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a70f8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 111a70fb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 111a70fe cmp dword ptr [0x111cfea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111cfea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7105 jle 0x111a7123 */
  if ((C.zf||C.sf!=C.of)) goto L_111a7123;
  /* 111a7107 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 111a710c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a710f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a7115 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7116 call 0x111ab3c0 */
  push32(0x111a711bu); f_111ab3c0();
  /* 111a711b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a711e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 111a7121 jmp 0x111a7140 */
  goto L_111a7140;
L_111a7123:;
  /* 111a7123 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a7126 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a712c mov eax, dword ptr [0x111cfc98] */
  EAX = (r32((uint32_t)(0x111cfc98)));
  /* 111a7131 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a7133 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 111a7137 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 111a713d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_111a7140:;
  /* 111a7140 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7144 je 0x111a7154 */
  if (C.zf) goto L_111a7154;
  /* 111a7146 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a7149 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a714f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 111a7152 jmp 0x111a715b */
  goto L_111a715b;
L_111a7154:;
  /* 111a7154 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_111a715b:;
  /* 111a715b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111a715e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 111a7161 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 111a7165 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111a7168 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a716e push edx */
  push32((uint32_t)(EDX));
  /* 111a716f push 0x111ccd60 */
  push32((uint32_t)(0x111ccd60u));
  /* 111a7174 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111a7177 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a717a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 111a717e push ecx */
  push32((uint32_t)(ECX));
  /* 111a717f call 0x111ab2c0 */
  push32(0x111a7184u); f_111ab2c0();
  /* 111a7184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7187 jmp 0x111a70c2 */
  goto L_111a70c2;
L_111a718c:;
  /* 111a718c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111a718f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_111a7194:;
  /* 111a7194 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 111a7197 push eax */
  push32((uint32_t)(EAX));
  /* 111a7198 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 111a719b push ecx */
  push32((uint32_t)(ECX));
  /* 111a719c push 0x111ccd50 */
  push32((uint32_t)(0x111ccd50u));
  /* 111a71a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a71a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a71a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a71a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a71a9 call 0x111a4470 */
  push32(0x111a71aeu); f_111a4470();
  /* 111a71ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a71b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a71b4 jne 0x111a71b7 */
  if (!C.zf) goto L_111a71b7;
  /* 111a71b6 int3  */
  x86_unimpl("int3 @ 0x111a71b6");
L_111a71b7:;
  /* 111a71b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a71b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a71bb jne 0x111a7194 */
  if (!C.zf) goto L_111a7194;
  /* 111a71bd pop edi */
  EDI = (pop32());
  /* 111a71be pop esi */
  ESI = (pop32());
  /* 111a71bf pop ebx */
  EBX = (pop32());
  /* 111a71c0 mov esp, ebp */
  ESP = (EBP);
  /* 111a71c2 pop ebp */
  EBP = (pop32());
  /* 111a71c3 ret  */
  ESPCHK(0x111a70b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x111a71d0 (116 bytes, 46 insns) */
void f_111a71d0(void) {
  FTRACE(0x111a71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a71d1 mov ebp, esp */
  EBP = (ESP);
  /* 111a71d3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a71d6 push ebx */
  push32((uint32_t)(EBX));
  /* 111a71d7 push esi */
  push32((uint32_t)(ESI));
  /* 111a71d8 push edi */
  push32((uint32_t)(EDI));
  /* 111a71d9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 111a71dc push eax */
  push32((uint32_t)(EAX));
  /* 111a71dd call 0x111a6b50 */
  push32(0x111a71e2u); f_111a6b50();
  /* 111a71e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a71e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a71e9 jne 0x111a7204 */
  if (!C.zf) goto L_111a7204;
  /* 111a71eb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a71ef jne 0x111a7204 */
  if (!C.zf) goto L_111a7204;
  /* 111a71f1 mov ecx, dword ptr [0x111cfa84] */
  ECX = (r32((uint32_t)(0x111cfa84)));
  /* 111a71f7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 111a71fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a71fc je 0x111a723b */
  if (C.zf) goto L_111a723b;
  /* 111a71fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7202 je 0x111a723b */
  if (C.zf) goto L_111a723b;
L_111a7204:;
  /* 111a7204 push 0x111ccd68 */
  push32((uint32_t)(0x111ccd68u));
  /* 111a7209 push 0x111cc734 */
  push32((uint32_t)(0x111cc734u));
  /* 111a720e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7210 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7212 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7214 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7216 call 0x111a4470 */
  push32(0x111a721bu); f_111a4470();
  /* 111a721b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a721e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7221 jne 0x111a7224 */
  if (!C.zf) goto L_111a7224;
  /* 111a7223 int3  */
  x86_unimpl("int3 @ 0x111a7223");
L_111a7224:;
  /* 111a7224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a7226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a7228 jne 0x111a7204 */
  if (!C.zf) goto L_111a7204;
  /* 111a722a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a722c call 0x111a6df0 */
  push32(0x111a7231u); f_111a6df0();
  /* 111a7231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7234 mov eax, 1 */
  EAX = (0x1u);
  /* 111a7239 jmp 0x111a723d */
  goto L_111a723d;
L_111a723b:;
  /* 111a723b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a723d:;
  /* 111a723d pop edi */
  EDI = (pop32());
  /* 111a723e pop esi */
  ESI = (pop32());
  /* 111a723f pop ebx */
  EBX = (pop32());
  /* 111a7240 mov esp, ebp */
  ESP = (EBP);
  /* 111a7242 pop ebp */
  EBP = (pop32());
  /* 111a7243 ret  */
  ESPCHK(0x111a71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x111a7250 (197 bytes, 79 insns) */
void f_111a7250(void) {
  FTRACE(0x111a7250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7250 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7251 mov ebp, esp */
  EBP = (ESP);
  /* 111a7253 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7254 push ebx */
  push32((uint32_t)(EBX));
  /* 111a7255 push esi */
  push32((uint32_t)(ESI));
  /* 111a7256 push edi */
  push32((uint32_t)(EDI));
  /* 111a7257 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a725b jne 0x111a7262 */
  if (!C.zf) goto L_111a7262;
  /* 111a725d jmp 0x111a730e */
  goto L_111a730e;
L_111a7262:;
  /* 111a7262 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111a7269 jmp 0x111a7274 */
  goto L_111a7274;
L_111a726b:;
  /* 111a726b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a726e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a7274:;
  /* 111a7274 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7278 jge 0x111a72be */
  if ((C.sf==C.of)) goto L_111a72be;
L_111a727a:;
  /* 111a727a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a727d mov edx, dword ptr [ecx*4 + 0x111cfa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfa94)));
  /* 111a7284 push edx */
  push32((uint32_t)(EDX));
  /* 111a7285 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7288 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a728b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 111a728f push edx */
  push32((uint32_t)(EDX));
  /* 111a7290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7293 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7296 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 111a729a push edx */
  push32((uint32_t)(EDX));
  /* 111a729b push 0x111ccdc4 */
  push32((uint32_t)(0x111ccdc4u));
  /* 111a72a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72a8 call 0x111a4470 */
  push32(0x111a72adu); f_111a4470();
  /* 111a72ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a72b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a72b3 jne 0x111a72b6 */
  if (!C.zf) goto L_111a72b6;
  /* 111a72b5 int3  */
  x86_unimpl("int3 @ 0x111a72b5");
L_111a72b6:;
  /* 111a72b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a72b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a72ba jne 0x111a727a */
  if (!C.zf) goto L_111a727a;
  /* 111a72bc jmp 0x111a726b */
  goto L_111a726b;
L_111a72be:;
  /* 111a72be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a72c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 111a72c4 push edx */
  push32((uint32_t)(EDX));
  /* 111a72c5 push 0x111ccda0 */
  push32((uint32_t)(0x111ccda0u));
  /* 111a72ca push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72cc push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72ce push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72d2 call 0x111a4470 */
  push32(0x111a72d7u); f_111a4470();
  /* 111a72d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a72da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a72dd jne 0x111a72e0 */
  if (!C.zf) goto L_111a72e0;
  /* 111a72df int3  */
  x86_unimpl("int3 @ 0x111a72df");
L_111a72e0:;
  /* 111a72e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a72e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a72e4 jne 0x111a72be */
  if (!C.zf) goto L_111a72be;
L_111a72e6:;
  /* 111a72e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a72e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 111a72ec push edx */
  push32((uint32_t)(EDX));
  /* 111a72ed push 0x111ccd80 */
  push32((uint32_t)(0x111ccd80u));
  /* 111a72f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a72fa call 0x111a4470 */
  push32(0x111a72ffu); f_111a4470();
  /* 111a72ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7302 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7305 jne 0x111a7308 */
  if (!C.zf) goto L_111a7308;
  /* 111a7307 int3  */
  x86_unimpl("int3 @ 0x111a7307");
L_111a7308:;
  /* 111a7308 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a730a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a730c jne 0x111a72e6 */
  if (!C.zf) goto L_111a72e6;
L_111a730e:;
  /* 111a730e pop edi */
  EDI = (pop32());
  /* 111a730f pop esi */
  ESI = (pop32());
  /* 111a7310 pop ebx */
  EBX = (pop32());
  /* 111a7311 mov esp, ebp */
  ESP = (EBP);
  /* 111a7313 pop ebp */
  EBP = (pop32());
  /* 111a7314 ret  */
  ESPCHK(0x111a7250u, _esp0);
  ESP += 4; return;
}

/* FUN_10007320 @ 0x111a7320 (329 bytes, 102 insns) */
void f_111a7320(void) {
  FTRACE(0x111a7320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7320 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7321 mov ebp, esp */
  EBP = (ESP);
  /* 111a7323 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7326 cmp dword ptr [0x111d3190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a732d jne 0x111a7334 */
  if (!C.zf) goto L_111a7334;
  /* 111a732f call 0x111abc60 */
  push32(0x111a7334u); f_111abc60();
L_111a7334:;
  /* 111a7334 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111a733b mov eax, dword ptr [0x111d1648] */
  EAX = (r32((uint32_t)(0x111d1648)));
  /* 111a7340 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a7343:;
  /* 111a7343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7346 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111a7349 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a734b je 0x111a7379 */
  if (C.zf) goto L_111a7379;
  /* 111a734d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7350 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a7353 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7356 je 0x111a7361 */
  if (C.zf) goto L_111a7361;
  /* 111a7358 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a735b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a735e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111a7361:;
  /* 111a7361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7364 push eax */
  push32((uint32_t)(EAX));
  /* 111a7365 call 0x111a81e0 */
  push32(0x111a736au); f_111a81e0();
  /* 111a736a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a736d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7370 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 111a7374 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a7377 jmp 0x111a7343 */
  goto L_111a7343;
L_111a7379:;
  /* 111a7379 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 111a737b push 0x111ccde4 */
  push32((uint32_t)(0x111ccde4u));
  /* 111a7380 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a7382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7385 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 111a738c push ecx */
  push32((uint32_t)(ECX));
  /* 111a738d call 0x111a53b0 */
  push32(0x111a7392u); f_111a53b0();
  /* 111a7392 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7395 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a7398 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a739b mov dword ptr [0x111d167c], edx */
  w32((uint32_t)(0x111d167c), (EDX));
  /* 111a73a1 cmp dword ptr [0x111d167c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d167c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a73a8 jne 0x111a73b4 */
  if (!C.zf) goto L_111a73b4;
  /* 111a73aa push 9 */
  push32((uint32_t)(0x9u));
  /* 111a73ac call 0x111a4320 */
  push32(0x111a73b1u); f_111a4320();
  /* 111a73b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a73b4:;
  /* 111a73b4 mov eax, dword ptr [0x111d1648] */
  EAX = (r32((uint32_t)(0x111d1648)));
  /* 111a73b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a73bc jmp 0x111a73c7 */
  goto L_111a73c7;
L_111a73be:;
  /* 111a73be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a73c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a73c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a73c7:;
  /* 111a73c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a73ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111a73cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a73cf je 0x111a7437 */
  if (C.zf) goto L_111a7437;
  /* 111a73d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a73d4 push ecx */
  push32((uint32_t)(ECX));
  /* 111a73d5 call 0x111a81e0 */
  push32(0x111a73dau); f_111a81e0();
  /* 111a73da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a73dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a73e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111a73e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a73e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111a73e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a73ec je 0x111a7435 */
  if (C.zf) goto L_111a7435;
  /* 111a73ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 111a73f0 push 0x111ccde4 */
  push32((uint32_t)(0x111ccde4u));
  /* 111a73f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a73f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a73fa push ecx */
  push32((uint32_t)(ECX));
  /* 111a73fb call 0x111a53b0 */
  push32(0x111a7400u); f_111a53b0();
  /* 111a7400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7403 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7406 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111a7408 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a740b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a740e jne 0x111a741a */
  if (!C.zf) goto L_111a741a;
  /* 111a7410 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a7412 call 0x111a4320 */
  push32(0x111a7417u); f_111a4320();
  /* 111a7417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a741a:;
  /* 111a741a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a741d push ecx */
  push32((uint32_t)(ECX));
  /* 111a741e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7421 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a7423 push eax */
  push32((uint32_t)(EAX));
  /* 111a7424 call 0x111a8360 */
  push32(0x111a7429u); f_111a8360();
  /* 111a7429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a742c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a742f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7432 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111a7435:;
  /* 111a7435 jmp 0x111a73be */
  goto L_111a73be;
L_111a7437:;
  /* 111a7437 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a7439 mov edx, dword ptr [0x111d1648] */
  EDX = (r32((uint32_t)(0x111d1648)));
  /* 111a743f push edx */
  push32((uint32_t)(EDX));
  /* 111a7440 call 0x111a5e40 */
  push32(0x111a7445u); f_111a5e40();
  /* 111a7445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7448 mov dword ptr [0x111d1648], 0 */
  w32((uint32_t)(0x111d1648), (0x0u));
  /* 111a7452 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7455 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111a745b mov dword ptr [0x111d3180], 1 */
  w32((uint32_t)(0x111d3180), (0x1u));
  /* 111a7465 mov esp, ebp */
  ESP = (EBP);
  /* 111a7467 pop ebp */
  EBP = (pop32());
  /* 111a7468 ret  */
  ESPCHK(0x111a7320u, _esp0);
  ESP += 4; return;
}

/* FUN_10007470 @ 0x111a7470 (216 bytes, 69 insns) */
void f_111a7470(void) {
  FTRACE(0x111a7470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7470 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7471 mov ebp, esp */
  EBP = (ESP);
  /* 111a7473 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7476 cmp dword ptr [0x111d3190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d3190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a747d jne 0x111a7484 */
  if (!C.zf) goto L_111a7484;
  /* 111a747f call 0x111abc60 */
  push32(0x111a7484u); f_111abc60();
L_111a7484:;
  /* 111a7484 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 111a7489 push 0x111d16b8 */
  push32((uint32_t)(0x111d16b8u));
  /* 111a748e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7490 call dword ptr [0x111d43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43a0))), 0x111a7496u);
  /* 111a7496 mov dword ptr [0x111d168c], 0x111d16b8 */
  w32((uint32_t)(0x111d168c), (0x111d16b8u));
  /* 111a74a0 mov eax, dword ptr [0x111d31ac] */
  EAX = (r32((uint32_t)(0x111d31ac)));
  /* 111a74a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a74a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a74aa jne 0x111a74b7 */
  if (!C.zf) goto L_111a74b7;
  /* 111a74ac mov edx, dword ptr [0x111d168c] */
  EDX = (r32((uint32_t)(0x111d168c)));
  /* 111a74b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 111a74b5 jmp 0x111a74bf */
  goto L_111a74bf;
L_111a74b7:;
  /* 111a74b7 mov eax, dword ptr [0x111d31ac] */
  EAX = (r32((uint32_t)(0x111d31ac)));
  /* 111a74bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_111a74bf:;
  /* 111a74bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a74c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111a74c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 111a74c8 push edx */
  push32((uint32_t)(EDX));
  /* 111a74c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111a74cc push eax */
  push32((uint32_t)(EAX));
  /* 111a74cd push 0 */
  push32((uint32_t)(0x0u));
  /* 111a74cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111a74d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a74d4 push ecx */
  push32((uint32_t)(ECX));
  /* 111a74d5 call 0x111a7550 */
  push32(0x111a74dau); f_111a7550();
  /* 111a74da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a74dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 111a74e2 push 0x111ccdf0 */
  push32((uint32_t)(0x111ccdf0u));
  /* 111a74e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a74e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a74ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a74ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 111a74f2 push ecx */
  push32((uint32_t)(ECX));
  /* 111a74f3 call 0x111a53b0 */
  push32(0x111a74f8u); f_111a53b0();
  /* 111a74f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a74fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a74fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7502 jne 0x111a750e */
  if (!C.zf) goto L_111a750e;
  /* 111a7504 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a7506 call 0x111a4320 */
  push32(0x111a750bu); f_111a4320();
  /* 111a750b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a750e:;
  /* 111a750e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 111a7511 push edx */
  push32((uint32_t)(EDX));
  /* 111a7512 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111a7515 push eax */
  push32((uint32_t)(EAX));
  /* 111a7516 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7519 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a751c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 111a751f push eax */
  push32((uint32_t)(EAX));
  /* 111a7520 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7523 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7524 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a7527 push edx */
  push32((uint32_t)(EDX));
  /* 111a7528 call 0x111a7550 */
  push32(0x111a752du); f_111a7550();
  /* 111a752d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7530 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7533 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7536 mov dword ptr [0x111d1670], eax */
  w32((uint32_t)(0x111d1670), (EAX));
  /* 111a753b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a753e mov dword ptr [0x111d1674], ecx */
  w32((uint32_t)(0x111d1674), (ECX));
  /* 111a7544 mov esp, ebp */
  ESP = (EBP);
  /* 111a7546 pop ebp */
  EBP = (pop32());
  /* 111a7547 ret  */
  ESPCHK(0x111a7470u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x111a7550 (1060 bytes, 360 insns) */
void f_111a7550(void) {
  FTRACE(0x111a7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7550 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7551 mov ebp, esp */
  EBP = (ESP);
  /* 111a7553 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7556 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7559 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111a755f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a7562 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 111a7568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a756b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a756e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7572 je 0x111a7585 */
  if (C.zf) goto L_111a7585;
  /* 111a7574 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a7577 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a757a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111a757c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a757f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7582 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_111a7585:;
  /* 111a7585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7588 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a758b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a758e jne 0x111a765d */
  if (!C.zf) goto L_111a765d;
L_111a7594:;
  /* 111a7594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7597 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a759a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a759d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a75a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a75a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a75a6 je 0x111a7622 */
  if (C.zf) goto L_111a7622;
  /* 111a75a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a75ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111a75ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a75b0 je 0x111a7622 */
  if (C.zf) goto L_111a7622;
  /* 111a75b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a75b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a75b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a75b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a75bb mov al, byte ptr [edx + 0x111d2ee1] */
  AL = (r8((uint32_t)(EDX + 0x111d2ee1)));
  /* 111a75c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 111a75c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a75c6 je 0x111a75f7 */
  if (C.zf) goto L_111a75f7;
  /* 111a75c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a75cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a75cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a75d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a75d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111a75d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a75d9 je 0x111a75f7 */
  if (C.zf) goto L_111a75f7;
  /* 111a75db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a75de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a75e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111a75e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111a75e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a75e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a75eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111a75ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a75f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a75f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111a75f7:;
  /* 111a75f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a75fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a75fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a75ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7602 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111a7604 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7608 je 0x111a761d */
  if (C.zf) goto L_111a761d;
  /* 111a760a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a760d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7610 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a7612 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a7614 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7617 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a761a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_111a761d:;
  /* 111a761d jmp 0x111a7594 */
  goto L_111a7594;
L_111a7622:;
  /* 111a7622 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7625 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a7627 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a762a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a762d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111a762f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7633 je 0x111a7644 */
  if (C.zf) goto L_111a7644;
  /* 111a7635 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7638 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 111a763b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a763e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7641 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_111a7644:;
  /* 111a7644 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7647 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a764a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a764d jne 0x111a7658 */
  if (!C.zf) goto L_111a7658;
  /* 111a764f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7652 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7655 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111a7658:;
  /* 111a7658 jmp 0x111a772c */
  goto L_111a772c;
L_111a765d:;
  /* 111a765d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7660 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a7662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7665 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7668 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111a766a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a766e je 0x111a7683 */
  if (C.zf) goto L_111a7683;
  /* 111a7670 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7676 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a7678 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a767a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a767d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7680 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_111a7683:;
  /* 111a7683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7686 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a7688 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 111a768b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a768e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7691 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a7694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7697 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a769d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a769f mov dl, byte ptr [ecx + 0x111d2ee1] */
  DL = (r8((uint32_t)(ECX + 0x111d2ee1)));
  /* 111a76a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 111a76a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a76aa je 0x111a76db */
  if (C.zf) goto L_111a76db;
  /* 111a76ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a76af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a76b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a76b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a76b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111a76b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a76bd je 0x111a76d2 */
  if (C.zf) goto L_111a76d2;
  /* 111a76bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a76c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a76c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a76c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a76c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a76cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a76cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_111a76d2:;
  /* 111a76d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a76d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a76d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a76db:;
  /* 111a76db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a76de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a76e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a76e7 je 0x111a7707 */
  if (C.zf) goto L_111a7707;
  /* 111a76e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a76ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a76f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a76f3 je 0x111a7707 */
  if (C.zf) goto L_111a7707;
  /* 111a76f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a76f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a76fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7701 jne 0x111a765d */
  if (!C.zf) goto L_111a765d;
L_111a7707:;
  /* 111a7707 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a770a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a7710 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a7712 jne 0x111a771f */
  if (!C.zf) goto L_111a771f;
  /* 111a7714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7717 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a771a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a771d jmp 0x111a772c */
  goto L_111a772c;
L_111a771f:;
  /* 111a771f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7723 je 0x111a772c */
  if (C.zf) goto L_111a772c;
  /* 111a7725 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7728 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_111a772c:;
  /* 111a772c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_111a7733:;
  /* 111a7733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7736 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111a7739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a773b je 0x111a775e */
  if (C.zf) goto L_111a775e;
L_111a773d:;
  /* 111a773d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7740 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111a7743 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7746 je 0x111a7753 */
  if (C.zf) goto L_111a7753;
  /* 111a7748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a774b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a774e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7751 jne 0x111a775e */
  if (!C.zf) goto L_111a775e;
L_111a7753:;
  /* 111a7753 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7759 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a775c jmp 0x111a773d */
  goto L_111a773d;
L_111a775e:;
  /* 111a775e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7761 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a7764 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a7766 jne 0x111a776d */
  if (!C.zf) goto L_111a776d;
  /* 111a7768 jmp 0x111a794b */
  goto L_111a794b;
L_111a776d:;
  /* 111a776d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7771 je 0x111a7784 */
  if (C.zf) goto L_111a7784;
  /* 111a7773 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a7776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7779 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 111a777b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a777e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7781 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_111a7784:;
  /* 111a7784 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a7787 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a7789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a778c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a778f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_111a7791:;
  /* 111a7791 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111a7798 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_111a779f:;
  /* 111a779f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a77a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111a77a5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a77a8 jne 0x111a77be */
  if (!C.zf) goto L_111a77be;
  /* 111a77aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a77ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a77b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a77b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a77b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a77b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111a77bc jmp 0x111a779f */
  goto L_111a779f;
L_111a77be:;
  /* 111a77be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a77c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a77c4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a77c7 jne 0x111a781a */
  if (!C.zf) goto L_111a781a;
  /* 111a77c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a77cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a77ce mov ecx, 2 */
  ECX = (0x2u);
  /* 111a77d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111a77d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a77d7 jne 0x111a7812 */
  if (!C.zf) goto L_111a7812;
  /* 111a77d9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a77dd je 0x111a77ff */
  if (C.zf) goto L_111a77ff;
  /* 111a77df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a77e2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 111a77e6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a77e9 jne 0x111a77f6 */
  if (!C.zf) goto L_111a77f6;
  /* 111a77eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a77ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a77f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a77f4 jmp 0x111a77fd */
  goto L_111a77fd;
L_111a77f6:;
  /* 111a77f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111a77fd:;
  /* 111a77fd jmp 0x111a7806 */
  goto L_111a7806;
L_111a77ff:;
  /* 111a77ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_111a7806:;
  /* 111a7806 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a7808 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a780c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 111a780f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_111a7812:;
  /* 111a7812 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a7815 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111a7817 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_111a781a:;
  /* 111a781a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a781d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a7820 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7823 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111a7826 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a7828 je 0x111a784e */
  if (C.zf) goto L_111a784e;
  /* 111a782a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a782e je 0x111a783f */
  if (C.zf) goto L_111a783f;
  /* 111a7830 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7833 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 111a7836 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7839 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a783c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_111a783f:;
  /* 111a783f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7842 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a7844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7847 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a784a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111a784c jmp 0x111a781a */
  goto L_111a781a;
L_111a784e:;
  /* 111a784e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7851 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111a7854 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a7856 je 0x111a7874 */
  if (C.zf) goto L_111a7874;
  /* 111a7858 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a785c jne 0x111a7879 */
  if (!C.zf) goto L_111a7879;
  /* 111a785e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7861 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111a7864 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7867 je 0x111a7874 */
  if (C.zf) goto L_111a7874;
  /* 111a7869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a786c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111a786f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7872 jne 0x111a7879 */
  if (!C.zf) goto L_111a7879;
L_111a7874:;
  /* 111a7874 jmp 0x111a7924 */
  goto L_111a7924;
L_111a7879:;
  /* 111a7879 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a787d je 0x111a7916 */
  if (C.zf) goto L_111a7916;
  /* 111a7883 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7887 je 0x111a78dd */
  if (C.zf) goto L_111a78dd;
  /* 111a7889 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a788c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a788e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111a7890 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a7892 mov cl, byte ptr [eax + 0x111d2ee1] */
  CL = (r8((uint32_t)(EAX + 0x111d2ee1)));
  /* 111a7898 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 111a789b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a789d je 0x111a78c8 */
  if (C.zf) goto L_111a78c8;
  /* 111a789f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a78a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a78a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 111a78a7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 111a78a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a78ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a78af mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 111a78b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a78b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a78b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a78bb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a78be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a78c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a78c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a78c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_111a78c8:;
  /* 111a78c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a78cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a78ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111a78d0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111a78d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a78d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a78d8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 111a78db jmp 0x111a7909 */
  goto L_111a7909;
L_111a78dd:;
  /* 111a78dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a78e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a78e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111a78e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a78e6 mov cl, byte ptr [eax + 0x111d2ee1] */
  CL = (r8((uint32_t)(EAX + 0x111d2ee1)));
  /* 111a78ec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 111a78ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a78f1 je 0x111a7909 */
  if (C.zf) goto L_111a7909;
  /* 111a78f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a78f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a78f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a78fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a78ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a7901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7904 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7907 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111a7909:;
  /* 111a7909 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a790c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a790e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7914 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_111a7916:;
  /* 111a7916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7919 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a791c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a791f jmp 0x111a7791 */
  goto L_111a7791;
L_111a7924:;
  /* 111a7924 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7928 je 0x111a7939 */
  if (C.zf) goto L_111a7939;
  /* 111a792a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a792d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 111a7930 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7933 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7936 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_111a7939:;
  /* 111a7939 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a793c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a793e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111a7944 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111a7946 jmp 0x111a7733 */
  goto L_111a7733;
L_111a794b:;
  /* 111a794b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a794f je 0x111a7963 */
  if (C.zf) goto L_111a7963;
  /* 111a7951 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a7954 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111a795a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a795d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7960 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_111a7963:;
  /* 111a7963 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a7966 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a7968 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a796b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a796e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111a7970 mov esp, ebp */
  ESP = (EBP);
  /* 111a7972 pop ebp */
  EBP = (pop32());
  /* 111a7973 ret  */
  ESPCHK(0x111a7550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007980 @ 0x111a7980 (537 bytes, 173 insns) */
void f_111a7980(void) {
  FTRACE(0x111a7980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7980 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7981 mov ebp, esp */
  EBP = (ESP);
  /* 111a7983 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7986 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 111a798d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 111a7994 cmp dword ptr [0x111d17bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d17bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a799b jne 0x111a79da */
  if (!C.zf) goto L_111a79da;
  /* 111a799d call dword ptr [0x111d436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d436c))), 0x111a79a3u);
  /* 111a79a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111a79a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a79aa je 0x111a79b8 */
  if (C.zf) goto L_111a79b8;
  /* 111a79ac mov dword ptr [0x111d17bc], 1 */
  w32((uint32_t)(0x111d17bc), (0x1u));
  /* 111a79b6 jmp 0x111a79da */
  goto L_111a79da;
L_111a79b8:;
  /* 111a79b8 call dword ptr [0x111d4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4364))), 0x111a79beu);
  /* 111a79be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111a79c1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a79c5 je 0x111a79d3 */
  if (C.zf) goto L_111a79d3;
  /* 111a79c7 mov dword ptr [0x111d17bc], 2 */
  w32((uint32_t)(0x111d17bc), (0x2u));
  /* 111a79d1 jmp 0x111a79da */
  goto L_111a79da;
L_111a79d3:;
  /* 111a79d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a79d5 jmp 0x111a7b95 */
  goto L_111a7b95;
L_111a79da:;
  /* 111a79da cmp dword ptr [0x111d17bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d17bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a79e1 jne 0x111a7ade */
  if (!C.zf) goto L_111a7ade;
  /* 111a79e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a79eb jne 0x111a7a03 */
  if (!C.zf) goto L_111a7a03;
  /* 111a79ed call dword ptr [0x111d436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d436c))), 0x111a79f3u);
  /* 111a79f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111a79f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a79fa jne 0x111a7a03 */
  if (!C.zf) goto L_111a7a03;
  /* 111a79fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a79fe jmp 0x111a7b95 */
  goto L_111a7b95;
L_111a7a03:;
  /* 111a7a03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a7a06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111a7a09:;
  /* 111a7a09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7a0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a7a0e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 111a7a11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a7a13 je 0x111a7a35 */
  if (C.zf) goto L_111a7a35;
  /* 111a7a15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7a18 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7a1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a7a1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7a21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a7a23 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 111a7a26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a7a28 jne 0x111a7a33 */
  if (!C.zf) goto L_111a7a33;
  /* 111a7a2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7a2d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7a30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111a7a33:;
  /* 111a7a33 jmp 0x111a7a09 */
  goto L_111a7a09;
L_111a7a35:;
  /* 111a7a35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7a38 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7a3b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 111a7a3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7a40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a7a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7a4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7a4e push edx */
  push32((uint32_t)(EDX));
  /* 111a7a4f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a7a52 push eax */
  push32((uint32_t)(EAX));
  /* 111a7a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7a57 call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111a7a5du);
  /* 111a7a5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111a7a60 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7a64 je 0x111a7a84 */
  if (C.zf) goto L_111a7a84;
  /* 111a7a66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 111a7a68 push 0x111ccdfc */
  push32((uint32_t)(0x111ccdfcu));
  /* 111a7a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 111a7a6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a7a72 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7a73 call 0x111a53b0 */
  push32(0x111a7a78u); f_111a53b0();
  /* 111a7a78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7a7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111a7a7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7a82 jne 0x111a7a95 */
  if (!C.zf) goto L_111a7a95;
L_111a7a84:;
  /* 111a7a84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a7a87 push edx */
  push32((uint32_t)(EDX));
  /* 111a7a88 call dword ptr [0x111d43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43b0))), 0x111a7a8eu);
  /* 111a7a8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a7a90 jmp 0x111a7b95 */
  goto L_111a7b95;
L_111a7a95:;
  /* 111a7a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7a99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a7a9c push eax */
  push32((uint32_t)(EAX));
  /* 111a7a9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a7aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7aa4 push edx */
  push32((uint32_t)(EDX));
  /* 111a7aa5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a7aa8 push eax */
  push32((uint32_t)(EAX));
  /* 111a7aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7aab push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7aad call dword ptr [0x111d4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4368))), 0x111a7ab3u);
  /* 111a7ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a7ab5 jne 0x111a7acc */
  if (!C.zf) goto L_111a7acc;
  /* 111a7ab7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a7ab9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a7abc push ecx */
  push32((uint32_t)(ECX));
  /* 111a7abd call 0x111a5e40 */
  push32(0x111a7ac2u); f_111a5e40();
  /* 111a7ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7ac5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_111a7acc:;
  /* 111a7acc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a7acf push edx */
  push32((uint32_t)(EDX));
  /* 111a7ad0 call dword ptr [0x111d43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43b0))), 0x111a7ad6u);
  /* 111a7ad6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a7ad9 jmp 0x111a7b95 */
  goto L_111a7b95;
L_111a7ade:;
  /* 111a7ade cmp dword ptr [0x111d17bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x111d17bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7ae5 jne 0x111a7b93 */
  if (!C.zf) goto L_111a7b93;
  /* 111a7aeb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7aef jne 0x111a7b07 */
  if (!C.zf) goto L_111a7b07;
  /* 111a7af1 call dword ptr [0x111d4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4364))), 0x111a7af7u);
  /* 111a7af7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111a7afa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7afe jne 0x111a7b07 */
  if (!C.zf) goto L_111a7b07;
  /* 111a7b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a7b02 jmp 0x111a7b95 */
  goto L_111a7b95;
L_111a7b07:;
  /* 111a7b07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a7b0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111a7b0d:;
  /* 111a7b0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7b10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111a7b13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a7b15 je 0x111a7b35 */
  if (C.zf) goto L_111a7b35;
  /* 111a7b17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7b1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7b1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a7b20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7b23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111a7b26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a7b28 jne 0x111a7b33 */
  if (!C.zf) goto L_111a7b33;
  /* 111a7b2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7b2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7b30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_111a7b33:;
  /* 111a7b33 jmp 0x111a7b0d */
  goto L_111a7b0d;
L_111a7b35:;
  /* 111a7b35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7b38 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7b3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7b3e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111a7b41 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 111a7b46 push 0x111ccdfc */
  push32((uint32_t)(0x111ccdfcu));
  /* 111a7b4b push 2 */
  push32((uint32_t)(0x2u));
  /* 111a7b4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a7b50 push edx */
  push32((uint32_t)(EDX));
  /* 111a7b51 call 0x111a53b0 */
  push32(0x111a7b56u); f_111a53b0();
  /* 111a7b56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7b59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a7b5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7b60 jne 0x111a7b70 */
  if (!C.zf) goto L_111a7b70;
  /* 111a7b62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a7b65 push eax */
  push32((uint32_t)(EAX));
  /* 111a7b66 call dword ptr [0x111d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4370))), 0x111a7b6cu);
  /* 111a7b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a7b6e jmp 0x111a7b95 */
  goto L_111a7b95;
L_111a7b70:;
  /* 111a7b70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a7b73 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7b74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a7b77 push edx */
  push32((uint32_t)(EDX));
  /* 111a7b78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7b7b push eax */
  push32((uint32_t)(EAX));
  /* 111a7b7c call 0x111abc90 */
  push32(0x111a7b81u); f_111abc90();
  /* 111a7b81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7b84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a7b87 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7b88 call dword ptr [0x111d4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4370))), 0x111a7b8eu);
  /* 111a7b8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7b91 jmp 0x111a7b95 */
  goto L_111a7b95;
L_111a7b93:;
  /* 111a7b93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a7b95:;
  /* 111a7b95 mov esp, ebp */
  ESP = (EBP);
  /* 111a7b97 pop ebp */
  EBP = (pop32());
  /* 111a7b98 ret  */
  ESPCHK(0x111a7980u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ba0 @ 0x111a7ba0 (77 bytes, 25 insns) */
void f_111a7ba0(void) {
  FTRACE(0x111a7ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7ba1 mov ebp, esp */
  EBP = (ESP);
  /* 111a7ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7ba5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111a7baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a7bac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7bb0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 111a7bb3 push eax */
  push32((uint32_t)(EAX));
  /* 111a7bb4 call dword ptr [0x111d4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4358))), 0x111a7bbau);
  /* 111a7bba mov dword ptr [0x111d300c], eax */
  w32((uint32_t)(0x111d300c), (EAX));
  /* 111a7bbf cmp dword ptr [0x111d300c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7bc6 jne 0x111a7bcc */
  if (!C.zf) goto L_111a7bcc;
  /* 111a7bc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a7bca jmp 0x111a7beb */
  goto L_111a7beb;
L_111a7bcc:;
  /* 111a7bcc call 0x111a9650 */
  push32(0x111a7bd1u); f_111a9650();
  /* 111a7bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a7bd3 jne 0x111a7be6 */
  if (!C.zf) goto L_111a7be6;
  /* 111a7bd5 mov ecx, dword ptr [0x111d300c] */
  ECX = (r32((uint32_t)(0x111d300c)));
  /* 111a7bdb push ecx */
  push32((uint32_t)(ECX));
  /* 111a7bdc call dword ptr [0x111d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d435c))), 0x111a7be2u);
  /* 111a7be2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a7be4 jmp 0x111a7beb */
  goto L_111a7beb;
L_111a7be6:;
  /* 111a7be6 mov eax, 1 */
  EAX = (0x1u);
L_111a7beb:;
  /* 111a7beb pop ebp */
  EBP = (pop32());
  /* 111a7bec ret  */
  ESPCHK(0x111a7ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x111a7bf0 (156 bytes, 48 insns) */
void f_111a7bf0(void) {
  FTRACE(0x111a7bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7bf1 mov ebp, esp */
  EBP = (ESP);
  /* 111a7bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7bf6 mov eax, dword ptr [0x111d3008] */
  EAX = (r32((uint32_t)(0x111d3008)));
  /* 111a7bfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a7bfe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111a7c05 jmp 0x111a7c10 */
  goto L_111a7c10;
L_111a7c07:;
  /* 111a7c07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7c0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7c0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a7c10:;
  /* 111a7c10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7c13 cmp edx, dword ptr [0x111d3004] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111d3004))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7c19 jge 0x111a7c66 */
  if ((C.sf==C.of)) goto L_111a7c66;
  /* 111a7c1b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 111a7c20 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 111a7c25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7c28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111a7c2b push ecx */
  push32((uint32_t)(ECX));
  /* 111a7c2c call dword ptr [0x111d4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4350))), 0x111a7c32u);
  /* 111a7c32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111a7c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7c39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7c3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 111a7c3f push eax */
  push32((uint32_t)(EAX));
  /* 111a7c40 call dword ptr [0x111d4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4350))), 0x111a7c46u);
  /* 111a7c46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7c49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 111a7c4c push edx */
  push32((uint32_t)(EDX));
  /* 111a7c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7c4f mov eax, dword ptr [0x111d300c] */
  EAX = (r32((uint32_t)(0x111d300c)));
  /* 111a7c54 push eax */
  push32((uint32_t)(EAX));
  /* 111a7c55 call dword ptr [0x111d4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4360))), 0x111a7c5bu);
  /* 111a7c5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7c5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7c61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111a7c64 jmp 0x111a7c07 */
  goto L_111a7c07;
L_111a7c66:;
  /* 111a7c66 mov edx, dword ptr [0x111d3008] */
  EDX = (r32((uint32_t)(0x111d3008)));
  /* 111a7c6c push edx */
  push32((uint32_t)(EDX));
  /* 111a7c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7c6f mov eax, dword ptr [0x111d300c] */
  EAX = (r32((uint32_t)(0x111d300c)));
  /* 111a7c74 push eax */
  push32((uint32_t)(EAX));
  /* 111a7c75 call dword ptr [0x111d4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4360))), 0x111a7c7bu);
  /* 111a7c7b mov ecx, dword ptr [0x111d300c] */
  ECX = (r32((uint32_t)(0x111d300c)));
  /* 111a7c81 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7c82 call dword ptr [0x111d435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d435c))), 0x111a7c88u);
  /* 111a7c88 mov esp, ebp */
  ESP = (EBP);
  /* 111a7c8a pop ebp */
  EBP = (pop32());
  /* 111a7c8b ret  */
  ESPCHK(0x111a7bf0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x111a7c90 (73 bytes, 19 insns) */
void f_111a7c90(void) {
  FTRACE(0x111a7c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7c90 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7c91 mov ebp, esp */
  EBP = (ESP);
  /* 111a7c93 cmp dword ptr [0x111d1650], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1650))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7c9a je 0x111a7cae */
  if (C.zf) goto L_111a7cae;
  /* 111a7c9c cmp dword ptr [0x111d1650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7ca3 jne 0x111a7cd7 */
  if (!C.zf) goto L_111a7cd7;
  /* 111a7ca5 cmp dword ptr [0x111d1654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7cac jne 0x111a7cd7 */
  if (!C.zf) goto L_111a7cd7;
L_111a7cae:;
  /* 111a7cae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 111a7cb3 call 0x111a7ce0 */
  push32(0x111a7cb8u); f_111a7ce0();
  /* 111a7cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7cbb cmp dword ptr [0x111d17c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d17c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7cc2 je 0x111a7cca */
  if (C.zf) goto L_111a7cca;
  /* 111a7cc4 call dword ptr [0x111d17c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d17c0))), 0x111a7ccau);
L_111a7cca:;
  /* 111a7cca push 0xff */
  push32((uint32_t)(0xffu));
  /* 111a7ccf call 0x111a7ce0 */
  push32(0x111a7cd4u); f_111a7ce0();
  /* 111a7cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a7cd7:;
  /* 111a7cd7 pop ebp */
  EBP = (pop32());
  /* 111a7cd8 ret  */
  ESPCHK(0x111a7c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x111a7ce0 (447 bytes, 131 insns) */
void f_111a7ce0(void) {
  FTRACE(0x111a7ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7ce1 mov ebp, esp */
  EBP = (ESP);
  /* 111a7ce3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7ce9 push ebx */
  push32((uint32_t)(EBX));
  /* 111a7cea push esi */
  push32((uint32_t)(ESI));
  /* 111a7ceb push edi */
  push32((uint32_t)(EDI));
  /* 111a7cec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111a7cf3 jmp 0x111a7cfe */
  goto L_111a7cfe;
L_111a7cf5:;
  /* 111a7cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7cf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7cfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111a7cfe:;
  /* 111a7cfe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7d02 jae 0x111a7d17 */
  if (!C.cf) goto L_111a7d17;
  /* 111a7d04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7d0a cmp edx, dword ptr [ecx*8 + 0x111cfab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x111cfab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7d11 jne 0x111a7d15 */
  if (!C.zf) goto L_111a7d15;
  /* 111a7d13 jmp 0x111a7d17 */
  goto L_111a7d17;
L_111a7d15:;
  /* 111a7d15 jmp 0x111a7cf5 */
  goto L_111a7cf5;
L_111a7d17:;
  /* 111a7d17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7d1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7d1d cmp ecx, dword ptr [eax*8 + 0x111cfab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x111cfab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7d24 jne 0x111a7e98 */
  if (!C.zf) goto L_111a7e98;
  /* 111a7d2a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7d31 je 0x111a7d54 */
  if (C.zf) goto L_111a7d54;
  /* 111a7d33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7d36 mov eax, dword ptr [edx*8 + 0x111cfab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x111cfab4)));
  /* 111a7d3d push eax */
  push32((uint32_t)(EAX));
  /* 111a7d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a7d46 call 0x111a4470 */
  push32(0x111a7d4bu); f_111a4470();
  /* 111a7d4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7d4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7d51 jne 0x111a7d54 */
  if (!C.zf) goto L_111a7d54;
  /* 111a7d53 int3  */
  x86_unimpl("int3 @ 0x111a7d53");
L_111a7d54:;
  /* 111a7d54 cmp dword ptr [0x111d1650], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1650))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7d5b je 0x111a7d6f */
  if (C.zf) goto L_111a7d6f;
  /* 111a7d5d cmp dword ptr [0x111d1650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7d64 jne 0x111a7da8 */
  if (!C.zf) goto L_111a7da8;
  /* 111a7d66 cmp dword ptr [0x111d1654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111d1654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7d6d jne 0x111a7da8 */
  if (!C.zf) goto L_111a7da8;
L_111a7d6f:;
  /* 111a7d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7d71 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 111a7d74 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7d75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7d78 mov eax, dword ptr [edx*8 + 0x111cfab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x111cfab4)));
  /* 111a7d7f push eax */
  push32((uint32_t)(EAX));
  /* 111a7d80 call 0x111a81e0 */
  push32(0x111a7d85u); f_111a81e0();
  /* 111a7d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7d88 push eax */
  push32((uint32_t)(EAX));
  /* 111a7d89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7d8c mov edx, dword ptr [ecx*8 + 0x111cfab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x111cfab4)));
  /* 111a7d93 push edx */
  push32((uint32_t)(EDX));
  /* 111a7d94 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111a7d96 call dword ptr [0x111d4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4384))), 0x111a7d9cu);
  /* 111a7d9c push eax */
  push32((uint32_t)(EAX));
  /* 111a7d9d call dword ptr [0x111d4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4388))), 0x111a7da3u);
  /* 111a7da3 jmp 0x111a7e98 */
  goto L_111a7e98;
L_111a7da8:;
  /* 111a7da8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7daf je 0x111a7e98 */
  if (C.zf) goto L_111a7e98;
  /* 111a7db5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 111a7dba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 111a7dc0 push eax */
  push32((uint32_t)(EAX));
  /* 111a7dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7dc3 call dword ptr [0x111d43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43a0))), 0x111a7dc9u);
  /* 111a7dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a7dcb jne 0x111a7de1 */
  if (!C.zf) goto L_111a7de1;
  /* 111a7dcd push 0x111cc664 */
  push32((uint32_t)(0x111cc664u));
  /* 111a7dd2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 111a7dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7dd9 call 0x111a8360 */
  push32(0x111a7ddeu); f_111a8360();
  /* 111a7dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a7de1:;
  /* 111a7de1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 111a7de7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111a7dea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7ded push eax */
  push32((uint32_t)(EAX));
  /* 111a7dee call 0x111a81e0 */
  push32(0x111a7df3u); f_111a81e0();
  /* 111a7df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7df6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7df9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7dfc jbe 0x111a7e2a */
  if ((C.cf||C.zf)) goto L_111a7e2a;
  /* 111a7dfe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 111a7e04 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7e05 call 0x111a81e0 */
  push32(0x111a7e0au); f_111a81e0();
  /* 111a7e0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7e0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7e10 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 111a7e14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a7e17 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a7e19 push 0x111cc660 */
  push32((uint32_t)(0x111cc660u));
  /* 111a7e1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7e21 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7e22 call 0x111a8bd0 */
  push32(0x111a7e27u); f_111a8bd0();
  /* 111a7e27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a7e2a:;
  /* 111a7e2a push 0x111cd0b8 */
  push32((uint32_t)(0x111cd0b8u));
  /* 111a7e2f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 111a7e35 push edx */
  push32((uint32_t)(EDX));
  /* 111a7e36 call 0x111a8360 */
  push32(0x111a7e3bu); f_111a8360();
  /* 111a7e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7e3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7e41 push eax */
  push32((uint32_t)(EAX));
  /* 111a7e42 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 111a7e48 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7e49 call 0x111a8370 */
  push32(0x111a7e4eu); f_111a8370();
  /* 111a7e4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7e51 push 0x111cc5d8 */
  push32((uint32_t)(0x111cc5d8u));
  /* 111a7e56 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 111a7e5c push edx */
  push32((uint32_t)(EDX));
  /* 111a7e5d call 0x111a8370 */
  push32(0x111a7e62u); f_111a8370();
  /* 111a7e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7e65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7e68 mov ecx, dword ptr [eax*8 + 0x111cfab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x111cfab4)));
  /* 111a7e6f push ecx */
  push32((uint32_t)(ECX));
  /* 111a7e70 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 111a7e76 push edx */
  push32((uint32_t)(EDX));
  /* 111a7e77 call 0x111a8370 */
  push32(0x111a7e7cu); f_111a8370();
  /* 111a7e7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7e7f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 111a7e84 push 0x111cd090 */
  push32((uint32_t)(0x111cd090u));
  /* 111a7e89 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 111a7e8f push eax */
  push32((uint32_t)(EAX));
  /* 111a7e90 call 0x111a8b10 */
  push32(0x111a7e95u); f_111a8b10();
  /* 111a7e95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a7e98:;
  /* 111a7e98 pop edi */
  EDI = (pop32());
  /* 111a7e99 pop esi */
  ESI = (pop32());
  /* 111a7e9a pop ebx */
  EBX = (pop32());
  /* 111a7e9b mov esp, ebp */
  ESP = (EBP);
  /* 111a7e9d pop ebp */
  EBP = (pop32());
  /* 111a7e9e ret  */
  ESPCHK(0x111a7ce0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x111a7ea0 (80 bytes, 27 insns) */
void f_111a7ea0(void) {
  FTRACE(0x111a7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 111a7ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7ea4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111a7eab jmp 0x111a7eb6 */
  goto L_111a7eb6;
L_111a7ead:;
  /* 111a7ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7eb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7eb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a7eb6:;
  /* 111a7eb6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7eba jae 0x111a7ecf */
  if (!C.cf) goto L_111a7ecf;
  /* 111a7ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7ebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7ec2 cmp edx, dword ptr [ecx*8 + 0x111cfab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x111cfab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7ec9 jne 0x111a7ecd */
  if (!C.zf) goto L_111a7ecd;
  /* 111a7ecb jmp 0x111a7ecf */
  goto L_111a7ecf;
L_111a7ecd:;
  /* 111a7ecd jmp 0x111a7ead */
  goto L_111a7ead;
L_111a7ecf:;
  /* 111a7ecf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7ed5 cmp ecx, dword ptr [eax*8 + 0x111cfab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x111cfab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7edc jne 0x111a7eea */
  if (!C.zf) goto L_111a7eea;
  /* 111a7ede mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7ee1 mov eax, dword ptr [edx*8 + 0x111cfab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x111cfab4)));
  /* 111a7ee8 jmp 0x111a7eec */
  goto L_111a7eec;
L_111a7eea:;
  /* 111a7eea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a7eec:;
  /* 111a7eec mov esp, ebp */
  ESP = (EBP);
  /* 111a7eee pop ebp */
  EBP = (pop32());
  /* 111a7eef ret  */
  ESPCHK(0x111a7ea0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x111a7ef0 (66 bytes, 28 insns) */
void f_111a7ef0(void) {
  FTRACE(0x111a7ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7ef1 mov ebp, esp */
  EBP = (ESP);
  /* 111a7ef3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7ef7 jne 0x111a7f17 */
  if (!C.zf) goto L_111a7f17;
  /* 111a7ef9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7efd jge 0x111a7f17 */
  if ((C.sf==C.of)) goto L_111a7f17;
  /* 111a7eff push 1 */
  push32((uint32_t)(0x1u));
  /* 111a7f01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7f04 push eax */
  push32((uint32_t)(EAX));
  /* 111a7f05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a7f08 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7f09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7f0c push edx */
  push32((uint32_t)(EDX));
  /* 111a7f0d call 0x111a7f40 */
  push32(0x111a7f12u); f_111a7f40();
  /* 111a7f12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7f15 jmp 0x111a7f2d */
  goto L_111a7f2d;
L_111a7f17:;
  /* 111a7f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a7f19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a7f1c push eax */
  push32((uint32_t)(EAX));
  /* 111a7f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a7f20 push ecx */
  push32((uint32_t)(ECX));
  /* 111a7f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7f24 push edx */
  push32((uint32_t)(EDX));
  /* 111a7f25 call 0x111a7f40 */
  push32(0x111a7f2au); f_111a7f40();
  /* 111a7f2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a7f2d:;
  /* 111a7f2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a7f30 pop ebp */
  EBP = (pop32());
  /* 111a7f31 ret  */
  ESPCHK(0x111a7ef0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x111a7f40 (194 bytes, 71 insns) */
void f_111a7f40(void) {
  FTRACE(0x111a7f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a7f40 push ebp */
  push32((uint32_t)(EBP));
  /* 111a7f41 mov ebp, esp */
  EBP = (ESP);
  /* 111a7f43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7f46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a7f49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a7f4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7f50 je 0x111a7f69 */
  if (C.zf) goto L_111a7f69;
  /* 111a7f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7f55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 111a7f58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7f5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7f5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a7f61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7f64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111a7f66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111a7f69:;
  /* 111a7f69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7f6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111a7f6f:;
  /* 111a7f6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7f72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a7f74 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111a7f77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111a7f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a7f7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a7f7f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111a7f82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111a7f85 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7f89 jbe 0x111a7fa1 */
  if ((C.cf||C.zf)) goto L_111a7fa1;
  /* 111a7f8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7f8e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7f94 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a7f96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7f99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7f9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a7f9f jmp 0x111a7fb5 */
  goto L_111a7fb5;
L_111a7fa1:;
  /* 111a7fa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a7fa4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7faa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a7fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7faf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7fb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a7fb5:;
  /* 111a7fb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7fb9 ja 0x111a7f6f */
  if ((!C.cf&&!C.zf)) goto L_111a7f6f;
  /* 111a7fbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7fbe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111a7fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7fc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7fc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a7fca:;
  /* 111a7fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7fcd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a7fcf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 111a7fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7fd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7fd8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a7fda mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a7fdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7fdf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 111a7fe2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 111a7fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a7fe7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a7fea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a7fed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7ff0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a7ff3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a7ff6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a7ff9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a7ffc jb 0x111a7fca */
  if (C.cf) goto L_111a7fca;
  /* 111a7ffe mov esp, ebp */
  ESP = (EBP);
  /* 111a8000 pop ebp */
  EBP = (pop32());
  /* 111a8001 ret  */
  ESPCHK(0x111a7f40u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x111a8010 (63 bytes, 24 insns) */
void f_111a8010(void) {
  FTRACE(0x111a8010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8010 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8011 mov ebp, esp */
  EBP = (ESP);
  /* 111a8013 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8014 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8018 jne 0x111a8029 */
  if (!C.zf) goto L_111a8029;
  /* 111a801a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a801e jge 0x111a8029 */
  if ((C.sf==C.of)) goto L_111a8029;
  /* 111a8020 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111a8027 jmp 0x111a8030 */
  goto L_111a8030;
L_111a8029:;
  /* 111a8029 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111a8030:;
  /* 111a8030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8033 push eax */
  push32((uint32_t)(EAX));
  /* 111a8034 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a8037 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8038 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a803b push edx */
  push32((uint32_t)(EDX));
  /* 111a803c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a803f push eax */
  push32((uint32_t)(EAX));
  /* 111a8040 call 0x111a7f40 */
  push32(0x111a8045u); f_111a7f40();
  /* 111a8045 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a804b mov esp, ebp */
  ESP = (EBP);
  /* 111a804d pop ebp */
  EBP = (pop32());
  /* 111a804e ret  */
  ESPCHK(0x111a8010u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x111a8050 (30 bytes, 14 insns) */
void f_111a8050(void) {
  FTRACE(0x111a8050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8050 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8051 mov ebp, esp */
  EBP = (ESP);
  /* 111a8053 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a8055 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a8058 push eax */
  push32((uint32_t)(EAX));
  /* 111a8059 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a805c push ecx */
  push32((uint32_t)(ECX));
  /* 111a805d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8060 push edx */
  push32((uint32_t)(EDX));
  /* 111a8061 call 0x111a7f40 */
  push32(0x111a8066u); f_111a7f40();
  /* 111a8066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a806c pop ebp */
  EBP = (pop32());
  /* 111a806d ret  */
  ESPCHK(0x111a8050u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x111a8070 (72 bytes, 28 insns) */
void f_111a8070(void) {
  FTRACE(0x111a8070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8070 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8071 mov ebp, esp */
  EBP = (ESP);
  /* 111a8073 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8074 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8078 jne 0x111a8091 */
  if (!C.zf) goto L_111a8091;
  /* 111a807a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a807e jg 0x111a8091 */
  if ((!C.zf&&C.sf==C.of)) goto L_111a8091;
  /* 111a8080 jl 0x111a8088 */
  if ((C.sf!=C.of)) goto L_111a8088;
  /* 111a8082 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8086 jae 0x111a8091 */
  if (!C.cf) goto L_111a8091;
L_111a8088:;
  /* 111a8088 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111a808f jmp 0x111a8098 */
  goto L_111a8098;
L_111a8091:;
  /* 111a8091 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111a8098:;
  /* 111a8098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a809b push eax */
  push32((uint32_t)(EAX));
  /* 111a809c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a809f push ecx */
  push32((uint32_t)(ECX));
  /* 111a80a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a80a3 push edx */
  push32((uint32_t)(EDX));
  /* 111a80a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a80a7 push eax */
  push32((uint32_t)(EAX));
  /* 111a80a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a80ab push ecx */
  push32((uint32_t)(ECX));
  /* 111a80ac call 0x111a80c0 */
  push32(0x111a80b1u); f_111a80c0();
  /* 111a80b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a80b4 mov esp, ebp */
  ESP = (EBP);
  /* 111a80b6 pop ebp */
  EBP = (pop32());
  /* 111a80b7 ret  */
  ESPCHK(0x111a8070u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x111a80c0 (242 bytes, 91 insns) */
void f_111a80c0(void) {
  FTRACE(0x111a80c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a80c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a80c1 mov ebp, esp */
  EBP = (ESP);
  /* 111a80c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a80c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a80c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a80cc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a80d0 je 0x111a80f4 */
  if (C.zf) goto L_111a80f4;
  /* 111a80d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a80d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 111a80d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a80db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a80de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a80e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a80e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111a80e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a80e9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a80ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111a80ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111a80f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_111a80f4:;
  /* 111a80f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a80f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111a80fa:;
  /* 111a80fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a80fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a80ff push ecx */
  push32((uint32_t)(ECX));
  /* 111a8100 push eax */
  push32((uint32_t)(EAX));
  /* 111a8101 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8104 push edx */
  push32((uint32_t)(EDX));
  /* 111a8105 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8108 push eax */
  push32((uint32_t)(EAX));
  /* 111a8109 call 0x111ac040 */
  push32(0x111a810eu); f_111ac040();
  /* 111a810e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a8111 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a8114 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a8116 push edx */
  push32((uint32_t)(EDX));
  /* 111a8117 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8118 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a811b push eax */
  push32((uint32_t)(EAX));
  /* 111a811c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a811f push ecx */
  push32((uint32_t)(ECX));
  /* 111a8120 call 0x111abfd0 */
  push32(0x111a8125u); f_111abfd0();
  /* 111a8125 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111a8128 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 111a812b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a812f jbe 0x111a8147 */
  if ((C.cf||C.zf)) goto L_111a8147;
  /* 111a8131 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a8134 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a813a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a813c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a813f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8142 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a8145 jmp 0x111a815b */
  goto L_111a815b;
L_111a8147:;
  /* 111a8147 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a814a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a814d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8150 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a8152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8155 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8158 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111a815b:;
  /* 111a815b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a815f ja 0x111a80fa */
  if ((!C.cf&&!C.zf)) goto L_111a80fa;
  /* 111a8161 jb 0x111a8169 */
  if (C.cf) goto L_111a8169;
  /* 111a8163 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8167 ja 0x111a80fa */
  if ((!C.cf&&!C.zf)) goto L_111a80fa;
L_111a8169:;
  /* 111a8169 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a816c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111a816f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8172 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a8178:;
  /* 111a8178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a817b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a817d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 111a8180 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8183 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8186 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a8188 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111a818a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a818d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 111a8190 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 111a8192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8195 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a819b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a819e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a81a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a81a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a81a7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a81aa jb 0x111a8178 */
  if (C.cf) goto L_111a8178;
  /* 111a81ac mov esp, ebp */
  ESP = (EBP);
  /* 111a81ae pop ebp */
  EBP = (pop32());
  /* 111a81af ret 0x14 */
  ESPCHK(0x111a80c0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x111a81c0 (31 bytes, 15 insns) */
void f_111a81c0(void) {
  FTRACE(0x111a81c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a81c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a81c1 mov ebp, esp */
  EBP = (ESP);
  /* 111a81c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a81c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a81c8 push eax */
  push32((uint32_t)(EAX));
  /* 111a81c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a81cc push ecx */
  push32((uint32_t)(ECX));
  /* 111a81cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a81d0 push edx */
  push32((uint32_t)(EDX));
  /* 111a81d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a81d4 push eax */
  push32((uint32_t)(EAX));
  /* 111a81d5 call 0x111a80c0 */
  push32(0x111a81dau); f_111a80c0();
  /* 111a81da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a81dd pop ebp */
  EBP = (pop32());
  /* 111a81de ret  */
  ESPCHK(0x111a81c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x111a81e0 (123 bytes, 44 insns) */
void f_111a81e0(void) {
  FTRACE(0x111a81e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a81e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111a81e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111a81ea je 0x111a8200 */
  if (C.zf) goto L_111a8200;
L_111a81ec:;
  /* 111a81ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 111a81ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111a81ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111a81f1 je 0x111a8233 */
  if (C.zf) goto L_111a8233;
  /* 111a81f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111a81f9 jne 0x111a81ec */
  if (!C.zf) goto L_111a81ec;
  /* 111a81fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111a8200:;
  /* 111a8200 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111a8202 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111a8207 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8209 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a820c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111a820e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8211 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111a8216 je 0x111a8200 */
  if (C.zf) goto L_111a8200;
  /* 111a8218 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 111a821b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111a821d je 0x111a8251 */
  if (C.zf) goto L_111a8251;
  /* 111a821f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111a8221 je 0x111a8247 */
  if (C.zf) goto L_111a8247;
  /* 111a8223 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 111a8228 je 0x111a823d */
  if (C.zf) goto L_111a823d;
  /* 111a822a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 111a822f je 0x111a8233 */
  if (C.zf) goto L_111a8233;
  /* 111a8231 jmp 0x111a8200 */
  goto L_111a8200;
L_111a8233:;
  /* 111a8233 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 111a8236 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111a823a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a823c ret  */
  ESPCHK(0x111a81e0u, _esp0);
  ESP += 4; return;
L_111a823d:;
  /* 111a823d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 111a8240 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111a8244 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8246 ret  */
  ESPCHK(0x111a81e0u, _esp0);
  ESP += 4; return;
L_111a8247:;
  /* 111a8247 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 111a824a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111a824e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8250 ret  */
  ESPCHK(0x111a81e0u, _esp0);
  ESP += 4; return;
L_111a8251:;
  /* 111a8251 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 111a8254 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111a8258 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a825a ret  */
  ESPCHK(0x111a81e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008260 @ 0x111a8260 (249 bytes, 93 insns) */
void f_111a8260(void) {
  FTRACE(0x111a8260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8260 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8261 mov ebp, esp */
  EBP = (ESP);
  /* 111a8263 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8266 push ebx */
  push32((uint32_t)(EBX));
  /* 111a8267 push esi */
  push32((uint32_t)(ESI));
  /* 111a8268 push edi */
  push32((uint32_t)(EDI));
  /* 111a8269 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 111a826c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111a826f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 111a8272 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_111a8275:;
  /* 111a8275 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8279 jne 0x111a8299 */
  if (!C.zf) goto L_111a8299;
  /* 111a827b push 0x111cd0f0 */
  push32((uint32_t)(0x111cd0f0u));
  /* 111a8280 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a8282 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 111a8284 push 0x111cd0e4 */
  push32((uint32_t)(0x111cd0e4u));
  /* 111a8289 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a828b call 0x111a4470 */
  push32(0x111a8290u); f_111a4470();
  /* 111a8290 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8293 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8296 jne 0x111a8299 */
  if (!C.zf) goto L_111a8299;
  /* 111a8298 int3  */
  x86_unimpl("int3 @ 0x111a8298");
L_111a8299:;
  /* 111a8299 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a829b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a829d jne 0x111a8275 */
  if (!C.zf) goto L_111a8275;
L_111a829f:;
  /* 111a829f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a82a3 jne 0x111a82c3 */
  if (!C.zf) goto L_111a82c3;
  /* 111a82a5 push 0x111cd0d4 */
  push32((uint32_t)(0x111cd0d4u));
  /* 111a82aa push 0 */
  push32((uint32_t)(0x0u));
  /* 111a82ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 111a82ae push 0x111cd0e4 */
  push32((uint32_t)(0x111cd0e4u));
  /* 111a82b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a82b5 call 0x111a4470 */
  push32(0x111a82bau); f_111a4470();
  /* 111a82ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a82bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a82c0 jne 0x111a82c3 */
  if (!C.zf) goto L_111a82c3;
  /* 111a82c2 int3  */
  x86_unimpl("int3 @ 0x111a82c2");
L_111a82c3:;
  /* 111a82c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a82c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a82c7 jne 0x111a829f */
  if (!C.zf) goto L_111a829f;
  /* 111a82c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a82cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 111a82d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a82d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a82d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111a82dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a82df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a82e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111a82e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a82e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a82ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111a82ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 111a82f0 push edx */
  push32((uint32_t)(EDX));
  /* 111a82f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a82f4 push eax */
  push32((uint32_t)(EAX));
  /* 111a82f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a82f8 push ecx */
  push32((uint32_t)(ECX));
  /* 111a82f9 call 0x111ac340 */
  push32(0x111a82feu); f_111ac340();
  /* 111a82fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8301 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111a8304 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a8307 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111a830a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a830d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a8310 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111a8313 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a8316 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a831a jl 0x111a833e */
  if ((C.sf!=C.of)) goto L_111a833e;
  /* 111a831c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a831f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a8321 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 111a8324 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a8326 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a832c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 111a832f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a8332 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a8334 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8337 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a833a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111a833c jmp 0x111a834f */
  goto L_111a834f;
L_111a833e:;
  /* 111a833e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a8341 push eax */
  push32((uint32_t)(EAX));
  /* 111a8342 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a8344 call 0x111ac0c0 */
  push32(0x111a8349u); f_111ac0c0();
  /* 111a8349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a834c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_111a834f:;
  /* 111a834f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111a8352 pop edi */
  EDI = (pop32());
  /* 111a8353 pop esi */
  ESI = (pop32());
  /* 111a8354 pop ebx */
  EBX = (pop32());
  /* 111a8355 mov esp, ebp */
  ESP = (EBP);
  /* 111a8357 pop ebp */
  EBP = (pop32());
  /* 111a8358 ret  */
  ESPCHK(0x111a8260u, _esp0);
  ESP += 4; return;
}

/* FUN_10008360 @ 0x111a8360 (7 bytes, 3 insns) */
void f_111a8360(void) {
  FTRACE(0x111a8360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8360 push edi */
  push32((uint32_t)(EDI));
  /* 111a8361 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 111a8365 jmp 0x111a83d1 */
  jmp_ind(0x111a83d1u); return;
}

/* FUN_10008370 @ 0x111a8370 (224 bytes, 84 insns) */
void f_111a8370(void) {
  FTRACE(0x111a8370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8370 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111a8374 push edi */
  push32((uint32_t)(EDI));
  /* 111a8375 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111a837b je 0x111a838c */
  if (C.zf) goto L_111a838c;
L_111a837d:;
  /* 111a837d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 111a837f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111a8380 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111a8382 je 0x111a83bf */
  if (C.zf) goto L_111a83bf;
  /* 111a8384 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111a838a jne 0x111a837d */
  if (!C.zf) goto L_111a837d;
L_111a838c:;
  /* 111a838c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111a838e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111a8393 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8395 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a8398 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111a839a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a839d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111a83a2 je 0x111a838c */
  if (C.zf) goto L_111a838c;
  /* 111a83a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 111a83a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111a83a9 je 0x111a83ce */
  if (C.zf) goto L_111a83ce;
  /* 111a83ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111a83ad je 0x111a83c9 */
  if (C.zf) goto L_111a83c9;
  /* 111a83af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 111a83b4 je 0x111a83c4 */
  if (C.zf) goto L_111a83c4;
  /* 111a83b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 111a83bb je 0x111a83bf */
  if (C.zf) goto L_111a83bf;
  /* 111a83bd jmp 0x111a838c */
  goto L_111a838c;
L_111a83bf:;
  /* 111a83bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 111a83c2 jmp 0x111a83d1 */
  goto L_111a83d1;
L_111a83c4:;
  /* 111a83c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 111a83c7 jmp 0x111a83d1 */
  goto L_111a83d1;
L_111a83c9:;
  /* 111a83c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 111a83cc jmp 0x111a83d1 */
  goto L_111a83d1;
L_111a83ce:;
  /* 111a83ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_111a83d1:;
  /* 111a83d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 111a83d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111a83db je 0x111a83f6 */
  if (C.zf) goto L_111a83f6;
L_111a83dd:;
  /* 111a83dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111a83df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111a83e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111a83e2 je 0x111a8448 */
  if (C.zf) goto L_111a8448;
  /* 111a83e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 111a83e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111a83e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 111a83ed jne 0x111a83dd */
  if (!C.zf) goto L_111a83dd;
  /* 111a83ef jmp 0x111a83f6 */
  goto L_111a83f6;
L_111a83f1:;
  /* 111a83f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111a83f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111a83f6:;
  /* 111a83f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111a83fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 111a83fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a83ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a8402 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111a8404 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a8406 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8409 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111a840e je 0x111a83f1 */
  if (C.zf) goto L_111a83f1;
  /* 111a8410 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111a8412 je 0x111a8448 */
  if (C.zf) goto L_111a8448;
  /* 111a8414 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 111a8416 je 0x111a843f */
  if (C.zf) goto L_111a843f;
  /* 111a8418 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 111a841e je 0x111a8432 */
  if (C.zf) goto L_111a8432;
  /* 111a8420 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 111a8426 je 0x111a842a */
  if (C.zf) goto L_111a842a;
  /* 111a8428 jmp 0x111a83f1 */
  goto L_111a83f1;
L_111a842a:;
  /* 111a842a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111a842c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111a8430 pop edi */
  EDI = (pop32());
  /* 111a8431 ret  */
  ESPCHK(0x111a8370u, _esp0);
  ESP += 4; return;
L_111a8432:;
  /* 111a8432 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 111a8435 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111a8439 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 111a843d pop edi */
  EDI = (pop32());
  /* 111a843e ret  */
  ESPCHK(0x111a8370u, _esp0);
  ESP += 4; return;
L_111a843f:;
  /* 111a843f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 111a8442 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111a8446 pop edi */
  EDI = (pop32());
  /* 111a8447 ret  */
  ESPCHK(0x111a8370u, _esp0);
  ESP += 4; return;
L_111a8448:;
  /* 111a8448 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 111a844a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111a844e pop edi */
  EDI = (pop32());
  /* 111a844f ret  */
  ESPCHK(0x111a8370u, _esp0);
  ESP += 4; return;
}

/* FUN_10008450 @ 0x111a8450 (243 bytes, 91 insns) */
void f_111a8450(void) {
  FTRACE(0x111a8450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8450 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8451 mov ebp, esp */
  EBP = (ESP);
  /* 111a8453 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8456 push ebx */
  push32((uint32_t)(EBX));
  /* 111a8457 push esi */
  push32((uint32_t)(ESI));
  /* 111a8458 push edi */
  push32((uint32_t)(EDI));
  /* 111a8459 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 111a845c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_111a845f:;
  /* 111a845f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8463 jne 0x111a8483 */
  if (!C.zf) goto L_111a8483;
  /* 111a8465 push 0x111cd0f0 */
  push32((uint32_t)(0x111cd0f0u));
  /* 111a846a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a846c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 111a846e push 0x111cd100 */
  push32((uint32_t)(0x111cd100u));
  /* 111a8473 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a8475 call 0x111a4470 */
  push32(0x111a847au); f_111a4470();
  /* 111a847a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a847d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8480 jne 0x111a8483 */
  if (!C.zf) goto L_111a8483;
  /* 111a8482 int3  */
  x86_unimpl("int3 @ 0x111a8482");
L_111a8483:;
  /* 111a8483 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a8485 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a8487 jne 0x111a845f */
  if (!C.zf) goto L_111a845f;
L_111a8489:;
  /* 111a8489 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a848d jne 0x111a84ad */
  if (!C.zf) goto L_111a84ad;
  /* 111a848f push 0x111cd0d4 */
  push32((uint32_t)(0x111cd0d4u));
  /* 111a8494 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a8496 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 111a8498 push 0x111cd100 */
  push32((uint32_t)(0x111cd100u));
  /* 111a849d push 2 */
  push32((uint32_t)(0x2u));
  /* 111a849f call 0x111a4470 */
  push32(0x111a84a4u); f_111a4470();
  /* 111a84a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a84a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a84aa jne 0x111a84ad */
  if (!C.zf) goto L_111a84ad;
  /* 111a84ac int3  */
  x86_unimpl("int3 @ 0x111a84ac");
L_111a84ad:;
  /* 111a84ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a84af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a84b1 jne 0x111a8489 */
  if (!C.zf) goto L_111a8489;
  /* 111a84b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a84b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 111a84bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a84c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a84c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111a84c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a84c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a84cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111a84ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a84d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a84d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 111a84d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111a84da push ecx */
  push32((uint32_t)(ECX));
  /* 111a84db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a84de push edx */
  push32((uint32_t)(EDX));
  /* 111a84df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a84e2 push eax */
  push32((uint32_t)(EAX));
  /* 111a84e3 call 0x111ac340 */
  push32(0x111a84e8u); f_111ac340();
  /* 111a84e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a84eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 111a84ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a84f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a84f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a84f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a84fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 111a84fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a8500 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8504 jl 0x111a8528 */
  if ((C.sf!=C.of)) goto L_111a8528;
  /* 111a8506 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a8509 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a850b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 111a850e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111a8510 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111a8516 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 111a8519 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a851c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a851e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8521 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a8524 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111a8526 jmp 0x111a8539 */
  goto L_111a8539;
L_111a8528:;
  /* 111a8528 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111a852b push edx */
  push32((uint32_t)(EDX));
  /* 111a852c push 0 */
  push32((uint32_t)(0x0u));
  /* 111a852e call 0x111ac0c0 */
  push32(0x111a8533u); f_111ac0c0();
  /* 111a8533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8536 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_111a8539:;
  /* 111a8539 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111a853c pop edi */
  EDI = (pop32());
  /* 111a853d pop esi */
  ESI = (pop32());
  /* 111a853e pop ebx */
  EBX = (pop32());
  /* 111a853f mov esp, ebp */
  ESP = (EBP);
  /* 111a8541 pop ebp */
  EBP = (pop32());
  /* 111a8542 ret  */
  ESPCHK(0x111a8450u, _esp0);
  ESP += 4; return;
}

/* FUN_10008550 @ 0x111a8550 (47 bytes, 17 insns) */
void f_111a8550(void) {
  FTRACE(0x111a8550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8550 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8551 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8556 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 111a855a jb 0x111a8570 */
  if (C.cf) goto L_111a8570;
L_111a855c:;
  /* 111a855c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8562 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8567 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 111a8569 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a856e jae 0x111a855c */
  if (!C.cf) goto L_111a855c;
L_111a8570:;
  /* 111a8570 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8572 mov eax, esp */
  EAX = (ESP);
  /* 111a8574 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 111a8576 mov esp, ecx */
  ESP = (ECX);
  /* 111a8578 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a857a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a857d push eax */
  push32((uint32_t)(EAX));
  /* 111a857e ret  */
  ESPCHK(0x111a8550u, _esp0);
  ESP += 4; return;
}

/* FUN_10008580 @ 0x111a8580 (507 bytes, 151 insns) [1 switch table(s)] */
void f_111a8580(void) {
  FTRACE(0x111a8580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8580 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8581 mov ebp, esp */
  EBP = (ESP);
  /* 111a8583 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8586 push esi */
  push32((uint32_t)(ESI));
  /* 111a8587 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a858b je 0x111a8593 */
  if (C.zf) goto L_111a8593;
  /* 111a858d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8591 jne 0x111a8598 */
  if (!C.zf) goto L_111a8598;
L_111a8593:;
  /* 111a8593 jmp 0x111a8768 */
  goto L_111a8768;
L_111a8598:;
  /* 111a8598 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a859c je 0x111a85b4 */
  if (C.zf) goto L_111a85b4;
  /* 111a859e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a85a2 je 0x111a85b4 */
  if (C.zf) goto L_111a85b4;
  /* 111a85a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a85a8 je 0x111a85b4 */
  if (C.zf) goto L_111a85b4;
  /* 111a85aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a85ae jne 0x111a8691 */
  if (!C.zf) goto L_111a8691;
L_111a85b4:;
  /* 111a85b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a85b6 call 0x111a8db0 */
  push32(0x111a85bbu); f_111a8db0();
  /* 111a85bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a85be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a85c2 je 0x111a85ca */
  if (C.zf) goto L_111a85ca;
  /* 111a85c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a85c8 jne 0x111a860f */
  if (!C.zf) goto L_111a860f;
L_111a85ca:;
  /* 111a85ca cmp dword ptr [0x111d17d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d17d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a85d1 jne 0x111a860f */
  if (!C.zf) goto L_111a860f;
  /* 111a85d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a85d5 push 0x111a87b0 */
  push32((uint32_t)(0x111a87b0u));
  /* 111a85da call dword ptr [0x111d434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d434c))), 0x111a85e0u);
  /* 111a85e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a85e3 jne 0x111a85f1 */
  if (!C.zf) goto L_111a85f1;
  /* 111a85e5 mov dword ptr [0x111d17d4], 1 */
  w32((uint32_t)(0x111d17d4), (0x1u));
  /* 111a85ef jmp 0x111a860f */
  goto L_111a860f;
L_111a85f1:;
  /* 111a85f1 call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111a85f7u);
  /* 111a85f7 mov esi, eax */
  ESI = (EAX);
  /* 111a85f9 call 0x111ad290 */
  push32(0x111a85feu); f_111ad290();
  /* 111a85fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 111a8600 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a8602 call 0x111a8e50 */
  push32(0x111a8607u); f_111a8e50();
  /* 111a8607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a860a jmp 0x111a8768 */
  goto L_111a8768;
L_111a860f:;
  /* 111a860f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8612 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111a8615 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8618 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a861b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111a861e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8622 ja 0x111a8682 */
  if ((!C.cf&&!C.zf)) goto L_111a8682;
  /* 111a8624 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8627 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a8629 mov dl, byte ptr [eax + 0x111a878f] */
  DL = (r8((uint32_t)(EAX + 0x111a878f)));
  /* 111a862f jmp dword ptr [edx*4 + 0x111a877b] */
  switch (EDX) {
    case 0: goto L_111a8636;
    case 1: goto L_111a8670;
    case 2: goto L_111a864a;
    case 3: goto L_111a865d;
    case 4: goto L_111a8682;
    default: x86_unimpl("switch@0x111a862f out of table"); return;
  }
L_111a8636:;
  /* 111a8636 mov ecx, dword ptr [0x111d17c4] */
  ECX = (r32((uint32_t)(0x111d17c4)));
  /* 111a863c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111a863f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8642 mov dword ptr [0x111d17c4], edx */
  w32((uint32_t)(0x111d17c4), (EDX));
  /* 111a8648 jmp 0x111a8682 */
  goto L_111a8682;
L_111a864a:;
  /* 111a864a mov eax, dword ptr [0x111d17c8] */
  EAX = (r32((uint32_t)(0x111d17c8)));
  /* 111a864f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a8652 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8655 mov dword ptr [0x111d17c8], ecx */
  w32((uint32_t)(0x111d17c8), (ECX));
  /* 111a865b jmp 0x111a8682 */
  goto L_111a8682;
L_111a865d:;
  /* 111a865d mov edx, dword ptr [0x111d17cc] */
  EDX = (r32((uint32_t)(0x111d17cc)));
  /* 111a8663 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111a8666 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8669 mov dword ptr [0x111d17cc], eax */
  w32((uint32_t)(0x111d17cc), (EAX));
  /* 111a866e jmp 0x111a8682 */
  goto L_111a8682;
L_111a8670:;
  /* 111a8670 mov ecx, dword ptr [0x111d17d0] */
  ECX = (r32((uint32_t)(0x111d17d0)));
  /* 111a8676 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111a8679 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a867c mov dword ptr [0x111d17d0], edx */
  w32((uint32_t)(0x111d17d0), (EDX));
L_111a8682:;
  /* 111a8682 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a8684 call 0x111a8e50 */
  push32(0x111a8689u); f_111a8e50();
  /* 111a8689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a868c jmp 0x111a8763 */
  goto L_111a8763;
L_111a8691:;
  /* 111a8691 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8695 je 0x111a86a8 */
  if (C.zf) goto L_111a86a8;
  /* 111a8697 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a869b je 0x111a86a8 */
  if (C.zf) goto L_111a86a8;
  /* 111a869d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a86a1 je 0x111a86a8 */
  if (C.zf) goto L_111a86a8;
  /* 111a86a3 jmp 0x111a8768 */
  goto L_111a8768;
L_111a86a8:;
  /* 111a86a8 call 0x111a4df0 */
  push32(0x111a86adu); f_111a4df0();
  /* 111a86ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a86b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a86b3 cmp dword ptr [eax + 0x50], 0x111cfc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x111cfc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a86ba jne 0x111a8705 */
  if (!C.zf) goto L_111a8705;
  /* 111a86bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 111a86c1 push 0x111cd10c */
  push32((uint32_t)(0x111cd10cu));
  /* 111a86c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a86c8 mov ecx, dword ptr [0x111cfc80] */
  ECX = (r32((uint32_t)(0x111cfc80)));
  /* 111a86ce push ecx */
  push32((uint32_t)(ECX));
  /* 111a86cf call 0x111a53b0 */
  push32(0x111a86d4u); f_111a53b0();
  /* 111a86d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a86d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a86da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 111a86dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a86e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a86e4 je 0x111a8703 */
  if (C.zf) goto L_111a8703;
  /* 111a86e6 mov ecx, dword ptr [0x111cfc80] */
  ECX = (r32((uint32_t)(0x111cfc80)));
  /* 111a86ec push ecx */
  push32((uint32_t)(ECX));
  /* 111a86ed push 0x111cfc00 */
  push32((uint32_t)(0x111cfc00u));
  /* 111a86f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a86f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 111a86f8 push eax */
  push32((uint32_t)(EAX));
  /* 111a86f9 call 0x111abc90 */
  push32(0x111a86feu); f_111abc90();
  /* 111a86fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8701 jmp 0x111a8705 */
  goto L_111a8705;
L_111a8703:;
  /* 111a8703 jmp 0x111a8768 */
  goto L_111a8768;
L_111a8705:;
  /* 111a8705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8708 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 111a870b push edx */
  push32((uint32_t)(EDX));
  /* 111a870c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a870f push eax */
  push32((uint32_t)(EAX));
  /* 111a8710 call 0x111a8a90 */
  push32(0x111a8715u); f_111a8a90();
  /* 111a8715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8718 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a871b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a871f jne 0x111a8723 */
  if (!C.zf) goto L_111a8723;
  /* 111a8721 jmp 0x111a8768 */
  goto L_111a8768;
L_111a8723:;
  /* 111a8723 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8726 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111a8729 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111a872c:;
  /* 111a872c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a872f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a8732 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8735 jne 0x111a8763 */
  if (!C.zf) goto L_111a8763;
  /* 111a8737 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a873a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a873d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111a8740 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8743 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8746 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111a8749 mov edx, dword ptr [0x111cfc84] */
  EDX = (r32((uint32_t)(0x111cfc84)));
  /* 111a874f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a8752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8755 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 111a8758 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a875a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a875d jb 0x111a8761 */
  if (C.cf) goto L_111a8761;
  /* 111a875f jmp 0x111a8763 */
  goto L_111a8763;
L_111a8761:;
  /* 111a8761 jmp 0x111a872c */
  goto L_111a872c;
L_111a8763:;
  /* 111a8763 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a8766 jmp 0x111a8776 */
  goto L_111a8776;
L_111a8768:;
  /* 111a8768 call 0x111ad280 */
  push32(0x111a876du); f_111ad280();
  /* 111a876d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 111a8773 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111a8776:;
  /* 111a8776 pop esi */
  ESI = (pop32());
  /* 111a8777 mov esp, ebp */
  ESP = (EBP);
  /* 111a8779 pop ebp */
  EBP = (pop32());
  /* 111a877a ret  */
  ESPCHK(0x111a8580u, _esp0);
  ESP += 4; return;
}

/* FUN_100087b0 @ 0x111a87b0 (146 bytes, 45 insns) */
void f_111a87b0(void) {
  FTRACE(0x111a87b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a87b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a87b1 mov ebp, esp */
  EBP = (ESP);
  /* 111a87b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a87b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a87b8 call 0x111a8db0 */
  push32(0x111a87bdu); f_111a8db0();
  /* 111a87bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a87c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a87c4 jne 0x111a87de */
  if (!C.zf) goto L_111a87de;
  /* 111a87c6 mov dword ptr [ebp - 8], 0x111d17c4 */
  w32((uint32_t)(EBP + -0x8), (0x111d17c4u));
  /* 111a87cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a87d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111a87d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111a87d5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 111a87dc jmp 0x111a87f4 */
  goto L_111a87f4;
L_111a87de:;
  /* 111a87de mov dword ptr [ebp - 8], 0x111d17c8 */
  w32((uint32_t)(EBP + -0x8), (0x111d17c8u));
  /* 111a87e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a87e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a87ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a87ed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_111a87f4:;
  /* 111a87f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a87f8 jne 0x111a8808 */
  if (!C.zf) goto L_111a8808;
  /* 111a87fa push 1 */
  push32((uint32_t)(0x1u));
  /* 111a87fc call 0x111a8e50 */
  push32(0x111a8801u); f_111a8e50();
  /* 111a8801 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a8806 jmp 0x111a883c */
  goto L_111a883c;
L_111a8808:;
  /* 111a8808 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a880c je 0x111a882d */
  if (C.zf) goto L_111a882d;
  /* 111a880e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8811 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 111a8817 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a8819 call 0x111a8e50 */
  push32(0x111a881eu); f_111a8e50();
  /* 111a881e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8824 push edx */
  push32((uint32_t)(EDX));
  /* 111a8825 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x111a8828u);
  /* 111a8828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a882b jmp 0x111a8837 */
  goto L_111a8837;
L_111a882d:;
  /* 111a882d push 1 */
  push32((uint32_t)(0x1u));
  /* 111a882f call 0x111a8e50 */
  push32(0x111a8834u); f_111a8e50();
  /* 111a8834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8837:;
  /* 111a8837 mov eax, 1 */
  EAX = (0x1u);
L_111a883c:;
  /* 111a883c mov esp, ebp */
  ESP = (EBP);
  /* 111a883e pop ebp */
  EBP = (pop32());
  /* 111a883f ret 4 */
  ESPCHK(0x111a87b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008850 @ 0x111a8850 (522 bytes, 162 insns) [1 switch table(s)] */
void f_111a8850(void) {
  FTRACE(0x111a8850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8850 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8851 mov ebp, esp */
  EBP = (ESP);
  /* 111a8853 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8856 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111a885d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8860 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111a8863 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a8866 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8869 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 111a886c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8870 ja 0x111a891e */
  if ((!C.cf&&!C.zf)) goto L_111a891e;
  /* 111a8876 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 111a8879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a887b mov dl, byte ptr [eax + 0x111a8a72] */
  DL = (r8((uint32_t)(EAX + 0x111a8a72)));
  /* 111a8881 jmp dword ptr [edx*4 + 0x111a8a5a] */
  switch (EDX) {
    case 0: goto L_111a8888;
    case 1: goto L_111a88f3;
    case 2: goto L_111a88d9;
    case 3: goto L_111a88a5;
    case 4: goto L_111a88bf;
    case 5: goto L_111a891e;
    default: x86_unimpl("switch@0x111a8881 out of table"); return;
  }
L_111a8888:;
  /* 111a8888 mov dword ptr [ebp - 0x18], 0x111d17c4 */
  w32((uint32_t)(EBP + -0x18), (0x111d17c4u));
  /* 111a888f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a8892 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a8894 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111a8897 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a889a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a889d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a88a0 jmp 0x111a8926 */
  goto L_111a8926;
L_111a88a5:;
  /* 111a88a5 mov dword ptr [ebp - 0x18], 0x111d17c8 */
  w32((uint32_t)(EBP + -0x18), (0x111d17c8u));
  /* 111a88ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a88af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a88b1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111a88b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a88b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a88ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a88bd jmp 0x111a8926 */
  goto L_111a8926;
L_111a88bf:;
  /* 111a88bf mov dword ptr [ebp - 0x18], 0x111d17cc */
  w32((uint32_t)(EBP + -0x18), (0x111d17ccu));
  /* 111a88c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a88c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a88cb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111a88ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a88d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a88d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a88d7 jmp 0x111a8926 */
  goto L_111a8926;
L_111a88d9:;
  /* 111a88d9 mov dword ptr [ebp - 0x18], 0x111d17d0 */
  w32((uint32_t)(EBP + -0x18), (0x111d17d0u));
  /* 111a88e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a88e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a88e5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111a88e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a88eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a88ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a88f1 jmp 0x111a8926 */
  goto L_111a8926;
L_111a88f3:;
  /* 111a88f3 call 0x111a4df0 */
  push32(0x111a88f8u); f_111a4df0();
  /* 111a88f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a88fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a88fe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 111a8901 push edx */
  push32((uint32_t)(EDX));
  /* 111a8902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8905 push eax */
  push32((uint32_t)(EAX));
  /* 111a8906 call 0x111a8a90 */
  push32(0x111a890bu); f_111a8a90();
  /* 111a890b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a890e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8911 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 111a8914 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a8917 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a8919 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 111a891c jmp 0x111a8926 */
  goto L_111a8926;
L_111a891e:;
  /* 111a891e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a8921 jmp 0x111a8a56 */
  goto L_111a8a56;
L_111a8926:;
  /* 111a8926 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a892a je 0x111a8936 */
  if (C.zf) goto L_111a8936;
  /* 111a892c push 1 */
  push32((uint32_t)(0x1u));
  /* 111a892e call 0x111a8db0 */
  push32(0x111a8933u); f_111a8db0();
  /* 111a8933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8936:;
  /* 111a8936 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a893a jne 0x111a8953 */
  if (!C.zf) goto L_111a8953;
  /* 111a893c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8940 je 0x111a894c */
  if (C.zf) goto L_111a894c;
  /* 111a8942 push 1 */
  push32((uint32_t)(0x1u));
  /* 111a8944 call 0x111a8e50 */
  push32(0x111a8949u); f_111a8e50();
  /* 111a8949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a894c:;
  /* 111a894c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a894e jmp 0x111a8a56 */
  goto L_111a8a56;
L_111a8953:;
  /* 111a8953 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8957 jne 0x111a8970 */
  if (!C.zf) goto L_111a8970;
  /* 111a8959 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a895d je 0x111a8969 */
  if (C.zf) goto L_111a8969;
  /* 111a895f push 1 */
  push32((uint32_t)(0x1u));
  /* 111a8961 call 0x111a8e50 */
  push32(0x111a8966u); f_111a8e50();
  /* 111a8966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8969:;
  /* 111a8969 push 3 */
  push32((uint32_t)(0x3u));
  /* 111a896b call 0x111a4b70 */
  push32(0x111a8970u); f_111a4b70();
L_111a8970:;
  /* 111a8970 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8974 je 0x111a8982 */
  if (C.zf) goto L_111a8982;
  /* 111a8976 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a897a je 0x111a8982 */
  if (C.zf) goto L_111a8982;
  /* 111a897c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8980 jne 0x111a89ae */
  if (!C.zf) goto L_111a89ae;
L_111a8982:;
  /* 111a8982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8985 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 111a8988 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111a898b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a898e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 111a8995 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8999 jne 0x111a89ae */
  if (!C.zf) goto L_111a89ae;
  /* 111a899b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a899e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 111a89a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111a89a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a89a7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_111a89ae:;
  /* 111a89ae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a89b2 jne 0x111a89f0 */
  if (!C.zf) goto L_111a89f0;
  /* 111a89b4 mov eax, dword ptr [0x111cfc78] */
  EAX = (r32((uint32_t)(0x111cfc78)));
  /* 111a89b9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111a89bc jmp 0x111a89c7 */
  goto L_111a89c7;
L_111a89be:;
  /* 111a89be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a89c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a89c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111a89c7:;
  /* 111a89c7 mov edx, dword ptr [0x111cfc78] */
  EDX = (r32((uint32_t)(0x111cfc78)));
  /* 111a89cd add edx, dword ptr [0x111cfc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111cfc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a89d3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a89d6 jge 0x111a89ee */
  if ((C.sf==C.of)) goto L_111a89ee;
  /* 111a89d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a89db imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a89de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a89e1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 111a89e4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 111a89ec jmp 0x111a89be */
  goto L_111a89be;
L_111a89ee:;
  /* 111a89ee jmp 0x111a89f9 */
  goto L_111a89f9;
L_111a89f0:;
  /* 111a89f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a89f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_111a89f9:;
  /* 111a89f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a89fd je 0x111a8a09 */
  if (C.zf) goto L_111a8a09;
  /* 111a89ff push 1 */
  push32((uint32_t)(0x1u));
  /* 111a8a01 call 0x111a8e50 */
  push32(0x111a8a06u); f_111a8e50();
  /* 111a8a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8a09:;
  /* 111a8a09 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8a0d jne 0x111a8a20 */
  if (!C.zf) goto L_111a8a20;
  /* 111a8a0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8a12 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 111a8a15 push edx */
  push32((uint32_t)(EDX));
  /* 111a8a16 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a8a18 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x111a8a1bu);
  /* 111a8a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8a1e jmp 0x111a8a2a */
  goto L_111a8a2a;
L_111a8a20:;
  /* 111a8a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8a23 push eax */
  push32((uint32_t)(EAX));
  /* 111a8a24 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x111a8a27u);
  /* 111a8a27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8a2a:;
  /* 111a8a2a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8a2e je 0x111a8a3c */
  if (C.zf) goto L_111a8a3c;
  /* 111a8a30 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8a34 je 0x111a8a3c */
  if (C.zf) goto L_111a8a3c;
  /* 111a8a36 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8a3a jne 0x111a8a54 */
  if (!C.zf) goto L_111a8a54;
L_111a8a3c:;
  /* 111a8a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8a3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a8a42 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 111a8a45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8a49 jne 0x111a8a54 */
  if (!C.zf) goto L_111a8a54;
  /* 111a8a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8a4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8a51 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_111a8a54:;
  /* 111a8a54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a8a56:;
  /* 111a8a56 mov esp, ebp */
  ESP = (EBP);
  /* 111a8a58 pop ebp */
  EBP = (pop32());
  /* 111a8a59 ret  */
  ESPCHK(0x111a8850u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a90 @ 0x111a8a90 (91 bytes, 35 insns) */
void f_111a8a90(void) {
  FTRACE(0x111a8a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8a90 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8a91 mov ebp, esp */
  EBP = (ESP);
  /* 111a8a93 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8a94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8a97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a8a9a:;
  /* 111a8a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8a9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 111a8aa0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8aa3 je 0x111a8ac3 */
  if (C.zf) goto L_111a8ac3;
  /* 111a8aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8aa8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8aab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a8aae mov ecx, dword ptr [0x111cfc84] */
  ECX = (r32((uint32_t)(0x111cfc84)));
  /* 111a8ab4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a8ab7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8aba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8abc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8abf jae 0x111a8ac3 */
  if (!C.cf) goto L_111a8ac3;
  /* 111a8ac1 jmp 0x111a8a9a */
  goto L_111a8a9a;
L_111a8ac3:;
  /* 111a8ac3 mov eax, dword ptr [0x111cfc84] */
  EAX = (r32((uint32_t)(0x111cfc84)));
  /* 111a8ac8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a8acb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8ace add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8ad0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8ad3 jae 0x111a8ae5 */
  if (!C.cf) goto L_111a8ae5;
  /* 111a8ad5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8ad8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111a8adb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8ade jne 0x111a8ae5 */
  if (!C.zf) goto L_111a8ae5;
  /* 111a8ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8ae3 jmp 0x111a8ae7 */
  goto L_111a8ae7;
L_111a8ae5:;
  /* 111a8ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a8ae7:;
  /* 111a8ae7 mov esp, ebp */
  ESP = (EBP);
  /* 111a8ae9 pop ebp */
  EBP = (pop32());
  /* 111a8aea ret  */
  ESPCHK(0x111a8a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008af0 @ 0x111a8af0 (13 bytes, 6 insns) */
void f_111a8af0(void) {
  FTRACE(0x111a8af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8af0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8af1 mov ebp, esp */
  EBP = (ESP);
  /* 111a8af3 call 0x111a4df0 */
  push32(0x111a8af8u); f_111a4df0();
  /* 111a8af8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8afb pop ebp */
  EBP = (pop32());
  /* 111a8afc ret  */
  ESPCHK(0x111a8af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b00 @ 0x111a8b00 (13 bytes, 6 insns) */
void f_111a8b00(void) {
  FTRACE(0x111a8b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8b00 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8b01 mov ebp, esp */
  EBP = (ESP);
  /* 111a8b03 call 0x111a4df0 */
  push32(0x111a8b08u); f_111a4df0();
  /* 111a8b08 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8b0b pop ebp */
  EBP = (pop32());
  /* 111a8b0c ret  */
  ESPCHK(0x111a8b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b10 @ 0x111a8b10 (187 bytes, 54 insns) */
void f_111a8b10(void) {
  FTRACE(0x111a8b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8b10 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8b11 mov ebp, esp */
  EBP = (ESP);
  /* 111a8b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8b16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111a8b1d cmp dword ptr [0x111d17d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d17d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8b24 jne 0x111a8b83 */
  if (!C.zf) goto L_111a8b83;
  /* 111a8b26 push 0x111cc538 */
  push32((uint32_t)(0x111cc538u));
  /* 111a8b2b call dword ptr [0x111d4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4398))), 0x111a8b31u);
  /* 111a8b31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a8b34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8b38 je 0x111a8b57 */
  if (C.zf) goto L_111a8b57;
  /* 111a8b3a push 0x111cd13c */
  push32((uint32_t)(0x111cd13cu));
  /* 111a8b3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8b42 push eax */
  push32((uint32_t)(EAX));
  /* 111a8b43 call dword ptr [0x111d4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4394))), 0x111a8b49u);
  /* 111a8b49 mov dword ptr [0x111d17d8], eax */
  w32((uint32_t)(0x111d17d8), (EAX));
  /* 111a8b4e cmp dword ptr [0x111d17d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d17d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8b55 jne 0x111a8b5b */
  if (!C.zf) goto L_111a8b5b;
L_111a8b57:;
  /* 111a8b57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a8b59 jmp 0x111a8bc7 */
  goto L_111a8bc7;
L_111a8b5b:;
  /* 111a8b5b push 0x111cd12c */
  push32((uint32_t)(0x111cd12cu));
  /* 111a8b60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8b63 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8b64 call dword ptr [0x111d4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4394))), 0x111a8b6au);
  /* 111a8b6a mov dword ptr [0x111d17dc], eax */
  w32((uint32_t)(0x111d17dc), (EAX));
  /* 111a8b6f push 0x111cd118 */
  push32((uint32_t)(0x111cd118u));
  /* 111a8b74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8b77 push edx */
  push32((uint32_t)(EDX));
  /* 111a8b78 call dword ptr [0x111d4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4394))), 0x111a8b7eu);
  /* 111a8b7e mov dword ptr [0x111d17e0], eax */
  w32((uint32_t)(0x111d17e0), (EAX));
L_111a8b83:;
  /* 111a8b83 cmp dword ptr [0x111d17dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d17dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8b8a je 0x111a8b95 */
  if (C.zf) goto L_111a8b95;
  /* 111a8b8c call dword ptr [0x111d17dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d17dc))), 0x111a8b92u);
  /* 111a8b92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a8b95:;
  /* 111a8b95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8b99 je 0x111a8bb1 */
  if (C.zf) goto L_111a8bb1;
  /* 111a8b9b cmp dword ptr [0x111d17e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d17e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8ba2 je 0x111a8bb1 */
  if (C.zf) goto L_111a8bb1;
  /* 111a8ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8ba7 push eax */
  push32((uint32_t)(EAX));
  /* 111a8ba8 call dword ptr [0x111d17e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d17e0))), 0x111a8baeu);
  /* 111a8bae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a8bb1:;
  /* 111a8bb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111a8bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8bb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8bb8 push edx */
  push32((uint32_t)(EDX));
  /* 111a8bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8bbc push eax */
  push32((uint32_t)(EAX));
  /* 111a8bbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8bc0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8bc1 call dword ptr [0x111d17d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d17d8))), 0x111a8bc7u);
L_111a8bc7:;
  /* 111a8bc7 mov esp, ebp */
  ESP = (EBP);
  /* 111a8bc9 pop ebp */
  EBP = (pop32());
  /* 111a8bca ret  */
  ESPCHK(0x111a8b10u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x111a8bd0 (254 bytes, 109 insns) */
void f_111a8bd0(void) {
  FTRACE(0x111a8bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8bd0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 111a8bd4 push edi */
  push32((uint32_t)(EDI));
  /* 111a8bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111a8bd7 je 0x111a8c53 */
  if (C.zf) goto L_111a8c53;
  /* 111a8bd9 push esi */
  push32((uint32_t)(ESI));
  /* 111a8bda push ebx */
  push32((uint32_t)(EBX));
  /* 111a8bdb mov ebx, ecx */
  EBX = (ECX);
  /* 111a8bdd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 111a8be1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 111a8be7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 111a8beb jne 0x111a8bf4 */
  if (!C.zf) goto L_111a8bf4;
  /* 111a8bed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111a8bf0 jne 0x111a8c61 */
  if (!C.zf) goto L_111a8c61;
  /* 111a8bf2 jmp 0x111a8c15 */
  goto L_111a8c15;
L_111a8bf4:;
  /* 111a8bf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111a8bf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111a8bf7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111a8bf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111a8bfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111a8bfb je 0x111a8c22 */
  if (C.zf) goto L_111a8c22;
  /* 111a8bfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111a8bff je 0x111a8c2a */
  if (C.zf) goto L_111a8c2a;
  /* 111a8c01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 111a8c07 jne 0x111a8bf4 */
  if (!C.zf) goto L_111a8bf4;
  /* 111a8c09 mov ebx, ecx */
  EBX = (ECX);
  /* 111a8c0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111a8c0e jne 0x111a8c61 */
  if (!C.zf) goto L_111a8c61;
L_111a8c10:;
  /* 111a8c10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 111a8c13 je 0x111a8c22 */
  if (C.zf) goto L_111a8c22;
L_111a8c15:;
  /* 111a8c15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111a8c17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111a8c18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111a8c1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111a8c1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111a8c1d je 0x111a8c4e */
  if (C.zf) goto L_111a8c4e;
  /* 111a8c1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 111a8c20 jne 0x111a8c15 */
  if (!C.zf) goto L_111a8c15;
L_111a8c22:;
  /* 111a8c22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111a8c26 pop ebx */
  EBX = (pop32());
  /* 111a8c27 pop esi */
  ESI = (pop32());
  /* 111a8c28 pop edi */
  EDI = (pop32());
  /* 111a8c29 ret  */
  ESPCHK(0x111a8bd0u, _esp0);
  ESP += 4; return;
L_111a8c2a:;
  /* 111a8c2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111a8c30 je 0x111a8c44 */
  if (C.zf) goto L_111a8c44;
L_111a8c32:;
  /* 111a8c32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111a8c34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111a8c35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111a8c36 je 0x111a8cc6 */
  if (C.zf) goto L_111a8cc6;
  /* 111a8c3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111a8c42 jne 0x111a8c32 */
  if (!C.zf) goto L_111a8c32;
L_111a8c44:;
  /* 111a8c44 mov ebx, ecx */
  EBX = (ECX);
  /* 111a8c46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111a8c49 jne 0x111a8cb7 */
  if (!C.zf) goto L_111a8cb7;
L_111a8c4b:;
  /* 111a8c4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111a8c4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_111a8c4e:;
  /* 111a8c4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 111a8c4f jne 0x111a8c4b */
  if (!C.zf) goto L_111a8c4b;
  /* 111a8c51 pop ebx */
  EBX = (pop32());
  /* 111a8c52 pop esi */
  ESI = (pop32());
L_111a8c53:;
  /* 111a8c53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111a8c57 pop edi */
  EDI = (pop32());
  /* 111a8c58 ret  */
  ESPCHK(0x111a8bd0u, _esp0);
  ESP += 4; return;
L_111a8c59:;
  /* 111a8c59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111a8c5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8c5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111a8c5f je 0x111a8c10 */
  if (C.zf) goto L_111a8c10;
L_111a8c61:;
  /* 111a8c61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111a8c66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111a8c68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8c6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a8c6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111a8c6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 111a8c71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8c74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111a8c79 je 0x111a8c59 */
  if (C.zf) goto L_111a8c59;
  /* 111a8c7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111a8c7d je 0x111a8cab */
  if (C.zf) goto L_111a8cab;
  /* 111a8c7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 111a8c81 je 0x111a8ca1 */
  if (C.zf) goto L_111a8ca1;
  /* 111a8c83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 111a8c89 je 0x111a8c97 */
  if (C.zf) goto L_111a8c97;
  /* 111a8c8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 111a8c91 jne 0x111a8c59 */
  if (!C.zf) goto L_111a8c59;
  /* 111a8c93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111a8c95 jmp 0x111a8caf */
  goto L_111a8caf;
L_111a8c97:;
  /* 111a8c97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a8c9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111a8c9f jmp 0x111a8caf */
  goto L_111a8caf;
L_111a8ca1:;
  /* 111a8ca1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111a8ca7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111a8ca9 jmp 0x111a8caf */
  goto L_111a8caf;
L_111a8cab:;
  /* 111a8cab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111a8cad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_111a8caf:;
  /* 111a8caf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a8cb4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111a8cb5 je 0x111a8cc1 */
  if (C.zf) goto L_111a8cc1;
L_111a8cb7:;
  /* 111a8cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111a8cb9:;
  /* 111a8cb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 111a8cbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8cbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111a8cbf jne 0x111a8cb9 */
  if (!C.zf) goto L_111a8cb9;
L_111a8cc1:;
  /* 111a8cc1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 111a8cc4 jne 0x111a8c4b */
  if (!C.zf) goto L_111a8c4b;
L_111a8cc6:;
  /* 111a8cc6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111a8cca pop ebx */
  EBX = (pop32());
  /* 111a8ccb pop esi */
  ESI = (pop32());
  /* 111a8ccc pop edi */
  EDI = (pop32());
  /* 111a8ccd ret  */
  ESPCHK(0x111a8bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cd0 @ 0x111a8cd0 (55 bytes, 16 insns) */
void f_111a8cd0(void) {
  FTRACE(0x111a8cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8cd1 mov ebp, esp */
  EBP = (ESP);
  /* 111a8cd3 mov eax, dword ptr [0x111cfb84] */
  EAX = (r32((uint32_t)(0x111cfb84)));
  /* 111a8cd8 push eax */
  push32((uint32_t)(EAX));
  /* 111a8cd9 call dword ptr [0x111d4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4354))), 0x111a8cdfu);
  /* 111a8cdf mov ecx, dword ptr [0x111cfb74] */
  ECX = (r32((uint32_t)(0x111cfb74)));
  /* 111a8ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8ce6 call dword ptr [0x111d4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4354))), 0x111a8cecu);
  /* 111a8cec mov edx, dword ptr [0x111cfb64] */
  EDX = (r32((uint32_t)(0x111cfb64)));
  /* 111a8cf2 push edx */
  push32((uint32_t)(EDX));
  /* 111a8cf3 call dword ptr [0x111d4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4354))), 0x111a8cf9u);
  /* 111a8cf9 mov eax, dword ptr [0x111cfb44] */
  EAX = (r32((uint32_t)(0x111cfb44)));
  /* 111a8cfe push eax */
  push32((uint32_t)(EAX));
  /* 111a8cff call dword ptr [0x111d4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4354))), 0x111a8d05u);
  /* 111a8d05 pop ebp */
  EBP = (pop32());
  /* 111a8d06 ret  */
  ESPCHK(0x111a8cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x111a8d10 (159 bytes, 47 insns) */
void f_111a8d10(void) {
  FTRACE(0x111a8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8d11 mov ebp, esp */
  EBP = (ESP);
  /* 111a8d13 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8d14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111a8d1b jmp 0x111a8d26 */
  goto L_111a8d26;
L_111a8d1d:;
  /* 111a8d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8d20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a8d26:;
  /* 111a8d26 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8d2a jge 0x111a8d79 */
  if ((C.sf==C.of)) goto L_111a8d79;
  /* 111a8d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8d2f cmp dword ptr [ecx*4 + 0x111cfb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x111cfb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8d37 je 0x111a8d77 */
  if (C.zf) goto L_111a8d77;
  /* 111a8d39 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8d3d je 0x111a8d77 */
  if (C.zf) goto L_111a8d77;
  /* 111a8d3f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8d43 je 0x111a8d77 */
  if (C.zf) goto L_111a8d77;
  /* 111a8d45 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8d49 je 0x111a8d77 */
  if (C.zf) goto L_111a8d77;
  /* 111a8d4b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8d4f je 0x111a8d77 */
  if (C.zf) goto L_111a8d77;
  /* 111a8d51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8d54 mov eax, dword ptr [edx*4 + 0x111cfb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x111cfb40)));
  /* 111a8d5b push eax */
  push32((uint32_t)(EAX));
  /* 111a8d5c call dword ptr [0x111d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d8))), 0x111a8d62u);
  /* 111a8d62 push 2 */
  push32((uint32_t)(0x2u));
  /* 111a8d64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8d67 mov edx, dword ptr [ecx*4 + 0x111cfb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x111cfb40)));
  /* 111a8d6e push edx */
  push32((uint32_t)(EDX));
  /* 111a8d6f call 0x111a5e40 */
  push32(0x111a8d74u); f_111a5e40();
  /* 111a8d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8d77:;
  /* 111a8d77 jmp 0x111a8d1d */
  goto L_111a8d1d;
L_111a8d79:;
  /* 111a8d79 mov eax, dword ptr [0x111cfb64] */
  EAX = (r32((uint32_t)(0x111cfb64)));
  /* 111a8d7e push eax */
  push32((uint32_t)(EAX));
  /* 111a8d7f call dword ptr [0x111d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d8))), 0x111a8d85u);
  /* 111a8d85 mov ecx, dword ptr [0x111cfb74] */
  ECX = (r32((uint32_t)(0x111cfb74)));
  /* 111a8d8b push ecx */
  push32((uint32_t)(ECX));
  /* 111a8d8c call dword ptr [0x111d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d8))), 0x111a8d92u);
  /* 111a8d92 mov edx, dword ptr [0x111cfb84] */
  EDX = (r32((uint32_t)(0x111cfb84)));
  /* 111a8d98 push edx */
  push32((uint32_t)(EDX));
  /* 111a8d99 call dword ptr [0x111d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d8))), 0x111a8d9fu);
  /* 111a8d9f mov eax, dword ptr [0x111cfb44] */
  EAX = (r32((uint32_t)(0x111cfb44)));
  /* 111a8da4 push eax */
  push32((uint32_t)(EAX));
  /* 111a8da5 call dword ptr [0x111d43d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43d8))), 0x111a8dabu);
  /* 111a8dab mov esp, ebp */
  ESP = (EBP);
  /* 111a8dad pop ebp */
  EBP = (pop32());
  /* 111a8dae ret  */
  ESPCHK(0x111a8d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008db0 @ 0x111a8db0 (151 bytes, 46 insns) */
void f_111a8db0(void) {
  FTRACE(0x111a8db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8db0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8db1 mov ebp, esp */
  EBP = (ESP);
  /* 111a8db3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8db4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8db7 cmp dword ptr [eax*4 + 0x111cfb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x111cfb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8dbf jne 0x111a8e32 */
  if (!C.zf) goto L_111a8e32;
  /* 111a8dc1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 111a8dc6 push 0x111cd148 */
  push32((uint32_t)(0x111cd148u));
  /* 111a8dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 111a8dcd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 111a8dcf call 0x111a53b0 */
  push32(0x111a8dd4u); f_111a53b0();
  /* 111a8dd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8dd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a8dda cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8dde jne 0x111a8dea */
  if (!C.zf) goto L_111a8dea;
  /* 111a8de0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111a8de2 call 0x111a4320 */
  push32(0x111a8de7u); f_111a4320();
  /* 111a8de7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8dea:;
  /* 111a8dea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111a8dec call 0x111a8db0 */
  push32(0x111a8df1u); f_111a8db0();
  /* 111a8df1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8df4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8df7 cmp dword ptr [ecx*4 + 0x111cfb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x111cfb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8dff jne 0x111a8e1a */
  if (!C.zf) goto L_111a8e1a;
  /* 111a8e01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8e04 push edx */
  push32((uint32_t)(EDX));
  /* 111a8e05 call dword ptr [0x111d4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4354))), 0x111a8e0bu);
  /* 111a8e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8e11 mov dword ptr [eax*4 + 0x111cfb40], ecx */
  w32((uint32_t)(EAX*4 + 0x111cfb40), (ECX));
  /* 111a8e18 jmp 0x111a8e28 */
  goto L_111a8e28;
L_111a8e1a:;
  /* 111a8e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 111a8e1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a8e1f push edx */
  push32((uint32_t)(EDX));
  /* 111a8e20 call 0x111a5e40 */
  push32(0x111a8e25u); f_111a5e40();
  /* 111a8e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8e28:;
  /* 111a8e28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111a8e2a call 0x111a8e50 */
  push32(0x111a8e2fu); f_111a8e50();
  /* 111a8e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a8e32:;
  /* 111a8e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8e35 mov ecx, dword ptr [eax*4 + 0x111cfb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111cfb40)));
  /* 111a8e3c push ecx */
  push32((uint32_t)(ECX));
  /* 111a8e3d call dword ptr [0x111d4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4344))), 0x111a8e43u);
  /* 111a8e43 mov esp, ebp */
  ESP = (EBP);
  /* 111a8e45 pop ebp */
  EBP = (pop32());
  /* 111a8e46 ret  */
  ESPCHK(0x111a8db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x111a8e50 (22 bytes, 8 insns) */
void f_111a8e50(void) {
  FTRACE(0x111a8e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8e50 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8e51 mov ebp, esp */
  EBP = (ESP);
  /* 111a8e53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8e56 mov ecx, dword ptr [eax*4 + 0x111cfb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x111cfb40)));
  /* 111a8e5d push ecx */
  push32((uint32_t)(ECX));
  /* 111a8e5e call dword ptr [0x111d4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4340))), 0x111a8e64u);
  /* 111a8e64 pop ebp */
  EBP = (pop32());
  /* 111a8e65 ret  */
  ESPCHK(0x111a8e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e70 @ 0x111a8e70 (26 bytes, 10 insns) */
void f_111a8e70(void) {
  FTRACE(0x111a8e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8e70 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8e71 mov ebp, esp */
  EBP = (ESP);
  /* 111a8e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8e76 push eax */
  push32((uint32_t)(EAX));
  /* 111a8e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a8e79 call dword ptr [0x111d4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4348))), 0x111a8e7fu);
  /* 111a8e7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 111a8e84 call dword ptr [0x111d43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43a4))), 0x111a8e8au);
  /* 111a8e8a pop ebp */
  EBP = (pop32());
  /* 111a8e8b ret  */
  ESPCHK(0x111a8e70u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x111a8e90 (446 bytes, 130 insns) */
void f_111a8e90(void) {
  FTRACE(0x111a8e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a8e90 push ebp */
  push32((uint32_t)(EBP));
  /* 111a8e91 mov ebp, esp */
  EBP = (ESP);
  /* 111a8e93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a8e96 call 0x111a4df0 */
  push32(0x111a8e9bu); f_111a4df0();
  /* 111a8e9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a8e9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8ea1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 111a8ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8ea5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a8ea8 push edx */
  push32((uint32_t)(EDX));
  /* 111a8ea9 call 0x111a9050 */
  push32(0x111a8eaeu); f_111a9050();
  /* 111a8eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8eb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111a8eb4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8eb8 je 0x111a8ec3 */
  if (C.zf) goto L_111a8ec3;
  /* 111a8eba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8ebd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8ec1 jne 0x111a8ed2 */
  if (!C.zf) goto L_111a8ed2;
L_111a8ec3:;
  /* 111a8ec3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 111a8ec7 call dword ptr [0x111d4338] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4338))), 0x111a8ecdu);
  /* 111a8ecd jmp 0x111a904a */
  goto L_111a904a;
L_111a8ed2:;
  /* 111a8ed2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8ed5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8ed9 jne 0x111a8eef */
  if (!C.zf) goto L_111a8eef;
  /* 111a8edb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8ede mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111a8ee5 mov eax, 1 */
  EAX = (0x1u);
  /* 111a8eea jmp 0x111a904a */
  goto L_111a904a;
L_111a8eef:;
  /* 111a8eef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8ef2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8ef6 jne 0x111a8f00 */
  if (!C.zf) goto L_111a8f00;
  /* 111a8ef8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111a8efb jmp 0x111a904a */
  goto L_111a904a;
L_111a8f00:;
  /* 111a8f00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8f03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 111a8f06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a8f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8f0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 111a8f0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111a8f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8f15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a8f18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 111a8f1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8f1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8f22 jne 0x111a9027 */
  if (!C.zf) goto L_111a9027;
  /* 111a8f28 mov eax, dword ptr [0x111cfc78] */
  EAX = (r32((uint32_t)(0x111cfc78)));
  /* 111a8f2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111a8f30 jmp 0x111a8f3b */
  goto L_111a8f3b;
L_111a8f32:;
  /* 111a8f32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a8f35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8f38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111a8f3b:;
  /* 111a8f3b mov edx, dword ptr [0x111cfc78] */
  EDX = (r32((uint32_t)(0x111cfc78)));
  /* 111a8f41 add edx, dword ptr [0x111cfc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x111cfc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a8f47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8f4a jge 0x111a8f62 */
  if ((C.sf==C.of)) goto L_111a8f62;
  /* 111a8f4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a8f4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a8f52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8f55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 111a8f58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 111a8f60 jmp 0x111a8f32 */
  goto L_111a8f32;
L_111a8f62:;
  /* 111a8f62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8f65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 111a8f68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111a8f6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8f6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8f74 jne 0x111a8f85 */
  if (!C.zf) goto L_111a8f85;
  /* 111a8f76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8f79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 111a8f80 jmp 0x111a900d */
  goto L_111a900d;
L_111a8f85:;
  /* 111a8f85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8f88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8f8e jne 0x111a8f9c */
  if (!C.zf) goto L_111a8f9c;
  /* 111a8f90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8f93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 111a8f9a jmp 0x111a900d */
  goto L_111a900d;
L_111a8f9c:;
  /* 111a8f9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8f9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8fa5 jne 0x111a8fb3 */
  if (!C.zf) goto L_111a8fb3;
  /* 111a8fa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8faa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 111a8fb1 jmp 0x111a900d */
  goto L_111a900d;
L_111a8fb3:;
  /* 111a8fb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8fb6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8fbc jne 0x111a8fca */
  if (!C.zf) goto L_111a8fca;
  /* 111a8fbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8fc1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 111a8fc8 jmp 0x111a900d */
  goto L_111a900d;
L_111a8fca:;
  /* 111a8fca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8fcd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8fd3 jne 0x111a8fe1 */
  if (!C.zf) goto L_111a8fe1;
  /* 111a8fd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8fd8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 111a8fdf jmp 0x111a900d */
  goto L_111a900d;
L_111a8fe1:;
  /* 111a8fe1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8fe4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a8fea jne 0x111a8ff8 */
  if (!C.zf) goto L_111a8ff8;
  /* 111a8fec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a8fef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 111a8ff6 jmp 0x111a900d */
  goto L_111a900d;
L_111a8ff8:;
  /* 111a8ff8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a8ffb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9001 jne 0x111a900d */
  if (!C.zf) goto L_111a900d;
  /* 111a9003 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9006 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_111a900d:;
  /* 111a900d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9010 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 111a9013 push edx */
  push32((uint32_t)(EDX));
  /* 111a9014 push 8 */
  push32((uint32_t)(0x8u));
  /* 111a9016 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x111a9019u);
  /* 111a9019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a901c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a901f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a9022 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 111a9025 jmp 0x111a903e */
  goto L_111a903e;
L_111a9027:;
  /* 111a9027 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a902a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 111a9031 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a9034 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111a9037 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9038 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x111a903bu);
  /* 111a903b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a903e:;
  /* 111a903e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9041 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111a9044 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 111a9047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111a904a:;
  /* 111a904a mov esp, ebp */
  ESP = (EBP);
  /* 111a904c pop ebp */
  EBP = (pop32());
  /* 111a904d ret  */
  ESPCHK(0x111a8e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009050 @ 0x111a9050 (89 bytes, 35 insns) */
void f_111a9050(void) {
  FTRACE(0x111a9050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9050 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9051 mov ebp, esp */
  EBP = (ESP);
  /* 111a9053 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9054 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a9057 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111a905a:;
  /* 111a905a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a905d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111a905f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9062 je 0x111a9082 */
  if (C.zf) goto L_111a9082;
  /* 111a9064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9067 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a906a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a906d mov ecx, dword ptr [0x111cfc84] */
  ECX = (r32((uint32_t)(0x111cfc84)));
  /* 111a9073 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a9076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a9079 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a907b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a907e jae 0x111a9082 */
  if (!C.cf) goto L_111a9082;
  /* 111a9080 jmp 0x111a905a */
  goto L_111a905a;
L_111a9082:;
  /* 111a9082 mov eax, dword ptr [0x111cfc84] */
  EAX = (r32((uint32_t)(0x111cfc84)));
  /* 111a9087 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111a908a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a908d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a908f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9092 jae 0x111a909e */
  if (!C.cf) goto L_111a909e;
  /* 111a9094 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9097 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111a9099 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a909c je 0x111a90a2 */
  if (C.zf) goto L_111a90a2;
L_111a909e:;
  /* 111a909e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a90a0 jmp 0x111a90a5 */
  goto L_111a90a5;
L_111a90a2:;
  /* 111a90a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111a90a5:;
  /* 111a90a5 mov esp, ebp */
  ESP = (EBP);
  /* 111a90a7 pop ebp */
  EBP = (pop32());
  /* 111a90a8 ret  */
  ESPCHK(0x111a9050u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x111a90b0 (48 bytes, 17 insns) */
void f_111a90b0(void) {
  FTRACE(0x111a90b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a90b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a90b1 mov ebp, esp */
  EBP = (ESP);
  /* 111a90b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a90b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a90b6 call 0x111a8db0 */
  push32(0x111a90bbu); f_111a8db0();
  /* 111a90bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a90be mov eax, dword ptr [0x111d184c] */
  EAX = (r32((uint32_t)(0x111d184c)));
  /* 111a90c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a90c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a90c9 mov dword ptr [0x111d184c], ecx */
  w32((uint32_t)(0x111d184c), (ECX));
  /* 111a90cf push 9 */
  push32((uint32_t)(0x9u));
  /* 111a90d1 call 0x111a8e50 */
  push32(0x111a90d6u); f_111a8e50();
  /* 111a90d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a90d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a90dc mov esp, ebp */
  ESP = (EBP);
  /* 111a90de pop ebp */
  EBP = (pop32());
  /* 111a90df ret  */
  ESPCHK(0x111a90b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090e0 @ 0x111a90e0 (10 bytes, 5 insns) */
void f_111a90e0(void) {
  FTRACE(0x111a90e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a90e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a90e1 mov ebp, esp */
  EBP = (ESP);
  /* 111a90e3 mov eax, dword ptr [0x111d184c] */
  EAX = (r32((uint32_t)(0x111d184c)));
  /* 111a90e8 pop ebp */
  EBP = (pop32());
  /* 111a90e9 ret  */
  ESPCHK(0x111a90e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x111a90f0 (45 bytes, 19 insns) */
void f_111a90f0(void) {
  FTRACE(0x111a90f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a90f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a90f1 mov ebp, esp */
  EBP = (ESP);
  /* 111a90f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a90f4 mov eax, dword ptr [0x111d184c] */
  EAX = (r32((uint32_t)(0x111d184c)));
  /* 111a90f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a90fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9100 je 0x111a9110 */
  if (C.zf) goto L_111a9110;
  /* 111a9102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9105 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9106 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x111a9109u);
  /* 111a9109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a910c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a910e jne 0x111a9114 */
  if (!C.zf) goto L_111a9114;
L_111a9110:;
  /* 111a9110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a9112 jmp 0x111a9119 */
  goto L_111a9119;
L_111a9114:;
  /* 111a9114 mov eax, 1 */
  EAX = (0x1u);
L_111a9119:;
  /* 111a9119 mov esp, ebp */
  ESP = (EBP);
  /* 111a911b pop ebp */
  EBP = (pop32());
  /* 111a911c ret  */
  ESPCHK(0x111a90f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x111a9120 (88 bytes, 40 insns) */
void f_111a9120(void) {
  FTRACE(0x111a9120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9120 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 111a9124 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111a9128 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a912a je 0x111a9173 */
  if (C.zf) goto L_111a9173;
  /* 111a912c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a912e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 111a9132 push edi */
  push32((uint32_t)(EDI));
  /* 111a9133 mov edi, ecx */
  EDI = (ECX);
  /* 111a9135 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9138 jb 0x111a9167 */
  if (C.cf) goto L_111a9167;
  /* 111a913a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111a913c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111a913f je 0x111a9149 */
  if (C.zf) goto L_111a9149;
  /* 111a9141 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_111a9143:;
  /* 111a9143 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111a9145 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111a9146 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111a9147 jne 0x111a9143 */
  if (!C.zf) goto L_111a9143;
L_111a9149:;
  /* 111a9149 mov ecx, eax */
  ECX = (EAX);
  /* 111a914b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111a914e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9150 mov ecx, eax */
  ECX = (EAX);
  /* 111a9152 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111a9155 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9157 mov ecx, edx */
  ECX = (EDX);
  /* 111a9159 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111a915c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111a915f je 0x111a9167 */
  if (C.zf) goto L_111a9167;
  /* 111a9161 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111a9163 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111a9165 je 0x111a916d */
  if (C.zf) goto L_111a916d;
L_111a9167:;
  /* 111a9167 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111a9169 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111a916a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111a916b jne 0x111a9167 */
  if (!C.zf) goto L_111a9167;
L_111a916d:;
  /* 111a916d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111a9171 pop edi */
  EDI = (pop32());
  /* 111a9172 ret  */
  ESPCHK(0x111a9120u, _esp0);
  ESP += 4; return;
L_111a9173:;
  /* 111a9173 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111a9177 ret  */
  ESPCHK(0x111a9120u, _esp0);
  ESP += 4; return;
}

/* FUN_10009180 @ 0x111a9180 (23 bytes, 10 insns) */
void f_111a9180(void) {
  FTRACE(0x111a9180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9180 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9181 mov ebp, esp */
  EBP = (ESP);
  /* 111a9183 mov eax, dword ptr [0x111d1848] */
  EAX = (r32((uint32_t)(0x111d1848)));
  /* 111a9188 push eax */
  push32((uint32_t)(EAX));
  /* 111a9189 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a918c push ecx */
  push32((uint32_t)(ECX));
  /* 111a918d call 0x111a91a0 */
  push32(0x111a9192u); f_111a91a0();
  /* 111a9192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9195 pop ebp */
  EBP = (pop32());
  /* 111a9196 ret  */
  ESPCHK(0x111a9180u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x111a91a0 (87 bytes, 34 insns) */
void f_111a91a0(void) {
  FTRACE(0x111a91a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a91a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111a91a1 mov ebp, esp */
  EBP = (ESP);
  /* 111a91a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111a91a4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a91a8 jbe 0x111a91ae */
  if ((C.cf||C.zf)) goto L_111a91ae;
  /* 111a91aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a91ac jmp 0x111a91f3 */
  goto L_111a91f3;
L_111a91ae:;
  /* 111a91ae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a91b2 ja 0x111a91c5 */
  if ((!C.cf&&!C.zf)) goto L_111a91c5;
  /* 111a91b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a91b7 push eax */
  push32((uint32_t)(EAX));
  /* 111a91b8 call 0x111a9200 */
  push32(0x111a91bdu); f_111a9200();
  /* 111a91bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a91c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a91c3 jmp 0x111a91cc */
  goto L_111a91cc;
L_111a91c5:;
  /* 111a91c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111a91cc:;
  /* 111a91cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a91d0 jne 0x111a91d8 */
  if (!C.zf) goto L_111a91d8;
  /* 111a91d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a91d6 jne 0x111a91dd */
  if (!C.zf) goto L_111a91dd;
L_111a91d8:;
  /* 111a91d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a91db jmp 0x111a91f3 */
  goto L_111a91f3;
L_111a91dd:;
  /* 111a91dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a91e0 push ecx */
  push32((uint32_t)(ECX));
  /* 111a91e1 call 0x111a90f0 */
  push32(0x111a91e6u); f_111a90f0();
  /* 111a91e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a91e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a91eb jne 0x111a91f1 */
  if (!C.zf) goto L_111a91f1;
  /* 111a91ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a91ef jmp 0x111a91f3 */
  goto L_111a91f3;
L_111a91f1:;
  /* 111a91f1 jmp 0x111a91ae */
  goto L_111a91ae;
L_111a91f3:;
  /* 111a91f3 mov esp, ebp */
  ESP = (EBP);
  /* 111a91f5 pop ebp */
  EBP = (pop32());
  /* 111a91f6 ret  */
  ESPCHK(0x111a91a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009200 @ 0x111a9200 (109 bytes, 37 insns) */
void f_111a9200(void) {
  FTRACE(0x111a9200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9200 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9201 mov ebp, esp */
  EBP = (ESP);
  /* 111a9203 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9207 cmp eax, dword ptr [0x111cfc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111cfc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a920d ja 0x111a923d */
  if ((!C.cf&&!C.zf)) goto L_111a923d;
  /* 111a920f push 9 */
  push32((uint32_t)(0x9u));
  /* 111a9211 call 0x111a8db0 */
  push32(0x111a9216u); f_111a8db0();
  /* 111a9216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a921c push ecx */
  push32((uint32_t)(ECX));
  /* 111a921d call 0x111a9d40 */
  push32(0x111a9222u); f_111a9d40();
  /* 111a9222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9225 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a9228 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a922a call 0x111a8e50 */
  push32(0x111a922fu); f_111a8e50();
  /* 111a922f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9232 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9236 je 0x111a923d */
  if (C.zf) goto L_111a923d;
  /* 111a9238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a923b jmp 0x111a9269 */
  goto L_111a9269;
L_111a923d:;
  /* 111a923d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9241 jne 0x111a924a */
  if (!C.zf) goto L_111a924a;
  /* 111a9243 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_111a924a:;
  /* 111a924a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a924d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9250 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 111a9253 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111a9256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9259 push eax */
  push32((uint32_t)(EAX));
  /* 111a925a push 0 */
  push32((uint32_t)(0x0u));
  /* 111a925c mov ecx, dword ptr [0x111d300c] */
  ECX = (r32((uint32_t)(0x111d300c)));
  /* 111a9262 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9263 call dword ptr [0x111d4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4334))), 0x111a9269u);
L_111a9269:;
  /* 111a9269 mov esp, ebp */
  ESP = (EBP);
  /* 111a926b pop ebp */
  EBP = (pop32());
  /* 111a926c ret  */
  ESPCHK(0x111a9200u, _esp0);
  ESP += 4; return;
}

/* FUN_10009270 @ 0x111a9270 (10 bytes, 5 insns) */
void f_111a9270(void) {
  FTRACE(0x111a9270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9270 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9271 mov ebp, esp */
  EBP = (ESP);
  /* 111a9273 mov eax, 1 */
  EAX = (0x1u);
  /* 111a9278 pop ebp */
  EBP = (pop32());
  /* 111a9279 ret  */
  ESPCHK(0x111a9270u, _esp0);
  ESP += 4; return;
}

/* FUN_10009280 @ 0x111a9280 (173 bytes, 59 insns) */
void f_111a9280(void) {
  FTRACE(0x111a9280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9280 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9281 mov ebp, esp */
  EBP = (ESP);
  /* 111a9283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9286 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a928a jbe 0x111a9293 */
  if ((C.cf||C.zf)) goto L_111a9293;
  /* 111a928c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a928e jmp 0x111a9329 */
  goto L_111a9329;
L_111a9293:;
  /* 111a9293 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a9295 call 0x111a8db0 */
  push32(0x111a929au); f_111a8db0();
  /* 111a929a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a929d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a92a0 push eax */
  push32((uint32_t)(EAX));
  /* 111a92a1 call 0x111a96b0 */
  push32(0x111a92a6u); f_111a96b0();
  /* 111a92a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a92a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a92ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a92b0 je 0x111a92f1 */
  if (C.zf) goto L_111a92f1;
  /* 111a92b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111a92b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a92bc cmp ecx, dword ptr [0x111cfc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111cfc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a92c2 ja 0x111a92e2 */
  if ((!C.cf&&!C.zf)) goto L_111a92e2;
  /* 111a92c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a92c7 push edx */
  push32((uint32_t)(EDX));
  /* 111a92c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a92cb push eax */
  push32((uint32_t)(EAX));
  /* 111a92cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a92cf push ecx */
  push32((uint32_t)(ECX));
  /* 111a92d0 call 0x111aa580 */
  push32(0x111a92d5u); f_111aa580();
  /* 111a92d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a92d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a92da je 0x111a92e2 */
  if (C.zf) goto L_111a92e2;
  /* 111a92dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a92df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111a92e2:;
  /* 111a92e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a92e4 call 0x111a8e50 */
  push32(0x111a92e9u); f_111a8e50();
  /* 111a92e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a92ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a92ef jmp 0x111a9329 */
  goto L_111a9329;
L_111a92f1:;
  /* 111a92f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a92f3 call 0x111a8e50 */
  push32(0x111a92f8u); f_111a8e50();
  /* 111a92f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a92fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a92ff jne 0x111a9308 */
  if (!C.zf) goto L_111a9308;
  /* 111a9301 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_111a9308:;
  /* 111a9308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a930b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a930e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 111a9310 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 111a9313 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a9316 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a931a push edx */
  push32((uint32_t)(EDX));
  /* 111a931b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111a931d mov eax, dword ptr [0x111d300c] */
  EAX = (r32((uint32_t)(0x111d300c)));
  /* 111a9322 push eax */
  push32((uint32_t)(EAX));
  /* 111a9323 call dword ptr [0x111d433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d433c))), 0x111a9329u);
L_111a9329:;
  /* 111a9329 mov esp, ebp */
  ESP = (EBP);
  /* 111a932b pop ebp */
  EBP = (pop32());
  /* 111a932c ret  */
  ESPCHK(0x111a9280u, _esp0);
  ESP += 4; return;
}

/* FUN_10009330 @ 0x111a9330 (490 bytes, 165 insns) */
void f_111a9330(void) {
  FTRACE(0x111a9330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9330 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9331 mov ebp, esp */
  EBP = (ESP);
  /* 111a9333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9336 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a933a jne 0x111a934d */
  if (!C.zf) goto L_111a934d;
  /* 111a933c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a933f push eax */
  push32((uint32_t)(EAX));
  /* 111a9340 call 0x111a9180 */
  push32(0x111a9345u); f_111a9180();
  /* 111a9345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9348 jmp 0x111a9516 */
  goto L_111a9516;
L_111a934d:;
  /* 111a934d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9351 jne 0x111a9366 */
  if (!C.zf) goto L_111a9366;
  /* 111a9353 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9356 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9357 call 0x111a9520 */
  push32(0x111a935cu); f_111a9520();
  /* 111a935c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a935f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a9361 jmp 0x111a9516 */
  goto L_111a9516;
L_111a9366:;
  /* 111a9366 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111a936d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9371 ja 0x111a94e9 */
  if ((!C.cf&&!C.zf)) goto L_111a94e9;
  /* 111a9377 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a9379 call 0x111a8db0 */
  push32(0x111a937eu); f_111a8db0();
  /* 111a937e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9384 push edx */
  push32((uint32_t)(EDX));
  /* 111a9385 call 0x111a96b0 */
  push32(0x111a938au); f_111a96b0();
  /* 111a938a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a938d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111a9390 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9394 je 0x111a94ac */
  if (C.zf) goto L_111a94ac;
  /* 111a939a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a939d cmp eax, dword ptr [0x111cfc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111cfc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a93a3 ja 0x111a9420 */
  if ((!C.cf&&!C.zf)) goto L_111a9420;
  /* 111a93a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a93a8 push ecx */
  push32((uint32_t)(ECX));
  /* 111a93a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a93ac push edx */
  push32((uint32_t)(EDX));
  /* 111a93ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a93b0 push eax */
  push32((uint32_t)(EAX));
  /* 111a93b1 call 0x111aa580 */
  push32(0x111a93b6u); f_111aa580();
  /* 111a93b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a93b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a93bb je 0x111a93c5 */
  if (C.zf) goto L_111a93c5;
  /* 111a93bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a93c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111a93c3 jmp 0x111a9420 */
  goto L_111a9420;
L_111a93c5:;
  /* 111a93c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a93c8 push edx */
  push32((uint32_t)(EDX));
  /* 111a93c9 call 0x111a9d40 */
  push32(0x111a93ceu); f_111a9d40();
  /* 111a93ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a93d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a93d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a93d8 je 0x111a9420 */
  if (C.zf) goto L_111a9420;
  /* 111a93da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a93dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 111a93e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a93e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111a93e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a93e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a93ec jae 0x111a93f6 */
  if (!C.cf) goto L_111a93f6;
  /* 111a93ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a93f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111a93f4 jmp 0x111a93fc */
  goto L_111a93fc;
L_111a93f6:;
  /* 111a93f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a93f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_111a93fc:;
  /* 111a93fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111a93ff push edx */
  push32((uint32_t)(EDX));
  /* 111a9400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9403 push eax */
  push32((uint32_t)(EAX));
  /* 111a9404 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9407 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9408 call 0x111abc90 */
  push32(0x111a940du); f_111abc90();
  /* 111a940d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9410 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9413 push edx */
  push32((uint32_t)(EDX));
  /* 111a9414 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a9417 push eax */
  push32((uint32_t)(EAX));
  /* 111a9418 call 0x111a9770 */
  push32(0x111a941du); f_111a9770();
  /* 111a941d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a9420:;
  /* 111a9420 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9424 jne 0x111a94a0 */
  if (!C.zf) goto L_111a94a0;
  /* 111a9426 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a942a jne 0x111a9433 */
  if (!C.zf) goto L_111a9433;
  /* 111a942c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_111a9433:;
  /* 111a9433 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a9436 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9439 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 111a943c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 111a943f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a9442 push edx */
  push32((uint32_t)(EDX));
  /* 111a9443 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a9445 mov eax, dword ptr [0x111d300c] */
  EAX = (r32((uint32_t)(0x111d300c)));
  /* 111a944a push eax */
  push32((uint32_t)(EAX));
  /* 111a944b call dword ptr [0x111d4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4334))), 0x111a9451u);
  /* 111a9451 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111a9454 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9458 je 0x111a94a0 */
  if (C.zf) goto L_111a94a0;
  /* 111a945a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a945d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 111a9460 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111a9463 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111a9466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9469 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a946c jae 0x111a9476 */
  if (!C.cf) goto L_111a9476;
  /* 111a946e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9471 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 111a9474 jmp 0x111a947c */
  goto L_111a947c;
L_111a9476:;
  /* 111a9476 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a9479 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_111a947c:;
  /* 111a947c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111a947f push eax */
  push32((uint32_t)(EAX));
  /* 111a9480 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9483 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9484 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a9487 push edx */
  push32((uint32_t)(EDX));
  /* 111a9488 call 0x111abc90 */
  push32(0x111a948du); f_111abc90();
  /* 111a948d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9493 push eax */
  push32((uint32_t)(EAX));
  /* 111a9494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111a9497 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9498 call 0x111a9770 */
  push32(0x111a949du); f_111a9770();
  /* 111a949d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111a94a0:;
  /* 111a94a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a94a2 call 0x111a8e50 */
  push32(0x111a94a7u); f_111a8e50();
  /* 111a94a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a94aa jmp 0x111a94e9 */
  goto L_111a94e9;
L_111a94ac:;
  /* 111a94ac push 9 */
  push32((uint32_t)(0x9u));
  /* 111a94ae call 0x111a8e50 */
  push32(0x111a94b3u); f_111a8e50();
  /* 111a94b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a94b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a94ba jne 0x111a94c3 */
  if (!C.zf) goto L_111a94c3;
  /* 111a94bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_111a94c3:;
  /* 111a94c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a94c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111a94c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 111a94cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 111a94cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a94d2 push eax */
  push32((uint32_t)(EAX));
  /* 111a94d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a94d6 push ecx */
  push32((uint32_t)(ECX));
  /* 111a94d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a94d9 mov edx, dword ptr [0x111d300c] */
  EDX = (r32((uint32_t)(0x111d300c)));
  /* 111a94df push edx */
  push32((uint32_t)(EDX));
  /* 111a94e0 call dword ptr [0x111d433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d433c))), 0x111a94e6u);
  /* 111a94e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111a94e9:;
  /* 111a94e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a94ed jne 0x111a94f8 */
  if (!C.zf) goto L_111a94f8;
  /* 111a94ef cmp dword ptr [0x111d1848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111d1848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a94f6 jne 0x111a94fd */
  if (!C.zf) goto L_111a94fd;
L_111a94f8:;
  /* 111a94f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111a94fb jmp 0x111a9516 */
  goto L_111a9516;
L_111a94fd:;
  /* 111a94fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111a9500 push eax */
  push32((uint32_t)(EAX));
  /* 111a9501 call 0x111a90f0 */
  push32(0x111a9506u); f_111a90f0();
  /* 111a9506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a950b jne 0x111a9511 */
  if (!C.zf) goto L_111a9511;
  /* 111a950d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111a950f jmp 0x111a9516 */
  goto L_111a9516;
L_111a9511:;
  /* 111a9511 jmp 0x111a9366 */
  goto L_111a9366;
L_111a9516:;
  /* 111a9516 mov esp, ebp */
  ESP = (EBP);
  /* 111a9518 pop ebp */
  EBP = (pop32());
  /* 111a9519 ret  */
  ESPCHK(0x111a9330u, _esp0);
  ESP += 4; return;
}

/* FUN_10009520 @ 0x111a9520 (104 bytes, 38 insns) */
void f_111a9520(void) {
  FTRACE(0x111a9520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9520 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9521 mov ebp, esp */
  EBP = (ESP);
  /* 111a9523 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9524 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9528 jne 0x111a952c */
  if (!C.zf) goto L_111a952c;
  /* 111a952a jmp 0x111a9584 */
  goto L_111a9584;
L_111a952c:;
  /* 111a952c push 9 */
  push32((uint32_t)(0x9u));
  /* 111a952e call 0x111a8db0 */
  push32(0x111a9533u); f_111a8db0();
  /* 111a9533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9539 push eax */
  push32((uint32_t)(EAX));
  /* 111a953a call 0x111a96b0 */
  push32(0x111a953fu); f_111a96b0();
  /* 111a953f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111a9545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a9549 je 0x111a9567 */
  if (C.zf) goto L_111a9567;
  /* 111a954b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a954e push ecx */
  push32((uint32_t)(ECX));
  /* 111a954f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9552 push edx */
  push32((uint32_t)(EDX));
  /* 111a9553 call 0x111a9770 */
  push32(0x111a9558u); f_111a9770();
  /* 111a9558 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a955b push 9 */
  push32((uint32_t)(0x9u));
  /* 111a955d call 0x111a8e50 */
  push32(0x111a9562u); f_111a8e50();
  /* 111a9562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9565 jmp 0x111a9584 */
  goto L_111a9584;
L_111a9567:;
  /* 111a9567 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a9569 call 0x111a8e50 */
  push32(0x111a956eu); f_111a8e50();
  /* 111a956e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a9571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111a9574 push eax */
  push32((uint32_t)(EAX));
  /* 111a9575 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a9577 mov ecx, dword ptr [0x111d300c] */
  ECX = (r32((uint32_t)(0x111d300c)));
  /* 111a957d push ecx */
  push32((uint32_t)(ECX));
  /* 111a957e call dword ptr [0x111d4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4360))), 0x111a9584u);
L_111a9584:;
  /* 111a9584 mov esp, ebp */
  ESP = (EBP);
  /* 111a9586 pop ebp */
  EBP = (pop32());
  /* 111a9587 ret  */
  ESPCHK(0x111a9520u, _esp0);
  ESP += 4; return;
}

/* FUN_10009590 @ 0x111a9590 (116 bytes, 34 insns) */
void f_111a9590(void) {
  FTRACE(0x111a9590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9590 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9591 mov ebp, esp */
  EBP = (ESP);
  /* 111a9593 push ecx */
  push32((uint32_t)(ECX));
  /* 111a9594 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 111a959b push 9 */
  push32((uint32_t)(0x9u));
  /* 111a959d call 0x111a8db0 */
  push32(0x111a95a2u); f_111a8db0();
  /* 111a95a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a95a5 call 0x111aaca0 */
  push32(0x111a95aau); f_111aaca0();
  /* 111a95aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a95ac jge 0x111a95b5 */
  if ((C.sf==C.of)) goto L_111a95b5;
  /* 111a95ae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_111a95b5:;
  /* 111a95b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 111a95b7 call 0x111a8e50 */
  push32(0x111a95bcu); f_111a8e50();
  /* 111a95bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111a95bf push 0 */
  push32((uint32_t)(0x0u));
  /* 111a95c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111a95c3 mov eax, dword ptr [0x111d300c] */
  EAX = (r32((uint32_t)(0x111d300c)));
  /* 111a95c8 push eax */
  push32((uint32_t)(EAX));
  /* 111a95c9 call dword ptr [0x111d4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d4374))), 0x111a95cfu);
  /* 111a95cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111a95d1 jne 0x111a95fd */
  if (!C.zf) goto L_111a95fd;
  /* 111a95d3 call dword ptr [0x111d43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111d43ac))), 0x111a95d9u);
  /* 111a95d9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111a95dc jne 0x111a95f6 */
  if (!C.zf) goto L_111a95f6;
  /* 111a95de call 0x111ad290 */
  push32(0x111a95e3u); f_111ad290();
  /* 111a95e3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 111a95e9 call 0x111ad280 */
  push32(0x111a95eeu); f_111ad280();
  /* 111a95ee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 111a95f4 jmp 0x111a95fd */
  goto L_111a95fd;
L_111a95f6:;
  /* 111a95f6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_111a95fd:;
  /* 111a95fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111a9600 mov esp, ebp */
  ESP = (EBP);
  /* 111a9602 pop ebp */
  EBP = (pop32());
  /* 111a9603 ret  */
  ESPCHK(0x111a9590u, _esp0);
  ESP += 4; return;
}

/* FUN_10009610 @ 0x111a9610 (10 bytes, 5 insns) */
void f_111a9610(void) {
  FTRACE(0x111a9610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111a9610 push ebp */
  push32((uint32_t)(EBP));
  /* 111a9611 mov ebp, esp */
  EBP = (ESP);
  /* 111a9613 call 0x111a9590 */
  push32(0x111a9618u); f_111a9590();
  /* 111a9618 pop ebp */
  EBP = (pop32());
  /* 111a9619 ret  */
  ESPCHK(0x111a9610u, _esp0);
  ESP += 4; return;
}

