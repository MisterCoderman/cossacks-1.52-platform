#include "recomp.h"

/* OnInit @ 0x11eb1005 (5 bytes, 1 insns) */
void f_11eb1005(void) {
  FTRACE(0x11eb1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb1005 jmp 0x11eb1030 */
  f_11eb1030(); return;
}

/* thunk_FUN_10002090 @ 0x11eb100a (5 bytes, 1 insns) */
void f_11eb100a(void) {
  FTRACE(0x11eb100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb100a jmp 0x11eb2090 */
  f_11eb2090(); return;
}

/* ProcessScenary @ 0x11eb100f (5 bytes, 1 insns) */
void f_11eb100f(void) {
  FTRACE(0x11eb100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb100f jmp 0x11eb20f0 */
  f_11eb20f0(); return;
}

/* FUN_10001030 @ 0x11eb1030 (3345 bytes, 885 insns) */
void f_11eb1030(void) {
  FTRACE(0x11eb1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb1030 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb1031 mov ebp, esp */
  EBP = (ESP);
  /* 11eb1033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb1036 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb1037 push esi */
  push32((uint32_t)(ESI));
  /* 11eb1038 push edi */
  push32((uint32_t)(EDI));
  /* 11eb1039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11eb103c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11eb1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11eb1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11eb1048 mov esi, esp */
  ESI = (ESP);
  /* 11eb104a push 0x11edd364 */
  push32((uint32_t)(0x11edd364u));
  /* 11eb104f push 0x11ee2498 */
  push32((uint32_t)(0x11ee2498u));
  /* 11eb1054 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb105au);
  /* 11eb105a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb105d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb105f call 0x11eb5120 */
  push32(0x11eb1064u); f_11eb5120();
  /* 11eb1064 mov esi, esp */
  ESI = (ESP);
  /* 11eb1066 push 0x11edd35c */
  push32((uint32_t)(0x11edd35cu));
  /* 11eb106b push 0x11ee2490 */
  push32((uint32_t)(0x11ee2490u));
  /* 11eb1070 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb1076u);
  /* 11eb1076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb107b call 0x11eb5120 */
  push32(0x11eb1080u); f_11eb5120();
  /* 11eb1080 mov esi, esp */
  ESI = (ESP);
  /* 11eb1082 push 0x11edd350 */
  push32((uint32_t)(0x11edd350u));
  /* 11eb1087 push 0x11ee24a8 */
  push32((uint32_t)(0x11ee24a8u));
  /* 11eb108c call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb1092u);
  /* 11eb1092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1095 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1097 call 0x11eb5120 */
  push32(0x11eb109cu); f_11eb5120();
  /* 11eb109c mov esi, esp */
  ESI = (ESP);
  /* 11eb109e push 0x11edd348 */
  push32((uint32_t)(0x11edd348u));
  /* 11eb10a3 push 0x11ee2580 */
  push32((uint32_t)(0x11ee2580u));
  /* 11eb10a8 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb10aeu);
  /* 11eb10ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb10b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb10b3 call 0x11eb5120 */
  push32(0x11eb10b8u); f_11eb5120();
  /* 11eb10b8 mov esi, esp */
  ESI = (ESP);
  /* 11eb10ba push 0x11edd340 */
  push32((uint32_t)(0x11edd340u));
  /* 11eb10bf push 0x11ee2588 */
  push32((uint32_t)(0x11ee2588u));
  /* 11eb10c4 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb10cau);
  /* 11eb10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb10cf call 0x11eb5120 */
  push32(0x11eb10d4u); f_11eb5120();
  /* 11eb10d4 mov esi, esp */
  ESI = (ESP);
  /* 11eb10d6 push 0x11edd338 */
  push32((uint32_t)(0x11edd338u));
  /* 11eb10db push 0x11ee2590 */
  push32((uint32_t)(0x11ee2590u));
  /* 11eb10e0 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb10e6u);
  /* 11eb10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb10eb call 0x11eb5120 */
  push32(0x11eb10f0u); f_11eb5120();
  /* 11eb10f0 mov esi, esp */
  ESI = (ESP);
  /* 11eb10f2 push 0x11edd330 */
  push32((uint32_t)(0x11edd330u));
  /* 11eb10f7 push 0x11ee25a0 */
  push32((uint32_t)(0x11ee25a0u));
  /* 11eb10fc call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb1102u);
  /* 11eb1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1107 call 0x11eb5120 */
  push32(0x11eb110cu); f_11eb5120();
  /* 11eb110c mov esi, esp */
  ESI = (ESP);
  /* 11eb110e push 0x11edd328 */
  push32((uint32_t)(0x11edd328u));
  /* 11eb1113 push 0x11ee25a8 */
  push32((uint32_t)(0x11ee25a8u));
  /* 11eb1118 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb111eu);
  /* 11eb111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1123 call 0x11eb5120 */
  push32(0x11eb1128u); f_11eb5120();
  /* 11eb1128 mov esi, esp */
  ESI = (ESP);
  /* 11eb112a push 0x11edd320 */
  push32((uint32_t)(0x11edd320u));
  /* 11eb112f push 0x11ee25b0 */
  push32((uint32_t)(0x11ee25b0u));
  /* 11eb1134 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb113au);
  /* 11eb113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb113f call 0x11eb5120 */
  push32(0x11eb1144u); f_11eb5120();
  /* 11eb1144 mov esi, esp */
  ESI = (ESP);
  /* 11eb1146 push 0x11edd318 */
  push32((uint32_t)(0x11edd318u));
  /* 11eb114b push 0x11ee25b8 */
  push32((uint32_t)(0x11ee25b8u));
  /* 11eb1150 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb1156u);
  /* 11eb1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb115b call 0x11eb5120 */
  push32(0x11eb1160u); f_11eb5120();
  /* 11eb1160 mov esi, esp */
  ESI = (ESP);
  /* 11eb1162 push 0x11edd310 */
  push32((uint32_t)(0x11edd310u));
  /* 11eb1167 push 0x11ee25c0 */
  push32((uint32_t)(0x11ee25c0u));
  /* 11eb116c call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb1172u);
  /* 11eb1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1177 call 0x11eb5120 */
  push32(0x11eb117cu); f_11eb5120();
  /* 11eb117c mov esi, esp */
  ESI = (ESP);
  /* 11eb117e push 0x11edd308 */
  push32((uint32_t)(0x11edd308u));
  /* 11eb1183 push 0x11ee25c8 */
  push32((uint32_t)(0x11ee25c8u));
  /* 11eb1188 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb118eu);
  /* 11eb118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1193 call 0x11eb5120 */
  push32(0x11eb1198u); f_11eb5120();
  /* 11eb1198 mov esi, esp */
  ESI = (ESP);
  /* 11eb119a push 0x11edd300 */
  push32((uint32_t)(0x11edd300u));
  /* 11eb119f push 0x11ee23e0 */
  push32((uint32_t)(0x11ee23e0u));
  /* 11eb11a4 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb11aau);
  /* 11eb11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb11af call 0x11eb5120 */
  push32(0x11eb11b4u); f_11eb5120();
  /* 11eb11b4 mov esi, esp */
  ESI = (ESP);
  /* 11eb11b6 push 0x11edd2f8 */
  push32((uint32_t)(0x11edd2f8u));
  /* 11eb11bb push 0x11ee24b8 */
  push32((uint32_t)(0x11ee24b8u));
  /* 11eb11c0 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb11c6u);
  /* 11eb11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb11cb call 0x11eb5120 */
  push32(0x11eb11d0u); f_11eb5120();
  /* 11eb11d0 mov esi, esp */
  ESI = (ESP);
  /* 11eb11d2 push 0x11edd2f0 */
  push32((uint32_t)(0x11edd2f0u));
  /* 11eb11d7 push 0x11ee2468 */
  push32((uint32_t)(0x11ee2468u));
  /* 11eb11dc call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb11e2u);
  /* 11eb11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb11e7 call 0x11eb5120 */
  push32(0x11eb11ecu); f_11eb5120();
  /* 11eb11ec mov esi, esp */
  ESI = (ESP);
  /* 11eb11ee push 0x11edd2e8 */
  push32((uint32_t)(0x11edd2e8u));
  /* 11eb11f3 push 0x11ee2470 */
  push32((uint32_t)(0x11ee2470u));
  /* 11eb11f8 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb11feu);
  /* 11eb11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1203 call 0x11eb5120 */
  push32(0x11eb1208u); f_11eb5120();
  /* 11eb1208 mov esi, esp */
  ESI = (ESP);
  /* 11eb120a push 0x11edd2e0 */
  push32((uint32_t)(0x11edd2e0u));
  /* 11eb120f push 0x11ee26b0 */
  push32((uint32_t)(0x11ee26b0u));
  /* 11eb1214 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb121au);
  /* 11eb121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb121f call 0x11eb5120 */
  push32(0x11eb1224u); f_11eb5120();
  /* 11eb1224 mov esi, esp */
  ESI = (ESP);
  /* 11eb1226 push 0x11edd2d8 */
  push32((uint32_t)(0x11edd2d8u));
  /* 11eb122b push 0x11ee26b8 */
  push32((uint32_t)(0x11ee26b8u));
  /* 11eb1230 call dword ptr [0x11ee54e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e0))), 0x11eb1236u);
  /* 11eb1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb123b call 0x11eb5120 */
  push32(0x11eb1240u); f_11eb5120();
  /* 11eb1240 mov esi, esp */
  ESI = (ESP);
  /* 11eb1242 push 0x11edd2d0 */
  push32((uint32_t)(0x11edd2d0u));
  /* 11eb1247 push 0x11ee25e8 */
  push32((uint32_t)(0x11ee25e8u));
  /* 11eb124c call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb1252u);
  /* 11eb1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1257 call 0x11eb5120 */
  push32(0x11eb125cu); f_11eb5120();
  /* 11eb125c mov esi, esp */
  ESI = (ESP);
  /* 11eb125e push 0x11edd2c4 */
  push32((uint32_t)(0x11edd2c4u));
  /* 11eb1263 push 0x11ee2680 */
  push32((uint32_t)(0x11ee2680u));
  /* 11eb1268 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb126eu);
  /* 11eb126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1273 call 0x11eb5120 */
  push32(0x11eb1278u); f_11eb5120();
  /* 11eb1278 mov esi, esp */
  ESI = (ESP);
  /* 11eb127a push 0x11edd2bc */
  push32((uint32_t)(0x11edd2bcu));
  /* 11eb127f push 0x11ee25d8 */
  push32((uint32_t)(0x11ee25d8u));
  /* 11eb1284 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb128au);
  /* 11eb128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb128f call 0x11eb5120 */
  push32(0x11eb1294u); f_11eb5120();
  /* 11eb1294 mov esi, esp */
  ESI = (ESP);
  /* 11eb1296 push 0x11edd2b0 */
  push32((uint32_t)(0x11edd2b0u));
  /* 11eb129b push 0x11ee2690 */
  push32((uint32_t)(0x11ee2690u));
  /* 11eb12a0 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb12a6u);
  /* 11eb12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb12ab call 0x11eb5120 */
  push32(0x11eb12b0u); f_11eb5120();
  /* 11eb12b0 mov esi, esp */
  ESI = (ESP);
  /* 11eb12b2 push 0x11edd2a4 */
  push32((uint32_t)(0x11edd2a4u));
  /* 11eb12b7 push 0x11ee2698 */
  push32((uint32_t)(0x11ee2698u));
  /* 11eb12bc call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb12c2u);
  /* 11eb12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb12c7 call 0x11eb5120 */
  push32(0x11eb12ccu); f_11eb5120();
  /* 11eb12cc mov esi, esp */
  ESI = (ESP);
  /* 11eb12ce push 0x11edd29c */
  push32((uint32_t)(0x11edd29cu));
  /* 11eb12d3 push 0x11ee25e0 */
  push32((uint32_t)(0x11ee25e0u));
  /* 11eb12d8 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb12deu);
  /* 11eb12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb12e3 call 0x11eb5120 */
  push32(0x11eb12e8u); f_11eb5120();
  /* 11eb12e8 mov esi, esp */
  ESI = (ESP);
  /* 11eb12ea push 0x11edd290 */
  push32((uint32_t)(0x11edd290u));
  /* 11eb12ef push 0x11ee26a0 */
  push32((uint32_t)(0x11ee26a0u));
  /* 11eb12f4 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb12fau);
  /* 11eb12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb12ff call 0x11eb5120 */
  push32(0x11eb1304u); f_11eb5120();
  /* 11eb1304 mov esi, esp */
  ESI = (ESP);
  /* 11eb1306 push 0x11edd284 */
  push32((uint32_t)(0x11edd284u));
  /* 11eb130b push 0x11ee26a8 */
  push32((uint32_t)(0x11ee26a8u));
  /* 11eb1310 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb1316u);
  /* 11eb1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb131b call 0x11eb5120 */
  push32(0x11eb1320u); f_11eb5120();
  /* 11eb1320 mov esi, esp */
  ESI = (ESP);
  /* 11eb1322 push 0x11edd27c */
  push32((uint32_t)(0x11edd27cu));
  /* 11eb1327 push 0x11ee2558 */
  push32((uint32_t)(0x11ee2558u));
  /* 11eb132c call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb1332u);
  /* 11eb1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1337 call 0x11eb5120 */
  push32(0x11eb133cu); f_11eb5120();
  /* 11eb133c mov esi, esp */
  ESI = (ESP);
  /* 11eb133e push 0x11edd274 */
  push32((uint32_t)(0x11edd274u));
  /* 11eb1343 push 0x11ee2560 */
  push32((uint32_t)(0x11ee2560u));
  /* 11eb1348 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb134eu);
  /* 11eb134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1353 call 0x11eb5120 */
  push32(0x11eb1358u); f_11eb5120();
  /* 11eb1358 mov esi, esp */
  ESI = (ESP);
  /* 11eb135a push 0x11edd268 */
  push32((uint32_t)(0x11edd268u));
  /* 11eb135f push 0x11ee2608 */
  push32((uint32_t)(0x11ee2608u));
  /* 11eb1364 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb136au);
  /* 11eb136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb136f call 0x11eb5120 */
  push32(0x11eb1374u); f_11eb5120();
  /* 11eb1374 mov esi, esp */
  ESI = (ESP);
  /* 11eb1376 push 0x11edd25c */
  push32((uint32_t)(0x11edd25cu));
  /* 11eb137b push 0x11ee2610 */
  push32((uint32_t)(0x11ee2610u));
  /* 11eb1380 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb1386u);
  /* 11eb1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb138b call 0x11eb5120 */
  push32(0x11eb1390u); f_11eb5120();
  /* 11eb1390 mov esi, esp */
  ESI = (ESP);
  /* 11eb1392 push 0x11edd250 */
  push32((uint32_t)(0x11edd250u));
  /* 11eb1397 push 0x11ee25f8 */
  push32((uint32_t)(0x11ee25f8u));
  /* 11eb139c call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb13a2u);
  /* 11eb13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb13a7 call 0x11eb5120 */
  push32(0x11eb13acu); f_11eb5120();
  /* 11eb13ac mov esi, esp */
  ESI = (ESP);
  /* 11eb13ae push 0x11edd244 */
  push32((uint32_t)(0x11edd244u));
  /* 11eb13b3 push 0x11ee2600 */
  push32((uint32_t)(0x11ee2600u));
  /* 11eb13b8 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb13beu);
  /* 11eb13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb13c3 call 0x11eb5120 */
  push32(0x11eb13c8u); f_11eb5120();
  /* 11eb13c8 mov esi, esp */
  ESI = (ESP);
  /* 11eb13ca push 0x11edd238 */
  push32((uint32_t)(0x11edd238u));
  /* 11eb13cf push 0x11ee2628 */
  push32((uint32_t)(0x11ee2628u));
  /* 11eb13d4 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb13dau);
  /* 11eb13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb13df call 0x11eb5120 */
  push32(0x11eb13e4u); f_11eb5120();
  /* 11eb13e4 mov esi, esp */
  ESI = (ESP);
  /* 11eb13e6 push 0x11edd22c */
  push32((uint32_t)(0x11edd22cu));
  /* 11eb13eb push 0x11ee2630 */
  push32((uint32_t)(0x11ee2630u));
  /* 11eb13f0 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb13f6u);
  /* 11eb13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb13fb call 0x11eb5120 */
  push32(0x11eb1400u); f_11eb5120();
  /* 11eb1400 mov esi, esp */
  ESI = (ESP);
  /* 11eb1402 push 0x11edd220 */
  push32((uint32_t)(0x11edd220u));
  /* 11eb1407 push 0x11ee2618 */
  push32((uint32_t)(0x11ee2618u));
  /* 11eb140c call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb1412u);
  /* 11eb1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1417 call 0x11eb5120 */
  push32(0x11eb141cu); f_11eb5120();
  /* 11eb141c mov esi, esp */
  ESI = (ESP);
  /* 11eb141e push 0x11edd214 */
  push32((uint32_t)(0x11edd214u));
  /* 11eb1423 push 0x11ee2620 */
  push32((uint32_t)(0x11ee2620u));
  /* 11eb1428 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb142eu);
  /* 11eb142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1433 call 0x11eb5120 */
  push32(0x11eb1438u); f_11eb5120();
  /* 11eb1438 mov esi, esp */
  ESI = (ESP);
  /* 11eb143a push 0x11edd208 */
  push32((uint32_t)(0x11edd208u));
  /* 11eb143f push 0x11ee2638 */
  push32((uint32_t)(0x11ee2638u));
  /* 11eb1444 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb144au);
  /* 11eb144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb144f call 0x11eb5120 */
  push32(0x11eb1454u); f_11eb5120();
  /* 11eb1454 mov esi, esp */
  ESI = (ESP);
  /* 11eb1456 push 0x11edd1fc */
  push32((uint32_t)(0x11edd1fcu));
  /* 11eb145b push 0x11ee26c8 */
  push32((uint32_t)(0x11ee26c8u));
  /* 11eb1460 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb1466u);
  /* 11eb1466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb146b call 0x11eb5120 */
  push32(0x11eb1470u); f_11eb5120();
  /* 11eb1470 mov esi, esp */
  ESI = (ESP);
  /* 11eb1472 push 0x11edd1f0 */
  push32((uint32_t)(0x11edd1f0u));
  /* 11eb1477 push 0x11ee26c0 */
  push32((uint32_t)(0x11ee26c0u));
  /* 11eb147c call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb1482u);
  /* 11eb1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1487 call 0x11eb5120 */
  push32(0x11eb148cu); f_11eb5120();
  /* 11eb148c mov esi, esp */
  ESI = (ESP);
  /* 11eb148e push 0x11edd1e4 */
  push32((uint32_t)(0x11edd1e4u));
  /* 11eb1493 push 0x11ee2430 */
  push32((uint32_t)(0x11ee2430u));
  /* 11eb1498 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb149eu);
  /* 11eb149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb14a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb14a3 call 0x11eb5120 */
  push32(0x11eb14a8u); f_11eb5120();
  /* 11eb14a8 mov esi, esp */
  ESI = (ESP);
  /* 11eb14aa push 0x11edd1d8 */
  push32((uint32_t)(0x11edd1d8u));
  /* 11eb14af push 0x11ee2438 */
  push32((uint32_t)(0x11ee2438u));
  /* 11eb14b4 call dword ptr [0x11ee54e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e4))), 0x11eb14bau);
  /* 11eb14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb14bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb14bf call 0x11eb5120 */
  push32(0x11eb14c4u); f_11eb5120();
  /* 11eb14c4 mov esi, esp */
  ESI = (ESP);
  /* 11eb14c6 push 0x11edd1b8 */
  push32((uint32_t)(0x11edd1b8u));
  /* 11eb14cb push 0x11ee2418 */
  push32((uint32_t)(0x11ee2418u));
  /* 11eb14d0 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb14d6u);
  /* 11eb14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb14d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb14db call 0x11eb5120 */
  push32(0x11eb14e0u); f_11eb5120();
  /* 11eb14e0 mov esi, esp */
  ESI = (ESP);
  /* 11eb14e2 push 0x11edd19c */
  push32((uint32_t)(0x11edd19cu));
  /* 11eb14e7 push 0x11ee2598 */
  push32((uint32_t)(0x11ee2598u));
  /* 11eb14ec call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb14f2u);
  /* 11eb14f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb14f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb14f7 call 0x11eb5120 */
  push32(0x11eb14fcu); f_11eb5120();
  /* 11eb14fc mov esi, esp */
  ESI = (ESP);
  /* 11eb14fe push 0x11edd180 */
  push32((uint32_t)(0x11edd180u));
  /* 11eb1503 push 0x11ee2640 */
  push32((uint32_t)(0x11ee2640u));
  /* 11eb1508 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb150eu);
  /* 11eb150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1513 call 0x11eb5120 */
  push32(0x11eb1518u); f_11eb5120();
  /* 11eb1518 mov esi, esp */
  ESI = (ESP);
  /* 11eb151a push 0x11edd164 */
  push32((uint32_t)(0x11edd164u));
  /* 11eb151f push 0x11ee2648 */
  push32((uint32_t)(0x11ee2648u));
  /* 11eb1524 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb152au);
  /* 11eb152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb152f call 0x11eb5120 */
  push32(0x11eb1534u); f_11eb5120();
  /* 11eb1534 mov esi, esp */
  ESI = (ESP);
  /* 11eb1536 push 0x11edd14c */
  push32((uint32_t)(0x11edd14cu));
  /* 11eb153b push 0x11ee2428 */
  push32((uint32_t)(0x11ee2428u));
  /* 11eb1540 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb1546u);
  /* 11eb1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb154b call 0x11eb5120 */
  push32(0x11eb1550u); f_11eb5120();
  /* 11eb1550 mov esi, esp */
  ESI = (ESP);
  /* 11eb1552 push 0x11edd134 */
  push32((uint32_t)(0x11edd134u));
  /* 11eb1557 push 0x11ee2458 */
  push32((uint32_t)(0x11ee2458u));
  /* 11eb155c call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb1562u);
  /* 11eb1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1567 call 0x11eb5120 */
  push32(0x11eb156cu); f_11eb5120();
  /* 11eb156c mov esi, esp */
  ESI = (ESP);
  /* 11eb156e push 0x11edd124 */
  push32((uint32_t)(0x11edd124u));
  /* 11eb1573 push 0x11ee2480 */
  push32((uint32_t)(0x11ee2480u));
  /* 11eb1578 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb157eu);
  /* 11eb157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1583 call 0x11eb5120 */
  push32(0x11eb1588u); f_11eb5120();
  /* 11eb1588 mov esi, esp */
  ESI = (ESP);
  /* 11eb158a push 0x11edd114 */
  push32((uint32_t)(0x11edd114u));
  /* 11eb158f push 0x11ee2568 */
  push32((uint32_t)(0x11ee2568u));
  /* 11eb1594 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb159au);
  /* 11eb159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb159f call 0x11eb5120 */
  push32(0x11eb15a4u); f_11eb5120();
  /* 11eb15a4 mov esi, esp */
  ESI = (ESP);
  /* 11eb15a6 push 0x11edd104 */
  push32((uint32_t)(0x11edd104u));
  /* 11eb15ab push 0x11ee2488 */
  push32((uint32_t)(0x11ee2488u));
  /* 11eb15b0 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb15b6u);
  /* 11eb15b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb15b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb15bb call 0x11eb5120 */
  push32(0x11eb15c0u); f_11eb5120();
  /* 11eb15c0 mov esi, esp */
  ESI = (ESP);
  /* 11eb15c2 push 0x11edd0f4 */
  push32((uint32_t)(0x11edd0f4u));
  /* 11eb15c7 push 0x11ee2570 */
  push32((uint32_t)(0x11ee2570u));
  /* 11eb15cc call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb15d2u);
  /* 11eb15d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb15d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb15d7 call 0x11eb5120 */
  push32(0x11eb15dcu); f_11eb5120();
  /* 11eb15dc mov esi, esp */
  ESI = (ESP);
  /* 11eb15de push 0x11edd0e0 */
  push32((uint32_t)(0x11edd0e0u));
  /* 11eb15e3 push 0x11ee24b0 */
  push32((uint32_t)(0x11ee24b0u));
  /* 11eb15e8 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb15eeu);
  /* 11eb15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb15f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb15f3 call 0x11eb5120 */
  push32(0x11eb15f8u); f_11eb5120();
  /* 11eb15f8 mov esi, esp */
  ESI = (ESP);
  /* 11eb15fa push 0x11edd0d0 */
  push32((uint32_t)(0x11edd0d0u));
  /* 11eb15ff push 0x11ee2670 */
  push32((uint32_t)(0x11ee2670u));
  /* 11eb1604 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb160au);
  /* 11eb160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb160f call 0x11eb5120 */
  push32(0x11eb1614u); f_11eb5120();
  /* 11eb1614 mov esi, esp */
  ESI = (ESP);
  /* 11eb1616 push 0x11edd0c0 */
  push32((uint32_t)(0x11edd0c0u));
  /* 11eb161b push 0x11ee2668 */
  push32((uint32_t)(0x11ee2668u));
  /* 11eb1620 call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb1626u);
  /* 11eb1626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb162b call 0x11eb5120 */
  push32(0x11eb1630u); f_11eb5120();
  /* 11eb1630 mov esi, esp */
  ESI = (ESP);
  /* 11eb1632 push 0x11edd0b0 */
  push32((uint32_t)(0x11edd0b0u));
  /* 11eb1637 push 0x11ee2678 */
  push32((uint32_t)(0x11ee2678u));
  /* 11eb163c call dword ptr [0x11ee54e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54e8))), 0x11eb1642u);
  /* 11eb1642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1647 call 0x11eb5120 */
  push32(0x11eb164cu); f_11eb5120();
  /* 11eb164c mov esi, esp */
  ESI = (ESP);
  /* 11eb164e push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb1650 push 0x11ee2448 */
  push32((uint32_t)(0x11ee2448u));
  /* 11eb1655 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb165bu);
  /* 11eb165b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1660 call 0x11eb5120 */
  push32(0x11eb1665u); f_11eb5120();
  /* 11eb1665 mov esi, esp */
  ESI = (ESP);
  /* 11eb1667 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb1669 push 0x11ee2440 */
  push32((uint32_t)(0x11ee2440u));
  /* 11eb166e call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1674u);
  /* 11eb1674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1679 call 0x11eb5120 */
  push32(0x11eb167eu); f_11eb5120();
  /* 11eb167e mov esi, esp */
  ESI = (ESP);
  /* 11eb1680 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb1682 push 0x11ee2460 */
  push32((uint32_t)(0x11ee2460u));
  /* 11eb1687 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb168du);
  /* 11eb168d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1690 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1692 call 0x11eb5120 */
  push32(0x11eb1697u); f_11eb5120();
  /* 11eb1697 mov esi, esp */
  ESI = (ESP);
  /* 11eb1699 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb169b push 0x11ee2450 */
  push32((uint32_t)(0x11ee2450u));
  /* 11eb16a0 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb16a6u);
  /* 11eb16a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb16a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb16ab call 0x11eb5120 */
  push32(0x11eb16b0u); f_11eb5120();
  /* 11eb16b0 mov esi, esp */
  ESI = (ESP);
  /* 11eb16b2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb16b4 push 0x11ee2400 */
  push32((uint32_t)(0x11ee2400u));
  /* 11eb16b9 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb16bfu);
  /* 11eb16bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb16c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb16c4 call 0x11eb5120 */
  push32(0x11eb16c9u); f_11eb5120();
  /* 11eb16c9 mov esi, esp */
  ESI = (ESP);
  /* 11eb16cb push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb16cd push 0x11ee23f8 */
  push32((uint32_t)(0x11ee23f8u));
  /* 11eb16d2 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb16d8u);
  /* 11eb16d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb16db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb16dd call 0x11eb5120 */
  push32(0x11eb16e2u); f_11eb5120();
  /* 11eb16e2 mov esi, esp */
  ESI = (ESP);
  /* 11eb16e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb16e6 push 0x11ee2410 */
  push32((uint32_t)(0x11ee2410u));
  /* 11eb16eb call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb16f1u);
  /* 11eb16f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb16f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb16f6 call 0x11eb5120 */
  push32(0x11eb16fbu); f_11eb5120();
  /* 11eb16fb mov esi, esp */
  ESI = (ESP);
  /* 11eb16fd push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb16ff push 0x11ee2408 */
  push32((uint32_t)(0x11ee2408u));
  /* 11eb1704 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb170au);
  /* 11eb170a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb170d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb170f call 0x11eb5120 */
  push32(0x11eb1714u); f_11eb5120();
  /* 11eb1714 mov esi, esp */
  ESI = (ESP);
  /* 11eb1716 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb1718 push 0x11ee2420 */
  push32((uint32_t)(0x11ee2420u));
  /* 11eb171d call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1723u);
  /* 11eb1723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1728 call 0x11eb5120 */
  push32(0x11eb172du); f_11eb5120();
  /* 11eb172d mov esi, esp */
  ESI = (ESP);
  /* 11eb172f push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb1731 push 0x11ee24c8 */
  push32((uint32_t)(0x11ee24c8u));
  /* 11eb1736 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb173cu);
  /* 11eb173c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb173f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1741 call 0x11eb5120 */
  push32(0x11eb1746u); f_11eb5120();
  /* 11eb1746 mov esi, esp */
  ESI = (ESP);
  /* 11eb1748 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb174a push 0x11ee24c0 */
  push32((uint32_t)(0x11ee24c0u));
  /* 11eb174f call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1755u);
  /* 11eb1755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb175a call 0x11eb5120 */
  push32(0x11eb175fu); f_11eb5120();
  /* 11eb175f mov esi, esp */
  ESI = (ESP);
  /* 11eb1761 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb1763 push 0x11ee2500 */
  push32((uint32_t)(0x11ee2500u));
  /* 11eb1768 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb176eu);
  /* 11eb176e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1771 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1773 call 0x11eb5120 */
  push32(0x11eb1778u); f_11eb5120();
  /* 11eb1778 mov esi, esp */
  ESI = (ESP);
  /* 11eb177a push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb177c push 0x11ee24f8 */
  push32((uint32_t)(0x11ee24f8u));
  /* 11eb1781 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1787u);
  /* 11eb1787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb178a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb178c call 0x11eb5120 */
  push32(0x11eb1791u); f_11eb5120();
  /* 11eb1791 mov esi, esp */
  ESI = (ESP);
  /* 11eb1793 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb1795 push 0x11ee2518 */
  push32((uint32_t)(0x11ee2518u));
  /* 11eb179a call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb17a0u);
  /* 11eb17a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb17a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb17a5 call 0x11eb5120 */
  push32(0x11eb17aau); f_11eb5120();
  /* 11eb17aa mov esi, esp */
  ESI = (ESP);
  /* 11eb17ac push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb17ae push 0x11ee2508 */
  push32((uint32_t)(0x11ee2508u));
  /* 11eb17b3 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb17b9u);
  /* 11eb17b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb17bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb17be call 0x11eb5120 */
  push32(0x11eb17c3u); f_11eb5120();
  /* 11eb17c3 mov esi, esp */
  ESI = (ESP);
  /* 11eb17c5 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb17c7 push 0x11ee24e0 */
  push32((uint32_t)(0x11ee24e0u));
  /* 11eb17cc call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb17d2u);
  /* 11eb17d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb17d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb17d7 call 0x11eb5120 */
  push32(0x11eb17dcu); f_11eb5120();
  /* 11eb17dc mov esi, esp */
  ESI = (ESP);
  /* 11eb17de push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb17e0 push 0x11ee24d8 */
  push32((uint32_t)(0x11ee24d8u));
  /* 11eb17e5 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb17ebu);
  /* 11eb17eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb17ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb17f0 call 0x11eb5120 */
  push32(0x11eb17f5u); f_11eb5120();
  /* 11eb17f5 mov esi, esp */
  ESI = (ESP);
  /* 11eb17f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb17f9 push 0x11ee24f0 */
  push32((uint32_t)(0x11ee24f0u));
  /* 11eb17fe call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1804u);
  /* 11eb1804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1807 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1809 call 0x11eb5120 */
  push32(0x11eb180eu); f_11eb5120();
  /* 11eb180e mov esi, esp */
  ESI = (ESP);
  /* 11eb1810 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb1812 push 0x11ee24e8 */
  push32((uint32_t)(0x11ee24e8u));
  /* 11eb1817 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb181du);
  /* 11eb181d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1820 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1822 call 0x11eb5120 */
  push32(0x11eb1827u); f_11eb5120();
  /* 11eb1827 mov esi, esp */
  ESI = (ESP);
  /* 11eb1829 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb182b push 0x11ee2510 */
  push32((uint32_t)(0x11ee2510u));
  /* 11eb1830 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1836u);
  /* 11eb1836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1839 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb183b call 0x11eb5120 */
  push32(0x11eb1840u); f_11eb5120();
  /* 11eb1840 mov esi, esp */
  ESI = (ESP);
  /* 11eb1842 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb1844 push 0x11ee24d0 */
  push32((uint32_t)(0x11ee24d0u));
  /* 11eb1849 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb184fu);
  /* 11eb184f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1852 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1854 call 0x11eb5120 */
  push32(0x11eb1859u); f_11eb5120();
  /* 11eb1859 mov esi, esp */
  ESI = (ESP);
  /* 11eb185b push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb185d push 0x11ee2520 */
  push32((uint32_t)(0x11ee2520u));
  /* 11eb1862 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1868u);
  /* 11eb1868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb186b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb186d call 0x11eb5120 */
  push32(0x11eb1872u); f_11eb5120();
  /* 11eb1872 mov esi, esp */
  ESI = (ESP);
  /* 11eb1874 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb1876 push 0x11ee2550 */
  push32((uint32_t)(0x11ee2550u));
  /* 11eb187b call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1881u);
  /* 11eb1881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1886 call 0x11eb5120 */
  push32(0x11eb188bu); f_11eb5120();
  /* 11eb188b mov esi, esp */
  ESI = (ESP);
  /* 11eb188d push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb188f push 0x11ee2578 */
  push32((uint32_t)(0x11ee2578u));
  /* 11eb1894 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb189au);
  /* 11eb189a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb189d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb189f call 0x11eb5120 */
  push32(0x11eb18a4u); f_11eb5120();
  /* 11eb18a4 mov esi, esp */
  ESI = (ESP);
  /* 11eb18a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb18a8 push 0x11ee25d0 */
  push32((uint32_t)(0x11ee25d0u));
  /* 11eb18ad call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb18b3u);
  /* 11eb18b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb18b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb18b8 call 0x11eb5120 */
  push32(0x11eb18bdu); f_11eb5120();
  /* 11eb18bd mov esi, esp */
  ESI = (ESP);
  /* 11eb18bf push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb18c1 push 0x11ee25f0 */
  push32((uint32_t)(0x11ee25f0u));
  /* 11eb18c6 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb18ccu);
  /* 11eb18cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb18cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb18d1 call 0x11eb5120 */
  push32(0x11eb18d6u); f_11eb5120();
  /* 11eb18d6 mov esi, esp */
  ESI = (ESP);
  /* 11eb18d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb18da push 0x11ee2524 */
  push32((uint32_t)(0x11ee2524u));
  /* 11eb18df call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb18e5u);
  /* 11eb18e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb18e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb18ea call 0x11eb5120 */
  push32(0x11eb18efu); f_11eb5120();
  /* 11eb18ef mov esi, esp */
  ESI = (ESP);
  /* 11eb18f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb18f3 push 0x11ee2688 */
  push32((uint32_t)(0x11ee2688u));
  /* 11eb18f8 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb18feu);
  /* 11eb18fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1903 call 0x11eb5120 */
  push32(0x11eb1908u); f_11eb5120();
  /* 11eb1908 mov esi, esp */
  ESI = (ESP);
  /* 11eb190a push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb190c push 0x11ee24a0 */
  push32((uint32_t)(0x11ee24a0u));
  /* 11eb1911 call dword ptr [0x11ee54ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ec))), 0x11eb1917u);
  /* 11eb1917 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb191a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb191c call 0x11eb5120 */
  push32(0x11eb1921u); f_11eb5120();
  /* 11eb1921 mov esi, esp */
  ESI = (ESP);
  /* 11eb1923 push 0x11edd0a8 */
  push32((uint32_t)(0x11edd0a8u));
  /* 11eb1928 push 0x11ee2660 */
  push32((uint32_t)(0x11ee2660u));
  /* 11eb192d call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb1933u);
  /* 11eb1933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1938 call 0x11eb5120 */
  push32(0x11eb193du); f_11eb5120();
  /* 11eb193d mov esi, esp */
  ESI = (ESP);
  /* 11eb193f push 0x11edd098 */
  push32((uint32_t)(0x11edd098u));
  /* 11eb1944 push 0x11ee2530 */
  push32((uint32_t)(0x11ee2530u));
  /* 11eb1949 call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb194fu);
  /* 11eb194f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1954 call 0x11eb5120 */
  push32(0x11eb1959u); f_11eb5120();
  /* 11eb1959 mov esi, esp */
  ESI = (ESP);
  /* 11eb195b push 0x11edd088 */
  push32((uint32_t)(0x11edd088u));
  /* 11eb1960 push 0x11ee2540 */
  push32((uint32_t)(0x11ee2540u));
  /* 11eb1965 call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb196bu);
  /* 11eb196b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb196e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1970 call 0x11eb5120 */
  push32(0x11eb1975u); f_11eb5120();
  /* 11eb1975 mov esi, esp */
  ESI = (ESP);
  /* 11eb1977 push 0x11edd078 */
  push32((uint32_t)(0x11edd078u));
  /* 11eb197c push 0x11ee2548 */
  push32((uint32_t)(0x11ee2548u));
  /* 11eb1981 call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb1987u);
  /* 11eb1987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb198a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb198c call 0x11eb5120 */
  push32(0x11eb1991u); f_11eb5120();
  /* 11eb1991 mov esi, esp */
  ESI = (ESP);
  /* 11eb1993 push 0x11edd068 */
  push32((uint32_t)(0x11edd068u));
  /* 11eb1998 push 0x11ee2538 */
  push32((uint32_t)(0x11ee2538u));
  /* 11eb199d call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb19a3u);
  /* 11eb19a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb19a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb19a8 call 0x11eb5120 */
  push32(0x11eb19adu); f_11eb5120();
  /* 11eb19ad mov esi, esp */
  ESI = (ESP);
  /* 11eb19af push 0x11edd058 */
  push32((uint32_t)(0x11edd058u));
  /* 11eb19b4 push 0x11ee2528 */
  push32((uint32_t)(0x11ee2528u));
  /* 11eb19b9 call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb19bfu);
  /* 11eb19bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb19c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb19c4 call 0x11eb5120 */
  push32(0x11eb19c9u); f_11eb5120();
  /* 11eb19c9 mov esi, esp */
  ESI = (ESP);
  /* 11eb19cb push 0x11edd050 */
  push32((uint32_t)(0x11edd050u));
  /* 11eb19d0 push 0x11ee2658 */
  push32((uint32_t)(0x11ee2658u));
  /* 11eb19d5 call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb19dbu);
  /* 11eb19db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb19de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb19e0 call 0x11eb5120 */
  push32(0x11eb19e5u); f_11eb5120();
  /* 11eb19e5 mov esi, esp */
  ESI = (ESP);
  /* 11eb19e7 push 0x11edd044 */
  push32((uint32_t)(0x11edd044u));
  /* 11eb19ec push 0x11ee23e8 */
  push32((uint32_t)(0x11ee23e8u));
  /* 11eb19f1 call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb19f7u);
  /* 11eb19f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb19fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb19fc call 0x11eb5120 */
  push32(0x11eb1a01u); f_11eb5120();
  /* 11eb1a01 mov esi, esp */
  ESI = (ESP);
  /* 11eb1a03 push 0x11edd038 */
  push32((uint32_t)(0x11edd038u));
  /* 11eb1a08 push 0x11ee23f0 */
  push32((uint32_t)(0x11ee23f0u));
  /* 11eb1a0d call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb1a13u);
  /* 11eb1a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1a18 call 0x11eb5120 */
  push32(0x11eb1a1du); f_11eb5120();
  /* 11eb1a1d mov esi, esp */
  ESI = (ESP);
  /* 11eb1a1f push 0x11edd030 */
  push32((uint32_t)(0x11edd030u));
  /* 11eb1a24 push 0x11ee2478 */
  push32((uint32_t)(0x11ee2478u));
  /* 11eb1a29 call dword ptr [0x11ee54f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f0))), 0x11eb1a2fu);
  /* 11eb1a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1a32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1a34 call 0x11eb5120 */
  push32(0x11eb1a39u); f_11eb5120();
  /* 11eb1a39 mov esi, esp */
  ESI = (ESP);
  /* 11eb1a3b push 0x11ee2448 */
  push32((uint32_t)(0x11ee2448u));
  /* 11eb1a40 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1a46u);
  /* 11eb1a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1a49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1a4b call 0x11eb5120 */
  push32(0x11eb1a50u); f_11eb5120();
  /* 11eb1a50 mov esi, esp */
  ESI = (ESP);
  /* 11eb1a52 push 0x11ee2440 */
  push32((uint32_t)(0x11ee2440u));
  /* 11eb1a57 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1a5du);
  /* 11eb1a5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1a60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1a62 call 0x11eb5120 */
  push32(0x11eb1a67u); f_11eb5120();
  /* 11eb1a67 mov esi, esp */
  ESI = (ESP);
  /* 11eb1a69 push 0x11ee2460 */
  push32((uint32_t)(0x11ee2460u));
  /* 11eb1a6e call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1a74u);
  /* 11eb1a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1a77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1a79 call 0x11eb5120 */
  push32(0x11eb1a7eu); f_11eb5120();
  /* 11eb1a7e mov esi, esp */
  ESI = (ESP);
  /* 11eb1a80 push 0x11ee2450 */
  push32((uint32_t)(0x11ee2450u));
  /* 11eb1a85 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1a8bu);
  /* 11eb1a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1a90 call 0x11eb5120 */
  push32(0x11eb1a95u); f_11eb5120();
  /* 11eb1a95 mov esi, esp */
  ESI = (ESP);
  /* 11eb1a97 push 0x11ee2400 */
  push32((uint32_t)(0x11ee2400u));
  /* 11eb1a9c call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1aa2u);
  /* 11eb1aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1aa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1aa7 call 0x11eb5120 */
  push32(0x11eb1aacu); f_11eb5120();
  /* 11eb1aac mov esi, esp */
  ESI = (ESP);
  /* 11eb1aae push 0x11ee23f8 */
  push32((uint32_t)(0x11ee23f8u));
  /* 11eb1ab3 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1ab9u);
  /* 11eb1ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1abe call 0x11eb5120 */
  push32(0x11eb1ac3u); f_11eb5120();
  /* 11eb1ac3 mov esi, esp */
  ESI = (ESP);
  /* 11eb1ac5 push 0x11ee2410 */
  push32((uint32_t)(0x11ee2410u));
  /* 11eb1aca call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1ad0u);
  /* 11eb1ad0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1ad3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1ad5 call 0x11eb5120 */
  push32(0x11eb1adau); f_11eb5120();
  /* 11eb1ada mov esi, esp */
  ESI = (ESP);
  /* 11eb1adc push 0x11ee2408 */
  push32((uint32_t)(0x11ee2408u));
  /* 11eb1ae1 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1ae7u);
  /* 11eb1ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1aea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1aec call 0x11eb5120 */
  push32(0x11eb1af1u); f_11eb5120();
  /* 11eb1af1 mov esi, esp */
  ESI = (ESP);
  /* 11eb1af3 push 0x11ee2420 */
  push32((uint32_t)(0x11ee2420u));
  /* 11eb1af8 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1afeu);
  /* 11eb1afe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1b01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1b03 call 0x11eb5120 */
  push32(0x11eb1b08u); f_11eb5120();
  /* 11eb1b08 mov esi, esp */
  ESI = (ESP);
  /* 11eb1b0a push 0x11ee24c8 */
  push32((uint32_t)(0x11ee24c8u));
  /* 11eb1b0f call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1b15u);
  /* 11eb1b15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1b18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1b1a call 0x11eb5120 */
  push32(0x11eb1b1fu); f_11eb5120();
  /* 11eb1b1f mov esi, esp */
  ESI = (ESP);
  /* 11eb1b21 push 0x11ee24c0 */
  push32((uint32_t)(0x11ee24c0u));
  /* 11eb1b26 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1b2cu);
  /* 11eb1b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1b2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1b31 call 0x11eb5120 */
  push32(0x11eb1b36u); f_11eb5120();
  /* 11eb1b36 mov esi, esp */
  ESI = (ESP);
  /* 11eb1b38 push 0x11ee2500 */
  push32((uint32_t)(0x11ee2500u));
  /* 11eb1b3d call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1b43u);
  /* 11eb1b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1b46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1b48 call 0x11eb5120 */
  push32(0x11eb1b4du); f_11eb5120();
  /* 11eb1b4d mov esi, esp */
  ESI = (ESP);
  /* 11eb1b4f push 0x11ee24f8 */
  push32((uint32_t)(0x11ee24f8u));
  /* 11eb1b54 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1b5au);
  /* 11eb1b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1b5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1b5f call 0x11eb5120 */
  push32(0x11eb1b64u); f_11eb5120();
  /* 11eb1b64 mov esi, esp */
  ESI = (ESP);
  /* 11eb1b66 push 0x11ee2518 */
  push32((uint32_t)(0x11ee2518u));
  /* 11eb1b6b call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1b71u);
  /* 11eb1b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1b74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1b76 call 0x11eb5120 */
  push32(0x11eb1b7bu); f_11eb5120();
  /* 11eb1b7b mov esi, esp */
  ESI = (ESP);
  /* 11eb1b7d push 0x11ee2508 */
  push32((uint32_t)(0x11ee2508u));
  /* 11eb1b82 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1b88u);
  /* 11eb1b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1b8d call 0x11eb5120 */
  push32(0x11eb1b92u); f_11eb5120();
  /* 11eb1b92 mov esi, esp */
  ESI = (ESP);
  /* 11eb1b94 push 0x11ee24e0 */
  push32((uint32_t)(0x11ee24e0u));
  /* 11eb1b99 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1b9fu);
  /* 11eb1b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1ba2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1ba4 call 0x11eb5120 */
  push32(0x11eb1ba9u); f_11eb5120();
  /* 11eb1ba9 mov esi, esp */
  ESI = (ESP);
  /* 11eb1bab push 0x11ee24d8 */
  push32((uint32_t)(0x11ee24d8u));
  /* 11eb1bb0 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1bb6u);
  /* 11eb1bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1bb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1bbb call 0x11eb5120 */
  push32(0x11eb1bc0u); f_11eb5120();
  /* 11eb1bc0 mov esi, esp */
  ESI = (ESP);
  /* 11eb1bc2 push 0x11ee24f0 */
  push32((uint32_t)(0x11ee24f0u));
  /* 11eb1bc7 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1bcdu);
  /* 11eb1bcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1bd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1bd2 call 0x11eb5120 */
  push32(0x11eb1bd7u); f_11eb5120();
  /* 11eb1bd7 mov esi, esp */
  ESI = (ESP);
  /* 11eb1bd9 push 0x11ee24e8 */
  push32((uint32_t)(0x11ee24e8u));
  /* 11eb1bde call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1be4u);
  /* 11eb1be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1be7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1be9 call 0x11eb5120 */
  push32(0x11eb1beeu); f_11eb5120();
  /* 11eb1bee mov esi, esp */
  ESI = (ESP);
  /* 11eb1bf0 push 0x11ee2510 */
  push32((uint32_t)(0x11ee2510u));
  /* 11eb1bf5 call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1bfbu);
  /* 11eb1bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1bfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1c00 call 0x11eb5120 */
  push32(0x11eb1c05u); f_11eb5120();
  /* 11eb1c05 mov esi, esp */
  ESI = (ESP);
  /* 11eb1c07 push 0x11ee2650 */
  push32((uint32_t)(0x11ee2650u));
  /* 11eb1c0c call dword ptr [0x11ee54f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f4))), 0x11eb1c12u);
  /* 11eb1c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1c15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1c17 call 0x11eb5120 */
  push32(0x11eb1c1cu); f_11eb5120();
  /* 11eb1c1c mov esi, esp */
  ESI = (ESP);
  /* 11eb1c1e push 0x11edd028 */
  push32((uint32_t)(0x11edd028u));
  /* 11eb1c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb1c25 call dword ptr [0x11ee54f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f8))), 0x11eb1c2bu);
  /* 11eb1c2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1c2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1c30 call 0x11eb5120 */
  push32(0x11eb1c35u); f_11eb5120();
  /* 11eb1c35 mov esi, esp */
  ESI = (ESP);
  /* 11eb1c37 push 0x11edd01c */
  push32((uint32_t)(0x11edd01cu));
  /* 11eb1c3c push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb1c3e call dword ptr [0x11ee54f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f8))), 0x11eb1c44u);
  /* 11eb1c44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1c47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1c49 call 0x11eb5120 */
  push32(0x11eb1c4eu); f_11eb5120();
  /* 11eb1c4e mov esi, esp */
  ESI = (ESP);
  /* 11eb1c50 push 0x11edd01c */
  push32((uint32_t)(0x11edd01cu));
  /* 11eb1c55 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb1c57 call dword ptr [0x11ee54f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54f8))), 0x11eb1c5du);
  /* 11eb1c5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1c62 call 0x11eb5120 */
  push32(0x11eb1c67u); f_11eb5120();
  /* 11eb1c67 mov esi, esp */
  ESI = (ESP);
  /* 11eb1c69 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11eb1c6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb1c6d call dword ptr [0x11ee54fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54fc))), 0x11eb1c73u);
  /* 11eb1c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1c76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1c78 call 0x11eb5120 */
  push32(0x11eb1c7du); f_11eb5120();
  /* 11eb1c7d mov esi, esp */
  ESI = (ESP);
  /* 11eb1c7f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11eb1c81 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb1c83 call dword ptr [0x11ee54fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54fc))), 0x11eb1c89u);
  /* 11eb1c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1c8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1c8e call 0x11eb5120 */
  push32(0x11eb1c93u); f_11eb5120();
  /* 11eb1c93 mov esi, esp */
  ESI = (ESP);
  /* 11eb1c95 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11eb1c97 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb1c99 call dword ptr [0x11ee54fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54fc))), 0x11eb1c9fu);
  /* 11eb1c9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1ca4 call 0x11eb5120 */
  push32(0x11eb1ca9u); f_11eb5120();
  /* 11eb1ca9 mov esi, esp */
  ESI = (ESP);
  /* 11eb1cab push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1cad push 0x11ee2568 */
  push32((uint32_t)(0x11ee2568u));
  /* 11eb1cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1cb4 call dword ptr [0x11ee5500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5500))), 0x11eb1cbau);
  /* 11eb1cba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1cbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1cbf call 0x11eb5120 */
  push32(0x11eb1cc4u); f_11eb5120();
  /* 11eb1cc4 mov esi, esp */
  ESI = (ESP);
  /* 11eb1cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1cc8 push 0x11ee2488 */
  push32((uint32_t)(0x11ee2488u));
  /* 11eb1ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1ccf call dword ptr [0x11ee5500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5500))), 0x11eb1cd5u);
  /* 11eb1cd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1cd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1cda call 0x11eb5120 */
  push32(0x11eb1cdfu); f_11eb5120();
  /* 11eb1cdf mov esi, esp */
  ESI = (ESP);
  /* 11eb1ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1ce3 push 0x11ee2570 */
  push32((uint32_t)(0x11ee2570u));
  /* 11eb1ce8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1cea call dword ptr [0x11ee5500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5500))), 0x11eb1cf0u);
  /* 11eb1cf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1cf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1cf5 call 0x11eb5120 */
  push32(0x11eb1cfau); f_11eb5120();
  /* 11eb1cfa mov esi, esp */
  ESI = (ESP);
  /* 11eb1cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1cfe push 0x11ee2458 */
  push32((uint32_t)(0x11ee2458u));
  /* 11eb1d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1d05 call dword ptr [0x11ee5500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5500))), 0x11eb1d0bu);
  /* 11eb1d0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1d0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1d10 call 0x11eb5120 */
  push32(0x11eb1d15u); f_11eb5120();
  /* 11eb1d15 mov esi, esp */
  ESI = (ESP);
  /* 11eb1d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1d19 push 0x11ee24b0 */
  push32((uint32_t)(0x11ee24b0u));
  /* 11eb1d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb1d20 call dword ptr [0x11ee5500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5500))), 0x11eb1d26u);
  /* 11eb1d26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1d2b call 0x11eb5120 */
  push32(0x11eb1d30u); f_11eb5120();
  /* 11eb1d30 pop edi */
  EDI = (pop32());
  /* 11eb1d31 pop esi */
  ESI = (pop32());
  /* 11eb1d32 pop ebx */
  EBX = (pop32());
  /* 11eb1d33 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb1d36 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb1d38 call 0x11eb5120 */
  push32(0x11eb1d3du); f_11eb5120();
  /* 11eb1d3d mov esp, ebp */
  ESP = (EBP);
  /* 11eb1d3f pop ebp */
  EBP = (pop32());
  /* 11eb1d40 ret  */
  ESPCHK(0x11eb1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002090 @ 0x11eb2090 (67 bytes, 26 insns) */
void f_11eb2090(void) {
  FTRACE(0x11eb2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb2090 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb2091 mov ebp, esp */
  EBP = (ESP);
  /* 11eb2093 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb2096 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb2097 push esi */
  push32((uint32_t)(ESI));
  /* 11eb2098 push edi */
  push32((uint32_t)(EDI));
  /* 11eb2099 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11eb209c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11eb20a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11eb20a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11eb20a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb20ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb20ae cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb20b2 je 0x11eb20b6 */
  if (C.zf) goto L_11eb20b6;
  /* 11eb20b4 jmp 0x11eb20bb */
  goto L_11eb20bb;
L_11eb20b6:;
  /* 11eb20b6 call 0x11eb1005 */
  push32(0x11eb20bbu); f_11eb1005();
L_11eb20bb:;
  /* 11eb20bb mov eax, 1 */
  EAX = (0x1u);
  /* 11eb20c0 pop edi */
  EDI = (pop32());
  /* 11eb20c1 pop esi */
  ESI = (pop32());
  /* 11eb20c2 pop ebx */
  EBX = (pop32());
  /* 11eb20c3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb20c6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb20c8 call 0x11eb5120 */
  push32(0x11eb20cdu); f_11eb5120();
  /* 11eb20cd mov esp, ebp */
  ESP = (EBP);
  /* 11eb20cf pop ebp */
  EBP = (pop32());
  /* 11eb20d0 ret 0xc */
  ESPCHK(0x11eb2090u, _esp0);
  ESP += 16; return;
}

/* FUN_100020f0 @ 0x11eb20f0 (9605 bytes, 2724 insns) [2 switch table(s)] */
void f_11eb20f0(void) {
  FTRACE(0x11eb20f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb20f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb20f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb20f3 sub esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb20f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb20f7 push esi */
  push32((uint32_t)(ESI));
  /* 11eb20f8 push edi */
  push32((uint32_t)(EDI));
  /* 11eb20f9 lea edi, [ebp - 0x58] */
  EDI = ((uint32_t)(EBP + -0x58));
  /* 11eb20fc mov ecx, 0x16 */
  ECX = (0x16u);
  /* 11eb2101 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11eb2106 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11eb2108 mov esi, esp */
  ESI = (ESP);
  /* 11eb210a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11eb210c call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2112u);
  /* 11eb2112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2115 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2117 call 0x11eb5120 */
  push32(0x11eb211cu); f_11eb5120();
  /* 11eb211c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2123 je 0x11eb2b5e */
  if (C.zf) goto L_11eb2b5e;
  /* 11eb2129 mov esi, esp */
  ESI = (ESP);
  /* 11eb212b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb212d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11eb212f call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2135u);
  /* 11eb2135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2138 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb213a call 0x11eb5120 */
  push32(0x11eb213fu); f_11eb5120();
  /* 11eb213f mov esi, esp */
  ESI = (ESP);
  /* 11eb2141 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11eb2143 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2149u);
  /* 11eb2149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb214c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb214e call 0x11eb5120 */
  push32(0x11eb2153u); f_11eb5120();
  /* 11eb2153 mov esi, esp */
  ESI = (ESP);
  /* 11eb2155 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11eb2157 call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb215du);
  /* 11eb215d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2160 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2162 call 0x11eb5120 */
  push32(0x11eb2167u); f_11eb5120();
  /* 11eb2167 mov esi, esp */
  ESI = (ESP);
  /* 11eb2169 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11eb216b call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb2171u);
  /* 11eb2171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2176 call 0x11eb5120 */
  push32(0x11eb217bu); f_11eb5120();
  /* 11eb217b mov esi, esp */
  ESI = (ESP);
  /* 11eb217d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11eb217f call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb2185u);
  /* 11eb2185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb218a call 0x11eb5120 */
  push32(0x11eb218fu); f_11eb5120();
  /* 11eb218f mov esi, esp */
  ESI = (ESP);
  /* 11eb2191 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11eb2193 call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb2199u);
  /* 11eb2199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb219c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb219e call 0x11eb5120 */
  push32(0x11eb21a3u); f_11eb5120();
  /* 11eb21a3 mov esi, esp */
  ESI = (ESP);
  /* 11eb21a5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11eb21a7 call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb21adu);
  /* 11eb21ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb21b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb21b2 call 0x11eb5120 */
  push32(0x11eb21b7u); f_11eb5120();
  /* 11eb21b7 mov esi, esp */
  ESI = (ESP);
  /* 11eb21b9 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11eb21bb call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb21c1u);
  /* 11eb21c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb21c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb21c6 call 0x11eb5120 */
  push32(0x11eb21cbu); f_11eb5120();
  /* 11eb21cb mov esi, esp */
  ESI = (ESP);
  /* 11eb21cd push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11eb21cf call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb21d5u);
  /* 11eb21d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb21d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb21da call 0x11eb5120 */
  push32(0x11eb21dfu); f_11eb5120();
  /* 11eb21df mov esi, esp */
  ESI = (ESP);
  /* 11eb21e1 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11eb21e3 call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb21e9u);
  /* 11eb21e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb21ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb21ee call 0x11eb5120 */
  push32(0x11eb21f3u); f_11eb5120();
  /* 11eb21f3 mov esi, esp */
  ESI = (ESP);
  /* 11eb21f5 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11eb21f7 call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb21fdu);
  /* 11eb21fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2202 call 0x11eb5120 */
  push32(0x11eb2207u); f_11eb5120();
  /* 11eb2207 mov esi, esp */
  ESI = (ESP);
  /* 11eb2209 push 0x11ee2430 */
  push32((uint32_t)(0x11ee2430u));
  /* 11eb220e push 0x11ee2468 */
  push32((uint32_t)(0x11ee2468u));
  /* 11eb2213 call dword ptr [0x11ee545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee545c))), 0x11eb2219u);
  /* 11eb2219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb221c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb221e call 0x11eb5120 */
  push32(0x11eb2223u); f_11eb5120();
  /* 11eb2223 mov esi, esp */
  ESI = (ESP);
  /* 11eb2225 push 0x11ee2438 */
  push32((uint32_t)(0x11ee2438u));
  /* 11eb222a push 0x11ee2470 */
  push32((uint32_t)(0x11ee2470u));
  /* 11eb222f call dword ptr [0x11ee545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee545c))), 0x11eb2235u);
  /* 11eb2235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2238 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb223a call 0x11eb5120 */
  push32(0x11eb223fu); f_11eb5120();
  /* 11eb223f mov esi, esp */
  ESI = (ESP);
  /* 11eb2241 push 0x11ee2558 */
  push32((uint32_t)(0x11ee2558u));
  /* 11eb2246 push 0x11ee26b0 */
  push32((uint32_t)(0x11ee26b0u));
  /* 11eb224b call dword ptr [0x11ee545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee545c))), 0x11eb2251u);
  /* 11eb2251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2254 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2256 call 0x11eb5120 */
  push32(0x11eb225bu); f_11eb5120();
  /* 11eb225b mov esi, esp */
  ESI = (ESP);
  /* 11eb225d push 0x11ee2560 */
  push32((uint32_t)(0x11ee2560u));
  /* 11eb2262 push 0x11ee26b8 */
  push32((uint32_t)(0x11ee26b8u));
  /* 11eb2267 call dword ptr [0x11ee545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee545c))), 0x11eb226du);
  /* 11eb226d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2270 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2272 call 0x11eb5120 */
  push32(0x11eb2277u); f_11eb5120();
  /* 11eb2277 mov esi, esp */
  ESI = (ESP);
  /* 11eb2279 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb227b call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb2281u);
  /* 11eb2281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2284 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2286 call 0x11eb5120 */
  push32(0x11eb228bu); f_11eb5120();
  /* 11eb228b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11eb228e cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2292 ja 0x11eb28e0 */
  if ((!C.cf&&!C.zf)) goto L_11eb28e0;
  /* 11eb2298 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb229b jmp dword ptr [eax*4 + 0x11eb4675] */
  switch (EAX) {
    case 0: goto L_11eb22a2;
    case 1: goto L_11eb24c0;
    case 2: goto L_11eb2693;
    case 3: goto L_11eb2802;
    case 4: goto L_11eb40b9;
    case 5: goto L_11eb410e;
    case 6: goto L_11eb4169;
    case 7: goto L_11eb41c1;
    default: x86_unimpl("switch@0x11eb229b out of table"); return;
  }
L_11eb22a2:;
  /* 11eb22a2 mov esi, esp */
  ESI = (ESP);
  /* 11eb22a4 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11eb22a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb22ab push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb22ad call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb22b3u);
  /* 11eb22b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb22b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb22b8 call 0x11eb5120 */
  push32(0x11eb22bdu); f_11eb5120();
  /* 11eb22bd mov esi, esp */
  ESI = (ESP);
  /* 11eb22bf push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11eb22c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb22c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb22c8 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb22ceu);
  /* 11eb22ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb22d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb22d3 call 0x11eb5120 */
  push32(0x11eb22d8u); f_11eb5120();
  /* 11eb22d8 mov esi, esp */
  ESI = (ESP);
  /* 11eb22da push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11eb22df push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb22e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb22e3 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb22e9u);
  /* 11eb22e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb22ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb22ee call 0x11eb5120 */
  push32(0x11eb22f3u); f_11eb5120();
  /* 11eb22f3 mov esi, esp */
  ESI = (ESP);
  /* 11eb22f5 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11eb22fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb22fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb22fe call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2304u);
  /* 11eb2304 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2307 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2309 call 0x11eb5120 */
  push32(0x11eb230eu); f_11eb5120();
  /* 11eb230e mov esi, esp */
  ESI = (ESP);
  /* 11eb2310 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11eb2315 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2317 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2319 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb231fu);
  /* 11eb231f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2322 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2324 call 0x11eb5120 */
  push32(0x11eb2329u); f_11eb5120();
  /* 11eb2329 mov esi, esp */
  ESI = (ESP);
  /* 11eb232b push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 11eb2330 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb2332 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2334 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb233au);
  /* 11eb233a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb233d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb233f call 0x11eb5120 */
  push32(0x11eb2344u); f_11eb5120();
  /* 11eb2344 mov esi, esp */
  ESI = (ESP);
  /* 11eb2346 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2348 push 0x11ee24b8 */
  push32((uint32_t)(0x11ee24b8u));
  /* 11eb234d call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2353u);
  /* 11eb2353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2358 call 0x11eb5120 */
  push32(0x11eb235du); f_11eb5120();
  /* 11eb235d mov esi, esp */
  ESI = (ESP);
  /* 11eb235f push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2361 push 0x11ee2580 */
  push32((uint32_t)(0x11ee2580u));
  /* 11eb2366 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb236cu);
  /* 11eb236c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb236f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2371 call 0x11eb5120 */
  push32(0x11eb2376u); f_11eb5120();
  /* 11eb2376 mov esi, esp */
  ESI = (ESP);
  /* 11eb2378 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb237a push 0x11ee2588 */
  push32((uint32_t)(0x11ee2588u));
  /* 11eb237f call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2385u);
  /* 11eb2385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2388 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb238a call 0x11eb5120 */
  push32(0x11eb238fu); f_11eb5120();
  /* 11eb238f mov esi, esp */
  ESI = (ESP);
  /* 11eb2391 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2393 push 0x11ee2590 */
  push32((uint32_t)(0x11ee2590u));
  /* 11eb2398 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb239eu);
  /* 11eb239e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb23a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb23a3 call 0x11eb5120 */
  push32(0x11eb23a8u); f_11eb5120();
  /* 11eb23a8 mov esi, esp */
  ESI = (ESP);
  /* 11eb23aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb23ac push 0x11ee25b8 */
  push32((uint32_t)(0x11ee25b8u));
  /* 11eb23b1 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb23b7u);
  /* 11eb23b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb23ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb23bc call 0x11eb5120 */
  push32(0x11eb23c1u); f_11eb5120();
  /* 11eb23c1 mov esi, esp */
  ESI = (ESP);
  /* 11eb23c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb23c5 push 0x11ee25c0 */
  push32((uint32_t)(0x11ee25c0u));
  /* 11eb23ca call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb23d0u);
  /* 11eb23d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb23d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb23d5 call 0x11eb5120 */
  push32(0x11eb23dau); f_11eb5120();
  /* 11eb23da mov esi, esp */
  ESI = (ESP);
  /* 11eb23dc push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb23de push 0x11ee25c8 */
  push32((uint32_t)(0x11ee25c8u));
  /* 11eb23e3 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb23e9u);
  /* 11eb23e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb23ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb23ee call 0x11eb5120 */
  push32(0x11eb23f3u); f_11eb5120();
  /* 11eb23f3 mov esi, esp */
  ESI = (ESP);
  /* 11eb23f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb23f7 push 0x11ee23e0 */
  push32((uint32_t)(0x11ee23e0u));
  /* 11eb23fc call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2402u);
  /* 11eb2402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2407 call 0x11eb5120 */
  push32(0x11eb240cu); f_11eb5120();
  /* 11eb240c mov esi, esp */
  ESI = (ESP);
  /* 11eb240e push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2410 call dword ptr [0x11ee546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee546c))), 0x11eb2416u);
  /* 11eb2416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2419 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb241b call 0x11eb5120 */
  push32(0x11eb2420u); f_11eb5120();
  /* 11eb2420 mov esi, esp */
  ESI = (ESP);
  /* 11eb2422 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2424 push 0x11ee25a0 */
  push32((uint32_t)(0x11ee25a0u));
  /* 11eb2429 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb242fu);
  /* 11eb242f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2432 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2434 call 0x11eb5120 */
  push32(0x11eb2439u); f_11eb5120();
  /* 11eb2439 mov esi, esp */
  ESI = (ESP);
  /* 11eb243b push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb243d push 0x11ee25a8 */
  push32((uint32_t)(0x11ee25a8u));
  /* 11eb2442 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2448u);
  /* 11eb2448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb244b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb244d call 0x11eb5120 */
  push32(0x11eb2452u); f_11eb5120();
  /* 11eb2452 mov esi, esp */
  ESI = (ESP);
  /* 11eb2454 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2456 push 0x11ee25b0 */
  push32((uint32_t)(0x11ee25b0u));
  /* 11eb245b call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2461u);
  /* 11eb2461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2464 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2466 call 0x11eb5120 */
  push32(0x11eb246bu); f_11eb5120();
  /* 11eb246b mov esi, esp */
  ESI = (ESP);
  /* 11eb246d push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb246f call dword ptr [0x11ee546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee546c))), 0x11eb2475u);
  /* 11eb2475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2478 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb247a call 0x11eb5120 */
  push32(0x11eb247fu); f_11eb5120();
  /* 11eb247f mov dword ptr [0x11ee24d0], 0 */
  w32((uint32_t)(0x11ee24d0), (0x0u));
  /* 11eb2489 mov dword ptr [0x11ee2520], 0 */
  w32((uint32_t)(0x11ee2520), (0x0u));
  /* 11eb2493 mov dword ptr [0x11ee2550], 3 */
  w32((uint32_t)(0x11ee2550), (0x3u));
  /* 11eb249d mov dword ptr [0x11ee2578], 3 */
  w32((uint32_t)(0x11ee2578), (0x3u));
  /* 11eb24a7 mov dword ptr [0x11ee25d0], 1 */
  w32((uint32_t)(0x11ee25d0), (0x1u));
  /* 11eb24b1 mov dword ptr [0x11ee25f0], 1 */
  w32((uint32_t)(0x11ee25f0), (0x1u));
  /* 11eb24bb jmp 0x11eb28e0 */
  goto L_11eb28e0;
L_11eb24c0:;
  /* 11eb24c0 mov esi, esp */
  ESI = (ESP);
  /* 11eb24c2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11eb24c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb24c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb24cb call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb24d1u);
  /* 11eb24d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb24d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb24d6 call 0x11eb5120 */
  push32(0x11eb24dbu); f_11eb5120();
  /* 11eb24db mov esi, esp */
  ESI = (ESP);
  /* 11eb24dd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11eb24e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb24e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb24e6 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb24ecu);
  /* 11eb24ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb24ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb24f1 call 0x11eb5120 */
  push32(0x11eb24f6u); f_11eb5120();
  /* 11eb24f6 mov esi, esp */
  ESI = (ESP);
  /* 11eb24f8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11eb24fd push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb24ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2501 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2507u);
  /* 11eb2507 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb250a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb250c call 0x11eb5120 */
  push32(0x11eb2511u); f_11eb5120();
  /* 11eb2511 mov esi, esp */
  ESI = (ESP);
  /* 11eb2513 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11eb2518 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb251a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb251c call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2522u);
  /* 11eb2522 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2525 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2527 call 0x11eb5120 */
  push32(0x11eb252cu); f_11eb5120();
  /* 11eb252c mov esi, esp */
  ESI = (ESP);
  /* 11eb252e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11eb2533 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2535 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2537 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb253du);
  /* 11eb253d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2540 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2542 call 0x11eb5120 */
  push32(0x11eb2547u); f_11eb5120();
  /* 11eb2547 mov esi, esp */
  ESI = (ESP);
  /* 11eb2549 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11eb254e push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb2550 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2552 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2558u);
  /* 11eb2558 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb255b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb255d call 0x11eb5120 */
  push32(0x11eb2562u); f_11eb5120();
  /* 11eb2562 mov esi, esp */
  ESI = (ESP);
  /* 11eb2564 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2566 push 0x11ee2588 */
  push32((uint32_t)(0x11ee2588u));
  /* 11eb256b call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2571u);
  /* 11eb2571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2574 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2576 call 0x11eb5120 */
  push32(0x11eb257bu); f_11eb5120();
  /* 11eb257b mov esi, esp */
  ESI = (ESP);
  /* 11eb257d push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb257f push 0x11ee2590 */
  push32((uint32_t)(0x11ee2590u));
  /* 11eb2584 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb258au);
  /* 11eb258a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb258d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb258f call 0x11eb5120 */
  push32(0x11eb2594u); f_11eb5120();
  /* 11eb2594 mov esi, esp */
  ESI = (ESP);
  /* 11eb2596 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2598 push 0x11ee25b8 */
  push32((uint32_t)(0x11ee25b8u));
  /* 11eb259d call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb25a3u);
  /* 11eb25a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb25a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb25a8 call 0x11eb5120 */
  push32(0x11eb25adu); f_11eb5120();
  /* 11eb25ad mov esi, esp */
  ESI = (ESP);
  /* 11eb25af push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb25b1 push 0x11ee25c0 */
  push32((uint32_t)(0x11ee25c0u));
  /* 11eb25b6 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb25bcu);
  /* 11eb25bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb25bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb25c1 call 0x11eb5120 */
  push32(0x11eb25c6u); f_11eb5120();
  /* 11eb25c6 mov esi, esp */
  ESI = (ESP);
  /* 11eb25c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb25ca push 0x11ee25c8 */
  push32((uint32_t)(0x11ee25c8u));
  /* 11eb25cf call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb25d5u);
  /* 11eb25d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb25d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb25da call 0x11eb5120 */
  push32(0x11eb25dfu); f_11eb5120();
  /* 11eb25df mov esi, esp */
  ESI = (ESP);
  /* 11eb25e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb25e3 push 0x11ee23e0 */
  push32((uint32_t)(0x11ee23e0u));
  /* 11eb25e8 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb25eeu);
  /* 11eb25ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb25f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb25f3 call 0x11eb5120 */
  push32(0x11eb25f8u); f_11eb5120();
  /* 11eb25f8 mov esi, esp */
  ESI = (ESP);
  /* 11eb25fa push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb25fc call dword ptr [0x11ee546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee546c))), 0x11eb2602u);
  /* 11eb2602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2605 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2607 call 0x11eb5120 */
  push32(0x11eb260cu); f_11eb5120();
  /* 11eb260c mov esi, esp */
  ESI = (ESP);
  /* 11eb260e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2610 push 0x11ee25a8 */
  push32((uint32_t)(0x11ee25a8u));
  /* 11eb2615 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb261bu);
  /* 11eb261b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb261e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2620 call 0x11eb5120 */
  push32(0x11eb2625u); f_11eb5120();
  /* 11eb2625 mov esi, esp */
  ESI = (ESP);
  /* 11eb2627 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2629 push 0x11ee25b0 */
  push32((uint32_t)(0x11ee25b0u));
  /* 11eb262e call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2634u);
  /* 11eb2634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2637 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2639 call 0x11eb5120 */
  push32(0x11eb263eu); f_11eb5120();
  /* 11eb263e mov esi, esp */
  ESI = (ESP);
  /* 11eb2640 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb2642 call dword ptr [0x11ee546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee546c))), 0x11eb2648u);
  /* 11eb2648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb264b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb264d call 0x11eb5120 */
  push32(0x11eb2652u); f_11eb5120();
  /* 11eb2652 mov dword ptr [0x11ee24d0], 1 */
  w32((uint32_t)(0x11ee24d0), (0x1u));
  /* 11eb265c mov dword ptr [0x11ee2520], 1 */
  w32((uint32_t)(0x11ee2520), (0x1u));
  /* 11eb2666 mov dword ptr [0x11ee2550], 7 */
  w32((uint32_t)(0x11ee2550), (0x7u));
  /* 11eb2670 mov dword ptr [0x11ee2578], 8 */
  w32((uint32_t)(0x11ee2578), (0x8u));
  /* 11eb267a mov dword ptr [0x11ee25d0], 1 */
  w32((uint32_t)(0x11ee25d0), (0x1u));
  /* 11eb2684 mov dword ptr [0x11ee25f0], 1 */
  w32((uint32_t)(0x11ee25f0), (0x1u));
  /* 11eb268e jmp 0x11eb28e0 */
  goto L_11eb28e0;
L_11eb2693:;
  /* 11eb2693 mov esi, esp */
  ESI = (ESP);
  /* 11eb2695 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11eb269a push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb269c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb269e call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb26a4u);
  /* 11eb26a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb26a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb26a9 call 0x11eb5120 */
  push32(0x11eb26aeu); f_11eb5120();
  /* 11eb26ae mov esi, esp */
  ESI = (ESP);
  /* 11eb26b0 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11eb26b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb26b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb26b9 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb26bfu);
  /* 11eb26bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb26c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb26c4 call 0x11eb5120 */
  push32(0x11eb26c9u); f_11eb5120();
  /* 11eb26c9 mov esi, esp */
  ESI = (ESP);
  /* 11eb26cb push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11eb26d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb26d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb26d4 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb26dau);
  /* 11eb26da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb26dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb26df call 0x11eb5120 */
  push32(0x11eb26e4u); f_11eb5120();
  /* 11eb26e4 mov esi, esp */
  ESI = (ESP);
  /* 11eb26e6 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11eb26eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb26ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb26ef call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb26f5u);
  /* 11eb26f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb26f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb26fa call 0x11eb5120 */
  push32(0x11eb26ffu); f_11eb5120();
  /* 11eb26ff mov esi, esp */
  ESI = (ESP);
  /* 11eb2701 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11eb2706 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2708 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb270a call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2710u);
  /* 11eb2710 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2713 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2715 call 0x11eb5120 */
  push32(0x11eb271au); f_11eb5120();
  /* 11eb271a mov esi, esp */
  ESI = (ESP);
  /* 11eb271c push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11eb2721 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb2723 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2725 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb272bu);
  /* 11eb272b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb272e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2730 call 0x11eb5120 */
  push32(0x11eb2735u); f_11eb5120();
  /* 11eb2735 mov esi, esp */
  ESI = (ESP);
  /* 11eb2737 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2739 push 0x11ee2590 */
  push32((uint32_t)(0x11ee2590u));
  /* 11eb273e call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2744u);
  /* 11eb2744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2747 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2749 call 0x11eb5120 */
  push32(0x11eb274eu); f_11eb5120();
  /* 11eb274e mov esi, esp */
  ESI = (ESP);
  /* 11eb2750 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2752 push 0x11ee25c0 */
  push32((uint32_t)(0x11ee25c0u));
  /* 11eb2757 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb275du);
  /* 11eb275d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2760 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2762 call 0x11eb5120 */
  push32(0x11eb2767u); f_11eb5120();
  /* 11eb2767 mov esi, esp */
  ESI = (ESP);
  /* 11eb2769 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb276b push 0x11ee23e0 */
  push32((uint32_t)(0x11ee23e0u));
  /* 11eb2770 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2776u);
  /* 11eb2776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb277b call 0x11eb5120 */
  push32(0x11eb2780u); f_11eb5120();
  /* 11eb2780 mov esi, esp */
  ESI = (ESP);
  /* 11eb2782 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2784 call dword ptr [0x11ee546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee546c))), 0x11eb278au);
  /* 11eb278a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb278d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb278f call 0x11eb5120 */
  push32(0x11eb2794u); f_11eb5120();
  /* 11eb2794 mov esi, esp */
  ESI = (ESP);
  /* 11eb2796 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2798 push 0x11ee25b0 */
  push32((uint32_t)(0x11ee25b0u));
  /* 11eb279d call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb27a3u);
  /* 11eb27a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb27a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb27a8 call 0x11eb5120 */
  push32(0x11eb27adu); f_11eb5120();
  /* 11eb27ad mov esi, esp */
  ESI = (ESP);
  /* 11eb27af push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb27b1 call dword ptr [0x11ee546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee546c))), 0x11eb27b7u);
  /* 11eb27b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb27ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb27bc call 0x11eb5120 */
  push32(0x11eb27c1u); f_11eb5120();
  /* 11eb27c1 mov dword ptr [0x11ee24d0], 2 */
  w32((uint32_t)(0x11ee24d0), (0x2u));
  /* 11eb27cb mov dword ptr [0x11ee2520], 2 */
  w32((uint32_t)(0x11ee2520), (0x2u));
  /* 11eb27d5 mov dword ptr [0x11ee2550], 9 */
  w32((uint32_t)(0x11ee2550), (0x9u));
  /* 11eb27df mov dword ptr [0x11ee2578], 0xa */
  w32((uint32_t)(0x11ee2578), (0xau));
  /* 11eb27e9 mov dword ptr [0x11ee25d0], 2 */
  w32((uint32_t)(0x11ee25d0), (0x2u));
  /* 11eb27f3 mov dword ptr [0x11ee25f0], 1 */
  w32((uint32_t)(0x11ee25f0), (0x1u));
  /* 11eb27fd jmp 0x11eb28e0 */
  goto L_11eb28e0;
L_11eb2802:;
  /* 11eb2802 mov esi, esp */
  ESI = (ESP);
  /* 11eb2804 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2809 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb280b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb280d call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2813u);
  /* 11eb2813 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2816 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2818 call 0x11eb5120 */
  push32(0x11eb281du); f_11eb5120();
  /* 11eb281d mov esi, esp */
  ESI = (ESP);
  /* 11eb281f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2824 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2826 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2828 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb282eu);
  /* 11eb282e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2833 call 0x11eb5120 */
  push32(0x11eb2838u); f_11eb5120();
  /* 11eb2838 mov esi, esp */
  ESI = (ESP);
  /* 11eb283a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb283f push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb2841 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2843 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2849u);
  /* 11eb2849 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb284c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb284e call 0x11eb5120 */
  push32(0x11eb2853u); f_11eb5120();
  /* 11eb2853 mov esi, esp */
  ESI = (ESP);
  /* 11eb2855 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb285a push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb285c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb285e call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2864u);
  /* 11eb2864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2867 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2869 call 0x11eb5120 */
  push32(0x11eb286eu); f_11eb5120();
  /* 11eb286e mov esi, esp */
  ESI = (ESP);
  /* 11eb2870 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2875 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2879 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb287fu);
  /* 11eb287f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2882 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2884 call 0x11eb5120 */
  push32(0x11eb2889u); f_11eb5120();
  /* 11eb2889 mov esi, esp */
  ESI = (ESP);
  /* 11eb288b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2890 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb2892 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2894 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb289au);
  /* 11eb289a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb289d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb289f call 0x11eb5120 */
  push32(0x11eb28a4u); f_11eb5120();
  /* 11eb28a4 mov dword ptr [0x11ee24d0], 3 */
  w32((uint32_t)(0x11ee24d0), (0x3u));
  /* 11eb28ae mov dword ptr [0x11ee2520], 3 */
  w32((uint32_t)(0x11ee2520), (0x3u));
  /* 11eb28b8 mov dword ptr [0x11ee2550], 0xe */
  w32((uint32_t)(0x11ee2550), (0xeu));
  /* 11eb28c2 mov dword ptr [0x11ee2578], 0xf */
  w32((uint32_t)(0x11ee2578), (0xfu));
  /* 11eb28cc mov dword ptr [0x11ee25d0], 2 */
  w32((uint32_t)(0x11ee25d0), (0x2u));
  /* 11eb28d6 mov dword ptr [0x11ee25f0], 2 */
  w32((uint32_t)(0x11ee25f0), (0x2u));
L_11eb28e0:;
  /* 11eb28e0 mov esi, esp */
  ESI = (ESP);
  /* 11eb28e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb28e4 call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb28eau);
  /* 11eb28ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb28ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb28ef call 0x11eb5120 */
  push32(0x11eb28f4u); f_11eb5120();
  /* 11eb28f4 mov esi, esp */
  ESI = (ESP);
  /* 11eb28f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb28f8 call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb28feu);
  /* 11eb28fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2903 call 0x11eb5120 */
  push32(0x11eb2908u); f_11eb5120();
  /* 11eb2908 mov esi, esp */
  ESI = (ESP);
  /* 11eb290a push 0x11edd448 */
  push32((uint32_t)(0x11edd448u));
  /* 11eb290f push 0x11edd2f0 */
  push32((uint32_t)(0x11edd2f0u));
  /* 11eb2914 call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb291au);
  /* 11eb291a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb291d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb291f call 0x11eb5120 */
  push32(0x11eb2924u); f_11eb5120();
  /* 11eb2924 mov esi, esp */
  ESI = (ESP);
  /* 11eb2926 push 0x11edd43c */
  push32((uint32_t)(0x11edd43cu));
  /* 11eb292b push 0x11edd2e8 */
  push32((uint32_t)(0x11edd2e8u));
  /* 11eb2930 call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb2936u);
  /* 11eb2936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb293b call 0x11eb5120 */
  push32(0x11eb2940u); f_11eb5120();
  /* 11eb2940 mov esi, esp */
  ESI = (ESP);
  /* 11eb2942 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11eb2947 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2949 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb294fu);
  /* 11eb294f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2954 call 0x11eb5120 */
  push32(0x11eb2959u); f_11eb5120();
  /* 11eb2959 mov esi, esp */
  ESI = (ESP);
  /* 11eb295b push 0x11f8 */
  push32((uint32_t)(0x11f8u));
  /* 11eb2960 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb2962 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb2968u);
  /* 11eb2968 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb296b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb296d call 0x11eb5120 */
  push32(0x11eb2972u); f_11eb5120();
  /* 11eb2972 mov esi, esp */
  ESI = (ESP);
  /* 11eb2974 push 0x23f0 */
  push32((uint32_t)(0x23f0u));
  /* 11eb2979 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb297b call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb2981u);
  /* 11eb2981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2986 call 0x11eb5120 */
  push32(0x11eb298bu); f_11eb5120();
  /* 11eb298b mov esi, esp */
  ESI = (ESP);
  /* 11eb298d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb298f call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb2995u);
  /* 11eb2995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb299a call 0x11eb5120 */
  push32(0x11eb299fu); f_11eb5120();
  /* 11eb299f mov ecx, 5 */
  ECX = (0x5u);
  /* 11eb29a4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb29a6 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11eb29a9 imul ecx, ecx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x8fcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb29af mov esi, esp */
  ESI = (ESP);
  /* 11eb29b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb29b2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11eb29b4 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb29bau);
  /* 11eb29ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb29bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb29bf call 0x11eb5120 */
  push32(0x11eb29c4u); f_11eb5120();
  /* 11eb29c4 mov esi, esp */
  ESI = (ESP);
  /* 11eb29c6 push 0x11edd420 */
  push32((uint32_t)(0x11edd420u));
  /* 11eb29cb push 0x11edd350 */
  push32((uint32_t)(0x11edd350u));
  /* 11eb29d0 call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb29d6u);
  /* 11eb29d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb29d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb29db call 0x11eb5120 */
  push32(0x11eb29e0u); f_11eb5120();
  /* 11eb29e0 mov esi, esp */
  ESI = (ESP);
  /* 11eb29e2 push 0x11edd414 */
  push32((uint32_t)(0x11edd414u));
  /* 11eb29e7 push 0x11edd350 */
  push32((uint32_t)(0x11edd350u));
  /* 11eb29ec call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb29f2u);
  /* 11eb29f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb29f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb29f7 call 0x11eb5120 */
  push32(0x11eb29fcu); f_11eb5120();
  /* 11eb29fc mov esi, esp */
  ESI = (ESP);
  /* 11eb29fe push 0x11edd408 */
  push32((uint32_t)(0x11edd408u));
  /* 11eb2a03 push 0x11edd350 */
  push32((uint32_t)(0x11edd350u));
  /* 11eb2a08 call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb2a0eu);
  /* 11eb2a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2a11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2a13 call 0x11eb5120 */
  push32(0x11eb2a18u); f_11eb5120();
  /* 11eb2a18 mov esi, esp */
  ESI = (ESP);
  /* 11eb2a1a push 0x11edd3fc */
  push32((uint32_t)(0x11edd3fcu));
  /* 11eb2a1f push 0x11edd350 */
  push32((uint32_t)(0x11edd350u));
  /* 11eb2a24 call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb2a2au);
  /* 11eb2a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2a2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2a2f call 0x11eb5120 */
  push32(0x11eb2a34u); f_11eb5120();
  /* 11eb2a34 mov esi, esp */
  ESI = (ESP);
  /* 11eb2a36 push 0x11edd3f0 */
  push32((uint32_t)(0x11edd3f0u));
  /* 11eb2a3b push 0x11edd350 */
  push32((uint32_t)(0x11edd350u));
  /* 11eb2a40 call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb2a46u);
  /* 11eb2a46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2a49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2a4b call 0x11eb5120 */
  push32(0x11eb2a50u); f_11eb5120();
  /* 11eb2a50 mov esi, esp */
  ESI = (ESP);
  /* 11eb2a52 push 0x11edd3e4 */
  push32((uint32_t)(0x11edd3e4u));
  /* 11eb2a57 push 0x11edd350 */
  push32((uint32_t)(0x11edd350u));
  /* 11eb2a5c call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb2a62u);
  /* 11eb2a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2a67 call 0x11eb5120 */
  push32(0x11eb2a6cu); f_11eb5120();
  /* 11eb2a6c mov esi, esp */
  ESI = (ESP);
  /* 11eb2a6e push 0x11edd3d8 */
  push32((uint32_t)(0x11edd3d8u));
  /* 11eb2a73 push 0x11edd350 */
  push32((uint32_t)(0x11edd350u));
  /* 11eb2a78 call dword ptr [0x11ee5474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5474))), 0x11eb2a7eu);
  /* 11eb2a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2a81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2a83 call 0x11eb5120 */
  push32(0x11eb2a88u); f_11eb5120();
  /* 11eb2a88 mov esi, esp */
  ESI = (ESP);
  /* 11eb2a8a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2a8f push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb2a91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2a93 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2a99u);
  /* 11eb2a99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2a9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2a9e call 0x11eb5120 */
  push32(0x11eb2aa3u); f_11eb5120();
  /* 11eb2aa3 mov esi, esp */
  ESI = (ESP);
  /* 11eb2aa5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2aac push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2aae call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2ab4u);
  /* 11eb2ab4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2ab7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2ab9 call 0x11eb5120 */
  push32(0x11eb2abeu); f_11eb5120();
  /* 11eb2abe mov esi, esp */
  ESI = (ESP);
  /* 11eb2ac0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2ac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb2ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2ac9 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2acfu);
  /* 11eb2acf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2ad2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2ad4 call 0x11eb5120 */
  push32(0x11eb2ad9u); f_11eb5120();
  /* 11eb2ad9 mov esi, esp */
  ESI = (ESP);
  /* 11eb2adb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2ae2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2ae4 call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2aeau);
  /* 11eb2aea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2aef call 0x11eb5120 */
  push32(0x11eb2af4u); f_11eb5120();
  /* 11eb2af4 mov esi, esp */
  ESI = (ESP);
  /* 11eb2af6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2afb push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2afd push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2aff call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2b05u);
  /* 11eb2b05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2b08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2b0a call 0x11eb5120 */
  push32(0x11eb2b0fu); f_11eb5120();
  /* 11eb2b0f mov esi, esp */
  ESI = (ESP);
  /* 11eb2b11 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11eb2b16 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb2b18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2b1a call dword ptr [0x11ee5464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5464))), 0x11eb2b20u);
  /* 11eb2b20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2b23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2b25 call 0x11eb5120 */
  push32(0x11eb2b2au); f_11eb5120();
  /* 11eb2b2a mov esi, esp */
  ESI = (ESP);
  /* 11eb2b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2b2e call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb2b34u);
  /* 11eb2b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2b37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2b39 call 0x11eb5120 */
  push32(0x11eb2b3eu); f_11eb5120();
  /* 11eb2b3e mov esi, esp */
  ESI = (ESP);
  /* 11eb2b40 push eax */
  push32((uint32_t)(EAX));
  /* 11eb2b41 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb2b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2b45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2b47 push 0x11edd3cc */
  push32((uint32_t)(0x11edd3ccu));
  /* 11eb2b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2b4e call dword ptr [0x11ee547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee547c))), 0x11eb2b54u);
  /* 11eb2b54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2b57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2b59 call 0x11eb5120 */
  push32(0x11eb2b5eu); f_11eb5120();
L_11eb2b5e:;
  /* 11eb2b5e mov esi, esp */
  ESI = (ESP);
  /* 11eb2b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2b62 call dword ptr [0x11ee5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5480))), 0x11eb2b68u);
  /* 11eb2b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2b6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2b6d call 0x11eb5120 */
  push32(0x11eb2b72u); f_11eb5120();
  /* 11eb2b72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2b77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2b79 je 0x11eb2bc5 */
  if (C.zf) goto L_11eb2bc5;
  /* 11eb2b7b mov esi, esp */
  ESI = (ESP);
  /* 11eb2b7d push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11eb2b7f call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2b85u);
  /* 11eb2b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2b8a call 0x11eb5120 */
  push32(0x11eb2b8fu); f_11eb5120();
  /* 11eb2b8f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2b94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2b96 je 0x11eb2bc5 */
  if (C.zf) goto L_11eb2bc5;
  /* 11eb2b98 mov esi, esp */
  ESI = (ESP);
  /* 11eb2b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2b9c push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11eb2b9e call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2ba4u);
  /* 11eb2ba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2ba7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2ba9 call 0x11eb5120 */
  push32(0x11eb2baeu); f_11eb5120();
  /* 11eb2bae mov esi, esp */
  ESI = (ESP);
  /* 11eb2bb0 push 0x11edd3c0 */
  push32((uint32_t)(0x11edd3c0u));
  /* 11eb2bb5 call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb2bbbu);
  /* 11eb2bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2bbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2bc0 call 0x11eb5120 */
  push32(0x11eb2bc5u); f_11eb5120();
L_11eb2bc5:;
  /* 11eb2bc5 mov esi, esp */
  ESI = (ESP);
  /* 11eb2bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb2bc9 call dword ptr [0x11ee5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5480))), 0x11eb2bcfu);
  /* 11eb2bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2bd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2bd4 call 0x11eb5120 */
  push32(0x11eb2bd9u); f_11eb5120();
  /* 11eb2bd9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2bde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2be0 je 0x11eb2c54 */
  if (C.zf) goto L_11eb2c54;
  /* 11eb2be2 mov esi, esp */
  ESI = (ESP);
  /* 11eb2be4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11eb2be6 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2becu);
  /* 11eb2bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2bf1 call 0x11eb5120 */
  push32(0x11eb2bf6u); f_11eb5120();
  /* 11eb2bf6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2bfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2bfd je 0x11eb2c54 */
  if (C.zf) goto L_11eb2c54;
  /* 11eb2bff mov esi, esp */
  ESI = (ESP);
  /* 11eb2c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2c03 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11eb2c05 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2c0bu);
  /* 11eb2c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2c10 call 0x11eb5120 */
  push32(0x11eb2c15u); f_11eb5120();
  /* 11eb2c15 mov esi, esp */
  ESI = (ESP);
  /* 11eb2c17 push 0x11edd3b4 */
  push32((uint32_t)(0x11edd3b4u));
  /* 11eb2c1c call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb2c22u);
  /* 11eb2c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2c25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2c27 call 0x11eb5120 */
  push32(0x11eb2c2cu); f_11eb5120();
  /* 11eb2c2c mov esi, esp */
  ESI = (ESP);
  /* 11eb2c2e push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11eb2c30 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2c36u);
  /* 11eb2c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2c39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2c3b call 0x11eb5120 */
  push32(0x11eb2c40u); f_11eb5120();
  /* 11eb2c40 mov esi, esp */
  ESI = (ESP);
  /* 11eb2c42 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11eb2c44 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2c4au);
  /* 11eb2c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2c4f call 0x11eb5120 */
  push32(0x11eb2c54u); f_11eb5120();
L_11eb2c54:;
  /* 11eb2c54 mov esi, esp */
  ESI = (ESP);
  /* 11eb2c56 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb2c58 call dword ptr [0x11ee5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5480))), 0x11eb2c5eu);
  /* 11eb2c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2c63 call 0x11eb5120 */
  push32(0x11eb2c68u); f_11eb5120();
  /* 11eb2c68 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2c6f je 0x11eb2ce3 */
  if (C.zf) goto L_11eb2ce3;
  /* 11eb2c71 mov esi, esp */
  ESI = (ESP);
  /* 11eb2c73 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb2c75 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2c7bu);
  /* 11eb2c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2c7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2c80 call 0x11eb5120 */
  push32(0x11eb2c85u); f_11eb5120();
  /* 11eb2c85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2c8c je 0x11eb2ce3 */
  if (C.zf) goto L_11eb2ce3;
  /* 11eb2c8e mov esi, esp */
  ESI = (ESP);
  /* 11eb2c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2c92 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb2c94 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2c9au);
  /* 11eb2c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2c9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2c9f call 0x11eb5120 */
  push32(0x11eb2ca4u); f_11eb5120();
  /* 11eb2ca4 mov esi, esp */
  ESI = (ESP);
  /* 11eb2ca6 push 0x11edd3a8 */
  push32((uint32_t)(0x11edd3a8u));
  /* 11eb2cab call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb2cb1u);
  /* 11eb2cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2cb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2cb6 call 0x11eb5120 */
  push32(0x11eb2cbbu); f_11eb5120();
  /* 11eb2cbb mov esi, esp */
  ESI = (ESP);
  /* 11eb2cbd push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11eb2cbf call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2cc5u);
  /* 11eb2cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2cc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2cca call 0x11eb5120 */
  push32(0x11eb2ccfu); f_11eb5120();
  /* 11eb2ccf mov esi, esp */
  ESI = (ESP);
  /* 11eb2cd1 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11eb2cd3 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2cd9u);
  /* 11eb2cd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2cdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2cde call 0x11eb5120 */
  push32(0x11eb2ce3u); f_11eb5120();
L_11eb2ce3:;
  /* 11eb2ce3 mov esi, esp */
  ESI = (ESP);
  /* 11eb2ce5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11eb2ce7 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2cedu);
  /* 11eb2ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2cf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2cf2 call 0x11eb5120 */
  push32(0x11eb2cf7u); f_11eb5120();
  /* 11eb2cf7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2cfe je 0x11eb2d93 */
  if (C.zf) goto L_11eb2d93;
  /* 11eb2d04 mov esi, esp */
  ESI = (ESP);
  /* 11eb2d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2d08 push 0x11ee2608 */
  push32((uint32_t)(0x11ee2608u));
  /* 11eb2d0d call dword ptr [0x11ee5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5488))), 0x11eb2d13u);
  /* 11eb2d13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2d18 call 0x11eb5120 */
  push32(0x11eb2d1du); f_11eb5120();
  /* 11eb2d1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2d1f jg 0x11eb2d3e */
  if ((!C.zf&&C.sf==C.of)) goto L_11eb2d3e;
  /* 11eb2d21 mov esi, esp */
  ESI = (ESP);
  /* 11eb2d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2d25 push 0x11ee2610 */
  push32((uint32_t)(0x11ee2610u));
  /* 11eb2d2a call dword ptr [0x11ee5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5488))), 0x11eb2d30u);
  /* 11eb2d30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2d33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2d35 call 0x11eb5120 */
  push32(0x11eb2d3au); f_11eb5120();
  /* 11eb2d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2d3c jle 0x11eb2d93 */
  if ((C.zf||C.sf!=C.of)) goto L_11eb2d93;
L_11eb2d3e:;
  /* 11eb2d3e mov esi, esp */
  ESI = (ESP);
  /* 11eb2d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2d42 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 11eb2d44 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2d4au);
  /* 11eb2d4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2d4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2d4f call 0x11eb5120 */
  push32(0x11eb2d54u); f_11eb5120();
  /* 11eb2d54 mov esi, esp */
  ESI = (ESP);
  /* 11eb2d56 push 0x11edd3b4 */
  push32((uint32_t)(0x11edd3b4u));
  /* 11eb2d5b call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb2d61u);
  /* 11eb2d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2d64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2d66 call 0x11eb5120 */
  push32(0x11eb2d6bu); f_11eb5120();
  /* 11eb2d6b mov esi, esp */
  ESI = (ESP);
  /* 11eb2d6d push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11eb2d6f call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2d75u);
  /* 11eb2d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2d78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2d7a call 0x11eb5120 */
  push32(0x11eb2d7fu); f_11eb5120();
  /* 11eb2d7f mov esi, esp */
  ESI = (ESP);
  /* 11eb2d81 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11eb2d83 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2d89u);
  /* 11eb2d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2d8e call 0x11eb5120 */
  push32(0x11eb2d93u); f_11eb5120();
L_11eb2d93:;
  /* 11eb2d93 mov esi, esp */
  ESI = (ESP);
  /* 11eb2d95 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb2d97 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2d9du);
  /* 11eb2d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2da2 call 0x11eb5120 */
  push32(0x11eb2da7u); f_11eb5120();
  /* 11eb2da7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2dae je 0x11eb2e43 */
  if (C.zf) goto L_11eb2e43;
  /* 11eb2db4 mov esi, esp */
  ESI = (ESP);
  /* 11eb2db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2db8 push 0x11ee25e8 */
  push32((uint32_t)(0x11ee25e8u));
  /* 11eb2dbd call dword ptr [0x11ee5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5488))), 0x11eb2dc3u);
  /* 11eb2dc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2dc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2dc8 call 0x11eb5120 */
  push32(0x11eb2dcdu); f_11eb5120();
  /* 11eb2dcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2dcf jg 0x11eb2dee */
  if ((!C.zf&&C.sf==C.of)) goto L_11eb2dee;
  /* 11eb2dd1 mov esi, esp */
  ESI = (ESP);
  /* 11eb2dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2dd5 push 0x11ee2680 */
  push32((uint32_t)(0x11ee2680u));
  /* 11eb2dda call dword ptr [0x11ee5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5488))), 0x11eb2de0u);
  /* 11eb2de0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2de3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2de5 call 0x11eb5120 */
  push32(0x11eb2deau); f_11eb5120();
  /* 11eb2dea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2dec jle 0x11eb2e43 */
  if ((C.zf||C.sf!=C.of)) goto L_11eb2e43;
L_11eb2dee:;
  /* 11eb2dee mov esi, esp */
  ESI = (ESP);
  /* 11eb2df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2df2 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb2df4 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2dfau);
  /* 11eb2dfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2dfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2dff call 0x11eb5120 */
  push32(0x11eb2e04u); f_11eb5120();
  /* 11eb2e04 mov esi, esp */
  ESI = (ESP);
  /* 11eb2e06 push 0x11edd3a8 */
  push32((uint32_t)(0x11edd3a8u));
  /* 11eb2e0b call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb2e11u);
  /* 11eb2e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2e14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2e16 call 0x11eb5120 */
  push32(0x11eb2e1bu); f_11eb5120();
  /* 11eb2e1b mov esi, esp */
  ESI = (ESP);
  /* 11eb2e1d push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11eb2e1f call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2e25u);
  /* 11eb2e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2e28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2e2a call 0x11eb5120 */
  push32(0x11eb2e2fu); f_11eb5120();
  /* 11eb2e2f mov esi, esp */
  ESI = (ESP);
  /* 11eb2e31 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11eb2e33 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb2e39u);
  /* 11eb2e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2e3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2e3e call 0x11eb5120 */
  push32(0x11eb2e43u); f_11eb5120();
L_11eb2e43:;
  /* 11eb2e43 mov esi, esp */
  ESI = (ESP);
  /* 11eb2e45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2e47 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2e4du);
  /* 11eb2e4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2e50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2e52 call 0x11eb5120 */
  push32(0x11eb2e57u); f_11eb5120();
  /* 11eb2e57 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2e5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2e5e jne 0x11eb2ee9 */
  if (!C.zf) goto L_11eb2ee9;
  /* 11eb2e64 mov esi, esp */
  ESI = (ESP);
  /* 11eb2e66 push 0x11ee2498 */
  push32((uint32_t)(0x11ee2498u));
  /* 11eb2e6b push 0x11ee25d8 */
  push32((uint32_t)(0x11ee25d8u));
  /* 11eb2e70 call dword ptr [0x11ee548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee548c))), 0x11eb2e76u);
  /* 11eb2e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2e7b call 0x11eb5120 */
  push32(0x11eb2e80u); f_11eb5120();
  /* 11eb2e80 mov esi, eax */
  ESI = (EAX);
  /* 11eb2e82 mov edi, esp */
  EDI = (ESP);
  /* 11eb2e84 push 0x11ee2498 */
  push32((uint32_t)(0x11ee2498u));
  /* 11eb2e89 call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb2e8fu);
  /* 11eb2e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2e92 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2e94 call 0x11eb5120 */
  push32(0x11eb2e99u); f_11eb5120();
  /* 11eb2e99 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2e9b jge 0x11eb2ee9 */
  if ((C.sf==C.of)) goto L_11eb2ee9;
  /* 11eb2e9d mov esi, esp */
  ESI = (ESP);
  /* 11eb2e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2ea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2ea3 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2ea9u);
  /* 11eb2ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2eae call 0x11eb5120 */
  push32(0x11eb2eb3u); f_11eb5120();
  /* 11eb2eb3 mov esi, esp */
  ESI = (ESP);
  /* 11eb2eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2eb7 push 0x11ee2498 */
  push32((uint32_t)(0x11ee2498u));
  /* 11eb2ebc call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2ec2u);
  /* 11eb2ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2ec5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2ec7 call 0x11eb5120 */
  push32(0x11eb2eccu); f_11eb5120();
  /* 11eb2ecc mov esi, esp */
  ESI = (ESP);
  /* 11eb2ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2ed2 push 0x11ee2698 */
  push32((uint32_t)(0x11ee2698u));
  /* 11eb2ed7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2ed9 call dword ptr [0x11ee5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5494))), 0x11eb2edfu);
  /* 11eb2edf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2ee2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2ee4 call 0x11eb5120 */
  push32(0x11eb2ee9u); f_11eb5120();
L_11eb2ee9:;
  /* 11eb2ee9 mov esi, esp */
  ESI = (ESP);
  /* 11eb2eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2eed call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2ef3u);
  /* 11eb2ef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2ef6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2ef8 call 0x11eb5120 */
  push32(0x11eb2efdu); f_11eb5120();
  /* 11eb2efd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2f04 je 0x11eb2f8d */
  if (C.zf) goto L_11eb2f8d;
  /* 11eb2f0a mov esi, esp */
  ESI = (ESP);
  /* 11eb2f0c push 0x11ee2498 */
  push32((uint32_t)(0x11ee2498u));
  /* 11eb2f11 push 0x11ee25d8 */
  push32((uint32_t)(0x11ee25d8u));
  /* 11eb2f16 call dword ptr [0x11ee548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee548c))), 0x11eb2f1cu);
  /* 11eb2f1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2f1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2f21 call 0x11eb5120 */
  push32(0x11eb2f26u); f_11eb5120();
  /* 11eb2f26 mov esi, eax */
  ESI = (EAX);
  /* 11eb2f28 mov edi, esp */
  EDI = (ESP);
  /* 11eb2f2a push 0x11ee2498 */
  push32((uint32_t)(0x11ee2498u));
  /* 11eb2f2f call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb2f35u);
  /* 11eb2f35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2f38 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2f3a call 0x11eb5120 */
  push32(0x11eb2f3fu); f_11eb5120();
  /* 11eb2f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2f41 jne 0x11eb2f8d */
  if (!C.zf) goto L_11eb2f8d;
  /* 11eb2f43 mov esi, esp */
  ESI = (ESP);
  /* 11eb2f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb2f49 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2f4fu);
  /* 11eb2f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2f52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2f54 call 0x11eb5120 */
  push32(0x11eb2f59u); f_11eb5120();
  /* 11eb2f59 mov esi, esp */
  ESI = (ESP);
  /* 11eb2f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2f5d push 0x11ee2498 */
  push32((uint32_t)(0x11ee2498u));
  /* 11eb2f62 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb2f68u);
  /* 11eb2f68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2f6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2f6d call 0x11eb5120 */
  push32(0x11eb2f72u); f_11eb5120();
  /* 11eb2f72 mov esi, esp */
  ESI = (ESP);
  /* 11eb2f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2f76 push 0x11ee2690 */
  push32((uint32_t)(0x11ee2690u));
  /* 11eb2f7b push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb2f7d call dword ptr [0x11ee5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5498))), 0x11eb2f83u);
  /* 11eb2f83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2f86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2f88 call 0x11eb5120 */
  push32(0x11eb2f8du); f_11eb5120();
L_11eb2f8d:;
  /* 11eb2f8d mov esi, esp */
  ESI = (ESP);
  /* 11eb2f8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb2f91 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb2f97u);
  /* 11eb2f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2f9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2f9c call 0x11eb5120 */
  push32(0x11eb2fa1u); f_11eb5120();
  /* 11eb2fa1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb2fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2fa8 je 0x11eb309d */
  if (C.zf) goto L_11eb309d;
  /* 11eb2fae mov esi, esp */
  ESI = (ESP);
  /* 11eb2fb0 push 0x11ee2498 */
  push32((uint32_t)(0x11ee2498u));
  /* 11eb2fb5 call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb2fbbu);
  /* 11eb2fbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2fbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2fc0 call 0x11eb5120 */
  push32(0x11eb2fc5u); f_11eb5120();
  /* 11eb2fc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2fc7 jne 0x11eb309d */
  if (!C.zf) goto L_11eb309d;
  /* 11eb2fcd mov esi, esp */
  ESI = (ESP);
  /* 11eb2fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2fd1 push 0x11ee25d8 */
  push32((uint32_t)(0x11ee25d8u));
  /* 11eb2fd6 call dword ptr [0x11ee5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5488))), 0x11eb2fdcu);
  /* 11eb2fdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2fdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2fe1 call 0x11eb5120 */
  push32(0x11eb2fe6u); f_11eb5120();
  /* 11eb2fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb2fe8 jle 0x11eb309d */
  if ((C.zf||C.sf!=C.of)) goto L_11eb309d;
  /* 11eb2fee mov esi, esp */
  ESI = (ESP);
  /* 11eb2ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb2ff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb2ff4 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb2ffau);
  /* 11eb2ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb2ffd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb2fff call 0x11eb5120 */
  push32(0x11eb3004u); f_11eb5120();
  /* 11eb3004 mov esi, esp */
  ESI = (ESP);
  /* 11eb3006 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3008 call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb300eu);
  /* 11eb300e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3011 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3013 call 0x11eb5120 */
  push32(0x11eb3018u); f_11eb5120();
  /* 11eb3018 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb301e mov edx, 0x4e20 */
  EDX = (0x4e20u);
  /* 11eb3023 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb3025 mov esi, esp */
  ESI = (ESP);
  /* 11eb3027 push edx */
  push32((uint32_t)(EDX));
  /* 11eb3028 push 0x11edd3a0 */
  push32((uint32_t)(0x11edd3a0u));
  /* 11eb302d call dword ptr [0x11ee549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee549c))), 0x11eb3033u);
  /* 11eb3033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3036 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3038 call 0x11eb5120 */
  push32(0x11eb303du); f_11eb5120();
  /* 11eb303d mov esi, esp */
  ESI = (ESP);
  /* 11eb303f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3041 call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb3047u);
  /* 11eb3047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb304a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb304c call 0x11eb5120 */
  push32(0x11eb3051u); f_11eb5120();
  /* 11eb3051 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb3057 mov ecx, 0x4e20 */
  ECX = (0x4e20u);
  /* 11eb305c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb305e mov esi, esp */
  ESI = (ESP);
  /* 11eb3060 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb3061 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3063 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3065 call dword ptr [0x11ee54a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a0))), 0x11eb306bu);
  /* 11eb306b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb306e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3070 call 0x11eb5120 */
  push32(0x11eb3075u); f_11eb5120();
  /* 11eb3075 mov esi, esp */
  ESI = (ESP);
  /* 11eb3077 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11eb3079 call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb307fu);
  /* 11eb307f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3082 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3084 call 0x11eb5120 */
  push32(0x11eb3089u); f_11eb5120();
  /* 11eb3089 mov esi, esp */
  ESI = (ESP);
  /* 11eb308b push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11eb308d call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb3093u);
  /* 11eb3093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3098 call 0x11eb5120 */
  push32(0x11eb309du); f_11eb5120();
L_11eb309d:;
  /* 11eb309d mov esi, esp */
  ESI = (ESP);
  /* 11eb309f push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb30a1 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb30a7u);
  /* 11eb30a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb30aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb30ac call 0x11eb5120 */
  push32(0x11eb30b1u); f_11eb5120();
  /* 11eb30b1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb30b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb30b8 jne 0x11eb3146 */
  if (!C.zf) goto L_11eb3146;
  /* 11eb30be mov esi, esp */
  ESI = (ESP);
  /* 11eb30c0 push 0x11ee2490 */
  push32((uint32_t)(0x11ee2490u));
  /* 11eb30c5 push 0x11ee25e0 */
  push32((uint32_t)(0x11ee25e0u));
  /* 11eb30ca call dword ptr [0x11ee548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee548c))), 0x11eb30d0u);
  /* 11eb30d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb30d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb30d5 call 0x11eb5120 */
  push32(0x11eb30dau); f_11eb5120();
  /* 11eb30da mov esi, eax */
  ESI = (EAX);
  /* 11eb30dc mov edi, esp */
  EDI = (ESP);
  /* 11eb30de push 0x11ee2490 */
  push32((uint32_t)(0x11ee2490u));
  /* 11eb30e3 call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb30e9u);
  /* 11eb30e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb30ec cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb30ee call 0x11eb5120 */
  push32(0x11eb30f3u); f_11eb5120();
  /* 11eb30f3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb30f5 jge 0x11eb3146 */
  if ((C.sf==C.of)) goto L_11eb3146;
  /* 11eb30f7 mov esi, esp */
  ESI = (ESP);
  /* 11eb30f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb30fb push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb30fd call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3103u);
  /* 11eb3103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3106 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3108 call 0x11eb5120 */
  push32(0x11eb310du); f_11eb5120();
  /* 11eb310d mov esi, esp */
  ESI = (ESP);
  /* 11eb310f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3111 push 0x11ee2490 */
  push32((uint32_t)(0x11ee2490u));
  /* 11eb3116 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb311cu);
  /* 11eb311c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb311f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3121 call 0x11eb5120 */
  push32(0x11eb3126u); f_11eb5120();
  /* 11eb3126 mov esi, esp */
  ESI = (ESP);
  /* 11eb3128 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb312a push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11eb312f push 0x11ee26a8 */
  push32((uint32_t)(0x11ee26a8u));
  /* 11eb3134 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3136 call dword ptr [0x11ee5494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5494))), 0x11eb313cu);
  /* 11eb313c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb313f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3141 call 0x11eb5120 */
  push32(0x11eb3146u); f_11eb5120();
L_11eb3146:;
  /* 11eb3146 mov esi, esp */
  ESI = (ESP);
  /* 11eb3148 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb314a call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3150u);
  /* 11eb3150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3155 call 0x11eb5120 */
  push32(0x11eb315au); f_11eb5120();
  /* 11eb315a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb315f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3161 je 0x11eb31ea */
  if (C.zf) goto L_11eb31ea;
  /* 11eb3167 mov esi, esp */
  ESI = (ESP);
  /* 11eb3169 push 0x11ee2490 */
  push32((uint32_t)(0x11ee2490u));
  /* 11eb316e push 0x11ee25e0 */
  push32((uint32_t)(0x11ee25e0u));
  /* 11eb3173 call dword ptr [0x11ee548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee548c))), 0x11eb3179u);
  /* 11eb3179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb317c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb317e call 0x11eb5120 */
  push32(0x11eb3183u); f_11eb5120();
  /* 11eb3183 mov esi, eax */
  ESI = (EAX);
  /* 11eb3185 mov edi, esp */
  EDI = (ESP);
  /* 11eb3187 push 0x11ee2490 */
  push32((uint32_t)(0x11ee2490u));
  /* 11eb318c call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb3192u);
  /* 11eb3192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3195 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3197 call 0x11eb5120 */
  push32(0x11eb319cu); f_11eb5120();
  /* 11eb319c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb319e jne 0x11eb31ea */
  if (!C.zf) goto L_11eb31ea;
  /* 11eb31a0 mov esi, esp */
  ESI = (ESP);
  /* 11eb31a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb31a4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb31a6 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb31acu);
  /* 11eb31ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb31af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb31b1 call 0x11eb5120 */
  push32(0x11eb31b6u); f_11eb5120();
  /* 11eb31b6 mov esi, esp */
  ESI = (ESP);
  /* 11eb31b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb31ba push 0x11ee2490 */
  push32((uint32_t)(0x11ee2490u));
  /* 11eb31bf call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb31c5u);
  /* 11eb31c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb31c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb31ca call 0x11eb5120 */
  push32(0x11eb31cfu); f_11eb5120();
  /* 11eb31cf mov esi, esp */
  ESI = (ESP);
  /* 11eb31d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb31d3 push 0x11ee26a0 */
  push32((uint32_t)(0x11ee26a0u));
  /* 11eb31d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb31da call dword ptr [0x11ee5498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5498))), 0x11eb31e0u);
  /* 11eb31e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb31e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb31e5 call 0x11eb5120 */
  push32(0x11eb31eau); f_11eb5120();
L_11eb31ea:;
  /* 11eb31ea mov esi, esp */
  ESI = (ESP);
  /* 11eb31ec push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb31ee call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb31f4u);
  /* 11eb31f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb31f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb31f9 call 0x11eb5120 */
  push32(0x11eb31feu); f_11eb5120();
  /* 11eb31fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3205 je 0x11eb32fa */
  if (C.zf) goto L_11eb32fa;
  /* 11eb320b mov esi, esp */
  ESI = (ESP);
  /* 11eb320d push 0x11ee2490 */
  push32((uint32_t)(0x11ee2490u));
  /* 11eb3212 call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb3218u);
  /* 11eb3218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb321b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb321d call 0x11eb5120 */
  push32(0x11eb3222u); f_11eb5120();
  /* 11eb3222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3224 jne 0x11eb32fa */
  if (!C.zf) goto L_11eb32fa;
  /* 11eb322a mov esi, esp */
  ESI = (ESP);
  /* 11eb322c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb322e push 0x11ee25e0 */
  push32((uint32_t)(0x11ee25e0u));
  /* 11eb3233 call dword ptr [0x11ee5488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5488))), 0x11eb3239u);
  /* 11eb3239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb323c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb323e call 0x11eb5120 */
  push32(0x11eb3243u); f_11eb5120();
  /* 11eb3243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3245 jle 0x11eb32fa */
  if ((C.zf||C.sf!=C.of)) goto L_11eb32fa;
  /* 11eb324b mov esi, esp */
  ESI = (ESP);
  /* 11eb324d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb324f push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3251 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3257u);
  /* 11eb3257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb325a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb325c call 0x11eb5120 */
  push32(0x11eb3261u); f_11eb5120();
  /* 11eb3261 mov esi, esp */
  ESI = (ESP);
  /* 11eb3263 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3265 call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb326bu);
  /* 11eb326b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb326e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3270 call 0x11eb5120 */
  push32(0x11eb3275u); f_11eb5120();
  /* 11eb3275 imul eax, eax, 0x9c4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x9c4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb327b mov edx, 0x61a8 */
  EDX = (0x61a8u);
  /* 11eb3280 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb3282 mov esi, esp */
  ESI = (ESP);
  /* 11eb3284 push edx */
  push32((uint32_t)(EDX));
  /* 11eb3285 push 0x11edd3a0 */
  push32((uint32_t)(0x11edd3a0u));
  /* 11eb328a call dword ptr [0x11ee549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee549c))), 0x11eb3290u);
  /* 11eb3290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3295 call 0x11eb5120 */
  push32(0x11eb329au); f_11eb5120();
  /* 11eb329a mov esi, esp */
  ESI = (ESP);
  /* 11eb329c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb329e call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb32a4u);
  /* 11eb32a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb32a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb32a9 call 0x11eb5120 */
  push32(0x11eb32aeu); f_11eb5120();
  /* 11eb32ae imul eax, eax, 0x9c4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x9c4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb32b4 mov ecx, 0x61a8 */
  ECX = (0x61a8u);
  /* 11eb32b9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb32bb mov esi, esp */
  ESI = (ESP);
  /* 11eb32bd push ecx */
  push32((uint32_t)(ECX));
  /* 11eb32be push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb32c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb32c2 call dword ptr [0x11ee54a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a0))), 0x11eb32c8u);
  /* 11eb32c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb32cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb32cd call 0x11eb5120 */
  push32(0x11eb32d2u); f_11eb5120();
  /* 11eb32d2 mov esi, esp */
  ESI = (ESP);
  /* 11eb32d4 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11eb32d6 call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb32dcu);
  /* 11eb32dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb32df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb32e1 call 0x11eb5120 */
  push32(0x11eb32e6u); f_11eb5120();
  /* 11eb32e6 mov esi, esp */
  ESI = (ESP);
  /* 11eb32e8 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11eb32ea call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb32f0u);
  /* 11eb32f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb32f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb32f5 call 0x11eb5120 */
  push32(0x11eb32fau); f_11eb5120();
L_11eb32fa:;
  /* 11eb32fa mov esi, esp */
  ESI = (ESP);
  /* 11eb32fc push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb32fe call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3304u);
  /* 11eb3304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3307 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3309 call 0x11eb5120 */
  push32(0x11eb330eu); f_11eb5120();
  /* 11eb330e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3315 je 0x11eb35a9 */
  if (C.zf) goto L_11eb35a9;
  /* 11eb331b mov esi, esp */
  ESI = (ESP);
  /* 11eb331d push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb331f call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3325u);
  /* 11eb3325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3328 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb332a call 0x11eb5120 */
  push32(0x11eb332fu); f_11eb5120();
  /* 11eb332f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3336 je 0x11eb3390 */
  if (C.zf) goto L_11eb3390;
  /* 11eb3338 mov esi, esp */
  ESI = (ESP);
  /* 11eb333a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb333c push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb333e call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3344u);
  /* 11eb3344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3347 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3349 call 0x11eb5120 */
  push32(0x11eb334eu); f_11eb5120();
  /* 11eb334e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eb3355 jmp 0x11eb3360 */
  goto L_11eb3360;
L_11eb3357:;
  /* 11eb3357 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb335a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb335d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11eb3360:;
  /* 11eb3360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb3363 cmp eax, dword ptr [0x11ee24d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee24d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3369 jge 0x11eb3390 */
  if ((C.sf==C.of)) goto L_11eb3390;
  /* 11eb336b mov esi, esp */
  ESI = (ESP);
  /* 11eb336d push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb336f push 0x11ee2448 */
  push32((uint32_t)(0x11ee2448u));
  /* 11eb3374 push 0x11ee2640 */
  push32((uint32_t)(0x11ee2640u));
  /* 11eb3379 push 0x11ee2468 */
  push32((uint32_t)(0x11ee2468u));
  /* 11eb337e call dword ptr [0x11ee54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a4))), 0x11eb3384u);
  /* 11eb3384 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3389 call 0x11eb5120 */
  push32(0x11eb338eu); f_11eb5120();
  /* 11eb338e jmp 0x11eb3357 */
  goto L_11eb3357;
L_11eb3390:;
  /* 11eb3390 mov esi, esp */
  ESI = (ESP);
  /* 11eb3392 push 0xa */
  push32((uint32_t)(0xau));
  /* 11eb3394 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb339au);
  /* 11eb339a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb339d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb339f call 0x11eb5120 */
  push32(0x11eb33a4u); f_11eb5120();
  /* 11eb33a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb33a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb33ab je 0x11eb33fc */
  if (C.zf) goto L_11eb33fc;
  /* 11eb33ad mov esi, esp */
  ESI = (ESP);
  /* 11eb33af push 0x11ee2468 */
  push32((uint32_t)(0x11ee2468u));
  /* 11eb33b4 call dword ptr [0x11ee54a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a8))), 0x11eb33bau);
  /* 11eb33ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb33bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb33bf call 0x11eb5120 */
  push32(0x11eb33c4u); f_11eb5120();
  /* 11eb33c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb33c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb33cb je 0x11eb33fc */
  if (C.zf) goto L_11eb33fc;
  /* 11eb33cd mov esi, esp */
  ESI = (ESP);
  /* 11eb33cf push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11eb33d4 push 7 */
  push32((uint32_t)(0x7u));
  /* 11eb33d6 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb33dcu);
  /* 11eb33dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb33df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb33e1 call 0x11eb5120 */
  push32(0x11eb33e6u); f_11eb5120();
  /* 11eb33e6 mov esi, esp */
  ESI = (ESP);
  /* 11eb33e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb33ea push 0xa */
  push32((uint32_t)(0xau));
  /* 11eb33ec call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb33f2u);
  /* 11eb33f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb33f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb33f7 call 0x11eb5120 */
  push32(0x11eb33fcu); f_11eb5120();
L_11eb33fc:;
  /* 11eb33fc mov esi, esp */
  ESI = (ESP);
  /* 11eb33fe push 0xb */
  push32((uint32_t)(0xbu));
  /* 11eb3400 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3406u);
  /* 11eb3406 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb340b call 0x11eb5120 */
  push32(0x11eb3410u); f_11eb5120();
  /* 11eb3410 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3417 je 0x11eb350c */
  if (C.zf) goto L_11eb350c;
  /* 11eb341d mov esi, esp */
  ESI = (ESP);
  /* 11eb341f push 7 */
  push32((uint32_t)(0x7u));
  /* 11eb3421 call dword ptr [0x11ee54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ac))), 0x11eb3427u);
  /* 11eb3427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb342a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb342c call 0x11eb5120 */
  push32(0x11eb3431u); f_11eb5120();
  /* 11eb3431 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3438 je 0x11eb350c */
  if (C.zf) goto L_11eb350c;
  /* 11eb343e mov esi, esp */
  ESI = (ESP);
  /* 11eb3440 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3442 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11eb3444 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb344au);
  /* 11eb344a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb344d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb344f call 0x11eb5120 */
  push32(0x11eb3454u); f_11eb5120();
  /* 11eb3454 mov esi, esp */
  ESI = (ESP);
  /* 11eb3456 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3458 push 0xa */
  push32((uint32_t)(0xau));
  /* 11eb345a call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3460u);
  /* 11eb3460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3463 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3465 call 0x11eb5120 */
  push32(0x11eb346au); f_11eb5120();
  /* 11eb346a mov esi, esp */
  ESI = (ESP);
  /* 11eb346c push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb346e push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb3470 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3476u);
  /* 11eb3476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3479 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb347b call 0x11eb5120 */
  push32(0x11eb3480u); f_11eb5120();
  /* 11eb3480 mov esi, esp */
  ESI = (ESP);
  /* 11eb3482 push 7 */
  push32((uint32_t)(0x7u));
  /* 11eb3484 call dword ptr [0x11ee54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b0))), 0x11eb348au);
  /* 11eb348a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb348d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb348f call 0x11eb5120 */
  push32(0x11eb3494u); f_11eb5120();
  /* 11eb3494 mov esi, esp */
  ESI = (ESP);
  /* 11eb3496 push 0x86c4 */
  push32((uint32_t)(0x86c4u));
  /* 11eb349b push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb349d call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb34a3u);
  /* 11eb34a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb34a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb34a8 call 0x11eb5120 */
  push32(0x11eb34adu); f_11eb5120();
  /* 11eb34ad mov esi, esp */
  ESI = (ESP);
  /* 11eb34af push 0x11ee2460 */
  push32((uint32_t)(0x11ee2460u));
  /* 11eb34b4 push 0x11ee2448 */
  push32((uint32_t)(0x11ee2448u));
  /* 11eb34b9 call dword ptr [0x11ee54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b4))), 0x11eb34bfu);
  /* 11eb34bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb34c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb34c4 call 0x11eb5120 */
  push32(0x11eb34c9u); f_11eb5120();
  /* 11eb34c9 mov esi, esp */
  ESI = (ESP);
  /* 11eb34cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb34cd push 0x11ee2460 */
  push32((uint32_t)(0x11ee2460u));
  /* 11eb34d2 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb34d8u);
  /* 11eb34d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb34db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb34dd call 0x11eb5120 */
  push32(0x11eb34e2u); f_11eb5120();
  /* 11eb34e2 mov esi, esp */
  ESI = (ESP);
  /* 11eb34e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb34e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb34e8 call dword ptr [0x11ee54b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b8))), 0x11eb34eeu);
  /* 11eb34ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb34f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb34f3 call 0x11eb5120 */
  push32(0x11eb34f8u); f_11eb5120();
  /* 11eb34f8 mov esi, esp */
  ESI = (ESP);
  /* 11eb34fa push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb34fc call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb3502u);
  /* 11eb3502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3505 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3507 call 0x11eb5120 */
  push32(0x11eb350cu); f_11eb5120();
L_11eb350c:;
  /* 11eb350c mov esi, esp */
  ESI = (ESP);
  /* 11eb350e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3510 push 0x11ee2608 */
  push32((uint32_t)(0x11ee2608u));
  /* 11eb3515 push 0x11ee2460 */
  push32((uint32_t)(0x11ee2460u));
  /* 11eb351a call dword ptr [0x11ee54bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54bc))), 0x11eb3520u);
  /* 11eb3520 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3523 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3525 call 0x11eb5120 */
  push32(0x11eb352au); f_11eb5120();
  /* 11eb352a mov esi, esp */
  ESI = (ESP);
  /* 11eb352c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11eb352e call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3534u);
  /* 11eb3534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3539 call 0x11eb5120 */
  push32(0x11eb353eu); f_11eb5120();
  /* 11eb353e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3545 jne 0x11eb35a9 */
  if (!C.zf) goto L_11eb35a9;
  /* 11eb3547 mov esi, esp */
  ESI = (ESP);
  /* 11eb3549 push 0x11ee2460 */
  push32((uint32_t)(0x11ee2460u));
  /* 11eb354e call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb3554u);
  /* 11eb3554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3557 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3559 call 0x11eb5120 */
  push32(0x11eb355eu); f_11eb5120();
  /* 11eb355e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3560 je 0x11eb357f */
  if (C.zf) goto L_11eb357f;
  /* 11eb3562 mov esi, esp */
  ESI = (ESP);
  /* 11eb3564 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb3566 call dword ptr [0x11ee5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5480))), 0x11eb356cu);
  /* 11eb356c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb356f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3571 call 0x11eb5120 */
  push32(0x11eb3576u); f_11eb5120();
  /* 11eb3576 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb357b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb357d je 0x11eb35a9 */
  if (C.zf) goto L_11eb35a9;
L_11eb357f:;
  /* 11eb357f mov esi, esp */
  ESI = (ESP);
  /* 11eb3581 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb3583 call dword ptr [0x11ee54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b0))), 0x11eb3589u);
  /* 11eb3589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb358c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb358e call 0x11eb5120 */
  push32(0x11eb3593u); f_11eb5120();
  /* 11eb3593 mov esi, esp */
  ESI = (ESP);
  /* 11eb3595 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3597 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11eb3599 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb359fu);
  /* 11eb359f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb35a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb35a4 call 0x11eb5120 */
  push32(0x11eb35a9u); f_11eb5120();
L_11eb35a9:;
  /* 11eb35a9 mov esi, esp */
  ESI = (ESP);
  /* 11eb35ab push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb35ad call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb35b3u);
  /* 11eb35b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb35b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb35b8 call 0x11eb5120 */
  push32(0x11eb35bdu); f_11eb5120();
  /* 11eb35bd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb35c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb35c4 je 0x11eb3858 */
  if (C.zf) goto L_11eb3858;
  /* 11eb35ca mov esi, esp */
  ESI = (ESP);
  /* 11eb35cc push 0xc */
  push32((uint32_t)(0xcu));
  /* 11eb35ce call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb35d4u);
  /* 11eb35d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb35d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb35d9 call 0x11eb5120 */
  push32(0x11eb35deu); f_11eb5120();
  /* 11eb35de and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb35e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb35e5 je 0x11eb363f */
  if (C.zf) goto L_11eb363f;
  /* 11eb35e7 mov esi, esp */
  ESI = (ESP);
  /* 11eb35e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb35eb push 0xc */
  push32((uint32_t)(0xcu));
  /* 11eb35ed call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb35f3u);
  /* 11eb35f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb35f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb35f8 call 0x11eb5120 */
  push32(0x11eb35fdu); f_11eb5120();
  /* 11eb35fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eb3604 jmp 0x11eb360f */
  goto L_11eb360f;
L_11eb3606:;
  /* 11eb3606 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb3609 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb360c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11eb360f:;
  /* 11eb360f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb3612 cmp edx, dword ptr [0x11ee2520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3618 jge 0x11eb363f */
  if ((C.sf==C.of)) goto L_11eb363f;
  /* 11eb361a mov esi, esp */
  ESI = (ESP);
  /* 11eb361c push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb361e push 0x11ee2440 */
  push32((uint32_t)(0x11ee2440u));
  /* 11eb3623 push 0x11ee2648 */
  push32((uint32_t)(0x11ee2648u));
  /* 11eb3628 push 0x11ee2470 */
  push32((uint32_t)(0x11ee2470u));
  /* 11eb362d call dword ptr [0x11ee54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a4))), 0x11eb3633u);
  /* 11eb3633 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3636 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3638 call 0x11eb5120 */
  push32(0x11eb363du); f_11eb5120();
  /* 11eb363d jmp 0x11eb3606 */
  goto L_11eb3606;
L_11eb363f:;
  /* 11eb363f mov esi, esp */
  ESI = (ESP);
  /* 11eb3641 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11eb3643 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3649u);
  /* 11eb3649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb364c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb364e call 0x11eb5120 */
  push32(0x11eb3653u); f_11eb5120();
  /* 11eb3653 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb365a je 0x11eb36ab */
  if (C.zf) goto L_11eb36ab;
  /* 11eb365c mov esi, esp */
  ESI = (ESP);
  /* 11eb365e push 0x11ee2470 */
  push32((uint32_t)(0x11ee2470u));
  /* 11eb3663 call dword ptr [0x11ee54a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a8))), 0x11eb3669u);
  /* 11eb3669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb366c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb366e call 0x11eb5120 */
  push32(0x11eb3673u); f_11eb5120();
  /* 11eb3673 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb367a je 0x11eb36ab */
  if (C.zf) goto L_11eb36ab;
  /* 11eb367c mov esi, esp */
  ESI = (ESP);
  /* 11eb367e push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11eb3683 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3685 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb368bu);
  /* 11eb368b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb368e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3690 call 0x11eb5120 */
  push32(0x11eb3695u); f_11eb5120();
  /* 11eb3695 mov esi, esp */
  ESI = (ESP);
  /* 11eb3697 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3699 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11eb369b call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb36a1u);
  /* 11eb36a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb36a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb36a6 call 0x11eb5120 */
  push32(0x11eb36abu); f_11eb5120();
L_11eb36ab:;
  /* 11eb36ab mov esi, esp */
  ESI = (ESP);
  /* 11eb36ad push 0xe */
  push32((uint32_t)(0xeu));
  /* 11eb36af call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb36b5u);
  /* 11eb36b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb36b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb36ba call 0x11eb5120 */
  push32(0x11eb36bfu); f_11eb5120();
  /* 11eb36bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb36c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb36c6 je 0x11eb37bb */
  if (C.zf) goto L_11eb37bb;
  /* 11eb36cc mov esi, esp */
  ESI = (ESP);
  /* 11eb36ce push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb36d0 call dword ptr [0x11ee54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ac))), 0x11eb36d6u);
  /* 11eb36d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb36d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb36db call 0x11eb5120 */
  push32(0x11eb36e0u); f_11eb5120();
  /* 11eb36e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb36e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb36e7 je 0x11eb37bb */
  if (C.zf) goto L_11eb37bb;
  /* 11eb36ed mov esi, esp */
  ESI = (ESP);
  /* 11eb36ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb36f1 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11eb36f3 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb36f9u);
  /* 11eb36f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb36fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb36fe call 0x11eb5120 */
  push32(0x11eb3703u); f_11eb5120();
  /* 11eb3703 mov esi, esp */
  ESI = (ESP);
  /* 11eb3705 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3707 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11eb3709 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb370fu);
  /* 11eb370f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3714 call 0x11eb5120 */
  push32(0x11eb3719u); f_11eb5120();
  /* 11eb3719 mov esi, esp */
  ESI = (ESP);
  /* 11eb371b push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb371d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11eb371f call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3725u);
  /* 11eb3725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3728 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb372a call 0x11eb5120 */
  push32(0x11eb372fu); f_11eb5120();
  /* 11eb372f mov esi, esp */
  ESI = (ESP);
  /* 11eb3731 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3733 call dword ptr [0x11ee54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b0))), 0x11eb3739u);
  /* 11eb3739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb373c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb373e call 0x11eb5120 */
  push32(0x11eb3743u); f_11eb5120();
  /* 11eb3743 mov esi, esp */
  ESI = (ESP);
  /* 11eb3745 push 0x86c4 */
  push32((uint32_t)(0x86c4u));
  /* 11eb374a push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb374c call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb3752u);
  /* 11eb3752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3755 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3757 call 0x11eb5120 */
  push32(0x11eb375cu); f_11eb5120();
  /* 11eb375c mov esi, esp */
  ESI = (ESP);
  /* 11eb375e push 0x11ee2450 */
  push32((uint32_t)(0x11ee2450u));
  /* 11eb3763 push 0x11ee2440 */
  push32((uint32_t)(0x11ee2440u));
  /* 11eb3768 call dword ptr [0x11ee54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b4))), 0x11eb376eu);
  /* 11eb376e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3771 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3773 call 0x11eb5120 */
  push32(0x11eb3778u); f_11eb5120();
  /* 11eb3778 mov esi, esp */
  ESI = (ESP);
  /* 11eb377a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb377c push 0x11ee2450 */
  push32((uint32_t)(0x11ee2450u));
  /* 11eb3781 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb3787u);
  /* 11eb3787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb378a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb378c call 0x11eb5120 */
  push32(0x11eb3791u); f_11eb5120();
  /* 11eb3791 mov esi, esp */
  ESI = (ESP);
  /* 11eb3793 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3795 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3797 call dword ptr [0x11ee54b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b8))), 0x11eb379du);
  /* 11eb379d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb37a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb37a2 call 0x11eb5120 */
  push32(0x11eb37a7u); f_11eb5120();
  /* 11eb37a7 mov esi, esp */
  ESI = (ESP);
  /* 11eb37a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb37ab call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb37b1u);
  /* 11eb37b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb37b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb37b6 call 0x11eb5120 */
  push32(0x11eb37bbu); f_11eb5120();
L_11eb37bb:;
  /* 11eb37bb mov esi, esp */
  ESI = (ESP);
  /* 11eb37bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb37bf push 0x11ee2610 */
  push32((uint32_t)(0x11ee2610u));
  /* 11eb37c4 push 0x11ee2450 */
  push32((uint32_t)(0x11ee2450u));
  /* 11eb37c9 call dword ptr [0x11ee54bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54bc))), 0x11eb37cfu);
  /* 11eb37cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb37d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb37d4 call 0x11eb5120 */
  push32(0x11eb37d9u); f_11eb5120();
  /* 11eb37d9 mov esi, esp */
  ESI = (ESP);
  /* 11eb37db push 0xe */
  push32((uint32_t)(0xeu));
  /* 11eb37dd call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb37e3u);
  /* 11eb37e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb37e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb37e8 call 0x11eb5120 */
  push32(0x11eb37edu); f_11eb5120();
  /* 11eb37ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb37f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb37f4 jne 0x11eb3858 */
  if (!C.zf) goto L_11eb3858;
  /* 11eb37f6 mov esi, esp */
  ESI = (ESP);
  /* 11eb37f8 push 0x11ee2450 */
  push32((uint32_t)(0x11ee2450u));
  /* 11eb37fd call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb3803u);
  /* 11eb3803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3806 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3808 call 0x11eb5120 */
  push32(0x11eb380du); f_11eb5120();
  /* 11eb380d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb380f je 0x11eb382e */
  if (C.zf) goto L_11eb382e;
  /* 11eb3811 mov esi, esp */
  ESI = (ESP);
  /* 11eb3813 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3815 call dword ptr [0x11ee5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5480))), 0x11eb381bu);
  /* 11eb381b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb381e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3820 call 0x11eb5120 */
  push32(0x11eb3825u); f_11eb5120();
  /* 11eb3825 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb382a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb382c je 0x11eb3858 */
  if (C.zf) goto L_11eb3858;
L_11eb382e:;
  /* 11eb382e mov esi, esp */
  ESI = (ESP);
  /* 11eb3830 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3832 call dword ptr [0x11ee54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b0))), 0x11eb3838u);
  /* 11eb3838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb383b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb383d call 0x11eb5120 */
  push32(0x11eb3842u); f_11eb5120();
  /* 11eb3842 mov esi, esp */
  ESI = (ESP);
  /* 11eb3844 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3846 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11eb3848 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb384eu);
  /* 11eb384e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3853 call 0x11eb5120 */
  push32(0x11eb3858u); f_11eb5120();
L_11eb3858:;
  /* 11eb3858 mov esi, esp */
  ESI = (ESP);
  /* 11eb385a push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb385c call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3862u);
  /* 11eb3862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3867 call 0x11eb5120 */
  push32(0x11eb386cu); f_11eb5120();
  /* 11eb386c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3871 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3873 je 0x11eb38e5 */
  if (C.zf) goto L_11eb38e5;
  /* 11eb3875 mov esi, esp */
  ESI = (ESP);
  /* 11eb3877 push 0x11ee26b0 */
  push32((uint32_t)(0x11ee26b0u));
  /* 11eb387c call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb3882u);
  /* 11eb3882 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3887 call 0x11eb5120 */
  push32(0x11eb388cu); f_11eb5120();
  /* 11eb388c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb388e jne 0x11eb38e5 */
  if (!C.zf) goto L_11eb38e5;
  /* 11eb3890 mov esi, esp */
  ESI = (ESP);
  /* 11eb3892 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3894 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3896 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb389cu);
  /* 11eb389c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb389f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb38a1 call 0x11eb5120 */
  push32(0x11eb38a6u); f_11eb5120();
  /* 11eb38a6 mov esi, esp */
  ESI = (ESP);
  /* 11eb38a8 push 0x11edd398 */
  push32((uint32_t)(0x11edd398u));
  /* 11eb38ad call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb38b3u);
  /* 11eb38b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb38b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb38b8 call 0x11eb5120 */
  push32(0x11eb38bdu); f_11eb5120();
  /* 11eb38bd mov esi, esp */
  ESI = (ESP);
  /* 11eb38bf push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11eb38c1 call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb38c7u);
  /* 11eb38c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb38ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb38cc call 0x11eb5120 */
  push32(0x11eb38d1u); f_11eb5120();
  /* 11eb38d1 mov esi, esp */
  ESI = (ESP);
  /* 11eb38d3 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11eb38d5 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb38dbu);
  /* 11eb38db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb38de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb38e0 call 0x11eb5120 */
  push32(0x11eb38e5u); f_11eb5120();
L_11eb38e5:;
  /* 11eb38e5 mov esi, esp */
  ESI = (ESP);
  /* 11eb38e7 push 6 */
  push32((uint32_t)(0x6u));
  /* 11eb38e9 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb38efu);
  /* 11eb38ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb38f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb38f4 call 0x11eb5120 */
  push32(0x11eb38f9u); f_11eb5120();
  /* 11eb38f9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb38fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3900 je 0x11eb3972 */
  if (C.zf) goto L_11eb3972;
  /* 11eb3902 mov esi, esp */
  ESI = (ESP);
  /* 11eb3904 push 0x11ee26b8 */
  push32((uint32_t)(0x11ee26b8u));
  /* 11eb3909 call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb390fu);
  /* 11eb390f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3912 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3914 call 0x11eb5120 */
  push32(0x11eb3919u); f_11eb5120();
  /* 11eb3919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb391b jne 0x11eb3972 */
  if (!C.zf) goto L_11eb3972;
  /* 11eb391d mov esi, esp */
  ESI = (ESP);
  /* 11eb391f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3921 push 6 */
  push32((uint32_t)(0x6u));
  /* 11eb3923 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3929u);
  /* 11eb3929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb392c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb392e call 0x11eb5120 */
  push32(0x11eb3933u); f_11eb5120();
  /* 11eb3933 mov esi, esp */
  ESI = (ESP);
  /* 11eb3935 push 0x11edd390 */
  push32((uint32_t)(0x11edd390u));
  /* 11eb393a call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb3940u);
  /* 11eb3940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3945 call 0x11eb5120 */
  push32(0x11eb394au); f_11eb5120();
  /* 11eb394a mov esi, esp */
  ESI = (ESP);
  /* 11eb394c push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11eb394e call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb3954u);
  /* 11eb3954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3957 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3959 call 0x11eb5120 */
  push32(0x11eb395eu); f_11eb5120();
  /* 11eb395e mov esi, esp */
  ESI = (ESP);
  /* 11eb3960 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11eb3962 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb3968u);
  /* 11eb3968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb396b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb396d call 0x11eb5120 */
  push32(0x11eb3972u); f_11eb5120();
L_11eb3972:;
  /* 11eb3972 mov esi, esp */
  ESI = (ESP);
  /* 11eb3974 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3976 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb397cu);
  /* 11eb397c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb397f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3981 call 0x11eb5120 */
  push32(0x11eb3986u); f_11eb5120();
  /* 11eb3986 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb398b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb398d je 0x11eb3cdf */
  if (C.zf) goto L_11eb3cdf;
  /* 11eb3993 mov esi, esp */
  ESI = (ESP);
  /* 11eb3995 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11eb3997 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb399du);
  /* 11eb399d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb39a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb39a2 call 0x11eb5120 */
  push32(0x11eb39a7u); f_11eb5120();
  /* 11eb39a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb39ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb39ae je 0x11eb3a08 */
  if (C.zf) goto L_11eb3a08;
  /* 11eb39b0 mov esi, esp */
  ESI = (ESP);
  /* 11eb39b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb39b4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11eb39b6 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb39bcu);
  /* 11eb39bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb39bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb39c1 call 0x11eb5120 */
  push32(0x11eb39c6u); f_11eb5120();
  /* 11eb39c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11eb39cd jmp 0x11eb39d8 */
  goto L_11eb39d8;
L_11eb39cf:;
  /* 11eb39cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb39d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb39d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11eb39d8:;
  /* 11eb39d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb39db cmp ecx, dword ptr [0x11ee2550] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee2550))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb39e1 jge 0x11eb3a08 */
  if ((C.sf==C.of)) goto L_11eb3a08;
  /* 11eb39e3 mov esi, esp */
  ESI = (ESP);
  /* 11eb39e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb39e7 push 0x11ee2400 */
  push32((uint32_t)(0x11ee2400u));
  /* 11eb39ec push 0x11ee2418 */
  push32((uint32_t)(0x11ee2418u));
  /* 11eb39f1 push 0x11ee26b0 */
  push32((uint32_t)(0x11ee26b0u));
  /* 11eb39f6 call dword ptr [0x11ee54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a4))), 0x11eb39fcu);
  /* 11eb39fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb39ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3a01 call 0x11eb5120 */
  push32(0x11eb3a06u); f_11eb5120();
  /* 11eb3a06 jmp 0x11eb39cf */
  goto L_11eb39cf;
L_11eb3a08:;
  /* 11eb3a08 mov esi, esp */
  ESI = (ESP);
  /* 11eb3a0a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11eb3a0c call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3a12u);
  /* 11eb3a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3a15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3a17 call 0x11eb5120 */
  push32(0x11eb3a1cu); f_11eb5120();
  /* 11eb3a1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3a23 je 0x11eb3a71 */
  if (C.zf) goto L_11eb3a71;
  /* 11eb3a25 mov esi, esp */
  ESI = (ESP);
  /* 11eb3a27 push 0x11ee26b0 */
  push32((uint32_t)(0x11ee26b0u));
  /* 11eb3a2c call dword ptr [0x11ee54a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a8))), 0x11eb3a32u);
  /* 11eb3a32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3a35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3a37 call 0x11eb5120 */
  push32(0x11eb3a3cu); f_11eb5120();
  /* 11eb3a3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3a41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3a43 je 0x11eb3a71 */
  if (C.zf) goto L_11eb3a71;
  /* 11eb3a45 mov esi, esp */
  ESI = (ESP);
  /* 11eb3a47 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11eb3a49 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb3a4b call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb3a51u);
  /* 11eb3a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3a54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3a56 call 0x11eb5120 */
  push32(0x11eb3a5bu); f_11eb5120();
  /* 11eb3a5b mov esi, esp */
  ESI = (ESP);
  /* 11eb3a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3a5f push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11eb3a61 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3a67u);
  /* 11eb3a67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3a6c call 0x11eb5120 */
  push32(0x11eb3a71u); f_11eb5120();
L_11eb3a71:;
  /* 11eb3a71 mov esi, esp */
  ESI = (ESP);
  /* 11eb3a73 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb3a75 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3a7bu);
  /* 11eb3a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3a80 call 0x11eb5120 */
  push32(0x11eb3a85u); f_11eb5120();
  /* 11eb3a85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3a8c jne 0x11eb3c43 */
  if (!C.zf) goto L_11eb3c43;
  /* 11eb3a92 mov esi, esp */
  ESI = (ESP);
  /* 11eb3a94 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11eb3a96 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3a9cu);
  /* 11eb3a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3aa1 call 0x11eb5120 */
  push32(0x11eb3aa6u); f_11eb5120();
  /* 11eb3aa6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3aad je 0x11eb3c43 */
  if (C.zf) goto L_11eb3c43;
  /* 11eb3ab3 mov esi, esp */
  ESI = (ESP);
  /* 11eb3ab5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb3ab7 call dword ptr [0x11ee54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ac))), 0x11eb3abdu);
  /* 11eb3abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3ac0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3ac2 call 0x11eb5120 */
  push32(0x11eb3ac7u); f_11eb5120();
  /* 11eb3ac7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3acc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3ace je 0x11eb3c43 */
  if (C.zf) goto L_11eb3c43;
  /* 11eb3ad4 mov esi, esp */
  ESI = (ESP);
  /* 11eb3ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3ad8 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11eb3ada call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3ae0u);
  /* 11eb3ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3ae3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3ae5 call 0x11eb5120 */
  push32(0x11eb3aeau); f_11eb5120();
  /* 11eb3aea mov esi, esp */
  ESI = (ESP);
  /* 11eb3aec push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb3aee call dword ptr [0x11ee54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b0))), 0x11eb3af4u);
  /* 11eb3af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3af7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3af9 call 0x11eb5120 */
  push32(0x11eb3afeu); f_11eb5120();
  /* 11eb3afe mov esi, esp */
  ESI = (ESP);
  /* 11eb3b00 push 0x2cec */
  push32((uint32_t)(0x2cecu));
  /* 11eb3b05 push 0xa */
  push32((uint32_t)(0xau));
  /* 11eb3b07 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb3b0du);
  /* 11eb3b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3b12 call 0x11eb5120 */
  push32(0x11eb3b17u); f_11eb5120();
  /* 11eb3b17 mov esi, esp */
  ESI = (ESP);
  /* 11eb3b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3b1b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11eb3b1d call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3b23u);
  /* 11eb3b23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3b26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3b28 call 0x11eb5120 */
  push32(0x11eb3b2du); f_11eb5120();
  /* 11eb3b2d mov esi, esp */
  ESI = (ESP);
  /* 11eb3b2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3b31 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11eb3b33 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3b39u);
  /* 11eb3b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3b3e call 0x11eb5120 */
  push32(0x11eb3b43u); f_11eb5120();
  /* 11eb3b43 mov esi, esp */
  ESI = (ESP);
  /* 11eb3b45 push 0x11ee23f8 */
  push32((uint32_t)(0x11ee23f8u));
  /* 11eb3b4a push 0x11ee2400 */
  push32((uint32_t)(0x11ee2400u));
  /* 11eb3b4f call dword ptr [0x11ee54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b4))), 0x11eb3b55u);
  /* 11eb3b55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3b58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3b5a call 0x11eb5120 */
  push32(0x11eb3b5fu); f_11eb5120();
  /* 11eb3b5f mov esi, esp */
  ESI = (ESP);
  /* 11eb3b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3b63 push 0x11ee23f8 */
  push32((uint32_t)(0x11ee23f8u));
  /* 11eb3b68 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb3b6eu);
  /* 11eb3b6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3b71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3b73 call 0x11eb5120 */
  push32(0x11eb3b78u); f_11eb5120();
  /* 11eb3b78 mov esi, esp */
  ESI = (ESP);
  /* 11eb3b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3b7c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11eb3b7e push 0x11ee25f8 */
  push32((uint32_t)(0x11ee25f8u));
  /* 11eb3b83 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3b85 call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3b8bu);
  /* 11eb3b8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3b90 call 0x11eb5120 */
  push32(0x11eb3b95u); f_11eb5120();
  /* 11eb3b95 mov esi, esp */
  ESI = (ESP);
  /* 11eb3b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3b99 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11eb3b9e push 0x11ee2600 */
  push32((uint32_t)(0x11ee2600u));
  /* 11eb3ba3 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3ba5 call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3babu);
  /* 11eb3bab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3bae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3bb0 call 0x11eb5120 */
  push32(0x11eb3bb5u); f_11eb5120();
  /* 11eb3bb5 mov esi, esp */
  ESI = (ESP);
  /* 11eb3bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3bb9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11eb3bbb push 0x11ee2628 */
  push32((uint32_t)(0x11ee2628u));
  /* 11eb3bc0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3bc2 call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3bc8u);
  /* 11eb3bc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3bcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3bcd call 0x11eb5120 */
  push32(0x11eb3bd2u); f_11eb5120();
  /* 11eb3bd2 mov esi, esp */
  ESI = (ESP);
  /* 11eb3bd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3bd6 push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 11eb3bdb push 0x11ee2630 */
  push32((uint32_t)(0x11ee2630u));
  /* 11eb3be0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3be2 call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3be8u);
  /* 11eb3be8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3beb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3bed call 0x11eb5120 */
  push32(0x11eb3bf2u); f_11eb5120();
  /* 11eb3bf2 mov esi, esp */
  ESI = (ESP);
  /* 11eb3bf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3bf6 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11eb3bfb push 0x11ee2618 */
  push32((uint32_t)(0x11ee2618u));
  /* 11eb3c00 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3c02 call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3c08u);
  /* 11eb3c08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3c0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3c0d call 0x11eb5120 */
  push32(0x11eb3c12u); f_11eb5120();
  /* 11eb3c12 mov esi, esp */
  ESI = (ESP);
  /* 11eb3c14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3c16 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11eb3c18 push 0x11ee26c8 */
  push32((uint32_t)(0x11ee26c8u));
  /* 11eb3c1d push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3c1f call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3c25u);
  /* 11eb3c25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3c2a call 0x11eb5120 */
  push32(0x11eb3c2fu); f_11eb5120();
  /* 11eb3c2f mov esi, esp */
  ESI = (ESP);
  /* 11eb3c31 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb3c33 call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb3c39u);
  /* 11eb3c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3c3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3c3e call 0x11eb5120 */
  push32(0x11eb3c43u); f_11eb5120();
L_11eb3c43:;
  /* 11eb3c43 mov esi, esp */
  ESI = (ESP);
  /* 11eb3c45 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb3c47 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3c4du);
  /* 11eb3c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3c50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3c52 call 0x11eb5120 */
  push32(0x11eb3c57u); f_11eb5120();
  /* 11eb3c57 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3c5e jne 0x11eb3cdf */
  if (!C.zf) goto L_11eb3cdf;
  /* 11eb3c60 mov esi, esp */
  ESI = (ESP);
  /* 11eb3c62 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11eb3c64 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3c6au);
  /* 11eb3c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3c6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3c6f call 0x11eb5120 */
  push32(0x11eb3c74u); f_11eb5120();
  /* 11eb3c74 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3c7b jne 0x11eb3cdf */
  if (!C.zf) goto L_11eb3cdf;
  /* 11eb3c7d mov esi, esp */
  ESI = (ESP);
  /* 11eb3c7f push 0x11ee23f8 */
  push32((uint32_t)(0x11ee23f8u));
  /* 11eb3c84 call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb3c8au);
  /* 11eb3c8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3c8f call 0x11eb5120 */
  push32(0x11eb3c94u); f_11eb5120();
  /* 11eb3c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3c96 je 0x11eb3cb5 */
  if (C.zf) goto L_11eb3cb5;
  /* 11eb3c98 mov esi, esp */
  ESI = (ESP);
  /* 11eb3c9a push 0xa */
  push32((uint32_t)(0xau));
  /* 11eb3c9c call dword ptr [0x11ee5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5480))), 0x11eb3ca2u);
  /* 11eb3ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3ca5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3ca7 call 0x11eb5120 */
  push32(0x11eb3cacu); f_11eb5120();
  /* 11eb3cac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3cb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3cb3 je 0x11eb3cdf */
  if (C.zf) goto L_11eb3cdf;
L_11eb3cb5:;
  /* 11eb3cb5 mov esi, esp */
  ESI = (ESP);
  /* 11eb3cb7 push 0xa */
  push32((uint32_t)(0xau));
  /* 11eb3cb9 call dword ptr [0x11ee54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b0))), 0x11eb3cbfu);
  /* 11eb3cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3cc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3cc4 call 0x11eb5120 */
  push32(0x11eb3cc9u); f_11eb5120();
  /* 11eb3cc9 mov esi, esp */
  ESI = (ESP);
  /* 11eb3ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3ccd push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11eb3ccf call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3cd5u);
  /* 11eb3cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3cd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3cda call 0x11eb5120 */
  push32(0x11eb3cdfu); f_11eb5120();
L_11eb3cdf:;
  /* 11eb3cdf mov esi, esp */
  ESI = (ESP);
  /* 11eb3ce1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11eb3ce3 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3ce9u);
  /* 11eb3ce9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3cec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3cee call 0x11eb5120 */
  push32(0x11eb3cf3u); f_11eb5120();
  /* 11eb3cf3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3cf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3cfa je 0x11eb402f */
  if (C.zf) goto L_11eb402f;
  /* 11eb3d00 mov esi, esp */
  ESI = (ESP);
  /* 11eb3d02 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11eb3d04 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3d0au);
  /* 11eb3d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3d0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3d0f call 0x11eb5120 */
  push32(0x11eb3d14u); f_11eb5120();
  /* 11eb3d14 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3d1b je 0x11eb3d75 */
  if (C.zf) goto L_11eb3d75;
  /* 11eb3d1d mov esi, esp */
  ESI = (ESP);
  /* 11eb3d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3d21 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11eb3d23 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3d29u);
  /* 11eb3d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3d2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3d2e call 0x11eb5120 */
  push32(0x11eb3d33u); f_11eb5120();
  /* 11eb3d33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11eb3d3a jmp 0x11eb3d45 */
  goto L_11eb3d45;
L_11eb3d3c:;
  /* 11eb3d3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb3d3f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3d42 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11eb3d45:;
  /* 11eb3d45 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb3d48 cmp eax, dword ptr [0x11ee2578] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee2578))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3d4e jge 0x11eb3d75 */
  if ((C.sf==C.of)) goto L_11eb3d75;
  /* 11eb3d50 mov esi, esp */
  ESI = (ESP);
  /* 11eb3d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3d54 push 0x11ee2410 */
  push32((uint32_t)(0x11ee2410u));
  /* 11eb3d59 push 0x11ee2598 */
  push32((uint32_t)(0x11ee2598u));
  /* 11eb3d5e push 0x11ee26b8 */
  push32((uint32_t)(0x11ee26b8u));
  /* 11eb3d63 call dword ptr [0x11ee54a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a4))), 0x11eb3d69u);
  /* 11eb3d69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3d6e call 0x11eb5120 */
  push32(0x11eb3d73u); f_11eb5120();
  /* 11eb3d73 jmp 0x11eb3d3c */
  goto L_11eb3d3c;
L_11eb3d75:;
  /* 11eb3d75 mov esi, esp */
  ESI = (ESP);
  /* 11eb3d77 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11eb3d79 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3d7fu);
  /* 11eb3d7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3d82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3d84 call 0x11eb5120 */
  push32(0x11eb3d89u); f_11eb5120();
  /* 11eb3d89 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3d90 je 0x11eb3dde */
  if (C.zf) goto L_11eb3dde;
  /* 11eb3d92 mov esi, esp */
  ESI = (ESP);
  /* 11eb3d94 push 0x11ee26b8 */
  push32((uint32_t)(0x11ee26b8u));
  /* 11eb3d99 call dword ptr [0x11ee54a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54a8))), 0x11eb3d9fu);
  /* 11eb3d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3da2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3da4 call 0x11eb5120 */
  push32(0x11eb3da9u); f_11eb5120();
  /* 11eb3da9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3db0 je 0x11eb3dde */
  if (C.zf) goto L_11eb3dde;
  /* 11eb3db2 mov esi, esp */
  ESI = (ESP);
  /* 11eb3db4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11eb3db6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11eb3db8 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb3dbeu);
  /* 11eb3dbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3dc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3dc3 call 0x11eb5120 */
  push32(0x11eb3dc8u); f_11eb5120();
  /* 11eb3dc8 mov esi, esp */
  ESI = (ESP);
  /* 11eb3dca push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3dcc push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11eb3dce call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3dd4u);
  /* 11eb3dd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3dd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3dd9 call 0x11eb5120 */
  push32(0x11eb3ddeu); f_11eb5120();
L_11eb3dde:;
  /* 11eb3dde mov esi, esp */
  ESI = (ESP);
  /* 11eb3de0 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb3de2 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3de8u);
  /* 11eb3de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3deb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3ded call 0x11eb5120 */
  push32(0x11eb3df2u); f_11eb5120();
  /* 11eb3df2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3df9 jne 0x11eb3f93 */
  if (!C.zf) goto L_11eb3f93;
  /* 11eb3dff mov esi, esp */
  ESI = (ESP);
  /* 11eb3e01 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11eb3e03 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3e09u);
  /* 11eb3e09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3e0e call 0x11eb5120 */
  push32(0x11eb3e13u); f_11eb5120();
  /* 11eb3e13 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3e1a je 0x11eb3f93 */
  if (C.zf) goto L_11eb3f93;
  /* 11eb3e20 mov esi, esp */
  ESI = (ESP);
  /* 11eb3e22 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11eb3e24 call dword ptr [0x11ee54ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54ac))), 0x11eb3e2au);
  /* 11eb3e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3e2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3e2f call 0x11eb5120 */
  push32(0x11eb3e34u); f_11eb5120();
  /* 11eb3e34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3e3b je 0x11eb3f93 */
  if (C.zf) goto L_11eb3f93;
  /* 11eb3e41 mov esi, esp */
  ESI = (ESP);
  /* 11eb3e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3e45 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11eb3e47 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3e4du);
  /* 11eb3e4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3e50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3e52 call 0x11eb5120 */
  push32(0x11eb3e57u); f_11eb5120();
  /* 11eb3e57 mov esi, esp */
  ESI = (ESP);
  /* 11eb3e59 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11eb3e5b call dword ptr [0x11ee54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b0))), 0x11eb3e61u);
  /* 11eb3e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3e64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3e66 call 0x11eb5120 */
  push32(0x11eb3e6bu); f_11eb5120();
  /* 11eb3e6b mov esi, esp */
  ESI = (ESP);
  /* 11eb3e6d push 0x2cec */
  push32((uint32_t)(0x2cecu));
  /* 11eb3e72 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11eb3e74 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb3e7au);
  /* 11eb3e7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3e7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3e7f call 0x11eb5120 */
  push32(0x11eb3e84u); f_11eb5120();
  /* 11eb3e84 mov esi, esp */
  ESI = (ESP);
  /* 11eb3e86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3e88 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11eb3e8a call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3e90u);
  /* 11eb3e90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3e93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3e95 call 0x11eb5120 */
  push32(0x11eb3e9au); f_11eb5120();
  /* 11eb3e9a mov esi, esp */
  ESI = (ESP);
  /* 11eb3e9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb3e9e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11eb3ea0 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb3ea6u);
  /* 11eb3ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3ea9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3eab call 0x11eb5120 */
  push32(0x11eb3eb0u); f_11eb5120();
  /* 11eb3eb0 mov esi, esp */
  ESI = (ESP);
  /* 11eb3eb2 push 0x11ee2408 */
  push32((uint32_t)(0x11ee2408u));
  /* 11eb3eb7 push 0x11ee2410 */
  push32((uint32_t)(0x11ee2410u));
  /* 11eb3ebc call dword ptr [0x11ee54b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b4))), 0x11eb3ec2u);
  /* 11eb3ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3ec5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3ec7 call 0x11eb5120 */
  push32(0x11eb3eccu); f_11eb5120();
  /* 11eb3ecc mov esi, esp */
  ESI = (ESP);
  /* 11eb3ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3ed0 push 0x11ee2408 */
  push32((uint32_t)(0x11ee2408u));
  /* 11eb3ed5 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb3edbu);
  /* 11eb3edb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3ede cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3ee0 call 0x11eb5120 */
  push32(0x11eb3ee5u); f_11eb5120();
  /* 11eb3ee5 mov esi, esp */
  ESI = (ESP);
  /* 11eb3ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb3ee9 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11eb3eee push 0x11ee2620 */
  push32((uint32_t)(0x11ee2620u));
  /* 11eb3ef3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3ef5 call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3efbu);
  /* 11eb3efb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3efe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3f00 call 0x11eb5120 */
  push32(0x11eb3f05u); f_11eb5120();
  /* 11eb3f05 mov esi, esp */
  ESI = (ESP);
  /* 11eb3f07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3f09 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11eb3f0e push 0x11ee2638 */
  push32((uint32_t)(0x11ee2638u));
  /* 11eb3f13 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3f15 call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3f1bu);
  /* 11eb3f1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3f1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3f20 call 0x11eb5120 */
  push32(0x11eb3f25u); f_11eb5120();
  /* 11eb3f25 mov esi, esp */
  ESI = (ESP);
  /* 11eb3f27 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3f29 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11eb3f2b push 0x11ee26c8 */
  push32((uint32_t)(0x11ee26c8u));
  /* 11eb3f30 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3f32 call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3f38u);
  /* 11eb3f38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3f3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3f3d call 0x11eb5120 */
  push32(0x11eb3f42u); f_11eb5120();
  /* 11eb3f42 mov esi, esp */
  ESI = (ESP);
  /* 11eb3f44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3f46 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11eb3f48 push 0x11ee26c0 */
  push32((uint32_t)(0x11ee26c0u));
  /* 11eb3f4d push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3f4f call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3f55u);
  /* 11eb3f55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3f58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3f5a call 0x11eb5120 */
  push32(0x11eb3f5fu); f_11eb5120();
  /* 11eb3f5f mov esi, esp */
  ESI = (ESP);
  /* 11eb3f61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb3f63 push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 11eb3f68 push 0x11ee2630 */
  push32((uint32_t)(0x11ee2630u));
  /* 11eb3f6d push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3f6f call dword ptr [0x11ee54c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c0))), 0x11eb3f75u);
  /* 11eb3f75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3f7a call 0x11eb5120 */
  push32(0x11eb3f7fu); f_11eb5120();
  /* 11eb3f7f mov esi, esp */
  ESI = (ESP);
  /* 11eb3f81 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb3f83 call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb3f89u);
  /* 11eb3f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3f8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3f8e call 0x11eb5120 */
  push32(0x11eb3f93u); f_11eb5120();
L_11eb3f93:;
  /* 11eb3f93 mov esi, esp */
  ESI = (ESP);
  /* 11eb3f95 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb3f97 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3f9du);
  /* 11eb3f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3fa0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3fa2 call 0x11eb5120 */
  push32(0x11eb3fa7u); f_11eb5120();
  /* 11eb3fa7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3fac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3fae jne 0x11eb402f */
  if (!C.zf) goto L_11eb402f;
  /* 11eb3fb0 mov esi, esp */
  ESI = (ESP);
  /* 11eb3fb2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11eb3fb4 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb3fbau);
  /* 11eb3fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3fbf call 0x11eb5120 */
  push32(0x11eb3fc4u); f_11eb5120();
  /* 11eb3fc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb3fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3fcb jne 0x11eb402f */
  if (!C.zf) goto L_11eb402f;
  /* 11eb3fcd mov esi, esp */
  ESI = (ESP);
  /* 11eb3fcf push 0x11ee2408 */
  push32((uint32_t)(0x11ee2408u));
  /* 11eb3fd4 call dword ptr [0x11ee5490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5490))), 0x11eb3fdau);
  /* 11eb3fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3fdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3fdf call 0x11eb5120 */
  push32(0x11eb3fe4u); f_11eb5120();
  /* 11eb3fe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb3fe6 je 0x11eb4005 */
  if (C.zf) goto L_11eb4005;
  /* 11eb3fe8 mov esi, esp */
  ESI = (ESP);
  /* 11eb3fea push 0xc */
  push32((uint32_t)(0xcu));
  /* 11eb3fec call dword ptr [0x11ee5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5480))), 0x11eb3ff2u);
  /* 11eb3ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb3ff5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb3ff7 call 0x11eb5120 */
  push32(0x11eb3ffcu); f_11eb5120();
  /* 11eb3ffc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb4001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb4003 je 0x11eb402f */
  if (C.zf) goto L_11eb402f;
L_11eb4005:;
  /* 11eb4005 mov esi, esp */
  ESI = (ESP);
  /* 11eb4007 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11eb4009 call dword ptr [0x11ee54b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54b0))), 0x11eb400fu);
  /* 11eb400f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4014 call 0x11eb5120 */
  push32(0x11eb4019u); f_11eb5120();
  /* 11eb4019 mov esi, esp */
  ESI = (ESP);
  /* 11eb401b push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb401d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11eb401f call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb4025u);
  /* 11eb4025 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4028 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb402a call 0x11eb5120 */
  push32(0x11eb402fu); f_11eb5120();
L_11eb402f:;
  /* 11eb402f mov esi, esp */
  ESI = (ESP);
  /* 11eb4031 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11eb4033 call dword ptr [0x11ee5480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5480))), 0x11eb4039u);
  /* 11eb4039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb403c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb403e call 0x11eb5120 */
  push32(0x11eb4043u); f_11eb5120();
  /* 11eb4043 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb4048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb404a je 0x11eb4250 */
  if (C.zf) goto L_11eb4250;
  /* 11eb4050 mov esi, esp */
  ESI = (ESP);
  /* 11eb4052 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb4054 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb405au);
  /* 11eb405a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb405d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb405f call 0x11eb5120 */
  push32(0x11eb4064u); f_11eb5120();
  /* 11eb4064 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb4069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb406b jne 0x11eb408e */
  if (!C.zf) goto L_11eb408e;
  /* 11eb406d mov esi, esp */
  ESI = (ESP);
  /* 11eb406f push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb4071 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb4077u);
  /* 11eb4077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb407a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb407c call 0x11eb5120 */
  push32(0x11eb4081u); f_11eb5120();
  /* 11eb4081 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb4086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb4088 je 0x11eb4250 */
  if (C.zf) goto L_11eb4250;
L_11eb408e:;
  /* 11eb408e mov esi, esp */
  ESI = (ESP);
  /* 11eb4090 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb4092 call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb4098u);
  /* 11eb4098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb409b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb409d call 0x11eb5120 */
  push32(0x11eb40a2u); f_11eb5120();
  /* 11eb40a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11eb40a5 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb40a9 ja 0x11eb4217 */
  if ((!C.cf&&!C.zf)) goto L_11eb4217;
  /* 11eb40af mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb40b2 jmp dword ptr [ecx*4 + 0x11eb4685] */
  switch (ECX) {
    case 0: goto L_11eb40b9;
    case 1: goto L_11eb410e;
    case 2: goto L_11eb4169;
    case 3: goto L_11eb41c1;
    default: x86_unimpl("switch@0x11eb40b2 out of table"); return;
  }
L_11eb40b9:;
  /* 11eb40b9 mov edx, dword ptr [0x11ee24d0] */
  EDX = (r32((uint32_t)(0x11ee24d0)));
  /* 11eb40bf mov dword ptr [0x11ee24d0], edx */
  w32((uint32_t)(0x11ee24d0), (EDX));
  /* 11eb40c5 mov eax, dword ptr [0x11ee2520] */
  EAX = (r32((uint32_t)(0x11ee2520)));
  /* 11eb40ca mov dword ptr [0x11ee2520], eax */
  w32((uint32_t)(0x11ee2520), (EAX));
  /* 11eb40cf mov ecx, dword ptr [0x11ee2550] */
  ECX = (r32((uint32_t)(0x11ee2550)));
  /* 11eb40d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb40d8 mov dword ptr [0x11ee2550], ecx */
  w32((uint32_t)(0x11ee2550), (ECX));
  /* 11eb40de mov edx, dword ptr [0x11ee2578] */
  EDX = (r32((uint32_t)(0x11ee2578)));
  /* 11eb40e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb40e7 mov dword ptr [0x11ee2578], edx */
  w32((uint32_t)(0x11ee2578), (EDX));
  /* 11eb40ed mov eax, dword ptr [0x11ee25d0] */
  EAX = (r32((uint32_t)(0x11ee25d0)));
  /* 11eb40f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb40f5 mov dword ptr [0x11ee25d0], eax */
  w32((uint32_t)(0x11ee25d0), (EAX));
  /* 11eb40fa mov ecx, dword ptr [0x11ee25f0] */
  ECX = (r32((uint32_t)(0x11ee25f0)));
  /* 11eb4100 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4103 mov dword ptr [0x11ee25f0], ecx */
  w32((uint32_t)(0x11ee25f0), (ECX));
  /* 11eb4109 jmp 0x11eb4217 */
  goto L_11eb4217;
L_11eb410e:;
  /* 11eb410e mov edx, dword ptr [0x11ee24d0] */
  EDX = (r32((uint32_t)(0x11ee24d0)));
  /* 11eb4114 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4117 mov dword ptr [0x11ee24d0], edx */
  w32((uint32_t)(0x11ee24d0), (EDX));
  /* 11eb411d mov eax, dword ptr [0x11ee2520] */
  EAX = (r32((uint32_t)(0x11ee2520)));
  /* 11eb4122 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4125 mov dword ptr [0x11ee2520], eax */
  w32((uint32_t)(0x11ee2520), (EAX));
  /* 11eb412a mov ecx, dword ptr [0x11ee2550] */
  ECX = (r32((uint32_t)(0x11ee2550)));
  /* 11eb4130 add ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4133 mov dword ptr [0x11ee2550], ecx */
  w32((uint32_t)(0x11ee2550), (ECX));
  /* 11eb4139 mov edx, dword ptr [0x11ee2578] */
  EDX = (r32((uint32_t)(0x11ee2578)));
  /* 11eb413f add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4142 mov dword ptr [0x11ee2578], edx */
  w32((uint32_t)(0x11ee2578), (EDX));
  /* 11eb4148 mov eax, dword ptr [0x11ee25d0] */
  EAX = (r32((uint32_t)(0x11ee25d0)));
  /* 11eb414d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4150 mov dword ptr [0x11ee25d0], eax */
  w32((uint32_t)(0x11ee25d0), (EAX));
  /* 11eb4155 mov ecx, dword ptr [0x11ee25f0] */
  ECX = (r32((uint32_t)(0x11ee25f0)));
  /* 11eb415b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb415e mov dword ptr [0x11ee25f0], ecx */
  w32((uint32_t)(0x11ee25f0), (ECX));
  /* 11eb4164 jmp 0x11eb4217 */
  goto L_11eb4217;
L_11eb4169:;
  /* 11eb4169 mov edx, dword ptr [0x11ee24d0] */
  EDX = (r32((uint32_t)(0x11ee24d0)));
  /* 11eb416f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4172 mov dword ptr [0x11ee24d0], edx */
  w32((uint32_t)(0x11ee24d0), (EDX));
  /* 11eb4178 mov eax, dword ptr [0x11ee2520] */
  EAX = (r32((uint32_t)(0x11ee2520)));
  /* 11eb417d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4180 mov dword ptr [0x11ee2520], eax */
  w32((uint32_t)(0x11ee2520), (EAX));
  /* 11eb4185 mov ecx, dword ptr [0x11ee2550] */
  ECX = (r32((uint32_t)(0x11ee2550)));
  /* 11eb418b add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb418e mov dword ptr [0x11ee2550], ecx */
  w32((uint32_t)(0x11ee2550), (ECX));
  /* 11eb4194 mov edx, dword ptr [0x11ee2578] */
  EDX = (r32((uint32_t)(0x11ee2578)));
  /* 11eb419a add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb419d mov dword ptr [0x11ee2578], edx */
  w32((uint32_t)(0x11ee2578), (EDX));
  /* 11eb41a3 mov eax, dword ptr [0x11ee25d0] */
  EAX = (r32((uint32_t)(0x11ee25d0)));
  /* 11eb41a8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb41ab mov dword ptr [0x11ee25d0], eax */
  w32((uint32_t)(0x11ee25d0), (EAX));
  /* 11eb41b0 mov ecx, dword ptr [0x11ee25f0] */
  ECX = (r32((uint32_t)(0x11ee25f0)));
  /* 11eb41b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb41b9 mov dword ptr [0x11ee25f0], ecx */
  w32((uint32_t)(0x11ee25f0), (ECX));
  /* 11eb41bf jmp 0x11eb4217 */
  goto L_11eb4217;
L_11eb41c1:;
  /* 11eb41c1 mov edx, dword ptr [0x11ee24d0] */
  EDX = (r32((uint32_t)(0x11ee24d0)));
  /* 11eb41c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb41ca mov dword ptr [0x11ee24d0], edx */
  w32((uint32_t)(0x11ee24d0), (EDX));
  /* 11eb41d0 mov eax, dword ptr [0x11ee2520] */
  EAX = (r32((uint32_t)(0x11ee2520)));
  /* 11eb41d5 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb41d8 mov dword ptr [0x11ee2520], eax */
  w32((uint32_t)(0x11ee2520), (EAX));
  /* 11eb41dd mov ecx, dword ptr [0x11ee2550] */
  ECX = (r32((uint32_t)(0x11ee2550)));
  /* 11eb41e3 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb41e6 mov dword ptr [0x11ee2550], ecx */
  w32((uint32_t)(0x11ee2550), (ECX));
  /* 11eb41ec mov edx, dword ptr [0x11ee2578] */
  EDX = (r32((uint32_t)(0x11ee2578)));
  /* 11eb41f2 add edx, 0x1e */
  { uint32_t _a=(EDX),_b=(0x1eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb41f5 mov dword ptr [0x11ee2578], edx */
  w32((uint32_t)(0x11ee2578), (EDX));
  /* 11eb41fb mov eax, dword ptr [0x11ee25d0] */
  EAX = (r32((uint32_t)(0x11ee25d0)));
  /* 11eb4200 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4203 mov dword ptr [0x11ee25d0], eax */
  w32((uint32_t)(0x11ee25d0), (EAX));
  /* 11eb4208 mov ecx, dword ptr [0x11ee25f0] */
  ECX = (r32((uint32_t)(0x11ee25f0)));
  /* 11eb420e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4211 mov dword ptr [0x11ee25f0], ecx */
  w32((uint32_t)(0x11ee25f0), (ECX));
L_11eb4217:;
  /* 11eb4217 mov esi, esp */
  ESI = (ESP);
  /* 11eb4219 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb421b call dword ptr [0x11ee5460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5460))), 0x11eb4221u);
  /* 11eb4221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4226 call 0x11eb5120 */
  push32(0x11eb422bu); f_11eb5120();
  /* 11eb422b mov edx, 5 */
  EDX = (0x5u);
  /* 11eb4230 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb4232 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11eb4235 imul edx, edx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x8fcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb423b mov esi, esp */
  ESI = (ESP);
  /* 11eb423d push edx */
  push32((uint32_t)(EDX));
  /* 11eb423e push 0xd */
  push32((uint32_t)(0xdu));
  /* 11eb4240 call dword ptr [0x11ee5478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5478))), 0x11eb4246u);
  /* 11eb4246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb424b call 0x11eb5120 */
  push32(0x11eb4250u); f_11eb5120();
L_11eb4250:;
  /* 11eb4250 mov esi, esp */
  ESI = (ESP);
  /* 11eb4252 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb4254 call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb425au);
  /* 11eb425a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb425d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb425f call 0x11eb5120 */
  push32(0x11eb4264u); f_11eb5120();
  /* 11eb4264 mov esi, esp */
  ESI = (ESP);
  /* 11eb4266 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb4268 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb426a push 0x11ee2670 */
  push32((uint32_t)(0x11ee2670u));
  /* 11eb426f call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb4275u);
  /* 11eb4275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4278 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb427a call 0x11eb5120 */
  push32(0x11eb427fu); f_11eb5120();
  /* 11eb427f mov esi, esp */
  ESI = (ESP);
  /* 11eb4281 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb4283 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb4285 push 0x11ee2668 */
  push32((uint32_t)(0x11ee2668u));
  /* 11eb428a call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb4290u);
  /* 11eb4290 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4295 call 0x11eb5120 */
  push32(0x11eb429au); f_11eb5120();
  /* 11eb429a mov esi, esp */
  ESI = (ESP);
  /* 11eb429c push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb429e push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb42a0 push 0x11ee2678 */
  push32((uint32_t)(0x11ee2678u));
  /* 11eb42a5 call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb42abu);
  /* 11eb42ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb42ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb42b0 call 0x11eb5120 */
  push32(0x11eb42b5u); f_11eb5120();
  /* 11eb42b5 mov esi, esp */
  ESI = (ESP);
  /* 11eb42b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb42b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb42bb push 0x11ee2428 */
  push32((uint32_t)(0x11ee2428u));
  /* 11eb42c0 call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb42c6u);
  /* 11eb42c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb42c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb42cb call 0x11eb5120 */
  push32(0x11eb42d0u); f_11eb5120();
  /* 11eb42d0 mov esi, esp */
  ESI = (ESP);
  /* 11eb42d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb42d4 call dword ptr [0x11ee54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c8))), 0x11eb42dau);
  /* 11eb42da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb42dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb42df call 0x11eb5120 */
  push32(0x11eb42e4u); f_11eb5120();
  /* 11eb42e4 mov esi, esp */
  ESI = (ESP);
  /* 11eb42e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb42e8 call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb42eeu);
  /* 11eb42ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb42f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb42f3 call 0x11eb5120 */
  push32(0x11eb42f8u); f_11eb5120();
  /* 11eb42f8 mov esi, esp */
  ESI = (ESP);
  /* 11eb42fa push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb42fc call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb4302u);
  /* 11eb4302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4307 call 0x11eb5120 */
  push32(0x11eb430cu); f_11eb5120();
  /* 11eb430c mov esi, esp */
  ESI = (ESP);
  /* 11eb430e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb4310 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb4312 push 0x11ee2670 */
  push32((uint32_t)(0x11ee2670u));
  /* 11eb4317 call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb431du);
  /* 11eb431d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4320 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4322 call 0x11eb5120 */
  push32(0x11eb4327u); f_11eb5120();
  /* 11eb4327 mov esi, esp */
  ESI = (ESP);
  /* 11eb4329 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb432b push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb432d push 0x11ee2668 */
  push32((uint32_t)(0x11ee2668u));
  /* 11eb4332 call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb4338u);
  /* 11eb4338 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb433b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb433d call 0x11eb5120 */
  push32(0x11eb4342u); f_11eb5120();
  /* 11eb4342 mov esi, esp */
  ESI = (ESP);
  /* 11eb4344 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb4346 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb4348 push 0x11ee2678 */
  push32((uint32_t)(0x11ee2678u));
  /* 11eb434d call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb4353u);
  /* 11eb4353 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4358 call 0x11eb5120 */
  push32(0x11eb435du); f_11eb5120();
  /* 11eb435d mov esi, esp */
  ESI = (ESP);
  /* 11eb435f push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb4361 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb4363 push 0x11ee2428 */
  push32((uint32_t)(0x11ee2428u));
  /* 11eb4368 call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb436eu);
  /* 11eb436e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4373 call 0x11eb5120 */
  push32(0x11eb4378u); f_11eb5120();
  /* 11eb4378 mov esi, esp */
  ESI = (ESP);
  /* 11eb437a push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb437c call dword ptr [0x11ee54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c8))), 0x11eb4382u);
  /* 11eb4382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4385 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4387 call 0x11eb5120 */
  push32(0x11eb438cu); f_11eb5120();
  /* 11eb438c mov esi, esp */
  ESI = (ESP);
  /* 11eb438e push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb4390 call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb4396u);
  /* 11eb4396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4399 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb439b call 0x11eb5120 */
  push32(0x11eb43a0u); f_11eb5120();
  /* 11eb43a0 mov esi, esp */
  ESI = (ESP);
  /* 11eb43a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb43a4 push 0x11ee2650 */
  push32((uint32_t)(0x11ee2650u));
  /* 11eb43a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb43ab call dword ptr [0x11ee54cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54cc))), 0x11eb43b1u);
  /* 11eb43b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb43b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb43b6 call 0x11eb5120 */
  push32(0x11eb43bbu); f_11eb5120();
  /* 11eb43bb mov esi, esp */
  ESI = (ESP);
  /* 11eb43bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb43bf call dword ptr [0x11ee5470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5470))), 0x11eb43c5u);
  /* 11eb43c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb43c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb43ca call 0x11eb5120 */
  push32(0x11eb43cfu); f_11eb5120();
  /* 11eb43cf mov esi, esp */
  ESI = (ESP);
  /* 11eb43d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb43d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb43d5 push 0x11ee2640 */
  push32((uint32_t)(0x11ee2640u));
  /* 11eb43da call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb43e0u);
  /* 11eb43e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb43e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb43e5 call 0x11eb5120 */
  push32(0x11eb43eau); f_11eb5120();
  /* 11eb43ea mov esi, esp */
  ESI = (ESP);
  /* 11eb43ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb43ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb43f0 push 0x11ee2648 */
  push32((uint32_t)(0x11ee2648u));
  /* 11eb43f5 call dword ptr [0x11ee54c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c4))), 0x11eb43fbu);
  /* 11eb43fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb43fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4400 call 0x11eb5120 */
  push32(0x11eb4405u); f_11eb5120();
  /* 11eb4405 mov esi, esp */
  ESI = (ESP);
  /* 11eb4407 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb4409 call dword ptr [0x11ee54c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54c8))), 0x11eb440fu);
  /* 11eb440f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4412 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4414 call 0x11eb5120 */
  push32(0x11eb4419u); f_11eb5120();
  /* 11eb4419 mov esi, esp */
  ESI = (ESP);
  /* 11eb441b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb441d push 0x11ee2650 */
  push32((uint32_t)(0x11ee2650u));
  /* 11eb4422 call dword ptr [0x11ee5468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5468))), 0x11eb4428u);
  /* 11eb4428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb442b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb442d call 0x11eb5120 */
  push32(0x11eb4432u); f_11eb5120();
  /* 11eb4432 mov esi, esp */
  ESI = (ESP);
  /* 11eb4434 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11eb4436 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb443cu);
  /* 11eb443c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb443f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4441 call 0x11eb5120 */
  push32(0x11eb4446u); f_11eb5120();
  /* 11eb4446 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb444b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb444d je 0x11eb44c1 */
  if (C.zf) goto L_11eb44c1;
  /* 11eb444f mov esi, esp */
  ESI = (ESP);
  /* 11eb4451 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb4453 call dword ptr [0x11ee54d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54d0))), 0x11eb4459u);
  /* 11eb4459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb445c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb445e call 0x11eb5120 */
  push32(0x11eb4463u); f_11eb5120();
  /* 11eb4463 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb4468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb446a je 0x11eb44c1 */
  if (C.zf) goto L_11eb44c1;
  /* 11eb446c mov esi, esp */
  ESI = (ESP);
  /* 11eb446e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb4470 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11eb4472 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb4478u);
  /* 11eb4478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb447b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb447d call 0x11eb5120 */
  push32(0x11eb4482u); f_11eb5120();
  /* 11eb4482 mov esi, esp */
  ESI = (ESP);
  /* 11eb4484 push 0x11edd388 */
  push32((uint32_t)(0x11edd388u));
  /* 11eb4489 call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb448fu);
  /* 11eb448f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4492 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4494 call 0x11eb5120 */
  push32(0x11eb4499u); f_11eb5120();
  /* 11eb4499 mov esi, esp */
  ESI = (ESP);
  /* 11eb449b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11eb449d call dword ptr [0x11ee5458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5458))), 0x11eb44a3u);
  /* 11eb44a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb44a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb44a8 call 0x11eb5120 */
  push32(0x11eb44adu); f_11eb5120();
  /* 11eb44ad mov esi, esp */
  ESI = (ESP);
  /* 11eb44af push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11eb44b1 call dword ptr [0x11ee5454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5454))), 0x11eb44b7u);
  /* 11eb44b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb44ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb44bc call 0x11eb5120 */
  push32(0x11eb44c1u); f_11eb5120();
L_11eb44c1:;
  /* 11eb44c1 mov esi, esp */
  ESI = (ESP);
  /* 11eb44c3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11eb44c5 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb44cbu);
  /* 11eb44cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb44ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb44d0 call 0x11eb5120 */
  push32(0x11eb44d5u); f_11eb5120();
  /* 11eb44d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb44da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb44dc jne 0x11eb45b7 */
  if (!C.zf) goto L_11eb45b7;
  /* 11eb44e2 mov esi, esp */
  ESI = (ESP);
  /* 11eb44e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb44e6 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb44ecu);
  /* 11eb44ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb44ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb44f1 call 0x11eb5120 */
  push32(0x11eb44f6u); f_11eb5120();
  /* 11eb44f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb44fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb44fd jne 0x11eb45b7 */
  if (!C.zf) goto L_11eb45b7;
  /* 11eb4503 mov esi, esp */
  ESI = (ESP);
  /* 11eb4505 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb4507 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb450du);
  /* 11eb450d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4510 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4512 call 0x11eb5120 */
  push32(0x11eb4517u); f_11eb5120();
  /* 11eb4517 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb451c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb451e jne 0x11eb45b7 */
  if (!C.zf) goto L_11eb45b7;
  /* 11eb4524 mov esi, esp */
  ESI = (ESP);
  /* 11eb4526 push 5 */
  push32((uint32_t)(0x5u));
  /* 11eb4528 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb452eu);
  /* 11eb452e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4533 call 0x11eb5120 */
  push32(0x11eb4538u); f_11eb5120();
  /* 11eb4538 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb453d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb453f jne 0x11eb45b7 */
  if (!C.zf) goto L_11eb45b7;
  /* 11eb4541 mov esi, esp */
  ESI = (ESP);
  /* 11eb4543 push 6 */
  push32((uint32_t)(0x6u));
  /* 11eb4545 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb454bu);
  /* 11eb454b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb454e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4550 call 0x11eb5120 */
  push32(0x11eb4555u); f_11eb5120();
  /* 11eb4555 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb455a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb455c jne 0x11eb45b7 */
  if (!C.zf) goto L_11eb45b7;
  /* 11eb455e mov esi, esp */
  ESI = (ESP);
  /* 11eb4560 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11eb4562 call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb4568u);
  /* 11eb4568 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb456b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb456d call 0x11eb5120 */
  push32(0x11eb4572u); f_11eb5120();
  /* 11eb4572 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb4577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb4579 je 0x11eb45b7 */
  if (C.zf) goto L_11eb45b7;
  /* 11eb457b mov esi, esp */
  ESI = (ESP);
  /* 11eb457d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb457f push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11eb4581 call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb4587u);
  /* 11eb4587 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb458a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb458c call 0x11eb5120 */
  push32(0x11eb4591u); f_11eb5120();
  /* 11eb4591 mov esi, esp */
  ESI = (ESP);
  /* 11eb4593 push 0x11edd380 */
  push32((uint32_t)(0x11edd380u));
  /* 11eb4598 call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb459eu);
  /* 11eb459e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb45a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb45a3 call 0x11eb5120 */
  push32(0x11eb45a8u); f_11eb5120();
  /* 11eb45a8 mov esi, esp */
  ESI = (ESP);
  /* 11eb45aa call dword ptr [0x11ee54d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54d4))), 0x11eb45b0u);
  /* 11eb45b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb45b2 call 0x11eb5120 */
  push32(0x11eb45b7u); f_11eb5120();
L_11eb45b7:;
  /* 11eb45b7 mov esi, esp */
  ESI = (ESP);
  /* 11eb45b9 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11eb45bb call dword ptr [0x11ee544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee544c))), 0x11eb45c1u);
  /* 11eb45c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb45c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb45c6 call 0x11eb5120 */
  push32(0x11eb45cbu); f_11eb5120();
  /* 11eb45cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb45d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb45d2 je 0x11eb4664 */
  if (C.zf) goto L_11eb4664;
  /* 11eb45d8 mov esi, esp */
  ESI = (ESP);
  /* 11eb45da push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb45dc call dword ptr [0x11ee54d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54d0))), 0x11eb45e2u);
  /* 11eb45e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb45e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb45e7 call 0x11eb5120 */
  push32(0x11eb45ecu); f_11eb5120();
  /* 11eb45ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb45f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb45f3 je 0x11eb4664 */
  if (C.zf) goto L_11eb4664;
  /* 11eb45f5 mov esi, esp */
  ESI = (ESP);
  /* 11eb45f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb45f9 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11eb45fb call dword ptr [0x11ee5450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5450))), 0x11eb4601u);
  /* 11eb4601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4604 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4606 call 0x11eb5120 */
  push32(0x11eb460bu); f_11eb5120();
  /* 11eb460b mov esi, esp */
  ESI = (ESP);
  /* 11eb460d push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb460f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb4611 call dword ptr [0x11ee54d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54d8))), 0x11eb4617u);
  /* 11eb4617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb461a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb461c call 0x11eb5120 */
  push32(0x11eb4621u); f_11eb5120();
  /* 11eb4621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb4623 jle 0x11eb463e */
  if ((C.zf||C.sf!=C.of)) goto L_11eb463e;
  /* 11eb4625 mov esi, esp */
  ESI = (ESP);
  /* 11eb4627 push 0x11edd378 */
  push32((uint32_t)(0x11edd378u));
  /* 11eb462c call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb4632u);
  /* 11eb4632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb4635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4637 call 0x11eb5120 */
  push32(0x11eb463cu); f_11eb5120();
  /* 11eb463c jmp 0x11eb4655 */
  goto L_11eb4655;
L_11eb463e:;
  /* 11eb463e mov esi, esp */
  ESI = (ESP);
  /* 11eb4640 push 0x11edd36c */
  push32((uint32_t)(0x11edd36cu));
  /* 11eb4645 call dword ptr [0x11ee5484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5484))), 0x11eb464bu);
  /* 11eb464b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb464e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb4650 call 0x11eb5120 */
  push32(0x11eb4655u); f_11eb5120();
L_11eb4655:;
  /* 11eb4655 mov esi, esp */
  ESI = (ESP);
  /* 11eb4657 call dword ptr [0x11ee54dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee54dc))), 0x11eb465du);
  /* 11eb465d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb465f call 0x11eb5120 */
  push32(0x11eb4664u); f_11eb5120();
L_11eb4664:;
  /* 11eb4664 pop edi */
  EDI = (pop32());
  /* 11eb4665 pop esi */
  ESI = (pop32());
  /* 11eb4666 pop ebx */
  EBX = (pop32());
  /* 11eb4667 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb466a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb466c call 0x11eb5120 */
  push32(0x11eb4671u); f_11eb5120();
  /* 11eb4671 mov esp, ebp */
  ESP = (EBP);
  /* 11eb4673 pop ebp */
  EBP = (pop32());
  /* 11eb4674 ret  */
  ESPCHK(0x11eb20f0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11eb5120 (56 bytes, 28 insns) */
void f_11eb5120(void) {
  FTRACE(0x11eb5120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5120 jne 0x11eb5123 */
  if (!C.zf) goto L_11eb5123;
  /* 11eb5122 ret  */
  ESPCHK(0x11eb5120u, _esp0);
  ESP += 4; return;
L_11eb5123:;
  /* 11eb5123 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5124 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5126 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb5129 push eax */
  push32((uint32_t)(EAX));
  /* 11eb512a push edx */
  push32((uint32_t)(EDX));
  /* 11eb512b push ebx */
  push32((uint32_t)(EBX));
  /* 11eb512c push esi */
  push32((uint32_t)(ESI));
  /* 11eb512d push edi */
  push32((uint32_t)(EDI));
  /* 11eb512e push 0x11edd468 */
  push32((uint32_t)(0x11edd468u));
  /* 11eb5133 push 0x11edd464 */
  push32((uint32_t)(0x11edd464u));
  /* 11eb5138 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11eb513a push 0x11edd454 */
  push32((uint32_t)(0x11edd454u));
  /* 11eb513f push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb5141 call 0x11eb54f0 */
  push32(0x11eb5146u); f_11eb54f0();
  /* 11eb5146 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5149 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb514c jne 0x11eb514f */
  if (!C.zf) goto L_11eb514f;
  /* 11eb514e int3  */
  x86_unimpl("int3 @ 0x11eb514e");
L_11eb514f:;
  /* 11eb514f pop edi */
  EDI = (pop32());
  /* 11eb5150 pop esi */
  ESI = (pop32());
  /* 11eb5151 pop ebx */
  EBX = (pop32());
  /* 11eb5152 pop edx */
  EDX = (pop32());
  /* 11eb5153 pop eax */
  EAX = (pop32());
  /* 11eb5154 mov esp, ebp */
  ESP = (EBP);
  /* 11eb5156 pop ebp */
  EBP = (pop32());
  /* 11eb5157 ret  */
  ESPCHK(0x11eb5120u, _esp0);
  ESP += 4; return;
}

/* FUN_10005160 @ 0x11eb5160 (313 bytes, 78 insns) */
void f_11eb5160(void) {
  FTRACE(0x11eb5160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5160 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5161 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5163 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5167 jne 0x11eb5227 */
  if (!C.zf) goto L_11eb5227;
  /* 11eb516d call dword ptr [0x11ee5384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5384))), 0x11eb5173u);
  /* 11eb5173 mov dword ptr [0x11ee2788], eax */
  w32((uint32_t)(0x11ee2788), (EAX));
  /* 11eb5178 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb517a call 0x11eb8c20 */
  push32(0x11eb517fu); f_11eb8c20();
  /* 11eb517f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb5184 jne 0x11eb518d */
  if (!C.zf) goto L_11eb518d;
  /* 11eb5186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5188 jmp 0x11eb5295 */
  goto L_11eb5295;
L_11eb518d:;
  /* 11eb518d mov eax, dword ptr [0x11ee2788] */
  EAX = (r32((uint32_t)(0x11ee2788)));
  /* 11eb5192 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11eb5195 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb519a mov dword ptr [0x11ee2794], eax */
  w32((uint32_t)(0x11ee2794), (EAX));
  /* 11eb519f mov ecx, dword ptr [0x11ee2788] */
  ECX = (r32((uint32_t)(0x11ee2788)));
  /* 11eb51a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb51ab mov dword ptr [0x11ee2790], ecx */
  w32((uint32_t)(0x11ee2790), (ECX));
  /* 11eb51b1 mov edx, dword ptr [0x11ee2790] */
  EDX = (r32((uint32_t)(0x11ee2790)));
  /* 11eb51b7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11eb51ba add edx, dword ptr [0x11ee2794] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee2794))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb51c0 mov dword ptr [0x11ee278c], edx */
  w32((uint32_t)(0x11ee278c), (EDX));
  /* 11eb51c6 mov eax, dword ptr [0x11ee2788] */
  EAX = (r32((uint32_t)(0x11ee2788)));
  /* 11eb51cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11eb51ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb51d3 mov dword ptr [0x11ee2788], eax */
  w32((uint32_t)(0x11ee2788), (EAX));
  /* 11eb51d8 call 0x11eb5d90 */
  push32(0x11eb51ddu); f_11eb5d90();
  /* 11eb51dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb51df jne 0x11eb51ed */
  if (!C.zf) goto L_11eb51ed;
  /* 11eb51e1 call 0x11eb8c70 */
  push32(0x11eb51e6u); f_11eb8c70();
  /* 11eb51e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb51e8 jmp 0x11eb5295 */
  goto L_11eb5295;
L_11eb51ed:;
  /* 11eb51ed call dword ptr [0x11ee5380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5380))), 0x11eb51f3u);
  /* 11eb51f3 mov dword ptr [0x11ee42cc], eax */
  w32((uint32_t)(0x11ee42cc), (EAX));
  /* 11eb51f8 call 0x11eb8a00 */
  push32(0x11eb51fdu); f_11eb8a00();
  /* 11eb51fd mov dword ptr [0x11ee2770], eax */
  w32((uint32_t)(0x11ee2770), (EAX));
  /* 11eb5202 call 0x11eb6040 */
  push32(0x11eb5207u); f_11eb6040();
  /* 11eb5207 call 0x11eb84f0 */
  push32(0x11eb520cu); f_11eb84f0();
  /* 11eb520c call 0x11eb83a0 */
  push32(0x11eb5211u); f_11eb83a0();
  /* 11eb5211 call 0x11eb5b90 */
  push32(0x11eb5216u); f_11eb5b90();
  /* 11eb5216 mov ecx, dword ptr [0x11ee276c] */
  ECX = (r32((uint32_t)(0x11ee276c)));
  /* 11eb521c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb521f mov dword ptr [0x11ee276c], ecx */
  w32((uint32_t)(0x11ee276c), (ECX));
  /* 11eb5225 jmp 0x11eb5290 */
  goto L_11eb5290;
L_11eb5227:;
  /* 11eb5227 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb522b jne 0x11eb5280 */
  if (!C.zf) goto L_11eb5280;
  /* 11eb522d cmp dword ptr [0x11ee276c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee276c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5234 jle 0x11eb527a */
  if ((C.zf||C.sf!=C.of)) goto L_11eb527a;
  /* 11eb5236 mov edx, dword ptr [0x11ee276c] */
  EDX = (r32((uint32_t)(0x11ee276c)));
  /* 11eb523c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb523f mov dword ptr [0x11ee276c], edx */
  w32((uint32_t)(0x11ee276c), (EDX));
  /* 11eb5245 cmp dword ptr [0x11ee27c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb524c jne 0x11eb5253 */
  if (!C.zf) goto L_11eb5253;
  /* 11eb524e call 0x11eb5c10 */
  push32(0x11eb5253u); f_11eb5c10();
L_11eb5253:;
  /* 11eb5253 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11eb5255 call 0x11eb7940 */
  push32(0x11eb525au); f_11eb7940();
  /* 11eb525a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb525d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb5262 je 0x11eb5269 */
  if (C.zf) goto L_11eb5269;
  /* 11eb5264 call 0x11eb8250 */
  push32(0x11eb5269u); f_11eb8250();
L_11eb5269:;
  /* 11eb5269 call 0x11eb6370 */
  push32(0x11eb526eu); f_11eb6370();
  /* 11eb526e call 0x11eb5e20 */
  push32(0x11eb5273u); f_11eb5e20();
  /* 11eb5273 call 0x11eb8c70 */
  push32(0x11eb5278u); f_11eb8c70();
  /* 11eb5278 jmp 0x11eb527e */
  goto L_11eb527e;
L_11eb527a:;
  /* 11eb527a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb527c jmp 0x11eb5295 */
  goto L_11eb5295;
L_11eb527e:;
  /* 11eb527e jmp 0x11eb5290 */
  goto L_11eb5290;
L_11eb5280:;
  /* 11eb5280 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5284 jne 0x11eb5290 */
  if (!C.zf) goto L_11eb5290;
  /* 11eb5286 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb5288 call 0x11eb5f10 */
  push32(0x11eb528du); f_11eb5f10();
  /* 11eb528d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5290:;
  /* 11eb5290 mov eax, 1 */
  EAX = (0x1u);
L_11eb5295:;
  /* 11eb5295 pop ebp */
  EBP = (pop32());
  /* 11eb5296 ret 0xc */
  ESPCHK(0x11eb5160u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11eb52a0 (243 bytes, 86 insns) */
void f_11eb52a0(void) {
  FTRACE(0x11eb52a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb52a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb52a1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb52a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb52a4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11eb52ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb52af jne 0x11eb52c1 */
  if (!C.zf) goto L_11eb52c1;
  /* 11eb52b1 cmp dword ptr [0x11ee276c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee276c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb52b8 jne 0x11eb52c1 */
  if (!C.zf) goto L_11eb52c1;
  /* 11eb52ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb52bc jmp 0x11eb538d */
  goto L_11eb538d;
L_11eb52c1:;
  /* 11eb52c1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb52c5 je 0x11eb52cd */
  if (C.zf) goto L_11eb52cd;
  /* 11eb52c7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb52cb jne 0x11eb530f */
  if (!C.zf) goto L_11eb530f;
L_11eb52cd:;
  /* 11eb52cd cmp dword ptr [0x11ee42dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb52d4 je 0x11eb52eb */
  if (C.zf) goto L_11eb52eb;
  /* 11eb52d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb52d9 push eax */
  push32((uint32_t)(EAX));
  /* 11eb52da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb52dd push ecx */
  push32((uint32_t)(ECX));
  /* 11eb52de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb52e1 push edx */
  push32((uint32_t)(EDX));
  /* 11eb52e2 call dword ptr [0x11ee42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee42dc))), 0x11eb52e8u);
  /* 11eb52e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb52eb:;
  /* 11eb52eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb52ef je 0x11eb5305 */
  if (C.zf) goto L_11eb5305;
  /* 11eb52f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb52f4 push eax */
  push32((uint32_t)(EAX));
  /* 11eb52f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb52f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb52f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb52fc push edx */
  push32((uint32_t)(EDX));
  /* 11eb52fd call 0x11eb5160 */
  push32(0x11eb5302u); f_11eb5160();
  /* 11eb5302 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb5305:;
  /* 11eb5305 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5309 jne 0x11eb530f */
  if (!C.zf) goto L_11eb530f;
  /* 11eb530b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb530d jmp 0x11eb538d */
  goto L_11eb538d;
L_11eb530f:;
  /* 11eb530f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb5312 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5313 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb5316 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb531a push edx */
  push32((uint32_t)(EDX));
  /* 11eb531b call 0x11eb100a */
  push32(0x11eb5320u); f_11eb100a();
  /* 11eb5320 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb5323 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5327 jne 0x11eb533e */
  if (!C.zf) goto L_11eb533e;
  /* 11eb5329 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb532d jne 0x11eb533e */
  if (!C.zf) goto L_11eb533e;
  /* 11eb532f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb5332 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5333 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb5335 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5338 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5339 call 0x11eb5160 */
  push32(0x11eb533eu); f_11eb5160();
L_11eb533e:;
  /* 11eb533e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5342 je 0x11eb534a */
  if (C.zf) goto L_11eb534a;
  /* 11eb5344 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5348 jne 0x11eb538a */
  if (!C.zf) goto L_11eb538a;
L_11eb534a:;
  /* 11eb534a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb534d push edx */
  push32((uint32_t)(EDX));
  /* 11eb534e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb5351 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5355 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5356 call 0x11eb5160 */
  push32(0x11eb535bu); f_11eb5160();
  /* 11eb535b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb535d jne 0x11eb5366 */
  if (!C.zf) goto L_11eb5366;
  /* 11eb535f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11eb5366:;
  /* 11eb5366 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb536a je 0x11eb538a */
  if (C.zf) goto L_11eb538a;
  /* 11eb536c cmp dword ptr [0x11ee42dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5373 je 0x11eb538a */
  if (C.zf) goto L_11eb538a;
  /* 11eb5375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb5378 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb537c push eax */
  push32((uint32_t)(EAX));
  /* 11eb537d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5380 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5381 call dword ptr [0x11ee42dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee42dc))), 0x11eb5387u);
  /* 11eb5387 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb538a:;
  /* 11eb538a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11eb538d:;
  /* 11eb538d mov esp, ebp */
  ESP = (EBP);
  /* 11eb538f pop ebp */
  EBP = (pop32());
  /* 11eb5390 ret 0xc */
  ESPCHK(0x11eb52a0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11eb53a0 (58 bytes, 18 insns) */
void f_11eb53a0(void) {
  FTRACE(0x11eb53a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb53a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb53a1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb53a3 cmp dword ptr [0x11ee2778], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2778))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb53aa je 0x11eb53be */
  if (C.zf) goto L_11eb53be;
  /* 11eb53ac cmp dword ptr [0x11ee2778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb53b3 jne 0x11eb53c3 */
  if (!C.zf) goto L_11eb53c3;
  /* 11eb53b5 cmp dword ptr [0x11ee277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb53bc jne 0x11eb53c3 */
  if (!C.zf) goto L_11eb53c3;
L_11eb53be:;
  /* 11eb53be call 0x11eb8d10 */
  push32(0x11eb53c3u); f_11eb8d10();
L_11eb53c3:;
  /* 11eb53c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb53c6 push eax */
  push32((uint32_t)(EAX));
  /* 11eb53c7 call 0x11eb8d60 */
  push32(0x11eb53ccu); f_11eb8d60();
  /* 11eb53cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb53cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 11eb53d4 call dword ptr [0x11ee0a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee0a30))), 0x11eb53dau);
  /* 11eb53da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb53dd pop ebp */
  EBP = (pop32());
  /* 11eb53de ret  */
  ESPCHK(0x11eb53a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053e0 @ 0x11eb53e0 (11 bytes, 5 insns) */
void f_11eb53e0(void) {
  FTRACE(0x11eb53e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb53e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb53e1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb53e3 call dword ptr [0x11ee5388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5388))), 0x11eb53e9u);
  /* 11eb53e9 pop ebp */
  EBP = (pop32());
  /* 11eb53ea ret  */
  ESPCHK(0x11eb53e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x11eb53f0 (87 bytes, 30 insns) */
void f_11eb53f0(void) {
  FTRACE(0x11eb53f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb53f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb53f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb53f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb53f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb53f8 jl 0x11eb5400 */
  if ((C.sf!=C.of)) goto L_11eb5400;
  /* 11eb53fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb53fe jl 0x11eb5405 */
  if ((C.sf!=C.of)) goto L_11eb5405;
L_11eb5400:;
  /* 11eb5400 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5403 jmp 0x11eb5443 */
  goto L_11eb5443;
L_11eb5405:;
  /* 11eb5405 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5409 jne 0x11eb5417 */
  if (!C.zf) goto L_11eb5417;
  /* 11eb540b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb540e mov eax, dword ptr [eax*4 + 0x11ee0a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11ee0a38)));
  /* 11eb5415 jmp 0x11eb5443 */
  goto L_11eb5443;
L_11eb5417:;
  /* 11eb5417 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb541a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb541d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb541f je 0x11eb5426 */
  if (C.zf) goto L_11eb5426;
  /* 11eb5421 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5424 jmp 0x11eb5443 */
  goto L_11eb5443;
L_11eb5426:;
  /* 11eb5426 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5429 mov eax, dword ptr [edx*4 + 0x11ee0a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee0a38)));
  /* 11eb5430 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb5433 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5436 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb5439 mov dword ptr [ecx*4 + 0x11ee0a38], edx */
  w32((uint32_t)(ECX*4 + 0x11ee0a38), (EDX));
  /* 11eb5440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11eb5443:;
  /* 11eb5443 mov esp, ebp */
  ESP = (EBP);
  /* 11eb5445 pop ebp */
  EBP = (pop32());
  /* 11eb5446 ret  */
  ESPCHK(0x11eb53f0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11eb5450 (126 bytes, 38 insns) */
void f_11eb5450(void) {
  FTRACE(0x11eb5450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5450 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5451 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5453 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5454 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5458 jl 0x11eb5460 */
  if ((C.sf!=C.of)) goto L_11eb5460;
  /* 11eb545a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb545e jl 0x11eb5467 */
  if ((C.sf!=C.of)) goto L_11eb5467;
L_11eb5460:;
  /* 11eb5460 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11eb5465 jmp 0x11eb54ca */
  goto L_11eb54ca;
L_11eb5467:;
  /* 11eb5467 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb546b jne 0x11eb5479 */
  if (!C.zf) goto L_11eb5479;
  /* 11eb546d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5470 mov eax, dword ptr [eax*4 + 0x11ee0a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11ee0a44)));
  /* 11eb5477 jmp 0x11eb54ca */
  goto L_11eb54ca;
L_11eb5479:;
  /* 11eb5479 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb547c mov edx, dword ptr [ecx*4 + 0x11ee0a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0a44)));
  /* 11eb5483 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb5486 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb548a jne 0x11eb54a0 */
  if (!C.zf) goto L_11eb54a0;
  /* 11eb548c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11eb548e call dword ptr [0x11ee538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee538c))), 0x11eb5494u);
  /* 11eb5494 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5497 mov dword ptr [ecx*4 + 0x11ee0a44], eax */
  w32((uint32_t)(ECX*4 + 0x11ee0a44), (EAX));
  /* 11eb549e jmp 0x11eb54c7 */
  goto L_11eb54c7;
L_11eb54a0:;
  /* 11eb54a0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb54a4 jne 0x11eb54ba */
  if (!C.zf) goto L_11eb54ba;
  /* 11eb54a6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11eb54a8 call dword ptr [0x11ee538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee538c))), 0x11eb54aeu);
  /* 11eb54ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb54b1 mov dword ptr [edx*4 + 0x11ee0a44], eax */
  w32((uint32_t)(EDX*4 + 0x11ee0a44), (EAX));
  /* 11eb54b8 jmp 0x11eb54c7 */
  goto L_11eb54c7;
L_11eb54ba:;
  /* 11eb54ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb54bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb54c0 mov dword ptr [eax*4 + 0x11ee0a44], ecx */
  w32((uint32_t)(EAX*4 + 0x11ee0a44), (ECX));
L_11eb54c7:;
  /* 11eb54c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11eb54ca:;
  /* 11eb54ca mov esp, ebp */
  ESP = (EBP);
  /* 11eb54cc pop ebp */
  EBP = (pop32());
  /* 11eb54cd ret  */
  ESPCHK(0x11eb5450u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d0 @ 0x11eb54d0 (28 bytes, 11 insns) */
void f_11eb54d0(void) {
  FTRACE(0x11eb54d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb54d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb54d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb54d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb54d4 mov eax, dword ptr [0x11ee42c0] */
  EAX = (r32((uint32_t)(0x11ee42c0)));
  /* 11eb54d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb54dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb54df mov dword ptr [0x11ee42c0], ecx */
  w32((uint32_t)(0x11ee42c0), (ECX));
  /* 11eb54e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb54e8 mov esp, ebp */
  ESP = (EBP);
  /* 11eb54ea pop ebp */
  EBP = (pop32());
  /* 11eb54eb ret  */
  ESPCHK(0x11eb54d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054f0 @ 0x11eb54f0 (912 bytes, 248 insns) */
void f_11eb54f0(void) {
  FTRACE(0x11eb54f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb54f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb54f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb54f3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11eb54f8 call 0x11eb95d0 */
  push32(0x11eb54fdu); f_11eb95d0();
  /* 11eb54fd push edi */
  push32((uint32_t)(EDI));
  /* 11eb54fe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11eb5505 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11eb550a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb550c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11eb5512 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11eb5514 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11eb5516 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11eb5517 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11eb551e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11eb5523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5525 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11eb552b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11eb552d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11eb552f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11eb5530 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11eb5537 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11eb553c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb553e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11eb5544 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11eb5546 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11eb5548 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11eb5549 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11eb554c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11eb5552 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5556 jl 0x11eb555e */
  if ((C.sf!=C.of)) goto L_11eb555e;
  /* 11eb5558 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb555c jl 0x11eb5566 */
  if ((C.sf!=C.of)) goto L_11eb5566;
L_11eb555e:;
  /* 11eb555e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5561 jmp 0x11eb587b */
  goto L_11eb587b;
L_11eb5566:;
  /* 11eb5566 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb556a jne 0x11eb5610 */
  if (!C.zf) goto L_11eb5610;
  /* 11eb5570 push 0x11ee0a34 */
  push32((uint32_t)(0x11ee0a34u));
  /* 11eb5575 call dword ptr [0x11ee53a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a4))), 0x11eb557bu);
  /* 11eb557b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb557d jle 0x11eb5610 */
  if ((C.zf||C.sf!=C.of)) goto L_11eb5610;
  /* 11eb5583 cmp dword ptr [0x11ee2780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb558a jne 0x11eb55ce */
  if (!C.zf) goto L_11eb55ce;
  /* 11eb558c push 0x11edd610 */
  push32((uint32_t)(0x11edd610u));
  /* 11eb5591 call dword ptr [0x11ee53a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a0))), 0x11eb5597u);
  /* 11eb5597 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11eb559d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb55a4 je 0x11eb55c6 */
  if (C.zf) goto L_11eb55c6;
  /* 11eb55a6 push 0x11edd604 */
  push32((uint32_t)(0x11edd604u));
  /* 11eb55ab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11eb55b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb55b2 call dword ptr [0x11ee539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee539c))), 0x11eb55b8u);
  /* 11eb55b8 mov dword ptr [0x11ee2780], eax */
  w32((uint32_t)(0x11ee2780), (EAX));
  /* 11eb55bd cmp dword ptr [0x11ee2780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb55c4 jne 0x11eb55ce */
  if (!C.zf) goto L_11eb55ce;
L_11eb55c6:;
  /* 11eb55c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb55c9 jmp 0x11eb587b */
  goto L_11eb587b;
L_11eb55ce:;
  /* 11eb55ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb55d1 push edx */
  push32((uint32_t)(EDX));
  /* 11eb55d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb55d5 push eax */
  push32((uint32_t)(EAX));
  /* 11eb55d6 push 0x11edd5d0 */
  push32((uint32_t)(0x11edd5d0u));
  /* 11eb55db lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11eb55e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb55e2 call dword ptr [0x11ee2780] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2780))), 0x11eb55e8u);
  /* 11eb55e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb55eb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11eb55f1 push edx */
  push32((uint32_t)(EDX));
  /* 11eb55f2 call dword ptr [0x11ee5398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5398))), 0x11eb55f8u);
  /* 11eb55f8 push 0x11ee0a34 */
  push32((uint32_t)(0x11ee0a34u));
  /* 11eb55fd call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11eb5603u);
  /* 11eb5603 call 0x11eb53e0 */
  push32(0x11eb5608u); f_11eb53e0();
  /* 11eb5608 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb560b jmp 0x11eb587b */
  goto L_11eb587b;
L_11eb5610:;
  /* 11eb5610 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5614 je 0x11eb564d */
  if (C.zf) goto L_11eb564d;
  /* 11eb5616 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11eb561c push eax */
  push32((uint32_t)(EAX));
  /* 11eb561d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb5620 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5621 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11eb5626 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11eb562c push edx */
  push32((uint32_t)(EDX));
  /* 11eb562d call 0x11eb94d0 */
  push32(0x11eb5632u); f_11eb94d0();
  /* 11eb5632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb5637 jge 0x11eb564d */
  if ((C.sf==C.of)) goto L_11eb564d;
  /* 11eb5639 push 0x11edd5a4 */
  push32((uint32_t)(0x11edd5a4u));
  /* 11eb563e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11eb5644 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5645 call 0x11eb93e0 */
  push32(0x11eb564au); f_11eb93e0();
  /* 11eb564a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb564d:;
  /* 11eb564d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5651 jne 0x11eb5685 */
  if (!C.zf) goto L_11eb5685;
  /* 11eb5653 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5657 je 0x11eb5665 */
  if (C.zf) goto L_11eb5665;
  /* 11eb5659 mov dword ptr [ebp - 0x3028], 0x11edd590 */
  w32((uint32_t)(EBP + -0x3028), (0x11edd590u));
  /* 11eb5663 jmp 0x11eb566f */
  goto L_11eb566f;
L_11eb5665:;
  /* 11eb5665 mov dword ptr [ebp - 0x3028], 0x11edd57c */
  w32((uint32_t)(EBP + -0x3028), (0x11edd57cu));
L_11eb566f:;
  /* 11eb566f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11eb5675 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5676 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11eb567c push edx */
  push32((uint32_t)(EDX));
  /* 11eb567d call 0x11eb93e0 */
  push32(0x11eb5682u); f_11eb93e0();
  /* 11eb5682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5685:;
  /* 11eb5685 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11eb568b push eax */
  push32((uint32_t)(EAX));
  /* 11eb568c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11eb5692 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5693 call 0x11eb93f0 */
  push32(0x11eb5698u); f_11eb93f0();
  /* 11eb5698 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb569b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb569f jne 0x11eb56da */
  if (!C.zf) goto L_11eb56da;
  /* 11eb56a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb56a4 mov eax, dword ptr [edx*4 + 0x11ee0a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee0a38)));
  /* 11eb56ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb56ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb56b0 je 0x11eb56c6 */
  if (C.zf) goto L_11eb56c6;
  /* 11eb56b2 push 0x11edd578 */
  push32((uint32_t)(0x11edd578u));
  /* 11eb56b7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11eb56bd push ecx */
  push32((uint32_t)(ECX));
  /* 11eb56be call 0x11eb93f0 */
  push32(0x11eb56c3u); f_11eb93f0();
  /* 11eb56c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb56c6:;
  /* 11eb56c6 push 0x11edd574 */
  push32((uint32_t)(0x11edd574u));
  /* 11eb56cb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11eb56d1 push edx */
  push32((uint32_t)(EDX));
  /* 11eb56d2 call 0x11eb93f0 */
  push32(0x11eb56d7u); f_11eb93f0();
  /* 11eb56d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb56da:;
  /* 11eb56da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb56de je 0x11eb5722 */
  if (C.zf) goto L_11eb5722;
  /* 11eb56e0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11eb56e6 push eax */
  push32((uint32_t)(EAX));
  /* 11eb56e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb56ea push ecx */
  push32((uint32_t)(ECX));
  /* 11eb56eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb56ee push edx */
  push32((uint32_t)(EDX));
  /* 11eb56ef push 0x11edd568 */
  push32((uint32_t)(0x11edd568u));
  /* 11eb56f4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11eb56f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11eb56ff push eax */
  push32((uint32_t)(EAX));
  /* 11eb5700 call 0x11eb92e0 */
  push32(0x11eb5705u); f_11eb92e0();
  /* 11eb5705 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5708 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb570a jge 0x11eb5720 */
  if ((C.sf==C.of)) goto L_11eb5720;
  /* 11eb570c push 0x11edd5a4 */
  push32((uint32_t)(0x11edd5a4u));
  /* 11eb5711 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11eb5717 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5718 call 0x11eb93e0 */
  push32(0x11eb571du); f_11eb93e0();
  /* 11eb571d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5720:;
  /* 11eb5720 jmp 0x11eb5738 */
  goto L_11eb5738;
L_11eb5722:;
  /* 11eb5722 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11eb5728 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5729 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11eb572f push eax */
  push32((uint32_t)(EAX));
  /* 11eb5730 call 0x11eb93e0 */
  push32(0x11eb5735u); f_11eb93e0();
  /* 11eb5735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5738:;
  /* 11eb5738 cmp dword ptr [0x11ee42c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb573f je 0x11eb577c */
  if (C.zf) goto L_11eb577c;
  /* 11eb5741 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11eb5747 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5748 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11eb574e push edx */
  push32((uint32_t)(EDX));
  /* 11eb574f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5752 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5753 call dword ptr [0x11ee42c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee42c0))), 0x11eb5759u);
  /* 11eb5759 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb575c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb575e je 0x11eb577c */
  if (C.zf) goto L_11eb577c;
  /* 11eb5760 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5764 jne 0x11eb5771 */
  if (!C.zf) goto L_11eb5771;
  /* 11eb5766 push 0x11ee0a34 */
  push32((uint32_t)(0x11ee0a34u));
  /* 11eb576b call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11eb5771u);
L_11eb5771:;
  /* 11eb5771 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11eb5777 jmp 0x11eb587b */
  goto L_11eb587b;
L_11eb577c:;
  /* 11eb577c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb577f mov edx, dword ptr [ecx*4 + 0x11ee0a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0a38)));
  /* 11eb5786 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11eb5789 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb578b je 0x11eb57cb */
  if (C.zf) goto L_11eb57cb;
  /* 11eb578d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5790 cmp dword ptr [eax*4 + 0x11ee0a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11ee0a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5798 je 0x11eb57cb */
  if (C.zf) goto L_11eb57cb;
  /* 11eb579a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb579c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11eb57a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb57a3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11eb57a9 push edx */
  push32((uint32_t)(EDX));
  /* 11eb57aa call 0x11eb9260 */
  push32(0x11eb57afu); f_11eb9260();
  /* 11eb57af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb57b2 push eax */
  push32((uint32_t)(EAX));
  /* 11eb57b3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11eb57b9 push eax */
  push32((uint32_t)(EAX));
  /* 11eb57ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb57bd mov edx, dword ptr [ecx*4 + 0x11ee0a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0a44)));
  /* 11eb57c4 push edx */
  push32((uint32_t)(EDX));
  /* 11eb57c5 call dword ptr [0x11ee5390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5390))), 0x11eb57cbu);
L_11eb57cb:;
  /* 11eb57cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb57ce mov ecx, dword ptr [eax*4 + 0x11ee0a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ee0a38)));
  /* 11eb57d5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb57d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb57da je 0x11eb57e9 */
  if (C.zf) goto L_11eb57e9;
  /* 11eb57dc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11eb57e2 push edx */
  push32((uint32_t)(EDX));
  /* 11eb57e3 call dword ptr [0x11ee5398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5398))), 0x11eb57e9u);
L_11eb57e9:;
  /* 11eb57e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb57ec mov ecx, dword ptr [eax*4 + 0x11ee0a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ee0a38)));
  /* 11eb57f3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb57f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb57f8 je 0x11eb5868 */
  if (C.zf) goto L_11eb5868;
  /* 11eb57fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb57fe je 0x11eb581d */
  if (C.zf) goto L_11eb581d;
  /* 11eb5800 push 0xa */
  push32((uint32_t)(0xau));
  /* 11eb5802 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11eb5808 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5809 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb580c push eax */
  push32((uint32_t)(EAX));
  /* 11eb580d call 0x11eb8f70 */
  push32(0x11eb5812u); f_11eb8f70();
  /* 11eb5812 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5815 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11eb581b jmp 0x11eb5827 */
  goto L_11eb5827;
L_11eb581d:;
  /* 11eb581d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11eb5827:;
  /* 11eb5827 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11eb582d push ecx */
  push32((uint32_t)(ECX));
  /* 11eb582e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb5831 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5832 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11eb5838 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5839 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb583c push ecx */
  push32((uint32_t)(ECX));
  /* 11eb583d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5840 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5841 call 0x11eb5880 */
  push32(0x11eb5846u); f_11eb5880();
  /* 11eb5846 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5849 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11eb584f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5853 jne 0x11eb5860 */
  if (!C.zf) goto L_11eb5860;
  /* 11eb5855 push 0x11ee0a34 */
  push32((uint32_t)(0x11ee0a34u));
  /* 11eb585a call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11eb5860u);
L_11eb5860:;
  /* 11eb5860 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11eb5866 jmp 0x11eb587b */
  goto L_11eb587b;
L_11eb5868:;
  /* 11eb5868 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb586c jne 0x11eb5879 */
  if (!C.zf) goto L_11eb5879;
  /* 11eb586e push 0x11ee0a34 */
  push32((uint32_t)(0x11ee0a34u));
  /* 11eb5873 call dword ptr [0x11ee5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5394))), 0x11eb5879u);
L_11eb5879:;
  /* 11eb5879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb587b:;
  /* 11eb587b pop edi */
  EDI = (pop32());
  /* 11eb587c mov esp, ebp */
  ESP = (EBP);
  /* 11eb587e pop ebp */
  EBP = (pop32());
  /* 11eb587f ret  */
  ESPCHK(0x11eb54f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005880 @ 0x11eb5880 (780 bytes, 197 insns) */
void f_11eb5880(void) {
  FTRACE(0x11eb5880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5880 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5881 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5883 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11eb5888 call 0x11eb95d0 */
  push32(0x11eb588du); f_11eb95d0();
L_11eb588d:;
  /* 11eb588d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5891 jne 0x11eb58b8 */
  if (!C.zf) goto L_11eb58b8;
  /* 11eb5893 push 0x11edd760 */
  push32((uint32_t)(0x11edd760u));
  /* 11eb5898 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb589a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11eb589f push 0x11edd754 */
  push32((uint32_t)(0x11edd754u));
  /* 11eb58a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb58a6 call 0x11eb54f0 */
  push32(0x11eb58abu); f_11eb54f0();
  /* 11eb58ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb58ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb58b1 jne 0x11eb58b8 */
  if (!C.zf) goto L_11eb58b8;
  /* 11eb58b3 call 0x11eb53e0 */
  push32(0x11eb58b8u); f_11eb53e0();
L_11eb58b8:;
  /* 11eb58b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb58ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb58bc jne 0x11eb588d */
  if (!C.zf) goto L_11eb588d;
  /* 11eb58be push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11eb58c3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11eb58c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb58ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb58cc call dword ptr [0x11ee53a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a8))), 0x11eb58d2u);
  /* 11eb58d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb58d4 jne 0x11eb58ea */
  if (!C.zf) goto L_11eb58ea;
  /* 11eb58d6 push 0x11edd73c */
  push32((uint32_t)(0x11edd73cu));
  /* 11eb58db lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11eb58e1 push edx */
  push32((uint32_t)(EDX));
  /* 11eb58e2 call 0x11eb93e0 */
  push32(0x11eb58e7u); f_11eb93e0();
  /* 11eb58e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb58ea:;
  /* 11eb58ea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11eb58f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb58f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb58f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb58f7 call 0x11eb9260 */
  push32(0x11eb58fcu); f_11eb9260();
  /* 11eb58fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb58ff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5902 jbe 0x11eb592d */
  if ((C.cf||C.zf)) goto L_11eb592d;
  /* 11eb5904 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5907 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5908 call 0x11eb9260 */
  push32(0x11eb590du); f_11eb9260();
  /* 11eb590d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5910 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5913 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11eb5917 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb591a push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb591c push 0x11edd738 */
  push32((uint32_t)(0x11edd738u));
  /* 11eb5921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5924 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5925 call 0x11eb9c50 */
  push32(0x11eb592au); f_11eb9c50();
  /* 11eb592a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb592d:;
  /* 11eb592d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb5930 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11eb5936 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb593d je 0x11eb5988 */
  if (C.zf) goto L_11eb5988;
  /* 11eb593f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11eb5945 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5946 call 0x11eb9260 */
  push32(0x11eb594bu); f_11eb9260();
  /* 11eb594b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb594e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5951 jbe 0x11eb5988 */
  if ((C.cf||C.zf)) goto L_11eb5988;
  /* 11eb5953 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11eb5959 push eax */
  push32((uint32_t)(EAX));
  /* 11eb595a call 0x11eb9260 */
  push32(0x11eb595fu); f_11eb9260();
  /* 11eb595f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5962 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11eb5968 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11eb596c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11eb5972 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb5974 push 0x11edd738 */
  push32((uint32_t)(0x11edd738u));
  /* 11eb5979 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11eb597f push eax */
  push32((uint32_t)(EAX));
  /* 11eb5980 call 0x11eb9c50 */
  push32(0x11eb5985u); f_11eb9c50();
  /* 11eb5985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5988:;
  /* 11eb5988 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb598c jne 0x11eb599a */
  if (!C.zf) goto L_11eb599a;
  /* 11eb598e mov dword ptr [ebp - 0x1114], 0x11edd6c4 */
  w32((uint32_t)(EBP + -0x1114), (0x11edd6c4u));
  /* 11eb5998 jmp 0x11eb59a4 */
  goto L_11eb59a4;
L_11eb599a:;
  /* 11eb599a mov dword ptr [ebp - 0x1114], 0x11edd464 */
  w32((uint32_t)(EBP + -0x1114), (0x11edd464u));
L_11eb59a4:;
  /* 11eb59a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb59a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eb59aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb59ac je 0x11eb59b9 */
  if (C.zf) goto L_11eb59b9;
  /* 11eb59ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb59b1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11eb59b7 jmp 0x11eb59c3 */
  goto L_11eb59c3;
L_11eb59b9:;
  /* 11eb59b9 mov dword ptr [ebp - 0x1118], 0x11edd464 */
  w32((uint32_t)(EBP + -0x1118), (0x11edd464u));
L_11eb59c3:;
  /* 11eb59c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb59c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eb59c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb59cb je 0x11eb59df */
  if (C.zf) goto L_11eb59df;
  /* 11eb59cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb59d1 jne 0x11eb59df */
  if (!C.zf) goto L_11eb59df;
  /* 11eb59d3 mov dword ptr [ebp - 0x111c], 0x11edd6b4 */
  w32((uint32_t)(EBP + -0x111c), (0x11edd6b4u));
  /* 11eb59dd jmp 0x11eb59e9 */
  goto L_11eb59e9;
L_11eb59df:;
  /* 11eb59df mov dword ptr [ebp - 0x111c], 0x11edd464 */
  w32((uint32_t)(EBP + -0x111c), (0x11edd464u));
L_11eb59e9:;
  /* 11eb59e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb59ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb59ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb59f1 je 0x11eb59ff */
  if (C.zf) goto L_11eb59ff;
  /* 11eb59f3 mov dword ptr [ebp - 0x1120], 0x11edd6b0 */
  w32((uint32_t)(EBP + -0x1120), (0x11edd6b0u));
  /* 11eb59fd jmp 0x11eb5a09 */
  goto L_11eb5a09;
L_11eb59ff:;
  /* 11eb59ff mov dword ptr [ebp - 0x1120], 0x11edd464 */
  w32((uint32_t)(EBP + -0x1120), (0x11edd464u));
L_11eb5a09:;
  /* 11eb5a09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5a0d je 0x11eb5a1a */
  if (C.zf) goto L_11eb5a1a;
  /* 11eb5a0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb5a12 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11eb5a18 jmp 0x11eb5a24 */
  goto L_11eb5a24;
L_11eb5a1a:;
  /* 11eb5a1a mov dword ptr [ebp - 0x1124], 0x11edd464 */
  w32((uint32_t)(EBP + -0x1124), (0x11edd464u));
L_11eb5a24:;
  /* 11eb5a24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5a28 je 0x11eb5a36 */
  if (C.zf) goto L_11eb5a36;
  /* 11eb5a2a mov dword ptr [ebp - 0x1128], 0x11edd6a8 */
  w32((uint32_t)(EBP + -0x1128), (0x11edd6a8u));
  /* 11eb5a34 jmp 0x11eb5a40 */
  goto L_11eb5a40;
L_11eb5a36:;
  /* 11eb5a36 mov dword ptr [ebp - 0x1128], 0x11edd464 */
  w32((uint32_t)(EBP + -0x1128), (0x11edd464u));
L_11eb5a40:;
  /* 11eb5a40 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5a44 je 0x11eb5a51 */
  if (C.zf) goto L_11eb5a51;
  /* 11eb5a46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb5a49 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11eb5a4f jmp 0x11eb5a5b */
  goto L_11eb5a5b;
L_11eb5a51:;
  /* 11eb5a51 mov dword ptr [ebp - 0x112c], 0x11edd464 */
  w32((uint32_t)(EBP + -0x112c), (0x11edd464u));
L_11eb5a5b:;
  /* 11eb5a5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5a5f je 0x11eb5a6d */
  if (C.zf) goto L_11eb5a6d;
  /* 11eb5a61 mov dword ptr [ebp - 0x1130], 0x11edd6a0 */
  w32((uint32_t)(EBP + -0x1130), (0x11edd6a0u));
  /* 11eb5a6b jmp 0x11eb5a77 */
  goto L_11eb5a77;
L_11eb5a6d:;
  /* 11eb5a6d mov dword ptr [ebp - 0x1130], 0x11edd464 */
  w32((uint32_t)(EBP + -0x1130), (0x11edd464u));
L_11eb5a77:;
  /* 11eb5a77 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5a7e je 0x11eb5a8e */
  if (C.zf) goto L_11eb5a8e;
  /* 11eb5a80 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11eb5a86 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11eb5a8c jmp 0x11eb5a98 */
  goto L_11eb5a98;
L_11eb5a8e:;
  /* 11eb5a8e mov dword ptr [ebp - 0x1134], 0x11edd464 */
  w32((uint32_t)(EBP + -0x1134), (0x11edd464u));
L_11eb5a98:;
  /* 11eb5a98 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5a9f je 0x11eb5aad */
  if (C.zf) goto L_11eb5aad;
  /* 11eb5aa1 mov dword ptr [ebp - 0x1138], 0x11edd694 */
  w32((uint32_t)(EBP + -0x1138), (0x11edd694u));
  /* 11eb5aab jmp 0x11eb5ab7 */
  goto L_11eb5ab7;
L_11eb5aad:;
  /* 11eb5aad mov dword ptr [ebp - 0x1138], 0x11edd464 */
  w32((uint32_t)(EBP + -0x1138), (0x11edd464u));
L_11eb5ab7:;
  /* 11eb5ab7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11eb5abd push edx */
  push32((uint32_t)(EDX));
  /* 11eb5abe mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11eb5ac4 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5ac5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11eb5acb push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5acc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11eb5ad2 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5ad3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11eb5ad9 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5ada mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11eb5ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5ae1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11eb5ae7 push edx */
  push32((uint32_t)(EDX));
  /* 11eb5ae8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11eb5aee push eax */
  push32((uint32_t)(EAX));
  /* 11eb5aef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11eb5af5 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5af6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11eb5afc push edx */
  push32((uint32_t)(EDX));
  /* 11eb5afd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5b00 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5b01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5b04 mov edx, dword ptr [ecx*4 + 0x11ee0a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0a50)));
  /* 11eb5b0b push edx */
  push32((uint32_t)(EDX));
  /* 11eb5b0c push 0x11edd640 */
  push32((uint32_t)(0x11edd640u));
  /* 11eb5b11 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11eb5b16 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11eb5b1c push eax */
  push32((uint32_t)(EAX));
  /* 11eb5b1d call 0x11eb92e0 */
  push32(0x11eb5b22u); f_11eb92e0();
  /* 11eb5b22 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb5b27 jge 0x11eb5b3d */
  if ((C.sf==C.of)) goto L_11eb5b3d;
  /* 11eb5b29 push 0x11edd5a4 */
  push32((uint32_t)(0x11edd5a4u));
  /* 11eb5b2e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11eb5b34 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5b35 call 0x11eb93e0 */
  push32(0x11eb5b3au); f_11eb93e0();
  /* 11eb5b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5b3d:;
  /* 11eb5b3d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11eb5b42 push 0x11edd61c */
  push32((uint32_t)(0x11edd61cu));
  /* 11eb5b47 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11eb5b4d push edx */
  push32((uint32_t)(EDX));
  /* 11eb5b4e call 0x11eb9b90 */
  push32(0x11eb5b53u); f_11eb9b90();
  /* 11eb5b53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5b56 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11eb5b5c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5b63 jne 0x11eb5b76 */
  if (!C.zf) goto L_11eb5b76;
  /* 11eb5b65 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11eb5b67 call 0x11eb98d0 */
  push32(0x11eb5b6cu); f_11eb98d0();
  /* 11eb5b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5b6f push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb5b71 call 0x11eb5bf0 */
  push32(0x11eb5b76u); f_11eb5bf0();
L_11eb5b76:;
  /* 11eb5b76 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5b7d jne 0x11eb5b86 */
  if (!C.zf) goto L_11eb5b86;
  /* 11eb5b7f mov eax, 1 */
  EAX = (0x1u);
  /* 11eb5b84 jmp 0x11eb5b88 */
  goto L_11eb5b88;
L_11eb5b86:;
  /* 11eb5b86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb5b88:;
  /* 11eb5b88 mov esp, ebp */
  ESP = (EBP);
  /* 11eb5b8a pop ebp */
  EBP = (pop32());
  /* 11eb5b8b ret  */
  ESPCHK(0x11eb5880u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b90 @ 0x11eb5b90 (56 bytes, 15 insns) */
void f_11eb5b90(void) {
  FTRACE(0x11eb5b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5b91 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5b93 cmp dword ptr [0x11ee42bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5b9a je 0x11eb5ba2 */
  if (C.zf) goto L_11eb5ba2;
  /* 11eb5b9c call dword ptr [0x11ee42bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee42bc))), 0x11eb5ba2u);
L_11eb5ba2:;
  /* 11eb5ba2 push 0x11ee0418 */
  push32((uint32_t)(0x11ee0418u));
  /* 11eb5ba7 push 0x11ee0208 */
  push32((uint32_t)(0x11ee0208u));
  /* 11eb5bac call 0x11eb5d60 */
  push32(0x11eb5bb1u); f_11eb5d60();
  /* 11eb5bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5bb4 push 0x11ee0104 */
  push32((uint32_t)(0x11ee0104u));
  /* 11eb5bb9 push 0x11ee0000 */
  push32((uint32_t)(0x11ee0000u));
  /* 11eb5bbe call 0x11eb5d60 */
  push32(0x11eb5bc3u); f_11eb5d60();
  /* 11eb5bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5bc6 pop ebp */
  EBP = (pop32());
  /* 11eb5bc7 ret  */
  ESPCHK(0x11eb5b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x11eb5bd0 (21 bytes, 10 insns) */
void f_11eb5bd0(void) {
  FTRACE(0x11eb5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb5bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb5bd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5bda push eax */
  push32((uint32_t)(EAX));
  /* 11eb5bdb call 0x11eb5c50 */
  push32(0x11eb5be0u); f_11eb5c50();
  /* 11eb5be0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5be3 pop ebp */
  EBP = (pop32());
  /* 11eb5be4 ret  */
  ESPCHK(0x11eb5bd0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11eb5bf0 (21 bytes, 10 insns) */
void f_11eb5bf0(void) {
  FTRACE(0x11eb5bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb5bf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb5bf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5bfa push eax */
  push32((uint32_t)(EAX));
  /* 11eb5bfb call 0x11eb5c50 */
  push32(0x11eb5c00u); f_11eb5c50();
  /* 11eb5c00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5c03 pop ebp */
  EBP = (pop32());
  /* 11eb5c04 ret  */
  ESPCHK(0x11eb5bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c10 @ 0x11eb5c10 (19 bytes, 9 insns) */
void f_11eb5c10(void) {
  FTRACE(0x11eb5c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5c11 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb5c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb5c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb5c19 call 0x11eb5c50 */
  push32(0x11eb5c1eu); f_11eb5c50();
  /* 11eb5c1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5c21 pop ebp */
  EBP = (pop32());
  /* 11eb5c22 ret  */
  ESPCHK(0x11eb5c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x11eb5c30 (19 bytes, 9 insns) */
void f_11eb5c30(void) {
  FTRACE(0x11eb5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5c31 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb5c35 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb5c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb5c39 call 0x11eb5c50 */
  push32(0x11eb5c3eu); f_11eb5c50();
  /* 11eb5c3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5c41 pop ebp */
  EBP = (pop32());
  /* 11eb5c42 ret  */
  ESPCHK(0x11eb5c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c50 @ 0x11eb5c50 (227 bytes, 61 insns) */
void f_11eb5c50(void) {
  FTRACE(0x11eb5c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5c51 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5c53 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5c54 call 0x11eb5d40 */
  push32(0x11eb5c59u); f_11eb5d40();
  /* 11eb5c59 cmp dword ptr [0x11ee27c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5c60 jne 0x11eb5c73 */
  if (!C.zf) goto L_11eb5c73;
  /* 11eb5c62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5c65 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5c66 call dword ptr [0x11ee52c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52c8))), 0x11eb5c6cu);
  /* 11eb5c6c push eax */
  push32((uint32_t)(EAX));
  /* 11eb5c6d call dword ptr [0x11ee52cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee52cc))), 0x11eb5c73u);
L_11eb5c73:;
  /* 11eb5c73 mov dword ptr [0x11ee27c0], 1 */
  w32((uint32_t)(0x11ee27c0), (0x1u));
  /* 11eb5c7d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11eb5c80 mov byte ptr [0x11ee27bc], cl */
  w8((uint32_t)(0x11ee27bc), (CL));
  /* 11eb5c86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5c8a jne 0x11eb5cd3 */
  if (!C.zf) goto L_11eb5cd3;
  /* 11eb5c8c cmp dword ptr [0x11ee42b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5c93 je 0x11eb5cc1 */
  if (C.zf) goto L_11eb5cc1;
  /* 11eb5c95 mov edx, dword ptr [0x11ee42b4] */
  EDX = (r32((uint32_t)(0x11ee42b4)));
  /* 11eb5c9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11eb5c9e:;
  /* 11eb5c9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5ca1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb5ca4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb5ca7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5caa cmp ecx, dword ptr [0x11ee42b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee42b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5cb0 jb 0x11eb5cc1 */
  if (C.cf) goto L_11eb5cc1;
  /* 11eb5cb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5cb5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5cb8 je 0x11eb5cbf */
  if (C.zf) goto L_11eb5cbf;
  /* 11eb5cba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5cbd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11eb5cbfu);
L_11eb5cbf:;
  /* 11eb5cbf jmp 0x11eb5c9e */
  goto L_11eb5c9e;
L_11eb5cc1:;
  /* 11eb5cc1 push 0x11ee0724 */
  push32((uint32_t)(0x11ee0724u));
  /* 11eb5cc6 push 0x11ee051c */
  push32((uint32_t)(0x11ee051cu));
  /* 11eb5ccb call 0x11eb5d60 */
  push32(0x11eb5cd0u); f_11eb5d60();
  /* 11eb5cd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5cd3:;
  /* 11eb5cd3 push 0x11ee092c */
  push32((uint32_t)(0x11ee092cu));
  /* 11eb5cd8 push 0x11ee0828 */
  push32((uint32_t)(0x11ee0828u));
  /* 11eb5cdd call 0x11eb5d60 */
  push32(0x11eb5ce2u); f_11eb5d60();
  /* 11eb5ce2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5ce5 cmp dword ptr [0x11ee27c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5cec jne 0x11eb5d0e */
  if (!C.zf) goto L_11eb5d0e;
  /* 11eb5cee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11eb5cf0 call 0x11eb7940 */
  push32(0x11eb5cf5u); f_11eb7940();
  /* 11eb5cf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5cf8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb5cfd je 0x11eb5d0e */
  if (C.zf) goto L_11eb5d0e;
  /* 11eb5cff mov dword ptr [0x11ee27c8], 1 */
  w32((uint32_t)(0x11ee27c8), (0x1u));
  /* 11eb5d09 call 0x11eb8250 */
  push32(0x11eb5d0eu); f_11eb8250();
L_11eb5d0e:;
  /* 11eb5d0e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5d12 je 0x11eb5d1b */
  if (C.zf) goto L_11eb5d1b;
  /* 11eb5d14 call 0x11eb5d50 */
  push32(0x11eb5d19u); f_11eb5d50();
  /* 11eb5d19 jmp 0x11eb5d2f */
  goto L_11eb5d2f;
L_11eb5d1b:;
  /* 11eb5d1b mov dword ptr [0x11ee27c4], 1 */
  w32((uint32_t)(0x11ee27c4), (0x1u));
  /* 11eb5d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5d28 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5d29 call dword ptr [0x11ee53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53ac))), 0x11eb5d2fu);
L_11eb5d2f:;
  /* 11eb5d2f mov esp, ebp */
  ESP = (EBP);
  /* 11eb5d31 pop ebp */
  EBP = (pop32());
  /* 11eb5d32 ret  */
  ESPCHK(0x11eb5c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d40 @ 0x11eb5d40 (15 bytes, 7 insns) */
void f_11eb5d40(void) {
  FTRACE(0x11eb5d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5d41 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5d43 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11eb5d45 call 0x11eb9e30 */
  push32(0x11eb5d4au); f_11eb9e30();
  /* 11eb5d4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5d4d pop ebp */
  EBP = (pop32());
  /* 11eb5d4e ret  */
  ESPCHK(0x11eb5d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d50 @ 0x11eb5d50 (15 bytes, 7 insns) */
void f_11eb5d50(void) {
  FTRACE(0x11eb5d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5d51 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5d53 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11eb5d55 call 0x11eb9ed0 */
  push32(0x11eb5d5au); f_11eb9ed0();
  /* 11eb5d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5d5d pop ebp */
  EBP = (pop32());
  /* 11eb5d5e ret  */
  ESPCHK(0x11eb5d50u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11eb5d60 (37 bytes, 16 insns) */
void f_11eb5d60(void) {
  FTRACE(0x11eb5d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5d61 mov ebp, esp */
  EBP = (ESP);
L_11eb5d63:;
  /* 11eb5d63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5d66 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5d69 jae 0x11eb5d83 */
  if (!C.cf) goto L_11eb5d83;
  /* 11eb5d6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5d6e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5d71 je 0x11eb5d78 */
  if (C.zf) goto L_11eb5d78;
  /* 11eb5d73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5d76 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11eb5d78u);
L_11eb5d78:;
  /* 11eb5d78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5d7b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5d7e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11eb5d81 jmp 0x11eb5d63 */
  goto L_11eb5d63;
L_11eb5d83:;
  /* 11eb5d83 pop ebp */
  EBP = (pop32());
  /* 11eb5d84 ret  */
  ESPCHK(0x11eb5d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d90 @ 0x11eb5d90 (130 bytes, 42 insns) */
void f_11eb5d90(void) {
  FTRACE(0x11eb5d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5d91 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5d94 call 0x11eb9d50 */
  push32(0x11eb5d99u); f_11eb9d50();
  /* 11eb5d99 call dword ptr [0x11ee53c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53c0))), 0x11eb5d9fu);
  /* 11eb5d9f mov dword ptr [0x11ee0a5c], eax */
  w32((uint32_t)(0x11ee0a5c), (EAX));
  /* 11eb5da4 cmp dword ptr [0x11ee0a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5dab jne 0x11eb5db1 */
  if (!C.zf) goto L_11eb5db1;
  /* 11eb5dad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5daf jmp 0x11eb5e0e */
  goto L_11eb5e0e;
L_11eb5db1:;
  /* 11eb5db1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11eb5db3 push 0x11edd778 */
  push32((uint32_t)(0x11edd778u));
  /* 11eb5db8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5dba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11eb5dbc push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb5dbe call 0x11eb6840 */
  push32(0x11eb5dc3u); f_11eb6840();
  /* 11eb5dc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5dc6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb5dc9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5dcd je 0x11eb5de4 */
  if (C.zf) goto L_11eb5de4;
  /* 11eb5dcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5dd2 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5dd3 mov ecx, dword ptr [0x11ee0a5c] */
  ECX = (r32((uint32_t)(0x11ee0a5c)));
  /* 11eb5dd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5dda call dword ptr [0x11ee53bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53bc))), 0x11eb5de0u);
  /* 11eb5de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb5de2 jne 0x11eb5de8 */
  if (!C.zf) goto L_11eb5de8;
L_11eb5de4:;
  /* 11eb5de4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb5de6 jmp 0x11eb5e0e */
  goto L_11eb5e0e;
L_11eb5de8:;
  /* 11eb5de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5deb push edx */
  push32((uint32_t)(EDX));
  /* 11eb5dec call 0x11eb5e50 */
  push32(0x11eb5df1u); f_11eb5e50();
  /* 11eb5df1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5df4 call dword ptr [0x11ee53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b8))), 0x11eb5dfau);
  /* 11eb5dfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5dfd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11eb5dff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5e02 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11eb5e09 mov eax, 1 */
  EAX = (0x1u);
L_11eb5e0e:;
  /* 11eb5e0e mov esp, ebp */
  ESP = (EBP);
  /* 11eb5e10 pop ebp */
  EBP = (pop32());
  /* 11eb5e11 ret  */
  ESPCHK(0x11eb5d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e20 @ 0x11eb5e20 (41 bytes, 11 insns) */
void f_11eb5e20(void) {
  FTRACE(0x11eb5e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5e21 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5e23 call 0x11eb9d90 */
  push32(0x11eb5e28u); f_11eb9d90();
  /* 11eb5e28 cmp dword ptr [0x11ee0a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5e2f je 0x11eb5e47 */
  if (C.zf) goto L_11eb5e47;
  /* 11eb5e31 mov eax, dword ptr [0x11ee0a5c] */
  EAX = (r32((uint32_t)(0x11ee0a5c)));
  /* 11eb5e36 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5e37 call dword ptr [0x11ee53c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53c4))), 0x11eb5e3du);
  /* 11eb5e3d mov dword ptr [0x11ee0a5c], 0xffffffff */
  w32((uint32_t)(0x11ee0a5c), (0xffffffffu));
L_11eb5e47:;
  /* 11eb5e47 pop ebp */
  EBP = (pop32());
  /* 11eb5e48 ret  */
  ESPCHK(0x11eb5e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e50 @ 0x11eb5e50 (25 bytes, 8 insns) */
void f_11eb5e50(void) {
  FTRACE(0x11eb5e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5e51 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5e53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5e56 mov dword ptr [eax + 0x50], 0x11ee0c00 */
  w32((uint32_t)(EAX + 0x50), (0x11ee0c00u));
  /* 11eb5e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5e60 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11eb5e67 pop ebp */
  EBP = (pop32());
  /* 11eb5e68 ret  */
  ESPCHK(0x11eb5e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e70 @ 0x11eb5e70 (152 bytes, 48 insns) */
void f_11eb5e70(void) {
  FTRACE(0x11eb5e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5e71 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5e73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb5e76 call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11eb5e7cu);
  /* 11eb5e7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb5e7f mov eax, dword ptr [0x11ee0a5c] */
  EAX = (r32((uint32_t)(0x11ee0a5c)));
  /* 11eb5e84 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5e85 call dword ptr [0x11ee53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53cc))), 0x11eb5e8bu);
  /* 11eb5e8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb5e8e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5e92 jne 0x11eb5ef7 */
  if (!C.zf) goto L_11eb5ef7;
  /* 11eb5e94 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11eb5e99 push 0x11edd778 */
  push32((uint32_t)(0x11edd778u));
  /* 11eb5e9e push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5ea0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11eb5ea2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb5ea4 call 0x11eb6840 */
  push32(0x11eb5ea9u); f_11eb6840();
  /* 11eb5ea9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5eac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb5eaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5eb3 je 0x11eb5eed */
  if (C.zf) goto L_11eb5eed;
  /* 11eb5eb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5eb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5eb9 mov edx, dword ptr [0x11ee0a5c] */
  EDX = (r32((uint32_t)(0x11ee0a5c)));
  /* 11eb5ebf push edx */
  push32((uint32_t)(EDX));
  /* 11eb5ec0 call dword ptr [0x11ee53bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53bc))), 0x11eb5ec6u);
  /* 11eb5ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb5ec8 je 0x11eb5eed */
  if (C.zf) goto L_11eb5eed;
  /* 11eb5eca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5ecd push eax */
  push32((uint32_t)(EAX));
  /* 11eb5ece call 0x11eb5e50 */
  push32(0x11eb5ed3u); f_11eb5e50();
  /* 11eb5ed3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb5ed6 call dword ptr [0x11ee53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b8))), 0x11eb5edcu);
  /* 11eb5edc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5edf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11eb5ee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5ee4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11eb5eeb jmp 0x11eb5ef7 */
  goto L_11eb5ef7;
L_11eb5eed:;
  /* 11eb5eed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11eb5eef call 0x11eb53a0 */
  push32(0x11eb5ef4u); f_11eb53a0();
  /* 11eb5ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5ef7:;
  /* 11eb5ef7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb5efa push eax */
  push32((uint32_t)(EAX));
  /* 11eb5efb call dword ptr [0x11ee53c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53c8))), 0x11eb5f01u);
  /* 11eb5f01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb5f04 mov esp, ebp */
  ESP = (EBP);
  /* 11eb5f06 pop ebp */
  EBP = (pop32());
  /* 11eb5f07 ret  */
  ESPCHK(0x11eb5e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x11eb5f10 (263 bytes, 86 insns) */
void f_11eb5f10(void) {
  FTRACE(0x11eb5f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb5f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb5f11 mov ebp, esp */
  EBP = (ESP);
  /* 11eb5f13 cmp dword ptr [0x11ee0a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5f1a je 0x11eb6015 */
  if (C.zf) goto L_11eb6015;
  /* 11eb5f20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5f24 jne 0x11eb5f35 */
  if (!C.zf) goto L_11eb5f35;
  /* 11eb5f26 mov eax, dword ptr [0x11ee0a5c] */
  EAX = (r32((uint32_t)(0x11ee0a5c)));
  /* 11eb5f2b push eax */
  push32((uint32_t)(EAX));
  /* 11eb5f2c call dword ptr [0x11ee53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53cc))), 0x11eb5f32u);
  /* 11eb5f32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11eb5f35:;
  /* 11eb5f35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5f39 je 0x11eb6006 */
  if (C.zf) goto L_11eb6006;
  /* 11eb5f3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5f42 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5f46 je 0x11eb5f59 */
  if (C.zf) goto L_11eb5f59;
  /* 11eb5f48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5f4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5f4d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11eb5f50 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5f51 call 0x11eb6ec0 */
  push32(0x11eb5f56u); f_11eb6ec0();
  /* 11eb5f56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5f59:;
  /* 11eb5f59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5f5c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5f60 je 0x11eb5f73 */
  if (C.zf) goto L_11eb5f73;
  /* 11eb5f62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5f64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5f67 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11eb5f6a push eax */
  push32((uint32_t)(EAX));
  /* 11eb5f6b call 0x11eb6ec0 */
  push32(0x11eb5f70u); f_11eb6ec0();
  /* 11eb5f70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5f73:;
  /* 11eb5f73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5f76 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5f7a je 0x11eb5f8d */
  if (C.zf) goto L_11eb5f8d;
  /* 11eb5f7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5f7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5f81 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11eb5f84 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5f85 call 0x11eb6ec0 */
  push32(0x11eb5f8au); f_11eb6ec0();
  /* 11eb5f8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5f8d:;
  /* 11eb5f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5f90 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5f94 je 0x11eb5fa7 */
  if (C.zf) goto L_11eb5fa7;
  /* 11eb5f96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5f98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5f9b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11eb5f9e push eax */
  push32((uint32_t)(EAX));
  /* 11eb5f9f call 0x11eb6ec0 */
  push32(0x11eb5fa4u); f_11eb6ec0();
  /* 11eb5fa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5fa7:;
  /* 11eb5fa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5faa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5fae je 0x11eb5fc1 */
  if (C.zf) goto L_11eb5fc1;
  /* 11eb5fb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5fb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5fb5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11eb5fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5fb9 call 0x11eb6ec0 */
  push32(0x11eb5fbeu); f_11eb6ec0();
  /* 11eb5fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5fc1:;
  /* 11eb5fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5fc4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5fc8 je 0x11eb5fdb */
  if (C.zf) goto L_11eb5fdb;
  /* 11eb5fca push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5fcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5fcf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11eb5fd2 push eax */
  push32((uint32_t)(EAX));
  /* 11eb5fd3 call 0x11eb6ec0 */
  push32(0x11eb5fd8u); f_11eb6ec0();
  /* 11eb5fd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5fdb:;
  /* 11eb5fdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5fde cmp dword ptr [ecx + 0x50], 0x11ee0c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11ee0c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb5fe5 je 0x11eb5ff8 */
  if (C.zf) goto L_11eb5ff8;
  /* 11eb5fe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5fe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5fec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11eb5fef push eax */
  push32((uint32_t)(EAX));
  /* 11eb5ff0 call 0x11eb6ec0 */
  push32(0x11eb5ff5u); f_11eb6ec0();
  /* 11eb5ff5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb5ff8:;
  /* 11eb5ff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb5ffa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb5ffd push ecx */
  push32((uint32_t)(ECX));
  /* 11eb5ffe call 0x11eb6ec0 */
  push32(0x11eb6003u); f_11eb6ec0();
  /* 11eb6003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb6006:;
  /* 11eb6006 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6008 mov edx, dword ptr [0x11ee0a5c] */
  EDX = (r32((uint32_t)(0x11ee0a5c)));
  /* 11eb600e push edx */
  push32((uint32_t)(EDX));
  /* 11eb600f call dword ptr [0x11ee53bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53bc))), 0x11eb6015u);
L_11eb6015:;
  /* 11eb6015 pop ebp */
  EBP = (pop32());
  /* 11eb6016 ret  */
  ESPCHK(0x11eb5f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006020 @ 0x11eb6020 (11 bytes, 5 insns) */
void f_11eb6020(void) {
  FTRACE(0x11eb6020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6020 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6021 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6023 call dword ptr [0x11ee53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b8))), 0x11eb6029u);
  /* 11eb6029 pop ebp */
  EBP = (pop32());
  /* 11eb602a ret  */
  ESPCHK(0x11eb6020u, _esp0);
  ESP += 4; return;
}

/* FUN_10006030 @ 0x11eb6030 (11 bytes, 5 insns) */
void f_11eb6030(void) {
  FTRACE(0x11eb6030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6030 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6031 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6033 call dword ptr [0x11ee53d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53d0))), 0x11eb6039u);
  /* 11eb6039 pop ebp */
  EBP = (pop32());
  /* 11eb603a ret  */
  ESPCHK(0x11eb6030u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x11eb6040 (804 bytes, 236 insns) */
void f_11eb6040(void) {
  FTRACE(0x11eb6040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6040 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6041 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6043 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6046 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11eb604b push 0x11edd784 */
  push32((uint32_t)(0x11edd784u));
  /* 11eb6050 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6052 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11eb6057 call 0x11eb6430 */
  push32(0x11eb605cu); f_11eb6430();
  /* 11eb605c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb605f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11eb6062 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6066 jne 0x11eb6072 */
  if (!C.zf) goto L_11eb6072;
  /* 11eb6068 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11eb606a call 0x11eb53a0 */
  push32(0x11eb606fu); f_11eb53a0();
  /* 11eb606f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb6072:;
  /* 11eb6072 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6075 mov dword ptr [0x11ee4160], eax */
  w32((uint32_t)(0x11ee4160), (EAX));
  /* 11eb607a mov dword ptr [0x11ee429c], 0x20 */
  w32((uint32_t)(0x11ee429c), (0x20u));
  /* 11eb6084 jmp 0x11eb608f */
  goto L_11eb608f;
L_11eb6086:;
  /* 11eb6086 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6089 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb608c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11eb608f:;
  /* 11eb608f mov edx, dword ptr [0x11ee4160] */
  EDX = (r32((uint32_t)(0x11ee4160)));
  /* 11eb6095 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb609b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb609e jae 0x11eb60c3 */
  if (!C.cf) goto L_11eb60c3;
  /* 11eb60a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb60a3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11eb60a7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb60aa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11eb60b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb60b3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11eb60b7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb60ba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11eb60c1 jmp 0x11eb6086 */
  goto L_11eb6086;
L_11eb60c3:;
  /* 11eb60c3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11eb60c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb60c7 call dword ptr [0x11ee53dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53dc))), 0x11eb60cdu);
  /* 11eb60cd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11eb60d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb60d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb60d8 je 0x11eb6265 */
  if (C.zf) goto L_11eb6265;
  /* 11eb60de cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb60e2 je 0x11eb6265 */
  if (C.zf) goto L_11eb6265;
  /* 11eb60e8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb60eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb60ed mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11eb60f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb60f3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb60f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb60f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb60fc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb60ff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11eb6102 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6109 jge 0x11eb6113 */
  if ((C.sf==C.of)) goto L_11eb6113;
  /* 11eb610b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11eb610e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11eb6111 jmp 0x11eb611a */
  goto L_11eb611a;
L_11eb6113:;
  /* 11eb6113 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11eb611a:;
  /* 11eb611a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11eb611d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11eb6120 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11eb6127 jmp 0x11eb6132 */
  goto L_11eb6132;
L_11eb6129:;
  /* 11eb6129 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11eb612c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb612f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11eb6132:;
  /* 11eb6132 mov ecx, dword ptr [0x11ee429c] */
  ECX = (r32((uint32_t)(0x11ee429c)));
  /* 11eb6138 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb613b jge 0x11eb61d2 */
  if ((C.sf==C.of)) goto L_11eb61d2;
  /* 11eb6141 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11eb6146 push 0x11edd784 */
  push32((uint32_t)(0x11edd784u));
  /* 11eb614b push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb614d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11eb6152 call 0x11eb6430 */
  push32(0x11eb6157u); f_11eb6430();
  /* 11eb6157 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb615a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11eb615d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6161 jne 0x11eb616e */
  if (!C.zf) goto L_11eb616e;
  /* 11eb6163 mov edx, dword ptr [0x11ee429c] */
  EDX = (r32((uint32_t)(0x11ee429c)));
  /* 11eb6169 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11eb616c jmp 0x11eb61d2 */
  goto L_11eb61d2;
L_11eb616e:;
  /* 11eb616e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11eb6171 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6174 mov dword ptr [eax*4 + 0x11ee4160], ecx */
  w32((uint32_t)(EAX*4 + 0x11ee4160), (ECX));
  /* 11eb617b mov edx, dword ptr [0x11ee429c] */
  EDX = (r32((uint32_t)(0x11ee429c)));
  /* 11eb6181 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6184 mov dword ptr [0x11ee429c], edx */
  w32((uint32_t)(0x11ee429c), (EDX));
  /* 11eb618a jmp 0x11eb6195 */
  goto L_11eb6195;
L_11eb618c:;
  /* 11eb618c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb618f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6192 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11eb6195:;
  /* 11eb6195 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11eb6198 mov edx, dword ptr [ecx*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee4160)));
  /* 11eb619f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb61a5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb61a8 jae 0x11eb61cd */
  if (!C.cf) goto L_11eb61cd;
  /* 11eb61aa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb61ad mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11eb61b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb61b4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11eb61ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb61bd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11eb61c1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb61c4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11eb61cb jmp 0x11eb618c */
  goto L_11eb618c;
L_11eb61cd:;
  /* 11eb61cd jmp 0x11eb6129 */
  goto L_11eb6129;
L_11eb61d2:;
  /* 11eb61d2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11eb61d9 jmp 0x11eb61f6 */
  goto L_11eb61f6;
L_11eb61db:;
  /* 11eb61db mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eb61de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb61e1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11eb61e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb61e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb61ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb61ed mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11eb61f0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb61f3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11eb61f6:;
  /* 11eb61f6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eb61f9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb61fc jge 0x11eb6265 */
  if ((C.sf==C.of)) goto L_11eb6265;
  /* 11eb61fe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11eb6201 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6204 je 0x11eb6260 */
  if (C.zf) goto L_11eb6260;
  /* 11eb6206 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6209 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb620c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb620f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb6211 je 0x11eb6260 */
  if (C.zf) goto L_11eb6260;
  /* 11eb6213 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6216 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eb6219 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb621c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb621e jne 0x11eb6230 */
  if (!C.zf) goto L_11eb6230;
  /* 11eb6220 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11eb6223 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb6225 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6226 call dword ptr [0x11ee53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53d8))), 0x11eb622cu);
  /* 11eb622c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb622e je 0x11eb6260 */
  if (C.zf) goto L_11eb6260;
L_11eb6230:;
  /* 11eb6230 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eb6233 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11eb6236 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eb6239 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb623c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb623f mov edx, dword ptr [eax*4 + 0x11ee4160] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11eb6246 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6248 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11eb624b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb624e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11eb6251 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb6253 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11eb6255 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6258 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb625b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb625d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11eb6260:;
  /* 11eb6260 jmp 0x11eb61db */
  goto L_11eb61db;
L_11eb6265:;
  /* 11eb6265 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11eb626c jmp 0x11eb6277 */
  goto L_11eb6277;
L_11eb626e:;
  /* 11eb626e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eb6271 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6274 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11eb6277:;
  /* 11eb6277 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb627b jge 0x11eb6354 */
  if ((C.sf==C.of)) goto L_11eb6354;
  /* 11eb6281 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eb6284 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb6287 mov edx, dword ptr [0x11ee4160] */
  EDX = (r32((uint32_t)(0x11ee4160)));
  /* 11eb628d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb628f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11eb6292 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6295 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6298 jne 0x11eb6340 */
  if (!C.zf) goto L_11eb6340;
  /* 11eb629e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb62a1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11eb62a5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb62a9 jne 0x11eb62b4 */
  if (!C.zf) goto L_11eb62b4;
  /* 11eb62ab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11eb62b2 jmp 0x11eb62c4 */
  goto L_11eb62c4;
L_11eb62b4:;
  /* 11eb62b4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11eb62b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb62ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11eb62bc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb62be add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb62c1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11eb62c4:;
  /* 11eb62c4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11eb62c7 push eax */
  push32((uint32_t)(EAX));
  /* 11eb62c8 call dword ptr [0x11ee538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee538c))), 0x11eb62ceu);
  /* 11eb62ce mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11eb62d1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb62d5 je 0x11eb632f */
  if (C.zf) goto L_11eb632f;
  /* 11eb62d7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eb62da push ecx */
  push32((uint32_t)(ECX));
  /* 11eb62db call dword ptr [0x11ee53d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53d8))), 0x11eb62e1u);
  /* 11eb62e1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11eb62e4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb62e8 je 0x11eb632f */
  if (C.zf) goto L_11eb632f;
  /* 11eb62ea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb62ed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eb62f0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11eb62f2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11eb62f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb62fb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb62fe jne 0x11eb6310 */
  if (!C.zf) goto L_11eb6310;
  /* 11eb6300 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6303 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11eb6306 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11eb6308 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb630b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11eb630e jmp 0x11eb632d */
  goto L_11eb632d;
L_11eb6310:;
  /* 11eb6310 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11eb6313 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb6319 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb631c jne 0x11eb632d */
  if (!C.zf) goto L_11eb632d;
  /* 11eb631e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6321 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11eb6324 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11eb6327 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb632a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11eb632d:;
  /* 11eb632d jmp 0x11eb633e */
  goto L_11eb633e;
L_11eb632f:;
  /* 11eb632f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6332 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11eb6335 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11eb6338 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb633b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11eb633e:;
  /* 11eb633e jmp 0x11eb634f */
  goto L_11eb634f;
L_11eb6340:;
  /* 11eb6340 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb6343 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11eb6346 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11eb6349 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb634c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11eb634f:;
  /* 11eb634f jmp 0x11eb626e */
  goto L_11eb626e;
L_11eb6354:;
  /* 11eb6354 mov eax, dword ptr [0x11ee429c] */
  EAX = (r32((uint32_t)(0x11ee429c)));
  /* 11eb6359 push eax */
  push32((uint32_t)(EAX));
  /* 11eb635a call dword ptr [0x11ee53d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53d4))), 0x11eb6360u);
  /* 11eb6360 mov esp, ebp */
  ESP = (EBP);
  /* 11eb6362 pop ebp */
  EBP = (pop32());
  /* 11eb6363 ret  */
  ESPCHK(0x11eb6040u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11eb6370 (155 bytes, 45 insns) */
void f_11eb6370(void) {
  FTRACE(0x11eb6370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6370 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6371 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6376 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eb637d jmp 0x11eb6388 */
  goto L_11eb6388;
L_11eb637f:;
  /* 11eb637f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6382 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6385 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11eb6388:;
  /* 11eb6388 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb638c jge 0x11eb6407 */
  if ((C.sf==C.of)) goto L_11eb6407;
  /* 11eb638e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6391 cmp dword ptr [ecx*4 + 0x11ee4160], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11ee4160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6399 je 0x11eb6402 */
  if (C.zf) goto L_11eb6402;
  /* 11eb639b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb639e mov eax, dword ptr [edx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11eb63a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb63a8 jmp 0x11eb63b3 */
  goto L_11eb63b3;
L_11eb63aa:;
  /* 11eb63aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb63ad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb63b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb63b3:;
  /* 11eb63b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb63b6 mov eax, dword ptr [edx*4 + 0x11ee4160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee4160)));
  /* 11eb63bd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb63c2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb63c5 jae 0x11eb63df */
  if (!C.cf) goto L_11eb63df;
  /* 11eb63c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb63ca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb63ce je 0x11eb63dd */
  if (C.zf) goto L_11eb63dd;
  /* 11eb63d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb63d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb63d6 push edx */
  push32((uint32_t)(EDX));
  /* 11eb63d7 call dword ptr [0x11ee53e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e0))), 0x11eb63ddu);
L_11eb63dd:;
  /* 11eb63dd jmp 0x11eb63aa */
  goto L_11eb63aa;
L_11eb63df:;
  /* 11eb63df push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb63e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb63e4 mov ecx, dword ptr [eax*4 + 0x11ee4160] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ee4160)));
  /* 11eb63eb push ecx */
  push32((uint32_t)(ECX));
  /* 11eb63ec call 0x11eb6ec0 */
  push32(0x11eb63f1u); f_11eb6ec0();
  /* 11eb63f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb63f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb63f7 mov dword ptr [edx*4 + 0x11ee4160], 0 */
  w32((uint32_t)(EDX*4 + 0x11ee4160), (0x0u));
L_11eb6402:;
  /* 11eb6402 jmp 0x11eb637f */
  goto L_11eb637f;
L_11eb6407:;
  /* 11eb6407 mov esp, ebp */
  ESP = (EBP);
  /* 11eb6409 pop ebp */
  EBP = (pop32());
  /* 11eb640a ret  */
  ESPCHK(0x11eb6370u, _esp0);
  ESP += 4; return;
}

/* FUN_10006410 @ 0x11eb6410 (29 bytes, 13 insns) */
void f_11eb6410(void) {
  FTRACE(0x11eb6410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6410 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6411 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6413 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6415 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6417 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6419 mov eax, dword ptr [0x11ee2970] */
  EAX = (r32((uint32_t)(0x11ee2970)));
  /* 11eb641e push eax */
  push32((uint32_t)(EAX));
  /* 11eb641f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6422 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6423 call 0x11eb6480 */
  push32(0x11eb6428u); f_11eb6480();
  /* 11eb6428 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb642b pop ebp */
  EBP = (pop32());
  /* 11eb642c ret  */
  ESPCHK(0x11eb6410u, _esp0);
  ESP += 4; return;
}

/* FUN_10006430 @ 0x11eb6430 (35 bytes, 16 insns) */
void f_11eb6430(void) {
  FTRACE(0x11eb6430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6430 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6431 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6433 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb6436 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6437 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb643a push ecx */
  push32((uint32_t)(ECX));
  /* 11eb643b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb643e push edx */
  push32((uint32_t)(EDX));
  /* 11eb643f mov eax, dword ptr [0x11ee2970] */
  EAX = (r32((uint32_t)(0x11ee2970)));
  /* 11eb6444 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6445 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6448 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6449 call 0x11eb6480 */
  push32(0x11eb644eu); f_11eb6480();
  /* 11eb644e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6451 pop ebp */
  EBP = (pop32());
  /* 11eb6452 ret  */
  ESPCHK(0x11eb6430u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x11eb6460 (27 bytes, 13 insns) */
void f_11eb6460(void) {
  FTRACE(0x11eb6460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6460 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6461 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6463 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6465 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6467 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6469 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb646c push eax */
  push32((uint32_t)(EAX));
  /* 11eb646d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6470 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6471 call 0x11eb6480 */
  push32(0x11eb6476u); f_11eb6480();
  /* 11eb6476 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6479 pop ebp */
  EBP = (pop32());
  /* 11eb647a ret  */
  ESPCHK(0x11eb6460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006480 @ 0x11eb6480 (94 bytes, 38 insns) */
void f_11eb6480(void) {
  FTRACE(0x11eb6480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6480 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6481 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6483 push ecx */
  push32((uint32_t)(ECX));
L_11eb6484:;
  /* 11eb6484 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb6486 call 0x11eb9e30 */
  push32(0x11eb648bu); f_11eb9e30();
  /* 11eb648b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb648e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb6491 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6492 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb6495 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6496 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6499 push edx */
  push32((uint32_t)(EDX));
  /* 11eb649a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb649d push eax */
  push32((uint32_t)(EAX));
  /* 11eb649e call 0x11eb6500 */
  push32(0x11eb64a3u); f_11eb6500();
  /* 11eb64a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb64a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb64a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb64ab call 0x11eb9ed0 */
  push32(0x11eb64b0u); f_11eb9ed0();
  /* 11eb64b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb64b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb64b7 jne 0x11eb64bf */
  if (!C.zf) goto L_11eb64bf;
  /* 11eb64b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb64bd jne 0x11eb64c4 */
  if (!C.zf) goto L_11eb64c4;
L_11eb64bf:;
  /* 11eb64bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb64c2 jmp 0x11eb64da */
  goto L_11eb64da;
L_11eb64c4:;
  /* 11eb64c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb64c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb64c8 call 0x11eba170 */
  push32(0x11eb64cdu); f_11eba170();
  /* 11eb64cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb64d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb64d2 jne 0x11eb64d8 */
  if (!C.zf) goto L_11eb64d8;
  /* 11eb64d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb64d6 jmp 0x11eb64da */
  goto L_11eb64da;
L_11eb64d8:;
  /* 11eb64d8 jmp 0x11eb6484 */
  goto L_11eb6484;
L_11eb64da:;
  /* 11eb64da mov esp, ebp */
  ESP = (EBP);
  /* 11eb64dc pop ebp */
  EBP = (pop32());
  /* 11eb64dd ret  */
  ESPCHK(0x11eb6480u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x11eb64e0 (23 bytes, 11 insns) */
void f_11eb64e0(void) {
  FTRACE(0x11eb64e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb64e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb64e1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb64e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb64e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb64e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb64e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb64ec push eax */
  push32((uint32_t)(EAX));
  /* 11eb64ed call 0x11eb6500 */
  push32(0x11eb64f2u); f_11eb6500();
  /* 11eb64f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb64f5 pop ebp */
  EBP = (pop32());
  /* 11eb64f6 ret  */
  ESPCHK(0x11eb64e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x11eb6500 (787 bytes, 254 insns) */
void f_11eb6500(void) {
  FTRACE(0x11eb6500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6500 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6501 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6503 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6506 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb6507 push esi */
  push32((uint32_t)(ESI));
  /* 11eb6508 push edi */
  push32((uint32_t)(EDI));
  /* 11eb6509 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11eb6510 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb6515 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb651a je 0x11eb654c */
  if (C.zf) goto L_11eb654c;
L_11eb651c:;
  /* 11eb651c call 0x11eb75d0 */
  push32(0x11eb6521u); f_11eb75d0();
  /* 11eb6521 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6523 jne 0x11eb6546 */
  if (!C.zf) goto L_11eb6546;
  /* 11eb6525 push 0x11edd878 */
  push32((uint32_t)(0x11edd878u));
  /* 11eb652a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb652c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11eb6531 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6536 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6538 call 0x11eb54f0 */
  push32(0x11eb653du); f_11eb54f0();
  /* 11eb653d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6540 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6543 jne 0x11eb6546 */
  if (!C.zf) goto L_11eb6546;
  /* 11eb6545 int3  */
  x86_unimpl("int3 @ 0x11eb6545");
L_11eb6546:;
  /* 11eb6546 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6548 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb654a jne 0x11eb651c */
  if (!C.zf) goto L_11eb651c;
L_11eb654c:;
  /* 11eb654c mov edx, dword ptr [0x11ee0a88] */
  EDX = (r32((uint32_t)(0x11ee0a88)));
  /* 11eb6552 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11eb6555 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6558 cmp eax, dword ptr [0x11ee0a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee0a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb655e jne 0x11eb6561 */
  if (!C.zf) goto L_11eb6561;
  /* 11eb6560 int3  */
  x86_unimpl("int3 @ 0x11eb6560");
L_11eb6561:;
  /* 11eb6561 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb6564 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6565 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6568 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6569 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb656c push eax */
  push32((uint32_t)(EAX));
  /* 11eb656d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6570 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6574 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6575 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6577 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6579 call dword ptr [0x11ee0c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee0c90))), 0x11eb657fu);
  /* 11eb657f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6584 jne 0x11eb65e4 */
  if (!C.zf) goto L_11eb65e4;
  /* 11eb6586 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb658a je 0x11eb65b7 */
  if (C.zf) goto L_11eb65b7;
L_11eb658c:;
  /* 11eb658c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb658f push eax */
  push32((uint32_t)(EAX));
  /* 11eb6590 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6593 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6594 push 0x11edd834 */
  push32((uint32_t)(0x11edd834u));
  /* 11eb6599 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb659b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb659d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb659f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb65a1 call 0x11eb54f0 */
  push32(0x11eb65a6u); f_11eb54f0();
  /* 11eb65a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb65a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb65ac jne 0x11eb65af */
  if (!C.zf) goto L_11eb65af;
  /* 11eb65ae int3  */
  x86_unimpl("int3 @ 0x11eb65ae");
L_11eb65af:;
  /* 11eb65af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb65b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb65b3 jne 0x11eb658c */
  if (!C.zf) goto L_11eb658c;
  /* 11eb65b5 jmp 0x11eb65dd */
  goto L_11eb65dd;
L_11eb65b7:;
  /* 11eb65b7 push 0x11edd810 */
  push32((uint32_t)(0x11edd810u));
  /* 11eb65bc push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb65c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb65c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb65c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb65c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb65c9 call 0x11eb54f0 */
  push32(0x11eb65ceu); f_11eb54f0();
  /* 11eb65ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb65d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb65d4 jne 0x11eb65d7 */
  if (!C.zf) goto L_11eb65d7;
  /* 11eb65d6 int3  */
  x86_unimpl("int3 @ 0x11eb65d6");
L_11eb65d7:;
  /* 11eb65d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb65d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb65db jne 0x11eb65b7 */
  if (!C.zf) goto L_11eb65b7;
L_11eb65dd:;
  /* 11eb65dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb65df jmp 0x11eb680c */
  goto L_11eb680c;
L_11eb65e4:;
  /* 11eb65e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb65e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb65ed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb65f0 je 0x11eb6606 */
  if (C.zf) goto L_11eb6606;
  /* 11eb65f2 mov edx, dword ptr [0x11ee0a84] */
  EDX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb65f8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11eb65fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb65fd jne 0x11eb6606 */
  if (!C.zf) goto L_11eb6606;
  /* 11eb65ff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11eb6606:;
  /* 11eb6606 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb660a ja 0x11eb6617 */
  if ((!C.cf&&!C.zf)) goto L_11eb6617;
  /* 11eb660c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb660f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6612 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6615 jbe 0x11eb6643 */
  if ((C.cf||C.zf)) goto L_11eb6643;
L_11eb6617:;
  /* 11eb6617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb661a push ecx */
  push32((uint32_t)(ECX));
  /* 11eb661b push 0x11edd7e8 */
  push32((uint32_t)(0x11edd7e8u));
  /* 11eb6620 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6622 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6624 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6626 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6628 call 0x11eb54f0 */
  push32(0x11eb662du); f_11eb54f0();
  /* 11eb662d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6630 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6633 jne 0x11eb6636 */
  if (!C.zf) goto L_11eb6636;
  /* 11eb6635 int3  */
  x86_unimpl("int3 @ 0x11eb6635");
L_11eb6636:;
  /* 11eb6636 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb6638 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb663a jne 0x11eb6617 */
  if (!C.zf) goto L_11eb6617;
  /* 11eb663c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb663e jmp 0x11eb680c */
  goto L_11eb680c;
L_11eb6643:;
  /* 11eb6643 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6646 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb664b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb664e je 0x11eb6690 */
  if (C.zf) goto L_11eb6690;
  /* 11eb6650 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6654 je 0x11eb6690 */
  if (C.zf) goto L_11eb6690;
  /* 11eb6656 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6659 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb665f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6662 je 0x11eb6690 */
  if (C.zf) goto L_11eb6690;
  /* 11eb6664 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6668 je 0x11eb6690 */
  if (C.zf) goto L_11eb6690;
L_11eb666a:;
  /* 11eb666a push 0x11edd7b4 */
  push32((uint32_t)(0x11edd7b4u));
  /* 11eb666f push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb6674 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6676 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6678 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb667a push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb667c call 0x11eb54f0 */
  push32(0x11eb6681u); f_11eb54f0();
  /* 11eb6681 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6687 jne 0x11eb668a */
  if (!C.zf) goto L_11eb668a;
  /* 11eb6689 int3  */
  x86_unimpl("int3 @ 0x11eb6689");
L_11eb668a:;
  /* 11eb668a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb668c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb668e jne 0x11eb666a */
  if (!C.zf) goto L_11eb666a;
L_11eb6690:;
  /* 11eb6690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6693 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6696 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eb6699 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb669c push ecx */
  push32((uint32_t)(ECX));
  /* 11eb669d call 0x11eba280 */
  push32(0x11eb66a2u); f_11eba280();
  /* 11eb66a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb66a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb66a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb66ac jne 0x11eb66b5 */
  if (!C.zf) goto L_11eb66b5;
  /* 11eb66ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb66b0 jmp 0x11eb680c */
  goto L_11eb680c;
L_11eb66b5:;
  /* 11eb66b5 mov edx, dword ptr [0x11ee0a88] */
  EDX = (r32((uint32_t)(0x11ee0a88)));
  /* 11eb66bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb66be mov dword ptr [0x11ee0a88], edx */
  w32((uint32_t)(0x11ee0a88), (EDX));
  /* 11eb66c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb66c8 je 0x11eb6713 */
  if (C.zf) goto L_11eb6713;
  /* 11eb66ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb66cd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11eb66d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb66d6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11eb66dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb66e0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11eb66e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb66ea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11eb66f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb66f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb66f7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11eb66fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb66fd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11eb6704 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6707 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11eb670e jmp 0x11eb67b3 */
  goto L_11eb67b3;
L_11eb6713:;
  /* 11eb6713 mov edx, dword ptr [0x11ee27d0] */
  EDX = (r32((uint32_t)(0x11ee27d0)));
  /* 11eb6719 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb671c mov dword ptr [0x11ee27d0], edx */
  w32((uint32_t)(0x11ee27d0), (EDX));
  /* 11eb6722 mov eax, dword ptr [0x11ee27d8] */
  EAX = (r32((uint32_t)(0x11ee27d8)));
  /* 11eb6727 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb672a mov dword ptr [0x11ee27d8], eax */
  w32((uint32_t)(0x11ee27d8), (EAX));
  /* 11eb672f mov ecx, dword ptr [0x11ee27d8] */
  ECX = (r32((uint32_t)(0x11ee27d8)));
  /* 11eb6735 cmp ecx, dword ptr [0x11ee27dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee27dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb673b jbe 0x11eb6749 */
  if ((C.cf||C.zf)) goto L_11eb6749;
  /* 11eb673d mov edx, dword ptr [0x11ee27d8] */
  EDX = (r32((uint32_t)(0x11ee27d8)));
  /* 11eb6743 mov dword ptr [0x11ee27dc], edx */
  w32((uint32_t)(0x11ee27dc), (EDX));
L_11eb6749:;
  /* 11eb6749 cmp dword ptr [0x11ee27d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6750 je 0x11eb675f */
  if (C.zf) goto L_11eb675f;
  /* 11eb6752 mov eax, dword ptr [0x11ee27d4] */
  EAX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb6757 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb675a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11eb675d jmp 0x11eb6768 */
  goto L_11eb6768;
L_11eb675f:;
  /* 11eb675f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6762 mov dword ptr [0x11ee27cc], edx */
  w32((uint32_t)(0x11ee27cc), (EDX));
L_11eb6768:;
  /* 11eb6768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb676b mov ecx, dword ptr [0x11ee27d4] */
  ECX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb6771 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11eb6773 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6776 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11eb677d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6780 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6783 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11eb6786 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6789 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb678c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11eb678f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6792 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6795 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11eb6798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb679b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb679e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11eb67a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb67a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb67a7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11eb67aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb67ad mov dword ptr [0x11ee27d4], ecx */
  w32((uint32_t)(0x11ee27d4), (ECX));
L_11eb67b3:;
  /* 11eb67b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb67b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb67b7 mov dl, byte ptr [0x11ee0a90] */
  DL = (r8((uint32_t)(0x11ee0a90)));
  /* 11eb67bd push edx */
  push32((uint32_t)(EDX));
  /* 11eb67be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb67c1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb67c4 push eax */
  push32((uint32_t)(EAX));
  /* 11eb67c5 call 0x11eba1a0 */
  push32(0x11eb67cau); f_11eba1a0();
  /* 11eb67ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb67cd push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb67cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb67d1 mov cl, byte ptr [0x11ee0a90] */
  CL = (r8((uint32_t)(0x11ee0a90)));
  /* 11eb67d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb67d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb67db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb67de lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11eb67e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb67e3 call 0x11eba1a0 */
  push32(0x11eb67e8u); f_11eba1a0();
  /* 11eb67e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb67eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb67ee push edx */
  push32((uint32_t)(EDX));
  /* 11eb67ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb67f1 mov al, byte ptr [0x11ee0a92] */
  AL = (r8((uint32_t)(0x11ee0a92)));
  /* 11eb67f6 push eax */
  push32((uint32_t)(EAX));
  /* 11eb67f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb67fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb67fd push ecx */
  push32((uint32_t)(ECX));
  /* 11eb67fe call 0x11eba1a0 */
  push32(0x11eb6803u); f_11eba1a0();
  /* 11eb6803 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6806 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6809 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11eb680c:;
  /* 11eb680c pop edi */
  EDI = (pop32());
  /* 11eb680d pop esi */
  ESI = (pop32());
  /* 11eb680e pop ebx */
  EBX = (pop32());
  /* 11eb680f mov esp, ebp */
  ESP = (EBP);
  /* 11eb6811 pop ebp */
  EBP = (pop32());
  /* 11eb6812 ret  */
  ESPCHK(0x11eb6500u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x11eb6820 (27 bytes, 13 insns) */
void f_11eb6820(void) {
  FTRACE(0x11eb6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6820 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6821 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6823 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6825 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6827 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6829 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb682c push eax */
  push32((uint32_t)(EAX));
  /* 11eb682d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6830 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6831 call 0x11eb6840 */
  push32(0x11eb6836u); f_11eb6840();
  /* 11eb6836 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6839 pop ebp */
  EBP = (pop32());
  /* 11eb683a ret  */
  ESPCHK(0x11eb6820u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11eb6840 (96 bytes, 37 insns) */
void f_11eb6840(void) {
  FTRACE(0x11eb6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6840 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6841 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6846 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6849 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb684d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11eb6850 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb6853 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6854 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb6857 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6858 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb685b push eax */
  push32((uint32_t)(EAX));
  /* 11eb685c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb685f push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6860 call 0x11eb6430 */
  push32(0x11eb6865u); f_11eb6430();
  /* 11eb6865 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6868 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb686b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb686f je 0x11eb6899 */
  if (C.zf) goto L_11eb6899;
  /* 11eb6871 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6874 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11eb6877 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb687a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb687d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb6880:;
  /* 11eb6880 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6883 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6886 jae 0x11eb6899 */
  if (!C.cf) goto L_11eb6899;
  /* 11eb6888 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb688b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11eb688e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6891 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6894 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb6897 jmp 0x11eb6880 */
  goto L_11eb6880;
L_11eb6899:;
  /* 11eb6899 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb689c mov esp, ebp */
  ESP = (EBP);
  /* 11eb689e pop ebp */
  EBP = (pop32());
  /* 11eb689f ret  */
  ESPCHK(0x11eb6840u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x11eb68a0 (27 bytes, 13 insns) */
void f_11eb68a0(void) {
  FTRACE(0x11eb68a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb68a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb68a1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb68a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb68a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb68a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb68a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb68ac push eax */
  push32((uint32_t)(EAX));
  /* 11eb68ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb68b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb68b1 call 0x11eb68c0 */
  push32(0x11eb68b6u); f_11eb68c0();
  /* 11eb68b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb68b9 pop ebp */
  EBP = (pop32());
  /* 11eb68ba ret  */
  ESPCHK(0x11eb68a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x11eb68c0 (64 bytes, 27 insns) */
void f_11eb68c0(void) {
  FTRACE(0x11eb68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb68c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb68c1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb68c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb68c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb68c6 call 0x11eb9e30 */
  push32(0x11eb68cbu); f_11eb9e30();
  /* 11eb68cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb68ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb68d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb68d3 push eax */
  push32((uint32_t)(EAX));
  /* 11eb68d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb68d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb68d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb68db push edx */
  push32((uint32_t)(EDX));
  /* 11eb68dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb68df push eax */
  push32((uint32_t)(EAX));
  /* 11eb68e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb68e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb68e4 call 0x11eb6900 */
  push32(0x11eb68e9u); f_11eb6900();
  /* 11eb68e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb68ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb68ef push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb68f1 call 0x11eb9ed0 */
  push32(0x11eb68f6u); f_11eb9ed0();
  /* 11eb68f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb68f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb68fc mov esp, ebp */
  ESP = (EBP);
  /* 11eb68fe pop ebp */
  EBP = (pop32());
  /* 11eb68ff ret  */
  ESPCHK(0x11eb68c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x11eb6900 (1297 bytes, 431 insns) */
void f_11eb6900(void) {
  FTRACE(0x11eb6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6900 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6901 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6903 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6906 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb6907 push esi */
  push32((uint32_t)(ESI));
  /* 11eb6908 push edi */
  push32((uint32_t)(EDI));
  /* 11eb6909 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11eb6910 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6914 jne 0x11eb6933 */
  if (!C.zf) goto L_11eb6933;
  /* 11eb6916 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb6919 push eax */
  push32((uint32_t)(EAX));
  /* 11eb691a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb691d push ecx */
  push32((uint32_t)(ECX));
  /* 11eb691e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6921 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6922 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6925 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6926 call 0x11eb6430 */
  push32(0x11eb692bu); f_11eb6430();
  /* 11eb692b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb692e jmp 0x11eb6e0a */
  goto L_11eb6e0a;
L_11eb6933:;
  /* 11eb6933 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6937 je 0x11eb6956 */
  if (C.zf) goto L_11eb6956;
  /* 11eb6939 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb693d jne 0x11eb6956 */
  if (!C.zf) goto L_11eb6956;
  /* 11eb693f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6942 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6943 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6946 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6947 call 0x11eb6ec0 */
  push32(0x11eb694cu); f_11eb6ec0();
  /* 11eb694c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb694f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6951 jmp 0x11eb6e0a */
  goto L_11eb6e0a;
L_11eb6956:;
  /* 11eb6956 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb695b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb695e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6960 je 0x11eb6992 */
  if (C.zf) goto L_11eb6992;
L_11eb6962:;
  /* 11eb6962 call 0x11eb75d0 */
  push32(0x11eb6967u); f_11eb75d0();
  /* 11eb6967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6969 jne 0x11eb698c */
  if (!C.zf) goto L_11eb698c;
  /* 11eb696b push 0x11edd878 */
  push32((uint32_t)(0x11edd878u));
  /* 11eb6970 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6972 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11eb6977 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb697c push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb697e call 0x11eb54f0 */
  push32(0x11eb6983u); f_11eb54f0();
  /* 11eb6983 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6986 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6989 jne 0x11eb698c */
  if (!C.zf) goto L_11eb698c;
  /* 11eb698b int3  */
  x86_unimpl("int3 @ 0x11eb698b");
L_11eb698c:;
  /* 11eb698c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb698e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb6990 jne 0x11eb6962 */
  if (!C.zf) goto L_11eb6962;
L_11eb6992:;
  /* 11eb6992 mov edx, dword ptr [0x11ee0a88] */
  EDX = (r32((uint32_t)(0x11ee0a88)));
  /* 11eb6998 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11eb699b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb699e cmp eax, dword ptr [0x11ee0a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee0a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb69a4 jne 0x11eb69a7 */
  if (!C.zf) goto L_11eb69a7;
  /* 11eb69a6 int3  */
  x86_unimpl("int3 @ 0x11eb69a6");
L_11eb69a7:;
  /* 11eb69a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb69aa push ecx */
  push32((uint32_t)(ECX));
  /* 11eb69ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb69ae push edx */
  push32((uint32_t)(EDX));
  /* 11eb69af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb69b2 push eax */
  push32((uint32_t)(EAX));
  /* 11eb69b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb69b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb69b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb69ba push edx */
  push32((uint32_t)(EDX));
  /* 11eb69bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb69be push eax */
  push32((uint32_t)(EAX));
  /* 11eb69bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb69c1 call dword ptr [0x11ee0c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee0c90))), 0x11eb69c7u);
  /* 11eb69c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb69ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb69cc jne 0x11eb6a2c */
  if (!C.zf) goto L_11eb6a2c;
  /* 11eb69ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb69d2 je 0x11eb69ff */
  if (C.zf) goto L_11eb69ff;
L_11eb69d4:;
  /* 11eb69d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb69d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb69d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb69db push edx */
  push32((uint32_t)(EDX));
  /* 11eb69dc push 0x11edd9f4 */
  push32((uint32_t)(0x11edd9f4u));
  /* 11eb69e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb69e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb69e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb69e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb69e9 call 0x11eb54f0 */
  push32(0x11eb69eeu); f_11eb54f0();
  /* 11eb69ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb69f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb69f4 jne 0x11eb69f7 */
  if (!C.zf) goto L_11eb69f7;
  /* 11eb69f6 int3  */
  x86_unimpl("int3 @ 0x11eb69f6");
L_11eb69f7:;
  /* 11eb69f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb69f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb69fb jne 0x11eb69d4 */
  if (!C.zf) goto L_11eb69d4;
  /* 11eb69fd jmp 0x11eb6a25 */
  goto L_11eb6a25;
L_11eb69ff:;
  /* 11eb69ff push 0x11edd9d0 */
  push32((uint32_t)(0x11edd9d0u));
  /* 11eb6a04 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb6a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a11 call 0x11eb54f0 */
  push32(0x11eb6a16u); f_11eb54f0();
  /* 11eb6a16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6a19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6a1c jne 0x11eb6a1f */
  if (!C.zf) goto L_11eb6a1f;
  /* 11eb6a1e int3  */
  x86_unimpl("int3 @ 0x11eb6a1e");
L_11eb6a1f:;
  /* 11eb6a1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6a21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb6a23 jne 0x11eb69ff */
  if (!C.zf) goto L_11eb69ff;
L_11eb6a25:;
  /* 11eb6a25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6a27 jmp 0x11eb6e0a */
  goto L_11eb6e0a;
L_11eb6a2c:;
  /* 11eb6a2c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6a30 jbe 0x11eb6a5e */
  if ((C.cf||C.zf)) goto L_11eb6a5e;
L_11eb6a32:;
  /* 11eb6a32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6a35 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6a36 push 0x11edd9a0 */
  push32((uint32_t)(0x11edd9a0u));
  /* 11eb6a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6a43 call 0x11eb54f0 */
  push32(0x11eb6a48u); f_11eb54f0();
  /* 11eb6a48 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6a4b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6a4e jne 0x11eb6a51 */
  if (!C.zf) goto L_11eb6a51;
  /* 11eb6a50 int3  */
  x86_unimpl("int3 @ 0x11eb6a50");
L_11eb6a51:;
  /* 11eb6a51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6a53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6a55 jne 0x11eb6a32 */
  if (!C.zf) goto L_11eb6a32;
  /* 11eb6a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6a59 jmp 0x11eb6e0a */
  goto L_11eb6e0a;
L_11eb6a5e:;
  /* 11eb6a5e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6a62 je 0x11eb6aa6 */
  if (C.zf) goto L_11eb6aa6;
  /* 11eb6a64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6a67 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6a6d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6a70 je 0x11eb6aa6 */
  if (C.zf) goto L_11eb6aa6;
  /* 11eb6a72 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6a75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb6a7b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6a7e je 0x11eb6aa6 */
  if (C.zf) goto L_11eb6aa6;
L_11eb6a80:;
  /* 11eb6a80 push 0x11edd7b4 */
  push32((uint32_t)(0x11edd7b4u));
  /* 11eb6a85 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb6a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6a92 call 0x11eb54f0 */
  push32(0x11eb6a97u); f_11eb54f0();
  /* 11eb6a97 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6a9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6a9d jne 0x11eb6aa0 */
  if (!C.zf) goto L_11eb6aa0;
  /* 11eb6a9f int3  */
  x86_unimpl("int3 @ 0x11eb6a9f");
L_11eb6aa0:;
  /* 11eb6aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6aa4 jne 0x11eb6a80 */
  if (!C.zf) goto L_11eb6a80;
L_11eb6aa6:;
  /* 11eb6aa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6aaa call 0x11eb7a30 */
  push32(0x11eb6aafu); f_11eb7a30();
  /* 11eb6aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6ab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6ab4 jne 0x11eb6ad7 */
  if (!C.zf) goto L_11eb6ad7;
  /* 11eb6ab6 push 0x11edd97c */
  push32((uint32_t)(0x11edd97cu));
  /* 11eb6abb push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6abd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11eb6ac2 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6ac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6ac9 call 0x11eb54f0 */
  push32(0x11eb6aceu); f_11eb54f0();
  /* 11eb6ace add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6ad1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6ad4 jne 0x11eb6ad7 */
  if (!C.zf) goto L_11eb6ad7;
  /* 11eb6ad6 int3  */
  x86_unimpl("int3 @ 0x11eb6ad6");
L_11eb6ad7:;
  /* 11eb6ad7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb6ad9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb6adb jne 0x11eb6aa6 */
  if (!C.zf) goto L_11eb6aa6;
  /* 11eb6add mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6ae0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6ae3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb6ae6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6ae9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6aed jne 0x11eb6af6 */
  if (!C.zf) goto L_11eb6af6;
  /* 11eb6aef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11eb6af6:;
  /* 11eb6af6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6afa je 0x11eb6b3a */
  if (C.zf) goto L_11eb6b3a;
L_11eb6afc:;
  /* 11eb6afc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6aff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6b06 jne 0x11eb6b11 */
  if (!C.zf) goto L_11eb6b11;
  /* 11eb6b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6b0b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6b0f je 0x11eb6b32 */
  if (C.zf) goto L_11eb6b32;
L_11eb6b11:;
  /* 11eb6b11 push 0x11edd934 */
  push32((uint32_t)(0x11edd934u));
  /* 11eb6b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6b18 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11eb6b1d push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6b22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6b24 call 0x11eb54f0 */
  push32(0x11eb6b29u); f_11eb54f0();
  /* 11eb6b29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6b2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6b2f jne 0x11eb6b32 */
  if (!C.zf) goto L_11eb6b32;
  /* 11eb6b31 int3  */
  x86_unimpl("int3 @ 0x11eb6b31");
L_11eb6b32:;
  /* 11eb6b32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6b34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb6b36 jne 0x11eb6afc */
  if (!C.zf) goto L_11eb6afc;
  /* 11eb6b38 jmp 0x11eb6b9e */
  goto L_11eb6b9e;
L_11eb6b3a:;
  /* 11eb6b3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6b3d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb6b40 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6b45 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6b48 jne 0x11eb6b5f */
  if (!C.zf) goto L_11eb6b5f;
  /* 11eb6b4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6b4d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6b53 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6b56 jne 0x11eb6b5f */
  if (!C.zf) goto L_11eb6b5f;
  /* 11eb6b58 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11eb6b5f:;
  /* 11eb6b5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6b62 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb6b65 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6b6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6b6d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6b73 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6b75 je 0x11eb6b98 */
  if (C.zf) goto L_11eb6b98;
  /* 11eb6b77 push 0x11edd8f8 */
  push32((uint32_t)(0x11edd8f8u));
  /* 11eb6b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6b7e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11eb6b83 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6b88 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6b8a call 0x11eb54f0 */
  push32(0x11eb6b8fu); f_11eb54f0();
  /* 11eb6b8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6b92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6b95 jne 0x11eb6b98 */
  if (!C.zf) goto L_11eb6b98;
  /* 11eb6b97 int3  */
  x86_unimpl("int3 @ 0x11eb6b97");
L_11eb6b98:;
  /* 11eb6b98 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb6b9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb6b9c jne 0x11eb6b5f */
  if (!C.zf) goto L_11eb6b5f;
L_11eb6b9e:;
  /* 11eb6b9e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6ba2 je 0x11eb6bc9 */
  if (C.zf) goto L_11eb6bc9;
  /* 11eb6ba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6ba7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6baa push eax */
  push32((uint32_t)(EAX));
  /* 11eb6bab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6bae push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6baf call 0x11eba3b0 */
  push32(0x11eb6bb4u); f_11eba3b0();
  /* 11eb6bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6bb7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb6bba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6bbe jne 0x11eb6bc7 */
  if (!C.zf) goto L_11eb6bc7;
  /* 11eb6bc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6bc2 jmp 0x11eb6e0a */
  goto L_11eb6e0a;
L_11eb6bc7:;
  /* 11eb6bc7 jmp 0x11eb6bec */
  goto L_11eb6bec;
L_11eb6bc9:;
  /* 11eb6bc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6bcc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6bcf push edx */
  push32((uint32_t)(EDX));
  /* 11eb6bd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb6bd3 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6bd4 call 0x11eba300 */
  push32(0x11eb6bd9u); f_11eba300();
  /* 11eb6bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6bdc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb6bdf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6be3 jne 0x11eb6bec */
  if (!C.zf) goto L_11eb6bec;
  /* 11eb6be5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6be7 jmp 0x11eb6e0a */
  goto L_11eb6e0a;
L_11eb6bec:;
  /* 11eb6bec mov ecx, dword ptr [0x11ee0a88] */
  ECX = (r32((uint32_t)(0x11ee0a88)));
  /* 11eb6bf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6bf5 mov dword ptr [0x11ee0a88], ecx */
  w32((uint32_t)(0x11ee0a88), (ECX));
  /* 11eb6bfb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6bff jne 0x11eb6c57 */
  if (!C.zf) goto L_11eb6c57;
  /* 11eb6c01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6c04 mov eax, dword ptr [0x11ee27d0] */
  EAX = (r32((uint32_t)(0x11ee27d0)));
  /* 11eb6c09 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6c0c mov dword ptr [0x11ee27d0], eax */
  w32((uint32_t)(0x11ee27d0), (EAX));
  /* 11eb6c11 mov ecx, dword ptr [0x11ee27d0] */
  ECX = (r32((uint32_t)(0x11ee27d0)));
  /* 11eb6c17 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6c1a mov dword ptr [0x11ee27d0], ecx */
  w32((uint32_t)(0x11ee27d0), (ECX));
  /* 11eb6c20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6c23 mov eax, dword ptr [0x11ee27d8] */
  EAX = (r32((uint32_t)(0x11ee27d8)));
  /* 11eb6c28 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6c2b mov dword ptr [0x11ee27d8], eax */
  w32((uint32_t)(0x11ee27d8), (EAX));
  /* 11eb6c30 mov ecx, dword ptr [0x11ee27d8] */
  ECX = (r32((uint32_t)(0x11ee27d8)));
  /* 11eb6c36 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6c39 mov dword ptr [0x11ee27d8], ecx */
  w32((uint32_t)(0x11ee27d8), (ECX));
  /* 11eb6c3f mov edx, dword ptr [0x11ee27d8] */
  EDX = (r32((uint32_t)(0x11ee27d8)));
  /* 11eb6c45 cmp edx, dword ptr [0x11ee27dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee27dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6c4b jbe 0x11eb6c57 */
  if ((C.cf||C.zf)) goto L_11eb6c57;
  /* 11eb6c4d mov eax, dword ptr [0x11ee27d8] */
  EAX = (r32((uint32_t)(0x11ee27d8)));
  /* 11eb6c52 mov dword ptr [0x11ee27dc], eax */
  w32((uint32_t)(0x11ee27dc), (EAX));
L_11eb6c57:;
  /* 11eb6c57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6c5a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6c5d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eb6c60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6c63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6c66 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6c69 jbe 0x11eb6c8f */
  if ((C.cf||C.zf)) goto L_11eb6c8f;
  /* 11eb6c6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6c6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6c71 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6c74 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6c77 mov al, byte ptr [0x11ee0a92] */
  AL = (r8((uint32_t)(0x11ee0a92)));
  /* 11eb6c7c push eax */
  push32((uint32_t)(EAX));
  /* 11eb6c7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6c80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6c83 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6c86 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6c87 call 0x11eba1a0 */
  push32(0x11eb6c8cu); f_11eba1a0();
  /* 11eb6c8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb6c8f:;
  /* 11eb6c8f push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb6c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6c93 mov al, byte ptr [0x11ee0a90] */
  AL = (r8((uint32_t)(0x11ee0a90)));
  /* 11eb6c98 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6c99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6c9c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6c9f push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6ca0 call 0x11eba1a0 */
  push32(0x11eb6ca5u); f_11eba1a0();
  /* 11eb6ca5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6ca8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6cac jne 0x11eb6cc9 */
  if (!C.zf) goto L_11eb6cc9;
  /* 11eb6cae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6cb1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb6cb4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11eb6cb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6cba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb6cbd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11eb6cc0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6cc3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb6cc6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11eb6cc9:;
  /* 11eb6cc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6ccf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11eb6cd2:;
  /* 11eb6cd2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6cd6 jne 0x11eb6d07 */
  if (!C.zf) goto L_11eb6d07;
  /* 11eb6cd8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6cdc jne 0x11eb6ce6 */
  if (!C.zf) goto L_11eb6ce6;
  /* 11eb6cde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6ce1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6ce4 je 0x11eb6d07 */
  if (C.zf) goto L_11eb6d07;
L_11eb6ce6:;
  /* 11eb6ce6 push 0x11edd8c4 */
  push32((uint32_t)(0x11edd8c4u));
  /* 11eb6ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6ced push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11eb6cf2 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6cf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6cf9 call 0x11eb54f0 */
  push32(0x11eb6cfeu); f_11eb54f0();
  /* 11eb6cfe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6d01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6d04 jne 0x11eb6d07 */
  if (!C.zf) goto L_11eb6d07;
  /* 11eb6d06 int3  */
  x86_unimpl("int3 @ 0x11eb6d06");
L_11eb6d07:;
  /* 11eb6d07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb6d09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb6d0b jne 0x11eb6cd2 */
  if (!C.zf) goto L_11eb6cd2;
  /* 11eb6d0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6d10 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6d13 je 0x11eb6d1b */
  if (C.zf) goto L_11eb6d1b;
  /* 11eb6d15 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6d19 je 0x11eb6d23 */
  if (C.zf) goto L_11eb6d23;
L_11eb6d1b:;
  /* 11eb6d1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6d1e jmp 0x11eb6e0a */
  goto L_11eb6e0a;
L_11eb6d23:;
  /* 11eb6d23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6d26 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6d29 je 0x11eb6d3b */
  if (C.zf) goto L_11eb6d3b;
  /* 11eb6d2b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6d2e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb6d30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6d33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11eb6d36 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11eb6d39 jmp 0x11eb6d77 */
  goto L_11eb6d77;
L_11eb6d3b:;
  /* 11eb6d3b mov eax, dword ptr [0x11ee27cc] */
  EAX = (r32((uint32_t)(0x11ee27cc)));
  /* 11eb6d40 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6d43 je 0x11eb6d66 */
  if (C.zf) goto L_11eb6d66;
  /* 11eb6d45 push 0x11edd8a8 */
  push32((uint32_t)(0x11edd8a8u));
  /* 11eb6d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6d4c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11eb6d51 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6d56 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6d58 call 0x11eb54f0 */
  push32(0x11eb6d5du); f_11eb54f0();
  /* 11eb6d5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6d60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6d63 jne 0x11eb6d66 */
  if (!C.zf) goto L_11eb6d66;
  /* 11eb6d65 int3  */
  x86_unimpl("int3 @ 0x11eb6d65");
L_11eb6d66:;
  /* 11eb6d66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6d68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb6d6a jne 0x11eb6d3b */
  if (!C.zf) goto L_11eb6d3b;
  /* 11eb6d6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6d6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11eb6d72 mov dword ptr [0x11ee27cc], eax */
  w32((uint32_t)(0x11ee27cc), (EAX));
L_11eb6d77:;
  /* 11eb6d77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6d7a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6d7e je 0x11eb6d8f */
  if (C.zf) goto L_11eb6d8f;
  /* 11eb6d80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6d83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11eb6d86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6d89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb6d8b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11eb6d8d jmp 0x11eb6dca */
  goto L_11eb6dca;
L_11eb6d8f:;
  /* 11eb6d8f mov eax, dword ptr [0x11ee27d4] */
  EAX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb6d94 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6d97 je 0x11eb6dba */
  if (C.zf) goto L_11eb6dba;
  /* 11eb6d99 push 0x11edd88c */
  push32((uint32_t)(0x11edd88cu));
  /* 11eb6d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6da0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11eb6da5 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6daa push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6dac call 0x11eb54f0 */
  push32(0x11eb6db1u); f_11eb54f0();
  /* 11eb6db1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6db4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6db7 jne 0x11eb6dba */
  if (!C.zf) goto L_11eb6dba;
  /* 11eb6db9 int3  */
  x86_unimpl("int3 @ 0x11eb6db9");
L_11eb6dba:;
  /* 11eb6dba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb6dbe jne 0x11eb6d8f */
  if (!C.zf) goto L_11eb6d8f;
  /* 11eb6dc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6dc3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb6dc5 mov dword ptr [0x11ee27d4], eax */
  w32((uint32_t)(0x11ee27d4), (EAX));
L_11eb6dca:;
  /* 11eb6dca cmp dword ptr [0x11ee27d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6dd1 je 0x11eb6de1 */
  if (C.zf) goto L_11eb6de1;
  /* 11eb6dd3 mov ecx, dword ptr [0x11ee27d4] */
  ECX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb6dd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6ddc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11eb6ddf jmp 0x11eb6de9 */
  goto L_11eb6de9;
L_11eb6de1:;
  /* 11eb6de1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6de4 mov dword ptr [0x11ee27cc], eax */
  w32((uint32_t)(0x11ee27cc), (EAX));
L_11eb6de9:;
  /* 11eb6de9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6dec mov edx, dword ptr [0x11ee27d4] */
  EDX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb6df2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11eb6df4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6df7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11eb6dfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb6e01 mov dword ptr [0x11ee27d4], ecx */
  w32((uint32_t)(0x11ee27d4), (ECX));
  /* 11eb6e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11eb6e0a:;
  /* 11eb6e0a pop edi */
  EDI = (pop32());
  /* 11eb6e0b pop esi */
  ESI = (pop32());
  /* 11eb6e0c pop ebx */
  EBX = (pop32());
  /* 11eb6e0d mov esp, ebp */
  ESP = (EBP);
  /* 11eb6e0f pop ebp */
  EBP = (pop32());
  /* 11eb6e10 ret  */
  ESPCHK(0x11eb6900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e20 @ 0x11eb6e20 (27 bytes, 13 insns) */
void f_11eb6e20(void) {
  FTRACE(0x11eb6e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6e21 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6e27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6e29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6e2c push eax */
  push32((uint32_t)(EAX));
  /* 11eb6e2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6e30 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6e31 call 0x11eb6e40 */
  push32(0x11eb6e36u); f_11eb6e40();
  /* 11eb6e36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6e39 pop ebp */
  EBP = (pop32());
  /* 11eb6e3a ret  */
  ESPCHK(0x11eb6e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e40 @ 0x11eb6e40 (64 bytes, 27 insns) */
void f_11eb6e40(void) {
  FTRACE(0x11eb6e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6e41 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6e43 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6e44 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb6e46 call 0x11eb9e30 */
  push32(0x11eb6e4bu); f_11eb9e30();
  /* 11eb6e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6e50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb6e53 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6e54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb6e57 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb6e5b push edx */
  push32((uint32_t)(EDX));
  /* 11eb6e5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6e5f push eax */
  push32((uint32_t)(EAX));
  /* 11eb6e60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6e64 call 0x11eb6900 */
  push32(0x11eb6e69u); f_11eb6900();
  /* 11eb6e69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6e6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb6e6f push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb6e71 call 0x11eb9ed0 */
  push32(0x11eb6e76u); f_11eb9ed0();
  /* 11eb6e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6e79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6e7c mov esp, ebp */
  ESP = (EBP);
  /* 11eb6e7e pop ebp */
  EBP = (pop32());
  /* 11eb6e7f ret  */
  ESPCHK(0x11eb6e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e80 @ 0x11eb6e80 (19 bytes, 9 insns) */
void f_11eb6e80(void) {
  FTRACE(0x11eb6e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6e81 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6e83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6e88 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6e89 call 0x11eb6ec0 */
  push32(0x11eb6e8eu); f_11eb6ec0();
  /* 11eb6e8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6e91 pop ebp */
  EBP = (pop32());
  /* 11eb6e92 ret  */
  ESPCHK(0x11eb6e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x11eb6ea0 (19 bytes, 9 insns) */
void f_11eb6ea0(void) {
  FTRACE(0x11eb6ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb6ea5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6ea9 call 0x11eb6ef0 */
  push32(0x11eb6eaeu); f_11eb6ef0();
  /* 11eb6eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6eb1 pop ebp */
  EBP = (pop32());
  /* 11eb6eb2 ret  */
  ESPCHK(0x11eb6ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec0 @ 0x11eb6ec0 (41 bytes, 16 insns) */
void f_11eb6ec0(void) {
  FTRACE(0x11eb6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6ec3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb6ec5 call 0x11eb9e30 */
  push32(0x11eb6ecau); f_11eb9e30();
  /* 11eb6eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6ecd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6ed0 push eax */
  push32((uint32_t)(EAX));
  /* 11eb6ed1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6ed5 call 0x11eb6ef0 */
  push32(0x11eb6edau); f_11eb6ef0();
  /* 11eb6eda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6edd push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb6edf call 0x11eb9ed0 */
  push32(0x11eb6ee4u); f_11eb9ed0();
  /* 11eb6ee4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6ee7 pop ebp */
  EBP = (pop32());
  /* 11eb6ee8 ret  */
  ESPCHK(0x11eb6ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x11eb6ef0 (1004 bytes, 342 insns) */
void f_11eb6ef0(void) {
  FTRACE(0x11eb6ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb6ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb6ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb6ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb6ef4 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb6ef5 push esi */
  push32((uint32_t)(ESI));
  /* 11eb6ef6 push edi */
  push32((uint32_t)(EDI));
  /* 11eb6ef7 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb6efc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6eff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6f01 je 0x11eb6f33 */
  if (C.zf) goto L_11eb6f33;
L_11eb6f03:;
  /* 11eb6f03 call 0x11eb75d0 */
  push32(0x11eb6f08u); f_11eb75d0();
  /* 11eb6f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6f0a jne 0x11eb6f2d */
  if (!C.zf) goto L_11eb6f2d;
  /* 11eb6f0c push 0x11edd878 */
  push32((uint32_t)(0x11edd878u));
  /* 11eb6f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f13 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11eb6f18 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6f1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6f1f call 0x11eb54f0 */
  push32(0x11eb6f24u); f_11eb54f0();
  /* 11eb6f24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6f27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6f2a jne 0x11eb6f2d */
  if (!C.zf) goto L_11eb6f2d;
  /* 11eb6f2c int3  */
  x86_unimpl("int3 @ 0x11eb6f2c");
L_11eb6f2d:;
  /* 11eb6f2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6f2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb6f31 jne 0x11eb6f03 */
  if (!C.zf) goto L_11eb6f03;
L_11eb6f33:;
  /* 11eb6f33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6f37 jne 0x11eb6f3e */
  if (!C.zf) goto L_11eb6f3e;
  /* 11eb6f39 jmp 0x11eb72d5 */
  goto L_11eb72d5;
L_11eb6f3e:;
  /* 11eb6f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb6f47 push edx */
  push32((uint32_t)(EDX));
  /* 11eb6f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6f4d push eax */
  push32((uint32_t)(EAX));
  /* 11eb6f4e push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb6f50 call dword ptr [0x11ee0c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee0c90))), 0x11eb6f56u);
  /* 11eb6f56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6f5b jne 0x11eb6f88 */
  if (!C.zf) goto L_11eb6f88;
L_11eb6f5d:;
  /* 11eb6f5d push 0x11eddb3c */
  push32((uint32_t)(0x11eddb3cu));
  /* 11eb6f62 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb6f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f6f call 0x11eb54f0 */
  push32(0x11eb6f74u); f_11eb54f0();
  /* 11eb6f74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6f77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6f7a jne 0x11eb6f7d */
  if (!C.zf) goto L_11eb6f7d;
  /* 11eb6f7c int3  */
  x86_unimpl("int3 @ 0x11eb6f7c");
L_11eb6f7d:;
  /* 11eb6f7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb6f7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb6f81 jne 0x11eb6f5d */
  if (!C.zf) goto L_11eb6f5d;
  /* 11eb6f83 jmp 0x11eb72d5 */
  goto L_11eb72d5;
L_11eb6f88:;
  /* 11eb6f88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6f8b push edx */
  push32((uint32_t)(EDX));
  /* 11eb6f8c call 0x11eb7a30 */
  push32(0x11eb6f91u); f_11eb7a30();
  /* 11eb6f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6f96 jne 0x11eb6fb9 */
  if (!C.zf) goto L_11eb6fb9;
  /* 11eb6f98 push 0x11edd97c */
  push32((uint32_t)(0x11edd97cu));
  /* 11eb6f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb6f9f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11eb6fa4 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb6fa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb6fab call 0x11eb54f0 */
  push32(0x11eb6fb0u); f_11eb54f0();
  /* 11eb6fb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb6fb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6fb6 jne 0x11eb6fb9 */
  if (!C.zf) goto L_11eb6fb9;
  /* 11eb6fb8 int3  */
  x86_unimpl("int3 @ 0x11eb6fb8");
L_11eb6fb9:;
  /* 11eb6fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6fbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb6fbd jne 0x11eb6f88 */
  if (!C.zf) goto L_11eb6f88;
  /* 11eb6fbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb6fc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb6fc5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb6fc8:;
  /* 11eb6fc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6fcb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb6fce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6fd3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6fd6 je 0x11eb701b */
  if (C.zf) goto L_11eb701b;
  /* 11eb6fd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6fdb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6fdf je 0x11eb701b */
  if (C.zf) goto L_11eb701b;
  /* 11eb6fe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6fe4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb6fe7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb6fec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6fef je 0x11eb701b */
  if (C.zf) goto L_11eb701b;
  /* 11eb6ff1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb6ff4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb6ff8 je 0x11eb701b */
  if (C.zf) goto L_11eb701b;
  /* 11eb6ffa push 0x11eddb14 */
  push32((uint32_t)(0x11eddb14u));
  /* 11eb6fff push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7001 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11eb7006 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb700b push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb700d call 0x11eb54f0 */
  push32(0x11eb7012u); f_11eb54f0();
  /* 11eb7012 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7015 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7018 jne 0x11eb701b */
  if (!C.zf) goto L_11eb701b;
  /* 11eb701a int3  */
  x86_unimpl("int3 @ 0x11eb701a");
L_11eb701b:;
  /* 11eb701b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb701d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb701f jne 0x11eb6fc8 */
  if (!C.zf) goto L_11eb6fc8;
  /* 11eb7021 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb7026 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb702b jne 0x11eb70f6 */
  if (!C.zf) goto L_11eb70f6;
  /* 11eb7031 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb7033 mov cl, byte ptr [0x11ee0a90] */
  CL = (r8((uint32_t)(0x11ee0a90)));
  /* 11eb7039 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb703a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb703d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7040 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7041 call 0x11eb7540 */
  push32(0x11eb7046u); f_11eb7540();
  /* 11eb7046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb704b jne 0x11eb7090 */
  if (!C.zf) goto L_11eb7090;
L_11eb704d:;
  /* 11eb704d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7050 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7053 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7057 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11eb705a push edx */
  push32((uint32_t)(EDX));
  /* 11eb705b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb705e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11eb7061 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7067 mov edx, dword ptr [ecx*4 + 0x11ee0a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0a94)));
  /* 11eb706e push edx */
  push32((uint32_t)(EDX));
  /* 11eb706f push 0x11eddae8 */
  push32((uint32_t)(0x11eddae8u));
  /* 11eb7074 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7076 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7078 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb707a push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb707c call 0x11eb54f0 */
  push32(0x11eb7081u); f_11eb54f0();
  /* 11eb7081 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7084 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7087 jne 0x11eb708a */
  if (!C.zf) goto L_11eb708a;
  /* 11eb7089 int3  */
  x86_unimpl("int3 @ 0x11eb7089");
L_11eb708a:;
  /* 11eb708a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb708c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb708e jne 0x11eb704d */
  if (!C.zf) goto L_11eb704d;
L_11eb7090:;
  /* 11eb7090 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb7092 mov cl, byte ptr [0x11ee0a90] */
  CL = (r8((uint32_t)(0x11ee0a90)));
  /* 11eb7098 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7099 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb709c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11eb709f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb70a2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11eb70a6 push edx */
  push32((uint32_t)(EDX));
  /* 11eb70a7 call 0x11eb7540 */
  push32(0x11eb70acu); f_11eb7540();
  /* 11eb70ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb70af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb70b1 jne 0x11eb70f6 */
  if (!C.zf) goto L_11eb70f6;
L_11eb70b3:;
  /* 11eb70b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb70b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb70b9 push eax */
  push32((uint32_t)(EAX));
  /* 11eb70ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb70bd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11eb70c0 push edx */
  push32((uint32_t)(EDX));
  /* 11eb70c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb70c4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11eb70c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb70cd mov edx, dword ptr [ecx*4 + 0x11ee0a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0a94)));
  /* 11eb70d4 push edx */
  push32((uint32_t)(EDX));
  /* 11eb70d5 push 0x11eddabc */
  push32((uint32_t)(0x11eddabcu));
  /* 11eb70da push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb70dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb70de push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb70e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb70e2 call 0x11eb54f0 */
  push32(0x11eb70e7u); f_11eb54f0();
  /* 11eb70e7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb70ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb70ed jne 0x11eb70f0 */
  if (!C.zf) goto L_11eb70f0;
  /* 11eb70ef int3  */
  x86_unimpl("int3 @ 0x11eb70ef");
L_11eb70f0:;
  /* 11eb70f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb70f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb70f4 jne 0x11eb70b3 */
  if (!C.zf) goto L_11eb70b3;
L_11eb70f6:;
  /* 11eb70f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb70f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb70fd jne 0x11eb716b */
  if (!C.zf) goto L_11eb716b;
L_11eb70ff:;
  /* 11eb70ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7102 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7109 jne 0x11eb7114 */
  if (!C.zf) goto L_11eb7114;
  /* 11eb710b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb710e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7112 je 0x11eb7135 */
  if (C.zf) goto L_11eb7135;
L_11eb7114:;
  /* 11eb7114 push 0x11edda7c */
  push32((uint32_t)(0x11edda7cu));
  /* 11eb7119 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb711b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11eb7120 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb7125 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb7127 call 0x11eb54f0 */
  push32(0x11eb712cu); f_11eb54f0();
  /* 11eb712c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb712f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7132 jne 0x11eb7135 */
  if (!C.zf) goto L_11eb7135;
  /* 11eb7134 int3  */
  x86_unimpl("int3 @ 0x11eb7134");
L_11eb7135:;
  /* 11eb7135 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7137 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7139 jne 0x11eb70ff */
  if (!C.zf) goto L_11eb70ff;
  /* 11eb713b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb713e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11eb7141 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7144 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7145 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7147 mov cl, byte ptr [0x11ee0a91] */
  CL = (r8((uint32_t)(0x11ee0a91)));
  /* 11eb714d push ecx */
  push32((uint32_t)(ECX));
  /* 11eb714e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7151 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7152 call 0x11eba1a0 */
  push32(0x11eb7157u); f_11eba1a0();
  /* 11eb7157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb715a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb715d push eax */
  push32((uint32_t)(EAX));
  /* 11eb715e call 0x11eba5a0 */
  push32(0x11eb7163u); f_11eba5a0();
  /* 11eb7163 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7166 jmp 0x11eb72d5 */
  goto L_11eb72d5;
L_11eb716b:;
  /* 11eb716b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb716e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7172 jne 0x11eb7181 */
  if (!C.zf) goto L_11eb7181;
  /* 11eb7174 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7178 jne 0x11eb7181 */
  if (!C.zf) goto L_11eb7181;
  /* 11eb717a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11eb7181:;
  /* 11eb7181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7184 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb7187 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb718a je 0x11eb71ad */
  if (C.zf) goto L_11eb71ad;
  /* 11eb718c push 0x11edda5c */
  push32((uint32_t)(0x11edda5cu));
  /* 11eb7191 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7193 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11eb7198 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb719d push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb719f call 0x11eb54f0 */
  push32(0x11eb71a4u); f_11eb54f0();
  /* 11eb71a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb71a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb71aa jne 0x11eb71ad */
  if (!C.zf) goto L_11eb71ad;
  /* 11eb71ac int3  */
  x86_unimpl("int3 @ 0x11eb71ac");
L_11eb71ad:;
  /* 11eb71ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb71af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb71b1 jne 0x11eb7181 */
  if (!C.zf) goto L_11eb7181;
  /* 11eb71b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb71b6 mov eax, dword ptr [0x11ee27d8] */
  EAX = (r32((uint32_t)(0x11ee27d8)));
  /* 11eb71bb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb71be mov dword ptr [0x11ee27d8], eax */
  w32((uint32_t)(0x11ee27d8), (EAX));
  /* 11eb71c3 mov ecx, dword ptr [0x11ee0a84] */
  ECX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb71c9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb71cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb71ce jne 0x11eb72ac */
  if (!C.zf) goto L_11eb72ac;
  /* 11eb71d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb71d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb71da je 0x11eb71ec */
  if (C.zf) goto L_11eb71ec;
  /* 11eb71dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb71df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb71e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb71e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11eb71e7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11eb71ea jmp 0x11eb722a */
  goto L_11eb722a;
L_11eb71ec:;
  /* 11eb71ec mov ecx, dword ptr [0x11ee27cc] */
  ECX = (r32((uint32_t)(0x11ee27cc)));
  /* 11eb71f2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb71f5 je 0x11eb7218 */
  if (C.zf) goto L_11eb7218;
  /* 11eb71f7 push 0x11edda44 */
  push32((uint32_t)(0x11edda44u));
  /* 11eb71fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb71fe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11eb7203 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb7208 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb720a call 0x11eb54f0 */
  push32(0x11eb720fu); f_11eb54f0();
  /* 11eb720f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7212 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7215 jne 0x11eb7218 */
  if (!C.zf) goto L_11eb7218;
  /* 11eb7217 int3  */
  x86_unimpl("int3 @ 0x11eb7217");
L_11eb7218:;
  /* 11eb7218 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb721a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb721c jne 0x11eb71ec */
  if (!C.zf) goto L_11eb71ec;
  /* 11eb721e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7221 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11eb7224 mov dword ptr [0x11ee27cc], ecx */
  w32((uint32_t)(0x11ee27cc), (ECX));
L_11eb722a:;
  /* 11eb722a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb722d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7231 je 0x11eb7242 */
  if (C.zf) goto L_11eb7242;
  /* 11eb7233 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7236 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11eb7239 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb723c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb723e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11eb7240 jmp 0x11eb727f */
  goto L_11eb727f;
L_11eb7242:;
  /* 11eb7242 mov ecx, dword ptr [0x11ee27d4] */
  ECX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb7248 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb724b je 0x11eb726e */
  if (C.zf) goto L_11eb726e;
  /* 11eb724d push 0x11edda2c */
  push32((uint32_t)(0x11edda2cu));
  /* 11eb7252 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7254 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11eb7259 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb725e push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb7260 call 0x11eb54f0 */
  push32(0x11eb7265u); f_11eb54f0();
  /* 11eb7265 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7268 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb726b jne 0x11eb726e */
  if (!C.zf) goto L_11eb726e;
  /* 11eb726d int3  */
  x86_unimpl("int3 @ 0x11eb726d");
L_11eb726e:;
  /* 11eb726e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb7270 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb7272 jne 0x11eb7242 */
  if (!C.zf) goto L_11eb7242;
  /* 11eb7274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7277 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb7279 mov dword ptr [0x11ee27d4], ecx */
  w32((uint32_t)(0x11ee27d4), (ECX));
L_11eb727f:;
  /* 11eb727f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7282 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11eb7285 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7288 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7289 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb728b mov cl, byte ptr [0x11ee0a91] */
  CL = (r8((uint32_t)(0x11ee0a91)));
  /* 11eb7291 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7295 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7296 call 0x11eba1a0 */
  push32(0x11eb729bu); f_11eba1a0();
  /* 11eb729b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb729e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb72a1 push eax */
  push32((uint32_t)(EAX));
  /* 11eb72a2 call 0x11eba5a0 */
  push32(0x11eb72a7u); f_11eba5a0();
  /* 11eb72a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb72aa jmp 0x11eb72d5 */
  goto L_11eb72d5;
L_11eb72ac:;
  /* 11eb72ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb72af mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11eb72b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb72b9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11eb72bc push eax */
  push32((uint32_t)(EAX));
  /* 11eb72bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb72bf mov cl, byte ptr [0x11ee0a91] */
  CL = (r8((uint32_t)(0x11ee0a91)));
  /* 11eb72c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb72c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb72c9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb72cc push edx */
  push32((uint32_t)(EDX));
  /* 11eb72cd call 0x11eba1a0 */
  push32(0x11eb72d2u); f_11eba1a0();
  /* 11eb72d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb72d5:;
  /* 11eb72d5 pop edi */
  EDI = (pop32());
  /* 11eb72d6 pop esi */
  ESI = (pop32());
  /* 11eb72d7 pop ebx */
  EBX = (pop32());
  /* 11eb72d8 mov esp, ebp */
  ESP = (EBP);
  /* 11eb72da pop ebp */
  EBP = (pop32());
  /* 11eb72db ret  */
  ESPCHK(0x11eb6ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072e0 @ 0x11eb72e0 (19 bytes, 9 insns) */
void f_11eb72e0(void) {
  FTRACE(0x11eb72e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb72e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb72e1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb72e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb72e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb72e8 push eax */
  push32((uint32_t)(EAX));
  /* 11eb72e9 call 0x11eb7300 */
  push32(0x11eb72eeu); f_11eb7300();
  /* 11eb72ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb72f1 pop ebp */
  EBP = (pop32());
  /* 11eb72f2 ret  */
  ESPCHK(0x11eb72e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007300 @ 0x11eb7300 (342 bytes, 119 insns) */
void f_11eb7300(void) {
  FTRACE(0x11eb7300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7300 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7301 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7306 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb7307 push esi */
  push32((uint32_t)(ESI));
  /* 11eb7308 push edi */
  push32((uint32_t)(EDI));
  /* 11eb7309 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb730e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7313 je 0x11eb7345 */
  if (C.zf) goto L_11eb7345;
L_11eb7315:;
  /* 11eb7315 call 0x11eb75d0 */
  push32(0x11eb731au); f_11eb75d0();
  /* 11eb731a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb731c jne 0x11eb733f */
  if (!C.zf) goto L_11eb733f;
  /* 11eb731e push 0x11edd878 */
  push32((uint32_t)(0x11edd878u));
  /* 11eb7323 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7325 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11eb732a push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb732f push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb7331 call 0x11eb54f0 */
  push32(0x11eb7336u); f_11eb54f0();
  /* 11eb7336 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7339 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb733c jne 0x11eb733f */
  if (!C.zf) goto L_11eb733f;
  /* 11eb733e int3  */
  x86_unimpl("int3 @ 0x11eb733e");
L_11eb733f:;
  /* 11eb733f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7341 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7343 jne 0x11eb7315 */
  if (!C.zf) goto L_11eb7315;
L_11eb7345:;
  /* 11eb7345 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7347 call 0x11eb9e30 */
  push32(0x11eb734cu); f_11eb9e30();
  /* 11eb734c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb734f:;
  /* 11eb734f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7352 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7353 call 0x11eb7a30 */
  push32(0x11eb7358u); f_11eb7a30();
  /* 11eb7358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb735b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb735d jne 0x11eb7380 */
  if (!C.zf) goto L_11eb7380;
  /* 11eb735f push 0x11edd97c */
  push32((uint32_t)(0x11edd97cu));
  /* 11eb7364 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7366 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11eb736b push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb7370 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb7372 call 0x11eb54f0 */
  push32(0x11eb7377u); f_11eb54f0();
  /* 11eb7377 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb737a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb737d jne 0x11eb7380 */
  if (!C.zf) goto L_11eb7380;
  /* 11eb737f int3  */
  x86_unimpl("int3 @ 0x11eb737f");
L_11eb7380:;
  /* 11eb7380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7384 jne 0x11eb734f */
  if (!C.zf) goto L_11eb734f;
  /* 11eb7386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7389 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb738c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11eb738f:;
  /* 11eb738f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7392 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb7395 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb739a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb739d je 0x11eb73e2 */
  if (C.zf) goto L_11eb73e2;
  /* 11eb739f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb73a2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb73a6 je 0x11eb73e2 */
  if (C.zf) goto L_11eb73e2;
  /* 11eb73a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb73ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb73ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb73b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb73b6 je 0x11eb73e2 */
  if (C.zf) goto L_11eb73e2;
  /* 11eb73b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb73bb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb73bf je 0x11eb73e2 */
  if (C.zf) goto L_11eb73e2;
  /* 11eb73c1 push 0x11eddb14 */
  push32((uint32_t)(0x11eddb14u));
  /* 11eb73c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb73c8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11eb73cd push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb73d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb73d4 call 0x11eb54f0 */
  push32(0x11eb73d9u); f_11eb54f0();
  /* 11eb73d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb73dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb73df jne 0x11eb73e2 */
  if (!C.zf) goto L_11eb73e2;
  /* 11eb73e1 int3  */
  x86_unimpl("int3 @ 0x11eb73e1");
L_11eb73e2:;
  /* 11eb73e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb73e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb73e6 jne 0x11eb738f */
  if (!C.zf) goto L_11eb738f;
  /* 11eb73e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb73eb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb73ef jne 0x11eb73fe */
  if (!C.zf) goto L_11eb73fe;
  /* 11eb73f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb73f5 jne 0x11eb73fe */
  if (!C.zf) goto L_11eb73fe;
  /* 11eb73f7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11eb73fe:;
  /* 11eb73fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7401 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7405 je 0x11eb7439 */
  if (C.zf) goto L_11eb7439;
L_11eb7407:;
  /* 11eb7407 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb740a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb740d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7410 je 0x11eb7433 */
  if (C.zf) goto L_11eb7433;
  /* 11eb7412 push 0x11edda5c */
  push32((uint32_t)(0x11edda5cu));
  /* 11eb7417 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7419 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11eb741e push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb7423 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb7425 call 0x11eb54f0 */
  push32(0x11eb742au); f_11eb54f0();
  /* 11eb742a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb742d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7430 jne 0x11eb7433 */
  if (!C.zf) goto L_11eb7433;
  /* 11eb7432 int3  */
  x86_unimpl("int3 @ 0x11eb7432");
L_11eb7433:;
  /* 11eb7433 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7435 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7437 jne 0x11eb7407 */
  if (!C.zf) goto L_11eb7407;
L_11eb7439:;
  /* 11eb7439 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb743c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11eb743f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb7442 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7444 call 0x11eb9ed0 */
  push32(0x11eb7449u); f_11eb9ed0();
  /* 11eb7449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb744c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb744f pop edi */
  EDI = (pop32());
  /* 11eb7450 pop esi */
  ESI = (pop32());
  /* 11eb7451 pop ebx */
  EBX = (pop32());
  /* 11eb7452 mov esp, ebp */
  ESP = (EBP);
  /* 11eb7454 pop ebp */
  EBP = (pop32());
  /* 11eb7455 ret  */
  ESPCHK(0x11eb7300u, _esp0);
  ESP += 4; return;
}

/* FUN_10007460 @ 0x11eb7460 (28 bytes, 11 insns) */
void f_11eb7460(void) {
  FTRACE(0x11eb7460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7460 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7461 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7463 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7464 mov eax, dword ptr [0x11ee0a8c] */
  EAX = (r32((uint32_t)(0x11ee0a8c)));
  /* 11eb7469 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb746c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb746f mov dword ptr [0x11ee0a8c], ecx */
  w32((uint32_t)(0x11ee0a8c), (ECX));
  /* 11eb7475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7478 mov esp, ebp */
  ESP = (EBP);
  /* 11eb747a pop ebp */
  EBP = (pop32());
  /* 11eb747b ret  */
  ESPCHK(0x11eb7460u, _esp0);
  ESP += 4; return;
}

/* FUN_10007480 @ 0x11eb7480 (157 bytes, 59 insns) */
void f_11eb7480(void) {
  FTRACE(0x11eb7480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7480 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7481 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7483 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7484 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb7485 push esi */
  push32((uint32_t)(ESI));
  /* 11eb7486 push edi */
  push32((uint32_t)(EDI));
  /* 11eb7487 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7489 call 0x11eb9e30 */
  push32(0x11eb748eu); f_11eb9e30();
  /* 11eb748e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7494 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7495 call 0x11eb7a30 */
  push32(0x11eb749au); f_11eb7a30();
  /* 11eb749a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb749d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb749f je 0x11eb750c */
  if (C.zf) goto L_11eb750c;
  /* 11eb74a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb74a4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb74a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb74aa:;
  /* 11eb74aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb74ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb74b0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb74b5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb74b8 je 0x11eb74fd */
  if (C.zf) goto L_11eb74fd;
  /* 11eb74ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb74bd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb74c1 je 0x11eb74fd */
  if (C.zf) goto L_11eb74fd;
  /* 11eb74c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb74c6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb74c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb74ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb74d1 je 0x11eb74fd */
  if (C.zf) goto L_11eb74fd;
  /* 11eb74d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb74d6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb74da je 0x11eb74fd */
  if (C.zf) goto L_11eb74fd;
  /* 11eb74dc push 0x11eddb14 */
  push32((uint32_t)(0x11eddb14u));
  /* 11eb74e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb74e3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11eb74e8 push 0x11edd86c */
  push32((uint32_t)(0x11edd86cu));
  /* 11eb74ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb74ef call 0x11eb54f0 */
  push32(0x11eb74f4u); f_11eb54f0();
  /* 11eb74f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb74f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb74fa jne 0x11eb74fd */
  if (!C.zf) goto L_11eb74fd;
  /* 11eb74fc int3  */
  x86_unimpl("int3 @ 0x11eb74fc");
L_11eb74fd:;
  /* 11eb74fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb74ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb7501 jne 0x11eb74aa */
  if (!C.zf) goto L_11eb74aa;
  /* 11eb7503 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7506 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb7509 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11eb750c:;
  /* 11eb750c push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb750e call 0x11eb9ed0 */
  push32(0x11eb7513u); f_11eb9ed0();
  /* 11eb7513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7516 pop edi */
  EDI = (pop32());
  /* 11eb7517 pop esi */
  ESI = (pop32());
  /* 11eb7518 pop ebx */
  EBX = (pop32());
  /* 11eb7519 mov esp, ebp */
  ESP = (EBP);
  /* 11eb751b pop ebp */
  EBP = (pop32());
  /* 11eb751c ret  */
  ESPCHK(0x11eb7480u, _esp0);
  ESP += 4; return;
}

/* FUN_10007520 @ 0x11eb7520 (28 bytes, 11 insns) */
void f_11eb7520(void) {
  FTRACE(0x11eb7520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7520 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7521 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7523 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7524 mov eax, dword ptr [0x11ee0c90] */
  EAX = (r32((uint32_t)(0x11ee0c90)));
  /* 11eb7529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb752c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb752f mov dword ptr [0x11ee0c90], ecx */
  w32((uint32_t)(0x11ee0c90), (ECX));
  /* 11eb7535 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7538 mov esp, ebp */
  ESP = (EBP);
  /* 11eb753a pop ebp */
  EBP = (pop32());
  /* 11eb753b ret  */
  ESPCHK(0x11eb7520u, _esp0);
  ESP += 4; return;
}

/* FUN_10007540 @ 0x11eb7540 (136 bytes, 55 insns) */
void f_11eb7540(void) {
  FTRACE(0x11eb7540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7540 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7541 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7543 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7544 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb7545 push esi */
  push32((uint32_t)(ESI));
  /* 11eb7546 push edi */
  push32((uint32_t)(EDI));
  /* 11eb7547 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11eb754e:;
  /* 11eb754e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb7551 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb7554 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7557 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11eb755a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb755c je 0x11eb75be */
  if (C.zf) goto L_11eb75be;
  /* 11eb755e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7561 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7563 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eb7565 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb7568 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb756e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7571 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7574 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11eb7577 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7579 je 0x11eb75bc */
  if (C.zf) goto L_11eb75bc;
L_11eb757b:;
  /* 11eb757b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb757e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7583 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7587 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb7589 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11eb758c push edx */
  push32((uint32_t)(EDX));
  /* 11eb758d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7590 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7593 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7594 push 0x11eddb58 */
  push32((uint32_t)(0x11eddb58u));
  /* 11eb7599 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb759b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb759d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb759f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb75a1 call 0x11eb54f0 */
  push32(0x11eb75a6u); f_11eb54f0();
  /* 11eb75a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb75a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb75ac jne 0x11eb75af */
  if (!C.zf) goto L_11eb75af;
  /* 11eb75ae int3  */
  x86_unimpl("int3 @ 0x11eb75ae");
L_11eb75af:;
  /* 11eb75af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb75b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb75b3 jne 0x11eb757b */
  if (!C.zf) goto L_11eb757b;
  /* 11eb75b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11eb75bc:;
  /* 11eb75bc jmp 0x11eb754e */
  goto L_11eb754e;
L_11eb75be:;
  /* 11eb75be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb75c1 pop edi */
  EDI = (pop32());
  /* 11eb75c2 pop esi */
  ESI = (pop32());
  /* 11eb75c3 pop ebx */
  EBX = (pop32());
  /* 11eb75c4 mov esp, ebp */
  ESP = (EBP);
  /* 11eb75c6 pop ebp */
  EBP = (pop32());
  /* 11eb75c7 ret  */
  ESPCHK(0x11eb7540u, _esp0);
  ESP += 4; return;
}

/* FUN_100075d0 @ 0x11eb75d0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11eb75d0(void) {
  FTRACE(0x11eb75d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb75d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb75d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb75d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb75d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb75d7 push esi */
  push32((uint32_t)(ESI));
  /* 11eb75d8 push edi */
  push32((uint32_t)(EDI));
  /* 11eb75d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11eb75e0 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb75e5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb75e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb75ea jne 0x11eb75f6 */
  if (!C.zf) goto L_11eb75f6;
  /* 11eb75ec mov eax, 1 */
  EAX = (0x1u);
  /* 11eb75f1 jmp 0x11eb7928 */
  goto L_11eb7928;
L_11eb75f6:;
  /* 11eb75f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb75f8 call 0x11eb9e30 */
  push32(0x11eb75fdu); f_11eb9e30();
  /* 11eb75fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7600 call 0x11eba610 */
  push32(0x11eb7605u); f_11eba610();
  /* 11eb7605 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb7608 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb760c je 0x11eb7719 */
  if (C.zf) goto L_11eb7719;
  /* 11eb7612 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7616 je 0x11eb7719 */
  if (C.zf) goto L_11eb7719;
  /* 11eb761c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb761f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11eb7622 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb7625 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7628 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11eb762b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb762f ja 0x11eb76e2 */
  if ((!C.cf&&!C.zf)) goto L_11eb76e2;
  /* 11eb7635 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb7638 jmp dword ptr [eax*4 + 0x11eb792f] */
  switch (EAX) {
    case 0: goto L_11eb76ba;
    case 1: goto L_11eb7692;
    case 2: goto L_11eb766a;
    case 3: goto L_11eb763f;
    default: x86_unimpl("switch@0x11eb7638 out of table"); return;
  }
L_11eb763f:;
  /* 11eb763f push 0x11eddcac */
  push32((uint32_t)(0x11eddcacu));
  /* 11eb7644 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb7649 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb764b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb764d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb764f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7651 call 0x11eb54f0 */
  push32(0x11eb7656u); f_11eb54f0();
  /* 11eb7656 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7659 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb765c jne 0x11eb765f */
  if (!C.zf) goto L_11eb765f;
  /* 11eb765e int3  */
  x86_unimpl("int3 @ 0x11eb765e");
L_11eb765f:;
  /* 11eb765f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7661 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7663 jne 0x11eb763f */
  if (!C.zf) goto L_11eb763f;
  /* 11eb7665 jmp 0x11eb7708 */
  goto L_11eb7708;
L_11eb766a:;
  /* 11eb766a push 0x11eddc88 */
  push32((uint32_t)(0x11eddc88u));
  /* 11eb766f push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb7674 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7676 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7678 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb767a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb767c call 0x11eb54f0 */
  push32(0x11eb7681u); f_11eb54f0();
  /* 11eb7681 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7687 jne 0x11eb768a */
  if (!C.zf) goto L_11eb768a;
  /* 11eb7689 int3  */
  x86_unimpl("int3 @ 0x11eb7689");
L_11eb768a:;
  /* 11eb768a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb768c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb768e jne 0x11eb766a */
  if (!C.zf) goto L_11eb766a;
  /* 11eb7690 jmp 0x11eb7708 */
  goto L_11eb7708;
L_11eb7692:;
  /* 11eb7692 push 0x11eddc64 */
  push32((uint32_t)(0x11eddc64u));
  /* 11eb7697 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb769c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb769e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76a4 call 0x11eb54f0 */
  push32(0x11eb76a9u); f_11eb54f0();
  /* 11eb76a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb76ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb76af jne 0x11eb76b2 */
  if (!C.zf) goto L_11eb76b2;
  /* 11eb76b1 int3  */
  x86_unimpl("int3 @ 0x11eb76b1");
L_11eb76b2:;
  /* 11eb76b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb76b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb76b6 jne 0x11eb7692 */
  if (!C.zf) goto L_11eb7692;
  /* 11eb76b8 jmp 0x11eb7708 */
  goto L_11eb7708;
L_11eb76ba:;
  /* 11eb76ba push 0x11eddc40 */
  push32((uint32_t)(0x11eddc40u));
  /* 11eb76bf push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb76c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76cc call 0x11eb54f0 */
  push32(0x11eb76d1u); f_11eb54f0();
  /* 11eb76d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb76d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb76d7 jne 0x11eb76da */
  if (!C.zf) goto L_11eb76da;
  /* 11eb76d9 int3  */
  x86_unimpl("int3 @ 0x11eb76d9");
L_11eb76da:;
  /* 11eb76da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb76dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb76de jne 0x11eb76ba */
  if (!C.zf) goto L_11eb76ba;
  /* 11eb76e0 jmp 0x11eb7708 */
  goto L_11eb7708;
L_11eb76e2:;
  /* 11eb76e2 push 0x11eddc14 */
  push32((uint32_t)(0x11eddc14u));
  /* 11eb76e7 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb76ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb76f4 call 0x11eb54f0 */
  push32(0x11eb76f9u); f_11eb54f0();
  /* 11eb76f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb76fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb76ff jne 0x11eb7702 */
  if (!C.zf) goto L_11eb7702;
  /* 11eb7701 int3  */
  x86_unimpl("int3 @ 0x11eb7701");
L_11eb7702:;
  /* 11eb7702 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb7704 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb7706 jne 0x11eb76e2 */
  if (!C.zf) goto L_11eb76e2;
L_11eb7708:;
  /* 11eb7708 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb770a call 0x11eb9ed0 */
  push32(0x11eb770fu); f_11eb9ed0();
  /* 11eb770f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7712 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7714 jmp 0x11eb7928 */
  goto L_11eb7928;
L_11eb7719:;
  /* 11eb7719 mov eax, dword ptr [0x11ee27d4] */
  EAX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb771e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb7721 jmp 0x11eb772b */
  goto L_11eb772b;
L_11eb7723:;
  /* 11eb7723 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7726 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb7728 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11eb772b:;
  /* 11eb772b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb772f je 0x11eb791b */
  if (C.zf) goto L_11eb791b;
  /* 11eb7735 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11eb773c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb773f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11eb7742 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7748 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb774b je 0x11eb7770 */
  if (C.zf) goto L_11eb7770;
  /* 11eb774d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7750 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7754 je 0x11eb7770 */
  if (C.zf) goto L_11eb7770;
  /* 11eb7756 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7759 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11eb775c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7762 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7765 je 0x11eb7770 */
  if (C.zf) goto L_11eb7770;
  /* 11eb7767 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb776a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb776e jne 0x11eb7788 */
  if (!C.zf) goto L_11eb7788;
L_11eb7770:;
  /* 11eb7770 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7773 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11eb7776 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb777c mov edx, dword ptr [ecx*4 + 0x11ee0a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0a94)));
  /* 11eb7783 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11eb7786 jmp 0x11eb778f */
  goto L_11eb778f;
L_11eb7788:;
  /* 11eb7788 mov dword ptr [ebp - 0x14], 0x11eddc0c */
  w32((uint32_t)(EBP + -0x14), (0x11eddc0cu));
L_11eb778f:;
  /* 11eb778f push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb7791 mov al, byte ptr [0x11ee0a90] */
  AL = (r8((uint32_t)(0x11ee0a90)));
  /* 11eb7796 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7797 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb779a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb779d push ecx */
  push32((uint32_t)(ECX));
  /* 11eb779e call 0x11eb7540 */
  push32(0x11eb77a3u); f_11eb7540();
  /* 11eb77a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb77a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb77a8 jne 0x11eb77e4 */
  if (!C.zf) goto L_11eb77e4;
L_11eb77aa:;
  /* 11eb77aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb77ad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb77b0 push edx */
  push32((uint32_t)(EDX));
  /* 11eb77b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb77b4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11eb77b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb77b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb77bb push edx */
  push32((uint32_t)(EDX));
  /* 11eb77bc push 0x11eddae8 */
  push32((uint32_t)(0x11eddae8u));
  /* 11eb77c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb77c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb77c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb77c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb77c9 call 0x11eb54f0 */
  push32(0x11eb77ceu); f_11eb54f0();
  /* 11eb77ce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb77d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb77d4 jne 0x11eb77d7 */
  if (!C.zf) goto L_11eb77d7;
  /* 11eb77d6 int3  */
  x86_unimpl("int3 @ 0x11eb77d6");
L_11eb77d7:;
  /* 11eb77d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb77d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb77db jne 0x11eb77aa */
  if (!C.zf) goto L_11eb77aa;
  /* 11eb77dd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11eb77e4:;
  /* 11eb77e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11eb77e6 mov cl, byte ptr [0x11ee0a90] */
  CL = (r8((uint32_t)(0x11ee0a90)));
  /* 11eb77ec push ecx */
  push32((uint32_t)(ECX));
  /* 11eb77ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb77f0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11eb77f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb77f6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11eb77fa push edx */
  push32((uint32_t)(EDX));
  /* 11eb77fb call 0x11eb7540 */
  push32(0x11eb7800u); f_11eb7540();
  /* 11eb7800 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7805 jne 0x11eb7841 */
  if (!C.zf) goto L_11eb7841;
L_11eb7807:;
  /* 11eb7807 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb780a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb780d push eax */
  push32((uint32_t)(EAX));
  /* 11eb780e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7811 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11eb7814 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7815 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb7818 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7819 push 0x11eddabc */
  push32((uint32_t)(0x11eddabcu));
  /* 11eb781e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7820 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7822 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7824 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7826 call 0x11eb54f0 */
  push32(0x11eb782bu); f_11eb54f0();
  /* 11eb782b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb782e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7831 jne 0x11eb7834 */
  if (!C.zf) goto L_11eb7834;
  /* 11eb7833 int3  */
  x86_unimpl("int3 @ 0x11eb7833");
L_11eb7834:;
  /* 11eb7834 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7836 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7838 jne 0x11eb7807 */
  if (!C.zf) goto L_11eb7807;
  /* 11eb783a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11eb7841:;
  /* 11eb7841 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7844 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7848 jne 0x11eb789a */
  if (!C.zf) goto L_11eb789a;
  /* 11eb784a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb784d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11eb7850 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7851 mov dl, byte ptr [0x11ee0a91] */
  DL = (r8((uint32_t)(0x11ee0a91)));
  /* 11eb7857 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7858 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb785b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb785e push eax */
  push32((uint32_t)(EAX));
  /* 11eb785f call 0x11eb7540 */
  push32(0x11eb7864u); f_11eb7540();
  /* 11eb7864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7869 jne 0x11eb789a */
  if (!C.zf) goto L_11eb789a;
L_11eb786b:;
  /* 11eb786b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb786e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7871 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7872 push 0x11eddbe0 */
  push32((uint32_t)(0x11eddbe0u));
  /* 11eb7877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7879 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb787b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb787d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb787f call 0x11eb54f0 */
  push32(0x11eb7884u); f_11eb54f0();
  /* 11eb7884 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7887 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb788a jne 0x11eb788d */
  if (!C.zf) goto L_11eb788d;
  /* 11eb788c int3  */
  x86_unimpl("int3 @ 0x11eb788c");
L_11eb788d:;
  /* 11eb788d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb788f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb7891 jne 0x11eb786b */
  if (!C.zf) goto L_11eb786b;
  /* 11eb7893 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11eb789a:;
  /* 11eb789a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb789e jne 0x11eb7916 */
  if (!C.zf) goto L_11eb7916;
  /* 11eb78a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb78a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb78a7 je 0x11eb78dc */
  if (C.zf) goto L_11eb78dc;
L_11eb78a9:;
  /* 11eb78a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb78ac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11eb78af push edx */
  push32((uint32_t)(EDX));
  /* 11eb78b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb78b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11eb78b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb78b7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb78ba push edx */
  push32((uint32_t)(EDX));
  /* 11eb78bb push 0x11eddbc0 */
  push32((uint32_t)(0x11eddbc0u));
  /* 11eb78c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb78c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb78c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb78c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb78c8 call 0x11eb54f0 */
  push32(0x11eb78cdu); f_11eb54f0();
  /* 11eb78cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb78d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb78d3 jne 0x11eb78d6 */
  if (!C.zf) goto L_11eb78d6;
  /* 11eb78d5 int3  */
  x86_unimpl("int3 @ 0x11eb78d5");
L_11eb78d6:;
  /* 11eb78d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb78d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb78da jne 0x11eb78a9 */
  if (!C.zf) goto L_11eb78a9;
L_11eb78dc:;
  /* 11eb78dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb78df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11eb78e2 push edx */
  push32((uint32_t)(EDX));
  /* 11eb78e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb78e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb78e9 push eax */
  push32((uint32_t)(EAX));
  /* 11eb78ea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb78ed push ecx */
  push32((uint32_t)(ECX));
  /* 11eb78ee push 0x11eddb94 */
  push32((uint32_t)(0x11eddb94u));
  /* 11eb78f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb78f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb78f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb78f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb78fb call 0x11eb54f0 */
  push32(0x11eb7900u); f_11eb54f0();
  /* 11eb7900 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7903 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7906 jne 0x11eb7909 */
  if (!C.zf) goto L_11eb7909;
  /* 11eb7908 int3  */
  x86_unimpl("int3 @ 0x11eb7908");
L_11eb7909:;
  /* 11eb7909 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb790b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb790d jne 0x11eb78dc */
  if (!C.zf) goto L_11eb78dc;
  /* 11eb790f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11eb7916:;
  /* 11eb7916 jmp 0x11eb7723 */
  goto L_11eb7723;
L_11eb791b:;
  /* 11eb791b push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb791d call 0x11eb9ed0 */
  push32(0x11eb7922u); f_11eb9ed0();
  /* 11eb7922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11eb7928:;
  /* 11eb7928 pop edi */
  EDI = (pop32());
  /* 11eb7929 pop esi */
  ESI = (pop32());
  /* 11eb792a pop ebx */
  EBX = (pop32());
  /* 11eb792b mov esp, ebp */
  ESP = (EBP);
  /* 11eb792d pop ebp */
  EBP = (pop32());
  /* 11eb792e ret  */
  ESPCHK(0x11eb75d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007940 @ 0x11eb7940 (34 bytes, 13 insns) */
void f_11eb7940(void) {
  FTRACE(0x11eb7940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7940 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7941 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7943 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7944 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb7949 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb794c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7950 je 0x11eb795b */
  if (C.zf) goto L_11eb795b;
  /* 11eb7952 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7955 mov dword ptr [0x11ee0a84], ecx */
  w32((uint32_t)(0x11ee0a84), (ECX));
L_11eb795b:;
  /* 11eb795b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb795e mov esp, ebp */
  ESP = (EBP);
  /* 11eb7960 pop ebp */
  EBP = (pop32());
  /* 11eb7961 ret  */
  ESPCHK(0x11eb7940u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x11eb7970 (103 bytes, 38 insns) */
void f_11eb7970(void) {
  FTRACE(0x11eb7970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7970 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7971 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7973 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7974 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb7979 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb797c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb797e jne 0x11eb7982 */
  if (!C.zf) goto L_11eb7982;
  /* 11eb7980 jmp 0x11eb79d3 */
  goto L_11eb79d3;
L_11eb7982:;
  /* 11eb7982 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7984 call 0x11eb9e30 */
  push32(0x11eb7989u); f_11eb9e30();
  /* 11eb7989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb798c mov ecx, dword ptr [0x11ee27d4] */
  ECX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb7992 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eb7995 jmp 0x11eb799f */
  goto L_11eb799f;
L_11eb7997:;
  /* 11eb7997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb799a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb799c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb799f:;
  /* 11eb799f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb79a3 je 0x11eb79c9 */
  if (C.zf) goto L_11eb79c9;
  /* 11eb79a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb79a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11eb79ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb79b1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb79b4 jne 0x11eb79c7 */
  if (!C.zf) goto L_11eb79c7;
  /* 11eb79b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb79b9 push eax */
  push32((uint32_t)(EAX));
  /* 11eb79ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb79bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb79c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb79c1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11eb79c4u);
  /* 11eb79c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb79c7:;
  /* 11eb79c7 jmp 0x11eb7997 */
  goto L_11eb7997;
L_11eb79c9:;
  /* 11eb79c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb79cb call 0x11eb9ed0 */
  push32(0x11eb79d0u); f_11eb9ed0();
  /* 11eb79d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb79d3:;
  /* 11eb79d3 mov esp, ebp */
  ESP = (EBP);
  /* 11eb79d5 pop ebp */
  EBP = (pop32());
  /* 11eb79d6 ret  */
  ESPCHK(0x11eb7970u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11eb79e0 (75 bytes, 28 insns) */
void f_11eb79e0(void) {
  FTRACE(0x11eb79e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb79e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb79e1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb79e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb79e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb79e8 je 0x11eb7a1d */
  if (C.zf) goto L_11eb7a1d;
  /* 11eb79ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb79ed push eax */
  push32((uint32_t)(EAX));
  /* 11eb79ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb79f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb79f2 call dword ptr [0x11ee53b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b0))), 0x11eb79f8u);
  /* 11eb79f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb79fa jne 0x11eb7a1d */
  if (!C.zf) goto L_11eb7a1d;
  /* 11eb79fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7a00 je 0x11eb7a14 */
  if (C.zf) goto L_11eb7a14;
  /* 11eb7a02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb7a05 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7a09 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7a0a call dword ptr [0x11ee53e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e4))), 0x11eb7a10u);
  /* 11eb7a10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7a12 jne 0x11eb7a1d */
  if (!C.zf) goto L_11eb7a1d;
L_11eb7a14:;
  /* 11eb7a14 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11eb7a1b jmp 0x11eb7a24 */
  goto L_11eb7a24;
L_11eb7a1d:;
  /* 11eb7a1d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11eb7a24:;
  /* 11eb7a24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7a27 mov esp, ebp */
  ESP = (EBP);
  /* 11eb7a29 pop ebp */
  EBP = (pop32());
  /* 11eb7a2a ret  */
  ESPCHK(0x11eb79e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x11eb7a30 (134 bytes, 50 insns) */
void f_11eb7a30(void) {
  FTRACE(0x11eb7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7a31 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7a34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7a38 jne 0x11eb7a3e */
  if (!C.zf) goto L_11eb7a3e;
  /* 11eb7a3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7a3c jmp 0x11eb7ab2 */
  goto L_11eb7ab2;
L_11eb7a3e:;
  /* 11eb7a3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb7a40 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11eb7a42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7a45 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7a48 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7a49 call 0x11eb79e0 */
  push32(0x11eb7a4eu); f_11eb79e0();
  /* 11eb7a4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7a53 jne 0x11eb7a59 */
  if (!C.zf) goto L_11eb7a59;
  /* 11eb7a55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7a57 jmp 0x11eb7ab2 */
  goto L_11eb7ab2;
L_11eb7a59:;
  /* 11eb7a59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7a5c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7a5f push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7a60 call 0x11eba730 */
  push32(0x11eb7a65u); f_11eba730();
  /* 11eb7a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7a68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb7a6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7a6f je 0x11eb7a86 */
  if (C.zf) goto L_11eb7a86;
  /* 11eb7a71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7a74 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7a77 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7a7b push eax */
  push32((uint32_t)(EAX));
  /* 11eb7a7c call 0x11eba790 */
  push32(0x11eb7a81u); f_11eba790();
  /* 11eb7a81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7a84 jmp 0x11eb7ab2 */
  goto L_11eb7ab2;
L_11eb7a86:;
  /* 11eb7a86 mov ecx, dword ptr [0x11ee2788] */
  ECX = (r32((uint32_t)(0x11ee2788)));
  /* 11eb7a8c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7a92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7a94 je 0x11eb7a9d */
  if (C.zf) goto L_11eb7a9d;
  /* 11eb7a96 mov eax, 1 */
  EAX = (0x1u);
  /* 11eb7a9b jmp 0x11eb7ab2 */
  goto L_11eb7ab2;
L_11eb7a9d:;
  /* 11eb7a9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7aa0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7aa3 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7aa6 mov eax, dword ptr [0x11ee412c] */
  EAX = (r32((uint32_t)(0x11ee412c)));
  /* 11eb7aab push eax */
  push32((uint32_t)(EAX));
  /* 11eb7aac call dword ptr [0x11ee537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee537c))), 0x11eb7ab2u);
L_11eb7ab2:;
  /* 11eb7ab2 mov esp, ebp */
  ESP = (EBP);
  /* 11eb7ab4 pop ebp */
  EBP = (pop32());
  /* 11eb7ab5 ret  */
  ESPCHK(0x11eb7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ac0 @ 0x11eb7ac0 (227 bytes, 80 insns) */
void f_11eb7ac0(void) {
  FTRACE(0x11eb7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7ac7 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7ac8 call 0x11eb7a30 */
  push32(0x11eb7acdu); f_11eb7a30();
  /* 11eb7acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7ad0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7ad2 jne 0x11eb7adb */
  if (!C.zf) goto L_11eb7adb;
  /* 11eb7ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7ad6 jmp 0x11eb7b9f */
  goto L_11eb7b9f;
L_11eb7adb:;
  /* 11eb7adb push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7add call 0x11eb9e30 */
  push32(0x11eb7ae2u); f_11eb9e30();
  /* 11eb7ae2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7ae5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7ae8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7aeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eb7aee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7af1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb7af4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7af9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7afc je 0x11eb7b20 */
  if (C.zf) goto L_11eb7b20;
  /* 11eb7afe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7b01 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7b05 je 0x11eb7b20 */
  if (C.zf) goto L_11eb7b20;
  /* 11eb7b07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7b0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb7b0d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7b12 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7b15 je 0x11eb7b20 */
  if (C.zf) goto L_11eb7b20;
  /* 11eb7b17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7b1a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7b1e jne 0x11eb7b93 */
  if (!C.zf) goto L_11eb7b93;
L_11eb7b20:;
  /* 11eb7b20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb7b22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb7b25 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7b29 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7b2a call 0x11eb79e0 */
  push32(0x11eb7b2fu); f_11eb79e0();
  /* 11eb7b2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7b34 je 0x11eb7b93 */
  if (C.zf) goto L_11eb7b93;
  /* 11eb7b36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7b39 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11eb7b3c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7b3f jne 0x11eb7b93 */
  if (!C.zf) goto L_11eb7b93;
  /* 11eb7b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7b44 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11eb7b47 cmp ecx, dword ptr [0x11ee0a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee0a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7b4d jg 0x11eb7b93 */
  if ((!C.zf&&C.sf==C.of)) goto L_11eb7b93;
  /* 11eb7b4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7b53 je 0x11eb7b60 */
  if (C.zf) goto L_11eb7b60;
  /* 11eb7b55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb7b58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7b5b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11eb7b5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11eb7b60:;
  /* 11eb7b60 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7b64 je 0x11eb7b71 */
  if (C.zf) goto L_11eb7b71;
  /* 11eb7b66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb7b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7b6c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11eb7b6f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11eb7b71:;
  /* 11eb7b71 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7b75 je 0x11eb7b82 */
  if (C.zf) goto L_11eb7b82;
  /* 11eb7b77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb7b7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7b7d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11eb7b80 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11eb7b82:;
  /* 11eb7b82 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7b84 call 0x11eb9ed0 */
  push32(0x11eb7b89u); f_11eb9ed0();
  /* 11eb7b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7b8c mov eax, 1 */
  EAX = (0x1u);
  /* 11eb7b91 jmp 0x11eb7b9f */
  goto L_11eb7b9f;
L_11eb7b93:;
  /* 11eb7b93 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7b95 call 0x11eb9ed0 */
  push32(0x11eb7b9au); f_11eb9ed0();
  /* 11eb7b9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb7b9f:;
  /* 11eb7b9f mov esp, ebp */
  ESP = (EBP);
  /* 11eb7ba1 pop ebp */
  EBP = (pop32());
  /* 11eb7ba2 ret  */
  ESPCHK(0x11eb7ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x11eb7bb0 (28 bytes, 11 insns) */
void f_11eb7bb0(void) {
  FTRACE(0x11eb7bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7bb4 mov eax, dword ptr [0x11ee4138] */
  EAX = (r32((uint32_t)(0x11ee4138)));
  /* 11eb7bb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb7bbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7bbf mov dword ptr [0x11ee4138], ecx */
  w32((uint32_t)(0x11ee4138), (ECX));
  /* 11eb7bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7bc8 mov esp, ebp */
  ESP = (EBP);
  /* 11eb7bca pop ebp */
  EBP = (pop32());
  /* 11eb7bcb ret  */
  ESPCHK(0x11eb7bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bd0 @ 0x11eb7bd0 (362 bytes, 116 insns) */
void f_11eb7bd0(void) {
  FTRACE(0x11eb7bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7bd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb7bd7 push esi */
  push32((uint32_t)(ESI));
  /* 11eb7bd8 push edi */
  push32((uint32_t)(EDI));
  /* 11eb7bd9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7bdd jne 0x11eb7c0a */
  if (!C.zf) goto L_11eb7c0a;
L_11eb7bdf:;
  /* 11eb7bdf push 0x11eddcf4 */
  push32((uint32_t)(0x11eddcf4u));
  /* 11eb7be4 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb7be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7beb push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7bed push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7bef push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7bf1 call 0x11eb54f0 */
  push32(0x11eb7bf6u); f_11eb54f0();
  /* 11eb7bf6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7bf9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7bfc jne 0x11eb7bff */
  if (!C.zf) goto L_11eb7bff;
  /* 11eb7bfe int3  */
  x86_unimpl("int3 @ 0x11eb7bfe");
L_11eb7bff:;
  /* 11eb7bff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7c03 jne 0x11eb7bdf */
  if (!C.zf) goto L_11eb7bdf;
  /* 11eb7c05 jmp 0x11eb7d33 */
  goto L_11eb7d33;
L_11eb7c0a:;
  /* 11eb7c0a push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7c0c call 0x11eb9e30 */
  push32(0x11eb7c11u); f_11eb9e30();
  /* 11eb7c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7c14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7c17 mov edx, dword ptr [0x11ee27d4] */
  EDX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb7c1d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11eb7c1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eb7c26 jmp 0x11eb7c31 */
  goto L_11eb7c31;
L_11eb7c28:;
  /* 11eb7c28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7c2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7c2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb7c31:;
  /* 11eb7c31 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7c35 jge 0x11eb7c55 */
  if ((C.sf==C.of)) goto L_11eb7c55;
  /* 11eb7c37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7c3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7c3d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11eb7c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7c48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7c4b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11eb7c53 jmp 0x11eb7c28 */
  goto L_11eb7c28;
L_11eb7c55:;
  /* 11eb7c55 mov edx, dword ptr [0x11ee27d4] */
  EDX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb7c5b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11eb7c5e jmp 0x11eb7c68 */
  goto L_11eb7c68;
L_11eb7c60:;
  /* 11eb7c60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7c63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb7c65 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11eb7c68:;
  /* 11eb7c68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7c6c je 0x11eb7d11 */
  if (C.zf) goto L_11eb7d11;
  /* 11eb7c72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7c75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb7c78 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7c7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7c7f jl 0x11eb7ce7 */
  if ((C.sf!=C.of)) goto L_11eb7ce7;
  /* 11eb7c81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7c84 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11eb7c87 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb7c8d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7c90 jge 0x11eb7ce7 */
  if ((C.sf==C.of)) goto L_11eb7ce7;
  /* 11eb7c92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7c95 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11eb7c98 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7c9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7ca1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11eb7ca5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7ca8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7cab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11eb7cae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb7cb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7cb7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11eb7cbb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7cbe mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb7cc1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7cc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7cc9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11eb7ccd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7cd0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7cd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7cd6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11eb7cd9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7cde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7ce1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11eb7ce5 jmp 0x11eb7d0c */
  goto L_11eb7d0c;
L_11eb7ce7:;
  /* 11eb7ce7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7cea push edx */
  push32((uint32_t)(EDX));
  /* 11eb7ceb push 0x11eddcd0 */
  push32((uint32_t)(0x11eddcd0u));
  /* 11eb7cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7cf8 call 0x11eb54f0 */
  push32(0x11eb7cfdu); f_11eb54f0();
  /* 11eb7cfd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7d00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7d03 jne 0x11eb7d06 */
  if (!C.zf) goto L_11eb7d06;
  /* 11eb7d05 int3  */
  x86_unimpl("int3 @ 0x11eb7d05");
L_11eb7d06:;
  /* 11eb7d06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7d0a jne 0x11eb7ce7 */
  if (!C.zf) goto L_11eb7ce7;
L_11eb7d0c:;
  /* 11eb7d0c jmp 0x11eb7c60 */
  goto L_11eb7c60;
L_11eb7d11:;
  /* 11eb7d11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7d14 mov edx, dword ptr [0x11ee27dc] */
  EDX = (r32((uint32_t)(0x11ee27dc)));
  /* 11eb7d1a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11eb7d1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7d20 mov ecx, dword ptr [0x11ee27d0] */
  ECX = (r32((uint32_t)(0x11ee27d0)));
  /* 11eb7d26 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11eb7d29 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7d2b call 0x11eb9ed0 */
  push32(0x11eb7d30u); f_11eb9ed0();
  /* 11eb7d30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb7d33:;
  /* 11eb7d33 pop edi */
  EDI = (pop32());
  /* 11eb7d34 pop esi */
  ESI = (pop32());
  /* 11eb7d35 pop ebx */
  EBX = (pop32());
  /* 11eb7d36 mov esp, ebp */
  ESP = (EBP);
  /* 11eb7d38 pop ebp */
  EBP = (pop32());
  /* 11eb7d39 ret  */
  ESPCHK(0x11eb7bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d40 @ 0x11eb7d40 (291 bytes, 95 insns) */
void f_11eb7d40(void) {
  FTRACE(0x11eb7d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7d41 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7d46 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb7d47 push esi */
  push32((uint32_t)(ESI));
  /* 11eb7d48 push edi */
  push32((uint32_t)(EDI));
  /* 11eb7d49 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eb7d50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7d54 je 0x11eb7d62 */
  if (C.zf) goto L_11eb7d62;
  /* 11eb7d56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7d5a je 0x11eb7d62 */
  if (C.zf) goto L_11eb7d62;
  /* 11eb7d5c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7d60 jne 0x11eb7d90 */
  if (!C.zf) goto L_11eb7d90;
L_11eb7d62:;
  /* 11eb7d62 push 0x11eddd1c */
  push32((uint32_t)(0x11eddd1cu));
  /* 11eb7d67 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb7d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7d74 call 0x11eb54f0 */
  push32(0x11eb7d79u); f_11eb54f0();
  /* 11eb7d79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7d7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7d7f jne 0x11eb7d82 */
  if (!C.zf) goto L_11eb7d82;
  /* 11eb7d81 int3  */
  x86_unimpl("int3 @ 0x11eb7d81");
L_11eb7d82:;
  /* 11eb7d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7d86 jne 0x11eb7d62 */
  if (!C.zf) goto L_11eb7d62;
  /* 11eb7d88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb7d8b jmp 0x11eb7e5c */
  goto L_11eb7e5c;
L_11eb7d90:;
  /* 11eb7d90 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eb7d97 jmp 0x11eb7da2 */
  goto L_11eb7da2;
L_11eb7d99:;
  /* 11eb7d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7d9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7d9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb7da2:;
  /* 11eb7da2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7da6 jge 0x11eb7e2c */
  if ((C.sf==C.of)) goto L_11eb7e2c;
  /* 11eb7dac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7daf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb7db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7db5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb7db8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11eb7dbc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7dc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7dc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7dc6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11eb7dca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7dcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb7dd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7dd3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb7dd6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11eb7dda sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7dde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7de1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7de4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11eb7de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7deb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7dee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7df3 jne 0x11eb7e02 */
  if (!C.zf) goto L_11eb7e02;
  /* 11eb7df5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7df8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7dfb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7e00 je 0x11eb7e27 */
  if (C.zf) goto L_11eb7e27;
L_11eb7e02:;
  /* 11eb7e02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7e06 je 0x11eb7e27 */
  if (C.zf) goto L_11eb7e27;
  /* 11eb7e08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7e0c jne 0x11eb7e20 */
  if (!C.zf) goto L_11eb7e20;
  /* 11eb7e0e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7e12 jne 0x11eb7e27 */
  if (!C.zf) goto L_11eb7e27;
  /* 11eb7e14 mov eax, dword ptr [0x11ee0a84] */
  EAX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb7e19 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7e1e je 0x11eb7e27 */
  if (C.zf) goto L_11eb7e27;
L_11eb7e20:;
  /* 11eb7e20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11eb7e27:;
  /* 11eb7e27 jmp 0x11eb7d99 */
  goto L_11eb7d99;
L_11eb7e2c:;
  /* 11eb7e2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb7e2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb7e32 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11eb7e35 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7e38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7e3b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11eb7e3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb7e41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb7e44 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11eb7e47 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7e4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7e4d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11eb7e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7e53 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11eb7e59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11eb7e5c:;
  /* 11eb7e5c pop edi */
  EDI = (pop32());
  /* 11eb7e5d pop esi */
  ESI = (pop32());
  /* 11eb7e5e pop ebx */
  EBX = (pop32());
  /* 11eb7e5f mov esp, ebp */
  ESP = (EBP);
  /* 11eb7e61 pop ebp */
  EBP = (pop32());
  /* 11eb7e62 ret  */
  ESPCHK(0x11eb7d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e70 @ 0x11eb7e70 (697 bytes, 253 insns) */
void f_11eb7e70(void) {
  FTRACE(0x11eb7e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb7e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb7e71 mov ebp, esp */
  EBP = (ESP);
  /* 11eb7e73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb7e76 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb7e77 push esi */
  push32((uint32_t)(ESI));
  /* 11eb7e78 push edi */
  push32((uint32_t)(EDI));
  /* 11eb7e79 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eb7e80 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb7e82 call 0x11eb9e30 */
  push32(0x11eb7e87u); f_11eb9e30();
  /* 11eb7e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb7e8a:;
  /* 11eb7e8a push 0x11edde14 */
  push32((uint32_t)(0x11edde14u));
  /* 11eb7e8f push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb7e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7e9c call 0x11eb54f0 */
  push32(0x11eb7ea1u); f_11eb54f0();
  /* 11eb7ea1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7ea4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7ea7 jne 0x11eb7eaa */
  if (!C.zf) goto L_11eb7eaa;
  /* 11eb7ea9 int3  */
  x86_unimpl("int3 @ 0x11eb7ea9");
L_11eb7eaa:;
  /* 11eb7eaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7eac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7eae jne 0x11eb7e8a */
  if (!C.zf) goto L_11eb7e8a;
  /* 11eb7eb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7eb4 je 0x11eb7ebe */
  if (C.zf) goto L_11eb7ebe;
  /* 11eb7eb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb7eb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb7ebb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11eb7ebe:;
  /* 11eb7ebe mov eax, dword ptr [0x11ee27d4] */
  EAX = (r32((uint32_t)(0x11ee27d4)));
  /* 11eb7ec3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb7ec6 jmp 0x11eb7ed0 */
  goto L_11eb7ed0;
L_11eb7ec8:;
  /* 11eb7ec8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7ecb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb7ecd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11eb7ed0:;
  /* 11eb7ed0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7ed4 je 0x11eb80f2 */
  if (C.zf) goto L_11eb80f2;
  /* 11eb7eda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7edd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7ee0 je 0x11eb80f2 */
  if (C.zf) goto L_11eb80f2;
  /* 11eb7ee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7ee9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11eb7eec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb7ef2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7ef5 je 0x11eb7f24 */
  if (C.zf) goto L_11eb7f24;
  /* 11eb7ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7efa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11eb7efd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7f03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7f05 je 0x11eb7f24 */
  if (C.zf) goto L_11eb7f24;
  /* 11eb7f07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7f0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb7f0d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7f12 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7f15 jne 0x11eb7f29 */
  if (!C.zf) goto L_11eb7f29;
  /* 11eb7f17 mov ecx, dword ptr [0x11ee0a84] */
  ECX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb7f1d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7f20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7f22 jne 0x11eb7f29 */
  if (!C.zf) goto L_11eb7f29;
L_11eb7f24:;
  /* 11eb7f24 jmp 0x11eb80ed */
  goto L_11eb80ed;
L_11eb7f29:;
  /* 11eb7f29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7f2c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7f30 je 0x11eb7fa2 */
  if (C.zf) goto L_11eb7fa2;
  /* 11eb7f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb7f36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7f39 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11eb7f3c push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7f3d call 0x11eb79e0 */
  push32(0x11eb7f42u); f_11eb79e0();
  /* 11eb7f42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7f47 jne 0x11eb7f73 */
  if (!C.zf) goto L_11eb7f73;
L_11eb7f49:;
  /* 11eb7f49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7f4c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11eb7f4f push eax */
  push32((uint32_t)(EAX));
  /* 11eb7f50 push 0x11edde00 */
  push32((uint32_t)(0x11edde00u));
  /* 11eb7f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f5d call 0x11eb54f0 */
  push32(0x11eb7f62u); f_11eb54f0();
  /* 11eb7f62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7f65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7f68 jne 0x11eb7f6b */
  if (!C.zf) goto L_11eb7f6b;
  /* 11eb7f6a int3  */
  x86_unimpl("int3 @ 0x11eb7f6a");
L_11eb7f6b:;
  /* 11eb7f6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb7f6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb7f6f jne 0x11eb7f49 */
  if (!C.zf) goto L_11eb7f49;
  /* 11eb7f71 jmp 0x11eb7fa2 */
  goto L_11eb7fa2;
L_11eb7f73:;
  /* 11eb7f73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7f76 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11eb7f79 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7f7d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11eb7f80 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7f81 push 0x11edddf4 */
  push32((uint32_t)(0x11edddf4u));
  /* 11eb7f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7f8e call 0x11eb54f0 */
  push32(0x11eb7f93u); f_11eb54f0();
  /* 11eb7f93 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7f96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7f99 jne 0x11eb7f9c */
  if (!C.zf) goto L_11eb7f9c;
  /* 11eb7f9b int3  */
  x86_unimpl("int3 @ 0x11eb7f9b");
L_11eb7f9c:;
  /* 11eb7f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7f9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7fa0 jne 0x11eb7f73 */
  if (!C.zf) goto L_11eb7f73;
L_11eb7fa2:;
  /* 11eb7fa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7fa5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11eb7fa8 push edx */
  push32((uint32_t)(EDX));
  /* 11eb7fa9 push 0x11edddec */
  push32((uint32_t)(0x11edddecu));
  /* 11eb7fae push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7fb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7fb6 call 0x11eb54f0 */
  push32(0x11eb7fbbu); f_11eb54f0();
  /* 11eb7fbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7fbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7fc1 jne 0x11eb7fc4 */
  if (!C.zf) goto L_11eb7fc4;
  /* 11eb7fc3 int3  */
  x86_unimpl("int3 @ 0x11eb7fc3");
L_11eb7fc4:;
  /* 11eb7fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb7fc8 jne 0x11eb7fa2 */
  if (!C.zf) goto L_11eb7fa2;
  /* 11eb7fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7fcd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11eb7fd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb7fd6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb7fd9 jne 0x11eb804c */
  if (!C.zf) goto L_11eb804c;
L_11eb7fdb:;
  /* 11eb7fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7fde mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11eb7fe1 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7fe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7fe5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb7fe8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11eb7feb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb7ff0 push eax */
  push32((uint32_t)(EAX));
  /* 11eb7ff1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb7ff4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb7ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb7ff8 push 0x11edddb8 */
  push32((uint32_t)(0x11edddb8u));
  /* 11eb7ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb7fff push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8001 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8003 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8005 call 0x11eb54f0 */
  push32(0x11eb800au); f_11eb54f0();
  /* 11eb800a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb800d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8010 jne 0x11eb8013 */
  if (!C.zf) goto L_11eb8013;
  /* 11eb8012 int3  */
  x86_unimpl("int3 @ 0x11eb8012");
L_11eb8013:;
  /* 11eb8013 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8015 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb8017 jne 0x11eb7fdb */
  if (!C.zf) goto L_11eb7fdb;
  /* 11eb8019 cmp dword ptr [0x11ee4138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee4138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8020 je 0x11eb803b */
  if (C.zf) goto L_11eb803b;
  /* 11eb8022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8025 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11eb8028 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb802c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb802f push edx */
  push32((uint32_t)(EDX));
  /* 11eb8030 call dword ptr [0x11ee4138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee4138))), 0x11eb8036u);
  /* 11eb8036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8039 jmp 0x11eb8047 */
  goto L_11eb8047;
L_11eb803b:;
  /* 11eb803b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb803e push eax */
  push32((uint32_t)(EAX));
  /* 11eb803f call 0x11eb8130 */
  push32(0x11eb8044u); f_11eb8130();
  /* 11eb8044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb8047:;
  /* 11eb8047 jmp 0x11eb80ed */
  goto L_11eb80ed;
L_11eb804c:;
  /* 11eb804c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb804f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8053 jne 0x11eb8092 */
  if (!C.zf) goto L_11eb8092;
L_11eb8055:;
  /* 11eb8055 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8058 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11eb805b push eax */
  push32((uint32_t)(EAX));
  /* 11eb805c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb805f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8062 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8063 push 0x11eddd90 */
  push32((uint32_t)(0x11eddd90u));
  /* 11eb8068 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb806a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb806c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb806e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8070 call 0x11eb54f0 */
  push32(0x11eb8075u); f_11eb54f0();
  /* 11eb8075 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8078 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb807b jne 0x11eb807e */
  if (!C.zf) goto L_11eb807e;
  /* 11eb807d int3  */
  x86_unimpl("int3 @ 0x11eb807d");
L_11eb807e:;
  /* 11eb807e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8080 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb8082 jne 0x11eb8055 */
  if (!C.zf) goto L_11eb8055;
  /* 11eb8084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8087 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8088 call 0x11eb8130 */
  push32(0x11eb808du); f_11eb8130();
  /* 11eb808d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8090 jmp 0x11eb80ed */
  goto L_11eb80ed;
L_11eb8092:;
  /* 11eb8092 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8095 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11eb8098 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb809e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb80a1 jne 0x11eb80ed */
  if (!C.zf) goto L_11eb80ed;
L_11eb80a3:;
  /* 11eb80a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb80a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11eb80a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb80aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb80ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11eb80b0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11eb80b3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb80b8 push eax */
  push32((uint32_t)(EAX));
  /* 11eb80b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb80bc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb80bf push ecx */
  push32((uint32_t)(ECX));
  /* 11eb80c0 push 0x11eddd5c */
  push32((uint32_t)(0x11eddd5cu));
  /* 11eb80c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb80c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb80c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb80cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb80cd call 0x11eb54f0 */
  push32(0x11eb80d2u); f_11eb54f0();
  /* 11eb80d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb80d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb80d8 jne 0x11eb80db */
  if (!C.zf) goto L_11eb80db;
  /* 11eb80da int3  */
  x86_unimpl("int3 @ 0x11eb80da");
L_11eb80db:;
  /* 11eb80db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb80dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb80df jne 0x11eb80a3 */
  if (!C.zf) goto L_11eb80a3;
  /* 11eb80e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb80e4 push eax */
  push32((uint32_t)(EAX));
  /* 11eb80e5 call 0x11eb8130 */
  push32(0x11eb80eau); f_11eb8130();
  /* 11eb80ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb80ed:;
  /* 11eb80ed jmp 0x11eb7ec8 */
  goto L_11eb7ec8;
L_11eb80f2:;
  /* 11eb80f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb80f4 call 0x11eb9ed0 */
  push32(0x11eb80f9u); f_11eb9ed0();
  /* 11eb80f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb80fc:;
  /* 11eb80fc push 0x11eddd44 */
  push32((uint32_t)(0x11eddd44u));
  /* 11eb8101 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb8106 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8108 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb810a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb810c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb810e call 0x11eb54f0 */
  push32(0x11eb8113u); f_11eb54f0();
  /* 11eb8113 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8116 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8119 jne 0x11eb811c */
  if (!C.zf) goto L_11eb811c;
  /* 11eb811b int3  */
  x86_unimpl("int3 @ 0x11eb811b");
L_11eb811c:;
  /* 11eb811c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb811e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb8120 jne 0x11eb80fc */
  if (!C.zf) goto L_11eb80fc;
  /* 11eb8122 pop edi */
  EDI = (pop32());
  /* 11eb8123 pop esi */
  ESI = (pop32());
  /* 11eb8124 pop ebx */
  EBX = (pop32());
  /* 11eb8125 mov esp, ebp */
  ESP = (EBP);
  /* 11eb8127 pop ebp */
  EBP = (pop32());
  /* 11eb8128 ret  */
  ESPCHK(0x11eb7e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008130 @ 0x11eb8130 (276 bytes, 89 insns) */
void f_11eb8130(void) {
  FTRACE(0x11eb8130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8130 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8131 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8133 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb8136 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb8137 push esi */
  push32((uint32_t)(ESI));
  /* 11eb8138 push edi */
  push32((uint32_t)(EDI));
  /* 11eb8139 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11eb8140 jmp 0x11eb814b */
  goto L_11eb814b;
L_11eb8142:;
  /* 11eb8142 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eb8145 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8148 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11eb814b:;
  /* 11eb814b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb814e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8152 jge 0x11eb815f */
  if ((C.sf==C.of)) goto L_11eb815f;
  /* 11eb8154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8157 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11eb815a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11eb815d jmp 0x11eb8166 */
  goto L_11eb8166;
L_11eb815f:;
  /* 11eb815f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11eb8166:;
  /* 11eb8166 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eb8169 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb816c jge 0x11eb820c */
  if ((C.sf==C.of)) goto L_11eb820c;
  /* 11eb8172 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8175 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8178 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11eb817b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11eb817e cmp dword ptr [0x11ee0ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee0ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8185 jle 0x11eb81a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11eb81a3;
  /* 11eb8187 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11eb818c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb818f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb8195 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8196 call 0x11ebc440 */
  push32(0x11eb819bu); f_11ebc440();
  /* 11eb819b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb819e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11eb81a1 jmp 0x11eb81c0 */
  goto L_11eb81c0;
L_11eb81a3:;
  /* 11eb81a3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb81a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb81ac mov eax, dword ptr [0x11ee0c98] */
  EAX = (r32((uint32_t)(0x11ee0c98)));
  /* 11eb81b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb81b3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11eb81b7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb81bd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11eb81c0:;
  /* 11eb81c0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb81c4 je 0x11eb81d4 */
  if (C.zf) goto L_11eb81d4;
  /* 11eb81c6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb81c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb81cf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11eb81d2 jmp 0x11eb81db */
  goto L_11eb81db;
L_11eb81d4:;
  /* 11eb81d4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11eb81db:;
  /* 11eb81db mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eb81de mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11eb81e1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11eb81e5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11eb81e8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb81ee push edx */
  push32((uint32_t)(EDX));
  /* 11eb81ef push 0x11edde38 */
  push32((uint32_t)(0x11edde38u));
  /* 11eb81f4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eb81f7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb81fa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11eb81fe push ecx */
  push32((uint32_t)(ECX));
  /* 11eb81ff call 0x11ebc340 */
  push32(0x11eb8204u); f_11ebc340();
  /* 11eb8204 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8207 jmp 0x11eb8142 */
  goto L_11eb8142;
L_11eb820c:;
  /* 11eb820c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11eb820f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11eb8214:;
  /* 11eb8214 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11eb8217 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8218 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11eb821b push ecx */
  push32((uint32_t)(ECX));
  /* 11eb821c push 0x11edde28 */
  push32((uint32_t)(0x11edde28u));
  /* 11eb8221 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8223 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8225 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8227 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8229 call 0x11eb54f0 */
  push32(0x11eb822eu); f_11eb54f0();
  /* 11eb822e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8231 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8234 jne 0x11eb8237 */
  if (!C.zf) goto L_11eb8237;
  /* 11eb8236 int3  */
  x86_unimpl("int3 @ 0x11eb8236");
L_11eb8237:;
  /* 11eb8237 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8239 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb823b jne 0x11eb8214 */
  if (!C.zf) goto L_11eb8214;
  /* 11eb823d pop edi */
  EDI = (pop32());
  /* 11eb823e pop esi */
  ESI = (pop32());
  /* 11eb823f pop ebx */
  EBX = (pop32());
  /* 11eb8240 mov esp, ebp */
  ESP = (EBP);
  /* 11eb8242 pop ebp */
  EBP = (pop32());
  /* 11eb8243 ret  */
  ESPCHK(0x11eb8130u, _esp0);
  ESP += 4; return;
}

/* FUN_10008250 @ 0x11eb8250 (116 bytes, 46 insns) */
void f_11eb8250(void) {
  FTRACE(0x11eb8250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8250 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8251 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8253 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb8256 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb8257 push esi */
  push32((uint32_t)(ESI));
  /* 11eb8258 push edi */
  push32((uint32_t)(EDI));
  /* 11eb8259 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11eb825c push eax */
  push32((uint32_t)(EAX));
  /* 11eb825d call 0x11eb7bd0 */
  push32(0x11eb8262u); f_11eb7bd0();
  /* 11eb8262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8265 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8269 jne 0x11eb8284 */
  if (!C.zf) goto L_11eb8284;
  /* 11eb826b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb826f jne 0x11eb8284 */
  if (!C.zf) goto L_11eb8284;
  /* 11eb8271 mov ecx, dword ptr [0x11ee0a84] */
  ECX = (r32((uint32_t)(0x11ee0a84)));
  /* 11eb8277 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb827a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb827c je 0x11eb82bb */
  if (C.zf) goto L_11eb82bb;
  /* 11eb827e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8282 je 0x11eb82bb */
  if (C.zf) goto L_11eb82bb;
L_11eb8284:;
  /* 11eb8284 push 0x11edde40 */
  push32((uint32_t)(0x11edde40u));
  /* 11eb8289 push 0x11edd80c */
  push32((uint32_t)(0x11edd80cu));
  /* 11eb828e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8290 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8292 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8294 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8296 call 0x11eb54f0 */
  push32(0x11eb829bu); f_11eb54f0();
  /* 11eb829b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb829e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb82a1 jne 0x11eb82a4 */
  if (!C.zf) goto L_11eb82a4;
  /* 11eb82a3 int3  */
  x86_unimpl("int3 @ 0x11eb82a3");
L_11eb82a4:;
  /* 11eb82a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb82a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb82a8 jne 0x11eb8284 */
  if (!C.zf) goto L_11eb8284;
  /* 11eb82aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb82ac call 0x11eb7e70 */
  push32(0x11eb82b1u); f_11eb7e70();
  /* 11eb82b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb82b4 mov eax, 1 */
  EAX = (0x1u);
  /* 11eb82b9 jmp 0x11eb82bd */
  goto L_11eb82bd;
L_11eb82bb:;
  /* 11eb82bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb82bd:;
  /* 11eb82bd pop edi */
  EDI = (pop32());
  /* 11eb82be pop esi */
  ESI = (pop32());
  /* 11eb82bf pop ebx */
  EBX = (pop32());
  /* 11eb82c0 mov esp, ebp */
  ESP = (EBP);
  /* 11eb82c2 pop ebp */
  EBP = (pop32());
  /* 11eb82c3 ret  */
  ESPCHK(0x11eb8250u, _esp0);
  ESP += 4; return;
}

/* FUN_100082d0 @ 0x11eb82d0 (197 bytes, 79 insns) */
void f_11eb82d0(void) {
  FTRACE(0x11eb82d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb82d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb82d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb82d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb82d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb82d5 push esi */
  push32((uint32_t)(ESI));
  /* 11eb82d6 push edi */
  push32((uint32_t)(EDI));
  /* 11eb82d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb82db jne 0x11eb82e2 */
  if (!C.zf) goto L_11eb82e2;
  /* 11eb82dd jmp 0x11eb838e */
  goto L_11eb838e;
L_11eb82e2:;
  /* 11eb82e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eb82e9 jmp 0x11eb82f4 */
  goto L_11eb82f4;
L_11eb82eb:;
  /* 11eb82eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb82ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb82f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb82f4:;
  /* 11eb82f4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb82f8 jge 0x11eb833e */
  if ((C.sf==C.of)) goto L_11eb833e;
L_11eb82fa:;
  /* 11eb82fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb82fd mov edx, dword ptr [ecx*4 + 0x11ee0a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0a94)));
  /* 11eb8304 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8308 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb830b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11eb830f push edx */
  push32((uint32_t)(EDX));
  /* 11eb8310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8313 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8316 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11eb831a push edx */
  push32((uint32_t)(EDX));
  /* 11eb831b push 0x11edde9c */
  push32((uint32_t)(0x11edde9cu));
  /* 11eb8320 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8322 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8324 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8326 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8328 call 0x11eb54f0 */
  push32(0x11eb832du); f_11eb54f0();
  /* 11eb832d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8330 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8333 jne 0x11eb8336 */
  if (!C.zf) goto L_11eb8336;
  /* 11eb8335 int3  */
  x86_unimpl("int3 @ 0x11eb8335");
L_11eb8336:;
  /* 11eb8336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb833a jne 0x11eb82fa */
  if (!C.zf) goto L_11eb82fa;
  /* 11eb833c jmp 0x11eb82eb */
  goto L_11eb82eb;
L_11eb833e:;
  /* 11eb833e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8341 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11eb8344 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8345 push 0x11edde78 */
  push32((uint32_t)(0x11edde78u));
  /* 11eb834a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb834c push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb834e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8352 call 0x11eb54f0 */
  push32(0x11eb8357u); f_11eb54f0();
  /* 11eb8357 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb835a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb835d jne 0x11eb8360 */
  if (!C.zf) goto L_11eb8360;
  /* 11eb835f int3  */
  x86_unimpl("int3 @ 0x11eb835f");
L_11eb8360:;
  /* 11eb8360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb8364 jne 0x11eb833e */
  if (!C.zf) goto L_11eb833e;
L_11eb8366:;
  /* 11eb8366 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8369 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11eb836c push edx */
  push32((uint32_t)(EDX));
  /* 11eb836d push 0x11edde58 */
  push32((uint32_t)(0x11edde58u));
  /* 11eb8372 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8374 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8376 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8378 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb837a call 0x11eb54f0 */
  push32(0x11eb837fu); f_11eb54f0();
  /* 11eb837f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8382 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8385 jne 0x11eb8388 */
  if (!C.zf) goto L_11eb8388;
  /* 11eb8387 int3  */
  x86_unimpl("int3 @ 0x11eb8387");
L_11eb8388:;
  /* 11eb8388 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb838a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb838c jne 0x11eb8366 */
  if (!C.zf) goto L_11eb8366;
L_11eb838e:;
  /* 11eb838e pop edi */
  EDI = (pop32());
  /* 11eb838f pop esi */
  ESI = (pop32());
  /* 11eb8390 pop ebx */
  EBX = (pop32());
  /* 11eb8391 mov esp, ebp */
  ESP = (EBP);
  /* 11eb8393 pop ebp */
  EBP = (pop32());
  /* 11eb8394 ret  */
  ESPCHK(0x11eb82d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083a0 @ 0x11eb83a0 (329 bytes, 102 insns) */
void f_11eb83a0(void) {
  FTRACE(0x11eb83a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb83a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb83a1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb83a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb83a6 cmp dword ptr [0x11ee42b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb83ad jne 0x11eb83b4 */
  if (!C.zf) goto L_11eb83b4;
  /* 11eb83af call 0x11ebcce0 */
  push32(0x11eb83b4u); f_11ebcce0();
L_11eb83b4:;
  /* 11eb83b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eb83bb mov eax, dword ptr [0x11ee2770] */
  EAX = (r32((uint32_t)(0x11ee2770)));
  /* 11eb83c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb83c3:;
  /* 11eb83c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb83c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eb83c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb83cb je 0x11eb83f9 */
  if (C.zf) goto L_11eb83f9;
  /* 11eb83cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb83d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb83d3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb83d6 je 0x11eb83e1 */
  if (C.zf) goto L_11eb83e1;
  /* 11eb83d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb83db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb83de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11eb83e1:;
  /* 11eb83e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb83e4 push eax */
  push32((uint32_t)(EAX));
  /* 11eb83e5 call 0x11eb9260 */
  push32(0x11eb83eau); f_11eb9260();
  /* 11eb83ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb83ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb83f0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11eb83f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb83f7 jmp 0x11eb83c3 */
  goto L_11eb83c3;
L_11eb83f9:;
  /* 11eb83f9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11eb83fb push 0x11eddebc */
  push32((uint32_t)(0x11eddebcu));
  /* 11eb8400 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb8402 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8405 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11eb840c push ecx */
  push32((uint32_t)(ECX));
  /* 11eb840d call 0x11eb6430 */
  push32(0x11eb8412u); f_11eb6430();
  /* 11eb8412 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8415 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb8418 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb841b mov dword ptr [0x11ee27a4], edx */
  w32((uint32_t)(0x11ee27a4), (EDX));
  /* 11eb8421 cmp dword ptr [0x11ee27a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee27a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8428 jne 0x11eb8434 */
  if (!C.zf) goto L_11eb8434;
  /* 11eb842a push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb842c call 0x11eb53a0 */
  push32(0x11eb8431u); f_11eb53a0();
  /* 11eb8431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb8434:;
  /* 11eb8434 mov eax, dword ptr [0x11ee2770] */
  EAX = (r32((uint32_t)(0x11ee2770)));
  /* 11eb8439 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb843c jmp 0x11eb8447 */
  goto L_11eb8447;
L_11eb843e:;
  /* 11eb843e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8441 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8444 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb8447:;
  /* 11eb8447 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb844a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eb844d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb844f je 0x11eb84b7 */
  if (C.zf) goto L_11eb84b7;
  /* 11eb8451 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8454 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8455 call 0x11eb9260 */
  push32(0x11eb845au); f_11eb9260();
  /* 11eb845a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb845d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8460 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eb8463 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8466 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eb8469 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb846c je 0x11eb84b5 */
  if (C.zf) goto L_11eb84b5;
  /* 11eb846e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11eb8470 push 0x11eddebc */
  push32((uint32_t)(0x11eddebcu));
  /* 11eb8475 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb8477 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb847a push ecx */
  push32((uint32_t)(ECX));
  /* 11eb847b call 0x11eb6430 */
  push32(0x11eb8480u); f_11eb6430();
  /* 11eb8480 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8483 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8486 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11eb8488 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb848b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb848e jne 0x11eb849a */
  if (!C.zf) goto L_11eb849a;
  /* 11eb8490 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eb8492 call 0x11eb53a0 */
  push32(0x11eb8497u); f_11eb53a0();
  /* 11eb8497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb849a:;
  /* 11eb849a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb849d push ecx */
  push32((uint32_t)(ECX));
  /* 11eb849e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb84a1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb84a3 push eax */
  push32((uint32_t)(EAX));
  /* 11eb84a4 call 0x11eb93e0 */
  push32(0x11eb84a9u); f_11eb93e0();
  /* 11eb84a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb84ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb84af add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb84b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11eb84b5:;
  /* 11eb84b5 jmp 0x11eb843e */
  goto L_11eb843e;
L_11eb84b7:;
  /* 11eb84b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb84b9 mov edx, dword ptr [0x11ee2770] */
  EDX = (r32((uint32_t)(0x11ee2770)));
  /* 11eb84bf push edx */
  push32((uint32_t)(EDX));
  /* 11eb84c0 call 0x11eb6ec0 */
  push32(0x11eb84c5u); f_11eb6ec0();
  /* 11eb84c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb84c8 mov dword ptr [0x11ee2770], 0 */
  w32((uint32_t)(0x11ee2770), (0x0u));
  /* 11eb84d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb84d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11eb84db mov dword ptr [0x11ee42a0], 1 */
  w32((uint32_t)(0x11ee42a0), (0x1u));
  /* 11eb84e5 mov esp, ebp */
  ESP = (EBP);
  /* 11eb84e7 pop ebp */
  EBP = (pop32());
  /* 11eb84e8 ret  */
  ESPCHK(0x11eb83a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100084f0 @ 0x11eb84f0 (216 bytes, 69 insns) */
void f_11eb84f0(void) {
  FTRACE(0x11eb84f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb84f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb84f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb84f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb84f6 cmp dword ptr [0x11ee42b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee42b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb84fd jne 0x11eb8504 */
  if (!C.zf) goto L_11eb8504;
  /* 11eb84ff call 0x11ebcce0 */
  push32(0x11eb8504u); f_11ebcce0();
L_11eb8504:;
  /* 11eb8504 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11eb8509 push 0x11ee27e0 */
  push32((uint32_t)(0x11ee27e0u));
  /* 11eb850e push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8510 call dword ptr [0x11ee53a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a8))), 0x11eb8516u);
  /* 11eb8516 mov dword ptr [0x11ee27b4], 0x11ee27e0 */
  w32((uint32_t)(0x11ee27b4), (0x11ee27e0u));
  /* 11eb8520 mov eax, dword ptr [0x11ee42cc] */
  EAX = (r32((uint32_t)(0x11ee42cc)));
  /* 11eb8525 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb8528 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb852a jne 0x11eb8537 */
  if (!C.zf) goto L_11eb8537;
  /* 11eb852c mov edx, dword ptr [0x11ee27b4] */
  EDX = (r32((uint32_t)(0x11ee27b4)));
  /* 11eb8532 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11eb8535 jmp 0x11eb853f */
  goto L_11eb853f;
L_11eb8537:;
  /* 11eb8537 mov eax, dword ptr [0x11ee42cc] */
  EAX = (r32((uint32_t)(0x11ee42cc)));
  /* 11eb853c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11eb853f:;
  /* 11eb853f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb8542 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11eb8545 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11eb8548 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8549 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11eb854c push eax */
  push32((uint32_t)(EAX));
  /* 11eb854d push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb854f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8551 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb8554 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8555 call 0x11eb85d0 */
  push32(0x11eb855au); f_11eb85d0();
  /* 11eb855a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb855d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11eb8562 push 0x11eddec8 */
  push32((uint32_t)(0x11eddec8u));
  /* 11eb8567 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb8569 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb856c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb856f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11eb8572 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8573 call 0x11eb6430 */
  push32(0x11eb8578u); f_11eb6430();
  /* 11eb8578 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb857b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb857e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8582 jne 0x11eb858e */
  if (!C.zf) goto L_11eb858e;
  /* 11eb8584 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb8586 call 0x11eb53a0 */
  push32(0x11eb858bu); f_11eb53a0();
  /* 11eb858b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb858e:;
  /* 11eb858e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11eb8591 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8592 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11eb8595 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8596 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8599 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb859c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11eb859f push eax */
  push32((uint32_t)(EAX));
  /* 11eb85a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb85a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb85a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb85a7 push edx */
  push32((uint32_t)(EDX));
  /* 11eb85a8 call 0x11eb85d0 */
  push32(0x11eb85adu); f_11eb85d0();
  /* 11eb85ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb85b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb85b3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb85b6 mov dword ptr [0x11ee2798], eax */
  w32((uint32_t)(0x11ee2798), (EAX));
  /* 11eb85bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb85be mov dword ptr [0x11ee279c], ecx */
  w32((uint32_t)(0x11ee279c), (ECX));
  /* 11eb85c4 mov esp, ebp */
  ESP = (EBP);
  /* 11eb85c6 pop ebp */
  EBP = (pop32());
  /* 11eb85c7 ret  */
  ESPCHK(0x11eb84f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085d0 @ 0x11eb85d0 (1060 bytes, 360 insns) */
void f_11eb85d0(void) {
  FTRACE(0x11eb85d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb85d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb85d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb85d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb85d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb85d9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11eb85df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb85e2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11eb85e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb85eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb85ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb85f2 je 0x11eb8605 */
  if (C.zf) goto L_11eb8605;
  /* 11eb85f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb85f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb85fa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11eb85fc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb85ff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8602 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11eb8605:;
  /* 11eb8605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8608 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb860b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb860e jne 0x11eb86dd */
  if (!C.zf) goto L_11eb86dd;
L_11eb8614:;
  /* 11eb8614 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8617 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb861a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb861d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8620 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb8623 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8626 je 0x11eb86a2 */
  if (C.zf) goto L_11eb86a2;
  /* 11eb8628 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb862b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eb862e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb8630 je 0x11eb86a2 */
  if (C.zf) goto L_11eb86a2;
  /* 11eb8632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8635 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8637 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb8639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb863b mov al, byte ptr [edx + 0x11ee4001] */
  AL = (r8((uint32_t)(EDX + 0x11ee4001)));
  /* 11eb8641 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb8646 je 0x11eb8677 */
  if (C.zf) goto L_11eb8677;
  /* 11eb8648 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb864b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb864d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8650 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb8653 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11eb8655 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8659 je 0x11eb8677 */
  if (C.zf) goto L_11eb8677;
  /* 11eb865b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb865e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8661 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eb8663 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11eb8665 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb8668 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb866b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11eb866e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8671 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8674 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11eb8677:;
  /* 11eb8677 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb867a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb867c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb867f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb8682 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eb8684 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8688 je 0x11eb869d */
  if (C.zf) goto L_11eb869d;
  /* 11eb868a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb868d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8690 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb8692 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb8694 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb8697 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb869a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11eb869d:;
  /* 11eb869d jmp 0x11eb8614 */
  goto L_11eb8614;
L_11eb86a2:;
  /* 11eb86a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb86a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb86a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb86aa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb86ad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11eb86af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb86b3 je 0x11eb86c4 */
  if (C.zf) goto L_11eb86c4;
  /* 11eb86b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb86b8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11eb86bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb86be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb86c1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11eb86c4:;
  /* 11eb86c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb86c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb86ca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb86cd jne 0x11eb86d8 */
  if (!C.zf) goto L_11eb86d8;
  /* 11eb86cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb86d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb86d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11eb86d8:;
  /* 11eb86d8 jmp 0x11eb87ac */
  goto L_11eb87ac;
L_11eb86dd:;
  /* 11eb86dd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb86e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb86e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb86e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb86e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eb86ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb86ee je 0x11eb8703 */
  if (C.zf) goto L_11eb8703;
  /* 11eb86f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb86f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb86f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb86f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb86fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb86fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8700 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11eb8703:;
  /* 11eb8703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8706 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb8708 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11eb870b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb870e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8711 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb8714 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8717 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb871d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb871f mov dl, byte ptr [ecx + 0x11ee4001] */
  DL = (r8((uint32_t)(ECX + 0x11ee4001)));
  /* 11eb8725 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8728 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb872a je 0x11eb875b */
  if (C.zf) goto L_11eb875b;
  /* 11eb872c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb872f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb8731 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8734 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb8737 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eb8739 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb873d je 0x11eb8752 */
  if (C.zf) goto L_11eb8752;
  /* 11eb873f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb8742 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8745 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb8747 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb8749 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb874c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb874f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11eb8752:;
  /* 11eb8752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8755 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8758 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb875b:;
  /* 11eb875b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb875e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8764 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8767 je 0x11eb8787 */
  if (C.zf) goto L_11eb8787;
  /* 11eb8769 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb876c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb8773 je 0x11eb8787 */
  if (C.zf) goto L_11eb8787;
  /* 11eb8775 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8778 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb877e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8781 jne 0x11eb86dd */
  if (!C.zf) goto L_11eb86dd;
L_11eb8787:;
  /* 11eb8787 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb878a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8790 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb8792 jne 0x11eb879f */
  if (!C.zf) goto L_11eb879f;
  /* 11eb8794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8797 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb879a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb879d jmp 0x11eb87ac */
  goto L_11eb87ac;
L_11eb879f:;
  /* 11eb879f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb87a3 je 0x11eb87ac */
  if (C.zf) goto L_11eb87ac;
  /* 11eb87a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb87a8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11eb87ac:;
  /* 11eb87ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11eb87b3:;
  /* 11eb87b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb87b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eb87b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb87bb je 0x11eb87de */
  if (C.zf) goto L_11eb87de;
L_11eb87bd:;
  /* 11eb87bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb87c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eb87c3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb87c6 je 0x11eb87d3 */
  if (C.zf) goto L_11eb87d3;
  /* 11eb87c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb87cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb87ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb87d1 jne 0x11eb87de */
  if (!C.zf) goto L_11eb87de;
L_11eb87d3:;
  /* 11eb87d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb87d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb87d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb87dc jmp 0x11eb87bd */
  goto L_11eb87bd;
L_11eb87de:;
  /* 11eb87de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb87e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb87e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb87e6 jne 0x11eb87ed */
  if (!C.zf) goto L_11eb87ed;
  /* 11eb87e8 jmp 0x11eb89cb */
  goto L_11eb89cb;
L_11eb87ed:;
  /* 11eb87ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb87f1 je 0x11eb8804 */
  if (C.zf) goto L_11eb8804;
  /* 11eb87f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb87f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb87f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11eb87fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb87fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8801 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11eb8804:;
  /* 11eb8804 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb8807 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb8809 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb880c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb880f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11eb8811:;
  /* 11eb8811 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11eb8818 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11eb881f:;
  /* 11eb881f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8822 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eb8825 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8828 jne 0x11eb883e */
  if (!C.zf) goto L_11eb883e;
  /* 11eb882a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb882d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8830 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eb8833 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb8836 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8839 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11eb883c jmp 0x11eb881f */
  goto L_11eb881f;
L_11eb883e:;
  /* 11eb883e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8841 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb8844 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8847 jne 0x11eb889a */
  if (!C.zf) goto L_11eb889a;
  /* 11eb8849 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb884c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb884e mov ecx, 2 */
  ECX = (0x2u);
  /* 11eb8853 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11eb8855 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb8857 jne 0x11eb8892 */
  if (!C.zf) goto L_11eb8892;
  /* 11eb8859 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb885d je 0x11eb887f */
  if (C.zf) goto L_11eb887f;
  /* 11eb885f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8862 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11eb8866 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8869 jne 0x11eb8876 */
  if (!C.zf) goto L_11eb8876;
  /* 11eb886b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb886e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8871 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eb8874 jmp 0x11eb887d */
  goto L_11eb887d;
L_11eb8876:;
  /* 11eb8876 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11eb887d:;
  /* 11eb887d jmp 0x11eb8886 */
  goto L_11eb8886;
L_11eb887f:;
  /* 11eb887f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11eb8886:;
  /* 11eb8886 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8888 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb888c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11eb888f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11eb8892:;
  /* 11eb8892 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb8895 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11eb8897 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11eb889a:;
  /* 11eb889a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb889d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb88a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb88a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11eb88a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb88a8 je 0x11eb88ce */
  if (C.zf) goto L_11eb88ce;
  /* 11eb88aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb88ae je 0x11eb88bf */
  if (C.zf) goto L_11eb88bf;
  /* 11eb88b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb88b3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11eb88b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb88b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb88bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11eb88bf:;
  /* 11eb88bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb88c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb88c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb88c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb88ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11eb88cc jmp 0x11eb889a */
  goto L_11eb889a;
L_11eb88ce:;
  /* 11eb88ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb88d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11eb88d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb88d6 je 0x11eb88f4 */
  if (C.zf) goto L_11eb88f4;
  /* 11eb88d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb88dc jne 0x11eb88f9 */
  if (!C.zf) goto L_11eb88f9;
  /* 11eb88de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb88e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eb88e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb88e7 je 0x11eb88f4 */
  if (C.zf) goto L_11eb88f4;
  /* 11eb88e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb88ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11eb88ef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb88f2 jne 0x11eb88f9 */
  if (!C.zf) goto L_11eb88f9;
L_11eb88f4:;
  /* 11eb88f4 jmp 0x11eb89a4 */
  goto L_11eb89a4;
L_11eb88f9:;
  /* 11eb88f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb88fd je 0x11eb8996 */
  if (C.zf) goto L_11eb8996;
  /* 11eb8903 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8907 je 0x11eb895d */
  if (C.zf) goto L_11eb895d;
  /* 11eb8909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb890c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb890e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eb8910 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb8912 mov cl, byte ptr [eax + 0x11ee4001] */
  CL = (r8((uint32_t)(EAX + 0x11ee4001)));
  /* 11eb8918 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb891b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb891d je 0x11eb8948 */
  if (C.zf) goto L_11eb8948;
  /* 11eb891f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb8922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8925 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11eb8927 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11eb8929 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb892c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb892f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11eb8932 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8935 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8938 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb893b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb893e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb8940 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8943 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb8946 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11eb8948:;
  /* 11eb8948 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb894b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb894e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eb8950 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11eb8952 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb8955 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8958 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11eb895b jmp 0x11eb8989 */
  goto L_11eb8989;
L_11eb895d:;
  /* 11eb895d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8960 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8962 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11eb8964 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb8966 mov cl, byte ptr [eax + 0x11ee4001] */
  CL = (r8((uint32_t)(EAX + 0x11ee4001)));
  /* 11eb896c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11eb896f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb8971 je 0x11eb8989 */
  if (C.zf) goto L_11eb8989;
  /* 11eb8973 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8976 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8979 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb897c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb897f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb8981 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8984 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb8987 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11eb8989:;
  /* 11eb8989 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb898c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb898e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8991 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb8994 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11eb8996:;
  /* 11eb8996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8999 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb899c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb899f jmp 0x11eb8811 */
  goto L_11eb8811;
L_11eb89a4:;
  /* 11eb89a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb89a8 je 0x11eb89b9 */
  if (C.zf) goto L_11eb89b9;
  /* 11eb89aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb89ad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11eb89b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb89b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb89b6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11eb89b9:;
  /* 11eb89b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb89bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb89be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb89c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11eb89c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eb89c6 jmp 0x11eb87b3 */
  goto L_11eb87b3;
L_11eb89cb:;
  /* 11eb89cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb89cf je 0x11eb89e3 */
  if (C.zf) goto L_11eb89e3;
  /* 11eb89d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb89d4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11eb89da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb89dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb89e0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11eb89e3:;
  /* 11eb89e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb89e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb89e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb89eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb89ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11eb89f0 mov esp, ebp */
  ESP = (EBP);
  /* 11eb89f2 pop ebp */
  EBP = (pop32());
  /* 11eb89f3 ret  */
  ESPCHK(0x11eb85d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a00 @ 0x11eb8a00 (537 bytes, 173 insns) */
void f_11eb8a00(void) {
  FTRACE(0x11eb8a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8a01 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8a03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb8a06 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11eb8a0d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11eb8a14 cmp dword ptr [0x11ee28e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee28e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8a1b jne 0x11eb8a5a */
  if (!C.zf) goto L_11eb8a5a;
  /* 11eb8a1d call dword ptr [0x11ee5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5368))), 0x11eb8a23u);
  /* 11eb8a23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11eb8a26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8a2a je 0x11eb8a38 */
  if (C.zf) goto L_11eb8a38;
  /* 11eb8a2c mov dword ptr [0x11ee28e4], 1 */
  w32((uint32_t)(0x11ee28e4), (0x1u));
  /* 11eb8a36 jmp 0x11eb8a5a */
  goto L_11eb8a5a;
L_11eb8a38:;
  /* 11eb8a38 call dword ptr [0x11ee536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee536c))), 0x11eb8a3eu);
  /* 11eb8a3e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11eb8a41 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8a45 je 0x11eb8a53 */
  if (C.zf) goto L_11eb8a53;
  /* 11eb8a47 mov dword ptr [0x11ee28e4], 2 */
  w32((uint32_t)(0x11ee28e4), (0x2u));
  /* 11eb8a51 jmp 0x11eb8a5a */
  goto L_11eb8a5a;
L_11eb8a53:;
  /* 11eb8a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8a55 jmp 0x11eb8c15 */
  goto L_11eb8c15;
L_11eb8a5a:;
  /* 11eb8a5a cmp dword ptr [0x11ee28e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee28e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8a61 jne 0x11eb8b5e */
  if (!C.zf) goto L_11eb8b5e;
  /* 11eb8a67 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8a6b jne 0x11eb8a83 */
  if (!C.zf) goto L_11eb8a83;
  /* 11eb8a6d call dword ptr [0x11ee5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5368))), 0x11eb8a73u);
  /* 11eb8a73 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11eb8a76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8a7a jne 0x11eb8a83 */
  if (!C.zf) goto L_11eb8a83;
  /* 11eb8a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8a7e jmp 0x11eb8c15 */
  goto L_11eb8c15;
L_11eb8a83:;
  /* 11eb8a83 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb8a86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11eb8a89:;
  /* 11eb8a89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8a8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8a8e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11eb8a91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb8a93 je 0x11eb8ab5 */
  if (C.zf) goto L_11eb8ab5;
  /* 11eb8a95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8a98 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8a9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb8a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8aa1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8aa3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11eb8aa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb8aa8 jne 0x11eb8ab3 */
  if (!C.zf) goto L_11eb8ab3;
  /* 11eb8aaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8aad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8ab0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11eb8ab3:;
  /* 11eb8ab3 jmp 0x11eb8a89 */
  goto L_11eb8a89;
L_11eb8ab5:;
  /* 11eb8ab5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8ab8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb8abb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11eb8abd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8ac0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eb8ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8acb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8ace push edx */
  push32((uint32_t)(EDX));
  /* 11eb8acf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb8ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8ad7 call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11eb8addu);
  /* 11eb8add mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eb8ae0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8ae4 je 0x11eb8b04 */
  if (C.zf) goto L_11eb8b04;
  /* 11eb8ae6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11eb8ae8 push 0x11edded4 */
  push32((uint32_t)(0x11edded4u));
  /* 11eb8aed push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb8aef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb8af2 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8af3 call 0x11eb6430 */
  push32(0x11eb8af8u); f_11eb6430();
  /* 11eb8af8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8afb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11eb8afe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8b02 jne 0x11eb8b15 */
  if (!C.zf) goto L_11eb8b15;
L_11eb8b04:;
  /* 11eb8b04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb8b07 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8b08 call dword ptr [0x11ee5374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5374))), 0x11eb8b0eu);
  /* 11eb8b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8b10 jmp 0x11eb8c15 */
  goto L_11eb8c15;
L_11eb8b15:;
  /* 11eb8b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8b19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb8b1c push eax */
  push32((uint32_t)(EAX));
  /* 11eb8b1d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb8b20 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8b24 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8b25 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb8b28 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8b2d call dword ptr [0x11ee5370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5370))), 0x11eb8b33u);
  /* 11eb8b33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb8b35 jne 0x11eb8b4c */
  if (!C.zf) goto L_11eb8b4c;
  /* 11eb8b37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb8b39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb8b3c push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8b3d call 0x11eb6ec0 */
  push32(0x11eb8b42u); f_11eb6ec0();
  /* 11eb8b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8b45 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11eb8b4c:;
  /* 11eb8b4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb8b4f push edx */
  push32((uint32_t)(EDX));
  /* 11eb8b50 call dword ptr [0x11ee5374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5374))), 0x11eb8b56u);
  /* 11eb8b56 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb8b59 jmp 0x11eb8c15 */
  goto L_11eb8c15;
L_11eb8b5e:;
  /* 11eb8b5e cmp dword ptr [0x11ee28e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11ee28e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8b65 jne 0x11eb8c13 */
  if (!C.zf) goto L_11eb8c13;
  /* 11eb8b6b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8b6f jne 0x11eb8b87 */
  if (!C.zf) goto L_11eb8b87;
  /* 11eb8b71 call dword ptr [0x11ee536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee536c))), 0x11eb8b77u);
  /* 11eb8b77 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11eb8b7a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8b7e jne 0x11eb8b87 */
  if (!C.zf) goto L_11eb8b87;
  /* 11eb8b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8b82 jmp 0x11eb8c15 */
  goto L_11eb8c15;
L_11eb8b87:;
  /* 11eb8b87 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb8b8a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11eb8b8d:;
  /* 11eb8b8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8b90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eb8b93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb8b95 je 0x11eb8bb5 */
  if (C.zf) goto L_11eb8bb5;
  /* 11eb8b97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8b9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8b9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb8ba0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8ba3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11eb8ba6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb8ba8 jne 0x11eb8bb3 */
  if (!C.zf) goto L_11eb8bb3;
  /* 11eb8baa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8bad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8bb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11eb8bb3:;
  /* 11eb8bb3 jmp 0x11eb8b8d */
  goto L_11eb8b8d;
L_11eb8bb5:;
  /* 11eb8bb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8bb8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb8bbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8bbe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11eb8bc1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11eb8bc6 push 0x11edded4 */
  push32((uint32_t)(0x11edded4u));
  /* 11eb8bcb push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb8bcd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb8bd0 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8bd1 call 0x11eb6430 */
  push32(0x11eb8bd6u); f_11eb6430();
  /* 11eb8bd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8bd9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb8bdc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8be0 jne 0x11eb8bf0 */
  if (!C.zf) goto L_11eb8bf0;
  /* 11eb8be2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb8be5 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8be6 call dword ptr [0x11ee5378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5378))), 0x11eb8becu);
  /* 11eb8bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8bee jmp 0x11eb8c15 */
  goto L_11eb8c15;
L_11eb8bf0:;
  /* 11eb8bf0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb8bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8bf4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb8bf7 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8bf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8bfb push eax */
  push32((uint32_t)(EAX));
  /* 11eb8bfc call 0x11ebcd10 */
  push32(0x11eb8c01u); f_11ebcd10();
  /* 11eb8c01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8c04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb8c07 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8c08 call dword ptr [0x11ee5378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5378))), 0x11eb8c0eu);
  /* 11eb8c0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8c11 jmp 0x11eb8c15 */
  goto L_11eb8c15;
L_11eb8c13:;
  /* 11eb8c13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb8c15:;
  /* 11eb8c15 mov esp, ebp */
  ESP = (EBP);
  /* 11eb8c17 pop ebp */
  EBP = (pop32());
  /* 11eb8c18 ret  */
  ESPCHK(0x11eb8a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x11eb8c20 (77 bytes, 25 insns) */
void f_11eb8c20(void) {
  FTRACE(0x11eb8c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8c21 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8c25 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11eb8c2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8c2c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8c30 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11eb8c33 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8c34 call dword ptr [0x11ee5360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5360))), 0x11eb8c3au);
  /* 11eb8c3a mov dword ptr [0x11ee412c], eax */
  w32((uint32_t)(0x11ee412c), (EAX));
  /* 11eb8c3f cmp dword ptr [0x11ee412c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee412c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8c46 jne 0x11eb8c4c */
  if (!C.zf) goto L_11eb8c4c;
  /* 11eb8c48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8c4a jmp 0x11eb8c6b */
  goto L_11eb8c6b;
L_11eb8c4c:;
  /* 11eb8c4c call 0x11eba6d0 */
  push32(0x11eb8c51u); f_11eba6d0();
  /* 11eb8c51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb8c53 jne 0x11eb8c66 */
  if (!C.zf) goto L_11eb8c66;
  /* 11eb8c55 mov ecx, dword ptr [0x11ee412c] */
  ECX = (r32((uint32_t)(0x11ee412c)));
  /* 11eb8c5b push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8c5c call dword ptr [0x11ee5364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5364))), 0x11eb8c62u);
  /* 11eb8c62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb8c64 jmp 0x11eb8c6b */
  goto L_11eb8c6b;
L_11eb8c66:;
  /* 11eb8c66 mov eax, 1 */
  EAX = (0x1u);
L_11eb8c6b:;
  /* 11eb8c6b pop ebp */
  EBP = (pop32());
  /* 11eb8c6c ret  */
  ESPCHK(0x11eb8c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c70 @ 0x11eb8c70 (156 bytes, 48 insns) */
void f_11eb8c70(void) {
  FTRACE(0x11eb8c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8c71 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8c73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb8c76 mov eax, dword ptr [0x11ee4128] */
  EAX = (r32((uint32_t)(0x11ee4128)));
  /* 11eb8c7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb8c7e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eb8c85 jmp 0x11eb8c90 */
  goto L_11eb8c90;
L_11eb8c87:;
  /* 11eb8c87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8c8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8c8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb8c90:;
  /* 11eb8c90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8c93 cmp edx, dword ptr [0x11ee4124] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee4124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8c99 jge 0x11eb8ce6 */
  if ((C.sf==C.of)) goto L_11eb8ce6;
  /* 11eb8c9b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11eb8ca0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11eb8ca5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8ca8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11eb8cab push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8cac call dword ptr [0x11ee5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5358))), 0x11eb8cb2u);
  /* 11eb8cb2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11eb8cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8cb9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8cbc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11eb8cbf push eax */
  push32((uint32_t)(EAX));
  /* 11eb8cc0 call dword ptr [0x11ee5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5358))), 0x11eb8cc6u);
  /* 11eb8cc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8cc9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11eb8ccc push edx */
  push32((uint32_t)(EDX));
  /* 11eb8ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8ccf mov eax, dword ptr [0x11ee412c] */
  EAX = (r32((uint32_t)(0x11ee412c)));
  /* 11eb8cd4 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8cd5 call dword ptr [0x11ee535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee535c))), 0x11eb8cdbu);
  /* 11eb8cdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8cde add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8ce1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11eb8ce4 jmp 0x11eb8c87 */
  goto L_11eb8c87;
L_11eb8ce6:;
  /* 11eb8ce6 mov edx, dword ptr [0x11ee4128] */
  EDX = (r32((uint32_t)(0x11ee4128)));
  /* 11eb8cec push edx */
  push32((uint32_t)(EDX));
  /* 11eb8ced push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8cef mov eax, dword ptr [0x11ee412c] */
  EAX = (r32((uint32_t)(0x11ee412c)));
  /* 11eb8cf4 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8cf5 call dword ptr [0x11ee535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee535c))), 0x11eb8cfbu);
  /* 11eb8cfb mov ecx, dword ptr [0x11ee412c] */
  ECX = (r32((uint32_t)(0x11ee412c)));
  /* 11eb8d01 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8d02 call dword ptr [0x11ee5364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5364))), 0x11eb8d08u);
  /* 11eb8d08 mov esp, ebp */
  ESP = (EBP);
  /* 11eb8d0a pop ebp */
  EBP = (pop32());
  /* 11eb8d0b ret  */
  ESPCHK(0x11eb8c70u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11eb8d10 (73 bytes, 19 insns) */
void f_11eb8d10(void) {
  FTRACE(0x11eb8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8d11 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8d13 cmp dword ptr [0x11ee2778], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2778))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8d1a je 0x11eb8d2e */
  if (C.zf) goto L_11eb8d2e;
  /* 11eb8d1c cmp dword ptr [0x11ee2778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8d23 jne 0x11eb8d57 */
  if (!C.zf) goto L_11eb8d57;
  /* 11eb8d25 cmp dword ptr [0x11ee277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8d2c jne 0x11eb8d57 */
  if (!C.zf) goto L_11eb8d57;
L_11eb8d2e:;
  /* 11eb8d2e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11eb8d33 call 0x11eb8d60 */
  push32(0x11eb8d38u); f_11eb8d60();
  /* 11eb8d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8d3b cmp dword ptr [0x11ee28e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee28e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8d42 je 0x11eb8d4a */
  if (C.zf) goto L_11eb8d4a;
  /* 11eb8d44 call dword ptr [0x11ee28e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee28e8))), 0x11eb8d4au);
L_11eb8d4a:;
  /* 11eb8d4a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11eb8d4f call 0x11eb8d60 */
  push32(0x11eb8d54u); f_11eb8d60();
  /* 11eb8d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb8d57:;
  /* 11eb8d57 pop ebp */
  EBP = (pop32());
  /* 11eb8d58 ret  */
  ESPCHK(0x11eb8d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d60 @ 0x11eb8d60 (447 bytes, 131 insns) */
void f_11eb8d60(void) {
  FTRACE(0x11eb8d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8d61 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8d63 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb8d69 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb8d6a push esi */
  push32((uint32_t)(ESI));
  /* 11eb8d6b push edi */
  push32((uint32_t)(EDI));
  /* 11eb8d6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eb8d73 jmp 0x11eb8d7e */
  goto L_11eb8d7e;
L_11eb8d75:;
  /* 11eb8d75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8d78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8d7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11eb8d7e:;
  /* 11eb8d7e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8d82 jae 0x11eb8d97 */
  if (!C.cf) goto L_11eb8d97;
  /* 11eb8d84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8d8a cmp edx, dword ptr [ecx*8 + 0x11ee0ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11ee0ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8d91 jne 0x11eb8d95 */
  if (!C.zf) goto L_11eb8d95;
  /* 11eb8d93 jmp 0x11eb8d97 */
  goto L_11eb8d97;
L_11eb8d95:;
  /* 11eb8d95 jmp 0x11eb8d75 */
  goto L_11eb8d75;
L_11eb8d97:;
  /* 11eb8d97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8d9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8d9d cmp ecx, dword ptr [eax*8 + 0x11ee0ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11ee0ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8da4 jne 0x11eb8f18 */
  if (!C.zf) goto L_11eb8f18;
  /* 11eb8daa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8db1 je 0x11eb8dd4 */
  if (C.zf) goto L_11eb8dd4;
  /* 11eb8db3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8db6 mov eax, dword ptr [edx*8 + 0x11ee0ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11ee0ab4)));
  /* 11eb8dbd push eax */
  push32((uint32_t)(EAX));
  /* 11eb8dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8dc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb8dc6 call 0x11eb54f0 */
  push32(0x11eb8dcbu); f_11eb54f0();
  /* 11eb8dcb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8dce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8dd1 jne 0x11eb8dd4 */
  if (!C.zf) goto L_11eb8dd4;
  /* 11eb8dd3 int3  */
  x86_unimpl("int3 @ 0x11eb8dd3");
L_11eb8dd4:;
  /* 11eb8dd4 cmp dword ptr [0x11ee2778], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2778))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8ddb je 0x11eb8def */
  if (C.zf) goto L_11eb8def;
  /* 11eb8ddd cmp dword ptr [0x11ee2778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8de4 jne 0x11eb8e28 */
  if (!C.zf) goto L_11eb8e28;
  /* 11eb8de6 cmp dword ptr [0x11ee277c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ee277c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8ded jne 0x11eb8e28 */
  if (!C.zf) goto L_11eb8e28;
L_11eb8def:;
  /* 11eb8def push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8df1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11eb8df4 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8df5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8df8 mov eax, dword ptr [edx*8 + 0x11ee0ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11ee0ab4)));
  /* 11eb8dff push eax */
  push32((uint32_t)(EAX));
  /* 11eb8e00 call 0x11eb9260 */
  push32(0x11eb8e05u); f_11eb9260();
  /* 11eb8e05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8e08 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8e09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8e0c mov edx, dword ptr [ecx*8 + 0x11ee0ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11ee0ab4)));
  /* 11eb8e13 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8e14 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11eb8e16 call dword ptr [0x11ee538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee538c))), 0x11eb8e1cu);
  /* 11eb8e1c push eax */
  push32((uint32_t)(EAX));
  /* 11eb8e1d call dword ptr [0x11ee5390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5390))), 0x11eb8e23u);
  /* 11eb8e23 jmp 0x11eb8f18 */
  goto L_11eb8f18;
L_11eb8e28:;
  /* 11eb8e28 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8e2f je 0x11eb8f18 */
  if (C.zf) goto L_11eb8f18;
  /* 11eb8e35 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11eb8e3a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11eb8e40 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8e41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8e43 call dword ptr [0x11ee53a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a8))), 0x11eb8e49u);
  /* 11eb8e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb8e4b jne 0x11eb8e61 */
  if (!C.zf) goto L_11eb8e61;
  /* 11eb8e4d push 0x11edd73c */
  push32((uint32_t)(0x11edd73cu));
  /* 11eb8e52 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11eb8e58 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8e59 call 0x11eb93e0 */
  push32(0x11eb8e5eu); f_11eb93e0();
  /* 11eb8e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb8e61:;
  /* 11eb8e61 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11eb8e67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11eb8e6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8e6d push eax */
  push32((uint32_t)(EAX));
  /* 11eb8e6e call 0x11eb9260 */
  push32(0x11eb8e73u); f_11eb9260();
  /* 11eb8e73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8e76 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8e79 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8e7c jbe 0x11eb8eaa */
  if ((C.cf||C.zf)) goto L_11eb8eaa;
  /* 11eb8e7e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11eb8e84 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8e85 call 0x11eb9260 */
  push32(0x11eb8e8au); f_11eb9260();
  /* 11eb8e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8e8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8e90 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11eb8e94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb8e97 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb8e99 push 0x11edd738 */
  push32((uint32_t)(0x11edd738u));
  /* 11eb8e9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8ea1 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8ea2 call 0x11eb9c50 */
  push32(0x11eb8ea7u); f_11eb9c50();
  /* 11eb8ea7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb8eaa:;
  /* 11eb8eaa push 0x11ede190 */
  push32((uint32_t)(0x11ede190u));
  /* 11eb8eaf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11eb8eb5 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8eb6 call 0x11eb93e0 */
  push32(0x11eb8ebbu); f_11eb93e0();
  /* 11eb8ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8ebe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb8ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8ec2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11eb8ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8ec9 call 0x11eb93f0 */
  push32(0x11eb8eceu); f_11eb93f0();
  /* 11eb8ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8ed1 push 0x11edd6b0 */
  push32((uint32_t)(0x11edd6b0u));
  /* 11eb8ed6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11eb8edc push edx */
  push32((uint32_t)(EDX));
  /* 11eb8edd call 0x11eb93f0 */
  push32(0x11eb8ee2u); f_11eb93f0();
  /* 11eb8ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8ee5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb8ee8 mov ecx, dword ptr [eax*8 + 0x11ee0ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11ee0ab4)));
  /* 11eb8eef push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8ef0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11eb8ef6 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8ef7 call 0x11eb93f0 */
  push32(0x11eb8efcu); f_11eb93f0();
  /* 11eb8efc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8eff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11eb8f04 push 0x11ede168 */
  push32((uint32_t)(0x11ede168u));
  /* 11eb8f09 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11eb8f0f push eax */
  push32((uint32_t)(EAX));
  /* 11eb8f10 call 0x11eb9b90 */
  push32(0x11eb8f15u); f_11eb9b90();
  /* 11eb8f15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb8f18:;
  /* 11eb8f18 pop edi */
  EDI = (pop32());
  /* 11eb8f19 pop esi */
  ESI = (pop32());
  /* 11eb8f1a pop ebx */
  EBX = (pop32());
  /* 11eb8f1b mov esp, ebp */
  ESP = (EBP);
  /* 11eb8f1d pop ebp */
  EBP = (pop32());
  /* 11eb8f1e ret  */
  ESPCHK(0x11eb8d60u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11eb8f20 (80 bytes, 27 insns) */
void f_11eb8f20(void) {
  FTRACE(0x11eb8f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8f21 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8f24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eb8f2b jmp 0x11eb8f36 */
  goto L_11eb8f36;
L_11eb8f2d:;
  /* 11eb8f2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8f30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8f33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb8f36:;
  /* 11eb8f36 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8f3a jae 0x11eb8f4f */
  if (!C.cf) goto L_11eb8f4f;
  /* 11eb8f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8f42 cmp edx, dword ptr [ecx*8 + 0x11ee0ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11ee0ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8f49 jne 0x11eb8f4d */
  if (!C.zf) goto L_11eb8f4d;
  /* 11eb8f4b jmp 0x11eb8f4f */
  goto L_11eb8f4f;
L_11eb8f4d:;
  /* 11eb8f4d jmp 0x11eb8f2d */
  goto L_11eb8f2d;
L_11eb8f4f:;
  /* 11eb8f4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8f52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8f55 cmp ecx, dword ptr [eax*8 + 0x11ee0ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11ee0ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8f5c jne 0x11eb8f6a */
  if (!C.zf) goto L_11eb8f6a;
  /* 11eb8f5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8f61 mov eax, dword ptr [edx*8 + 0x11ee0ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11ee0ab4)));
  /* 11eb8f68 jmp 0x11eb8f6c */
  goto L_11eb8f6c;
L_11eb8f6a:;
  /* 11eb8f6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb8f6c:;
  /* 11eb8f6c mov esp, ebp */
  ESP = (EBP);
  /* 11eb8f6e pop ebp */
  EBP = (pop32());
  /* 11eb8f6f ret  */
  ESPCHK(0x11eb8f20u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11eb8f70 (66 bytes, 28 insns) */
void f_11eb8f70(void) {
  FTRACE(0x11eb8f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8f71 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8f73 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8f77 jne 0x11eb8f97 */
  if (!C.zf) goto L_11eb8f97;
  /* 11eb8f79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8f7d jge 0x11eb8f97 */
  if ((C.sf==C.of)) goto L_11eb8f97;
  /* 11eb8f7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb8f81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb8f84 push eax */
  push32((uint32_t)(EAX));
  /* 11eb8f85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb8f88 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8f89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8f8c push edx */
  push32((uint32_t)(EDX));
  /* 11eb8f8d call 0x11eb8fc0 */
  push32(0x11eb8f92u); f_11eb8fc0();
  /* 11eb8f92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8f95 jmp 0x11eb8fad */
  goto L_11eb8fad;
L_11eb8f97:;
  /* 11eb8f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb8f99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb8f9c push eax */
  push32((uint32_t)(EAX));
  /* 11eb8f9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb8fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb8fa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8fa4 push edx */
  push32((uint32_t)(EDX));
  /* 11eb8fa5 call 0x11eb8fc0 */
  push32(0x11eb8faau); f_11eb8fc0();
  /* 11eb8faa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb8fad:;
  /* 11eb8fad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb8fb0 pop ebp */
  EBP = (pop32());
  /* 11eb8fb1 ret  */
  ESPCHK(0x11eb8f70u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11eb8fc0 (194 bytes, 71 insns) */
void f_11eb8fc0(void) {
  FTRACE(0x11eb8fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb8fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb8fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb8fc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb8fc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb8fc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb8fcc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb8fd0 je 0x11eb8fe9 */
  if (C.zf) goto L_11eb8fe9;
  /* 11eb8fd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8fd5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11eb8fd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8fdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb8fde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb8fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8fe4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11eb8fe6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11eb8fe9:;
  /* 11eb8fe9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb8fec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11eb8fef:;
  /* 11eb8fef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8ff2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8ff4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11eb8ff7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11eb8ffa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb8ffd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb8fff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11eb9002 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11eb9005 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9009 jbe 0x11eb9021 */
  if ((C.cf||C.zf)) goto L_11eb9021;
  /* 11eb900b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb900e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9014 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb9016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9019 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb901c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eb901f jmp 0x11eb9035 */
  goto L_11eb9035;
L_11eb9021:;
  /* 11eb9021 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb9024 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb902a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb902c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb902f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9032 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb9035:;
  /* 11eb9035 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9039 ja 0x11eb8fef */
  if ((!C.cf&&!C.zf)) goto L_11eb8fef;
  /* 11eb903b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb903e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11eb9041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9044 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb9047 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb904a:;
  /* 11eb904a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb904d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb904f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11eb9052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9055 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9058 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb905a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb905c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb905f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11eb9062 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11eb9064 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9067 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb906a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb906d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9070 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9073 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb9076 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9079 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb907c jb 0x11eb904a */
  if (C.cf) goto L_11eb904a;
  /* 11eb907e mov esp, ebp */
  ESP = (EBP);
  /* 11eb9080 pop ebp */
  EBP = (pop32());
  /* 11eb9081 ret  */
  ESPCHK(0x11eb8fc0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11eb9090 (63 bytes, 24 insns) */
void f_11eb9090(void) {
  FTRACE(0x11eb9090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9090 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9091 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9093 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9094 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9098 jne 0x11eb90a9 */
  if (!C.zf) goto L_11eb90a9;
  /* 11eb909a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb909e jge 0x11eb90a9 */
  if ((C.sf==C.of)) goto L_11eb90a9;
  /* 11eb90a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11eb90a7 jmp 0x11eb90b0 */
  goto L_11eb90b0;
L_11eb90a9:;
  /* 11eb90a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11eb90b0:;
  /* 11eb90b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb90b3 push eax */
  push32((uint32_t)(EAX));
  /* 11eb90b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb90b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb90b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb90bb push edx */
  push32((uint32_t)(EDX));
  /* 11eb90bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb90bf push eax */
  push32((uint32_t)(EAX));
  /* 11eb90c0 call 0x11eb8fc0 */
  push32(0x11eb90c5u); f_11eb8fc0();
  /* 11eb90c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb90c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb90cb mov esp, ebp */
  ESP = (EBP);
  /* 11eb90cd pop ebp */
  EBP = (pop32());
  /* 11eb90ce ret  */
  ESPCHK(0x11eb9090u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11eb90d0 (30 bytes, 14 insns) */
void f_11eb90d0(void) {
  FTRACE(0x11eb90d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb90d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb90d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb90d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb90d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb90d8 push eax */
  push32((uint32_t)(EAX));
  /* 11eb90d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb90dc push ecx */
  push32((uint32_t)(ECX));
  /* 11eb90dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb90e0 push edx */
  push32((uint32_t)(EDX));
  /* 11eb90e1 call 0x11eb8fc0 */
  push32(0x11eb90e6u); f_11eb8fc0();
  /* 11eb90e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb90e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb90ec pop ebp */
  EBP = (pop32());
  /* 11eb90ed ret  */
  ESPCHK(0x11eb90d0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11eb90f0 (72 bytes, 28 insns) */
void f_11eb90f0(void) {
  FTRACE(0x11eb90f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb90f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb90f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb90f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb90f4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb90f8 jne 0x11eb9111 */
  if (!C.zf) goto L_11eb9111;
  /* 11eb90fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb90fe jg 0x11eb9111 */
  if ((!C.zf&&C.sf==C.of)) goto L_11eb9111;
  /* 11eb9100 jl 0x11eb9108 */
  if ((C.sf!=C.of)) goto L_11eb9108;
  /* 11eb9102 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9106 jae 0x11eb9111 */
  if (!C.cf) goto L_11eb9111;
L_11eb9108:;
  /* 11eb9108 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11eb910f jmp 0x11eb9118 */
  goto L_11eb9118;
L_11eb9111:;
  /* 11eb9111 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11eb9118:;
  /* 11eb9118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb911b push eax */
  push32((uint32_t)(EAX));
  /* 11eb911c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb911f push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9120 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb9123 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9124 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9127 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb912b push ecx */
  push32((uint32_t)(ECX));
  /* 11eb912c call 0x11eb9140 */
  push32(0x11eb9131u); f_11eb9140();
  /* 11eb9131 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb9134 mov esp, ebp */
  ESP = (EBP);
  /* 11eb9136 pop ebp */
  EBP = (pop32());
  /* 11eb9137 ret  */
  ESPCHK(0x11eb90f0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11eb9140 (242 bytes, 91 insns) */
void f_11eb9140(void) {
  FTRACE(0x11eb9140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9140 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9141 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9143 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb9146 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb9149 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb914c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9150 je 0x11eb9174 */
  if (C.zf) goto L_11eb9174;
  /* 11eb9152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9155 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11eb9158 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb915b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb915e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb9161 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9164 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11eb9166 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9169 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb916c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11eb916e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11eb9171 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11eb9174:;
  /* 11eb9174 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9177 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11eb917a:;
  /* 11eb917a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb917d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb917f push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9180 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9181 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9184 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9188 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9189 call 0x11ebd0c0 */
  push32(0x11eb918eu); f_11ebd0c0();
  /* 11eb918e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb9191 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb9194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb9196 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9197 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9198 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb919b push eax */
  push32((uint32_t)(EAX));
  /* 11eb919c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb919f push ecx */
  push32((uint32_t)(ECX));
  /* 11eb91a0 call 0x11ebd050 */
  push32(0x11eb91a5u); f_11ebd050();
  /* 11eb91a5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11eb91a8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11eb91ab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb91af jbe 0x11eb91c7 */
  if ((C.cf||C.zf)) goto L_11eb91c7;
  /* 11eb91b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb91b4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb91b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb91ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb91bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb91bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb91c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eb91c5 jmp 0x11eb91db */
  goto L_11eb91db;
L_11eb91c7:;
  /* 11eb91c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb91ca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb91cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb91d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb91d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb91d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb91d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11eb91db:;
  /* 11eb91db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb91df ja 0x11eb917a */
  if ((!C.cf&&!C.zf)) goto L_11eb917a;
  /* 11eb91e1 jb 0x11eb91e9 */
  if (C.cf) goto L_11eb91e9;
  /* 11eb91e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb91e7 ja 0x11eb917a */
  if ((!C.cf&&!C.zf)) goto L_11eb917a;
L_11eb91e9:;
  /* 11eb91e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb91ec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11eb91ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb91f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb91f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb91f8:;
  /* 11eb91f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb91fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb91fd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11eb9200 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9203 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9206 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb9208 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11eb920a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb920d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11eb9210 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11eb9212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9215 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb9218 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eb921b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb921e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9221 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb9224 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9227 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb922a jb 0x11eb91f8 */
  if (C.cf) goto L_11eb91f8;
  /* 11eb922c mov esp, ebp */
  ESP = (EBP);
  /* 11eb922e pop ebp */
  EBP = (pop32());
  /* 11eb922f ret 0x14 */
  ESPCHK(0x11eb9140u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11eb9240 (31 bytes, 15 insns) */
void f_11eb9240(void) {
  FTRACE(0x11eb9240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9240 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9241 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9243 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb9245 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb9248 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9249 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb924c push ecx */
  push32((uint32_t)(ECX));
  /* 11eb924d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9250 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9254 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9255 call 0x11eb9140 */
  push32(0x11eb925au); f_11eb9140();
  /* 11eb925a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb925d pop ebp */
  EBP = (pop32());
  /* 11eb925e ret  */
  ESPCHK(0x11eb9240u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11eb9260 (123 bytes, 44 insns) */
void f_11eb9260(void) {
  FTRACE(0x11eb9260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9260 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11eb9264 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11eb926a je 0x11eb9280 */
  if (C.zf) goto L_11eb9280;
L_11eb926c:;
  /* 11eb926c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11eb926e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11eb926f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11eb9271 je 0x11eb92b3 */
  if (C.zf) goto L_11eb92b3;
  /* 11eb9273 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11eb9279 jne 0x11eb926c */
  if (!C.zf) goto L_11eb926c;
  /* 11eb927b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11eb9280:;
  /* 11eb9280 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11eb9282 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11eb9287 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9289 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb928c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb928e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9291 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11eb9296 je 0x11eb9280 */
  if (C.zf) goto L_11eb9280;
  /* 11eb9298 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11eb929b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11eb929d je 0x11eb92d1 */
  if (C.zf) goto L_11eb92d1;
  /* 11eb929f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11eb92a1 je 0x11eb92c7 */
  if (C.zf) goto L_11eb92c7;
  /* 11eb92a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11eb92a8 je 0x11eb92bd */
  if (C.zf) goto L_11eb92bd;
  /* 11eb92aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11eb92af je 0x11eb92b3 */
  if (C.zf) goto L_11eb92b3;
  /* 11eb92b1 jmp 0x11eb9280 */
  goto L_11eb9280;
L_11eb92b3:;
  /* 11eb92b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11eb92b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11eb92ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb92bc ret  */
  ESPCHK(0x11eb9260u, _esp0);
  ESP += 4; return;
L_11eb92bd:;
  /* 11eb92bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11eb92c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11eb92c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb92c6 ret  */
  ESPCHK(0x11eb9260u, _esp0);
  ESP += 4; return;
L_11eb92c7:;
  /* 11eb92c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11eb92ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11eb92ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb92d0 ret  */
  ESPCHK(0x11eb9260u, _esp0);
  ESP += 4; return;
L_11eb92d1:;
  /* 11eb92d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11eb92d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11eb92d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb92da ret  */
  ESPCHK(0x11eb9260u, _esp0);
  ESP += 4; return;
}

/* FUN_100092e0 @ 0x11eb92e0 (249 bytes, 93 insns) */
void f_11eb92e0(void) {
  FTRACE(0x11eb92e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb92e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb92e1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb92e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb92e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb92e7 push esi */
  push32((uint32_t)(ESI));
  /* 11eb92e8 push edi */
  push32((uint32_t)(EDI));
  /* 11eb92e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11eb92ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11eb92ef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11eb92f2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11eb92f5:;
  /* 11eb92f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb92f9 jne 0x11eb9319 */
  if (!C.zf) goto L_11eb9319;
  /* 11eb92fb push 0x11ede1c8 */
  push32((uint32_t)(0x11ede1c8u));
  /* 11eb9300 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb9302 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11eb9304 push 0x11ede1bc */
  push32((uint32_t)(0x11ede1bcu));
  /* 11eb9309 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb930b call 0x11eb54f0 */
  push32(0x11eb9310u); f_11eb54f0();
  /* 11eb9310 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9313 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9316 jne 0x11eb9319 */
  if (!C.zf) goto L_11eb9319;
  /* 11eb9318 int3  */
  x86_unimpl("int3 @ 0x11eb9318");
L_11eb9319:;
  /* 11eb9319 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb931b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb931d jne 0x11eb92f5 */
  if (!C.zf) goto L_11eb92f5;
L_11eb931f:;
  /* 11eb931f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9323 jne 0x11eb9343 */
  if (!C.zf) goto L_11eb9343;
  /* 11eb9325 push 0x11ede1ac */
  push32((uint32_t)(0x11ede1acu));
  /* 11eb932a push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb932c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11eb932e push 0x11ede1bc */
  push32((uint32_t)(0x11ede1bcu));
  /* 11eb9333 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb9335 call 0x11eb54f0 */
  push32(0x11eb933au); f_11eb54f0();
  /* 11eb933a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb933d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9340 jne 0x11eb9343 */
  if (!C.zf) goto L_11eb9343;
  /* 11eb9342 int3  */
  x86_unimpl("int3 @ 0x11eb9342");
L_11eb9343:;
  /* 11eb9343 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eb9347 jne 0x11eb931f */
  if (!C.zf) goto L_11eb931f;
  /* 11eb9349 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb934c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11eb9353 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9359 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11eb935c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb935f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9362 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11eb9364 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9367 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb936a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11eb936d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11eb9370 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9371 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb9374 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9375 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9378 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9379 call 0x11ebd3c0 */
  push32(0x11eb937eu); f_11ebd3c0();
  /* 11eb937e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9381 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11eb9384 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9387 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11eb938a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb938d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9390 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11eb9393 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9396 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb939a jl 0x11eb93be */
  if ((C.sf!=C.of)) goto L_11eb93be;
  /* 11eb939c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb939f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb93a1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11eb93a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb93a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb93ac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11eb93af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb93b2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb93b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb93b7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb93ba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11eb93bc jmp 0x11eb93cf */
  goto L_11eb93cf;
L_11eb93be:;
  /* 11eb93be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb93c1 push eax */
  push32((uint32_t)(EAX));
  /* 11eb93c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb93c4 call 0x11ebd140 */
  push32(0x11eb93c9u); f_11ebd140();
  /* 11eb93c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb93cc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11eb93cf:;
  /* 11eb93cf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11eb93d2 pop edi */
  EDI = (pop32());
  /* 11eb93d3 pop esi */
  ESI = (pop32());
  /* 11eb93d4 pop ebx */
  EBX = (pop32());
  /* 11eb93d5 mov esp, ebp */
  ESP = (EBP);
  /* 11eb93d7 pop ebp */
  EBP = (pop32());
  /* 11eb93d8 ret  */
  ESPCHK(0x11eb92e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e0 @ 0x11eb93e0 (7 bytes, 3 insns) */
void f_11eb93e0(void) {
  FTRACE(0x11eb93e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb93e0 push edi */
  push32((uint32_t)(EDI));
  /* 11eb93e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11eb93e5 jmp 0x11eb9451 */
  jmp_ind(0x11eb9451u); return;
}

/* FUN_100093f0 @ 0x11eb93f0 (224 bytes, 84 insns) */
void f_11eb93f0(void) {
  FTRACE(0x11eb93f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb93f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11eb93f4 push edi */
  push32((uint32_t)(EDI));
  /* 11eb93f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11eb93fb je 0x11eb940c */
  if (C.zf) goto L_11eb940c;
L_11eb93fd:;
  /* 11eb93fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11eb93ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11eb9400 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11eb9402 je 0x11eb943f */
  if (C.zf) goto L_11eb943f;
  /* 11eb9404 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11eb940a jne 0x11eb93fd */
  if (!C.zf) goto L_11eb93fd;
L_11eb940c:;
  /* 11eb940c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11eb940e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11eb9413 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9415 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9418 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb941a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb941d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11eb9422 je 0x11eb940c */
  if (C.zf) goto L_11eb940c;
  /* 11eb9424 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11eb9427 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11eb9429 je 0x11eb944e */
  if (C.zf) goto L_11eb944e;
  /* 11eb942b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11eb942d je 0x11eb9449 */
  if (C.zf) goto L_11eb9449;
  /* 11eb942f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11eb9434 je 0x11eb9444 */
  if (C.zf) goto L_11eb9444;
  /* 11eb9436 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11eb943b je 0x11eb943f */
  if (C.zf) goto L_11eb943f;
  /* 11eb943d jmp 0x11eb940c */
  goto L_11eb940c;
L_11eb943f:;
  /* 11eb943f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11eb9442 jmp 0x11eb9451 */
  goto L_11eb9451;
L_11eb9444:;
  /* 11eb9444 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11eb9447 jmp 0x11eb9451 */
  goto L_11eb9451;
L_11eb9449:;
  /* 11eb9449 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11eb944c jmp 0x11eb9451 */
  goto L_11eb9451;
L_11eb944e:;
  /* 11eb944e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11eb9451:;
  /* 11eb9451 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11eb9455 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11eb945b je 0x11eb9476 */
  if (C.zf) goto L_11eb9476;
L_11eb945d:;
  /* 11eb945d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11eb945f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11eb9460 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11eb9462 je 0x11eb94c8 */
  if (C.zf) goto L_11eb94c8;
  /* 11eb9464 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11eb9466 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11eb9467 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11eb946d jne 0x11eb945d */
  if (!C.zf) goto L_11eb945d;
  /* 11eb946f jmp 0x11eb9476 */
  goto L_11eb9476;
L_11eb9471:;
  /* 11eb9471 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11eb9473 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11eb9476:;
  /* 11eb9476 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11eb947b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11eb947d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb947f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9482 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9484 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb9486 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9489 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11eb948e je 0x11eb9471 */
  if (C.zf) goto L_11eb9471;
  /* 11eb9490 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11eb9492 je 0x11eb94c8 */
  if (C.zf) goto L_11eb94c8;
  /* 11eb9494 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11eb9496 je 0x11eb94bf */
  if (C.zf) goto L_11eb94bf;
  /* 11eb9498 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11eb949e je 0x11eb94b2 */
  if (C.zf) goto L_11eb94b2;
  /* 11eb94a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11eb94a6 je 0x11eb94aa */
  if (C.zf) goto L_11eb94aa;
  /* 11eb94a8 jmp 0x11eb9471 */
  goto L_11eb9471;
L_11eb94aa:;
  /* 11eb94aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11eb94ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11eb94b0 pop edi */
  EDI = (pop32());
  /* 11eb94b1 ret  */
  ESPCHK(0x11eb93f0u, _esp0);
  ESP += 4; return;
L_11eb94b2:;
  /* 11eb94b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11eb94b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11eb94b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11eb94bd pop edi */
  EDI = (pop32());
  /* 11eb94be ret  */
  ESPCHK(0x11eb93f0u, _esp0);
  ESP += 4; return;
L_11eb94bf:;
  /* 11eb94bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11eb94c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11eb94c6 pop edi */
  EDI = (pop32());
  /* 11eb94c7 ret  */
  ESPCHK(0x11eb93f0u, _esp0);
  ESP += 4; return;
L_11eb94c8:;
  /* 11eb94c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11eb94ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11eb94ce pop edi */
  EDI = (pop32());
  /* 11eb94cf ret  */
  ESPCHK(0x11eb93f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094d0 @ 0x11eb94d0 (243 bytes, 91 insns) */
void f_11eb94d0(void) {
  FTRACE(0x11eb94d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb94d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb94d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb94d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb94d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11eb94d7 push esi */
  push32((uint32_t)(ESI));
  /* 11eb94d8 push edi */
  push32((uint32_t)(EDI));
  /* 11eb94d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11eb94dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11eb94df:;
  /* 11eb94df cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb94e3 jne 0x11eb9503 */
  if (!C.zf) goto L_11eb9503;
  /* 11eb94e5 push 0x11ede1c8 */
  push32((uint32_t)(0x11ede1c8u));
  /* 11eb94ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb94ec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11eb94ee push 0x11ede1d8 */
  push32((uint32_t)(0x11ede1d8u));
  /* 11eb94f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb94f5 call 0x11eb54f0 */
  push32(0x11eb94fau); f_11eb54f0();
  /* 11eb94fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb94fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9500 jne 0x11eb9503 */
  if (!C.zf) goto L_11eb9503;
  /* 11eb9502 int3  */
  x86_unimpl("int3 @ 0x11eb9502");
L_11eb9503:;
  /* 11eb9503 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb9505 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb9507 jne 0x11eb94df */
  if (!C.zf) goto L_11eb94df;
L_11eb9509:;
  /* 11eb9509 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb950d jne 0x11eb952d */
  if (!C.zf) goto L_11eb952d;
  /* 11eb950f push 0x11ede1ac */
  push32((uint32_t)(0x11ede1acu));
  /* 11eb9514 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb9516 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11eb9518 push 0x11ede1d8 */
  push32((uint32_t)(0x11ede1d8u));
  /* 11eb951d push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb951f call 0x11eb54f0 */
  push32(0x11eb9524u); f_11eb54f0();
  /* 11eb9524 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9527 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb952a jne 0x11eb952d */
  if (!C.zf) goto L_11eb952d;
  /* 11eb952c int3  */
  x86_unimpl("int3 @ 0x11eb952c");
L_11eb952d:;
  /* 11eb952d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb952f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eb9531 jne 0x11eb9509 */
  if (!C.zf) goto L_11eb9509;
  /* 11eb9533 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9536 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11eb953d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9540 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9543 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11eb9546 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb954c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11eb954e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9551 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9554 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11eb9557 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11eb955a push ecx */
  push32((uint32_t)(ECX));
  /* 11eb955b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb955e push edx */
  push32((uint32_t)(EDX));
  /* 11eb955f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9562 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9563 call 0x11ebd3c0 */
  push32(0x11eb9568u); f_11ebd3c0();
  /* 11eb9568 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb956b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11eb956e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9571 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11eb9574 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb9577 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb957a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11eb957d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9580 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9584 jl 0x11eb95a8 */
  if ((C.sf!=C.of)) goto L_11eb95a8;
  /* 11eb9586 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb9589 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb958b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11eb958e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11eb9590 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11eb9596 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11eb9599 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb959c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb959e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb95a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb95a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11eb95a6 jmp 0x11eb95b9 */
  goto L_11eb95b9;
L_11eb95a8:;
  /* 11eb95a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11eb95ab push edx */
  push32((uint32_t)(EDX));
  /* 11eb95ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb95ae call 0x11ebd140 */
  push32(0x11eb95b3u); f_11ebd140();
  /* 11eb95b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb95b6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11eb95b9:;
  /* 11eb95b9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11eb95bc pop edi */
  EDI = (pop32());
  /* 11eb95bd pop esi */
  ESI = (pop32());
  /* 11eb95be pop ebx */
  EBX = (pop32());
  /* 11eb95bf mov esp, ebp */
  ESP = (EBP);
  /* 11eb95c1 pop ebp */
  EBP = (pop32());
  /* 11eb95c2 ret  */
  ESPCHK(0x11eb94d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095d0 @ 0x11eb95d0 (47 bytes, 17 insns) */
void f_11eb95d0(void) {
  FTRACE(0x11eb95d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb95d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb95d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb95d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11eb95da jb 0x11eb95f0 */
  if (C.cf) goto L_11eb95f0;
L_11eb95dc:;
  /* 11eb95dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb95e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb95e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11eb95e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb95ee jae 0x11eb95dc */
  if (!C.cf) goto L_11eb95dc;
L_11eb95f0:;
  /* 11eb95f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb95f2 mov eax, esp */
  EAX = (ESP);
  /* 11eb95f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11eb95f6 mov esp, ecx */
  ESP = (ECX);
  /* 11eb95f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb95fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11eb95fd push eax */
  push32((uint32_t)(EAX));
  /* 11eb95fe ret  */
  ESPCHK(0x11eb95d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009600 @ 0x11eb9600 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11eb9600(void) {
  FTRACE(0x11eb9600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9600 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9601 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9603 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb9606 push esi */
  push32((uint32_t)(ESI));
  /* 11eb9607 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb960b je 0x11eb9613 */
  if (C.zf) goto L_11eb9613;
  /* 11eb960d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9611 jne 0x11eb9618 */
  if (!C.zf) goto L_11eb9618;
L_11eb9613:;
  /* 11eb9613 jmp 0x11eb97e8 */
  goto L_11eb97e8;
L_11eb9618:;
  /* 11eb9618 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb961c je 0x11eb9634 */
  if (C.zf) goto L_11eb9634;
  /* 11eb961e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9622 je 0x11eb9634 */
  if (C.zf) goto L_11eb9634;
  /* 11eb9624 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9628 je 0x11eb9634 */
  if (C.zf) goto L_11eb9634;
  /* 11eb962a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb962e jne 0x11eb9711 */
  if (!C.zf) goto L_11eb9711;
L_11eb9634:;
  /* 11eb9634 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb9636 call 0x11eb9e30 */
  push32(0x11eb963bu); f_11eb9e30();
  /* 11eb963b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb963e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9642 je 0x11eb964a */
  if (C.zf) goto L_11eb964a;
  /* 11eb9644 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9648 jne 0x11eb968f */
  if (!C.zf) goto L_11eb968f;
L_11eb964a:;
  /* 11eb964a cmp dword ptr [0x11ee28fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee28fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9651 jne 0x11eb968f */
  if (!C.zf) goto L_11eb968f;
  /* 11eb9653 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb9655 push 0x11eb9830 */
  push32((uint32_t)(0x11eb9830u));
  /* 11eb965a call dword ptr [0x11ee5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5354))), 0x11eb9660u);
  /* 11eb9660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9663 jne 0x11eb9671 */
  if (!C.zf) goto L_11eb9671;
  /* 11eb9665 mov dword ptr [0x11ee28fc], 1 */
  w32((uint32_t)(0x11ee28fc), (0x1u));
  /* 11eb966f jmp 0x11eb968f */
  goto L_11eb968f;
L_11eb9671:;
  /* 11eb9671 call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11eb9677u);
  /* 11eb9677 mov esi, eax */
  ESI = (EAX);
  /* 11eb9679 call 0x11ebe310 */
  push32(0x11eb967eu); f_11ebe310();
  /* 11eb967e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11eb9680 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb9682 call 0x11eb9ed0 */
  push32(0x11eb9687u); f_11eb9ed0();
  /* 11eb9687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb968a jmp 0x11eb97e8 */
  goto L_11eb97e8;
L_11eb968f:;
  /* 11eb968f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9692 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eb9695 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9698 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb969b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11eb969e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb96a2 ja 0x11eb9702 */
  if ((!C.cf&&!C.zf)) goto L_11eb9702;
  /* 11eb96a4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb96a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb96a9 mov dl, byte ptr [eax + 0x11eb980f] */
  DL = (r8((uint32_t)(EAX + 0x11eb980f)));
  /* 11eb96af jmp dword ptr [edx*4 + 0x11eb97fb] */
  switch (EDX) {
    case 0: goto L_11eb96b6;
    case 1: goto L_11eb96f0;
    case 2: goto L_11eb96ca;
    case 3: goto L_11eb96dd;
    case 4: goto L_11eb9702;
    default: x86_unimpl("switch@0x11eb96af out of table"); return;
  }
L_11eb96b6:;
  /* 11eb96b6 mov ecx, dword ptr [0x11ee28ec] */
  ECX = (r32((uint32_t)(0x11ee28ec)));
  /* 11eb96bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11eb96bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb96c2 mov dword ptr [0x11ee28ec], edx */
  w32((uint32_t)(0x11ee28ec), (EDX));
  /* 11eb96c8 jmp 0x11eb9702 */
  goto L_11eb9702;
L_11eb96ca:;
  /* 11eb96ca mov eax, dword ptr [0x11ee28f0] */
  EAX = (r32((uint32_t)(0x11ee28f0)));
  /* 11eb96cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb96d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb96d5 mov dword ptr [0x11ee28f0], ecx */
  w32((uint32_t)(0x11ee28f0), (ECX));
  /* 11eb96db jmp 0x11eb9702 */
  goto L_11eb9702;
L_11eb96dd:;
  /* 11eb96dd mov edx, dword ptr [0x11ee28f4] */
  EDX = (r32((uint32_t)(0x11ee28f4)));
  /* 11eb96e3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11eb96e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb96e9 mov dword ptr [0x11ee28f4], eax */
  w32((uint32_t)(0x11ee28f4), (EAX));
  /* 11eb96ee jmp 0x11eb9702 */
  goto L_11eb9702;
L_11eb96f0:;
  /* 11eb96f0 mov ecx, dword ptr [0x11ee28f8] */
  ECX = (r32((uint32_t)(0x11ee28f8)));
  /* 11eb96f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11eb96f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb96fc mov dword ptr [0x11ee28f8], edx */
  w32((uint32_t)(0x11ee28f8), (EDX));
L_11eb9702:;
  /* 11eb9702 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb9704 call 0x11eb9ed0 */
  push32(0x11eb9709u); f_11eb9ed0();
  /* 11eb9709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb970c jmp 0x11eb97e3 */
  goto L_11eb97e3;
L_11eb9711:;
  /* 11eb9711 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9715 je 0x11eb9728 */
  if (C.zf) goto L_11eb9728;
  /* 11eb9717 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb971b je 0x11eb9728 */
  if (C.zf) goto L_11eb9728;
  /* 11eb971d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9721 je 0x11eb9728 */
  if (C.zf) goto L_11eb9728;
  /* 11eb9723 jmp 0x11eb97e8 */
  goto L_11eb97e8;
L_11eb9728:;
  /* 11eb9728 call 0x11eb5e70 */
  push32(0x11eb972du); f_11eb5e70();
  /* 11eb972d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb9730 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9733 cmp dword ptr [eax + 0x50], 0x11ee0c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11ee0c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb973a jne 0x11eb9785 */
  if (!C.zf) goto L_11eb9785;
  /* 11eb973c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11eb9741 push 0x11ede1e4 */
  push32((uint32_t)(0x11ede1e4u));
  /* 11eb9746 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb9748 mov ecx, dword ptr [0x11ee0c80] */
  ECX = (r32((uint32_t)(0x11ee0c80)));
  /* 11eb974e push ecx */
  push32((uint32_t)(ECX));
  /* 11eb974f call 0x11eb6430 */
  push32(0x11eb9754u); f_11eb6430();
  /* 11eb9754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9757 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb975a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11eb975d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9760 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9764 je 0x11eb9783 */
  if (C.zf) goto L_11eb9783;
  /* 11eb9766 mov ecx, dword ptr [0x11ee0c80] */
  ECX = (r32((uint32_t)(0x11ee0c80)));
  /* 11eb976c push ecx */
  push32((uint32_t)(ECX));
  /* 11eb976d push 0x11ee0c00 */
  push32((uint32_t)(0x11ee0c00u));
  /* 11eb9772 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9775 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11eb9778 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9779 call 0x11ebcd10 */
  push32(0x11eb977eu); f_11ebcd10();
  /* 11eb977e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9781 jmp 0x11eb9785 */
  goto L_11eb9785;
L_11eb9783:;
  /* 11eb9783 jmp 0x11eb97e8 */
  goto L_11eb97e8;
L_11eb9785:;
  /* 11eb9785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9788 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11eb978b push edx */
  push32((uint32_t)(EDX));
  /* 11eb978c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb978f push eax */
  push32((uint32_t)(EAX));
  /* 11eb9790 call 0x11eb9b10 */
  push32(0x11eb9795u); f_11eb9b10();
  /* 11eb9795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9798 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb979b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb979f jne 0x11eb97a3 */
  if (!C.zf) goto L_11eb97a3;
  /* 11eb97a1 jmp 0x11eb97e8 */
  goto L_11eb97e8;
L_11eb97a3:;
  /* 11eb97a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb97a6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11eb97a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11eb97ac:;
  /* 11eb97ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb97af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11eb97b2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb97b5 jne 0x11eb97e3 */
  if (!C.zf) goto L_11eb97e3;
  /* 11eb97b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb97ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb97bd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11eb97c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb97c3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb97c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11eb97c9 mov edx, dword ptr [0x11ee0c84] */
  EDX = (r32((uint32_t)(0x11ee0c84)));
  /* 11eb97cf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb97d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb97d5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11eb97d8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb97da cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb97dd jb 0x11eb97e1 */
  if (C.cf) goto L_11eb97e1;
  /* 11eb97df jmp 0x11eb97e3 */
  goto L_11eb97e3;
L_11eb97e1:;
  /* 11eb97e1 jmp 0x11eb97ac */
  goto L_11eb97ac;
L_11eb97e3:;
  /* 11eb97e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb97e6 jmp 0x11eb97f6 */
  goto L_11eb97f6;
L_11eb97e8:;
  /* 11eb97e8 call 0x11ebe300 */
  push32(0x11eb97edu); f_11ebe300();
  /* 11eb97ed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11eb97f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11eb97f6:;
  /* 11eb97f6 pop esi */
  ESI = (pop32());
  /* 11eb97f7 mov esp, ebp */
  ESP = (EBP);
  /* 11eb97f9 pop ebp */
  EBP = (pop32());
  /* 11eb97fa ret  */
  ESPCHK(0x11eb9600u, _esp0);
  ESP += 4; return;
}

/* FUN_10009830 @ 0x11eb9830 (146 bytes, 45 insns) */
void f_11eb9830(void) {
  FTRACE(0x11eb9830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9830 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9831 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9833 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb9836 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb9838 call 0x11eb9e30 */
  push32(0x11eb983du); f_11eb9e30();
  /* 11eb983d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9840 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9844 jne 0x11eb985e */
  if (!C.zf) goto L_11eb985e;
  /* 11eb9846 mov dword ptr [ebp - 8], 0x11ee28ec */
  w32((uint32_t)(EBP + -0x8), (0x11ee28ecu));
  /* 11eb984d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9850 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11eb9852 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11eb9855 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11eb985c jmp 0x11eb9874 */
  goto L_11eb9874;
L_11eb985e:;
  /* 11eb985e mov dword ptr [ebp - 8], 0x11ee28f0 */
  w32((uint32_t)(EBP + -0x8), (0x11ee28f0u));
  /* 11eb9865 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9868 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eb986a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb986d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11eb9874:;
  /* 11eb9874 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9878 jne 0x11eb9888 */
  if (!C.zf) goto L_11eb9888;
  /* 11eb987a push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb987c call 0x11eb9ed0 */
  push32(0x11eb9881u); f_11eb9ed0();
  /* 11eb9881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9886 jmp 0x11eb98bc */
  goto L_11eb98bc;
L_11eb9888:;
  /* 11eb9888 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb988c je 0x11eb98ad */
  if (C.zf) goto L_11eb98ad;
  /* 11eb988e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9891 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11eb9897 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb9899 call 0x11eb9ed0 */
  push32(0x11eb989eu); f_11eb9ed0();
  /* 11eb989e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb98a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb98a4 push edx */
  push32((uint32_t)(EDX));
  /* 11eb98a5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11eb98a8u);
  /* 11eb98a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb98ab jmp 0x11eb98b7 */
  goto L_11eb98b7;
L_11eb98ad:;
  /* 11eb98ad push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb98af call 0x11eb9ed0 */
  push32(0x11eb98b4u); f_11eb9ed0();
  /* 11eb98b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb98b7:;
  /* 11eb98b7 mov eax, 1 */
  EAX = (0x1u);
L_11eb98bc:;
  /* 11eb98bc mov esp, ebp */
  ESP = (EBP);
  /* 11eb98be pop ebp */
  EBP = (pop32());
  /* 11eb98bf ret 4 */
  ESPCHK(0x11eb9830u, _esp0);
  ESP += 8; return;
}

/* FUN_100098d0 @ 0x11eb98d0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11eb98d0(void) {
  FTRACE(0x11eb98d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb98d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb98d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb98d3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb98d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11eb98dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb98e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11eb98e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11eb98e6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb98e9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11eb98ec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb98f0 ja 0x11eb999e */
  if ((!C.cf&&!C.zf)) goto L_11eb999e;
  /* 11eb98f6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11eb98f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb98fb mov dl, byte ptr [eax + 0x11eb9af2] */
  DL = (r8((uint32_t)(EAX + 0x11eb9af2)));
  /* 11eb9901 jmp dword ptr [edx*4 + 0x11eb9ada] */
  switch (EDX) {
    case 0: goto L_11eb9908;
    case 1: goto L_11eb9973;
    case 2: goto L_11eb9959;
    case 3: goto L_11eb9925;
    case 4: goto L_11eb993f;
    case 5: goto L_11eb999e;
    default: x86_unimpl("switch@0x11eb9901 out of table"); return;
  }
L_11eb9908:;
  /* 11eb9908 mov dword ptr [ebp - 0x18], 0x11ee28ec */
  w32((uint32_t)(EBP + -0x18), (0x11ee28ecu));
  /* 11eb990f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb9912 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb9914 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11eb9917 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb991a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb991d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb9920 jmp 0x11eb99a6 */
  goto L_11eb99a6;
L_11eb9925:;
  /* 11eb9925 mov dword ptr [ebp - 0x18], 0x11ee28f0 */
  w32((uint32_t)(EBP + -0x18), (0x11ee28f0u));
  /* 11eb992c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb992f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb9931 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11eb9934 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb9937 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb993a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb993d jmp 0x11eb99a6 */
  goto L_11eb99a6;
L_11eb993f:;
  /* 11eb993f mov dword ptr [ebp - 0x18], 0x11ee28f4 */
  w32((uint32_t)(EBP + -0x18), (0x11ee28f4u));
  /* 11eb9946 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb9949 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb994b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11eb994e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb9951 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9954 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb9957 jmp 0x11eb99a6 */
  goto L_11eb99a6;
L_11eb9959:;
  /* 11eb9959 mov dword ptr [ebp - 0x18], 0x11ee28f8 */
  w32((uint32_t)(EBP + -0x18), (0x11ee28f8u));
  /* 11eb9960 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb9963 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb9965 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11eb9968 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eb996b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb996e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eb9971 jmp 0x11eb99a6 */
  goto L_11eb99a6;
L_11eb9973:;
  /* 11eb9973 call 0x11eb5e70 */
  push32(0x11eb9978u); f_11eb5e70();
  /* 11eb9978 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb997b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb997e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11eb9981 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9985 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9986 call 0x11eb9b10 */
  push32(0x11eb998bu); f_11eb9b10();
  /* 11eb998b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb998e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9991 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11eb9994 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb9997 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eb9999 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11eb999c jmp 0x11eb99a6 */
  goto L_11eb99a6;
L_11eb999e:;
  /* 11eb999e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb99a1 jmp 0x11eb9ad6 */
  goto L_11eb9ad6;
L_11eb99a6:;
  /* 11eb99a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb99aa je 0x11eb99b6 */
  if (C.zf) goto L_11eb99b6;
  /* 11eb99ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb99ae call 0x11eb9e30 */
  push32(0x11eb99b3u); f_11eb9e30();
  /* 11eb99b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb99b6:;
  /* 11eb99b6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb99ba jne 0x11eb99d3 */
  if (!C.zf) goto L_11eb99d3;
  /* 11eb99bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb99c0 je 0x11eb99cc */
  if (C.zf) goto L_11eb99cc;
  /* 11eb99c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb99c4 call 0x11eb9ed0 */
  push32(0x11eb99c9u); f_11eb9ed0();
  /* 11eb99c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb99cc:;
  /* 11eb99cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb99ce jmp 0x11eb9ad6 */
  goto L_11eb9ad6;
L_11eb99d3:;
  /* 11eb99d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb99d7 jne 0x11eb99f0 */
  if (!C.zf) goto L_11eb99f0;
  /* 11eb99d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb99dd je 0x11eb99e9 */
  if (C.zf) goto L_11eb99e9;
  /* 11eb99df push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb99e1 call 0x11eb9ed0 */
  push32(0x11eb99e6u); f_11eb9ed0();
  /* 11eb99e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb99e9:;
  /* 11eb99e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11eb99eb call 0x11eb5bf0 */
  push32(0x11eb99f0u); f_11eb5bf0();
L_11eb99f0:;
  /* 11eb99f0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb99f4 je 0x11eb9a02 */
  if (C.zf) goto L_11eb9a02;
  /* 11eb99f6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb99fa je 0x11eb9a02 */
  if (C.zf) goto L_11eb9a02;
  /* 11eb99fc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9a00 jne 0x11eb9a2e */
  if (!C.zf) goto L_11eb9a2e;
L_11eb9a02:;
  /* 11eb9a02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9a05 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11eb9a08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11eb9a0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9a0e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11eb9a15 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9a19 jne 0x11eb9a2e */
  if (!C.zf) goto L_11eb9a2e;
  /* 11eb9a1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9a1e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11eb9a21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11eb9a24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9a27 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11eb9a2e:;
  /* 11eb9a2e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9a32 jne 0x11eb9a70 */
  if (!C.zf) goto L_11eb9a70;
  /* 11eb9a34 mov eax, dword ptr [0x11ee0c78] */
  EAX = (r32((uint32_t)(0x11ee0c78)));
  /* 11eb9a39 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eb9a3c jmp 0x11eb9a47 */
  goto L_11eb9a47;
L_11eb9a3e:;
  /* 11eb9a3e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9a41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9a44 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11eb9a47:;
  /* 11eb9a47 mov edx, dword ptr [0x11ee0c78] */
  EDX = (r32((uint32_t)(0x11ee0c78)));
  /* 11eb9a4d add edx, dword ptr [0x11ee0c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee0c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9a53 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9a56 jge 0x11eb9a6e */
  if ((C.sf==C.of)) goto L_11eb9a6e;
  /* 11eb9a58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9a5b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb9a5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9a61 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11eb9a64 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11eb9a6c jmp 0x11eb9a3e */
  goto L_11eb9a3e;
L_11eb9a6e:;
  /* 11eb9a6e jmp 0x11eb9a79 */
  goto L_11eb9a79;
L_11eb9a70:;
  /* 11eb9a70 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eb9a73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11eb9a79:;
  /* 11eb9a79 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9a7d je 0x11eb9a89 */
  if (C.zf) goto L_11eb9a89;
  /* 11eb9a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11eb9a81 call 0x11eb9ed0 */
  push32(0x11eb9a86u); f_11eb9ed0();
  /* 11eb9a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb9a89:;
  /* 11eb9a89 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9a8d jne 0x11eb9aa0 */
  if (!C.zf) goto L_11eb9aa0;
  /* 11eb9a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9a92 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11eb9a95 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9a96 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eb9a98 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11eb9a9bu);
  /* 11eb9a9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9a9e jmp 0x11eb9aaa */
  goto L_11eb9aaa;
L_11eb9aa0:;
  /* 11eb9aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9aa3 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9aa4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11eb9aa7u);
  /* 11eb9aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb9aaa:;
  /* 11eb9aaa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9aae je 0x11eb9abc */
  if (C.zf) goto L_11eb9abc;
  /* 11eb9ab0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9ab4 je 0x11eb9abc */
  if (C.zf) goto L_11eb9abc;
  /* 11eb9ab6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9aba jne 0x11eb9ad4 */
  if (!C.zf) goto L_11eb9ad4;
L_11eb9abc:;
  /* 11eb9abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9abf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb9ac2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11eb9ac5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9ac9 jne 0x11eb9ad4 */
  if (!C.zf) goto L_11eb9ad4;
  /* 11eb9acb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9ace mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9ad1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11eb9ad4:;
  /* 11eb9ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb9ad6:;
  /* 11eb9ad6 mov esp, ebp */
  ESP = (EBP);
  /* 11eb9ad8 pop ebp */
  EBP = (pop32());
  /* 11eb9ad9 ret  */
  ESPCHK(0x11eb98d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x11eb9b10 (91 bytes, 35 insns) */
void f_11eb9b10(void) {
  FTRACE(0x11eb9b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9b11 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9b14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9b17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb9b1a:;
  /* 11eb9b1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9b1d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11eb9b20 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9b23 je 0x11eb9b43 */
  if (C.zf) goto L_11eb9b43;
  /* 11eb9b25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9b28 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9b2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb9b2e mov ecx, dword ptr [0x11ee0c84] */
  ECX = (r32((uint32_t)(0x11ee0c84)));
  /* 11eb9b34 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb9b37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9b3a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9b3c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9b3f jae 0x11eb9b43 */
  if (!C.cf) goto L_11eb9b43;
  /* 11eb9b41 jmp 0x11eb9b1a */
  goto L_11eb9b1a;
L_11eb9b43:;
  /* 11eb9b43 mov eax, dword ptr [0x11ee0c84] */
  EAX = (r32((uint32_t)(0x11ee0c84)));
  /* 11eb9b48 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb9b4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9b4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9b50 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9b53 jae 0x11eb9b65 */
  if (!C.cf) goto L_11eb9b65;
  /* 11eb9b55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9b58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11eb9b5b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9b5e jne 0x11eb9b65 */
  if (!C.zf) goto L_11eb9b65;
  /* 11eb9b60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9b63 jmp 0x11eb9b67 */
  goto L_11eb9b67;
L_11eb9b65:;
  /* 11eb9b65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb9b67:;
  /* 11eb9b67 mov esp, ebp */
  ESP = (EBP);
  /* 11eb9b69 pop ebp */
  EBP = (pop32());
  /* 11eb9b6a ret  */
  ESPCHK(0x11eb9b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b70 @ 0x11eb9b70 (13 bytes, 6 insns) */
void f_11eb9b70(void) {
  FTRACE(0x11eb9b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9b71 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9b73 call 0x11eb5e70 */
  push32(0x11eb9b78u); f_11eb5e70();
  /* 11eb9b78 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9b7b pop ebp */
  EBP = (pop32());
  /* 11eb9b7c ret  */
  ESPCHK(0x11eb9b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b80 @ 0x11eb9b80 (13 bytes, 6 insns) */
void f_11eb9b80(void) {
  FTRACE(0x11eb9b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9b81 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9b83 call 0x11eb5e70 */
  push32(0x11eb9b88u); f_11eb5e70();
  /* 11eb9b88 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9b8b pop ebp */
  EBP = (pop32());
  /* 11eb9b8c ret  */
  ESPCHK(0x11eb9b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b90 @ 0x11eb9b90 (187 bytes, 54 insns) */
void f_11eb9b90(void) {
  FTRACE(0x11eb9b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9b91 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb9b96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eb9b9d cmp dword ptr [0x11ee2900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9ba4 jne 0x11eb9c03 */
  if (!C.zf) goto L_11eb9c03;
  /* 11eb9ba6 push 0x11edd610 */
  push32((uint32_t)(0x11edd610u));
  /* 11eb9bab call dword ptr [0x11ee53a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53a0))), 0x11eb9bb1u);
  /* 11eb9bb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb9bb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9bb8 je 0x11eb9bd7 */
  if (C.zf) goto L_11eb9bd7;
  /* 11eb9bba push 0x11ede214 */
  push32((uint32_t)(0x11ede214u));
  /* 11eb9bbf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9bc2 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9bc3 call dword ptr [0x11ee539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee539c))), 0x11eb9bc9u);
  /* 11eb9bc9 mov dword ptr [0x11ee2900], eax */
  w32((uint32_t)(0x11ee2900), (EAX));
  /* 11eb9bce cmp dword ptr [0x11ee2900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9bd5 jne 0x11eb9bdb */
  if (!C.zf) goto L_11eb9bdb;
L_11eb9bd7:;
  /* 11eb9bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9bd9 jmp 0x11eb9c47 */
  goto L_11eb9c47;
L_11eb9bdb:;
  /* 11eb9bdb push 0x11ede204 */
  push32((uint32_t)(0x11ede204u));
  /* 11eb9be0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9be4 call dword ptr [0x11ee539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee539c))), 0x11eb9beau);
  /* 11eb9bea mov dword ptr [0x11ee2904], eax */
  w32((uint32_t)(0x11ee2904), (EAX));
  /* 11eb9bef push 0x11ede1f0 */
  push32((uint32_t)(0x11ede1f0u));
  /* 11eb9bf4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9bf7 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9bf8 call dword ptr [0x11ee539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee539c))), 0x11eb9bfeu);
  /* 11eb9bfe mov dword ptr [0x11ee2908], eax */
  w32((uint32_t)(0x11ee2908), (EAX));
L_11eb9c03:;
  /* 11eb9c03 cmp dword ptr [0x11ee2904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9c0a je 0x11eb9c15 */
  if (C.zf) goto L_11eb9c15;
  /* 11eb9c0c call dword ptr [0x11ee2904] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2904))), 0x11eb9c12u);
  /* 11eb9c12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb9c15:;
  /* 11eb9c15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9c19 je 0x11eb9c31 */
  if (C.zf) goto L_11eb9c31;
  /* 11eb9c1b cmp dword ptr [0x11ee2908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9c22 je 0x11eb9c31 */
  if (C.zf) goto L_11eb9c31;
  /* 11eb9c24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9c27 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9c28 call dword ptr [0x11ee2908] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2908))), 0x11eb9c2eu);
  /* 11eb9c2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb9c31:;
  /* 11eb9c31 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11eb9c34 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9c35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9c38 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9c39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9c3c push eax */
  push32((uint32_t)(EAX));
  /* 11eb9c3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9c40 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9c41 call dword ptr [0x11ee2900] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee2900))), 0x11eb9c47u);
L_11eb9c47:;
  /* 11eb9c47 mov esp, ebp */
  ESP = (EBP);
  /* 11eb9c49 pop ebp */
  EBP = (pop32());
  /* 11eb9c4a ret  */
  ESPCHK(0x11eb9b90u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11eb9c50 (254 bytes, 109 insns) */
void f_11eb9c50(void) {
  FTRACE(0x11eb9c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9c50 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11eb9c54 push edi */
  push32((uint32_t)(EDI));
  /* 11eb9c55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11eb9c57 je 0x11eb9cd3 */
  if (C.zf) goto L_11eb9cd3;
  /* 11eb9c59 push esi */
  push32((uint32_t)(ESI));
  /* 11eb9c5a push ebx */
  push32((uint32_t)(EBX));
  /* 11eb9c5b mov ebx, ecx */
  EBX = (ECX);
  /* 11eb9c5d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11eb9c61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11eb9c67 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11eb9c6b jne 0x11eb9c74 */
  if (!C.zf) goto L_11eb9c74;
  /* 11eb9c6d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11eb9c70 jne 0x11eb9ce1 */
  if (!C.zf) goto L_11eb9ce1;
  /* 11eb9c72 jmp 0x11eb9c95 */
  goto L_11eb9c95;
L_11eb9c74:;
  /* 11eb9c74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11eb9c76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11eb9c77 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11eb9c79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11eb9c7a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11eb9c7b je 0x11eb9ca2 */
  if (C.zf) goto L_11eb9ca2;
  /* 11eb9c7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11eb9c7f je 0x11eb9caa */
  if (C.zf) goto L_11eb9caa;
  /* 11eb9c81 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11eb9c87 jne 0x11eb9c74 */
  if (!C.zf) goto L_11eb9c74;
  /* 11eb9c89 mov ebx, ecx */
  EBX = (ECX);
  /* 11eb9c8b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11eb9c8e jne 0x11eb9ce1 */
  if (!C.zf) goto L_11eb9ce1;
L_11eb9c90:;
  /* 11eb9c90 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11eb9c93 je 0x11eb9ca2 */
  if (C.zf) goto L_11eb9ca2;
L_11eb9c95:;
  /* 11eb9c95 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11eb9c97 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11eb9c98 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11eb9c9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11eb9c9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11eb9c9d je 0x11eb9cce */
  if (C.zf) goto L_11eb9cce;
  /* 11eb9c9f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11eb9ca0 jne 0x11eb9c95 */
  if (!C.zf) goto L_11eb9c95;
L_11eb9ca2:;
  /* 11eb9ca2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11eb9ca6 pop ebx */
  EBX = (pop32());
  /* 11eb9ca7 pop esi */
  ESI = (pop32());
  /* 11eb9ca8 pop edi */
  EDI = (pop32());
  /* 11eb9ca9 ret  */
  ESPCHK(0x11eb9c50u, _esp0);
  ESP += 4; return;
L_11eb9caa:;
  /* 11eb9caa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11eb9cb0 je 0x11eb9cc4 */
  if (C.zf) goto L_11eb9cc4;
L_11eb9cb2:;
  /* 11eb9cb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11eb9cb4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11eb9cb5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11eb9cb6 je 0x11eb9d46 */
  if (C.zf) goto L_11eb9d46;
  /* 11eb9cbc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11eb9cc2 jne 0x11eb9cb2 */
  if (!C.zf) goto L_11eb9cb2;
L_11eb9cc4:;
  /* 11eb9cc4 mov ebx, ecx */
  EBX = (ECX);
  /* 11eb9cc6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11eb9cc9 jne 0x11eb9d37 */
  if (!C.zf) goto L_11eb9d37;
L_11eb9ccb:;
  /* 11eb9ccb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11eb9ccd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11eb9cce:;
  /* 11eb9cce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11eb9ccf jne 0x11eb9ccb */
  if (!C.zf) goto L_11eb9ccb;
  /* 11eb9cd1 pop ebx */
  EBX = (pop32());
  /* 11eb9cd2 pop esi */
  ESI = (pop32());
L_11eb9cd3:;
  /* 11eb9cd3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11eb9cd7 pop edi */
  EDI = (pop32());
  /* 11eb9cd8 ret  */
  ESPCHK(0x11eb9c50u, _esp0);
  ESP += 4; return;
L_11eb9cd9:;
  /* 11eb9cd9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11eb9cdb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9cde dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11eb9cdf je 0x11eb9c90 */
  if (C.zf) goto L_11eb9c90;
L_11eb9ce1:;
  /* 11eb9ce1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11eb9ce6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11eb9ce8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9cea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9ced xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9cef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11eb9cf1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9cf4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11eb9cf9 je 0x11eb9cd9 */
  if (C.zf) goto L_11eb9cd9;
  /* 11eb9cfb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11eb9cfd je 0x11eb9d2b */
  if (C.zf) goto L_11eb9d2b;
  /* 11eb9cff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11eb9d01 je 0x11eb9d21 */
  if (C.zf) goto L_11eb9d21;
  /* 11eb9d03 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11eb9d09 je 0x11eb9d17 */
  if (C.zf) goto L_11eb9d17;
  /* 11eb9d0b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11eb9d11 jne 0x11eb9cd9 */
  if (!C.zf) goto L_11eb9cd9;
  /* 11eb9d13 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11eb9d15 jmp 0x11eb9d2f */
  goto L_11eb9d2f;
L_11eb9d17:;
  /* 11eb9d17 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb9d1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11eb9d1f jmp 0x11eb9d2f */
  goto L_11eb9d2f;
L_11eb9d21:;
  /* 11eb9d21 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11eb9d27 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11eb9d29 jmp 0x11eb9d2f */
  goto L_11eb9d2f;
L_11eb9d2b:;
  /* 11eb9d2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11eb9d2d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11eb9d2f:;
  /* 11eb9d2f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9d32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9d34 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11eb9d35 je 0x11eb9d41 */
  if (C.zf) goto L_11eb9d41;
L_11eb9d37:;
  /* 11eb9d37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11eb9d39:;
  /* 11eb9d39 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11eb9d3b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9d3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11eb9d3f jne 0x11eb9d39 */
  if (!C.zf) goto L_11eb9d39;
L_11eb9d41:;
  /* 11eb9d41 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11eb9d44 jne 0x11eb9ccb */
  if (!C.zf) goto L_11eb9ccb;
L_11eb9d46:;
  /* 11eb9d46 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11eb9d4a pop ebx */
  EBX = (pop32());
  /* 11eb9d4b pop esi */
  ESI = (pop32());
  /* 11eb9d4c pop edi */
  EDI = (pop32());
  /* 11eb9d4d ret  */
  ESPCHK(0x11eb9c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d50 @ 0x11eb9d50 (55 bytes, 16 insns) */
void f_11eb9d50(void) {
  FTRACE(0x11eb9d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9d51 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9d53 mov eax, dword ptr [0x11ee0b84] */
  EAX = (r32((uint32_t)(0x11ee0b84)));
  /* 11eb9d58 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9d59 call dword ptr [0x11ee5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5350))), 0x11eb9d5fu);
  /* 11eb9d5f mov ecx, dword ptr [0x11ee0b74] */
  ECX = (r32((uint32_t)(0x11ee0b74)));
  /* 11eb9d65 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9d66 call dword ptr [0x11ee5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5350))), 0x11eb9d6cu);
  /* 11eb9d6c mov edx, dword ptr [0x11ee0b64] */
  EDX = (r32((uint32_t)(0x11ee0b64)));
  /* 11eb9d72 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9d73 call dword ptr [0x11ee5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5350))), 0x11eb9d79u);
  /* 11eb9d79 mov eax, dword ptr [0x11ee0b44] */
  EAX = (r32((uint32_t)(0x11ee0b44)));
  /* 11eb9d7e push eax */
  push32((uint32_t)(EAX));
  /* 11eb9d7f call dword ptr [0x11ee5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5350))), 0x11eb9d85u);
  /* 11eb9d85 pop ebp */
  EBP = (pop32());
  /* 11eb9d86 ret  */
  ESPCHK(0x11eb9d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d90 @ 0x11eb9d90 (159 bytes, 47 insns) */
void f_11eb9d90(void) {
  FTRACE(0x11eb9d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9d91 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9d94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eb9d9b jmp 0x11eb9da6 */
  goto L_11eb9da6;
L_11eb9d9d:;
  /* 11eb9d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9da0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9da3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eb9da6:;
  /* 11eb9da6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9daa jge 0x11eb9df9 */
  if ((C.sf==C.of)) goto L_11eb9df9;
  /* 11eb9dac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9daf cmp dword ptr [ecx*4 + 0x11ee0b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11ee0b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9db7 je 0x11eb9df7 */
  if (C.zf) goto L_11eb9df7;
  /* 11eb9db9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9dbd je 0x11eb9df7 */
  if (C.zf) goto L_11eb9df7;
  /* 11eb9dbf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9dc3 je 0x11eb9df7 */
  if (C.zf) goto L_11eb9df7;
  /* 11eb9dc5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9dc9 je 0x11eb9df7 */
  if (C.zf) goto L_11eb9df7;
  /* 11eb9dcb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9dcf je 0x11eb9df7 */
  if (C.zf) goto L_11eb9df7;
  /* 11eb9dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9dd4 mov eax, dword ptr [edx*4 + 0x11ee0b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ee0b40)));
  /* 11eb9ddb push eax */
  push32((uint32_t)(EAX));
  /* 11eb9ddc call dword ptr [0x11ee53e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e0))), 0x11eb9de2u);
  /* 11eb9de2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb9de4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9de7 mov edx, dword ptr [ecx*4 + 0x11ee0b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ee0b40)));
  /* 11eb9dee push edx */
  push32((uint32_t)(EDX));
  /* 11eb9def call 0x11eb6ec0 */
  push32(0x11eb9df4u); f_11eb6ec0();
  /* 11eb9df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb9df7:;
  /* 11eb9df7 jmp 0x11eb9d9d */
  goto L_11eb9d9d;
L_11eb9df9:;
  /* 11eb9df9 mov eax, dword ptr [0x11ee0b64] */
  EAX = (r32((uint32_t)(0x11ee0b64)));
  /* 11eb9dfe push eax */
  push32((uint32_t)(EAX));
  /* 11eb9dff call dword ptr [0x11ee53e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e0))), 0x11eb9e05u);
  /* 11eb9e05 mov ecx, dword ptr [0x11ee0b74] */
  ECX = (r32((uint32_t)(0x11ee0b74)));
  /* 11eb9e0b push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9e0c call dword ptr [0x11ee53e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e0))), 0x11eb9e12u);
  /* 11eb9e12 mov edx, dword ptr [0x11ee0b84] */
  EDX = (r32((uint32_t)(0x11ee0b84)));
  /* 11eb9e18 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9e19 call dword ptr [0x11ee53e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e0))), 0x11eb9e1fu);
  /* 11eb9e1f mov eax, dword ptr [0x11ee0b44] */
  EAX = (r32((uint32_t)(0x11ee0b44)));
  /* 11eb9e24 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9e25 call dword ptr [0x11ee53e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53e0))), 0x11eb9e2bu);
  /* 11eb9e2b mov esp, ebp */
  ESP = (EBP);
  /* 11eb9e2d pop ebp */
  EBP = (pop32());
  /* 11eb9e2e ret  */
  ESPCHK(0x11eb9d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e30 @ 0x11eb9e30 (151 bytes, 46 insns) */
void f_11eb9e30(void) {
  FTRACE(0x11eb9e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9e31 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9e37 cmp dword ptr [eax*4 + 0x11ee0b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11ee0b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9e3f jne 0x11eb9eb2 */
  if (!C.zf) goto L_11eb9eb2;
  /* 11eb9e41 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11eb9e46 push 0x11ede220 */
  push32((uint32_t)(0x11ede220u));
  /* 11eb9e4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb9e4d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11eb9e4f call 0x11eb6430 */
  push32(0x11eb9e54u); f_11eb6430();
  /* 11eb9e54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9e57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb9e5a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9e5e jne 0x11eb9e6a */
  if (!C.zf) goto L_11eb9e6a;
  /* 11eb9e60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11eb9e62 call 0x11eb53a0 */
  push32(0x11eb9e67u); f_11eb53a0();
  /* 11eb9e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb9e6a:;
  /* 11eb9e6a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11eb9e6c call 0x11eb9e30 */
  push32(0x11eb9e71u); f_11eb9e30();
  /* 11eb9e71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9e74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9e77 cmp dword ptr [ecx*4 + 0x11ee0b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11ee0b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9e7f jne 0x11eb9e9a */
  if (!C.zf) goto L_11eb9e9a;
  /* 11eb9e81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9e84 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9e85 call dword ptr [0x11ee5350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5350))), 0x11eb9e8bu);
  /* 11eb9e8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9e8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9e91 mov dword ptr [eax*4 + 0x11ee0b40], ecx */
  w32((uint32_t)(EAX*4 + 0x11ee0b40), (ECX));
  /* 11eb9e98 jmp 0x11eb9ea8 */
  goto L_11eb9ea8;
L_11eb9e9a:;
  /* 11eb9e9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11eb9e9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eb9e9f push edx */
  push32((uint32_t)(EDX));
  /* 11eb9ea0 call 0x11eb6ec0 */
  push32(0x11eb9ea5u); f_11eb6ec0();
  /* 11eb9ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb9ea8:;
  /* 11eb9ea8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11eb9eaa call 0x11eb9ed0 */
  push32(0x11eb9eafu); f_11eb9ed0();
  /* 11eb9eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eb9eb2:;
  /* 11eb9eb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9eb5 mov ecx, dword ptr [eax*4 + 0x11ee0b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ee0b40)));
  /* 11eb9ebc push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9ebd call dword ptr [0x11ee534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee534c))), 0x11eb9ec3u);
  /* 11eb9ec3 mov esp, ebp */
  ESP = (EBP);
  /* 11eb9ec5 pop ebp */
  EBP = (pop32());
  /* 11eb9ec6 ret  */
  ESPCHK(0x11eb9e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ed0 @ 0x11eb9ed0 (22 bytes, 8 insns) */
void f_11eb9ed0(void) {
  FTRACE(0x11eb9ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9ed3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9ed6 mov ecx, dword ptr [eax*4 + 0x11ee0b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ee0b40)));
  /* 11eb9edd push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9ede call dword ptr [0x11ee5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5348))), 0x11eb9ee4u);
  /* 11eb9ee4 pop ebp */
  EBP = (pop32());
  /* 11eb9ee5 ret  */
  ESPCHK(0x11eb9ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ef0 @ 0x11eb9ef0 (26 bytes, 10 insns) */
void f_11eb9ef0(void) {
  FTRACE(0x11eb9ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9ef3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9ef6 push eax */
  push32((uint32_t)(EAX));
  /* 11eb9ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eb9ef9 call dword ptr [0x11ee5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5344))), 0x11eb9effu);
  /* 11eb9eff push 0xff */
  push32((uint32_t)(0xffu));
  /* 11eb9f04 call dword ptr [0x11ee53ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53ac))), 0x11eb9f0au);
  /* 11eb9f0a pop ebp */
  EBP = (pop32());
  /* 11eb9f0b ret  */
  ESPCHK(0x11eb9ef0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11eb9f10 (446 bytes, 130 insns) */
void f_11eb9f10(void) {
  FTRACE(0x11eb9f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eb9f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11eb9f11 mov ebp, esp */
  EBP = (ESP);
  /* 11eb9f13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eb9f16 call 0x11eb5e70 */
  push32(0x11eb9f1bu); f_11eb5e70();
  /* 11eb9f1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eb9f1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9f21 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11eb9f24 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eb9f28 push edx */
  push32((uint32_t)(EDX));
  /* 11eb9f29 call 0x11eba0d0 */
  push32(0x11eb9f2eu); f_11eba0d0();
  /* 11eb9f2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9f31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eb9f34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9f38 je 0x11eb9f43 */
  if (C.zf) goto L_11eb9f43;
  /* 11eb9f3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9f3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9f41 jne 0x11eb9f52 */
  if (!C.zf) goto L_11eb9f52;
L_11eb9f43:;
  /* 11eb9f43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9f46 push ecx */
  push32((uint32_t)(ECX));
  /* 11eb9f47 call dword ptr [0x11ee5340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5340))), 0x11eb9f4du);
  /* 11eb9f4d jmp 0x11eba0ca */
  goto L_11eba0ca;
L_11eb9f52:;
  /* 11eb9f52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9f55 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9f59 jne 0x11eb9f6f */
  if (!C.zf) goto L_11eb9f6f;
  /* 11eb9f5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9f5e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11eb9f65 mov eax, 1 */
  EAX = (0x1u);
  /* 11eb9f6a jmp 0x11eba0ca */
  goto L_11eba0ca;
L_11eb9f6f:;
  /* 11eb9f6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9f72 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9f76 jne 0x11eb9f80 */
  if (!C.zf) goto L_11eb9f80;
  /* 11eb9f78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11eb9f7b jmp 0x11eba0ca */
  goto L_11eba0ca;
L_11eb9f80:;
  /* 11eb9f80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9f83 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11eb9f86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eb9f89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9f8c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11eb9f8f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11eb9f92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9f95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eb9f98 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11eb9f9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9f9e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9fa2 jne 0x11eba0a7 */
  if (!C.zf) goto L_11eba0a7;
  /* 11eb9fa8 mov eax, dword ptr [0x11ee0c78] */
  EAX = (r32((uint32_t)(0x11ee0c78)));
  /* 11eb9fad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11eb9fb0 jmp 0x11eb9fbb */
  goto L_11eb9fbb;
L_11eb9fb2:;
  /* 11eb9fb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb9fb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9fb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11eb9fbb:;
  /* 11eb9fbb mov edx, dword ptr [0x11ee0c78] */
  EDX = (r32((uint32_t)(0x11ee0c78)));
  /* 11eb9fc1 add edx, dword ptr [0x11ee0c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ee0c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eb9fc7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9fca jge 0x11eb9fe2 */
  if ((C.sf==C.of)) goto L_11eb9fe2;
  /* 11eb9fcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eb9fcf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eb9fd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9fd5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11eb9fd8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11eb9fe0 jmp 0x11eb9fb2 */
  goto L_11eb9fb2;
L_11eb9fe2:;
  /* 11eb9fe2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9fe5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11eb9fe8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11eb9feb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eb9fee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eb9ff4 jne 0x11eba005 */
  if (!C.zf) goto L_11eba005;
  /* 11eb9ff6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eb9ff9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11eba000 jmp 0x11eba08d */
  goto L_11eba08d;
L_11eba005:;
  /* 11eba005 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba008 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba00e jne 0x11eba01c */
  if (!C.zf) goto L_11eba01c;
  /* 11eba010 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba013 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11eba01a jmp 0x11eba08d */
  goto L_11eba08d;
L_11eba01c:;
  /* 11eba01c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba01f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba025 jne 0x11eba033 */
  if (!C.zf) goto L_11eba033;
  /* 11eba027 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba02a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11eba031 jmp 0x11eba08d */
  goto L_11eba08d;
L_11eba033:;
  /* 11eba033 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba036 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba03c jne 0x11eba04a */
  if (!C.zf) goto L_11eba04a;
  /* 11eba03e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba041 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11eba048 jmp 0x11eba08d */
  goto L_11eba08d;
L_11eba04a:;
  /* 11eba04a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba04d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba053 jne 0x11eba061 */
  if (!C.zf) goto L_11eba061;
  /* 11eba055 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba058 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11eba05f jmp 0x11eba08d */
  goto L_11eba08d;
L_11eba061:;
  /* 11eba061 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba064 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba06a jne 0x11eba078 */
  if (!C.zf) goto L_11eba078;
  /* 11eba06c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba06f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11eba076 jmp 0x11eba08d */
  goto L_11eba08d;
L_11eba078:;
  /* 11eba078 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba07b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba081 jne 0x11eba08d */
  if (!C.zf) goto L_11eba08d;
  /* 11eba083 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba086 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11eba08d:;
  /* 11eba08d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba090 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11eba093 push edx */
  push32((uint32_t)(EDX));
  /* 11eba094 push 8 */
  push32((uint32_t)(0x8u));
  /* 11eba096 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11eba099u);
  /* 11eba099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba09c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba09f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eba0a2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11eba0a5 jmp 0x11eba0be */
  goto L_11eba0be;
L_11eba0a7:;
  /* 11eba0a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba0aa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11eba0b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba0b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11eba0b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba0b8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11eba0bbu);
  /* 11eba0bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eba0be:;
  /* 11eba0be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba0c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11eba0c4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11eba0c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11eba0ca:;
  /* 11eba0ca mov esp, ebp */
  ESP = (EBP);
  /* 11eba0cc pop ebp */
  EBP = (pop32());
  /* 11eba0cd ret  */
  ESPCHK(0x11eb9f10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0d0 @ 0x11eba0d0 (89 bytes, 35 insns) */
void f_11eba0d0(void) {
  FTRACE(0x11eba0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba0d1 mov ebp, esp */
  EBP = (ESP);
  /* 11eba0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba0d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba0d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11eba0da:;
  /* 11eba0da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba0dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11eba0df cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba0e2 je 0x11eba102 */
  if (C.zf) goto L_11eba102;
  /* 11eba0e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba0e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba0ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eba0ed mov ecx, dword ptr [0x11ee0c84] */
  ECX = (r32((uint32_t)(0x11ee0c84)));
  /* 11eba0f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eba0f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba0f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba0fb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba0fe jae 0x11eba102 */
  if (!C.cf) goto L_11eba102;
  /* 11eba100 jmp 0x11eba0da */
  goto L_11eba0da;
L_11eba102:;
  /* 11eba102 mov eax, dword ptr [0x11ee0c84] */
  EAX = (r32((uint32_t)(0x11ee0c84)));
  /* 11eba107 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11eba10a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba10d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba10f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba112 jae 0x11eba11e */
  if (!C.cf) goto L_11eba11e;
  /* 11eba114 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba117 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11eba119 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba11c je 0x11eba122 */
  if (C.zf) goto L_11eba122;
L_11eba11e:;
  /* 11eba11e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba120 jmp 0x11eba125 */
  goto L_11eba125;
L_11eba122:;
  /* 11eba122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11eba125:;
  /* 11eba125 mov esp, ebp */
  ESP = (EBP);
  /* 11eba127 pop ebp */
  EBP = (pop32());
  /* 11eba128 ret  */
  ESPCHK(0x11eba0d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11eba130 (48 bytes, 17 insns) */
void f_11eba130(void) {
  FTRACE(0x11eba130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba130 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba131 mov ebp, esp */
  EBP = (ESP);
  /* 11eba133 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba134 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba136 call 0x11eb9e30 */
  push32(0x11eba13bu); f_11eb9e30();
  /* 11eba13b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba13e mov eax, dword ptr [0x11ee2974] */
  EAX = (r32((uint32_t)(0x11ee2974)));
  /* 11eba143 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eba146 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba149 mov dword ptr [0x11ee2974], ecx */
  w32((uint32_t)(0x11ee2974), (ECX));
  /* 11eba14f push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba151 call 0x11eb9ed0 */
  push32(0x11eba156u); f_11eb9ed0();
  /* 11eba156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba159 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba15c mov esp, ebp */
  ESP = (EBP);
  /* 11eba15e pop ebp */
  EBP = (pop32());
  /* 11eba15f ret  */
  ESPCHK(0x11eba130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a160 @ 0x11eba160 (10 bytes, 5 insns) */
void f_11eba160(void) {
  FTRACE(0x11eba160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba160 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba161 mov ebp, esp */
  EBP = (ESP);
  /* 11eba163 mov eax, dword ptr [0x11ee2974] */
  EAX = (r32((uint32_t)(0x11ee2974)));
  /* 11eba168 pop ebp */
  EBP = (pop32());
  /* 11eba169 ret  */
  ESPCHK(0x11eba160u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11eba170 (45 bytes, 19 insns) */
void f_11eba170(void) {
  FTRACE(0x11eba170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba170 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba171 mov ebp, esp */
  EBP = (ESP);
  /* 11eba173 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba174 mov eax, dword ptr [0x11ee2974] */
  EAX = (r32((uint32_t)(0x11ee2974)));
  /* 11eba179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eba17c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba180 je 0x11eba190 */
  if (C.zf) goto L_11eba190;
  /* 11eba182 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba185 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba186 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11eba189u);
  /* 11eba189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba18c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eba18e jne 0x11eba194 */
  if (!C.zf) goto L_11eba194;
L_11eba190:;
  /* 11eba190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba192 jmp 0x11eba199 */
  goto L_11eba199;
L_11eba194:;
  /* 11eba194 mov eax, 1 */
  EAX = (0x1u);
L_11eba199:;
  /* 11eba199 mov esp, ebp */
  ESP = (EBP);
  /* 11eba19b pop ebp */
  EBP = (pop32());
  /* 11eba19c ret  */
  ESPCHK(0x11eba170u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11eba1a0 (88 bytes, 40 insns) */
void f_11eba1a0(void) {
  FTRACE(0x11eba1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba1a0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11eba1a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11eba1a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eba1aa je 0x11eba1f3 */
  if (C.zf) goto L_11eba1f3;
  /* 11eba1ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba1ae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11eba1b2 push edi */
  push32((uint32_t)(EDI));
  /* 11eba1b3 mov edi, ecx */
  EDI = (ECX);
  /* 11eba1b5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba1b8 jb 0x11eba1e7 */
  if (C.cf) goto L_11eba1e7;
  /* 11eba1ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11eba1bc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11eba1bf je 0x11eba1c9 */
  if (C.zf) goto L_11eba1c9;
  /* 11eba1c1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11eba1c3:;
  /* 11eba1c3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11eba1c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11eba1c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11eba1c7 jne 0x11eba1c3 */
  if (!C.zf) goto L_11eba1c3;
L_11eba1c9:;
  /* 11eba1c9 mov ecx, eax */
  ECX = (EAX);
  /* 11eba1cb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11eba1ce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba1d0 mov ecx, eax */
  ECX = (EAX);
  /* 11eba1d2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11eba1d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba1d7 mov ecx, edx */
  ECX = (EDX);
  /* 11eba1d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11eba1dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11eba1df je 0x11eba1e7 */
  if (C.zf) goto L_11eba1e7;
  /* 11eba1e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11eba1e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11eba1e5 je 0x11eba1ed */
  if (C.zf) goto L_11eba1ed;
L_11eba1e7:;
  /* 11eba1e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11eba1e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11eba1ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11eba1eb jne 0x11eba1e7 */
  if (!C.zf) goto L_11eba1e7;
L_11eba1ed:;
  /* 11eba1ed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11eba1f1 pop edi */
  EDI = (pop32());
  /* 11eba1f2 ret  */
  ESPCHK(0x11eba1a0u, _esp0);
  ESP += 4; return;
L_11eba1f3:;
  /* 11eba1f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11eba1f7 ret  */
  ESPCHK(0x11eba1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a200 @ 0x11eba200 (23 bytes, 10 insns) */
void f_11eba200(void) {
  FTRACE(0x11eba200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba200 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba201 mov ebp, esp */
  EBP = (ESP);
  /* 11eba203 mov eax, dword ptr [0x11ee2970] */
  EAX = (r32((uint32_t)(0x11ee2970)));
  /* 11eba208 push eax */
  push32((uint32_t)(EAX));
  /* 11eba209 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba20c push ecx */
  push32((uint32_t)(ECX));
  /* 11eba20d call 0x11eba220 */
  push32(0x11eba212u); f_11eba220();
  /* 11eba212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba215 pop ebp */
  EBP = (pop32());
  /* 11eba216 ret  */
  ESPCHK(0x11eba200u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11eba220 (87 bytes, 34 insns) */
void f_11eba220(void) {
  FTRACE(0x11eba220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba220 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba221 mov ebp, esp */
  EBP = (ESP);
  /* 11eba223 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba224 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba228 jbe 0x11eba22e */
  if ((C.cf||C.zf)) goto L_11eba22e;
  /* 11eba22a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba22c jmp 0x11eba273 */
  goto L_11eba273;
L_11eba22e:;
  /* 11eba22e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba232 ja 0x11eba245 */
  if ((!C.cf&&!C.zf)) goto L_11eba245;
  /* 11eba234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba237 push eax */
  push32((uint32_t)(EAX));
  /* 11eba238 call 0x11eba280 */
  push32(0x11eba23du); f_11eba280();
  /* 11eba23d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba240 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eba243 jmp 0x11eba24c */
  goto L_11eba24c;
L_11eba245:;
  /* 11eba245 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11eba24c:;
  /* 11eba24c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba250 jne 0x11eba258 */
  if (!C.zf) goto L_11eba258;
  /* 11eba252 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba256 jne 0x11eba25d */
  if (!C.zf) goto L_11eba25d;
L_11eba258:;
  /* 11eba258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba25b jmp 0x11eba273 */
  goto L_11eba273;
L_11eba25d:;
  /* 11eba25d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba260 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba261 call 0x11eba170 */
  push32(0x11eba266u); f_11eba170();
  /* 11eba266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eba26b jne 0x11eba271 */
  if (!C.zf) goto L_11eba271;
  /* 11eba26d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba26f jmp 0x11eba273 */
  goto L_11eba273;
L_11eba271:;
  /* 11eba271 jmp 0x11eba22e */
  goto L_11eba22e;
L_11eba273:;
  /* 11eba273 mov esp, ebp */
  ESP = (EBP);
  /* 11eba275 pop ebp */
  EBP = (pop32());
  /* 11eba276 ret  */
  ESPCHK(0x11eba220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a280 @ 0x11eba280 (109 bytes, 37 insns) */
void f_11eba280(void) {
  FTRACE(0x11eba280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba280 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba281 mov ebp, esp */
  EBP = (ESP);
  /* 11eba283 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba287 cmp eax, dword ptr [0x11ee0c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee0c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba28d ja 0x11eba2bd */
  if ((!C.cf&&!C.zf)) goto L_11eba2bd;
  /* 11eba28f push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba291 call 0x11eb9e30 */
  push32(0x11eba296u); f_11eb9e30();
  /* 11eba296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba29c push ecx */
  push32((uint32_t)(ECX));
  /* 11eba29d call 0x11ebadc0 */
  push32(0x11eba2a2u); f_11ebadc0();
  /* 11eba2a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba2a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eba2a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba2aa call 0x11eb9ed0 */
  push32(0x11eba2afu); f_11eb9ed0();
  /* 11eba2af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba2b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba2b6 je 0x11eba2bd */
  if (C.zf) goto L_11eba2bd;
  /* 11eba2b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba2bb jmp 0x11eba2e9 */
  goto L_11eba2e9;
L_11eba2bd:;
  /* 11eba2bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba2c1 jne 0x11eba2ca */
  if (!C.zf) goto L_11eba2ca;
  /* 11eba2c3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11eba2ca:;
  /* 11eba2ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba2cd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba2d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11eba2d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11eba2d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba2d9 push eax */
  push32((uint32_t)(EAX));
  /* 11eba2da push 0 */
  push32((uint32_t)(0x0u));
  /* 11eba2dc mov ecx, dword ptr [0x11ee412c] */
  ECX = (r32((uint32_t)(0x11ee412c)));
  /* 11eba2e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba2e3 call dword ptr [0x11ee533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee533c))), 0x11eba2e9u);
L_11eba2e9:;
  /* 11eba2e9 mov esp, ebp */
  ESP = (EBP);
  /* 11eba2eb pop ebp */
  EBP = (pop32());
  /* 11eba2ec ret  */
  ESPCHK(0x11eba280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2f0 @ 0x11eba2f0 (10 bytes, 5 insns) */
void f_11eba2f0(void) {
  FTRACE(0x11eba2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11eba2f3 mov eax, 1 */
  EAX = (0x1u);
  /* 11eba2f8 pop ebp */
  EBP = (pop32());
  /* 11eba2f9 ret  */
  ESPCHK(0x11eba2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x11eba300 (173 bytes, 59 insns) */
void f_11eba300(void) {
  FTRACE(0x11eba300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba300 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba301 mov ebp, esp */
  EBP = (ESP);
  /* 11eba303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba306 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba30a jbe 0x11eba313 */
  if ((C.cf||C.zf)) goto L_11eba313;
  /* 11eba30c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba30e jmp 0x11eba3a9 */
  goto L_11eba3a9;
L_11eba313:;
  /* 11eba313 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba315 call 0x11eb9e30 */
  push32(0x11eba31au); f_11eb9e30();
  /* 11eba31a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba31d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba320 push eax */
  push32((uint32_t)(EAX));
  /* 11eba321 call 0x11eba730 */
  push32(0x11eba326u); f_11eba730();
  /* 11eba326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba329 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eba32c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba330 je 0x11eba371 */
  if (C.zf) goto L_11eba371;
  /* 11eba332 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11eba339 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba33c cmp ecx, dword ptr [0x11ee0c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ee0c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba342 ja 0x11eba362 */
  if ((!C.cf&&!C.zf)) goto L_11eba362;
  /* 11eba344 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba347 push edx */
  push32((uint32_t)(EDX));
  /* 11eba348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba34b push eax */
  push32((uint32_t)(EAX));
  /* 11eba34c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba34f push ecx */
  push32((uint32_t)(ECX));
  /* 11eba350 call 0x11ebb600 */
  push32(0x11eba355u); f_11ebb600();
  /* 11eba355 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eba35a je 0x11eba362 */
  if (C.zf) goto L_11eba362;
  /* 11eba35c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba35f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11eba362:;
  /* 11eba362 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba364 call 0x11eb9ed0 */
  push32(0x11eba369u); f_11eb9ed0();
  /* 11eba369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba36c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba36f jmp 0x11eba3a9 */
  goto L_11eba3a9;
L_11eba371:;
  /* 11eba371 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba373 call 0x11eb9ed0 */
  push32(0x11eba378u); f_11eb9ed0();
  /* 11eba378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba37b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba37f jne 0x11eba388 */
  if (!C.zf) goto L_11eba388;
  /* 11eba381 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11eba388:;
  /* 11eba388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba38b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba38e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11eba390 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11eba393 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba396 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba39a push edx */
  push32((uint32_t)(EDX));
  /* 11eba39b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11eba39d mov eax, dword ptr [0x11ee412c] */
  EAX = (r32((uint32_t)(0x11ee412c)));
  /* 11eba3a2 push eax */
  push32((uint32_t)(EAX));
  /* 11eba3a3 call dword ptr [0x11ee5338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5338))), 0x11eba3a9u);
L_11eba3a9:;
  /* 11eba3a9 mov esp, ebp */
  ESP = (EBP);
  /* 11eba3ab pop ebp */
  EBP = (pop32());
  /* 11eba3ac ret  */
  ESPCHK(0x11eba300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b0 @ 0x11eba3b0 (490 bytes, 165 insns) */
void f_11eba3b0(void) {
  FTRACE(0x11eba3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba3b1 mov ebp, esp */
  EBP = (ESP);
  /* 11eba3b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba3b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba3ba jne 0x11eba3cd */
  if (!C.zf) goto L_11eba3cd;
  /* 11eba3bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba3bf push eax */
  push32((uint32_t)(EAX));
  /* 11eba3c0 call 0x11eba200 */
  push32(0x11eba3c5u); f_11eba200();
  /* 11eba3c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba3c8 jmp 0x11eba596 */
  goto L_11eba596;
L_11eba3cd:;
  /* 11eba3cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba3d1 jne 0x11eba3e6 */
  if (!C.zf) goto L_11eba3e6;
  /* 11eba3d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba3d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba3d7 call 0x11eba5a0 */
  push32(0x11eba3dcu); f_11eba5a0();
  /* 11eba3dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba3df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba3e1 jmp 0x11eba596 */
  goto L_11eba596;
L_11eba3e6:;
  /* 11eba3e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11eba3ed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba3f1 ja 0x11eba569 */
  if ((!C.cf&&!C.zf)) goto L_11eba569;
  /* 11eba3f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba3f9 call 0x11eb9e30 */
  push32(0x11eba3feu); f_11eb9e30();
  /* 11eba3fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba404 push edx */
  push32((uint32_t)(EDX));
  /* 11eba405 call 0x11eba730 */
  push32(0x11eba40au); f_11eba730();
  /* 11eba40a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba40d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11eba410 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba414 je 0x11eba52c */
  if (C.zf) goto L_11eba52c;
  /* 11eba41a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba41d cmp eax, dword ptr [0x11ee0c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ee0c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba423 ja 0x11eba4a0 */
  if ((!C.cf&&!C.zf)) goto L_11eba4a0;
  /* 11eba425 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba428 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba429 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba42c push edx */
  push32((uint32_t)(EDX));
  /* 11eba42d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eba430 push eax */
  push32((uint32_t)(EAX));
  /* 11eba431 call 0x11ebb600 */
  push32(0x11eba436u); f_11ebb600();
  /* 11eba436 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eba43b je 0x11eba445 */
  if (C.zf) goto L_11eba445;
  /* 11eba43d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba440 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11eba443 jmp 0x11eba4a0 */
  goto L_11eba4a0;
L_11eba445:;
  /* 11eba445 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba448 push edx */
  push32((uint32_t)(EDX));
  /* 11eba449 call 0x11ebadc0 */
  push32(0x11eba44eu); f_11ebadc0();
  /* 11eba44e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba451 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eba454 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba458 je 0x11eba4a0 */
  if (C.zf) goto L_11eba4a0;
  /* 11eba45a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba45d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11eba460 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba463 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11eba466 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba469 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba46c jae 0x11eba476 */
  if (!C.cf) goto L_11eba476;
  /* 11eba46e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba471 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11eba474 jmp 0x11eba47c */
  goto L_11eba47c;
L_11eba476:;
  /* 11eba476 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba479 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11eba47c:;
  /* 11eba47c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11eba47f push edx */
  push32((uint32_t)(EDX));
  /* 11eba480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba483 push eax */
  push32((uint32_t)(EAX));
  /* 11eba484 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba487 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba488 call 0x11ebcd10 */
  push32(0x11eba48du); f_11ebcd10();
  /* 11eba48d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba493 push edx */
  push32((uint32_t)(EDX));
  /* 11eba494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eba497 push eax */
  push32((uint32_t)(EAX));
  /* 11eba498 call 0x11eba7f0 */
  push32(0x11eba49du); f_11eba7f0();
  /* 11eba49d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eba4a0:;
  /* 11eba4a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba4a4 jne 0x11eba520 */
  if (!C.zf) goto L_11eba520;
  /* 11eba4a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba4aa jne 0x11eba4b3 */
  if (!C.zf) goto L_11eba4b3;
  /* 11eba4ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11eba4b3:;
  /* 11eba4b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba4b6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba4b9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11eba4bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11eba4bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba4c2 push edx */
  push32((uint32_t)(EDX));
  /* 11eba4c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eba4c5 mov eax, dword ptr [0x11ee412c] */
  EAX = (r32((uint32_t)(0x11ee412c)));
  /* 11eba4ca push eax */
  push32((uint32_t)(EAX));
  /* 11eba4cb call dword ptr [0x11ee533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee533c))), 0x11eba4d1u);
  /* 11eba4d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11eba4d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba4d8 je 0x11eba520 */
  if (C.zf) goto L_11eba520;
  /* 11eba4da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba4dd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11eba4e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11eba4e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11eba4e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba4e9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba4ec jae 0x11eba4f6 */
  if (!C.cf) goto L_11eba4f6;
  /* 11eba4ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba4f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11eba4f4 jmp 0x11eba4fc */
  goto L_11eba4fc;
L_11eba4f6:;
  /* 11eba4f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba4f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11eba4fc:;
  /* 11eba4fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11eba4ff push eax */
  push32((uint32_t)(EAX));
  /* 11eba500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba503 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba504 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba507 push edx */
  push32((uint32_t)(EDX));
  /* 11eba508 call 0x11ebcd10 */
  push32(0x11eba50du); f_11ebcd10();
  /* 11eba50d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba513 push eax */
  push32((uint32_t)(EAX));
  /* 11eba514 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11eba517 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba518 call 0x11eba7f0 */
  push32(0x11eba51du); f_11eba7f0();
  /* 11eba51d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11eba520:;
  /* 11eba520 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba522 call 0x11eb9ed0 */
  push32(0x11eba527u); f_11eb9ed0();
  /* 11eba527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba52a jmp 0x11eba569 */
  goto L_11eba569;
L_11eba52c:;
  /* 11eba52c push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba52e call 0x11eb9ed0 */
  push32(0x11eba533u); f_11eb9ed0();
  /* 11eba533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba536 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba53a jne 0x11eba543 */
  if (!C.zf) goto L_11eba543;
  /* 11eba53c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11eba543:;
  /* 11eba543 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba546 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba549 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11eba54c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11eba54f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba552 push eax */
  push32((uint32_t)(EAX));
  /* 11eba553 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba556 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba557 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eba559 mov edx, dword ptr [0x11ee412c] */
  EDX = (r32((uint32_t)(0x11ee412c)));
  /* 11eba55f push edx */
  push32((uint32_t)(EDX));
  /* 11eba560 call dword ptr [0x11ee5338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee5338))), 0x11eba566u);
  /* 11eba566 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11eba569:;
  /* 11eba569 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba56d jne 0x11eba578 */
  if (!C.zf) goto L_11eba578;
  /* 11eba56f cmp dword ptr [0x11ee2970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ee2970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba576 jne 0x11eba57d */
  if (!C.zf) goto L_11eba57d;
L_11eba578:;
  /* 11eba578 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11eba57b jmp 0x11eba596 */
  goto L_11eba596;
L_11eba57d:;
  /* 11eba57d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11eba580 push eax */
  push32((uint32_t)(EAX));
  /* 11eba581 call 0x11eba170 */
  push32(0x11eba586u); f_11eba170();
  /* 11eba586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eba58b jne 0x11eba591 */
  if (!C.zf) goto L_11eba591;
  /* 11eba58d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11eba58f jmp 0x11eba596 */
  goto L_11eba596;
L_11eba591:;
  /* 11eba591 jmp 0x11eba3e6 */
  goto L_11eba3e6;
L_11eba596:;
  /* 11eba596 mov esp, ebp */
  ESP = (EBP);
  /* 11eba598 pop ebp */
  EBP = (pop32());
  /* 11eba599 ret  */
  ESPCHK(0x11eba3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5a0 @ 0x11eba5a0 (104 bytes, 38 insns) */
void f_11eba5a0(void) {
  FTRACE(0x11eba5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba5a1 mov ebp, esp */
  EBP = (ESP);
  /* 11eba5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba5a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba5a8 jne 0x11eba5ac */
  if (!C.zf) goto L_11eba5ac;
  /* 11eba5aa jmp 0x11eba604 */
  goto L_11eba604;
L_11eba5ac:;
  /* 11eba5ac push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba5ae call 0x11eb9e30 */
  push32(0x11eba5b3u); f_11eb9e30();
  /* 11eba5b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba5b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba5b9 push eax */
  push32((uint32_t)(EAX));
  /* 11eba5ba call 0x11eba730 */
  push32(0x11eba5bfu); f_11eba730();
  /* 11eba5bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba5c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11eba5c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba5c9 je 0x11eba5e7 */
  if (C.zf) goto L_11eba5e7;
  /* 11eba5cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba5ce push ecx */
  push32((uint32_t)(ECX));
  /* 11eba5cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba5d2 push edx */
  push32((uint32_t)(EDX));
  /* 11eba5d3 call 0x11eba7f0 */
  push32(0x11eba5d8u); f_11eba7f0();
  /* 11eba5d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba5db push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba5dd call 0x11eb9ed0 */
  push32(0x11eba5e2u); f_11eb9ed0();
  /* 11eba5e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba5e5 jmp 0x11eba604 */
  goto L_11eba604;
L_11eba5e7:;
  /* 11eba5e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba5e9 call 0x11eb9ed0 */
  push32(0x11eba5eeu); f_11eb9ed0();
  /* 11eba5ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba5f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11eba5f4 push eax */
  push32((uint32_t)(EAX));
  /* 11eba5f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eba5f7 mov ecx, dword ptr [0x11ee412c] */
  ECX = (r32((uint32_t)(0x11ee412c)));
  /* 11eba5fd push ecx */
  push32((uint32_t)(ECX));
  /* 11eba5fe call dword ptr [0x11ee535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee535c))), 0x11eba604u);
L_11eba604:;
  /* 11eba604 mov esp, ebp */
  ESP = (EBP);
  /* 11eba606 pop ebp */
  EBP = (pop32());
  /* 11eba607 ret  */
  ESPCHK(0x11eba5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a610 @ 0x11eba610 (116 bytes, 34 insns) */
void f_11eba610(void) {
  FTRACE(0x11eba610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba610 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba611 mov ebp, esp */
  EBP = (ESP);
  /* 11eba613 push ecx */
  push32((uint32_t)(ECX));
  /* 11eba614 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11eba61b push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba61d call 0x11eb9e30 */
  push32(0x11eba622u); f_11eb9e30();
  /* 11eba622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba625 call 0x11ebbd20 */
  push32(0x11eba62au); f_11ebbd20();
  /* 11eba62a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eba62c jge 0x11eba635 */
  if ((C.sf==C.of)) goto L_11eba635;
  /* 11eba62e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11eba635:;
  /* 11eba635 push 9 */
  push32((uint32_t)(0x9u));
  /* 11eba637 call 0x11eb9ed0 */
  push32(0x11eba63cu); f_11eb9ed0();
  /* 11eba63c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11eba63f push 0 */
  push32((uint32_t)(0x0u));
  /* 11eba641 push 0 */
  push32((uint32_t)(0x0u));
  /* 11eba643 mov eax, dword ptr [0x11ee412c] */
  EAX = (r32((uint32_t)(0x11ee412c)));
  /* 11eba648 push eax */
  push32((uint32_t)(EAX));
  /* 11eba649 call dword ptr [0x11ee537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee537c))), 0x11eba64fu);
  /* 11eba64f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11eba651 jne 0x11eba67d */
  if (!C.zf) goto L_11eba67d;
  /* 11eba653 call dword ptr [0x11ee53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11ee53b4))), 0x11eba659u);
  /* 11eba659 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11eba65c jne 0x11eba676 */
  if (!C.zf) goto L_11eba676;
  /* 11eba65e call 0x11ebe310 */
  push32(0x11eba663u); f_11ebe310();
  /* 11eba663 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11eba669 call 0x11ebe300 */
  push32(0x11eba66eu); f_11ebe300();
  /* 11eba66e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11eba674 jmp 0x11eba67d */
  goto L_11eba67d;
L_11eba676:;
  /* 11eba676 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11eba67d:;
  /* 11eba67d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11eba680 mov esp, ebp */
  ESP = (EBP);
  /* 11eba682 pop ebp */
  EBP = (pop32());
  /* 11eba683 ret  */
  ESPCHK(0x11eba610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x11eba690 (10 bytes, 5 insns) */
void f_11eba690(void) {
  FTRACE(0x11eba690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11eba690 push ebp */
  push32((uint32_t)(EBP));
  /* 11eba691 mov ebp, esp */
  EBP = (ESP);
  /* 11eba693 call 0x11eba610 */
  push32(0x11eba698u); f_11eba610();
  /* 11eba698 pop ebp */
  EBP = (pop32());
  /* 11eba699 ret  */
  ESPCHK(0x11eba690u, _esp0);
  ESP += 4; return;
}

